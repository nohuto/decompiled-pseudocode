/*
 * XREFs of EtwpNotifyDisallowedGuidChange @ 0x1409E448C
 * Callers:
 *     EtwpUpdateDisallowedGuids @ 0x1409EDE68 (EtwpUpdateDisallowedGuids.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x1402A7BC0 (PsGetCurrentThreadProcessId.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     EtwpGetEnableInfoIndex @ 0x1402E10FC (EtwpGetEnableInfoIndex.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwpBuildNotificationPacket @ 0x1406F2158 (EtwpBuildNotificationPacket.c)
 *     EtwpUnreferenceDataBlock @ 0x14078F0FC (EtwpUnreferenceDataBlock.c)
 *     EtwpUpdateRegEntryEnableMask @ 0x140790030 (EtwpUpdateRegEntryEnableMask.c)
 *     EtwpCalculateUpdateNotification @ 0x1407900EC (EtwpCalculateUpdateNotification.c)
 *     EtwpSendDataBlock @ 0x140790CF8 (EtwpSendDataBlock.c)
 *     EtwpFindGuidEntryByGuid @ 0x1407968D0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x140796B04 (EtwpUnreferenceGuidEntry.c)
 *     EtwpIsGuidAllowed @ 0x140797B54 (EtwpIsGuidAllowed.c)
 */

_QWORD *__fastcall EtwpNotifyDisallowedGuidChange(_DWORD *a1, __int64 a2, int a3)
{
  int *v3; // r15
  _QWORD *result; // rax
  __int64 v7; // rsi
  struct _KTHREAD *CurrentThread; // rdx
  ULONG_PTR v9; // r12
  int v10; // eax
  volatile signed __int32 *v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rbx
  _QWORD *v15; // r12
  _QWORD *v16; // rax
  char v17; // r14
  __int64 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // r10
  __int64 v22; // r10
  unsigned __int8 v23; // r15
  unsigned __int8 v24; // bl
  char updated; // al
  char v26; // bl
  struct _KTHREAD *v27; // rax
  int v28; // [rsp+40h] [rbp-40h] BYREF
  volatile signed __int32 *v29; // [rsp+48h] [rbp-38h] BYREF
  _QWORD *v30; // [rsp+50h] [rbp-30h]
  __int64 v31; // [rsp+58h] [rbp-28h]
  __int64 v32; // [rsp+60h] [rbp-20h]
  volatile signed __int32 *v33; // [rsp+68h] [rbp-18h]
  _QWORD *v34; // [rsp+70h] [rbp-10h]
  char v37; // [rsp+D8h] [rbp+58h]
  __int64 v38; // [rsp+D8h] [rbp+58h]

  v3 = (int *)a2;
  v28 = 0;
  v29 = 0LL;
  result = EtwpFindGuidEntryByGuid(*(_QWORD *)(a2 + 1096), a1, 0);
  v34 = result;
  v7 = (__int64)result;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = (ULONG_PTR)(result + 51);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(result + 51), 0LL);
    *(_QWORD *)(v7 + 416) = KeGetCurrentThread();
    v10 = EtwpBuildNotificationPacket(v7, 0LL, 0, &v29);
    v11 = v29;
    if ( !v10 )
    {
      *v29 = 3;
      *(_OWORD *)(v11 + 10) = *(_OWORD *)a1;
      *((_DWORD *)v11 + 9) = PsGetCurrentThreadProcessId();
      if ( EtwpIsGuidAllowed((__int64)v3, a1) != (a3 == 0) )
      {
        v12 = 0LL;
        v31 = 0LL;
        if ( !*(_QWORD *)(v7 + 400) )
        {
          v13 = *(_QWORD *)(v7 + 16);
          if ( v13 != v7 + 16 )
          {
            v12 = v13 - 16;
            v31 = v13 - 16;
          }
        }
        v14 = v7;
        v37 = 0;
        v32 = v7;
        while ( 1 )
        {
          v15 = *(_QWORD **)(v14 + 56);
          v30 = (_QWORD *)(v14 + 56);
          if ( v15 != (_QWORD *)(v14 + 56) )
          {
            v16 = (_QWORD *)(v14 + 56);
            v17 = v37;
            do
            {
              v18 = (__int64)v15;
              v15 = (_QWORD *)*v15;
              v19 = *(_QWORD *)(v18 + 40);
              if ( v19 )
              {
                if ( v17 )
                {
                  v19 = *(_QWORD *)(v19 + 400);
                  v20 = 103LL;
                }
                else
                {
                  v20 = 101LL;
                }
                v38 = v20;
                if ( !(a3 ? *(_DWORD *)(v19 + 96) == 0 : *(_BYTE *)(v20 + v18) == 0) )
                {
                  if ( EtwpGetEnableInfoIndex(v19, *v3, &v28) )
                  {
                    v23 = 1 << v28;
                    if ( 1 << v28 && (a3 || (v23 & *(_BYTE *)(v22 + v18)) != 0) )
                    {
                      v24 = *(_BYTE *)(v22 + v18);
                      EtwpUpdateRegEntryEnableMask(v18, a2, 1 << v28, 2, v17, a3);
                      v33 = v11;
                      updated = EtwpCalculateUpdateNotification(v18, v23, v24, *(_BYTE *)(v38 + v18), 2, v17, a3, &v29);
                      v11 = v29;
                      v26 = updated;
                      if ( v33 != v29 )
                      {
                        if ( v29 )
                        {
                          EtwpUnreferenceDataBlock(v33);
                        }
                        else
                        {
                          v11 = v33;
                          v29 = v33;
                        }
                      }
                      if ( v26 )
                        EtwpSendDataBlock(v18, (__int64)v11);
                    }
                    v3 = (int *)a2;
                  }
                  v16 = v30;
                }
              }
            }
            while ( v15 != v16 );
            v7 = (__int64)v34;
            v12 = v31;
            v14 = v32;
          }
          if ( v14 != v7 )
          {
            *(_QWORD *)(v14 + 416) = 0LL;
            ExReleasePushLockEx(v14 + 408, 0LL);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            v11 = v29;
          }
          if ( !v12 )
            break;
          v27 = KeGetCurrentThread();
          v14 = v12;
          v37 = 1;
          v32 = v12;
          --v27->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(v12 + 408, 0LL);
          *(_QWORD *)(v12 + 416) = KeGetCurrentThread();
          v12 = *(_QWORD *)(v12 + 16) - 16LL;
          v31 = v12;
          if ( v12 == v7 )
          {
            v12 = 0LL;
            v31 = 0LL;
          }
          v11 = v29;
        }
        v9 = v7 + 408;
      }
    }
    if ( v11 )
      EtwpUnreferenceDataBlock(v11);
    *(_QWORD *)(v7 + 416) = 0LL;
    ExReleasePushLockEx(v9, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return (_QWORD *)EtwpUnreferenceGuidEntry((volatile signed __int64 *)v7);
  }
  return result;
}
