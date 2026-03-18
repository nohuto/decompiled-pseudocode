/*
 * XREFs of MiDereferenceIoPages @ 0x140337818
 * Callers:
 *     MiDeletePteRun @ 0x14023FDD0 (MiDeletePteRun.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     MiReplaceRotateWithDemandZero @ 0x140334CB0 (MiReplaceRotateWithDemandZero.c)
 *     MiReferenceIoPages @ 0x140336B14 (MiReferenceIoPages.c)
 *     MiZeroAndFlushPtes @ 0x1403374F0 (MiZeroAndFlushPtes.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B4F34 (MiMapContiguousMemoryLarge.c)
 *     MmRotatePhysicalView @ 0x1406DE780 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x1407588D0 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407B08C8 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14023DC90 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x140249BF0 (RtlAvlInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceIoPages(int a1, __int64 a2, ULONG_PTR a3)
{
  unsigned __int64 *v3; // rbx
  ULONG_PTR v4; // rbp
  ULONG_PTR BugCheckParameter4; // r12
  ULONG_PTR v7; // r13
  unsigned __int64 *i; // rdi
  __int64 *v9; // rax
  KIRQL v10; // r14
  ULONG_PTR v11; // rcx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rcx
  unsigned __int64 k; // r14
  _QWORD *j; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 *v17; // rsi
  unsigned __int64 v18; // rax
  ULONG_PTR v19; // rdx
  _WORD *v20; // r15
  __int64 v21; // rax
  unsigned __int64 v22; // r13
  ULONG_PTR v23; // rbx
  ULONG_PTR v24; // r9
  unsigned __int64 *v25; // r10
  _WORD *v26; // rcx
  _WORD *v27; // rdx
  _QWORD *v28; // rdx
  bool v29; // r8
  _QWORD *v30; // rax
  int v31; // eax
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  bool v34; // r8
  _QWORD *v35; // rdx
  _QWORD *v36; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v40; // eax
  bool v41; // zf
  signed __int32 v42[8]; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 *v43; // [rsp+30h] [rbp-58h]
  __int64 *v44; // [rsp+38h] [rbp-50h]
  KIRQL v45; // [rsp+90h] [rbp+8h]
  ULONG_PTR v46; // [rsp+98h] [rbp+10h]
  __int16 v47; // [rsp+98h] [rbp+10h]
  _QWORD *v49; // [rsp+A8h] [rbp+20h] BYREF

  v46 = a3;
  v3 = 0LL;
  v4 = a2 & 0xFFFFFFFFFLL;
  v49 = 0LL;
  BugCheckParameter4 = a2 & 0xFFFFFFFFFLL;
  v7 = a3;
  i = (unsigned __int64 *)&xmmword_140C4EA48 + a1;
  v43 = i;
  v9 = &qword_140C4EA58;
  if ( a1 != 1 )
    v9 = 0LL;
  v44 = v9;
  v10 = ExAcquireSpinLockExclusive(&dword_140C4EA40);
  v45 = v10;
LABEL_4:
  for ( i = (unsigned __int64 *)*i; i; i = (unsigned __int64 *)i[1] )
  {
    v11 = i[5];
    if ( v4 < v11 )
      goto LABEL_4;
    if ( v4 < v11 + 512 )
      break;
  }
  if ( a3 )
  {
    while ( 1 )
    {
      if ( !i )
        KeBugCheckEx(0x1Au, 0x61948uLL, v4, a3, BugCheckParameter4);
      v12 = i[1];
      v13 = (unsigned __int64)i;
      if ( v12 )
      {
        for ( j = *(_QWORD **)v12; j; j = (_QWORD *)*j )
          v12 = (unsigned __int64)j;
      }
      else
      {
        for ( k = i[2]; ; k = *(_QWORD *)(v12 + 16) )
        {
          v12 = k & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v12 || *(_QWORD *)v12 == v13 )
            break;
          v13 = v12;
        }
      }
      v16 = i[6];
      v17 = i;
      v18 = i[5];
      v19 = (BugCheckParameter4 & 0xFFFFFFFFFLL) - v18;
      v20 = (_WORD *)(v16 + 2 * v19);
      v21 = BugCheckParameter4 + v7 > v18 + 512 ? 1024LL : 2 * (v19 + v7);
      v22 = v16 + v21;
      if ( (unsigned __int64)v20 < v16 + v21 )
        break;
LABEL_29:
      v7 = v46;
      i = (unsigned __int64 *)v12;
      if ( !v46 )
      {
        v10 = v45;
        goto LABEL_31;
      }
    }
    v23 = v46;
LABEL_23:
    if ( (*v20 & 0x3FFF) == 0 )
      KeBugCheckEx(0x1Au, 0x6194AuLL, v4, a3, BugCheckParameter4);
    v47 = (*v20 ^ (*v20 - 1)) & 0x3FFF ^ *v20;
    *v20 = v47;
    if ( (v47 & 0x3FFF) != 0 )
      goto LABEL_27;
    v24 = v17[7];
    if ( v24 == 0 || v24 > 0x200 )
      KeBugCheckEx(0x1Au, 0x6194BuLL, (ULONG_PTR)v17, v24, BugCheckParameter4);
    v17[7] = v24 - 1;
    if ( v24 != 1 )
      goto LABEL_27;
    RtlAvlRemoveNode(v43, v17);
    v25 = (unsigned __int64 *)v44;
    if ( v44 )
    {
      v26 = (_WORD *)v17[6];
      v27 = v26 + 512;
      while ( 1 )
      {
        if ( v26 >= v27 )
          goto LABEL_40;
        if ( (*v26 & 0xC000) == 0x4000 )
          break;
        ++v26;
      }
      _InterlockedOr(v42, 0);
      v31 = KiCacheFlushTimeStamp;
      *((_DWORD *)v17 + 14) = KiCacheFlushTimeStamp;
      if ( (__int64 *)qword_140C4EA60 == &qword_140C4EA60 )
        dword_140C4EA70 = v31;
      v32 = (_QWORD *)qword_140C4EA68;
      v33 = v17 + 3;
      if ( *(__int64 **)qword_140C4EA68 != &qword_140C4EA60 )
        __fastfail(3u);
      *v33 = &qword_140C4EA60;
      v34 = 0;
      v17[4] = (unsigned __int64)v32;
      *v32 = v33;
      qword_140C4EA68 = (__int64)(v17 + 3);
      v35 = (_QWORD *)*v25;
      if ( *v25 )
      {
        while ( 1 )
        {
          if ( v17[5] < v35[5] )
          {
            v36 = (_QWORD *)*v35;
            if ( !*v35 )
              break;
          }
          else
          {
            v36 = (_QWORD *)v35[1];
            if ( !v36 )
            {
              v34 = 1;
              break;
            }
          }
          v35 = v36;
        }
      }
      RtlAvlInsertNodeEx(v25, (unsigned __int64)v35, v34, i);
      v17 = 0LL;
      ++qword_140C4EA78;
    }
LABEL_40:
    if ( !v17 )
      goto LABEL_27;
    v28 = v49;
    v29 = 0;
    if ( !v49 )
      goto LABEL_49;
    while ( 1 )
    {
      if ( v17[5] < v28[5] )
      {
        v30 = (_QWORD *)*v28;
        if ( !*v28 )
          goto LABEL_49;
      }
      else
      {
        v30 = (_QWORD *)v28[1];
        if ( !v30 )
        {
          v29 = 1;
LABEL_49:
          RtlAvlInsertNodeEx((unsigned __int64 *)&v49, (unsigned __int64)v28, v29, i);
LABEL_27:
          ++v20;
          --v23;
          ++BugCheckParameter4;
          v46 = v23;
          if ( (unsigned __int64)v20 >= v22 )
          {
            v3 = v49;
            goto LABEL_29;
          }
          goto LABEL_23;
        }
      }
      v28 = v30;
    }
  }
LABEL_31:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4EA40);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v40 = ~(unsigned __int16)(-1LL << (v10 + 1));
        v41 = (v40 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v40;
        if ( v41 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v3 = v49;
      }
    }
  }
  __writecr8(v10);
  while ( v3 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&v49, v3);
    ExFreePoolWithTag(v3, 0);
    v3 = v49;
  }
}
