/*
 * XREFs of MiDereferenceIoPages @ 0x1402183E8
 * Callers:
 *     MiReferenceIoPages @ 0x1402176E4 (MiReferenceIoPages.c)
 *     MiZeroAndFlushPtes @ 0x1402180C0 (MiZeroAndFlushPtes.c)
 *     MiReplaceRotateWithDemandZero @ 0x140219184 (MiReplaceRotateWithDemandZero.c)
 *     MiDeletePteRun @ 0x1402DB4B0 (MiDeletePteRun.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B89C4 (MiMapContiguousMemoryLarge.c)
 *     MmRotatePhysicalView @ 0x1405E48E0 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076B860 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407C3128 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  __int64 v25; // r8
  __int64 *v26; // r10
  _WORD *v27; // rcx
  _WORD *v28; // rdx
  _QWORD *v29; // rdx
  _QWORD *v30; // rax
  int v31; // eax
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rdx
  _QWORD *v35; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v39; // eax
  bool v40; // zf
  signed __int32 v41[8]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD *v42; // [rsp+30h] [rbp-58h]
  __int64 *v43; // [rsp+38h] [rbp-50h]
  KIRQL v44; // [rsp+90h] [rbp+8h]
  ULONG_PTR v45; // [rsp+98h] [rbp+10h]
  __int16 v46; // [rsp+98h] [rbp+10h]
  _QWORD *v48; // [rsp+A8h] [rbp+20h] BYREF

  v45 = a3;
  v3 = 0LL;
  v4 = a2 & 0xFFFFFFFFFLL;
  v48 = 0LL;
  BugCheckParameter4 = a2 & 0xFFFFFFFFFLL;
  v7 = a3;
  i = (_QWORD *)&xmmword_140C4EC88 + a1;
  v42 = i;
  v9 = &qword_140C4EC98;
  if ( a1 != 1 )
    v9 = 0LL;
  v43 = v9;
  v10 = ExAcquireSpinLockExclusive(&dword_140C4EC80);
  v44 = v10;
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
      v7 = v45;
      i = (_QWORD *)v12;
      if ( !v45 )
      {
        v10 = v44;
        goto LABEL_31;
      }
    }
    v23 = v45;
LABEL_23:
    if ( (*v20 & 0x3FFF) == 0 )
      KeBugCheckEx(0x1Au, 0x6194AuLL, v4, a3, BugCheckParameter4);
    v46 = (*v20 ^ (*v20 - 1)) & 0x3FFF ^ *v20;
    *v20 = v46;
    if ( (v46 & 0x3FFF) != 0 )
      goto LABEL_27;
    v24 = v17[7];
    if ( v24 == 0 || v24 > 0x200 )
      KeBugCheckEx(0x1Au, 0x6194BuLL, (ULONG_PTR)v17, v24, BugCheckParameter4);
    v17[7] = v24 - 1;
    if ( v24 != 1 )
      goto LABEL_27;
    RtlAvlRemoveNode(v42, v17);
    v26 = v43;
    if ( v43 )
    {
      v27 = (_WORD *)v17[6];
      v28 = v27 + 512;
      while ( 1 )
      {
        if ( v27 >= v28 )
          goto LABEL_40;
        v25 = 0x4000LL;
        if ( (*v27 & 0xC000) == 0x4000 )
          break;
        ++v27;
      }
      _InterlockedOr(v41, 0);
      v31 = KiCacheFlushTimeStamp;
      *((_DWORD *)v17 + 14) = KiCacheFlushTimeStamp;
      if ( (__int64 *)qword_140C4ECA0 == &qword_140C4ECA0 )
        dword_140C4ECB0 = v31;
      v32 = (_QWORD *)qword_140C4ECA8;
      v33 = v17 + 3;
      if ( *(__int64 **)qword_140C4ECA8 != &qword_140C4ECA0 )
        __fastfail(3u);
      *v33 = &qword_140C4ECA0;
      LOBYTE(v25) = 0;
      v17[4] = v32;
      *v32 = v33;
      qword_140C4ECA8 = (__int64)(v17 + 3);
      v34 = (_QWORD *)*v26;
      if ( *v26 )
      {
        while ( 1 )
        {
          if ( v17[5] < v34[5] )
          {
            v35 = (_QWORD *)*v34;
            if ( !*v34 )
              break;
          }
          else
          {
            v35 = (_QWORD *)v34[1];
            if ( !v35 )
            {
              v25 = 1LL;
              break;
            }
          }
          v34 = v35;
        }
      }
      RtlAvlInsertNodeEx(v26, v34, v25, i);
      v17 = 0LL;
      ++qword_140C4ECB8;
    }
LABEL_40:
    if ( !v17 )
      goto LABEL_27;
    v29 = v48;
    LOBYTE(v25) = 0;
    if ( !v48 )
      goto LABEL_49;
    while ( 1 )
    {
      if ( v17[5] < v29[5] )
      {
        v30 = (_QWORD *)*v29;
        if ( !*v29 )
          goto LABEL_49;
      }
      else
      {
        v30 = (_QWORD *)v29[1];
        if ( !v30 )
        {
          LOBYTE(v25) = 1;
LABEL_49:
          RtlAvlInsertNodeEx(&v48, v29, v25, i);
LABEL_27:
          ++v20;
          --v23;
          ++BugCheckParameter4;
          v45 = v23;
          if ( (unsigned __int64)v20 >= v22 )
          {
            v3 = v48;
            goto LABEL_29;
          }
          goto LABEL_23;
        }
      }
      v29 = v30;
    }
  }
LABEL_31:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4EC80);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v39 = ~(unsigned __int16)(-1LL << (v10 + 1));
        v40 = (v39 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v39;
        if ( v40 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v3 = v48;
      }
    }
  }
  __writecr8(v10);
  while ( v3 )
  {
    RtlAvlRemoveNode(&v48, v3);
    ExFreePoolWithTag(v3, 0);
    v3 = v48;
  }
}
