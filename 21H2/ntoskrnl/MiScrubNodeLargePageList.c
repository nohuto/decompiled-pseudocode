/*
 * XREFs of MiScrubNodeLargePageList @ 0x140557078
 * Callers:
 *     MiScrubNodeLargePages @ 0x1408D8928 (MiScrubNodeLargePages.c)
 * Callees:
 *     MiPageListCollision @ 0x14021981C (MiPageListCollision.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiRemoveFaultNode @ 0x1402458FC (MiRemoveFaultNode.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiGetUltraMapping @ 0x1402D8F50 (MiGetUltraMapping.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402E020C (MiMakeProtectionPfnCompatible.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiInsertLargePageInNodeList @ 0x1403097A0 (MiInsertLargePageInNodeList.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUnlinkNodeLargePages @ 0x1403F70E8 (MiUnlinkNodeLargePages.c)
 *     memset @ 0x140414300 (memset.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052FB70 (MmMarkPhysicalMemoryAsBad.c)
 *     MiScrubInterrupted @ 0x140563C98 (MiScrubInterrupted.c)
 *     MiScrubPage @ 0x140564534 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubNodeLargePageList(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        signed int a7,
        unsigned __int64 *a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // r8
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int64 v14; // r13
  int v15; // esi
  __int64 v16; // rax
  unsigned int v17; // r9d
  ULONG_PTR v18; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // edi
  _QWORD *v23; // rax
  unsigned int v24; // ecx
  __int64 v25; // rcx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v27; // r8
  int v28; // r9d
  unsigned __int64 v29; // r10
  unsigned int v30; // r11d
  unsigned int v31; // edi
  unsigned int v32; // ebx
  _DWORD *SchedulerAssist; // r9
  __int64 v34; // rax
  __int64 v35; // r8
  _DWORD *v36; // r9
  __int64 v37; // rdi
  unsigned __int8 v38; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v40; // r9
  int v41; // eax
  bool v42; // zf
  __int64 v43; // rdx
  unsigned __int8 v44; // al
  unsigned __int64 v45; // rbx
  _BYTE *v46; // rcx
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  _DWORD *v49; // r9
  int v50; // eax
  unsigned __int64 UltraMapping; // r8
  __int64 v52; // rdx
  int ProtectionPfnCompatible; // eax
  __int64 v54; // r9
  unsigned int v55; // r8d
  unsigned __int64 ValidPte; // rbx
  __int64 v57; // r8
  _DWORD *v58; // r9
  int v59; // edi
  unsigned __int64 v60; // r14
  unsigned __int64 v61; // rdi
  unsigned __int64 v62; // rbx
  unsigned __int8 v63; // al
  unsigned __int8 v64; // di
  struct _KPRCB *v65; // r10
  int v66; // eax
  __int64 v67; // rdi
  unsigned __int64 v68; // rax
  __int64 v69; // rcx
  int v70; // ebx
  __int64 v71; // rdx
  __int64 v72; // r8
  _DWORD *v73; // r9
  unsigned __int8 v74; // r11
  char v75; // di
  unsigned __int8 v76; // al
  struct _KPRCB *v77; // r10
  int v78; // eax
  unsigned __int8 v79; // al
  unsigned __int8 v80; // bl
  struct _KPRCB *v81; // r10
  int v82; // eax
  __int64 v83; // rdx
  unsigned __int64 v84; // rbx
  unsigned __int8 v85; // al
  struct _KPRCB *v86; // r10
  _DWORD *v87; // r9
  int v88; // eax
  unsigned __int64 v89; // rdi
  __int64 v90; // r8
  unsigned __int64 v91; // r9
  ULONG_PTR v92; // rax
  unsigned __int8 v93; // [rsp+50h] [rbp-208h]
  unsigned __int8 v94; // [rsp+50h] [rbp-208h]
  _BYTE *v96; // [rsp+60h] [rbp-1F8h]
  int v97; // [rsp+68h] [rbp-1F0h]
  int v98; // [rsp+70h] [rbp-1E8h]
  int v99; // [rsp+78h] [rbp-1E0h]
  __int64 v100; // [rsp+80h] [rbp-1D8h]
  __int64 v101; // [rsp+90h] [rbp-1C8h]
  unsigned __int8 v102; // [rsp+98h] [rbp-1C0h]
  __int64 v103; // [rsp+A0h] [rbp-1B8h]
  unsigned int v104; // [rsp+A8h] [rbp-1B0h]
  unsigned int v106; // [rsp+B4h] [rbp-1A4h]
  __int64 v107; // [rsp+B8h] [rbp-1A0h]
  unsigned __int64 v108; // [rsp+C0h] [rbp-198h]
  __int64 v109; // [rsp+C8h] [rbp-190h]
  __int64 v110; // [rsp+D0h] [rbp-188h] BYREF
  _DWORD v111[6]; // [rsp+D8h] [rbp-180h] BYREF
  __int64 v112; // [rsp+F0h] [rbp-168h]
  unsigned __int64 v113; // [rsp+F8h] [rbp-160h]
  unsigned __int64 *v114; // [rsp+100h] [rbp-158h]
  _QWORD *v115; // [rsp+108h] [rbp-150h]
  _QWORD *v116; // [rsp+110h] [rbp-148h]
  __int64 v117; // [rsp+118h] [rbp-140h]
  __int64 v118; // [rsp+120h] [rbp-138h]
  __int64 v119; // [rsp+130h] [rbp-128h]
  unsigned __int64 v120; // [rsp+138h] [rbp-120h]
  __int64 v121; // [rsp+140h] [rbp-118h] BYREF
  unsigned __int64 v122; // [rsp+148h] [rbp-110h]
  _QWORD *v123; // [rsp+150h] [rbp-108h]
  struct _KTHREAD *v124; // [rsp+158h] [rbp-100h]
  __int128 v125; // [rsp+160h] [rbp-F8h] BYREF
  __int64 v126; // [rsp+170h] [rbp-E8h]
  __int64 v127; // [rsp+178h] [rbp-E0h]
  __int64 v128; // [rsp+180h] [rbp-D8h]
  __int64 v129; // [rsp+188h] [rbp-D0h]
  unsigned __int64 v130; // [rsp+190h] [rbp-C8h]
  volatile signed __int64 *v131; // [rsp+198h] [rbp-C0h]
  unsigned __int64 v132; // [rsp+1A0h] [rbp-B8h]
  unsigned __int64 v133; // [rsp+1A8h] [rbp-B0h]
  _BYTE v134[80]; // [rsp+1B0h] [rbp-A8h] BYREF
  __int128 v135; // [rsp+200h] [rbp-58h] BYREF

  v10 = a4;
  v11 = a2;
  v117 = a1;
  v129 = a1;
  v111[2] = a2;
  v111[4] = a3;
  v114 = a8;
  v112 = a9;
  v118 = a10;
  memset(v134, 0, 0x48uLL);
  v135 = 0LL;
  v121 = 0LL;
  v110 = 0LL;
  v125 = 0LL;
  v126 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v124 = CurrentThread;
  v101 = 0LL;
  v14 = 0LL;
  v15 = 64;
  v16 = MiLargePageSizes[a3];
  v100 = v16;
  v127 = v16;
  v17 = a5;
  if ( a5 )
  {
    v96 = v134;
    v134[71] = 1;
    LOBYTE(v14) = a3 <= 1;
    if ( a3 > 1 )
    {
      v18 = MiReservePtes((__int64)&qword_140C4EF80, v16, v12, a5);
      v14 = v18;
      if ( !v18 )
        return 1LL;
      v101 = (__int64)(v18 << 25) >> 16;
      v17 = a5;
      CurrentThread = v124;
    }
  }
  else
  {
    v96 = 0LL;
  }
  v20 = *(_QWORD *)(v117 + 16) + 4544 * v11;
  v102 = 17;
  v120 = *v114;
  v130 = v120;
  v133 = v120;
  v132 = v120;
  *v114 = 0LL;
  v113 = 0LL;
  v122 = 0LL;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x100u;
  v104 = dword_140C4DFC0[a3];
  v111[1] = v104;
  v21 = (int)v17 + 2 * v10;
  v22 = a6;
  v23 = *(_QWORD **)(v20 + 1072LL * a3 + 8 * (a7 + 4 * (a6 + 4 * v21)) + 560);
  v24 = 0;
LABEL_8:
  v106 = v24;
  v123 = v23;
  v116 = v23;
  if ( v24 < v104 )
  {
    v25 = v23[2];
    v103 = v25;
    v115 = v23;
    CurrentIrql = v102;
    while ( 1 )
    {
      if ( !v25 || (_QWORD *)*v23 == v23 )
        goto LABEL_34;
      if ( (unsigned int)MiScrubInterrupted(v112, v21, 2LL) )
      {
        v31 = 0;
        v32 = v100;
        goto LABEL_138;
      }
      if ( v28 )
      {
        v15 &= ~4u;
        v97 = v15;
      }
      else
      {
        v15 |= 4u;
        v97 = v15;
        CurrentIrql = KeGetCurrentIrql();
        v102 = CurrentIrql;
        __writecr8(v27);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
      }
      if ( v29 )
        *(_QWORD *)(v29 + 32) = 0LL;
      v34 = MiUnlinkNodeLargePages(v117, v30, 1LL, v11, v22, a7, (__int64)&v135, v15, v29);
      v37 = v34;
      v107 = v34;
      if ( !v34 )
      {
        if ( !a5 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v38 = KeGetCurrentIrql();
              if ( v38 <= 0xFu && CurrentIrql <= 0xFu && v38 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v40 = CurrentPrcb->SchedulerAssist;
                v21 = -1LL << (CurrentIrql + 1);
                v41 = ~(unsigned __int16)v21;
                v42 = (v41 & v40[5]) == 0;
                v40[5] &= v41;
                if ( v42 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
        }
        v22 = a6;
LABEL_34:
        v24 = v106 + 1;
        v23 = v116 + 3;
        goto LABEL_8;
      }
      if ( !a5 )
      {
        v43 = (unsigned __int128)((v34 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
        v111[0] = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(v111, v43, v35, (__int64)v36);
          while ( *(__int64 *)(v37 + 24) < 0 );
        }
        *(_QWORD *)&v125 = (v37 + 0x58000000000LL) / 48;
        *((_QWORD *)&v125 + 1) = 0x100000001LL;
        CurrentIrql = v102;
        v126 = v102;
        MiInsertLargePageInNodeList((__int64)&v125);
        goto LABEL_40;
      }
      v44 = MiLockPageInline(v34, v21, v35, v36);
      v45 = v44;
      v93 = v44;
      v46 = v96;
      if ( v96[69] == 1 )
      {
        MiRemoveFaultNode((__int64)v96);
        _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v47 = KeGetCurrentIrql();
            if ( v47 <= 0xFu && (unsigned __int8)v45 <= 0xFu && v47 >= 2u )
            {
              v48 = KeGetCurrentPrcb();
              v49 = v48->SchedulerAssist;
              v21 = -1LL << ((unsigned __int8)v45 + 1);
              v50 = ~(unsigned __int16)v21;
              v42 = (v50 & v49[5]) == 0;
              v49[5] &= v50;
              if ( v42 )
                KiRemoveSystemWorkPriorityKick((__int64)v48);
            }
          }
        }
        __writecr8(v45);
        CurrentIrql = v102;
        goto LABEL_40;
      }
      if ( a3 > 1 )
      {
        UltraMapping = v101;
      }
      else
      {
        UltraMapping = MiGetUltraMapping((unsigned __int64 *)(v118 + 32LL * a3), a3, MiLargePageSizes[a3], 0);
        v101 = UltraMapping;
        v14 = ((UltraMapping >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        if ( !a3 )
        {
          v52 = 1LL;
          do
          {
            v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v52;
          }
          while ( v52 );
        }
        v46 = v96;
      }
      *((_QWORD *)v46 + 4) = v14;
      *((_DWORD *)v46 + 16) = a3;
      *((_QWORD *)v46 + 5) = UltraMapping;
      *((_QWORD *)v46 + 6) = UltraMapping + (v100 << 12) - 1;
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v37);
      v55 = ProtectionPfnCompatible | 0xA0000000;
      if ( a3 <= 1 )
        v55 = ProtectionPfnCompatible | 0xA4000000;
      ValidPte = MiMakeValidPte(v14, v54, v55);
      if ( a3 <= 1 )
      {
        v59 = 0;
        if ( MiPteInShadowRange(v14) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v59 = 1;
            if ( !HIBYTE(word_140C4E048) )
              goto LABEL_64;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
LABEL_64:
            if ( (ValidPte & 1) != 0 )
              ValidPte |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v14 = ValidPte;
        if ( v59 )
          MiWritePteShadow(v14, ValidPte);
        goto LABEL_82;
      }
      if ( v14 >= v14 + 8 * v100 )
        goto LABEL_81;
      v60 = v14 + 8 * v100;
      do
      {
        v61 = ValidPte;
        v98 = 0;
        if ( !MiPteInShadowRange(v14) )
          goto LABEL_77;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v98 = 1;
          if ( HIBYTE(word_140C4E048) )
            goto LABEL_77;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_77;
        }
        if ( (ValidPte & 1) != 0 )
          v61 = ValidPte | 0x8000000000000000uLL;
LABEL_77:
        *(_QWORD *)v14 = v61;
        if ( v98 )
          MiWritePteShadow(v14, v61);
        ValidPte ^= (ValidPte ^ ((ValidPte & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
        v14 += 8LL;
      }
      while ( v14 < v60 );
      v15 = v97;
      LODWORD(v11) = a2;
LABEL_81:
      v14 -= 8 * v100;
LABEL_82:
      v62 = v107;
      v131 = (volatile signed __int64 *)(v107 + 24);
      _InterlockedAnd64((volatile signed __int64 *)(v107 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v63 = KeGetCurrentIrql(), v63 <= 0xFu) )
      {
        v64 = v93;
        if ( v93 <= 0xFu && v63 >= 2u )
        {
          v65 = KeGetCurrentPrcb();
          v58 = v65->SchedulerAssist;
          v66 = ~(unsigned __int16)(-1LL << (v93 + 1));
          v42 = (v66 & v58[5]) == 0;
          v57 = (unsigned int)v66 & v58[5];
          v58[5] = v57;
          if ( v42 )
            KiRemoveSystemWorkPriorityKick((__int64)v65);
        }
      }
      else
      {
        v64 = v93;
      }
      __writecr8(v64);
      v128 = --v103;
      v99 = 0;
      v67 = v107;
      v109 = v107;
      v68 = v107 + 48 * v100;
      v108 = v68;
      v69 = v101;
      while ( 1 )
      {
        v119 = v69;
        if ( v62 >= v68 )
        {
          v83 = 0LL;
          goto LABEL_116;
        }
        v70 = MiScrubPage(v112, v62, v69, 0LL);
        v74 = MiLockPageInline(v67, v71, v72, v73);
        v94 = v74;
        v75 = v96[69];
        if ( v96[70] == 1 )
          v70 = 0;
        v99 = v70;
        if ( v75 == 1 || v70 < 0 )
          break;
        v67 = v109;
        _InterlockedAnd64((volatile signed __int64 *)(v109 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v76 = KeGetCurrentIrql();
            if ( v76 <= 0xFu && v74 <= 0xFu && v76 >= 2u )
            {
              v77 = KeGetCurrentPrcb();
              v58 = v77->SchedulerAssist;
              v78 = ~(unsigned __int16)(-1LL << (v74 + 1));
              v42 = (v78 & v58[5]) == 0;
              v57 = (unsigned int)v78 & v58[5];
              v58[5] = v57;
              if ( v42 )
              {
                KiRemoveSystemWorkPriorityKick((__int64)v77);
                v74 = v94;
              }
            }
          }
        }
        __writecr8(v74);
        v62 = v107 + 48;
        v107 += 48LL;
        v69 = v119 + 4096;
        v68 = v108;
      }
      MiRemoveFaultNode((__int64)v96);
      v42 = v75 == 0;
      v67 = v109;
      if ( v42 )
        MiPageListCollision(v109);
      _InterlockedAnd64((volatile signed __int64 *)(v109 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v79 = KeGetCurrentIrql(), v79 <= 0xFu) )
      {
        v80 = v94;
        if ( v94 <= 0xFu && v79 >= 2u )
        {
          v81 = KeGetCurrentPrcb();
          v58 = v81->SchedulerAssist;
          v82 = ~(unsigned __int16)(-1LL << (v94 + 1));
          v42 = (v82 & v58[5]) == 0;
          v57 = (unsigned int)v82 & v58[5];
          v58[5] = v57;
          if ( v42 )
            KiRemoveSystemWorkPriorityKick((__int64)v81);
        }
      }
      else
      {
        v80 = v94;
      }
      __writecr8(v80);
      v83 = 1LL;
LABEL_116:
      if ( !(_DWORD)v83 )
      {
        v84 = (unsigned __int8)MiLockPageInline(v67, v83, v57, v58);
        MiRemoveFaultNode((__int64)v96);
        if ( !v96[69] )
          MiPageListCollision(v67);
        _InterlockedAnd64(v131, 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v85 = KeGetCurrentIrql();
            if ( v85 <= 0xFu && (unsigned __int8)v84 <= 0xFu && v85 >= 2u )
            {
              v86 = KeGetCurrentPrcb();
              v87 = v86->SchedulerAssist;
              v88 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v84 + 1));
              v42 = (v88 & v87[5]) == 0;
              v87[5] &= v88;
              if ( v42 )
                KiRemoveSystemWorkPriorityKick((__int64)v86);
            }
          }
        }
        __writecr8(v84);
      }
      v21 = (v107 - v67) / 48;
      v89 = v120;
      if ( v21 + v113 <= v132 )
        v89 = v21 + v113;
      v113 = v89;
      *v114 = v89;
      if ( v99 < 0 )
      {
        v110 = ((v107 + 0x58000000000LL) / 48) << 12;
        v121 = 4096LL;
        LODWORD(v110) = v110 | 1;
        MmMarkPhysicalMemoryAsBad((int *)&v110, &v121);
      }
      if ( v89 >= v133 )
        break;
      if ( a3 <= 1 )
        goto LABEL_135;
      v32 = v100;
      MiReleasePtes((__int64)&qword_140C4EF80, (_QWORD *)v14, v100);
      v92 = MiReservePtes((__int64)&qword_140C4EF80, v100, v90, v91);
      v14 = v92;
      if ( !v92 )
        goto LABEL_137;
      v101 = (__int64)(v92 << 25) >> 16;
      *((_QWORD *)v96 + 4) = v92;
LABEL_135:
      v122 = v89;
      CurrentIrql = v102;
LABEL_40:
      v23 = v115;
      v25 = v103;
      v22 = a6;
    }
  }
  v32 = v100;
LABEL_137:
  v31 = 1;
LABEL_138:
  *((_DWORD *)&v124[1].SwapListEntry + 3) &= ~0x100u;
  if ( a5 && a3 > 1 )
  {
    if ( v14 )
      MiReleasePtes((__int64)&qword_140C4EF80, (_QWORD *)v14, v32);
  }
  return v31;
}
