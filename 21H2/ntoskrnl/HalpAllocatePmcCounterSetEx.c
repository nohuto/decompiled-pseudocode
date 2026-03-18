/*
 * XREFs of HalpAllocatePmcCounterSetEx @ 0x14050ADB0
 * Callers:
 *     HalpAllocatePmcCounterSet @ 0x14050AD80 (HalpAllocatePmcCounterSet.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x1403B1F04 (HalpMmAllocCtxAlloc.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall HalpAllocatePmcCounterSetEx(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        __int64 *a5,
        _DWORD *a6)
{
  __int64 *v6; // r14
  __int64 v8; // rsi
  unsigned int v9; // ecx
  __int64 v10; // rcx
  void *v11; // rax
  __int64 v12; // rbx
  int v13; // edi
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  unsigned int v16; // r12d
  __int64 v17; // rbp
  _DWORD *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned int *v22; // r12
  __int64 v23; // r15
  int v24; // eax
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned int *v35; // rsi
  unsigned __int8 v36; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v38; // r8
  int v39; // eax
  bool v40; // zf
  unsigned int v42; // [rsp+30h] [rbp-A8h]
  __int64 v45; // [rsp+38h] [rbp-A0h]
  __int64 v46; // [rsp+48h] [rbp-90h]
  __int64 v47; // [rsp+58h] [rbp-80h]
  __int64 v49; // [rsp+68h] [rbp-70h]
  struct _GROUP_AFFINITY v50; // [rsp+70h] [rbp-68h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+80h] [rbp-58h] BYREF

  v6 = a5;
  v8 = a1;
  v50 = 0LL;
  v9 = KiProcessorIndexToNumberMappingTable[a1];
  v50.Group = v9 >> 6;
  v50.Mask = 1LL << (v9 & 0x3F);
  PreviousAffinity = 0LL;
  v49 = v8;
  KeSetSystemGroupAffinityThread(&v50, &PreviousAffinity);
  v11 = (void *)HalpMmAllocCtxAlloc(v10, 40 * a3 + 24);
  v12 = (__int64)v11;
  if ( !v11 )
  {
    v13 = -1073741801;
    goto LABEL_47;
  }
  memset(v11, 0, 40 * a3 + 24);
  *(_DWORD *)(v12 + 20) = a3;
  v13 = 0;
  *(_DWORD *)(v12 + 16) = v8;
  if ( HalpProfileInterface == &DefaultProfileInterface )
    v46 = HalpCounterStatus;
  else
    v46 = HalpCounterStatus + 8LL * (unsigned int)(HalpNumberOfCounters * v8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  v16 = 0;
  v17 = 0LL;
  v42 = 0;
  if ( a3 )
  {
    v18 = a6;
    v19 = a2 - (_QWORD)a6;
    v45 = a2 - (_QWORD)a6;
    while ( 1 )
    {
      v20 = *(unsigned int *)((char *)v18 + v19);
      v21 = 5LL * v16;
      v22 = (unsigned int *)(v12 + 48 + 40LL * v16);
      v47 = v21;
      v23 = v12 + 8 * v21;
      *(_DWORD *)(v23 + 40) = v20;
      v24 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))HalpProfileInterface[1])(
              1LL,
              v20,
              v23 + 44,
              v12 + 52 + 8 * v21,
              v12 + 48 + 8 * v21);
      v13 = v24;
      if ( v24 < 0 )
      {
        if ( v24 != -1073741637 )
        {
          if ( (_DWORD)v17 )
          {
            v35 = (unsigned int *)(v12 + 40);
            do
            {
              ((void (__fastcall *)(_QWORD, unsigned int *))HalpProfileInterface[2])(*v35, v35 + 2);
              v35 += 10;
              --v17;
            }
            while ( v17 );
          }
          goto LABEL_37;
        }
        --*(_DWORD *)(v12 + 20);
        v16 = v42;
        v13 = 0;
        goto LABEL_28;
      }
      v25 = *(_DWORD *)(v23 + 44);
      if ( !v25 )
        break;
      v26 = v25 - 1;
      if ( v26 )
      {
        if ( v26 != 1 )
          break;
        v27 = *v22;
        v28 = __readmsr(v27);
        LODWORD(v29) = HIDWORD(v28);
        v28 = (unsigned int)v28;
        v29 = (unsigned int)v29;
      }
      else
      {
        v27 = *v22;
        v28 = __readpmc(v27);
        LODWORD(v29) = HIDWORD(v28);
        v28 = (unsigned int)v28;
        v29 = (unsigned int)v29;
      }
      v30 = (v29 << 32) | v28;
LABEL_20:
      v16 = ++v42;
      *(_QWORD *)(v12 + 8 * v47 + 24) = v30;
      v13 = ((__int64 (__fastcall *)(__int64, __int64))HalpProfileInterface[17])(v27, v12 + 8 * (v47 + 7));
      if ( a6 )
        *v18 = *(_DWORD *)(v12 + 8 * v47 + 52);
      v31 = *(unsigned int *)(v12 + 8 * v47 + 52);
      if ( (_DWORD)v31 != -1 )
      {
        v32 = *(_QWORD *)(v46 + 8 * v31);
        if ( a4 )
          *(_DWORD *)(v32 + 28) = *a4;
        else
          *(_DWORD *)(v32 + 28) = 1701736270;
      }
LABEL_28:
      v19 = v45;
      v17 = (unsigned int)(v17 + 1);
      ++v18;
      if ( (unsigned int)v17 >= a3 )
      {
        if ( v13 < 0 )
          goto LABEL_37;
        goto LABEL_30;
      }
    }
    v27 = *v22;
    v30 = 0LL;
    goto LABEL_20;
  }
LABEL_30:
  v19 = 3 * v49;
  v33 = HalpCounterSetInfo + 24 * v49;
  v34 = *(_QWORD *)v33;
  if ( *(_QWORD *)(*(_QWORD *)v33 + 8LL) != v33 )
    __fastfail(3u);
  *(_QWORD *)v12 = v34;
  *(_QWORD *)(v12 + 8) = v33;
  *(_QWORD *)(v34 + 8) = v12;
  *(_QWORD *)v33 = v12;
LABEL_37:
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v36 = KeGetCurrentIrql();
      if ( v36 <= 0xFu && CurrentIrql <= 0xFu && v36 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = (unsigned int)CurrentIrql + 1;
        v38 = CurrentPrcb->SchedulerAssist;
        v39 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v40 = (v39 & v38[5]) == 0;
        v38[5] &= v39;
        if ( v40 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v13 < 0 )
    HalpMmAllocCtxFree(v19, v12);
  v6 = a5;
LABEL_47:
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( v13 >= 0 )
    *v6 = v12;
  return (unsigned int)v13;
}
