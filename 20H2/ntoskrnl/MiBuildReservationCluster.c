/*
 * XREFs of MiBuildReservationCluster @ 0x140386698
 * Callers:
 *     MiGatherPagefilePages @ 0x140341EC0 (MiGatherPagefilePages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiUnlinkPageFromList @ 0x140279090 (MiUnlinkPageFromList.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiDecrementShareCount @ 0x140290770 (MiDecrementShareCount.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiInsertPageInList @ 0x1402A9F50 (MiInsertPageInList.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiLockNestedPageAtDpcInline @ 0x14030DC80 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140322C30 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x140322CC0 (MiRefPageFileSpaceBitmaps.c)
 *     MiReferencePageForModifiedWrite @ 0x14034474C (MiReferencePageForModifiedWrite.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiUpdatePageFileHighInPte @ 0x140348DE0 (MiUpdatePageFileHighInPte.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     MiGetPageForWriteCluster @ 0x140386F74 (MiGetPageForWriteCluster.c)
 *     MiAddToReservationCluster @ 0x14038715C (MiAddToReservationCluster.c)
 *     MiReleasePageFileSectionInfo @ 0x14038732C (MiReleasePageFileSectionInfo.c)
 *     MiGetPageFileSectionForReservation @ 0x140387368 (MiGetPageFileSectionForReservation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // esi
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  int v31; // eax
  _DWORD *v32; // r8
  __int64 v33; // rdi
  unsigned __int64 v34; // r13
  __int64 v35; // r8
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // r8
  _DWORD *v42; // r9
  __int64 v43; // rax
  _QWORD *v44; // rax
  unsigned __int64 v45; // r15
  unsigned __int64 ValidPte; // rbx
  int v47; // r14d
  __int64 v48; // r8
  __int64 v49; // r14
  __int64 v50; // r15
  __int64 v51; // r8
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // r14
  __int64 updated; // rbx
  unsigned __int64 v56; // r12
  __int64 v57; // r12
  int v58; // r13d
  __int64 v59; // r9
  int v60; // r9d
  __int64 v61; // rax
  int v62; // r13d
  unsigned int v63; // ecx
  __int64 v64; // r15
  unsigned __int64 v65; // rbx
  __int64 v66; // r15
  __int64 v67; // rbx
  __int64 *v68; // r14
  int v69; // r9d
  __int64 v70; // rax
  _QWORD *v71; // r15
  __int64 *v72; // rdx
  unsigned __int64 v73; // rbx
  __int64 v74; // r14
  unsigned __int64 v75; // rdi
  __int64 v76; // rdx
  _DWORD *v77; // r8
  unsigned __int8 v78; // al
  struct _KPRCB *v79; // r9
  int v80; // eax
  unsigned __int8 v81; // al
  struct _KPRCB *v82; // r9
  int v83; // eax
  _DWORD *v84; // r8
  __int64 v85; // rcx
  unsigned int v86; // r8d
  __int64 v87; // rdi
  _DWORD *v88; // rax
  int v90; // [rsp+28h] [rbp-99h]
  int v91; // [rsp+48h] [rbp-79h] BYREF
  int v92; // [rsp+4Ch] [rbp-75h] BYREF
  int v93; // [rsp+50h] [rbp-71h]
  void *Src; // [rsp+58h] [rbp-69h]
  __int64 v95; // [rsp+60h] [rbp-61h] BYREF
  __int64 v96; // [rsp+68h] [rbp-59h]
  unsigned int v97; // [rsp+70h] [rbp-51h]
  __int64 v98; // [rsp+78h] [rbp-49h]
  __int128 v99; // [rsp+80h] [rbp-41h] BYREF
  __int128 v100; // [rsp+90h] [rbp-31h]
  __int64 v101; // [rsp+A0h] [rbp-21h]
  _QWORD *v102; // [rsp+A8h] [rbp-19h]
  __int128 v103; // [rsp+B0h] [rbp-11h] BYREF
  __int128 v104; // [rsp+C0h] [rbp-1h]
  __int64 v105; // [rsp+D0h] [rbp+Fh]
  _QWORD *v106; // [rsp+128h] [rbp+67h]

  v106 = a1;
  v4 = *(_QWORD *)(a2 + 248);
  v5 = *(_WORD *)(a2 + 204);
  v92 = 0;
  Src = a1;
  v91 = 0;
  v93 = 0;
  v101 = 0LL;
  v105 = 0LL;
  v99 = 0LL;
  v100 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  MiRefPageFileSpaceBitmaps((int *)a2, (__int64)&v99);
  LODWORD(v95) = 0;
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
  if ( qword_140C4DDC0 && (v18 & 0x10) == 0 )
    v18 &= ~qword_140C4DDC0;
  v19 = HIDWORD(v18);
  if ( (unsigned int)v19 < DWORD2(v99) )
  {
    if ( _bittest64((const signed __int64 *)v100, v19) )
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
    v28 = 1;
    *v106 = v11;
    if ( *a3 == 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v29 = KeGetCurrentIrql();
          if ( v29 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v29 >= 2u )
          {
            v30 = KeGetCurrentPrcb();
            v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
            v32 = v30->SchedulerAssist;
            v17 = (v31 & v32[5]) == 0;
            v32[5] &= v31;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(v30);
          }
        }
      }
      __writecr8(v13);
      goto LABEL_117;
    }
    v33 = *(_QWORD *)(v12 + 16);
    v34 = *(_QWORD *)(v12 + 8) | 0x8000000000000000uLL;
    v96 = *(_QWORD *)(v12 + 40) & 0xFFFFFFFFFLL;
    v98 = 48 * v96 - 0x58000000000LL;
    MiLockNestedPageAtDpcInline(v98, v25, v26, v27);
    v35 = v98;
    *(_QWORD *)(v98 + 24) ^= ((*(_QWORD *)(v98 + 24) + 1LL) ^ *(_QWORD *)(v98 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v36 = KeGetCurrentIrql();
        if ( v36 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v36 >= 2u )
        {
          v37 = KeGetCurrentPrcb();
          v38 = v37->SchedulerAssist;
          v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v17 = (v39 & v38[5]) == 0;
          v38[5] &= v39;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v37);
        }
      }
    }
    __writecr8(v13);
    if ( (unsigned int)MI_PFN_IS_PROTO(v12)
      && (!(unsigned int)MiGetPageFileSectionForReservation(v34, &v103, 0LL)
       || (v43 = *(_QWORD *)(v12 + 24) >> 62, v93 = 1, (v43 & 1) != 0))
      || (v44 = (_QWORD *)MiReservePtes((__int64)&qword_140C4EDC0, 1u), v102 = v44, (v45 = (unsigned __int64)v44) == 0) )
    {
      v71 = Src;
LABEL_99:
      v74 = v98;
      v75 = (unsigned __int8)MiLockPageInline(v98, v40, v41, v42);
      MiDecrementShareCount(v74);
      _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v78 = KeGetCurrentIrql();
          if ( v78 <= 0xFu && (unsigned __int8)v75 <= 0xFu && v78 >= 2u )
          {
            v79 = KeGetCurrentPrcb();
            v80 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v75 + 1));
            v77 = v79->SchedulerAssist;
            v17 = (v80 & v77[5]) == 0;
            v76 = (unsigned int)v80 & v77[5];
            v77[5] = v76;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick(v79);
          }
        }
      }
      __writecr8(v75);
      if ( v93 )
        MiReleasePageFileSectionInfo(&v103, v76, v77);
      goto LABEL_118;
    }
    ValidPte = MiMakeValidPte((unsigned __int64)v44, v96, 536870913LL, (__int64)v42);
    v47 = 0;
    if ( MiPteInShadowRange(v45) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v47 = 1;
        if ( !HIBYTE(word_140C4DE88) )
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
    *(_QWORD *)v45 = ValidPte;
    if ( v47 )
      MiWritePteShadow(v45, ValidPte, v48);
    v49 = v45 << 25;
    v50 = 8 * ((v34 >> 3) & 0x1FF);
    v51 = v50 + (v49 >> 16);
    v96 = v51;
    if ( v93 )
      v52 = 8 * ((*((_QWORD *)&v104 + 1) >> 3) & 0x1FFLL);
    else
      v52 = 4088LL;
    v53 = v33 & 0xFFFFFFFFFC00FC1FuLL;
    v54 = (v52 - v50) >> 3;
    updated = v53;
    v56 = v53;
    v97 = *a3;
    if ( (unsigned int)v54 >= v97 - 1 )
      LODWORD(v54) = v97 - 1;
    if ( qword_140C4DDC0 && (v53 & 0x10) == 0 )
      v56 = v53 & ~qword_140C4DDC0;
    v57 = HIDWORD(v56);
    if ( v57 + (unsigned __int64)(unsigned int)v54 >= DWORD2(v99) )
      LODWORD(v54) = DWORD2(v99) - v57 - 1;
    v58 = v95;
    v59 = v51;
    if ( (_DWORD)v54 )
    {
      do
      {
        ++v57;
        v95 = v59 + 8;
        updated = MiUpdatePageFileHighInPte(updated, v57);
        v61 = MiGetPageForWriteCluster((unsigned int)&v99 + 8, v60, updated, v60, v90, (__int64)&v91, (__int64)&v92);
        if ( v61 == -1 )
          break;
        LODWORD(v54) = v54 - 1;
        ++v28;
        *++v106 = v61;
        if ( v61 == qword_140C4EBE8 )
          ++v58;
        if ( v92 == 3 && v28 >= 0x10 )
          break;
        v59 = v95;
      }
      while ( (_DWORD)v54 );
      LOWORD(v51) = v96;
    }
    v28 -= v91;
    v62 = v58 - v91;
    v63 = v97 - v28;
    LODWORD(v95) = v62;
    if ( v93 )
      v64 = v50 - 8 * (((unsigned __int64)v104 >> 3) & 0x1FF);
    else
      v64 = v51 & 0xFFF;
    v65 = v53;
    v66 = v64 >> 3;
    if ( (unsigned int)v66 >= v63 )
      v66 = v63;
    if ( qword_140C4DDC0 && (v53 & 0x10) == 0 )
      v65 = v53 & ~qword_140C4DDC0;
    v67 = HIDWORD(v65);
    if ( (unsigned int)v66 > (unsigned __int64)(v67 - 1) )
      v66 = (unsigned int)(v67 - 1);
    if ( (_DWORD)v66 )
    {
      v68 = (__int64 *)((char *)Src + 8 * v66);
      memmove(v68, Src, 8LL * v28);
      v91 = 0;
      do
      {
        --v67;
        v96 -= 8LL;
        v53 = MiUpdatePageFileHighInPte(v53, v67);
        v70 = MiGetPageForWriteCluster((unsigned int)&v99 + 8, v69, v53, v69, v90, (__int64)&v91, (__int64)&v92);
        if ( v70 == -1 )
          break;
        --v68;
        LODWORD(v66) = v66 - 1;
        ++v28;
        *v68 = v70;
        if ( v70 == qword_140C4EBE8 )
          ++v62;
      }
      while ( (v92 != 3 || v28 < 0x10) && (_DWORD)v66 );
      v71 = Src;
      v28 -= v91;
      LODWORD(v95) = v62 - v91;
      v72 = &v68[v91];
      if ( Src != v72 )
        memmove(Src, v72, 8LL * v28);
    }
    else
    {
      v71 = Src;
    }
    v73 = *(_QWORD *)(48LL * *v71 - 0x58000000000LL + 16);
    if ( qword_140C4DDC0 && (v73 & 0x10) == 0 )
      v73 &= ~qword_140C4DDC0;
    v19 = HIDWORD(v73);
    MiReleasePtes((__int64)&qword_140C4EDC0, v102, 1u);
    goto LABEL_99;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v81 = KeGetCurrentIrql();
      if ( v81 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v81 >= 2u )
      {
        v82 = KeGetCurrentPrcb();
        v83 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v84 = v82->SchedulerAssist;
        v17 = (v83 & v84[5]) == 0;
        v84[5] &= v83;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(v82);
      }
    }
  }
  __writecr8(v13);
LABEL_116:
  v28 = 0;
  LODWORD(v19) = 0;
LABEL_117:
  v71 = Src;
LABEL_118:
  v85 = *a3;
  if ( v28 < (unsigned int)v85 && v28 && v28 + (unsigned __int64)(unsigned int)v19 < DWORD2(v99) )
  {
    if ( (unsigned __int64)(unsigned int)v19 + v85 <= DWORD2(v99) )
      v86 = *a3;
    else
      v86 = DWORD2(v99) - v19;
    v87 = a2;
    v28 += MiAddToReservationCluster(
             a2,
             (unsigned int)&v99 + 8,
             v86 - v28,
             (unsigned int)v19 + v28,
             (__int64)&v71[v28],
             (__int64)&v95);
  }
  else
  {
    v87 = a2;
  }
  v88 = MiDerefPageFileSpaceBitmaps(v87, (_DWORD **)&v99, 0);
  if ( v88 )
    ExFreePoolWithTag(v88, 0);
  *a3 = v28;
  *a4 = v28 - v95;
  return (unsigned int)v19;
}
