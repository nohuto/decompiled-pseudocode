/*
 * XREFs of MiDereferenceIoPages @ 0x140261608
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x14025E4B0 (MiReplaceRotateWithDemandZero.c)
 *     MiReferenceIoPages @ 0x140260AB4 (MiReferenceIoPages.c)
 *     MiZeroAndFlushPtes @ 0x1402612E0 (MiZeroAndFlushPtes.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     MiDeletePteRun @ 0x1402C5480 (MiDeletePteRun.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B7E54 (MiMapContiguousMemoryLarge.c)
 *     MmRotatePhysicalView @ 0x14065CA40 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140767510 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407BE808 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x14022E170 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402C3340 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceIoPages(int a1, __int64 a2, ULONG_PTR a3)
{
  void *v3; // rbx
  ULONG_PTR v4; // rbp
  ULONG_PTR BugCheckParameter4; // r12
  ULONG_PTR v7; // r13
  _QWORD *i; // rdi
  __int64 *v9; // rax
  KIRQL v10; // r14
  ULONG_PTR v11; // rcx
  unsigned __int64 v12; // r14
  _QWORD *v13; // rcx
  __int64 k; // r14
  _QWORD *j; // rax
  __int64 v16; // r8
  _QWORD *v17; // rsi
  __int64 v18; // rax
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
  _QWORD *v43; // [rsp+30h] [rbp-58h]
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
  i = (_QWORD *)&xmmword_140C4EAC8 + a1;
  v43 = i;
  v9 = &qword_140C4EAD8;
  if ( a1 != 1 )
    v9 = 0LL;
  v44 = v9;
  v10 = ExAcquireSpinLockExclusive(&dword_140C4EAC0);
  v45 = v10;
LABEL_4:
  for ( i = (_QWORD *)*i; i; i = (_QWORD *)i[1] )
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
      v13 = i;
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
          if ( !v12 || *(_QWORD **)v12 == v13 )
            break;
          v13 = (_QWORD *)v12;
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
      i = (_QWORD *)v12;
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
    RtlAvlRemoveNode(v43);
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
      if ( (__int64 *)qword_140C4EAE0 == &qword_140C4EAE0 )
        dword_140C4EAF0 = v31;
      v32 = (_QWORD *)qword_140C4EAE8;
      v33 = v17 + 3;
      if ( *(__int64 **)qword_140C4EAE8 != &qword_140C4EAE0 )
        __fastfail(3u);
      *v33 = &qword_140C4EAE0;
      v34 = 0;
      v17[4] = v32;
      *v32 = v33;
      qword_140C4EAE8 = (__int64)(v17 + 3);
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
      ++qword_140C4EAF8;
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
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4EAC0);
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
    RtlAvlRemoveNode(&v49);
    ExFreePoolWithTag(v3, 0);
    v3 = v49;
  }
}
