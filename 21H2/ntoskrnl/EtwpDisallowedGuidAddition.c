/*
 * XREFs of EtwpDisallowedGuidAddition @ 0x140933DD4
 * Callers:
 *     EtwpUpdateDisallowedGuids @ 0x14094180C (EtwpUpdateDisallowedGuids.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x14029E930 (PsGetCurrentThreadProcessId.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     EtwpIsGuidAllowed @ 0x140639580 (EtwpIsGuidAllowed.c)
 *     EtwpBuildNotificationPacket @ 0x1406B89BC (EtwpBuildNotificationPacket.c)
 *     EtwpSendDataBlock @ 0x1406BB334 (EtwpSendDataBlock.c)
 *     EtwpCalculateUpdateNotification @ 0x1406BB810 (EtwpCalculateUpdateNotification.c)
 *     EtwpUnreferenceDataBlock @ 0x1406BBC64 (EtwpUnreferenceDataBlock.c)
 *     EtwpFindGuidEntryByGuid @ 0x1406DB110 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406ECBA8 (EtwpUnreferenceGuidEntry.c)
 */

_QWORD *__fastcall EtwpDisallowedGuidAddition(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // r15
  _QWORD *result; // rax
  __int64 v5; // rdi
  struct _KTHREAD *CurrentThread; // r8
  ULONG_PTR v7; // rbp
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rbp
  unsigned __int8 v13; // r13
  _QWORD *v14; // r14
  _QWORD *v15; // rax
  __int64 v16; // r11
  __int64 v17; // rdx
  unsigned __int8 v18; // r10
  unsigned __int8 v19; // cl
  unsigned __int8 v20; // dl
  volatile signed __int32 *v21; // r15
  char updated; // al
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  struct _KTHREAD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // [rsp+40h] [rbp-48h]
  char v32; // [rsp+A0h] [rbp+18h]
  volatile signed __int32 *v33; // [rsp+A8h] [rbp+20h] BYREF

  v33 = 0LL;
  v2 = (_DWORD *)a2;
  result = EtwpFindGuidEntryByGuid(*(_QWORD *)(a2 + 1080), a1, 0);
  v5 = (__int64)result;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = (ULONG_PTR)(result + 51);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(result + 51), 0LL);
    *(_QWORD *)(v5 + 416) = KeGetCurrentThread();
    v8 = EtwpBuildNotificationPacket(v5, 0LL, 0, &v33);
    v9 = (__int64)v33;
    if ( !v8 )
    {
      *v33 = 3;
      *(_OWORD *)(v9 + 40) = *(_OWORD *)a1;
      *(_DWORD *)(v9 + 36) = PsGetCurrentThreadProcessId();
      if ( !EtwpIsGuidAllowed((__int64)v2, a1) )
      {
        v10 = 0LL;
        if ( !*(_QWORD *)(v5 + 400) )
        {
          v11 = *(_QWORD *)(v5 + 16);
          if ( v11 != v5 + 16 )
            v10 = v11 - 16;
        }
        v12 = v5;
        v13 = 0;
        while ( 1 )
        {
          v14 = *(_QWORD **)(v12 + 56);
LABEL_27:
          while ( v14 != (_QWORD *)(v12 + 56) )
          {
            v15 = v14;
            v30 = (__int64)v14;
            v16 = (__int64)v14;
            v14 = (_QWORD *)*v14;
            v17 = v15[5];
            if ( v17 )
            {
              if ( v13 )
                v17 = *(_QWORD *)(v17 + 400);
              v18 = *((_BYTE *)v15 + 2 * v13 + 101);
              if ( v18 )
              {
                v19 = 0;
                while ( !*(_DWORD *)(32 * (v19 + 4LL) + v17) || *(unsigned __int16 *)(32LL * v19 + v17 + 134) != *v2 )
                {
                  if ( ++v19 >= 8u )
                    goto LABEL_27;
                }
                v20 = 1 << v19;
                if ( 1 << v19 && (v18 & v20) != 0 )
                {
                  v21 = (volatile signed __int32 *)v9;
                  *(_BYTE *)(v16 + 2LL * v13 + 101) = v18 & ~v20;
                  updated = EtwpCalculateUpdateNotification(v16, v20, v18, v18, 2, v13, 0, &v33);
                  v9 = (__int64)v33;
                  v32 = updated;
                  if ( v21 != v33 )
                  {
                    if ( v33 )
                    {
                      EtwpUnreferenceDataBlock(v21);
                      updated = v32;
                    }
                    else
                    {
                      v9 = (__int64)v21;
                      v33 = v21;
                    }
                  }
                  if ( updated )
                    EtwpSendDataBlock(v30, v9);
                  v2 = (_DWORD *)a2;
                }
              }
            }
          }
          if ( v12 != v5 )
          {
            *(_QWORD *)(v12 + 416) = 0LL;
            ExReleasePushLockEx(v12 + 408, 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v23, v24, v25);
            v9 = (__int64)v33;
          }
          if ( !v10 )
            break;
          v26 = KeGetCurrentThread();
          v13 = 1;
          v12 = v10;
          --v26->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(v10 + 408, 0LL);
          *(_QWORD *)(v10 + 416) = KeGetCurrentThread();
          v10 = *(_QWORD *)(v10 + 16) - 16LL;
          if ( v10 == v5 )
            v10 = 0LL;
          v9 = (__int64)v33;
        }
        v7 = v5 + 408;
      }
    }
    if ( v9 )
      EtwpUnreferenceDataBlock((volatile signed __int32 *)v9);
    *(_QWORD *)(v5 + 416) = 0LL;
    ExReleasePushLockEx(v7, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v27, v28, v29);
    return (_QWORD *)EtwpUnreferenceGuidEntry((volatile signed __int64 *)v5);
  }
  return result;
}
