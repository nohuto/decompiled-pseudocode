/*
 * XREFs of AlpcpCreateClientPort @ 0x140648EB8
 * Callers:
 *     NtSecureConnectPort @ 0x140645D70 (NtSecureConnectPort.c)
 *     AlpcpConnectPort @ 0x140647DB4 (AlpcpConnectPort.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 *     SeCreateClientSecurity @ 0x14060A050 (SeCreateClientSecurity.c)
 *     AlpcpUnlockMessage @ 0x14060A7C4 (AlpcpUnlockMessage.c)
 *     AlpcpAllocateBlob @ 0x140611EA0 (AlpcpAllocateBlob.c)
 *     ObReferenceObjectByName @ 0x140613480 (ObReferenceObjectByName.c)
 *     AlpcpSetOwnerProcessPort @ 0x1406492F4 (AlpcpSetOwnerProcessPort.c)
 *     AlpcpAllocateMessage @ 0x14064934C (AlpcpAllocateMessage.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x14064946C (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcInitializeHandleTable @ 0x140649C64 (AlpcInitializeHandleTable.c)
 *     AlpcpInitializePort @ 0x140649CB8 (AlpcpInitializePort.c)
 *     AlpcpCreatePort @ 0x140649E44 (AlpcpCreatePort.c)
 *     AlpcpCheckConnectionSecurity @ 0x14064B658 (AlpcpCheckConnectionSecurity.c)
 *     ObReferenceObjectByNameEx @ 0x14064B8F0 (ObReferenceObjectByNameEx.c)
 */

__int64 __fastcall AlpcpCreateClientPort(
        __int64 *a1,
        _QWORD *a2,
        int a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8,
        __int64 a9,
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
  char v18; // al
  _DWORD *v19; // rdi
  int v20; // esi
  _DWORD *v21; // rsi
  _QWORD *Blob; // rax
  ULONG_PTR *v23; // r13
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 **v26; // rdx
  __int64 v27; // rdi
  NTSTATUS Message; // eax
  PADAPTER_OBJECT v29; // rbx
  int inserted; // ecx
  __int64 v31; // rax
  volatile signed __int64 *v32; // rdi
  PADAPTER_OBJECT DmaAdapter; // [rsp+40h] [rbp-20h] BYREF
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  _QWORD *v35; // [rsp+50h] [rbp-10h]
  __int64 v36; // [rsp+58h] [rbp-8h] BYREF
  char v40; // [rsp+C0h] [rbp+60h]

  DmaOperations = 0LL;
  Object = 0LL;
  DmaAdapter = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v36 = 0LL;
  if ( a5 )
    result = ObReferenceObjectByNameEx(a5, a2, 1LL, AlpcPortObjectType);
  else
    result = ObReferenceObjectByName(a4, 0, 0LL, 1u, (__int64)AlpcPortObjectType, PreviousMode, 0LL, &DmaAdapter);
  if ( (int)result >= 0 )
  {
    v14 = DmaAdapter;
    v15 = *(unsigned int *)&DmaAdapter[26].Version;
    if ( (*(_DWORD *)&DmaAdapter[26].Version & 6) == 2 )
    {
      if ( !a11 && (v15 & 0x1000) != 0 )
      {
        v32 = (volatile signed __int64 *)&DmaAdapter[22];
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&DmaAdapter[22], 0LL);
        *(_DWORD *)&v14[26].Version &= ~0x2000u;
        if ( (_InterlockedExchangeAdd64(v32, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
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
        v17 = AlpcpCheckConnectionSecurity(DmaOperations);
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
          if ( !a7 || (v18 = 1, (*a7 & 0x40000) == 0) )
            v18 = 0;
          v19 = Object;
          v40 = v18;
          v20 = AlpcpInitializePort(Object, 2LL);
          if ( v20 >= 0 )
          {
            v21 = v19 + 104;
            v19[104] |= 8u;
            Blob = AlpcpAllocateBlob((__int64)AlpcConnectionType, 72LL, 1);
            v35 = Blob;
            if ( Blob )
            {
              *((_QWORD *)v19 + 2) = Blob;
              v23 = Blob + 8;
              Blob[8] = 0LL;
              Blob[1] = 0LL;
              *Blob = v14;
              Blob[2] = v19;
              ExAcquirePushLockExclusiveEx(*(_QWORD *)&v14[1].Version - 16LL, 0LL);
              ExAcquirePushLockExclusiveEx((ULONG_PTR)&v14[22], 0LL);
              v24 = *(_QWORD *)&v14[1].Version + 24LL;
              v25 = v35 + 3;
              v26 = *(__int64 ***)(*(_QWORD *)&v14[1].Version + 32LL);
              if ( *v26 != (__int64 *)v24 )
                __fastfail(3u);
              *v25 = v24;
              v25[1] = (__int64)v26;
              *v26 = v25;
              *(_QWORD *)(v24 + 8) = v25;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v14[22], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(&v14[22]);
              KeAbPostRelease((ULONG_PTR)&v14[22]);
              v27 = *(_QWORD *)&v14[1].Version;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v27 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v27 - 16);
              KeAbPostRelease(v27 - 16);
              Message = AlpcInitializeHandleTable(v35 + 5);
              v19 = Object;
              if ( Message >= 0 )
              {
                v29 = DmaAdapter;
                Message = AlpcpValidateAndSetPortAttributes(
                            (_DWORD)Object,
                            (_DWORD)a7,
                            (_DWORD)DmaAdapter,
                            a10,
                            0,
                            v40,
                            a11);
                if ( Message >= 0 )
                {
                  Message = AlpcpAllocateMessage(v23, 48LL, 1LL);
                  if ( Message >= 0 )
                  {
                    ++*(_WORD *)(*v23 - 30);
                    *(_DWORD *)(*v23 + 264) |= 0x80000000;
                    AlpcpUnlockMessage(*v23);
                    if ( a11 )
                      *v21 |= 0x1000u;
                    if ( (a3 & 0x80000) != 0 )
                      *v21 |= 0x100u;
                    if ( *((_BYTE *)v19 + 268) == 1 )
                    {
                      *v21 |= 0x400u;
LABEL_38:
                      AlpcpSetOwnerProcessPort(v19, a7);
                      if ( (*(_DWORD *)&v29[16].Version & 0x1000000) != 0 )
                      {
                        v19[64] |= 0x1000000u;
                        *((_QWORD *)v19 + 34) = *(_QWORD *)&v29[17].Version;
                      }
                      ObfReferenceObject(v19);
                      inserted = ObInsertObjectEx((PADAPTER_OBJECT)v19, 0LL, 0x1F0001u, 0, 0, 0LL, &v36);
                      if ( inserted >= 0 )
                      {
                        v31 = v36;
                        *((_QWORD *)v19 + 7) = v36;
                        *a1 = v31;
                        *a2 = v19;
                        return (unsigned int)inserted;
                      }
                      v20 = inserted;
LABEL_57:
                      HalPutDmaAdapter((PADAPTER_OBJECT)v19);
                      return (unsigned int)v20;
                    }
                    v19 = Object;
                    Message = SeCreateClientSecurity(
                                KeGetCurrentThread(),
                                (PSECURITY_QUALITY_OF_SERVICE)((char *)Object + 260),
                                0,
                                (PSECURITY_CLIENT_CONTEXT)((char *)Object + 64));
                    if ( Message >= 0 )
                    {
                      v29 = DmaAdapter;
                      goto LABEL_38;
                    }
                  }
                }
              }
              v20 = Message;
              goto LABEL_57;
            }
            v20 = -1073741801;
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
