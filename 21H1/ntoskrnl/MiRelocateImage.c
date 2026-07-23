/*
 * XREFs of MiRelocateImage @ 0x1406442B0
 * Callers:
 *     MiCreateNewSection @ 0x140643004 (MiCreateNewSection.c)
 *     MiGetSystemAddressForImage @ 0x1407470B4 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MiOffsetToProtos @ 0x140288040 (MiOffsetToProtos.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiGetControlAreaPartition @ 0x1402A46F4 (MiGetControlAreaPartition.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1402AB338 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1402AB534 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402BCBAC (MiUpdateControlAreaCommitCount.c)
 *     MiLegacyImageArchitecture @ 0x1402C0D10 (MiLegacyImageArchitecture.c)
 *     PsSetSystemPagePriorityThread @ 0x1402C37C4 (PsSetSystemPagePriorityThread.c)
 *     PsRevertToUserPagePriorityThread @ 0x1402C381C (PsRevertToUserPagePriorityThread.c)
 *     MiSetLeafPfnBuddy @ 0x14031B2E0 (MiSetLeafPfnBuddy.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiColdPageSizeSupported @ 0x1403F0D48 (MiColdPageSizeSupported.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiSetDeleteOnClose @ 0x140524EF4 (MiSetDeleteOnClose.c)
 *     MiGetSubsectionFromPte @ 0x140549C68 (MiGetSubsectionFromPte.c)
 *     MiMakeUnusedImageExtentsCold @ 0x14054E8F8 (MiMakeUnusedImageExtentsCold.c)
 *     MiDoesPageRequireRetpolineFixups @ 0x140631724 (MiDoesPageRequireRetpolineFixups.c)
 *     MiSelectImageBase @ 0x14063AF58 (MiSelectImageBase.c)
 *     MiUpdateCfgSystemWideBitmap @ 0x14063B954 (MiUpdateCfgSystemWideBitmap.c)
 *     MiMapImageInSystemSpace @ 0x1406412E8 (MiMapImageInSystemSpace.c)
 *     MiScanRelocationPage @ 0x140644AB0 (MiScanRelocationPage.c)
 *     MiCompressRelocations @ 0x1406B49F0 (MiCompressRelocations.c)
 *     MiUnmapImageInSystemSpace @ 0x1406CA3B4 (MiUnmapImageInSystemSpace.c)
 *     MiParseImageLoadConfig @ 0x1406EE324 (MiParseImageLoadConfig.c)
 *     MiLogRelocationFaults @ 0x1406EECDC (MiLogRelocationFaults.c)
 *     MiFreeRelocations @ 0x140756458 (MiFreeRelocations.c)
 *     MiFreeImageLoadConfig @ 0x1407564E8 (MiFreeImageLoadConfig.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiRelocateImage(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, int a6)
{
  unsigned int v10; // ebx
  int v11; // edx
  __int64 v12; // r11
  unsigned int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // r9
  unsigned __int64 v16; // r13
  char v17; // r8
  unsigned int v18; // eax
  unsigned __int64 v19; // r8
  __int16 v20; // cx
  unsigned int v21; // ecx
  unsigned int v22; // r10d
  __int64 v23; // r15
  SIZE_T v24; // rsi
  _QWORD *Pool; // rax
  _QWORD *v26; // r14
  _QWORD *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rsi
  _QWORD *v31; // rdi
  int updated; // esi
  __int64 v33; // r8
  unsigned __int64 v34; // rdi
  __int64 v35; // rax
  _QWORD *v36; // rcx
  __int64 v37; // rcx
  unsigned int v38; // esi
  unsigned int v39; // r8d
  unsigned __int64 v40; // r9
  unsigned int v41; // edx
  unsigned __int64 v42; // r10
  unsigned int v43; // ecx
  unsigned int v44; // eax
  unsigned int v45; // esi
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 *v48; // rdx
  __int64 v49; // r12
  unsigned __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // r15
  unsigned int v53; // edi
  unsigned int v55; // ecx
  unsigned int v56; // r9d
  unsigned __int64 v57; // r8
  unsigned __int64 v58; // r8
  unsigned int v59; // eax
  unsigned __int16 v60; // r9
  _WORD *v61; // r8
  unsigned int v62; // eax
  __int64 v63; // r10
  unsigned int v64; // r12d
  __int64 v65; // r9
  unsigned int v66; // r15d
  unsigned int i; // esi
  unsigned __int64 v68; // rax
  int v69; // edx
  _QWORD *v70; // r8
  unsigned __int64 v71; // r8
  __int64 ControlAreaPartition; // rax
  unsigned __int64 v73; // r15
  ULONG_PTR v74; // rsi
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // r8
  __int64 v79; // r9
  unsigned int v80; // [rsp+30h] [rbp-148h]
  unsigned int v81; // [rsp+30h] [rbp-148h]
  unsigned int v82; // [rsp+34h] [rbp-144h]
  unsigned int v83; // [rsp+38h] [rbp-140h]
  unsigned int *v85; // [rsp+40h] [rbp-138h]
  _QWORD *v86; // [rsp+40h] [rbp-138h]
  unsigned int v87; // [rsp+4Ch] [rbp-12Ch]
  __int64 v89; // [rsp+58h] [rbp-120h]
  __int64 v90; // [rsp+58h] [rbp-120h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-118h]
  int v92; // [rsp+68h] [rbp-110h]
  unsigned int v93; // [rsp+68h] [rbp-110h]
  unsigned __int64 v94; // [rsp+70h] [rbp-108h]
  unsigned int v95; // [rsp+70h] [rbp-108h]
  _QWORD *v96; // [rsp+78h] [rbp-100h]
  unsigned int v98; // [rsp+88h] [rbp-F0h]
  __int64 Size; // [rsp+90h] [rbp-E8h]
  unsigned int Sizea; // [rsp+90h] [rbp-E8h]
  __int64 v101; // [rsp+98h] [rbp-E0h] BYREF
  unsigned __int64 v102; // [rsp+A0h] [rbp-D8h] BYREF
  unsigned __int64 v103[3]; // [rsp+A8h] [rbp-D0h] BYREF
  unsigned __int64 v104; // [rsp+C0h] [rbp-B8h]
  __int64 v105; // [rsp+C8h] [rbp-B0h]
  __int64 v106; // [rsp+D0h] [rbp-A8h]
  unsigned __int64 v107; // [rsp+D8h] [rbp-A0h]
  _QWORD v108[10]; // [rsp+E0h] [rbp-98h] BYREF

  memset(v108, 0, sizeof(v108));
  v101 = 0LL;
  v10 = 2;
  v106 = *(_QWORD *)(a1 + 56);
  if ( MiLegacyImageArchitecture(*(_WORD *)(v106 + 48)) )
  {
    v10 = v11 + 34;
    if ( (*(_BYTE *)(v12 + 44) & 1) != 0 )
      return 0LL;
    v13 = (*(_WORD *)(v12 + 46) & 0x1000) != 0 ? 0xC000007B : 0;
  }
  else
  {
    v13 = -1073741701;
  }
  v14 = *(unsigned int *)(a2 + 88);
  LODWORD(v101) = v14;
  v15 = *(unsigned int *)(a2 + 92);
  v82 = *(_DWORD *)(a2 + 92);
  HIDWORD(v101) = v82;
  if ( (_DWORD)v14 )
  {
    if ( !(_DWORD)v15 )
      return v13;
  }
  else
  {
    if ( (_DWORD)v15 )
      return v13;
    v10 &= ~2u;
  }
  if ( (*(_BYTE *)(a1 + 15) & 1) != 0 )
    return 0LL;
  v16 = *(_QWORD *)a1;
  v103[2] = v16;
  v105 = *(_QWORD *)(v16 + 96);
  v17 = *(_BYTE *)(a1 + 14) & 0x40;
  if ( (a3 & 0xFFF) > (v17 != 0 ? 4092 : 4088) || ((v17 != 0 ? 3 : 7) & a3) != 0 )
    return v13;
  v18 = a3 | 1;
  if ( !v17 )
    v18 = a3;
  v80 = v18;
  v19 = *(_QWORD *)(a1 + 32);
  v94 = v19;
  if ( v10 >= 0x20 && !a4 )
  {
    v20 = *(_WORD *)(v12 + 46);
    if ( (v20 & 0x40) == 0 && MmRegistryState != -1 && (v20 & 0x1000) == 0 )
      return 0LL;
  }
  v21 = *(_DWORD *)(a1 + 8);
  v22 = v21;
  v87 = v21;
  if ( (v10 & 2) == 0 )
  {
    v22 = (v18 >> 12) + 1;
    v87 = v22;
  }
  v98 = v21 << 12;
  if ( (int)v15 + (int)v14 > v21 << 12 )
    return v13;
  if ( (v10 & 2) != 0 )
  {
    if ( (int)v15 + (int)v14 <= (unsigned int)v14 )
      return v13;
    v23 = v14;
    if ( v14 + v19 <= v19 )
      return v13;
  }
  else
  {
    v23 = v14;
  }
  if ( (v10 & 2) != 0 && v23 + v15 + v19 <= v19 )
    return v13;
  Size = v22;
  v24 = Size * 8 + v15 + 112;
  v102 = 0LL;
  v89 = 0LL;
  v83 = 0;
  CurrentThread = KeGetCurrentThread();
  Pool = MiAllocatePool(256, v24, 0x65526D4Du);
  v26 = Pool;
  v103[1] = (unsigned __int64)Pool;
  if ( !Pool )
    return 3221225626LL;
  v27 = Pool;
  do
    v27 += 512;
  while ( v27 < (_QWORD *)((char *)Pool + v24) );
  *((_BYTE *)Pool + 68) = 0;
  Pool[7] = v87;
  Pool[3] = 0LL;
  if ( (v10 & 2) == 0 )
  {
    v31 = Pool + 9;
LABEL_28:
    updated = MiSelectImageBase(a1, (__int64)v26, a4, a6, (__int64 *)&v102);
    if ( updated < 0 )
    {
      MiFreeImageLoadConfig(v31);
      ExFreePoolWithTag(v26, 0);
      if ( !a4 )
        updated = v13;
      goto LABEL_70;
    }
    v33 = (__int64)v31;
    v34 = v102;
    v104 = v102;
    updated = MiUpdateCfgSystemWideBitmap((__int64 *)v16, v102, v33);
    if ( updated < 0 )
      goto LABEL_155;
    *((_DWORD *)v26 + 16) = v80;
    v26[5] = v34 - v94;
    v35 = a5 - v94;
    if ( a5 == -1 )
      v35 = 0LL;
    v26[6] = v35;
    v96 = v26 + 14;
    *v26 = v26 + 14;
    memset(v26 + 14, 0, Size * 8);
    v36 = v26 + 14;
    v85 = (unsigned int *)&v26[Size + 14];
    v26[4] = v85;
    v10 |= 4u;
    if ( (v10 & 2) == 0 )
    {
LABEL_56:
      v36[(unsigned __int64)*((unsigned int *)v26 + 16) >> 12] |= 1uLL;
      if ( (*(_DWORD *)(v16 + 56) & 0x40000000) != 0 )
      {
        v63 = 0LL;
        v64 = 0;
        v86 = 0LL;
        v65 = *(_QWORD *)(a1 + 64);
        v90 = v65;
        v66 = *((_DWORD *)v26 + 14);
        if ( v87 <= v66 )
          v66 = v87;
        for ( i = 0; i < v66; ++v96 )
        {
          if ( *v36 != v63 || MiDoesPageRequireRetpolineFixups((__int64)(v26 + 9), i) )
          {
            v68 = MI_READ_PTE_LOCK_FREE(v65 + 8LL * i);
            v107 = v68;
            if ( (v68 & 0x400) != 0 )
            {
              v26[13] = 0LL;
              updated = -1073740023;
              goto LABEL_69;
            }
            v63 = 0LL;
            if ( (v68 & 0x800) != 0 )
            {
              v69 = 1;
              if ( qword_140C4DE80 )
              {
                if ( (v68 & 0x10) != 0 )
                  v68 &= ~0x10uLL;
                else
                  v68 &= ~qword_140C4DE80;
              }
              v70 = (_QWORD *)(48 * ((v68 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
              if ( (v70[2] & 0x400LL) != 0 && (*(_BYTE *)(MiGetSubsectionFromPte(v70[2]) + 34) & 2) != 0 )
                v69 = v63;
              if ( v69 )
              {
                MiSetLeafPfnBuddy(v70, 0LL);
                if ( v26[13] == v63 )
                  v26[13] = v71;
                else
                  MiSetLeafPfnBuddy(v86, v71);
                v86 = (_QWORD *)v71;
                ++v64;
              }
            }
            v65 = v90;
          }
          ++i;
          v36 = v96 + 1;
        }
        ControlAreaPartition = MiGetControlAreaPartition(v16);
        v73 = v64;
        if ( !(unsigned int)MiChargeCommit(ControlAreaPartition, v64, 0) )
        {
          v26[13] = 0LL;
          updated = -1073741670;
          goto LABEL_69;
        }
        v49 = (__int64)CurrentThread;
        --CurrentThread->SpecialApcDisable;
        v74 = a1 + 40;
        ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
        MiUpdateControlAreaCommitCount(v16, v73);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v74);
        KeAbPostRelease(v74);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v75, v76, v77);
        v50 = v102;
      }
      else
      {
        v49 = (__int64)CurrentThread;
        v50 = v104;
      }
      LOBYTE(v10) = v10 | 8;
      MI_LOCK_RELOCATIONS_EXCLUSIVE(v49, (__int64)v26);
      v51 = v105;
      *(_QWORD *)(v105 + 32) = v26;
      *(_QWORD *)(a1 + 32) = v50;
      v52 = v106;
      *(_QWORD *)v106 += v26[5];
      *(_DWORD *)(v16 + 92) |= 0x400000u;
      if ( (*(_DWORD *)(v16 + 56) & 0x800) != 0 )
        MiSetDeleteOnClose(v16, 0);
      if ( (MiFlags & 0x4000) == 0
        || (*(_DWORD *)(v16 + 92) & 0xC0000) == 0
        || (qword_140C1DAE0
          ? (updated = qword_140C1DAE0(*(_QWORD *)(v51 + 40) & 0xFFFFFFFFFFFFFFF8uLL, v50))
          : (updated = -1073741637),
            updated >= 0) )
      {
        updated = 0;
        v53 = a4 ? -1 : MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( a6 != 1 || v26[12] )
        {
          if ( (*(_DWORD *)(v16 + 56) & 0x40000000) != 0 )
          {
            MiWalkEntireImage(v16, 0LL, 8, v53);
            if ( (unsigned int)MiColdPageSizeSupported(1u) )
              MiMakeUnusedImageExtentsCold(v16);
          }
          updated = MiWalkEntireImage(v16, 0LL, 2, v53);
        }
      }
      MI_UNLOCK_RELOCATIONS_EXCLUSIVE(v49, (__int64)v26);
      if ( updated >= 0 && !a6 )
        *(_BYTE *)(v52 + 51) |= 4u;
LABEL_69:
      if ( (v10 & 8) != 0 )
        goto LABEL_70;
LABEL_155:
      MiFreeRelocations(v16, v26);
      goto LABEL_70;
    }
    memmove(&v26[Size + 14], (const void *)(v23 + v89), v82);
    LODWORD(v23) = 0;
    v37 = v26[12];
    if ( v37 )
    {
      LODWORD(v23) = v108[2] & 0xFFFFF;
      while ( (_DWORD)v23 )
      {
        v23 = (unsigned int)(v23 - 1);
        if ( *(_QWORD *)(v37 + 8 * v23 + 56) )
          goto LABEL_34;
      }
      LODWORD(v23) = 0;
    }
LABEL_34:
    v38 = v82;
    v39 = 0;
    if ( v82 )
    {
      v40 = (unsigned __int64)&v26[Size + 14];
      while ( v38 >= 0xA )
      {
        v41 = *(_DWORD *)(v40 + 4);
        v81 = v41;
        if ( v41 > v38 || (v41 & 1) != 0 || v41 < 8 )
          goto LABEL_100;
        v42 = *(unsigned int *)v40;
        v92 = v42;
        v43 = v10 & 0xFFFFFFFB;
        if ( (v42 & 0xFFF) == 0 )
          v43 = v10;
        v10 = v43;
        if ( (int)v42 + 4096 < (unsigned int)v42 || (int)v42 + 4096 > v98 || (unsigned int)v42 < v39 )
          goto LABEL_100;
        if ( v41 == 8 )
        {
          v38 -= 8;
          v10 = v43 & 0xFFFFFFFB;
        }
        else
        {
          if ( (MiFlags & 0x40000) != 0 && (*(_DWORD *)(v16 + 92) & 0xC0000) != 0 )
          {
            v103[0] = 0LL;
            if ( (*(_BYTE *)(MiOffsetToProtos(v16, v42, v103) + 32) & 4) != 0 )
            {
              updated = -1073741701;
              goto LABEL_69;
            }
            v41 = v81;
            LODWORD(v42) = v92;
            v40 = (unsigned __int64)v85;
          }
          v93 = (unsigned int)v42 >> 12;
          v26[((unsigned __int64)(unsigned int)v42 >> 12) + 14] |= v40;
          v95 = (v42 & 0xFFFFF000) + 4096;
          Sizea = v38 - v41;
          updated = MiScanRelocationPage(v89, v42, (v41 - 8) >> 1, (int)v40 + 8, v16, (__int64)v26);
          if ( updated < 0 )
          {
            if ( updated == -1073741207 )
            {
              updated = 0;
            }
            else if ( updated == -1073741701 )
            {
              updated = v13;
            }
            goto LABEL_69;
          }
          v10 |= 0x10u;
          v44 = v93;
          if ( v93 <= (unsigned int)v23 )
            v44 = v23;
          LODWORD(v23) = v44;
          v38 = Sizea;
          v41 = v81;
          v39 = v95;
          v40 = (unsigned __int64)v85;
        }
        v40 += v41;
        v85 = (unsigned int *)v40;
        if ( !v38 )
        {
          v45 = v82;
          goto LABEL_53;
        }
      }
      if ( v38 != 8 )
        goto LABEL_100;
      v45 = v82 - 8;
    }
    else
    {
      v45 = 0;
    }
LABEL_53:
    MiUnmapImageInSystemSpace(v108);
    PsRevertToUserPagePriorityThread((__int64)CurrentThread, v83, v46, v47);
    LOBYTE(v10) = v10 & 0xFE;
    v48 = (__int64 *)v26[2];
    if ( !v48 )
    {
LABEL_54:
      MiLogRelocationFaults(v16, &v101, v26);
      v26[7] = (unsigned int)(v23 + 1);
      if ( (v10 & 0x14) == 0x14 )
      {
        v26 = (_QWORD *)MiCompressRelocations(v26, v45);
        v36 = v26 + 14;
        v96 = v26 + 14;
      }
      else
      {
        v36 = v26 + 14;
      }
      goto LABEL_56;
    }
    while ( 1 )
    {
      v55 = v23;
      v56 = *((_DWORD *)v48 + 3);
      v57 = v26[((unsigned __int64)v56 >> 12) + 14];
      LODWORD(v23) = v56 >> 12;
      if ( v56 >> 12 <= v55 )
        LODWORD(v23) = v55;
      if ( v57 > 1 )
      {
        v58 = v57 & 0xFFFFFFFFFFFFFFFEuLL;
        v59 = *(_DWORD *)(v58 + 4) - 8;
        v60 = v56 & 0xFFF;
        v61 = (_WORD *)(v58 + 8);
        v62 = v59 >> 1;
        if ( v62 )
          break;
      }
LABEL_92:
      v48 = (__int64 *)*v48;
      if ( !v48 )
        goto LABEL_54;
    }
    while ( *v61 < 0x1000u || (unsigned __int16)(*v61 & 0xFFF) >= v60 )
    {
      ++v61;
      if ( !--v62 )
        goto LABEL_92;
    }
LABEL_100:
    updated = v13;
    goto LABEL_69;
  }
  if ( (int)MiMapImageInSystemSpace((__int64 *)v16, 3, (__int64)v108) < 0 )
  {
    ExFreePoolWithTag(v26, 0);
    MiSetDeleteOnClose(v16, 0);
    return 0LL;
  }
  v30 = v108[0];
  v89 = v108[0];
  v83 = PsSetSystemPagePriorityThread((__int64)CurrentThread, 1, v28, v29);
  v10 |= 1u;
  v31 = v26 + 9;
  updated = MiParseImageLoadConfig(v16, v30, (unsigned int)(LODWORD(v108[2]) << 12), a2);
  if ( updated >= 0 )
    goto LABEL_28;
  ExFreePoolWithTag(v26, 0);
LABEL_70:
  if ( (v10 & 1) != 0 )
  {
    MiUnmapImageInSystemSpace(v108);
    PsRevertToUserPagePriorityThread((__int64)CurrentThread, v83, v78, v79);
  }
  return (unsigned int)updated;
}
