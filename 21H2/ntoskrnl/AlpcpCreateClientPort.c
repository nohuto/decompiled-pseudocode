/*
 * XREFs of AlpcpCreateClientPort @ 0x1406CFCAC
 * Callers:
 *     NtSecureConnectPort @ 0x1406CD3F0 (NtSecureConnectPort.c)
 *     AlpcpConnectPort @ 0x1406CED1C (AlpcpConnectPort.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     SeCreateClientSecurity @ 0x140652B90 (SeCreateClientSecurity.c)
 *     AlpcpAllocateBlob @ 0x1406558AC (AlpcpAllocateBlob.c)
 *     ObReferenceObjectByName @ 0x140655F20 (ObReferenceObjectByName.c)
 *     ObReferenceObjectByNameEx @ 0x1406CDDFC (ObReferenceObjectByNameEx.c)
 *     AlpcpCheckConnectionSecurity @ 0x1406CE284 (AlpcpCheckConnectionSecurity.c)
 *     AlpcpSetOwnerProcessPort @ 0x1406D00EC (AlpcpSetOwnerProcessPort.c)
 *     AlpcpAllocateMessage @ 0x1406D0144 (AlpcpAllocateMessage.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x1406D0264 (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcInitializeHandleTable @ 0x1406D04A4 (AlpcInitializeHandleTable.c)
 *     AlpcpInitializePort @ 0x1406D04F8 (AlpcpInitializePort.c)
 *     AlpcpCreatePort @ 0x1406D0684 (AlpcpCreatePort.c)
 *     AlpcpUnlockMessage @ 0x1406D962C (AlpcpUnlockMessage.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 */

