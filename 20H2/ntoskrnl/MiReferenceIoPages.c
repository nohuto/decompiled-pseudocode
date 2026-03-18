/*
 * XREFs of MiReferenceIoPages @ 0x140260AB4
 * Callers:
 *     MiProbeLockFrame @ 0x14026BFF0 (MiProbeLockFrame.c)
 *     MiFillSystemPtes @ 0x140286700 (MiFillSystemPtes.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B7E54 (MiMapContiguousMemoryLarge.c)
 *     MmRotatePhysicalView @ 0x14065CA40 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140767510 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407BE808 (MiMapViewOfPhysicalSection.c)
 *     MiAddLoaderHalIoPte @ 0x140A61210 (MiAddLoaderHalIoPte.c)
 * Callees:
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     RtlAvlInsertNodeEx @ 0x14022E170 (RtlAvlInsertNodeEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInitializeIoPageNodeArray @ 0x14025F9D0 (MiInitializeIoPageNodeArray.c)
 *     MiRemoveUnmappedIoNode @ 0x14025FA08 (MiRemoveUnmappedIoNode.c)
 *     MiIoSpaceIsConstant @ 0x140260EB0 (MiIoSpaceIsConstant.c)
 *     MiDereferenceIoPages @ 0x140261608 (MiDereferenceIoPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiFlushCacheMdl @ 0x1405529E8 (MiFlushCacheMdl.c)
 */

