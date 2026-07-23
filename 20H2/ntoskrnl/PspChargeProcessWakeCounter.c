/*
 * XREFs of PspChargeProcessWakeCounter @ 0x1405EE0B0
 * Callers:
 *     PsReleaseProcessWakeCounter @ 0x1405E59A0 (PsReleaseProcessWakeCounter.c)
 *     AlpcpSendMessage @ 0x1405EBDA0 (AlpcpSendMessage.c)
 *     PsChargeProcessWakeCounter @ 0x14071BC10 (PsChargeProcessWakeCounter.c)
 *     PspAdjustKeepAliveCountProcess @ 0x14090A420 (PspAdjustKeepAliveCountProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140217F10 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     ZwUpdateWnfStateData @ 0x1403FBB50 (ZwUpdateWnfStateData.c)
 *     PspChargeJobWakeCounter @ 0x140665398 (PspChargeJobWakeCounter.c)
 *     PspCheckConditionalWakeCharge @ 0x1406C4E90 (PspCheckConditionalWakeCharge.c)
 *     EtwTraceWakeCounter @ 0x1409390D8 (EtwTraceWakeCounter.c)
 *     EtwTraceWakeEvent @ 0x140939194 (EtwTraceWakeEvent.c)
 */

unsigned __int64 __fastcall PspChargeProcessWakeCounter(
        __int64 Object,
        int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        int *a7)
{
  char v7; // r14
  int v9; // r13d
  char v10; // r12
  bool v11; // r15
  _DWORD *v12; // r10
  bool v13; // r9
  int v14; // eax
  bool v15; // cl
  unsigned int v16; // r13d
  volatile signed __int32 *v17; // rcx
  int v18; // ecx
  int v19; // edx
  int v20; // edi
  unsigned int v21; // r14d
  int v22; // edi
  __int64 v23; // r15
  int v25; // edx
  _KPROCESS *Process; // rax
  int v27; // r9d
  char v28; // [rsp+40h] [rbp-78h]
  int v30; // [rsp+48h] [rbp-70h]
  int v31; // [rsp+4Ch] [rbp-6Ch]
  _KPROCESS *v32; // [rsp+50h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-60h]
  PVOID Objecta; // [rsp+60h] [rbp-58h]
  bool v35; // [rsp+C0h] [rbp+8h]

  v7 = 0;
  v31 = 1;
  v30 = 0;
  v9 = a2 & 2;
  v28 = 0;
  CurrentThread = KeGetCurrentThread();
  v10 = 0;
  v11 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(Object + 1080, 0LL);
  v12 = *(_DWORD **)(Object + 1296);
  v13 = v9 != 0;
  v35 = v9 != 0;
  Objecta = v12;
  if ( !v12 || (v14 = v12[330], v15 = v9 != 0, v35 = v9 != 0, (v14 & 0x1000) == 0) )
  {
    v16 = a3;
    goto LABEL_4;
  }
  if ( v9 )
  {
    if ( (v14 & 0x800000) != 0 )
    {
      v35 = v9 != 0;
      if ( a5 > 0 )
      {
LABEL_31:
        v16 = a3;
        goto LABEL_12;
      }
    }
  }
  v25 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  v32 = Process;
  if ( (a2 & 1) != 0 )
  {
    v35 = v9 != 0;
    if ( !(unsigned __int8)PspCheckConditionalWakeCharge(Process, v12, a3) )
      goto LABEL_31;
    v15 = v9 != 0;
    v25 = a2;
    Process = v32;
  }
  if ( (Process[1].DirectoryTableBase & 0x40) != 0 || !v9 )
  {
    v16 = a3;
    v13 = 0;
    v35 = 0;
  }
  else
  {
    v31 = 5;
    v16 = 7;
    if ( v25 < 0 )
      v31 = 7;
    v13 = v15;
    v35 = v15;
  }
  v7 = 1;
LABEL_4:
  if ( !a6 || v7 || *(_QWORD *)(Object + 2464) )
  {
    if ( v13 )
    {
      v17 = (volatile signed __int32 *)(Object + 2508);
      v16 = 7;
    }
    else
    {
      v17 = (volatile signed __int32 *)(Object + 4 * ((int)a3 + 618LL));
    }
    v18 = _InterlockedExchangeAdd(v17, a5) + a5;
    v10 = 1;
    v19 = v18 & 0x7FFFFFFF;
    v11 = v18 < 0;
    if ( v18 >= 0 )
      v19 = v18;
    v30 = v19;
    if ( !v13 )
    {
      v30 = v19;
      if ( *(_QWORD *)(Object + 2464) )
      {
        v27 = 1 << a3;
        if ( a5 <= 0 )
        {
          if ( (v27 & *(_DWORD *)(Object + 2504)) != 0 && !v19 )
          {
            v28 = 1;
            v30 = 0;
            goto LABEL_12;
          }
        }
        else if ( (v27 & *(_DWORD *)(Object + 2500)) != 0 && v19 == 1 )
        {
          v28 = 1;
          v30 = 1;
          goto LABEL_12;
        }
        v28 = 0;
        v30 = v19;
      }
    }
  }
LABEL_12:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(Object + 1080), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(Object + 1080));
  KeAbPostRelease(Object + 1080);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v28 )
  {
    ZwUpdateWnfStateData((PCWNF_STATE_NAME)(Object + 2464), 0LL, 0, 0LL, 0LL, 0, 0);
    v20 = v30;
    if ( (xmmword_140CFC490 & 0x400) != 0 && v30 == 1 )
      EtwTraceWakeEvent(Object, a3);
  }
  else
  {
    v20 = v30;
  }
  if ( a7 )
    *a7 = v20;
  if ( v11 || v7 )
  {
    v23 = a4;
    v21 = a3;
    v22 = a5;
    PspChargeJobWakeCounter(Objecta, v31, Object, a4);
  }
  else
  {
    v21 = a3;
    v22 = a5;
    v23 = a4;
  }
  if ( !v10 )
    return 0LL;
  if ( (xmmword_140CFC490 & 0x2000) != 0 && !v35 )
    EtwTraceWakeCounter(Object, v21, v22, Object, v23);
  if ( !a6 )
    return 0LL;
  if ( a5 <= 0 )
  {
    ObDereferenceObjectDeferDeleteWithTag((PVOID)Object, 0x6B577350u);
    return 0LL;
  }
  ObfReferenceObjectWithTag((PVOID)Object, 0x6B577350u);
  return Object | v16;
}
