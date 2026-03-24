/*
 * XREFs of EtwTelemetryCoverageReport @ 0x1402C84B0
 * Callers:
 *     EtwpCoverageRecordAtHighIrql @ 0x1405A69F4 (EtwpCoverageRecordAtHighIrql.c)
 *     PsSetProcessFaultInformation @ 0x140772D30 (PsSetProcessFaultInformation.c)
 *     PopTransitionTelemetryOsState @ 0x140798A44 (PopTransitionTelemetryOsState.c)
 *     EtwpCoverageEnsureContext @ 0x1407CA03C (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageProvEnableCallback @ 0x140935110 (EtwpCoverageProvEnableCallback.c)
 *     EtwpCoverageReset @ 0x140935274 (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x140935454 (EtwpCoverageResetCP.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 *     ObGetCurrentIrql @ 0x14025F590 (ObGetCurrentIrql.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025FAE0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402605BC (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140263F30 (_tlgCreate1Sz_char.c)
 *     EtwpCoverageValidateCP @ 0x1402C85E0 (EtwpCoverageValidateCP.c)
 *     EtwpCoverageAddToStringBuffer @ 0x1402C86E8 (EtwpCoverageAddToStringBuffer.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140358230 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414200 (memset.c)
 *     EtwpCoverageRecord @ 0x1406B5CE4 (EtwpCoverageRecord.c)
 *     EtwpCoverageEnsureContext @ 0x1407CA03C (EtwpCoverageEnsureContext.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwTelemetryCoverageReport(_QWORD *a1)
{
  int v1; // r13d
  int v2; // r12d
  _QWORD *v4; // r14
  BOOL v5; // edi
  __int64 v6; // r15
  __int64 v7; // rbx
  unsigned int v8; // ebx
  unsigned int v10; // r13d
  KIRQL v11; // al
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  int v16; // eax
  _DWORD *v17; // r8
  bool v18; // zf
  int v19; // edi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  _QWORD *PoolWithTag; // rax
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  _QWORD *v27; // rcx
  _QWORD *v28; // r8
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  int v33; // r9d
  int v34; // eax
  int v35; // eax
  int v36; // r9d
  const CHAR *v37; // rdx
  unsigned int v38; // [rsp+38h] [rbp-99h] BYREF
  int v39; // [rsp+3Ch] [rbp-95h]
  int v40; // [rsp+40h] [rbp-91h]
  int v41; // [rsp+44h] [rbp-8Dh]
  int v42; // [rsp+48h] [rbp-89h] BYREF
  int v43; // [rsp+4Ch] [rbp-85h] BYREF
  int v44; // [rsp+50h] [rbp-81h] BYREF
  int v45; // [rsp+54h] [rbp-7Dh] BYREF
  int v46; // [rsp+58h] [rbp-79h] BYREF
  int v47; // [rsp+5Ch] [rbp-75h] BYREF
  __int64 v48; // [rsp+60h] [rbp-71h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+68h] [rbp-69h] BYREF
  int *v50; // [rsp+88h] [rbp-49h]
  int v51; // [rsp+90h] [rbp-41h]
  int v52; // [rsp+94h] [rbp-3Dh]
  int *v53; // [rsp+98h] [rbp-39h]
  int v54; // [rsp+A0h] [rbp-31h]
  int v55; // [rsp+A4h] [rbp-2Dh]
  int *v56; // [rsp+A8h] [rbp-29h]
  int v57; // [rsp+B0h] [rbp-21h]
  int v58; // [rsp+B4h] [rbp-1Dh]
  int *v59; // [rsp+B8h] [rbp-19h]
  int v60; // [rsp+C0h] [rbp-11h]
  int v61; // [rsp+C4h] [rbp-Dh]
  int *v62; // [rsp+C8h] [rbp-9h]
  int v63; // [rsp+D0h] [rbp-1h]
  int v64; // [rsp+D4h] [rbp+3h]
  int *v65; // [rsp+D8h] [rbp+7h]
  int v66; // [rsp+E0h] [rbp+Fh]
  int v67; // [rsp+E4h] [rbp+13h]
  char v68[16]; // [rsp+E8h] [rbp+17h] BYREF

  v1 = 0;
  v2 = 0;
  v38 = 0;
  v41 = 0;
  v4 = 0LL;
  v39 = 0;
  v5 = ObGetCurrentIrql() < 2u && (a1[2] & 1) == 0;
  if ( !EtwpCoverageNonPagedContext )
  {
    if ( !v5 )
      return (unsigned int)-1073741641;
    v8 = EtwpCoverageEnsureContext();
    if ( (v8 & 0x80000000) != 0 )
      return v8;
  }
  v6 = EtwpCoverageNonPagedContext;
  v7 = EtwpCoverageNonPagedContext + 24;
  if ( *((_DWORD *)a1 + 3) >= 0xFFFFFF00 )
    return (unsigned int)-1073741637;
  if ( v5 )
  {
    EtwpCoverageRecord(EtwpCoverageContext, a1);
    return 0;
  }
  v40 = 1;
  if ( !(unsigned int)EtwpCoverageValidateCP(a1, &v38) )
  {
    v8 = -1073741811;
LABEL_60:
    if ( EtwpCoverageCoreTracingEnabled
      && (unsigned int)dword_140C02C28 > 5
      && tlgKeywordOn((__int64)&dword_140C02C28, 1LL) )
    {
      v34 = *(_DWORD *)v6;
      v52 = 0;
      v55 = 0;
      v58 = 0;
      v61 = 0;
      v64 = 0;
      v67 = 0;
      v42 = v34;
      v50 = &v42;
      v43 = *(_DWORD *)(v6 + 4);
      v53 = &v43;
      v35 = v33 - *(_DWORD *)(v6 + 16);
      v36 = v33 - *(_DWORD *)(v6 + 20);
      v44 = v35;
      v56 = &v44;
      v59 = &v45;
      v62 = &v46;
      v51 = 4;
      v54 = 4;
      v57 = 4;
      v60 = 4;
      v63 = 4;
      v66 = 4;
      v37 = (const CHAR *)*a1;
      v65 = &v47;
      v45 = v36;
      v46 = v2;
      v47 = v1;
      tlgCreate1Sz_char((__int64)v68, v37);
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02C28,
        (unsigned __int8 *)&unk_14002C710,
        0LL,
        0LL,
        9u,
        &v49);
    }
    return v8;
  }
  v10 = *((_DWORD *)a1 + 3);
  if ( v10 >= *(_DWORD *)v6 )
  {
    v8 = 0;
    v2 = 1;
    v1 = 1;
    goto LABEL_60;
  }
  *((_DWORD *)a1 + 3) = *(_DWORD *)v6;
  while ( 1 )
  {
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
    v12 = *(_QWORD *)(v7 + 8);
    v13 = v11;
    v48 = *(_QWORD *)(v7 + 64);
    if ( v12 )
    {
      v39 = EtwpCoverageAddToStringBuffer(v12, *a1, v38);
      if ( v39 == 1 )
        break;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)v7);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v18 = (v23 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v23;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
    if ( !v4 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x56777445u);
      v4 = PoolWithTag;
      if ( !PoolWithTag )
      {
        *((_DWORD *)a1 + 3) = v10;
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 4));
        v19 = v40;
        v8 = -1073741670;
        goto LABEL_56;
      }
      memset(PoolWithTag, 0, 0x400uLL);
      v4[2] = v4 + 128;
      v4[3] = v4 + 5;
      v4[4] = v4 + 5;
    }
    v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
    v26 = *(_QWORD *)(v7 + 64);
    if ( v48 == v26 )
    {
      v27 = *(_QWORD **)(v7 + 8);
      if ( v27 )
      {
        v28 = *(_QWORD **)(v7 + 24);
        if ( *v28 != v7 + 16 )
          __fastfail(3u);
        *v27 = v7 + 16;
        v27[1] = v28;
        *v28 = v27;
        *(_QWORD *)(v7 + 24) = v27;
        v26 = *(_QWORD *)(v7 + 64);
      }
      *(_QWORD *)(v7 + 8) = v4;
      *(_QWORD *)(v7 + 64) = v26 + 1;
      v4 = 0LL;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)v7);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v29 = KeGetCurrentIrql();
        if ( v29 <= 0xFu && (unsigned __int8)v25 <= 0xFu && v29 >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          v31 = v30->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
          v18 = (v32 & v31[5]) == 0;
          v31[5] &= v32;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v30);
        }
      }
    }
    __writecr8(v25);
  }
  if ( !*(_DWORD *)(v7 + 72) )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v7 + 32), DelayedWorkQueue);
    *(_DWORD *)(v7 + 72) = 1;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v7);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v17 = v15->SchedulerAssist;
        v18 = (v16 & v17[5]) == 0;
        v17[5] &= v16;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
  }
  __writecr8(v13);
  v19 = 0;
  v8 = 0;
LABEL_56:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x56777445u);
  if ( v19 )
  {
    v2 = v39;
    v1 = v41;
    goto LABEL_60;
  }
  return v8;
}
