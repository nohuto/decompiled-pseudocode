/*
 * XREFs of HalpAllocatePmcCounterSet @ 0x1404B92A0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140336D80 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1403374F0 (KeRevertToUserGroupAffinityThread.c)
 *     HalpMmAllocCtxFree @ 0x1403764C0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x140379D08 (HalpMmAllocCtxAlloc.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall HalpAllocatePmcCounterSet(unsigned int a1, unsigned int *a2, unsigned int a3, __int64 *a4)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 *v6; // r15
  unsigned int v7; // ecx
  __int64 v9; // rcx
  void *v10; // rax
  __int64 v11; // rbx
  int v12; // edi
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  __int64 v15; // rsi
  unsigned int v16; // r13d
  unsigned int *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r14
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int *v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int8 v26; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v28; // r8
  int v29; // eax
  bool v30; // zf
  __int64 v34; // [rsp+30h] [rbp-68h]
  _GROUP_AFFINITY v35; // [rsp+38h] [rbp-60h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-50h] BYREF

  v4 = a1;
  v5 = a1;
  v35 = 0LL;
  v6 = a4;
  v7 = KiProcessorIndexToNumberMappingTable[a1];
  v35.Group = v7 >> 6;
  v34 = v4;
  v35.Mask = 1LL << (v7 & 0x3F);
  PreviousAffinity = 0LL;
  KeSetSystemGroupAffinityThread(&v35, &PreviousAffinity);
  v10 = (void *)HalpMmAllocCtxAlloc(v9, 32 * a3 + 24);
  v11 = (__int64)v10;
  if ( !v10 )
  {
    v12 = -1073741801;
    goto LABEL_33;
  }
  memset(v10, 0, 32 * a3 + 24);
  *(_DWORD *)(v11 + 16) = v4;
  v12 = 0;
  *(_DWORD *)(v11 + 20) = a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  v15 = 0LL;
  v16 = 0;
  if ( !a3 )
  {
LABEL_20:
    v21 = 3 * v5;
    v24 = HalpCounterSetInfo + 24 * v5;
    v25 = *(_QWORD *)v24;
    if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24 )
      __fastfail(3u);
    *(_QWORD *)v11 = v25;
    *(_QWORD *)(v11 + 8) = v24;
    *(_QWORD *)(v25 + 8) = v11;
    *(_QWORD *)v24 = v11;
    goto LABEL_23;
  }
  v17 = a2;
  while ( 1 )
  {
    v18 = *v17;
    v19 = 32LL * v16;
    *(_DWORD *)(v19 + v11 + 24) = v18;
    v20 = (*((__int64 (__fastcall **)(__int64, __int64, __int64))HalpProfileInterface[0] + 1))(1LL, v18, v19 + v11 + 28);
    v12 = v20;
    if ( v20 < 0 )
      break;
    v22 = *(unsigned int *)(v19 + v11 + 28);
    ++v16;
    *(_QWORD *)(v19 + v11 + 32) = __readpmc(v22);
    v12 = (*((__int64 (__fastcall **)(__int64, __int64))HalpProfileInterface[0] + 16))(v22, v19 + v11 + 48);
LABEL_13:
    v15 = (unsigned int)(v15 + 1);
    v17 = ++a2;
    if ( (unsigned int)v15 >= a3 )
      goto LABEL_18;
  }
  if ( v20 == -1073741637 )
  {
    --*(_DWORD *)(v11 + 20);
    v12 = 0;
    goto LABEL_13;
  }
  if ( (_DWORD)v15 )
  {
    v23 = (unsigned int *)(v11 + 24);
    do
    {
      (*((void (__fastcall **)(_QWORD, unsigned int *))HalpProfileInterface[0] + 2))(*v23, v23 + 1);
      v23 += 8;
      --v15;
    }
    while ( v15 );
  }
LABEL_18:
  if ( v12 >= 0 )
  {
    v5 = v34;
    goto LABEL_20;
  }
LABEL_23:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v26 = KeGetCurrentIrql();
      if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v21 = (unsigned int)CurrentIrql + 1;
        v28 = CurrentPrcb->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v30 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v12 < 0 )
    HalpMmAllocCtxFree(v21, v11);
  v6 = a4;
LABEL_33:
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( v12 >= 0 )
    *v6 = v11;
  return (unsigned int)v12;
}
