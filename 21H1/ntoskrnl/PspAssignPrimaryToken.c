/*
 * XREFs of PspAssignPrimaryToken @ 0x1407A34C4
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     PspLockUnlockProcessExclusive @ 0x140313354 (PspLockUnlockProcessExclusive.c)
 *     PspLockProcessSecurityShared @ 0x140396950 (PspLockProcessSecurityShared.c)
 *     PspUnlockProcessSecurityShared @ 0x14057C348 (PspUnlockProcessSecurityShared.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14062B1C0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ObDereferenceDeviceMap @ 0x14065E844 (ObDereferenceDeviceMap.c)
 *     SeIsTokenAssignableToProcess @ 0x1406C7DCC (SeIsTokenAssignableToProcess.c)
 *     SeCheckPrivilegedObject @ 0x140779674 (SeCheckPrivilegedObject.c)
 *     SeExchangePrimaryToken @ 0x1407A36C8 (SeExchangePrimaryToken.c)
 */

NTSTATUS __fastcall PspAssignPrimaryToken(__int64 a1, KPROCESSOR_MODE a2, void *a3, void *a4)
{
  NTSTATUS result; // eax
  struct _DMA_ADAPTER *v8; // rsi
  NTSTATUS IsTokenAssignableToProcess; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rdi
  signed __int64 v13; // rax
  char v14[8]; // [rsp+40h] [rbp-20h] BYREF
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  PADAPTER_OBJECT v16; // [rsp+50h] [rbp-10h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-8h] BYREF

  Object = 0LL;
  v16 = 0LL;
  v14[0] = 0;
  result = ObReferenceObjectByHandle(a4, 1u, (POBJECT_TYPE)SeTokenObjectType, a2, (PVOID *)&v16, 0LL);
  if ( result >= 0 )
  {
    v8 = v16;
    IsTokenAssignableToProcess = SeIsTokenAssignableToProcess((__int64)v16, v14);
    if ( IsTokenAssignableToProcess >= 0 )
    {
      if ( v14[0] || SeCheckPrivilegedObject(SeAssignPrimaryTokenPrivilege, (int)a3, 512, a2) )
      {
        IsTokenAssignableToProcess = ObReferenceObjectByHandleWithTag(
                                       a3,
                                       0x200u,
                                       (POBJECT_TYPE)PsProcessType,
                                       a2,
                                       0x65537350u,
                                       &Object,
                                       0LL);
        if ( IsTokenAssignableToProcess >= 0 )
        {
          v12 = Object;
          DmaAdapter = 0LL;
          if ( (*((_DWORD *)Object + 280) & 0x8000) != 0 )
          {
            IsTokenAssignableToProcess = -1073741637;
          }
          else
          {
            PspLockProcessSecurityShared((__int64)Object, a1);
            if ( (v12[140] & 0x8000) != 0 )
            {
              IsTokenAssignableToProcess = -1073741637;
            }
            else
            {
              IsTokenAssignableToProcess = SeExchangePrimaryToken(v12, v8, &DmaAdapter);
              if ( IsTokenAssignableToProcess >= 0 )
              {
                v12 = Object;
                v13 = _InterlockedIncrement64(&PsNextSecurityDomain);
                v8 = v16;
                *((_QWORD *)Object + 316) = v13;
                v12[317] = v13;
              }
            }
            PspUnlockProcessSecurityShared((__int64)v12, a1);
          }
          if ( IsTokenAssignableToProcess >= 0 )
          {
            PspLockUnlockProcessExclusive((__int64)v12, a1, v10, v11);
            HalPutDmaAdapter(DmaAdapter);
            ObDereferenceDeviceMap((__int64)v12);
          }
          ObfDereferenceObjectWithTag(v12, 0x65537350u);
        }
      }
      else
      {
        IsTokenAssignableToProcess = -1073741727;
      }
    }
    HalPutDmaAdapter(v8);
    return IsTokenAssignableToProcess;
  }
  return result;
}
