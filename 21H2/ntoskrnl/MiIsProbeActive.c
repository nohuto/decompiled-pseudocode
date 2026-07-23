/*
 * XREFs of MiIsProbeActive @ 0x140219764
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x140219184 (MiReplaceRotateWithDemandZero.c)
 *     MmIsIoSpaceActive @ 0x140537190 (MmIsIoSpaceActive.c)
 *     MiSwitchToTransition @ 0x14053A154 (MiSwitchToTransition.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiIsProbeActive(unsigned __int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // ebx
  int v5; // r13d
  KIRQL v8; // al
  _QWORD *v9; // r9
  unsigned __int64 v10; // r12
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r10
  __int64 v20; // r11
  unsigned __int64 v21; // rax
  _WORD *v22; // r8
  unsigned __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  unsigned __int8 v26; // al
  unsigned __int64 v27; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v34; // eax
  _DWORD *SchedulerAssist; // r8
  unsigned __int64 v36; // rdx
  _QWORD *v37; // rax
  _QWORD *j; // rcx
  unsigned __int64 v39; // rax
  _QWORD *v41; // [rsp+28h] [rbp-50h]
  unsigned __int64 v42; // [rsp+30h] [rbp-48h]
  unsigned __int64 i; // [rsp+38h] [rbp-40h]

  v4 = 0;
  v5 = 0;
  v8 = ExAcquireSpinLockShared(&dword_140C4EC80);
  v9 = (_QWORD *)xmmword_140C4EC88;
  v10 = v8;
  if ( (_QWORD)xmmword_140C4EC88 )
  {
    if ( (a3 & 1) != 0 )
    {
      v41 = 0LL;
      v42 = -1LL;
      for ( i = a1 + 8 * a2; a1 < i; a1 += 8LL )
      {
        v27 = *(_QWORD *)a1;
        if ( (unsigned int)MiPteInShadowRange(a1)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v27 & 1) != 0
          && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v29 = *((_QWORD *)&Flink->Flink + ((a1 >> 3) & 0x1FF));
            v30 = v27 | 0x20;
            if ( (v29 & 0x20) == 0 )
              v30 = v27;
            v27 = v30;
            if ( (v29 & 0x42) != 0 )
              v27 = v30 | 0x42;
          }
        }
        v31 = (v27 >> 12) & 0xFFFFFFFFFLL;
        if ( (*(_QWORD *)(48 * v31 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
        {
          if ( (a3 & 2) != 0 && *(_WORD *)(48 * v31 - 0x57FFFFFFFE0LL) > 2u )
            goto LABEL_59;
        }
        else
        {
          v36 = v31 & 0xFFFFFFFFFFFFFE00uLL;
          if ( v42 == -1LL || v42 != v36 )
          {
            v37 = v41;
            if ( !v41 || v41[5] != v36 )
            {
              for ( j = (_QWORD *)xmmword_140C4EC88; ; j = (_QWORD *)j[1] )
              {
                while ( 1 )
                {
                  if ( !j )
                  {
                    v42 = v31 & 0xFFFFFFFFFFFFFE00uLL;
                    goto LABEL_79;
                  }
                  v39 = j[5];
                  if ( v31 >= v39 )
                    break;
                  j = (_QWORD *)*j;
                }
                if ( v31 < v39 + 512 )
                  break;
              }
              v37 = j;
              v41 = j;
            }
            if ( (*(_WORD *)(v37[6] + 2 * (v31 - v37[5])) & 0x3FFF) != 0 )
            {
LABEL_59:
              v5 = 1;
              break;
            }
          }
        }
LABEL_79:
        ;
      }
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4EC80);
      if ( !KiIrqlFlags )
        goto LABEL_67;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_67;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql > 0xFu || (unsigned __int8)v10 > 0xFu || CurrentIrql < 2u )
        goto LABEL_67;
    }
    else
    {
      v17 = a1 + a2 - 1;
      while ( v9 )
      {
        v18 = v9[5];
        if ( v17 < v18 )
        {
          v9 = (_QWORD *)*v9;
        }
        else
        {
          if ( a1 <= v18 + 512 )
            break;
          v9 = (_QWORD *)v9[1];
        }
      }
      while ( v9 )
      {
        v19 = v9[5];
        if ( v17 < v19 )
          break;
        v20 = v9[6];
        v21 = a1 - v19;
        if ( a1 < v19 )
          v21 = 0LL;
        v22 = (_WORD *)(v20 + 2 * v21);
        if ( v17 + 1 > v19 + 512 )
          v23 = v20 + 1024;
        else
          v23 = v20 + 2 * (v17 - v19 + 1);
        if ( (unsigned __int64)v22 < v23 )
        {
          while ( (*v22 & 0x3FFF) == 0 )
          {
            if ( (unsigned __int64)++v22 >= v23 )
              goto LABEL_29;
          }
          v5 = 1;
LABEL_29:
          v17 = a1 + a2 - 1;
        }
        if ( v5 == 1 )
          break;
        v24 = (_QWORD *)v9[1];
        v25 = v9;
        if ( v24 )
        {
          do
          {
            v9 = v24;
            v24 = (_QWORD *)*v24;
          }
          while ( v24 );
        }
        else
        {
          while ( 1 )
          {
            v9 = (_QWORD *)(v9[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v9 || (_QWORD *)*v9 == v25 )
              break;
            v25 = v9;
          }
        }
      }
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4EC80);
      if ( !KiIrqlFlags )
        goto LABEL_67;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_67;
      v26 = KeGetCurrentIrql();
      if ( v26 > 0xFu || (unsigned __int8)v10 > 0xFu || v26 < 2u )
        goto LABEL_67;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v16 = (v34 & SchedulerAssist[5]) == 0;
    SchedulerAssist[5] &= v34;
    if ( v16 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_67:
    v4 = v5;
    goto LABEL_3;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4EC80);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v12 >= 2u )
      {
        v13 = KeGetCurrentPrcb();
        v14 = v13->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v16 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v13);
      }
    }
  }
LABEL_3:
  __writecr8(v10);
  return v4;
}
