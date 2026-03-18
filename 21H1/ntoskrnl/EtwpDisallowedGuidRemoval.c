/*
 * XREFs of EtwpDisallowedGuidRemoval @ 0x14092F63C
 * Callers:
 *     EtwpUpdateDisallowedGuids @ 0x14093CE2C (EtwpUpdateDisallowedGuids.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentThreadProcessId @ 0x14025ECF0 (PsGetCurrentThreadProcessId.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     EtwpIsGuidAllowed @ 0x1405F2794 (EtwpIsGuidAllowed.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405F6130 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405F7508 (EtwpUnreferenceGuidEntry.c)
 *     EtwpBuildNotificationPacket @ 0x14067D2E8 (EtwpBuildNotificationPacket.c)
 *     EtwpSendDataBlock @ 0x14067F880 (EtwpSendDataBlock.c)
 *     EtwpCalculateUpdateNotification @ 0x14067FD5C (EtwpCalculateUpdateNotification.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x14067FEF8 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpUnreferenceDataBlock @ 0x1406801B0 (EtwpUnreferenceDataBlock.c)
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
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _KTHREAD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 *v33; // [rsp+40h] [rbp-48h]
  int v35; // [rsp+A0h] [rbp+18h]
  __int64 v36; // [rsp+A0h] [rbp+18h]
  char v37; // [rsp+A0h] [rbp+18h]
  volatile signed __int32 *v38; // [rsp+A8h] [rbp+20h] BYREF

  v38 = 0LL;
  v2 = (_DWORD *)a2;
  LOBYTE(v35) = 0;
  result = EtwpFindGuidEntryByGuid(*(_QWORD *)(a2 + 1112), a1, 0);
  v33 = result;
  v5 = result;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = (ULONG_PTR)(result + 51);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(result + 51), 0LL);
    v5[52] = (__int64)KeGetCurrentThread();
    v8 = EtwpBuildNotificationPacket((__int64)v5, 0LL, 0, &v38);
    v9 = (__int64)v38;
    if ( !v8 )
    {
      *v38 = 3;
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
            v15 = v35;
            v16 = v12 + 7;
            do
            {
              v17 = v14;
              v36 = (__int64)v14;
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
                    v23 = v36;
                    v24 = (volatile signed __int32 *)v9;
                    updated = EtwpCalculateUpdateNotification(v36, v15, v22, 0, 2, v13, 1, &v38);
                    v9 = (__int64)v38;
                    v37 = updated;
                    if ( v24 != v38 )
                    {
                      if ( v38 )
                      {
                        EtwpUnreferenceDataBlock(v24);
                        updated = v37;
                      }
                      else
                      {
                        v9 = (__int64)v24;
                        v38 = v24;
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
            v35 = v15;
            v5 = v33;
          }
          if ( v12 != v5 )
          {
            v12[52] = 0LL;
            ExReleasePushLockEx((ULONG_PTR)(v12 + 51), 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v26, v27, v28);
            v9 = (__int64)v38;
          }
          if ( !v10 )
            break;
          v29 = KeGetCurrentThread();
          v13 = 1;
          v12 = (__int64 *)v10;
          --v29->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(v10 + 408, 0LL);
          *(_QWORD *)(v10 + 416) = KeGetCurrentThread();
          v10 = *(_QWORD *)(v10 + 16) - 16LL;
          if ( (__int64 *)v10 == v5 )
            v10 = 0LL;
          v9 = (__int64)v38;
        }
        v7 = (ULONG_PTR)(v5 + 51);
      }
    }
    if ( v9 )
      EtwpUnreferenceDataBlock((volatile signed __int32 *)v9);
    v5[52] = 0LL;
    ExReleasePushLockEx(v7, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v30, v31, v32);
    return (__int64 *)EtwpUnreferenceGuidEntry(v5);
  }
  return result;
}
