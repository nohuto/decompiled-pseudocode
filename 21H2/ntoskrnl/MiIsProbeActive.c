/*
 * XREFs of MiIsProbeActive @ 0x140299E04
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x140299824 (MiReplaceRotateWithDemandZero.c)
 *     MmIsIoSpaceActive @ 0x140536F50 (MmIsIoSpaceActive.c)
 *     MiSwitchToTransition @ 0x140539F14 (MiSwitchToTransition.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14021CD80 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14031C800 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiIsProbeActive(unsigned __int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // ebx
  int v5; // r13d
  KIRQL v8; // al
  unsigned __int64 v9; // rdx
  _QWORD *v10; // r9
  unsigned __int64 v11; // r12
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r10
  __int64 v21; // r11
  unsigned __int64 v22; // rax
  _WORD *v23; // r8
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rcx
  unsigned __int8 v27; // al
  unsigned __int64 v28; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v35; // eax
  _DWORD *SchedulerAssist; // r8
  _QWORD *v37; // rax
  _QWORD *j; // rcx
  unsigned __int64 v39; // rax
  _QWORD *v41; // [rsp+28h] [rbp-50h]
  unsigned __int64 v42; // [rsp+30h] [rbp-48h]
  unsigned __int64 i; // [rsp+38h] [rbp-40h]

  v4 = 0;
  v5 = 0;
  v8 = ExAcquireSpinLockShared(&dword_140C4EC40);
  v10 = (_QWORD *)xmmword_140C4EC48;
  v11 = v8;
  if ( (_QWORD)xmmword_140C4EC48 )
  {
    if ( (a3 & 1) != 0 )
    {
      v41 = 0LL;
      v42 = -1LL;
      for ( i = a1 + 8 * a2; a1 < i; a1 += 8LL )
      {
        v28 = *(_QWORD *)a1;
        if ( (unsigned int)MiPteInShadowRange(a1, v9)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v28 & 1) != 0
          && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v30 = *((_QWORD *)&Flink->Flink + ((a1 >> 3) & 0x1FF));
            v31 = v28 | 0x20;
            if ( (v30 & 0x20) == 0 )
              v31 = v28;
            v28 = v31;
            if ( (v30 & 0x42) != 0 )
              v28 = v31 | 0x42;
          }
        }
        v32 = (v28 >> 12) & 0xFFFFFFFFFLL;
        v9 = 0x4000000000000LL;
        if ( (*(_QWORD *)(48 * v32 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
        {
          if ( (a3 & 2) != 0 && *(_WORD *)(48 * v32 - 0x57FFFFFFFE0LL) > 2u )
            goto LABEL_59;
        }
        else
        {
          v9 = v32 & 0xFFFFFFFFFFFFFE00uLL;
          if ( v42 == -1LL || v42 != v9 )
          {
            v37 = v41;
            if ( !v41 || v41[5] != v9 )
            {
              for ( j = (_QWORD *)xmmword_140C4EC48; ; j = (_QWORD *)j[1] )
              {
                while ( 1 )
                {
                  if ( !j )
                  {
                    v42 = v32 & 0xFFFFFFFFFFFFFE00uLL;
                    goto LABEL_79;
                  }
                  v39 = j[5];
                  if ( v32 >= v39 )
                    break;
                  j = (_QWORD *)*j;
                }
                if ( v32 < v39 + 512 )
                  break;
              }
              v37 = j;
              v41 = j;
            }
            if ( (*(_WORD *)(v37[6] + 2 * (v32 - v37[5])) & 0x3FFF) != 0 )
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
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4EC40);
      if ( !KiIrqlFlags )
        goto LABEL_67;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_67;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql > 0xFu || (unsigned __int8)v11 > 0xFu || CurrentIrql < 2u )
        goto LABEL_67;
    }
    else
    {
      v18 = a1 + a2 - 1;
      while ( v10 )
      {
        v19 = v10[5];
        if ( v18 < v19 )
        {
          v10 = (_QWORD *)*v10;
        }
        else
        {
          if ( a1 <= v19 + 512 )
            break;
          v10 = (_QWORD *)v10[1];
        }
      }
      while ( v10 )
      {
        v20 = v10[5];
        if ( v18 < v20 )
          break;
        v21 = v10[6];
        v22 = a1 - v20;
        if ( a1 < v20 )
          v22 = 0LL;
        v23 = (_WORD *)(v21 + 2 * v22);
        if ( v18 + 1 > v20 + 512 )
          v24 = v21 + 1024;
        else
          v24 = v21 + 2 * (v18 - v20 + 1);
        if ( (unsigned __int64)v23 < v24 )
        {
          while ( (*v23 & 0x3FFF) == 0 )
          {
            if ( (unsigned __int64)++v23 >= v24 )
              goto LABEL_29;
          }
          v5 = 1;
LABEL_29:
          v18 = a1 + a2 - 1;
        }
        if ( v5 == 1 )
          break;
        v25 = (_QWORD *)v10[1];
        v26 = v10;
        if ( v25 )
        {
          do
          {
            v10 = v25;
            v25 = (_QWORD *)*v25;
          }
          while ( v25 );
        }
        else
        {
          while ( 1 )
          {
            v10 = (_QWORD *)(v10[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v10 || (_QWORD *)*v10 == v26 )
              break;
            v26 = v10;
          }
        }
      }
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4EC40);
      if ( !KiIrqlFlags )
        goto LABEL_67;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_67;
      v27 = KeGetCurrentIrql();
      if ( v27 > 0xFu || (unsigned __int8)v11 > 0xFu || v27 < 2u )
        goto LABEL_67;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v17 = (v35 & SchedulerAssist[5]) == 0;
    SchedulerAssist[5] &= v35;
    if ( v17 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_67:
    v4 = v5;
    goto LABEL_3;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4EC40);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v13 >= 2u )
      {
        v14 = KeGetCurrentPrcb();
        v15 = v14->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v17 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(v14);
      }
    }
  }
LABEL_3:
  __writecr8(v11);
  return v4;
}
