/*
 * XREFs of MiMakeIoRangePermanent @ 0x140536DF8
 * Callers:
 *     MiMakeIoRangePermanentDpc @ 0x1405370D0 (MiMakeIoRangePermanentDpc.c)
 * Callees:
 *     MiRemoveUnmappedIoNode @ 0x1402189D0 (MiRemoveUnmappedIoNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMakeIoRangePermanent(__int64 a1)
{
  unsigned __int64 v1; // rdi
  int v3; // r14d
  int v4; // r12d
  unsigned __int64 v5; // rbx
  KIRQL v6; // r15
  unsigned __int64 v7; // rbx
  _QWORD *v8; // rcx
  bool i; // zf
  unsigned __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // r9
  __int64 v13; // rdx
  _WORD *v14; // rcx
  __int64 v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rsi
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  bool v20; // r8
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rdx
  bool v26; // r8
  _QWORD *v27; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  PVOID v32; // rbx
  KIRQL v34; // [rsp+60h] [rbp+8h]
  PVOID P; // [rsp+70h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 40);
  v5 = *(_QWORD *)(a1 + 32) - v1;
  P = 0LL;
  v34 = ExAcquireSpinLockExclusive(&dword_140C4EC80);
  v6 = v34;
  v7 = v5 + 1;
  if ( !v7 )
  {
LABEL_32:
    v25 = (_QWORD *)qword_140C4ECE0;
    v26 = 0;
    if ( qword_140C4ECE0 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(a1 + 32) < v25[3] )
        {
          v27 = (_QWORD *)*v25;
          if ( !*v25 )
            break;
        }
        else
        {
          if ( *(_QWORD *)(a1 + 24) <= v25[4] )
          {
            ++dword_140C4ECD8;
            v3 = -1073741800;
            goto LABEL_38;
          }
          v27 = (_QWORD *)v25[1];
          if ( !v27 )
          {
            v26 = 1;
            break;
          }
        }
        v25 = v27;
      }
    }
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C4ECE0, (unsigned __int64)v25, v26, (_QWORD *)a1);
    goto LABEL_38;
  }
  do
  {
    v8 = (_QWORD *)*((_QWORD *)&xmmword_140C4EC88 + 1);
    for ( i = *((_QWORD *)&xmmword_140C4EC88 + 1) == 0LL; !i; i = v11 == 0LL )
    {
      v10 = v8[5];
      if ( v1 < v10 )
      {
        v11 = (_QWORD *)*v8;
      }
      else
      {
        if ( v1 < v10 + 512 )
        {
          v12 = v8[6];
          v13 = (v1 & 0xFFFFFFFFFLL) - v10;
          v14 = (_WORD *)(v12 + 2 * v13);
          if ( v1 + v7 <= v10 + 512 )
            v15 = 2 * (v7 + v13);
          else
            v15 = 1024LL;
          while ( (unsigned __int64)v14 < v12 + v15 )
          {
            if ( (*v14 & 0x3FFF) != 0 )
            {
              if ( (unsigned __int16)*v14 >> 14 != v4 )
              {
                ++dword_140C4ECD4;
                v3 = -1073741800;
                v7 = 0LL;
                goto LABEL_30;
              }
            }
            else
            {
              *v14 = 0x4000;
            }
            ++v14;
            ++v1;
            --v7;
          }
          goto LABEL_30;
        }
        v11 = (_QWORD *)v8[1];
      }
      v8 = v11;
    }
    v16 = MiRemoveUnmappedIoNode((__int64 **)&qword_140C4EC98, v1);
    v17 = v16;
    if ( !v16 )
    {
      v18 = v1 & 0x1FF;
      goto LABEL_27;
    }
    v19 = P;
    v20 = 0;
    v21 = v16[5];
    if ( !P )
      goto LABEL_26;
    while ( v21 < v19[5] )
    {
      v22 = (_QWORD *)*v19;
      if ( !*v19 )
        goto LABEL_26;
LABEL_47:
      v19 = v22;
    }
    v22 = (_QWORD *)v19[1];
    if ( v22 )
      goto LABEL_47;
    v20 = 1;
LABEL_26:
    RtlAvlInsertNodeEx((unsigned __int64 *)&P, (unsigned __int64)v19, v20, v17);
    v18 = (v1 & 0xFFFFFFFFFLL) - v17[5];
LABEL_27:
    v23 = 512 - v18;
    v24 = v7;
    if ( v23 <= v7 )
      v24 = v23;
    v7 -= v24;
    v1 += v24;
LABEL_30:
    ;
  }
  while ( v7 );
  v6 = v34;
  if ( v3 >= 0 )
    goto LABEL_32;
LABEL_38:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4EC80);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << (v6 + 1));
        i = (v31 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v31;
        if ( i )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  while ( P )
  {
    v32 = P;
    RtlAvlRemoveNode((unsigned __int64 *)&P, (unsigned __int64 *)P);
    ExFreePoolWithTag(v32, 0);
  }
  return (unsigned int)v3;
}
