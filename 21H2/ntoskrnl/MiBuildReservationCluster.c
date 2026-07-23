/*
 * XREFs of MiBuildReservationCluster @ 0x140386F40
 * Callers:
 *     MiGatherPagefilePages @ 0x140256844 (MiGatherPagefilePages.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140242220 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x1402422B0 (MiRefPageFileSpaceBitmaps.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     MiReferencePageForModifiedWrite @ 0x140277E5C (MiReferencePageForModifiedWrite.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiUpdatePageFileHighInPte @ 0x1402E25D0 (MiUpdatePageFileHighInPte.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiGetPageForWriteCluster @ 0x14038781C (MiGetPageForWriteCluster.c)
 *     MiAddToReservationCluster @ 0x140387A04 (MiAddToReservationCluster.c)
 *     MiReleasePageFileSectionInfo @ 0x140387BD4 (MiReleasePageFileSectionInfo.c)
 *     MiGetPageFileSectionForReservation @ 0x140387C10 (MiGetPageFileSectionForReservation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiBuildReservationCluster(_QWORD *a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  __int64 v4; // rsi
  __int16 v5; // bx
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rdi
  __int64 v12; // r14
  unsigned __int64 v13; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v16; // eax
  bool v17; // zf
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rbx
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // eax
  unsigned int v25; // esi
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  int v28; // eax
  _DWORD *v29; // r8
  __int64 v30; // rdi
  unsigned __int64 v31; // r13
  __int64 v32; // r8
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  __int64 v37; // r8
  _DWORD *v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rax
  _QWORD *v41; // rax
  unsigned __int64 v42; // r15
  unsigned __int64 ValidPte; // rbx
  int v44; // r14d
  __int64 v45; // r14
  __int64 v46; // r15
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // rdi
  __int64 v50; // r14
  __int64 updated; // rbx
  unsigned __int64 v52; // r12
  __int64 v53; // r12
  int v54; // r13d
  __int64 v55; // r9
  int v56; // r9d
  __int64 v57; // rax
  int v58; // r13d
  unsigned int v59; // ecx
  __int64 v60; // r15
  unsigned __int64 v61; // rbx
  __int64 v62; // r15
  __int64 v63; // rbx
  __int64 *v64; // r14
  int v65; // r9d
  __int64 v66; // rax
  _QWORD *v67; // r15
  __int64 *v68; // rdx
  unsigned __int64 v69; // rbx
  __int64 v70; // r14
  unsigned __int64 v71; // rdi
  __int64 v72; // rdx
  _DWORD *v73; // r8
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // r9
  int v76; // eax
  unsigned __int8 v77; // al
  struct _KPRCB *v78; // r9
  int v79; // eax
  _DWORD *v80; // r8
  __int64 v81; // rcx
  unsigned int v82; // r8d
  __int64 v83; // rdi
  _DWORD *v84; // rax
  int v86; // [rsp+28h] [rbp-99h]
  int v87; // [rsp+48h] [rbp-79h] BYREF
  int v88; // [rsp+4Ch] [rbp-75h] BYREF
  int v89; // [rsp+50h] [rbp-71h]
  void *Src; // [rsp+58h] [rbp-69h]
  __int64 v91; // [rsp+60h] [rbp-61h] BYREF
  __int64 v92; // [rsp+68h] [rbp-59h]
  unsigned int v93; // [rsp+70h] [rbp-51h]
  __int64 v94; // [rsp+78h] [rbp-49h]
  __int128 v95; // [rsp+80h] [rbp-41h] BYREF
  __int128 v96; // [rsp+90h] [rbp-31h]
  __int64 v97; // [rsp+A0h] [rbp-21h]
  _QWORD *v98; // [rsp+A8h] [rbp-19h]
  __int128 v99; // [rsp+B0h] [rbp-11h] BYREF
  __int128 v100; // [rsp+C0h] [rbp-1h]
  __int64 v101; // [rsp+D0h] [rbp+Fh]
  _QWORD *v102; // [rsp+128h] [rbp+67h]

  v102 = a1;
  v4 = *(_QWORD *)(a2 + 248);
  v5 = *(_WORD *)(a2 + 204);
  v88 = 0;
  Src = a1;
  v87 = 0;
  v89 = 0;
  v97 = 0LL;
  v101 = 0LL;
  v95 = 0LL;
  v96 = 0LL;
  v99 = 0LL;
  v100 = 0LL;
  MiRefPageFileSpaceBitmaps((int *)a2, (__int64)&v95);
  LODWORD(v91) = 0;
  v9 = v5 & 0xF;
  v10 = 5 * v9;
  v11 = *(_QWORD *)(v4 + 40 * v9 + 2832);
  if ( v11 == 0xFFFFFFFFFLL )
    goto LABEL_116;
  while ( 1 )
  {
    v12 = 48 * v11 - 0x58000000000LL;
    v13 = (unsigned __int8)MiLockPageInline(v12, v6, v7, SchedulerAssist);
    if ( v11 == *(_QWORD *)(v4 + 8 * v10 + 2832) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v6 = -1LL << ((unsigned __int8)v13 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)v6;
          v17 = (v16 & SchedulerAssist[5]) == 0;
          v7 = (unsigned int)v16 & SchedulerAssist[5];
          SchedulerAssist[5] = v7;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
LABEL_24:
    v11 = *(_QWORD *)(v4 + 8 * v10 + 2832);
    if ( v11 == 0xFFFFFFFFFLL )
      goto LABEL_116;
  }
  v18 = *(_QWORD *)(v12 + 16);
  if ( qword_140C4DF80 && (v18 & 0x10) == 0 )
    v18 &= ~qword_140C4DF80;
  v19 = HIDWORD(v18);
  if ( (unsigned int)v19 < DWORD2(v95) )
  {
    if ( _bittest64((const signed __int64 *)v96, v19) )
    {
      MiUnlinkPageFromList(v12, 0);
      v20 = *(_QWORD *)(v12 + 16);
      *(_QWORD *)(v12 + 16) = v20 & 0xFFFFFFFFFFFFFFFDuLL;
      MiInsertPageInList(v12, 8u);
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v21 = KeGetCurrentIrql();
          if ( v21 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v21 >= 2u )
          {
            v22 = KeGetCurrentPrcb();
            v23 = v22->SchedulerAssist;
            v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v17 = (v24 & v23[5]) == 0;
            v23[5] &= v24;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
      }
      __writecr8(v13);
      MiReleasePageFileInfo(v4, v20, 0);
      goto LABEL_24;
    }
    MiReferencePageForModifiedWrite(v12, 1);
    v25 = 1;
    *v102 = v11;
    if ( *a3 == 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v26 = KeGetCurrentIrql();
          if ( v26 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v26 >= 2u )
          {
            v27 = KeGetCurrentPrcb();
            v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v29 = v27->SchedulerAssist;
            v17 = (v28 & v29[5]) == 0;
            v29[5] &= v28;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(v27);
          }
        }
      }
      __writecr8(v13);
      goto LABEL_117;
    }
    v30 = *(_QWORD *)(v12 + 16);
    v31 = *(_QWORD *)(v12 + 8) | 0x8000000000000000uLL;
    v92 = *(_QWORD *)(v12 + 40) & 0xFFFFFFFFFLL;
    v94 = 48 * v92 - 0x58000000000LL;
    MiLockNestedPageAtDpcInline(v94);
    v32 = v94;
    *(_QWORD *)(v94 + 24) ^= ((*(_QWORD *)(v94 + 24) + 1LL) ^ *(_QWORD *)(v94 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v33 = KeGetCurrentIrql();
        if ( v33 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v33 >= 2u )
        {
          v34 = KeGetCurrentPrcb();
          v35 = v34->SchedulerAssist;
          v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v17 = (v36 & v35[5]) == 0;
          v35[5] &= v36;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
    }
    __writecr8(v13);
    if ( (unsigned int)MI_PFN_IS_PROTO(v12)
      && (!(unsigned int)MiGetPageFileSectionForReservation(v31, &v99, 0LL)
       || (v40 = *(_QWORD *)(v12 + 24) >> 62, v89 = 1, (v40 & 1) != 0))
      || (v41 = (_QWORD *)MiReservePtes((__int64)&qword_140C4EF80, 1u, v37, (unsigned __int64)v38),
          v98 = v41,
          (v42 = (unsigned __int64)v41) == 0) )
    {
      v67 = Src;
LABEL_99:
      v70 = v94;
      v71 = (unsigned __int8)MiLockPageInline(v94, v39, v37, v38);
      MiDecrementShareCount(v70);
      _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v74 = KeGetCurrentIrql();
          if ( v74 <= 0xFu && (unsigned __int8)v71 <= 0xFu && v74 >= 2u )
          {
            v75 = KeGetCurrentPrcb();
            v76 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v71 + 1));
            v73 = v75->SchedulerAssist;
            v17 = (v76 & v73[5]) == 0;
            v72 = (unsigned int)v76 & v73[5];
            v73[5] = v72;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(v75);
          }
        }
      }
      __writecr8(v71);
      if ( v89 )
        MiReleasePageFileSectionInfo(&v99, v72, v73);
      goto LABEL_118;
    }
    ValidPte = MiMakeValidPte((unsigned __int64)v41, v92, 536870913);
    v44 = 0;
    if ( MiPteInShadowRange(v42) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v44 = 1;
        if ( !HIBYTE(word_140C4E048) )
        {
LABEL_51:
          if ( (ValidPte & 1) != 0 )
            ValidPte |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_51;
      }
    }
    *(_QWORD *)v42 = ValidPte;
    if ( v44 )
      MiWritePteShadow(v42, ValidPte);
    v45 = v42 << 25;
    v46 = 8 * ((v31 >> 3) & 0x1FF);
    v47 = v46 + (v45 >> 16);
    v92 = v47;
    if ( v89 )
      v48 = 8 * ((*((_QWORD *)&v100 + 1) >> 3) & 0x1FFLL);
    else
      v48 = 4088LL;
    v49 = v30 & 0xFFFFFFFFFC00FC1FuLL;
    v50 = (v48 - v46) >> 3;
    updated = v49;
    v52 = v49;
    v93 = *a3;
    if ( (unsigned int)v50 >= v93 - 1 )
      LODWORD(v50) = v93 - 1;
    if ( qword_140C4DF80 && (v49 & 0x10) == 0 )
      v52 = v49 & ~qword_140C4DF80;
    v53 = HIDWORD(v52);
    if ( v53 + (unsigned __int64)(unsigned int)v50 >= DWORD2(v95) )
      LODWORD(v50) = DWORD2(v95) - v53 - 1;
    v54 = v91;
    v55 = v47;
    if ( (_DWORD)v50 )
    {
      do
      {
        ++v53;
        v91 = v55 + 8;
        updated = MiUpdatePageFileHighInPte(updated, v53);
        v57 = MiGetPageForWriteCluster((unsigned int)&v95 + 8, v56, updated, v56, v86, (__int64)&v87, (__int64)&v88);
        if ( v57 == -1 )
          break;
        LODWORD(v50) = v50 - 1;
        ++v25;
        *++v102 = v57;
        if ( v57 == qword_140C4EDA8 )
          ++v54;
        if ( v88 == 3 && v25 >= 0x10 )
          break;
        v55 = v91;
      }
      while ( (_DWORD)v50 );
      LOWORD(v47) = v92;
    }
    v25 -= v87;
    v58 = v54 - v87;
    v59 = v93 - v25;
    LODWORD(v91) = v58;
    if ( v89 )
      v60 = v46 - 8 * (((unsigned __int64)v100 >> 3) & 0x1FF);
    else
      v60 = v47 & 0xFFF;
    v61 = v49;
    v62 = v60 >> 3;
    if ( (unsigned int)v62 >= v59 )
      v62 = v59;
    if ( qword_140C4DF80 && (v49 & 0x10) == 0 )
      v61 = v49 & ~qword_140C4DF80;
    v63 = HIDWORD(v61);
    if ( (unsigned int)v62 > (unsigned __int64)(v63 - 1) )
      v62 = (unsigned int)(v63 - 1);
    if ( (_DWORD)v62 )
    {
      v64 = (__int64 *)((char *)Src + 8 * v62);
      memmove(v64, Src, 8LL * v25);
      v87 = 0;
      do
      {
        --v63;
        v92 -= 8LL;
        v49 = MiUpdatePageFileHighInPte(v49, v63);
        v66 = MiGetPageForWriteCluster((unsigned int)&v95 + 8, v65, v49, v65, v86, (__int64)&v87, (__int64)&v88);
        if ( v66 == -1 )
          break;
        --v64;
        LODWORD(v62) = v62 - 1;
        ++v25;
        *v64 = v66;
        if ( v66 == qword_140C4EDA8 )
          ++v58;
      }
      while ( (v88 != 3 || v25 < 0x10) && (_DWORD)v62 );
      v67 = Src;
      v25 -= v87;
      LODWORD(v91) = v58 - v87;
      v68 = &v64[v87];
      if ( Src != v68 )
        memmove(Src, v68, 8LL * v25);
    }
    else
    {
      v67 = Src;
    }
    v69 = *(_QWORD *)(48LL * *v67 - 0x58000000000LL + 16);
    if ( qword_140C4DF80 && (v69 & 0x10) == 0 )
      v69 &= ~qword_140C4DF80;
    v19 = HIDWORD(v69);
    MiReleasePtes((__int64)&qword_140C4EF80, v98, 1u);
    goto LABEL_99;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v77 = KeGetCurrentIrql();
      if ( v77 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v77 >= 2u )
      {
        v78 = KeGetCurrentPrcb();
        v79 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v80 = v78->SchedulerAssist;
        v17 = (v79 & v80[5]) == 0;
        v80[5] &= v79;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(v78);
      }
    }
  }
  __writecr8(v13);
LABEL_116:
  v25 = 0;
  LODWORD(v19) = 0;
LABEL_117:
  v67 = Src;
LABEL_118:
  v81 = *a3;
  if ( v25 < (unsigned int)v81 && v25 && v25 + (unsigned __int64)(unsigned int)v19 < DWORD2(v95) )
  {
    if ( (unsigned __int64)(unsigned int)v19 + v81 <= DWORD2(v95) )
      v82 = *a3;
    else
      v82 = DWORD2(v95) - v19;
    v83 = a2;
    v25 += MiAddToReservationCluster(
             a2,
             (unsigned int)&v95 + 8,
             v82 - v25,
             (unsigned int)v19 + v25,
             (__int64)&v67[v25],
             (__int64)&v91);
  }
  else
  {
    v83 = a2;
  }
  v84 = MiDerefPageFileSpaceBitmaps(v83, (_DWORD **)&v95, 0);
  if ( v84 )
    ExFreePoolWithTag(v84, 0);
  *a3 = v25;
  *a4 = v25 - v91;
  return (unsigned int)v19;
}
