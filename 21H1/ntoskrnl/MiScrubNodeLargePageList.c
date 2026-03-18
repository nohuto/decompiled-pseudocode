/*
 * XREFs of MiScrubNodeLargePageList @ 0x140551348
 * Callers:
 *     MiScrubNodeLargePages @ 0x1408D3E78 (MiScrubNodeLargePages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402827DC (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x1402968A0 (MiGetUltraMapping.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiRemoveFaultNode @ 0x140317F9C (MiRemoveFaultNode.c)
 *     MiInsertLargePageInNodeList @ 0x140345EC0 (MiInsertLargePageInNodeList.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiPageListCollision @ 0x1403479DC (MiPageListCollision.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUnlinkNodeLargePages @ 0x1403F00D8 (MiUnlinkNodeLargePages.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140529E10 (MmMarkPhysicalMemoryAsBad.c)
 *     MiScrubInterrupted @ 0x14055DF68 (MiScrubInterrupted.c)
 *     MiScrubPage @ 0x14055E804 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubNodeLargePageList(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        signed int a7,
        unsigned __int64 *a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rdi
  __int64 v11; // r14
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int64 v13; // r13
  int v14; // esi
  __int64 v15; // rax
  int v16; // r9d
  ULONG_PTR v17; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // edi
  _QWORD *v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // rcx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v26; // r8
  int v27; // r9d
  unsigned __int64 v28; // r10
  unsigned int v29; // r11d
  unsigned int v30; // edi
  unsigned int v31; // ebx
  _DWORD *SchedulerAssist; // r9
  __int64 v33; // rax
  __int64 v34; // r8
  _DWORD *v35; // r9
  __int64 v36; // rdi
  unsigned __int8 v37; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v39; // r9
  int v40; // eax
  bool v41; // zf
  __int64 v42; // rdx
  unsigned __int8 v43; // al
  unsigned __int64 v44; // rbx
  _BYTE *v45; // rcx
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  int v49; // eax
  unsigned __int64 UltraMapping; // r8
  __int64 v51; // rdx
  int ProtectionPfnCompatible; // eax
  __int64 v53; // r9
  __int64 v54; // r8
  unsigned __int64 ValidPte; // rbx
  __int64 v56; // r8
  _DWORD *v57; // r9
  int v58; // edi
  unsigned __int64 v59; // r14
  unsigned __int64 v60; // rdi
  unsigned __int64 v61; // rbx
  unsigned __int8 v62; // al
  unsigned __int8 v63; // di
  struct _KPRCB *v64; // r10
  int v65; // eax
  __int64 v66; // rdi
  unsigned __int64 v67; // rax
  __int64 v68; // rcx
  int v69; // ebx
  __int64 v70; // rdx
  __int64 v71; // r8
  _DWORD *v72; // r9
  unsigned __int8 v73; // r11
  char v74; // di
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // r10
  int v77; // eax
  unsigned __int8 v78; // al
  unsigned __int8 v79; // bl
  struct _KPRCB *v80; // r10
  int v81; // eax
  __int64 v82; // rdx
  unsigned __int64 v83; // rbx
  unsigned __int8 v84; // al
  struct _KPRCB *v85; // r10
  _DWORD *v86; // r9
  int v87; // eax
  unsigned __int64 v88; // rdi
  ULONG_PTR v89; // rax
  unsigned __int8 v90; // [rsp+50h] [rbp-208h]
  unsigned __int8 v91; // [rsp+50h] [rbp-208h]
  _BYTE *v93; // [rsp+60h] [rbp-1F8h]
  int v94; // [rsp+68h] [rbp-1F0h]
  int v95; // [rsp+70h] [rbp-1E8h]
  int v96; // [rsp+78h] [rbp-1E0h]
  __int64 v97; // [rsp+80h] [rbp-1D8h]
  __int64 v98; // [rsp+90h] [rbp-1C8h]
  unsigned __int8 v99; // [rsp+98h] [rbp-1C0h]
  __int64 v100; // [rsp+A0h] [rbp-1B8h]
  unsigned int v101; // [rsp+A8h] [rbp-1B0h]
  unsigned int v103; // [rsp+B4h] [rbp-1A4h]
  __int64 v104; // [rsp+B8h] [rbp-1A0h]
  unsigned __int64 v105; // [rsp+C0h] [rbp-198h]
  __int64 v106; // [rsp+C8h] [rbp-190h]
  __int64 v107; // [rsp+D0h] [rbp-188h] BYREF
  _DWORD v108[6]; // [rsp+D8h] [rbp-180h] BYREF
  __int64 v109; // [rsp+F0h] [rbp-168h]
  unsigned __int64 v110; // [rsp+F8h] [rbp-160h]
  unsigned __int64 *v111; // [rsp+100h] [rbp-158h]
  _QWORD *v112; // [rsp+108h] [rbp-150h]
  _QWORD *v113; // [rsp+110h] [rbp-148h]
  __int64 v114; // [rsp+118h] [rbp-140h]
  __int64 v115; // [rsp+120h] [rbp-138h]
  __int64 v116; // [rsp+130h] [rbp-128h]
  unsigned __int64 v117; // [rsp+138h] [rbp-120h]
  __int64 v118; // [rsp+140h] [rbp-118h] BYREF
  unsigned __int64 v119; // [rsp+148h] [rbp-110h]
  _QWORD *v120; // [rsp+150h] [rbp-108h]
  struct _KTHREAD *v121; // [rsp+158h] [rbp-100h]
  __int128 v122; // [rsp+160h] [rbp-F8h] BYREF
  __int64 v123; // [rsp+170h] [rbp-E8h]
  __int64 v124; // [rsp+178h] [rbp-E0h]
  __int64 v125; // [rsp+180h] [rbp-D8h]
  __int64 v126; // [rsp+188h] [rbp-D0h]
  unsigned __int64 v127; // [rsp+190h] [rbp-C8h]
  volatile signed __int64 *v128; // [rsp+198h] [rbp-C0h]
  unsigned __int64 v129; // [rsp+1A0h] [rbp-B8h]
  unsigned __int64 v130; // [rsp+1A8h] [rbp-B0h]
  _BYTE v131[80]; // [rsp+1B0h] [rbp-A8h] BYREF
  __int128 v132; // [rsp+200h] [rbp-58h] BYREF

  v10 = a4;
  v11 = a2;
  v114 = a1;
  v126 = a1;
  v108[2] = a2;
  v108[4] = a3;
  v111 = a8;
  v109 = a9;
  v115 = a10;
  memset(v131, 0, 0x48uLL);
  v132 = 0LL;
  v118 = 0LL;
  v107 = 0LL;
  v122 = 0LL;
  v123 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v121 = CurrentThread;
  v98 = 0LL;
  v13 = 0LL;
  v14 = 64;
  v15 = MiLargePageSizes[a3];
  v97 = v15;
  v124 = v15;
  v16 = a5;
  if ( a5 )
  {
    v93 = v131;
    v131[71] = 1;
    LOBYTE(v13) = a3 <= 1;
    if ( a3 > 1 )
    {
      v17 = MiReservePtes((__int64)&qword_140C4EE80, (unsigned int)v15);
      v13 = v17;
      if ( !v17 )
        return 1LL;
      v98 = (__int64)(v17 << 25) >> 16;
      v16 = a5;
      CurrentThread = v121;
    }
  }
  else
  {
    v93 = 0LL;
  }
  v19 = *(_QWORD *)(v114 + 16) + 4544 * v11;
  v99 = 17;
  v117 = *v111;
  v127 = v117;
  v130 = v117;
  v129 = v117;
  *v111 = 0LL;
  v110 = 0LL;
  v119 = 0LL;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x100u;
  v101 = dword_140C4DEC0[a3];
  v108[1] = v101;
  v20 = v16 + 2 * v10;
  v21 = a6;
  v22 = *(_QWORD **)(v19 + 1072LL * a3 + 8 * (a7 + 4 * (a6 + 4 * v20)) + 560);
  v23 = 0;
LABEL_8:
  v103 = v23;
  v120 = v22;
  v113 = v22;
  if ( v23 < v101 )
  {
    v24 = v22[2];
    v100 = v24;
    v112 = v22;
    CurrentIrql = v99;
    while ( 1 )
    {
      if ( !v24 || (_QWORD *)*v22 == v22 )
        goto LABEL_34;
      if ( (unsigned int)MiScrubInterrupted(v109, v20, 2LL) )
      {
        v30 = 0;
        v31 = v97;
        goto LABEL_138;
      }
      if ( v27 )
      {
        v14 &= ~4u;
        v94 = v14;
      }
      else
      {
        v14 |= 4u;
        v94 = v14;
        CurrentIrql = KeGetCurrentIrql();
        v99 = CurrentIrql;
        __writecr8(v26);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
      }
      if ( v28 )
        *(_QWORD *)(v28 + 32) = 0LL;
      v33 = MiUnlinkNodeLargePages(v114, v29, 1LL, v11, v21, a7, (__int64)&v132, v14, v28);
      v36 = v33;
      v104 = v33;
      if ( !v33 )
      {
        if ( !a5 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v37 = KeGetCurrentIrql();
              if ( v37 <= 0xFu && CurrentIrql <= 0xFu && v37 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v39 = CurrentPrcb->SchedulerAssist;
                v20 = -1LL << (CurrentIrql + 1);
                v40 = ~(unsigned __int16)v20;
                v41 = (v40 & v39[5]) == 0;
                v39[5] &= v40;
                if ( v41 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
        }
        v21 = a6;
LABEL_34:
        v23 = v103 + 1;
        v22 = v113 + 3;
        goto LABEL_8;
      }
      if ( !a5 )
      {
        v42 = (unsigned __int128)((v33 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
        v108[0] = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(v108, v42, v34, (__int64)v35);
          while ( *(__int64 *)(v36 + 24) < 0 );
        }
        *(_QWORD *)&v122 = (v36 + 0x58000000000LL) / 48;
        *((_QWORD *)&v122 + 1) = 0x100000001LL;
        CurrentIrql = v99;
        v123 = v99;
        MiInsertLargePageInNodeList((__int64)&v122, v42, v34, (__int64)v35);
        goto LABEL_40;
      }
      v43 = MiLockPageInline(v33, v20, v34, v35);
      v44 = v43;
      v90 = v43;
      v45 = v93;
      if ( v93[69] == 1 )
      {
        MiRemoveFaultNode((__int64)v93);
        _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v46 = KeGetCurrentIrql();
            if ( v46 <= 0xFu && (unsigned __int8)v44 <= 0xFu && v46 >= 2u )
            {
              v47 = KeGetCurrentPrcb();
              v48 = v47->SchedulerAssist;
              v20 = -1LL << ((unsigned __int8)v44 + 1);
              v49 = ~(unsigned __int16)v20;
              v41 = (v49 & v48[5]) == 0;
              v48[5] &= v49;
              if ( v41 )
                KiRemoveSystemWorkPriorityKick((__int64)v47);
            }
          }
        }
        __writecr8(v44);
        CurrentIrql = v99;
        goto LABEL_40;
      }
      if ( a3 > 1 )
      {
        UltraMapping = v98;
      }
      else
      {
        UltraMapping = MiGetUltraMapping((unsigned __int64 *)(v115 + 32LL * a3), a3, MiLargePageSizes[a3], 0);
        v98 = UltraMapping;
        v13 = ((UltraMapping >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        if ( !a3 )
        {
          v51 = 1LL;
          do
          {
            v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v51;
          }
          while ( v51 );
        }
        v45 = v93;
      }
      *((_QWORD *)v45 + 4) = v13;
      *((_DWORD *)v45 + 16) = a3;
      *((_QWORD *)v45 + 5) = UltraMapping;
      *((_QWORD *)v45 + 6) = UltraMapping + (v97 << 12) - 1;
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v36);
      v54 = ProtectionPfnCompatible | 0xA0000000;
      if ( a3 <= 1 )
        v54 = ProtectionPfnCompatible | 0xA4000000;
      ValidPte = MiMakeValidPte(v13, v53, v54, v53);
      if ( a3 <= 1 )
      {
        v58 = 0;
        if ( MiPteInShadowRange(v13) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v58 = 1;
            if ( !HIBYTE(word_140C4DF48) )
              goto LABEL_64;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
LABEL_64:
            if ( (ValidPte & 1) != 0 )
              ValidPte |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v13 = ValidPte;
        if ( v58 )
          MiWritePteShadow(v13, ValidPte);
        goto LABEL_82;
      }
      if ( v13 >= v13 + 8 * v97 )
        goto LABEL_81;
      v59 = v13 + 8 * v97;
      do
      {
        v60 = ValidPte;
        v95 = 0;
        if ( !MiPteInShadowRange(v13) )
          goto LABEL_77;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v95 = 1;
          if ( HIBYTE(word_140C4DF48) )
            goto LABEL_77;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_77;
        }
        if ( (ValidPte & 1) != 0 )
          v60 = ValidPte | 0x8000000000000000uLL;
LABEL_77:
        *(_QWORD *)v13 = v60;
        if ( v95 )
          MiWritePteShadow(v13, v60);
        ValidPte ^= (ValidPte ^ ((ValidPte & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
        v13 += 8LL;
      }
      while ( v13 < v59 );
      v14 = v94;
      LODWORD(v11) = a2;
LABEL_81:
      v13 -= 8 * v97;
LABEL_82:
      v61 = v104;
      v128 = (volatile signed __int64 *)(v104 + 24);
      _InterlockedAnd64((volatile signed __int64 *)(v104 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v62 = KeGetCurrentIrql(), v62 <= 0xFu) )
      {
        v63 = v90;
        if ( v90 <= 0xFu && v62 >= 2u )
        {
          v64 = KeGetCurrentPrcb();
          v57 = v64->SchedulerAssist;
          v65 = ~(unsigned __int16)(-1LL << (v90 + 1));
          v41 = (v65 & v57[5]) == 0;
          v56 = (unsigned int)v65 & v57[5];
          v57[5] = v56;
          if ( v41 )
            KiRemoveSystemWorkPriorityKick((__int64)v64);
        }
      }
      else
      {
        v63 = v90;
      }
      __writecr8(v63);
      v125 = --v100;
      v96 = 0;
      v66 = v104;
      v106 = v104;
      v67 = v104 + 48 * v97;
      v105 = v67;
      v68 = v98;
      while ( 1 )
      {
        v116 = v68;
        if ( v61 >= v67 )
        {
          v82 = 0LL;
          goto LABEL_116;
        }
        v69 = MiScrubPage(v109, v61, v68, 0LL);
        v73 = MiLockPageInline(v66, v70, v71, v72);
        v91 = v73;
        v74 = v93[69];
        if ( v93[70] == 1 )
          v69 = 0;
        v96 = v69;
        if ( v74 == 1 || v69 < 0 )
          break;
        v66 = v106;
        _InterlockedAnd64((volatile signed __int64 *)(v106 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v75 = KeGetCurrentIrql();
            if ( v75 <= 0xFu && v73 <= 0xFu && v75 >= 2u )
            {
              v76 = KeGetCurrentPrcb();
              v57 = v76->SchedulerAssist;
              v77 = ~(unsigned __int16)(-1LL << (v73 + 1));
              v41 = (v77 & v57[5]) == 0;
              v56 = (unsigned int)v77 & v57[5];
              v57[5] = v56;
              if ( v41 )
              {
                KiRemoveSystemWorkPriorityKick((__int64)v76);
                v73 = v91;
              }
            }
          }
        }
        __writecr8(v73);
        v61 = v104 + 48;
        v104 += 48LL;
        v68 = v116 + 4096;
        v67 = v105;
      }
      MiRemoveFaultNode((__int64)v93);
      v41 = v74 == 0;
      v66 = v106;
      if ( v41 )
        MiPageListCollision(v106);
      _InterlockedAnd64((volatile signed __int64 *)(v106 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v78 = KeGetCurrentIrql(), v78 <= 0xFu) )
      {
        v79 = v91;
        if ( v91 <= 0xFu && v78 >= 2u )
        {
          v80 = KeGetCurrentPrcb();
          v57 = v80->SchedulerAssist;
          v81 = ~(unsigned __int16)(-1LL << (v91 + 1));
          v41 = (v81 & v57[5]) == 0;
          v56 = (unsigned int)v81 & v57[5];
          v57[5] = v56;
          if ( v41 )
            KiRemoveSystemWorkPriorityKick((__int64)v80);
        }
      }
      else
      {
        v79 = v91;
      }
      __writecr8(v79);
      v82 = 1LL;
LABEL_116:
      if ( !(_DWORD)v82 )
      {
        v83 = (unsigned __int8)MiLockPageInline(v66, v82, v56, v57);
        MiRemoveFaultNode((__int64)v93);
        if ( !v93[69] )
          MiPageListCollision(v66);
        _InterlockedAnd64(v128, 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v84 = KeGetCurrentIrql();
            if ( v84 <= 0xFu && (unsigned __int8)v83 <= 0xFu && v84 >= 2u )
            {
              v85 = KeGetCurrentPrcb();
              v86 = v85->SchedulerAssist;
              v87 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v83 + 1));
              v41 = (v87 & v86[5]) == 0;
              v86[5] &= v87;
              if ( v41 )
                KiRemoveSystemWorkPriorityKick((__int64)v85);
            }
          }
        }
        __writecr8(v83);
      }
      v20 = (v104 - v66) / 48;
      v88 = v117;
      if ( v20 + v110 <= v129 )
        v88 = v20 + v110;
      v110 = v88;
      *v111 = v88;
      if ( v96 < 0 )
      {
        v107 = ((v104 + 0x58000000000LL) / 48) << 12;
        v118 = 4096LL;
        LODWORD(v107) = v107 | 1;
        MmMarkPhysicalMemoryAsBad((int *)&v107, &v118);
      }
      if ( v88 >= v130 )
        break;
      if ( a3 <= 1 )
        goto LABEL_135;
      v31 = v97;
      MiReleasePtes((__int64)&qword_140C4EE80, (_QWORD *)v13, v97);
      v89 = MiReservePtes((__int64)&qword_140C4EE80, (unsigned int)v97);
      v13 = v89;
      if ( !v89 )
        goto LABEL_137;
      v98 = (__int64)(v89 << 25) >> 16;
      *((_QWORD *)v93 + 4) = v89;
LABEL_135:
      v119 = v88;
      CurrentIrql = v99;
LABEL_40:
      v22 = v112;
      v24 = v100;
      v21 = a6;
    }
  }
  v31 = v97;
LABEL_137:
  v30 = 1;
LABEL_138:
  *((_DWORD *)&v121[1].SwapListEntry + 3) &= ~0x100u;
  if ( a5 && a3 > 1 )
  {
    if ( v13 )
      MiReleasePtes((__int64)&qword_140C4EE80, (_QWORD *)v13, v31);
  }
  return v30;
}
