/*
 * XREFs of EtwTelemetryCoverageReport @ 0x140246D10
 * Callers:
 *     EtwpCoverageRecordAtHighIrql @ 0x1405A6C24 (EtwpCoverageRecordAtHighIrql.c)
 *     PsSetProcessFaultInformation @ 0x140772EF0 (PsSetProcessFaultInformation.c)
 *     PopTransitionTelemetryOsState @ 0x140798C44 (PopTransitionTelemetryOsState.c)
 *     EtwpCoverageEnsureContext @ 0x1407CA35C (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageProvEnableCallback @ 0x1409352E0 (EtwpCoverageProvEnableCallback.c)
 *     EtwpCoverageReset @ 0x140935444 (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x140935624 (EtwpCoverageResetCP.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     ObGetCurrentIrql @ 0x14023A8A0 (ObGetCurrentIrql.c)
 *     EtwpCoverageValidateCP @ 0x140246E40 (EtwpCoverageValidateCP.c)
 *     EtwpCoverageAddToStringBuffer @ 0x140246F48 (EtwpCoverageAddToStringBuffer.c)
 *     _tlgCreate1Sz_char @ 0x140270A0C (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpCoverageRecord @ 0x1406151A4 (EtwpCoverageRecord.c)
 *     EtwpCoverageEnsureContext @ 0x1407CA35C (EtwpCoverageEnsureContext.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwTelemetryCoverageReport(__int64 *a1)
{
  int v1; // r13d
  int v2; // r12d
  _QWORD *v4; // r14
  BOOL v5; // edi
  __int64 v6; // r15
  __int64 v7; // rbx
  unsigned int v8; // ebx
  _DWORD *v10; // r8
  unsigned int v11; // r13d
  KIRQL v12; // al
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  int v17; // eax
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
  __int64 v37; // rdx
  __int64 v38; // [rsp+38h] [rbp-99h] BYREF
  __int64 v39; // [rsp+40h] [rbp-91h]
  int v40; // [rsp+48h] [rbp-89h] BYREF
  int v41; // [rsp+4Ch] [rbp-85h] BYREF
  int v42; // [rsp+50h] [rbp-81h] BYREF
  int v43; // [rsp+54h] [rbp-7Dh] BYREF
  int v44; // [rsp+58h] [rbp-79h] BYREF
  int v45; // [rsp+5Ch] [rbp-75h] BYREF
  __int64 v46; // [rsp+60h] [rbp-71h]
  char v47[32]; // [rsp+68h] [rbp-69h] BYREF
  int *v48; // [rsp+88h] [rbp-49h]
  int v49; // [rsp+90h] [rbp-41h]
  int v50; // [rsp+94h] [rbp-3Dh]
  int *v51; // [rsp+98h] [rbp-39h]
  int v52; // [rsp+A0h] [rbp-31h]
  int v53; // [rsp+A4h] [rbp-2Dh]
  int *v54; // [rsp+A8h] [rbp-29h]
  int v55; // [rsp+B0h] [rbp-21h]
  int v56; // [rsp+B4h] [rbp-1Dh]
  int *v57; // [rsp+B8h] [rbp-19h]
  int v58; // [rsp+C0h] [rbp-11h]
  int v59; // [rsp+C4h] [rbp-Dh]
  int *v60; // [rsp+C8h] [rbp-9h]
  int v61; // [rsp+D0h] [rbp-1h]
  int v62; // [rsp+D4h] [rbp+3h]
  int *v63; // [rsp+D8h] [rbp+7h]
  int v64; // [rsp+E0h] [rbp+Fh]
  int v65; // [rsp+E4h] [rbp+13h]
  char v66[16]; // [rsp+E8h] [rbp+17h] BYREF

  v1 = 0;
  v2 = 0;
  v38 = 0LL;
  HIDWORD(v39) = 0;
  v4 = 0LL;
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
  LODWORD(v39) = 1;
  if ( !(unsigned int)EtwpCoverageValidateCP(a1, &v38) )
  {
    v8 = -1073741811;
LABEL_60:
    if ( EtwpCoverageCoreTracingEnabled
      && (unsigned int)dword_140C02C28 > 5
      && (unsigned __int8)tlgKeywordOn(
                            &dword_140C02C28,
                            1LL,
                            v10,
                            (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) )
    {
      v34 = *(_DWORD *)v6;
      v50 = 0;
      v53 = 0;
      v56 = 0;
      v59 = 0;
      v62 = 0;
      v65 = 0;
      v40 = v34;
      v48 = &v40;
      v41 = *(_DWORD *)(v6 + 4);
      v51 = &v41;
      v35 = v33 - *(_DWORD *)(v6 + 16);
      v36 = v33 - *(_DWORD *)(v6 + 20);
      v42 = v35;
      v54 = &v42;
      v57 = &v43;
      v60 = &v44;
      v49 = 4;
      v52 = 4;
      v55 = 4;
      v58 = 4;
      v61 = 4;
      v64 = 4;
      v37 = *a1;
      v63 = &v45;
      v43 = v36;
      v44 = v2;
      v45 = v1;
      tlgCreate1Sz_char(v66, v37);
      tlgWriteTransfer_EtwWriteTransfer(&dword_140C02C28, &unk_14002C7D0, 0LL, 0LL, 9, v47, v38, v39);
    }
    return v8;
  }
  v11 = *((_DWORD *)a1 + 3);
  if ( v11 >= *(_DWORD *)v6 )
  {
    v8 = 0;
    v2 = 1;
    v1 = 1;
    goto LABEL_60;
  }
  *((_DWORD *)a1 + 3) = *(_DWORD *)v6;
  while ( 1 )
  {
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7);
    v13 = *(_QWORD *)(v7 + 8);
    v14 = v12;
    v46 = *(_QWORD *)(v7 + 64);
    if ( v13 )
    {
      HIDWORD(v38) = EtwpCoverageAddToStringBuffer(v13, *a1, (unsigned int)v38);
      if ( HIDWORD(v38) == 1 )
        break;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)v7);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
          v18 = (v23 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v23;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v14);
    if ( !v4 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x56777445u);
      v4 = PoolWithTag;
      if ( !PoolWithTag )
      {
        *((_DWORD *)a1 + 3) = v11;
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 4));
        v19 = v39;
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
    if ( v46 == v26 )
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
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v10 = v16->SchedulerAssist;
        v18 = (v17 & v10[5]) == 0;
        v10[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
  }
  __writecr8(v14);
  v19 = 0;
  v8 = 0;
LABEL_56:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x56777445u);
  if ( v19 )
  {
    v2 = HIDWORD(v38);
    v1 = HIDWORD(v39);
    goto LABEL_60;
  }
  return v8;
}
