/*
 * XREFs of NtSetInformationObject @ 0x1406C12A0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionObjectById @ 0x14025B084 (MmGetSessionObjectById.c)
 *     ObpUnlockDirectory @ 0x14025B2D4 (ObpUnlockDirectory.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PsGetCurrentProcessSessionId @ 0x1402D7070 (PsGetCurrentProcessSessionId.c)
 *     ObpLockDirectoryExclusive @ 0x1402FCD98 (ObpLockDirectoryExclusive.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ObSetHandleAttributes @ 0x1406C1510 (ObSetHandleAttributes.c)
 */

NTSTATUS __cdecl NtSetInformationObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength)
{
  int v5; // edi
  __int32 v6; // edx
  char v7; // cl
  __int32 v9; // edx
  KPROCESSOR_MODE PreviousMode; // bl
  unsigned int CurrentProcessSessionId; // eax
  struct _DMA_ADAPTER *SessionObjectById; // rsi
  struct _DMA_ADAPTER *v13; // rbx
  __int128 *v14; // rdx
  KPROCESSOR_MODE v15; // bl
  PVOID Object; // [rsp+38h] [rbp-80h] BYREF
  PVOID v17; // [rsp+40h] [rbp-78h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+48h] [rbp-70h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v19; // [rsp+50h] [rbp-68h] BYREF
  __int128 v20; // [rsp+60h] [rbp-58h] BYREF
  __int64 v21; // [rsp+70h] [rbp-48h]
  __int64 v22; // [rsp+78h] [rbp-40h]
  int v23; // [rsp+80h] [rbp-38h]
  int v24; // [rsp+84h] [rbp-34h]
  __int128 v25; // [rsp+88h] [rbp-30h] BYREF
  __int64 v26; // [rsp+98h] [rbp-20h]
  __int64 v27; // [rsp+A0h] [rbp-18h]
  int v28; // [rsp+A8h] [rbp-10h]
  int v29; // [rsp+ACh] [rbp-Ch]
  __int16 v30; // [rsp+C8h] [rbp+10h] BYREF

  v30 = 0;
  v5 = -1073741821;
  v6 = ObjectInformationClass - 4;
  if ( v6 )
  {
    v9 = v6 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
        return v5;
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        HandleInformation = 0LL;
        Object = 0LL;
        v5 = ObReferenceObjectByHandle(Handle, 0, ObpDirectoryObjectType, PreviousMode, &Object, &HandleInformation);
        if ( v5 >= 0 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          SessionObjectById = (struct _DMA_ADAPTER *)MmGetSessionObjectById(CurrentProcessSessionId);
          v13 = (struct _DMA_ADAPTER *)Object;
          if ( !SessionObjectById )
          {
            v5 = -1073740715;
            goto LABEL_18;
          }
          v21 = 0LL;
          v22 = 0LL;
          v24 = 0;
          v20 = 0LL;
          v23 = -60876;
          ObpLockDirectoryExclusive((__int64)&v20, Object);
          if ( v13[20].DmaOperations )
          {
            v5 = -1073741790;
            HalPutDmaAdapter(SessionObjectById);
          }
          else
          {
            v13[20].DmaOperations = (_DMA_OPERATIONS *)SessionObjectById;
          }
          v14 = &v20;
LABEL_17:
          ObpUnlockDirectory((__int64)v13, (__int64)v14);
LABEL_18:
          HalPutDmaAdapter(v13);
        }
        return v5;
      }
    }
    else
    {
      v15 = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, v15) )
      {
        v19 = 0LL;
        v17 = 0LL;
        v5 = ObReferenceObjectByHandle(Handle, 0, ObpDirectoryObjectType, v15, &v17, &v19);
        if ( v5 < 0 )
          return v5;
        v26 = 0LL;
        v27 = 0LL;
        v29 = 0;
        v25 = 0LL;
        v28 = -60876;
        v13 = (struct _DMA_ADAPTER *)v17;
        ObpLockDirectoryExclusive((__int64)&v25, v17);
        *(_DWORD *)(&v13[21].Size + 1) = PsGetCurrentProcessSessionId();
        v14 = &v25;
        goto LABEL_17;
      }
    }
    return -1073741727;
  }
  if ( ObjectInformationLength == 2 )
  {
    v7 = KeGetCurrentThread()->PreviousMode;
    if ( v7
      && ((unsigned __int64)ObjectInformation + 2 > 0x7FFFFFFF0000LL || (char *)ObjectInformation + 2 < ObjectInformation) )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
    v30 = *(_WORD *)ObjectInformation;
    LOBYTE(ObjectInformation) = v7;
    return ObSetHandleAttributes(Handle, &v30, ObjectInformation);
  }
  return -1073741820;
}
