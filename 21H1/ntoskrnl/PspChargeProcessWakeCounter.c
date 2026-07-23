/*
 * XREFs of PspChargeProcessWakeCounter @ 0x14060F300
 * Callers:
 *     AlpcpSendMessage @ 0x14060D070 (AlpcpSendMessage.c)
 *     PsReleaseProcessWakeCounter @ 0x14064B800 (PsReleaseProcessWakeCounter.c)
 *     PsChargeProcessWakeCounter @ 0x1406E8CD0 (PsChargeProcessWakeCounter.c)
 *     PspAdjustKeepAliveCountProcess @ 0x140903520 (PspAdjustKeepAliveCountProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14024CFC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     ZwUpdateWnfStateData @ 0x1403F5CF0 (ZwUpdateWnfStateData.c)
 *     PspChargeJobWakeCounter @ 0x140612060 (PspChargeJobWakeCounter.c)
 *     PspCheckConditionalWakeCharge @ 0x14067567C (PspCheckConditionalWakeCharge.c)
 *     EtwTraceWakeCounter @ 0x140931FFC (EtwTraceWakeCounter.c)
 *     EtwTraceWakeEvent @ 0x1409320B8 (EtwTraceWakeEvent.c)
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
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // edi
  unsigned int v24; // r14d
  int v25; // edi
  __int64 v26; // r15
  int v28; // edx
  _KPROCESS *Process; // rax
  int v30; // r9d
  char v31; // [rsp+40h] [rbp-78h]
  int v33; // [rsp+48h] [rbp-70h]
  int v34; // [rsp+4Ch] [rbp-6Ch]
  _KPROCESS *v35; // [rsp+50h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-60h]
  void *v37; // [rsp+60h] [rbp-58h]
  bool v38; // [rsp+C0h] [rbp+8h]

  v7 = 0;
  v34 = 1;
  v33 = 0;
  v9 = a2 & 2;
  v31 = 0;
  CurrentThread = KeGetCurrentThread();
  v10 = 0;
  v11 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(Object + 1080, 0LL);
  v12 = *(_DWORD **)(Object + 1296);
  v13 = v9 != 0;
  v38 = v9 != 0;
  v37 = v12;
  if ( !v12 || (v14 = v12[330], v15 = v9 != 0, v38 = v9 != 0, (v14 & 0x1000) == 0) )
  {
    v16 = a3;
    goto LABEL_4;
  }
  if ( v9 )
  {
    if ( (v14 & 0x800000) != 0 )
    {
      v38 = v9 != 0;
      if ( a5 > 0 )
      {
LABEL_31:
        v16 = a3;
        goto LABEL_12;
      }
    }
  }
  v28 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  v35 = Process;
  if ( (a2 & 1) != 0 )
  {
    v38 = v9 != 0;
    if ( !(unsigned __int8)PspCheckConditionalWakeCharge(Process, v12, a3) )
      goto LABEL_31;
    v15 = v9 != 0;
    v28 = a2;
    Process = v35;
  }
  if ( (Process[1].DirectoryTableBase & 0x40) != 0 || !v9 )
  {
    v16 = a3;
    v13 = 0;
    v38 = 0;
  }
  else
  {
    v34 = 5;
    v16 = 7;
    if ( v28 < 0 )
      v34 = 7;
    v13 = v15;
    v38 = v15;
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
    v33 = v19;
    if ( !v13 )
    {
      v33 = v19;
      if ( *(_QWORD *)(Object + 2464) )
      {
        v30 = 1 << a3;
        if ( a5 <= 0 )
        {
          if ( (v30 & *(_DWORD *)(Object + 2504)) != 0 && !v19 )
          {
            v31 = 1;
            v33 = 0;
            goto LABEL_12;
          }
        }
        else if ( (v30 & *(_DWORD *)(Object + 2500)) != 0 && v19 == 1 )
        {
          v31 = 1;
          v33 = 1;
          goto LABEL_12;
        }
        v31 = 0;
        v33 = v19;
      }
    }
  }
LABEL_12:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(Object + 1080), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(Object + 1080));
  KeAbPostRelease(Object + 1080);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v20, v21, v22);
  if ( v31 )
  {
    ZwUpdateWnfStateData((PCWNF_STATE_NAME)(Object + 2464), 0LL, 0, 0LL, 0LL, 0, 0);
    v23 = v33;
    if ( (xmmword_140CFC490 & 0x400) != 0 && v33 == 1 )
      EtwTraceWakeEvent(Object, a3);
  }
  else
  {
    v23 = v33;
  }
  if ( a7 )
    *a7 = v23;
  if ( v11 || v7 )
  {
    v26 = a4;
    v24 = a3;
    v25 = a5;
    PspChargeJobWakeCounter(v37, v34, Object, a4);
  }
  else
  {
    v24 = a3;
    v25 = a5;
    v26 = a4;
  }
  if ( !v10 )
    return 0LL;
  if ( (xmmword_140CFC490 & 0x2000) != 0 && !v38 )
    EtwTraceWakeCounter(Object, v24, v25, Object, v26);
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
