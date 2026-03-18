/*
 * XREFs of AlpcpCreateClientPort @ 0x140667114
 * Callers:
 *     NtSecureConnectPort @ 0x140664220 (NtSecureConnectPort.c)
 *     AlpcpConnectPort @ 0x140666D1C (AlpcpConnectPort.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     AlpcpSetOwnerProcessPort @ 0x140667554 (AlpcpSetOwnerProcessPort.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x1406675AC (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcInitializeHandleTable @ 0x140667810 (AlpcInitializeHandleTable.c)
 *     AlpcpInitializePort @ 0x140667864 (AlpcpInitializePort.c)
 *     AlpcpCreatePort @ 0x1406679E8 (AlpcpCreatePort.c)
 *     AlpcpCheckConnectionSecurity @ 0x140668294 (AlpcpCheckConnectionSecurity.c)
 *     ObReferenceObjectByNameEx @ 0x1406686C8 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 *     SeCreateClientSecurity @ 0x1407271D0 (SeCreateClientSecurity.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 *     AlpcpAllocateMessage @ 0x1407A49B4 (AlpcpAllocateMessage.c)
 *     AlpcpAllocateBlob @ 0x1407A73B0 (AlpcpAllocateBlob.c)
 *     AlpcpUnlockMessage @ 0x1407A7628 (AlpcpUnlockMessage.c)
 */

__int64 __fastcall AlpcpCreateClientPort(
        __int64 *a1,
        _QWORD *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char a11)
{
  struct _KPROCESS *v11; // rsi
  char PreviousMode; // r12
  __int64 result; // rax
  char *v14; // r14
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
  _QWORD *v30; // rbx
  int inserted; // ecx
  __int64 v32; // rax
  volatile signed __int64 *v33; // rdi
  PVOID v34; // [rsp+40h] [rbp-20h] BYREF
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  _QWORD *v36; // [rsp+50h] [rbp-10h]
  __int64 v37; // [rsp+58h] [rbp-8h] BYREF
  char v41; // [rsp+C0h] [rbp+60h]

  v11 = 0LL;
  Object = 0LL;
  v34 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v37 = 0LL;
  if ( a5 )
    result = ObReferenceObjectByNameEx(a5, 0LL, 1LL, AlpcPortObjectType, PreviousMode, 0LL, &v34);
  else
    result = ObReferenceObjectByName(a4, 0, 0, 1, (__int64)AlpcPortObjectType, PreviousMode, 0LL, (__int64)&v34);
  if ( (int)result >= 0 )
  {
    v14 = (char *)v34;
    v15 = *((unsigned int *)v34 + 104);
    if ( (*((_DWORD *)v34 + 104) & 6) != 2 )
    {
      v17 = -1073741758;
      goto LABEL_58;
    }
    if ( !a11 && (v15 & 0x1000) != 0 )
    {
      v33 = (volatile signed __int64 *)((char *)v34 + 352);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v34 + 352, 0LL);
      *((_DWORD *)v14 + 104) &= ~0x2000u;
      if ( (_InterlockedExchangeAdd64(v33, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v14 + 352);
      KeAbPostRelease((ULONG_PTR)(v14 + 352));
      v14 = (char *)v34;
    }
    if ( a9 || a8 )
    {
      v16 = (signed __int64 *)(v14 + 352);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v14 + 352), 0LL);
      if ( (*((_QWORD *)v14 + 3) & 1) == 0 )
        v11 = (struct _KPROCESS *)*((_QWORD *)v14 + 3);
      if ( v11 )
        ObfReferenceObjectWithTag(v11, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v16, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v16);
      KeAbPostRelease((ULONG_PTR)v16);
      if ( v11 )
      {
        v17 = AlpcpCheckConnectionSecurity(v11);
        ObfDereferenceObjectWithTag(v11, 0x63706C41u);
        if ( v17 >= 0 )
        {
          v14 = (char *)v34;
          goto LABEL_18;
        }
      }
      else
      {
        v17 = -1073741152;
      }
      v14 = (char *)v34;
      goto LABEL_58;
    }
LABEL_18:
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
        Blob = (_QWORD *)AlpcpAllocateBlob(AlpcConnectionType, 80LL, 1LL);
        v36 = Blob;
        if ( Blob )
        {
          *((_QWORD *)v20 + 2) = Blob;
          v24 = Blob + 9;
          Blob[9] = 0LL;
          Blob[1] = 0LL;
          *Blob = v14;
          Blob[2] = v20;
          ExAcquirePushLockExclusiveEx(*((_QWORD *)v14 + 2) - 16LL, 0LL);
          ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 352), 0LL);
          v25 = *((_QWORD *)v14 + 2) + 24LL;
          v26 = v36 + 3;
          v27 = *(__int64 ***)(*((_QWORD *)v14 + 2) + 32LL);
          if ( *v27 != (__int64 *)v25 )
            __fastfail(3u);
          *v26 = v25;
          v26[1] = (__int64)v27;
          *v27 = v26;
          *(_QWORD *)(v25 + 8) = v26;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v14 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v14 + 352);
          KeAbPostRelease((ULONG_PTR)(v14 + 352));
          v28 = *((_QWORD *)v14 + 2);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v28 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v28 - 16);
          KeAbPostRelease(v28 - 16);
          Message = AlpcInitializeHandleTable(v36 + 5);
          v20 = Object;
          if ( Message >= 0 )
          {
            v30 = v34;
            Message = AlpcpValidateAndSetPortAttributes((_DWORD)Object, (_DWORD)a7, (_DWORD)v34, a10, 0, v41, a11);
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
                  if ( (v30[32] & 0x1000000) != 0 )
                  {
                    v20[64] |= 0x1000000u;
                    *((_QWORD *)v20 + 34) = v30[34];
                  }
                  ObfReferenceObject(v20);
                  inserted = ObInsertObjectEx(v20, 0LL, 0, 0LL, (__int64)&v37);
                  if ( inserted >= 0 )
                  {
                    v32 = v37;
                    *((_QWORD *)v20 + 7) = v37;
                    *a1 = v32;
                    *a2 = v20;
                    return (unsigned int)inserted;
                  }
                  v21 = inserted;
LABEL_55:
                  ObfDereferenceObject(v20);
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
                  v30 = v34;
                  goto LABEL_38;
                }
              }
            }
          }
          v21 = Message;
          goto LABEL_55;
        }
        v21 = -1073741801;
      }
      ObfDereferenceObject(v14);
      goto LABEL_55;
    }
LABEL_58:
    ObfDereferenceObject(v14);
    return (unsigned int)v17;
  }
  return result;
}