__int64 __fastcall MiReferenceIoPages(unsigned int a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, _QWORD *a6)
{
  __int64 v8; // r12
  unsigned __int64 v9; // rbx
  __int64 *v10; // rax
  _BYTE *v11; // r14
  unsigned __int64 v12; // rsi
  __int64 v13; // r15
  unsigned __int64 *v14; // r13
  unsigned __int8 CurrentIrql; // r12
  __int64 IsConstant; // rax
  __int64 v17; // r9
  bool v18; // bp
  _QWORD *v19; // rdi
  _QWORD *v20; // rsi
  _QWORD *Pool; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  unsigned __int16 *v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // rbp
  int v28; // r10d
  unsigned __int16 v29; // ax
  __int64 v30; // rdx
  unsigned __int64 v32; // rax
  _QWORD *v33; // rax
  _DWORD *SchedulerAssist; // r9
  int v35; // eax
  int v36; // ecx
  _WORD *v37; // rcx
  __int64 v38; // r13
  unsigned __int64 v39; // rcx
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  bool v44; // zf
  unsigned __int8 v45; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *v47; // r10
  int v48; // eax
  int v49; // [rsp+24h] [rbp-154h]
  unsigned int v52; // [rsp+30h] [rbp-148h]
  __int64 v53; // [rsp+38h] [rbp-140h]
  unsigned __int64 v54; // [rsp+48h] [rbp-130h]
  unsigned __int64 *v55; // [rsp+50h] [rbp-128h]
  __int64 *v56; // [rsp+58h] [rbp-120h]
  unsigned __int8 v57; // [rsp+70h] [rbp-108h]
  _BYTE v58[176]; // [rsp+80h] [rbp-F8h] BYREF

  v8 = (int)a1;
  v53 = a3;
  memset(v58, 0, sizeof(v58));
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0LL;
  v52 = 0;
  v49 = 0;
  v9 = a2 & 0xFFFFFFFFFLL;
  v54 = v9;
  v55 = (unsigned __int64 *)&xmmword_140C4EAC8 + v8;
  v10 = &qword_140C4EAD8;
  v11 = 0LL;
  v12 = v9;
  if ( (_DWORD)v8 != 1 )
    v10 = 0LL;
  v13 = -1LL;
  v56 = v10;
  v14 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v57 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( a1 == 1 )
  {
    IsConstant = MiIoSpaceIsConstant(v9, a3);
    if ( IsConstant )
      a4 = *(_DWORD *)(IsConstant + 40);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4EAC0);
  v17 = a3;
  if ( !a3 )
  {
LABEL_39:
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4EAC0);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v45 = KeGetCurrentIrql();
        if ( v45 <= 0xFu && CurrentIrql <= 0xFu && v45 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v47 = CurrentPrcb->SchedulerAssist;
          v48 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v44 = (v48 & v47[5]) == 0;
          v47[5] &= v48;
          if ( v44 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v13 != -1 )
      MiDereferenceIoPages(a1, v12, v13 - v12);
    return v52;
  }
  while ( 1 )
  {
    v18 = 0;
    v19 = (_QWORD *)*v55;
    if ( *v55 )
    {
      while ( 1 )
      {
        v32 = v19[5];
        if ( v9 < v32 )
        {
          v33 = (_QWORD *)*v19;
          if ( !*v19 )
            break;
        }
        else
        {
          if ( v9 < v32 + 512 )
          {
            v20 = v19;
            goto LABEL_19;
          }
          v33 = (_QWORD *)v19[1];
          if ( !v33 )
          {
            v18 = 1;
            break;
          }
        }
        v19 = v33;
      }
    }
    if ( !v56 )
      break;
    v20 = (_QWORD *)MiRemoveUnmappedIoNode(v56, v9);
    if ( !v20 )
      break;
LABEL_17:
    RtlAvlInsertNodeEx(v55, (unsigned __int64)v19, v18, v20);
    v17 = v53;
LABEL_19:
    if ( a6 && !*a6 )
      *a6 = v20;
    v22 = v20[5];
    v23 = v20[6];
    v24 = v22 + 512;
    v25 = (unsigned __int16 *)(v23 + 2 * (v9 - v22));
    if ( v22 == -512 || v17 + v9 <= v24 )
      v26 = 2 * (v17 + v9 - v22);
    else
      v26 = 1024LL;
    v27 = v26 + v23;
    if ( (unsigned __int64)v25 < v26 + v23 )
    {
      v23 = (__int64)a5;
      v28 = v49;
      while ( 1 )
      {
        v29 = *v25;
        v24 = *v25;
        if ( (*v25 & 0x3FFF) == 0x3FFF )
          break;
        v30 = (unsigned int)v24 >> 14;
        if ( (v29 & 0x3FFF) != 0 )
        {
          if ( (_DWORD)v30 == a4 )
            ++dword_140C4EB00;
          else
            ++dword_140C4EB04;
        }
        else
        {
          ++v20[7];
          if ( (_DWORD)v30 == a4 )
          {
            ++dword_140C4EB0C;
          }
          else
          {
            if ( v56 && (v29 & 0xC000) == 0x4000 && !v28 )
            {
              ++dword_140C4EB10;
              if ( !v11 )
              {
                v11 = v58;
                v14 = (unsigned __int64 *)&v58[48];
              }
              *v14++ = v9;
              if ( v14 == (unsigned __int64 *)(v11 + 176) )
              {
                ++dword_140C4EB08;
                *(_QWORD *)v11 = 0LL;
                *((_DWORD *)v11 + 2) = 131248;
                *((_QWORD *)v11 + 4) = 0LL;
                *((_QWORD *)v11 + 5) = 0x10000LL;
                v35 = MiFlushCacheMdl(1LL, v30, v23);
                v36 = v49;
                v17 = v53;
                v11 = 0LL;
                if ( v35 )
                  v36 = 1;
                v49 = v36;
                v28 = v36;
              }
            }
            v23 = (__int64)a5;
            v29 = (_WORD)a4 << 14;
          }
        }
        if ( v23 )
          *(_DWORD *)v23 |= 1 << (v29 >> 14);
        v24 = 1LL;
        --v17;
        ++v9;
        v53 = v17;
        *v25++ = (v29 ^ (v29 + 1)) & 0x3FFF ^ v29;
        if ( (unsigned __int64)v25 >= v27 )
          goto LABEL_34;
      }
      v12 = v54;
      v52 = -1073741670;
      if ( v9 != v54 )
        v13 = v9;
      goto LABEL_37;
    }
LABEL_34:
    if ( v49 )
    {
      v37 = (_WORD *)v20[6];
      v24 = (unsigned __int64)(v37 + 512);
      if ( v37 < v37 + 512 )
      {
        v23 = 0x3FFFLL;
        do
        {
          if ( (*v37 & 0x3FFF) == 0 )
            *v37 |= 0xC000u;
          ++v37;
        }
        while ( (unsigned __int64)v37 < v24 );
        CurrentIrql = v57;
        v17 = v53;
      }
    }
    if ( !v17 )
    {
      v12 = v54;
LABEL_37:
      if ( v11 )
      {
        ++dword_140C4EB08;
        v38 = (char *)v14 - v11;
        *(_QWORD *)v11 = 0LL;
        *((_QWORD *)v11 + 4) = 0LL;
        *((_DWORD *)v11 + 11) = 0;
        *((_WORD *)v11 + 5) = 2;
        v39 = (unsigned __int64)(unsigned int)((v38 - 48) >> 3) << 12;
        *((_DWORD *)v11 + 10) = v39;
        *((_WORD *)v11 + 4) = 8 * (((v38 - 48) >> 3) + 6);
        MiFlushCacheMdl(v39, v24, v23);
      }
      goto LABEL_39;
    }
  }
  Pool = MiAllocatePool(64, 0x440uLL, 0x6F49694Du);
  v20 = Pool;
  if ( Pool )
  {
    Pool[5] = v9 & 0xFFFFFFFFFFFFFE00uLL;
    Pool[6] = Pool + 8;
    MiInitializeIoPageNodeArray((__int64)Pool);
    goto LABEL_17;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4EAC0);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v40 = KeGetCurrentIrql();
      if ( v40 <= 0xFu && CurrentIrql <= 0xFu && v40 >= 2u )
      {
        v41 = KeGetCurrentPrcb();
        v42 = v41->SchedulerAssist;
        v43 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v44 = (v43 & v42[5]) == 0;
        v42[5] &= v43;
        if ( v44 )
          KiRemoveSystemWorkPriorityKick(v41);
      }
    }
  }
  __writecr8(CurrentIrql);
  MiDereferenceIoPages(a1, v54, v9 - v54);
  return 3221225626LL;
}
