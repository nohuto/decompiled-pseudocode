/*
 * XREFs of MiReferenceIoPages @ 0x1402176E4
 * Callers:
 *     MiProbeLockFrame @ 0x1402AF5D0 (MiProbeLockFrame.c)
 *     MiFillSystemPtes @ 0x1402CB7F0 (MiFillSystemPtes.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B89C4 (MiMapContiguousMemoryLarge.c)
 *     MmRotatePhysicalView @ 0x1405E48E0 (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076B860 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407C3128 (MiMapViewOfPhysicalSection.c)
 *     MiAddLoaderHalIoPte @ 0x140A63830 (MiAddLoaderHalIoPte.c)
 * Callees:
 *     MiIoSpaceIsConstant @ 0x140217AE0 (MiIoSpaceIsConstant.c)
 *     MiDereferenceIoPages @ 0x1402183E8 (MiDereferenceIoPages.c)
 *     MiRemoveUnmappedIoNode @ 0x1402189D0 (MiRemoveUnmappedIoNode.c)
 *     MiInitializeIoPageNodeArray @ 0x140218A94 (MiInitializeIoPageNodeArray.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiFlushCacheMdl @ 0x1405546F8 (MiFlushCacheMdl.c)
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
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // bp
  _QWORD *v20; // rdi
  _QWORD *v21; // rsi
  __int64 v22; // r8
  __int64 Pool; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int16 *v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // rbp
  int v29; // r10d
  unsigned __int16 v30; // ax
  __int64 v31; // rdx
  unsigned __int64 v33; // rax
  _QWORD *v34; // rax
  _DWORD *SchedulerAssist; // r9
  int v36; // eax
  int v37; // ecx
  _WORD *v38; // rcx
  __int64 v39; // r13
  unsigned __int64 v40; // rcx
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  bool v45; // zf
  unsigned __int8 v46; // al
  struct _KPRCB *CurrentPrcb; // r11
  _DWORD *v48; // r10
  int v49; // eax
  int v50; // [rsp+24h] [rbp-154h]
  unsigned int v53; // [rsp+30h] [rbp-148h]
  __int64 v54; // [rsp+38h] [rbp-140h]
  unsigned __int64 v55; // [rsp+48h] [rbp-130h]
  _QWORD **v56; // [rsp+50h] [rbp-128h]
  __int64 *v57; // [rsp+58h] [rbp-120h]
  unsigned __int8 v58; // [rsp+70h] [rbp-108h]
  _BYTE v59[176]; // [rsp+80h] [rbp-F8h] BYREF

  v8 = (int)a1;
  v54 = a3;
  memset(v59, 0, sizeof(v59));
  if ( a5 )
    *a5 = 0;
  if ( a6 )
    *a6 = 0LL;
  v53 = 0;
  v50 = 0;
  v9 = a2 & 0xFFFFFFFFFLL;
  v55 = v9;
  v56 = (_QWORD **)&xmmword_140C4EC88 + v8;
  v10 = &qword_140C4EC98;
  v11 = 0LL;
  v12 = v9;
  if ( (_DWORD)v8 != 1 )
    v10 = 0LL;
  v13 = -1LL;
  v57 = v10;
  v14 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v58 = CurrentIrql;
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
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4EC80);
  v18 = a3;
  if ( !a3 )
  {
LABEL_39:
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4EC80);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v46 = KeGetCurrentIrql();
        if ( v46 <= 0xFu && CurrentIrql <= 0xFu && v46 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v48 = CurrentPrcb->SchedulerAssist;
          v49 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v45 = (v49 & v48[5]) == 0;
          v48[5] &= v49;
          if ( v45 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v13 != -1 )
      MiDereferenceIoPages(a1, v12, v13 - v12);
    return v53;
  }
  while ( 1 )
  {
    v19 = 0;
    v20 = *v56;
    if ( *v56 )
    {
      while ( 1 )
      {
        v33 = v20[5];
        if ( v9 < v33 )
        {
          v34 = (_QWORD *)*v20;
          if ( !*v20 )
            break;
        }
        else
        {
          if ( v9 < v33 + 512 )
          {
            v21 = v20;
            goto LABEL_19;
          }
          v34 = (_QWORD *)v20[1];
          if ( !v34 )
          {
            v19 = 1;
            break;
          }
        }
        v20 = v34;
      }
    }
    if ( !v57 )
      break;
    v21 = (_QWORD *)MiRemoveUnmappedIoNode(v57, v9, v17, v18);
    if ( !v21 )
      break;
LABEL_17:
    LOBYTE(v22) = v19;
    RtlAvlInsertNodeEx(v56, v20, v22, v21);
    v18 = v54;
LABEL_19:
    if ( a6 && !*a6 )
      *a6 = v21;
    v24 = v21[5];
    v17 = v21[6];
    v25 = v24 + 512;
    v26 = (unsigned __int16 *)(v17 + 2 * (v9 - v24));
    if ( v24 == -512 || v18 + v9 <= v25 )
      v27 = 2 * (v18 + v9 - v24);
    else
      v27 = 1024LL;
    v28 = v27 + v17;
    if ( (unsigned __int64)v26 < v27 + v17 )
    {
      v17 = (__int64)a5;
      v29 = v50;
      while ( 1 )
      {
        v30 = *v26;
        v25 = *v26;
        if ( (*v26 & 0x3FFF) == 0x3FFF )
          break;
        v31 = (unsigned int)v25 >> 14;
        if ( (v30 & 0x3FFF) != 0 )
        {
          if ( (_DWORD)v31 == a4 )
            ++dword_140C4ECC0;
          else
            ++dword_140C4ECC4;
        }
        else
        {
          ++v21[7];
          if ( (_DWORD)v31 == a4 )
          {
            ++dword_140C4ECCC;
          }
          else
          {
            if ( v57 && (v30 & 0xC000) == 0x4000 && !v29 )
            {
              ++dword_140C4ECD0;
              if ( !v11 )
              {
                v11 = v59;
                v14 = (unsigned __int64 *)&v59[48];
              }
              *v14++ = v9;
              if ( v14 == (unsigned __int64 *)(v11 + 176) )
              {
                ++dword_140C4ECC8;
                *(_QWORD *)v11 = 0LL;
                *((_DWORD *)v11 + 2) = 131248;
                *((_QWORD *)v11 + 4) = 0LL;
                *((_QWORD *)v11 + 5) = 0x10000LL;
                v36 = MiFlushCacheMdl(1LL, v31, v17);
                v37 = v50;
                v18 = v54;
                v11 = 0LL;
                if ( v36 )
                  v37 = 1;
                v50 = v37;
                v29 = v37;
              }
            }
            v17 = (__int64)a5;
            v30 = (_WORD)a4 << 14;
          }
        }
        if ( v17 )
          *(_DWORD *)v17 |= 1 << (v30 >> 14);
        v25 = 1LL;
        --v18;
        ++v9;
        v54 = v18;
        *v26++ = (v30 ^ (v30 + 1)) & 0x3FFF ^ v30;
        if ( (unsigned __int64)v26 >= v28 )
          goto LABEL_34;
      }
      v12 = v55;
      v53 = -1073741670;
      if ( v9 != v55 )
        v13 = v9;
      goto LABEL_37;
    }
LABEL_34:
    if ( v50 )
    {
      v38 = (_WORD *)v21[6];
      v25 = (unsigned __int64)(v38 + 512);
      if ( v38 < v38 + 512 )
      {
        v17 = 0x3FFFLL;
        do
        {
          if ( (*v38 & 0x3FFF) == 0 )
            *v38 |= 0xC000u;
          ++v38;
        }
        while ( (unsigned __int64)v38 < v25 );
        CurrentIrql = v58;
        v18 = v54;
      }
    }
    if ( !v18 )
    {
      v12 = v55;
LABEL_37:
      if ( v11 )
      {
        ++dword_140C4ECC8;
        v39 = (char *)v14 - v11;
        *(_QWORD *)v11 = 0LL;
        *((_QWORD *)v11 + 4) = 0LL;
        *((_DWORD *)v11 + 11) = 0;
        *((_WORD *)v11 + 5) = 2;
        v40 = (unsigned __int64)(unsigned int)((v39 - 48) >> 3) << 12;
        *((_DWORD *)v11 + 10) = v40;
        *((_WORD *)v11 + 4) = 8 * (((v39 - 48) >> 3) + 6);
        MiFlushCacheMdl(v40, v25, v17);
      }
      goto LABEL_39;
    }
  }
  Pool = MiAllocatePool(64LL, 1088LL, 1867082061LL, v18);
  v21 = (_QWORD *)Pool;
  if ( Pool )
  {
    *(_QWORD *)(Pool + 40) = v9 & 0xFFFFFFFFFFFFFE00uLL;
    *(_QWORD *)(Pool + 48) = Pool + 64;
    MiInitializeIoPageNodeArray(Pool);
    goto LABEL_17;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4EC80);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v41 = KeGetCurrentIrql();
      if ( v41 <= 0xFu && CurrentIrql <= 0xFu && v41 >= 2u )
      {
        v42 = KeGetCurrentPrcb();
        v43 = v42->SchedulerAssist;
        v44 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v45 = (v44 & v43[5]) == 0;
        v43[5] &= v44;
        if ( v45 )
          KiRemoveSystemWorkPriorityKick(v42);
      }
    }
  }
  __writecr8(CurrentIrql);
  MiDereferenceIoPages(a1, v55, v9 - v55);
  return 3221225626LL;
}
