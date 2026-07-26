/*
 * XREFs of ndisReceiveWorkerThread @ 0x1C0036EF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001918C (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ndisPeriodicReceivesGetTimerPeriod @ 0x1C00A33B8 (ndisPeriodicReceivesGetTimerPeriod.c)
 *     ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1C00ABC48 (-ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F86F0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

int *__fastcall ndisReceiveWorkerThread(ULONG a1)
{
  KSPIN_LOCK *v2; // rbx
  _QWORD *v3; // rdi
  KIRQL v4; // si
  __int64 v5; // rcx
  KSPIN_LOCK *v6; // rax
  KSPIN_LOCK v7; // rax
  unsigned __int64 v8; // rdx
  LARGE_INTEGER v9; // rax
  __int64 v10; // rdx
  int *result; // rax
  __int64 v12; // [rsp+30h] [rbp-41h]
  char v13[4]; // [rsp+30h] [rbp-41h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-39h] BYREF
  __int16 WnodeEventItem; // [rsp+40h] [rbp-31h] BYREF
  __int128 v16; // [rsp+42h] [rbp-2Fh]
  __m256i v17; // [rsp+52h] [rbp-1Fh]
  int v18; // [rsp+72h] [rbp+1h]
  __int16 v19; // [rsp+76h] [rbp+5h]
  _GROUP_AFFINITY Affinity; // [rsp+78h] [rbp+7h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+88h] [rbp+17h] BYREF

  ProcNumber = 0;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  KeGetProcessorNumberFromIndex(a1, &ProcNumber);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v13 = a1;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0x10u,
      (struct _GUID *)&WPP_e896fbf1b9df31be12d1917bc0fe0b78_Traceguids,
      *(_DWORD *)v13);
  }
  Affinity.Mask = 1LL << ProcNumber.Number;
  v2 = (KSPIN_LOCK *)((char *)qword_1C00E4000 + 64 * (unsigned __int64)a1);
  Affinity.Group = ProcNumber.Group;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  while ( 1 )
  {
    ndisWaitForKernelObject(v2 + 4);
    v3 = 0LL;
    v4 = KfRaiseIrql(2u);
    KeAcquireSpinLockAtDpcLevel(v2 + 2);
    v6 = (KSPIN_LOCK *)*v2;
    if ( (KSPIN_LOCK *)*v2 != v2 )
    {
      v3 = (_QWORD *)*v2;
      if ( (KSPIN_LOCK *)v6[1] != v2 || (v7 = *v6, *(_QWORD **)(v7 + 8) != v3) )
        __fastfail(3u);
      *v2 = v7;
      *(_QWORD *)(v7 + 8) = v2;
      v3[1] = 0LL;
      *v3 = 0LL;
      --*((_DWORD *)v2 + 6);
      v6 = (KSPIN_LOCK *)*v2;
    }
    v8 = (unsigned __int64)a1 << 7;
    if ( v6 == v2 )
    {
      *((_DWORD *)qword_1C00E3FF8 + a1) = 0;
      KeCancelTimer((PKTIMER)((char *)qword_1C00E3FF0 + v8));
    }
    else
    {
      v9.QuadPart = ndisPeriodicReceivesGetTimerPeriod(v5, v8);
      KeSetTimer((PKTIMER)((char *)qword_1C00E3FF0 + v10), v9, (PKDPC)((char *)qword_1C00E3FF0 + v10 + 64));
    }
    KeReleaseSpinLockFromDpcLevel(v2 + 2);
    if ( v3 )
      break;
LABEL_15:
    if ( v4 != 2 )
      KeLowerIrql(v4);
  }
  if ( v3 != (_QWORD *)((char *)ndisPerCpuPoisonPills + 32 * a1) )
  {
    if ( (_BYTE)word_1C00E6054 )
    {
      v18 = 0;
      *(_OWORD *)&v17.m256i_u64[2] = 0LL;
      v19 = 0;
      v16 = 0LL;
      WnodeEventItem = 56;
      v17.m256i_i64[0] = 0LL;
      *(_QWORD *)((char *)&v16 + 6) = qword_1C00E6048;
      *(__int32 *)((char *)&v17.m256i_i32[6] + 2) = 0x20000;
      BYTE2(v16) = 22;
      *(GUID *)&v17.m256i_u16[3] = EtwGuidNdisReceive;
      v17.m256i_i8[30] = 0;
      IoWMIWriteEvent(&WnodeEventItem);
    }
    ((void (__fastcall *)(_QWORD))v3[2])(v3[3]);
    if ( (_BYTE)word_1C00E6054 )
    {
      *(__int64 *)((char *)&v17.m256i_i64[2] + 6) = 0x2000000000000LL;
      v16 = 0LL;
      WnodeEventItem = 48;
      v17.m256i_i64[0] = 0LL;
      *(_QWORD *)((char *)&v16 + 6) = qword_1C00E6048;
      BYTE2(v16) = 23;
      *(GUID *)&v17.m256i_u16[3] = EtwGuidNdisReceive;
      IoWMIWriteEvent(&WnodeEventItem);
    }
    goto LABEL_15;
  }
  if ( (KSPIN_LOCK *)*v2 != v2 )
  {
    ndisInsertInWorkQueue((struct _NDIS_WORK_QUEUE *)v2, (struct _WORK_QUEUE_ITEM *)ndisPerCpuPoisonPills + a1, 1u);
    goto LABEL_15;
  }
  if ( v4 != 2 )
    KeLowerIrql(v4);
  result = &WPP_RECORDER_INITIALIZED;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v12) = a1;
    return (int *)WPP_RECORDER_SF_d(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    4u,
                    0xCu,
                    0x11u,
                    (struct _GUID *)&WPP_e896fbf1b9df31be12d1917bc0fe0b78_Traceguids,
                    v12);
  }
  return result;
}
