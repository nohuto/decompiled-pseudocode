/*
 * XREFs of EtwpDisallowedGuidRemoval @ 0x140933EEC
 * Callers:
 *     EtwpUpdateDisallowedGuids @ 0x14094163C (EtwpUpdateDisallowedGuids.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentThreadProcessId @ 0x1402ED5E0 (PsGetCurrentThreadProcessId.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405EB9B0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405FD448 (EtwpUnreferenceGuidEntry.c)
 *     EtwpIsGuidAllowed @ 0x140644770 (EtwpIsGuidAllowed.c)
 *     EtwpBuildNotificationPacket @ 0x1406E16DC (EtwpBuildNotificationPacket.c)
 *     EtwpSendDataBlock @ 0x1406E4054 (EtwpSendDataBlock.c)
 *     EtwpCalculateUpdateNotification @ 0x1406E4530 (EtwpCalculateUpdateNotification.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x1406E46CC (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpUnreferenceDataBlock @ 0x1406E4984 (EtwpUnreferenceDataBlock.c)
 */

__int64 *__fastcall EtwpDisallowedGuidRemoval(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // r12
  __int64 *result; // rax
  __int64 *v5; // rsi
  struct _KTHREAD *CurrentThread; // r8
  ULONG_PTR v7; // rbp
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 *v11; // rcx
  __int64 *v12; // r15
  unsigned __int8 v13; // r13
  __int64 *v14; // r14
  int v15; // esi
  __int64 *v16; // rax
  __int64 *v17; // r11
  __int64 v18; // r10
  __int64 v19; // rcx
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // bl
  unsigned __int8 v22; // r8
  __int64 v23; // rbx
  volatile signed __int32 *v24; // r12
  char updated; // al
  struct _KTHREAD *v26; // rax
  __int64 *v27; // [rsp+40h] [rbp-48h]
  int v29; // [rsp+A0h] [rbp+18h]
  __int64 v30; // [rsp+A0h] [rbp+18h]
  char v31; // [rsp+A0h] [rbp+18h]
  volatile signed __int32 *v32; // [rsp+A8h] [rbp+20h] BYREF

  v32 = 0LL;
  v2 = (_DWORD *)a2;
  LOBYTE(v29) = 0;
  result = EtwpFindGuidEntryByGuid(*(_QWORD *)(a2 + 1080), a1, 0);
  v27 = result;
  v5 = result;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = (ULONG_PTR)(result + 51);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(result + 51), 0LL);
    v5[52] = (__int64)KeGetCurrentThread();
    v8 = EtwpBuildNotificationPacket((__int64)v5, 0LL, 0, &v32);
    v9 = (__int64)v32;
    if ( !v8 )
    {
      *v32 = 3;
      *(_OWORD *)(v9 + 40) = *(_OWORD *)a1;
      *(_DWORD *)(v9 + 36) = PsGetCurrentThreadProcessId();
      if ( EtwpIsGuidAllowed((__int64)v2, a1) )
      {
        v10 = 0LL;
        if ( !v5[50] )
        {
          v11 = (__int64 *)v5[2];
          if ( v11 != v5 + 2 )
            v10 = (__int64)(v11 - 2);
        }
        v12 = v5;
        v13 = 0;
        while ( 1 )
        {
          v14 = (__int64 *)v12[7];
          if ( v14 != v12 + 7 )
          {
            v15 = v29;
            v16 = v12 + 7;
            do
            {
              v17 = v14;
              v30 = (__int64)v14;
              v18 = (__int64)v14;
              v14 = (__int64 *)*v14;
              v19 = v17[5];
              if ( v19 )
              {
                if ( v13 )
                  v19 = *(_QWORD *)(v19 + 400);
                if ( *(_DWORD *)(v19 + 96) )
                {
                  v20 = 0;
                  while ( !*(_DWORD *)(32 * (v20 + 4LL) + v19) || *(unsigned __int16 *)(32LL * v20 + v19 + 134) != *v2 )
                  {
                    if ( ++v20 >= 8u )
                      goto LABEL_20;
                  }
                  v15 = 1;
                  LOBYTE(v15) = 1 << v20;
LABEL_20:
                  if ( (_BYTE)v15 )
                  {
                    v21 = *((_BYTE *)v17 + 2 * v13 + 101);
                    EtwpUpdateRegEntryEnableMask(v18, (__int64)v2, v15, 2, v13, 1);
                    v22 = v21;
                    v23 = v30;
                    v24 = (volatile signed __int32 *)v9;
                    updated = EtwpCalculateUpdateNotification(v30, v15, v22, 0, 2, v13, 1, &v32);
                    v9 = (__int64)v32;
                    v31 = updated;
                    if ( v24 != v32 )
                    {
                      if ( v32 )
                      {
                        EtwpUnreferenceDataBlock(v24);
                        updated = v31;
                      }
                      else
                      {
                        v9 = (__int64)v24;
                        v32 = v24;
                      }
                    }
                    if ( updated )
                      EtwpSendDataBlock(v23, v9);
                    v2 = (_DWORD *)a2;
                  }
                  v16 = v12 + 7;
                }
              }
            }
            while ( v14 != v16 );
            v29 = v15;
            v5 = v27;
          }
          if ( v12 != v5 )
          {
            v12[52] = 0LL;
            ExReleasePushLockEx((ULONG_PTR)(v12 + 51), 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            v9 = (__int64)v32;
          }
          if ( !v10 )
            break;
          v26 = KeGetCurrentThread();
          v13 = 1;
          v12 = (__int64 *)v10;
          --v26->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(v10 + 408, 0LL);
          *(_QWORD *)(v10 + 416) = KeGetCurrentThread();
          v10 = *(_QWORD *)(v10 + 16) - 16LL;
          if ( (__int64 *)v10 == v5 )
            v10 = 0LL;
          v9 = (__int64)v32;
        }
        v7 = (ULONG_PTR)(v5 + 51);
      }
    }
    if ( v9 )
      EtwpUnreferenceDataBlock((volatile signed __int32 *)v9);
    v5[52] = 0LL;
    ExReleasePushLockEx(v7, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (__int64 *)EtwpUnreferenceGuidEntry(v5);
  }
  return result;
}