__int64 __fastcall AlpcpCreateClientPort(
        __int64 *a1,
        _QWORD *a2,
        int a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        void *a8,
        void *a9,
        __int64 a10,
        char a11)
{
  struct _KPROCESS *DmaOperations; // rsi
  char PreviousMode; // r12
  __int64 result; // rax
  PADAPTER_OBJECT v14; // r14
  __int64 v15; // rcx
  signed __int64 *v16; // rdi
  int v17; // edi
  __int64 v18; // r8
  char v19; // al
  _DWORD *v20; // rdi
  int v21; // esi
  _DWORD *v22; // rsi
  _QWORD *Blob; // rax
  ULONG_PTR *v24; // r13
  __int64 v25; // rax
  __int64 *v26; // rcx
  __int64 **v27; // rdx
  __int64 v28; // rdi
  NTSTATUS Message; // eax
  PADAPTER_OBJECT v30; // rbx
  int inserted; // ecx
  __int64 v32; // rax
  volatile signed __int64 *v33; // rdi
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-20h] BYREF
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  _QWORD *v36; // [rsp+50h] [rbp-10h]
  __int64 v37; // [rsp+58h] [rbp-8h] BYREF
  char v41; // [rsp+C0h] [rbp+60h]

  DmaOperations = 0LL;
  Object = 0LL;
  DmaAdapter = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v37 = 0LL;
  if ( a5 )
    result = ObReferenceObjectByNameEx(a5, 0LL, 1, (__int64)AlpcPortObjectType, PreviousMode, 0LL, &DmaAdapter);
  else
    result = ObReferenceObjectByName(a4, 0LL, 0LL, 1u, (__int64)AlpcPortObjectType, PreviousMode, 0LL, &DmaAdapter);
  if ( (int)result >= 0 )
  {
    v14 = DmaAdapter;
    v15 = *(unsigned int *)&DmaAdapter[26].Version;
    if ( (*(_DWORD *)&DmaAdapter[26].Version & 6) == 2 )
    {
      if ( !a11 && (v15 & 0x1000) != 0 )
      {
        v33 = (volatile signed __int64 *)&DmaAdapter[22];
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&DmaAdapter[22], 0LL);
        *(_DWORD *)&v14[26].Version &= ~0x2000u;
        if ( (_InterlockedExchangeAdd64(v33, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&v14[22]);
        KeAbPostRelease((ULONG_PTR)&v14[22]);
        v14 = DmaAdapter;
      }
      if ( !a9 && !a8 )
        goto LABEL_60;
      v16 = (signed __int64 *)&v14[22];
      ExAcquirePushLockSharedEx((ULONG_PTR)&v14[22], 0LL);
      if ( ((__int64)v14[1].DmaOperations & 1) == 0 )
        DmaOperations = (struct _KPROCESS *)v14[1].DmaOperations;
      if ( DmaOperations )
        ObfReferenceObjectWithTag(DmaOperations, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v16);
      KeAbPostRelease((ULONG_PTR)v16);
      if ( DmaOperations )
      {
        v17 = AlpcpCheckConnectionSecurity(DmaOperations, PreviousMode, a9, a8);
        ObfDereferenceObjectWithTag(DmaOperations, 0x63706C41u);
      }
      else
      {
        v17 = -1073741152;
      }
      v14 = DmaAdapter;
      if ( v17 >= 0 )
      {
LABEL_60:
        LOBYTE(v15) = PreviousMode;
        v17 = AlpcpCreatePort(v15, a6, &Object);
        if ( v17 >= 0 )
        {
          if ( !a7 || (v19 = 1, (*a7 & 0x40000) == 0) )
            v19 = 0;
          v20 = Object;
          LOBYTE(v18) = v19;
          v41 = v19;
          v21 = AlpcpInitializePort(Object, 2LL, v18);
          if ( v21 >= 0 )
          {
            v22 = v20 + 104;
            v20[104] |= 8u;
            Blob = AlpcpAllocateBlob((__int64)AlpcConnectionType, 80LL, 1);
            v36 = Blob;
            if ( Blob )
            {
              *((_QWORD *)v20 + 2) = Blob;
              v24 = Blob + 9;
              Blob[9] = 0LL;
              Blob[1] = 0LL;
              *Blob = v14;
              Blob[2] = v20;
              ExAcquirePushLockExclusiveEx(*(_QWORD *)&v14[1].Version - 16LL, 0LL);
              ExAcquirePushLockExclusiveEx((ULONG_PTR)&v14[22], 0LL);
              v25 = *(_QWORD *)&v14[1].Version + 24LL;
              v26 = v36 + 3;
              v27 = *(__int64 ***)(*(_QWORD *)&v14[1].Version + 32LL);
              if ( *v27 != (__int64 *)v25 )
                __fastfail(3u);
              *v26 = v25;
              v26[1] = (__int64)v27;
              *v27 = v26;
              *(_QWORD *)(v25 + 8) = v26;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v14[22], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(&v14[22]);
              KeAbPostRelease((ULONG_PTR)&v14[22]);
              v28 = *(_QWORD *)&v14[1].Version;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v28 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v28 - 16);
              KeAbPostRelease(v28 - 16);
              Message = AlpcInitializeHandleTable(v36 + 5);
              v20 = Object;
              if ( Message >= 0 )
              {
                v30 = DmaAdapter;
                Message = AlpcpValidateAndSetPortAttributes(
                            (_DWORD)Object,
                            (_DWORD)a7,
                            (_DWORD)DmaAdapter,
                            a10,
                            0,
                            v41,
                            a11);
                if ( Message >= 0 )
                {
                  Message = AlpcpAllocateMessage(v24, 48LL, 1LL);
                  if ( Message >= 0 )
                  {
                    ++*(_WORD *)(*v24 - 30);
                    *(_DWORD *)(*v24 + 264) |= 0x80000000;
                    AlpcpUnlockMessage(*v24);
                    if ( a11 )
                      *v22 |= 0x1000u;
                    if ( (a3 & 0x80000) != 0 )
                      *v22 |= 0x100u;
                    if ( *((_BYTE *)v20 + 268) == 1 )
                    {
                      *v22 |= 0x400u;
LABEL_38:
                      AlpcpSetOwnerProcessPort(v20, a7);
                      if ( (*(_DWORD *)&v30[16].Version & 0x1000000) != 0 )
                      {
                        v20[64] |= 0x1000000u;
                        *((_QWORD *)v20 + 34) = *(_QWORD *)&v30[17].Version;
                      }
                      ObfReferenceObject(v20);
                      inserted = ObInsertObjectEx((PADAPTER_OBJECT)v20, 0LL, 0, 0LL, (__int64)&v37);
                      if ( inserted >= 0 )
                      {
                        v32 = v37;
                        *((_QWORD *)v20 + 7) = v37;
                        *a1 = v32;
                        *a2 = v20;
                        return (unsigned int)inserted;
                      }
                      v21 = inserted;
LABEL_57:
                      HalPutDmaAdapter((PADAPTER_OBJECT)v20);
                      return (unsigned int)v21;
                    }
                    v20 = Object;
                    Message = SeCreateClientSecurity(
                                KeGetCurrentThread(),
                                (PSECURITY_QUALITY_OF_SERVICE)((char *)Object + 260),
                                0,
                                (PSECURITY_CLIENT_CONTEXT)((char *)Object + 64));
                    if ( Message >= 0 )
                    {
                      v30 = DmaAdapter;
                      goto LABEL_38;
                    }
                  }
                }
              }
              v21 = Message;
              goto LABEL_57;
            }
            v21 = -1073741801;
          }
          HalPutDmaAdapter(v14);
          goto LABEL_57;
        }
      }
    }
    else
    {
      v17 = -1073741758;
    }
    HalPutDmaAdapter(v14);
    return (unsigned int)v17;
  }
  return result;
}
