/*
 * XREFs of ?NtGdiFlushUserBatchInternal@@YGXPAX@Z @ 0x5EBA0
 * Callers:
 *     _NtGdiFlushUserBatch@0 @ 0x5EB74 (_NtGdiFlushUserBatch@0.c)
 * Callees:
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?GreBatchTextOutRect@@YGHAAVXDCOBJ@@PAU_BATCHTEXTOUTRECT@@K@Z @ 0x538FE (-GreBatchTextOutRect@@YGHAAVXDCOBJ@@PAU_BATCHTEXTOUTRECT@@K@Z.c)
 *     ?GrePolyPatBltInternal@@YGHAAVXDCOBJ@@KPAU_POLYPATBLT@@KKKKKK@Z @ 0x57040 (-GrePolyPatBltInternal@@YGHAAVXDCOBJ@@KPAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?GrePatBltLockedDC@@YGHAAVXDCOBJ@@AAVEXFORMOBJ@@PAVERECTL@@KPAVSURFACE@@KKKK@Z @ 0x57330 (-GrePatBltLockedDC@@YGHAAVXDCOBJ@@AAVEXFORMOBJ@@PAVERECTL@@KPAVSURFACE@@KKKK@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ??1DEVLOCKOBJ@@QAE@XZ @ 0x5A936 (--1DEVLOCKOBJ@@QAE@XZ.c)
 *     ?GreBatchTextOut@@YGHAAVXDCOBJ@@PAU_BATCHTEXTOUT@@K@Z @ 0x615F0 (-GreBatchTextOut@@YGHAAVXDCOBJ@@PAU_BATCHTEXTOUT@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QAEHAAVERECTL@@@Z @ 0x7988A (-bXform@EXFORMOBJ@@QAEHAAVERECTL@@@Z.c)
 *     ?GreExtSelectClipRgnLocked@@YGHAAVXDCOBJ@@PAU_RECTL@@H@Z @ 0x79F82 (-GreExtSelectClipRgnLocked@@YGHAAVXDCOBJ@@PAU_RECTL@@H@Z.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 *     ?vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0x7B8B6 (-vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ?vCalcFillOrigin@DC@@QAEXXZ @ 0x9DCE4 (-vCalcFillOrigin@DC@@QAEXXZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QAEXH@Z @ 0xABB00 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QAEXH@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0DEVLOCKOBJ@@QAE@XZ @ 0xF6A67 (--0DEVLOCKOBJ@@QAE@XZ.c)
 *     _GreSelectFontInternal@12 @ 0xF7EBA (_GreSelectFontInternal@12.c)
 *     _GreEnableAppContainerRestriction@4 @ 0x1D12C8 (_GreEnableAppContainerRestriction@4.c)
 */

void __stdcall NtGdiFlushUserBatchInternal(PVOID Parameter)
{
  struct _NT_TIB *Self; // ecx
  char *v2; // edx
  unsigned int v3; // ebx
  int v4; // edx
  int ExceptionList_high; // esi
  unsigned int ExceptionList_low; // ecx
  struct _NT_TIB *v7; // ebx
  struct XDCOBJ *v8; // edi
  LONG bottom; // esi
  PVOID v10; // eax
  PVOID v11; // eax
  PVOID v12; // edi
  DC *v13; // ecx
  unsigned int v14; // esi
  int v15; // ecx
  struct _NT_TIB *v16; // edx
  PVOID v17; // edi
  int v18; // ecx
  PVOID v19; // edi
  PVOID v20; // edx
  int v21; // edx
  int v22; // ecx
  int v23; // esi
  struct _NT_TIB *v24; // ebx
  LONG left; // edx
  int v26; // edi
  struct _NT_TIB *v27; // ecx
  struct SURFACE *v28; // eax
  PVOID v29; // ebx
  int v30; // edi
  int v31; // eax
  int v32; // edi
  PVOID v33; // eax
  int v34; // eax
  void *v35; // edi
  PVOID v36; // ebx
  PVOID v37; // edx
  PVOID v38; // ecx
  ERECTL *v39; // ecx
  struct ERECTL *v40; // ecx
  struct ERECTL *v41; // eax
  _DWORD *v42; // eax
  int v43; // esi
  int v44; // edi
  int v45; // ebx
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  struct _NT_TIB *v50; // ebx
  struct _NT_TIB *v51; // ecx
  int *v52; // ecx
  struct _DC_ATTR *UserAttr; // eax
  int v54; // esi
  struct _NT_TIB *v55; // ecx
  int v56; // edx
  int v57; // esi
  int v58; // edx
  PVOID v59; // eax
  struct _NT_TIB *v60; // ecx
  struct _BATCHTEXTOUTRECT *v61; // [esp+0h] [ebp-1A4h]
  unsigned int v62; // [esp+4h] [ebp-1A0h]
  _BYTE v63[48]; // [esp+10h] [ebp-194h] BYREF
  struct SURFACE *v64; // [esp+40h] [ebp-164h]
  unsigned int v65; // [esp+44h] [ebp-160h]
  _DWORD v66[4]; // [esp+48h] [ebp-15Ch] BYREF
  unsigned int v67; // [esp+58h] [ebp-14Ch]
  int v68; // [esp+5Ch] [ebp-148h]
  int v69; // [esp+60h] [ebp-144h]
  PVOID v70; // [esp+64h] [ebp-140h]
  PVOID v71; // [esp+68h] [ebp-13Ch]
  struct SURFACE *v72; // [esp+6Ch] [ebp-138h]
  PVOID ArbitraryUserPointer; // [esp+70h] [ebp-134h]
  unsigned int v74; // [esp+74h] [ebp-130h]
  unsigned int v75; // [esp+78h] [ebp-12Ch]
  struct SURFACE *v76; // [esp+7Ch] [ebp-128h]
  unsigned int v77; // [esp+80h] [ebp-124h]
  int v78; // [esp+84h] [ebp-120h]
  int v79; // [esp+88h] [ebp-11Ch]
  struct _POLYPATBLT *v80; // [esp+8Ch] [ebp-118h]
  unsigned int v81; // [esp+90h] [ebp-114h]
  int v82; // [esp+94h] [ebp-110h]
  PVOID v83; // [esp+98h] [ebp-10Ch]
  struct _NT_TIB *v84; // [esp+9Ch] [ebp-108h]
  unsigned int v85; // [esp+A0h] [ebp-104h]
  unsigned int v86; // [esp+A4h] [ebp-100h]
  int v87; // [esp+A8h] [ebp-FCh]
  int v88; // [esp+ACh] [ebp-F8h]
  int v89; // [esp+B0h] [ebp-F4h]
  PVOID v90; // [esp+B4h] [ebp-F0h]
  PVOID v91; // [esp+B8h] [ebp-ECh]
  struct _NT_TIB *v92; // [esp+BCh] [ebp-E8h]
  PVOID v93; // [esp+C0h] [ebp-E4h]
  int v94; // [esp+C4h] [ebp-E0h]
  int v95; // [esp+C8h] [ebp-DCh]
  int v96; // [esp+CCh] [ebp-D8h]
  PVOID v97; // [esp+D0h] [ebp-D4h]
  void *v98; // [esp+D4h] [ebp-D0h]
  struct SURFACE *v99; // [esp+D8h] [ebp-CCh]
  PVOID v100; // [esp+DCh] [ebp-C8h]
  int v101; // [esp+E0h] [ebp-C4h]
  PVOID v102; // [esp+E4h] [ebp-C0h]
  int v103; // [esp+E8h] [ebp-BCh]
  int v104; // [esp+ECh] [ebp-B8h] BYREF
  unsigned int v105; // [esp+F0h] [ebp-B4h]
  PVOID v106; // [esp+F4h] [ebp-B0h]
  PVOID v107; // [esp+F8h] [ebp-ACh]
  PVOID v108; // [esp+FCh] [ebp-A8h]
  PVOID v109; // [esp+100h] [ebp-A4h]
  PVOID v110; // [esp+104h] [ebp-A0h]
  struct XDCOBJ *v111; // [esp+108h] [ebp-9Ch]
  struct _NT_TIB *v112; // [esp+10Ch] [ebp-98h]
  unsigned int v113; // [esp+110h] [ebp-94h]
  struct SURFACE *v114; // [esp+114h] [ebp-90h]
  unsigned int Version; // [esp+118h] [ebp-8Ch]
  struct _POLYPATBLT *StackLimit; // [esp+11Ch] [ebp-88h]
  int SubSystemTib; // [esp+120h] [ebp-84h]
  int FiberData; // [esp+124h] [ebp-80h]
  unsigned int v119; // [esp+128h] [ebp-7Ch]
  char *StackBase; // [esp+12Ch] [ebp-78h]
  HDC v121; // [esp+130h] [ebp-74h]
  unsigned int ExceptionList; // [esp+134h] [ebp-70h]
  unsigned int v123; // [esp+138h] [ebp-6Ch]
  PVOID *p_StackLimit; // [esp+13Ch] [ebp-68h]
  int v125; // [esp+140h] [ebp-64h]
  bool v126; // [esp+147h] [ebp-5Dh]
  unsigned int v127; // [esp+148h] [ebp-5Ch]
  struct _NT_TIB *v128; // [esp+14Ch] [ebp-58h]
  struct _RECTL v129; // [esp+150h] [ebp-54h] BYREF
  char v130; // [esp+163h] [ebp-41h]
  struct _NT_TIB *v131; // [esp+164h] [ebp-40h]
  PVOID v132; // [esp+168h] [ebp-3Ch]
  PVOID v133; // [esp+16Ch] [ebp-38h]
  PVOID v134; // [esp+170h] [ebp-34h]
  PVOID v135; // [esp+174h] [ebp-30h]
  RECTL v136; // [esp+178h] [ebp-2Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+18Ch] [ebp-18h]

  Self = KeGetPcr()->NtTib.Self;
  v112 = Self;
  v128 = 0;
  v103 = 1;
  ms_exc.registration.TryLevel = 0;
  StackBase = (char *)Self[141].StackBase;
  v2 = StackBase;
  v131 = Self + 17;
  v128 = Self + 17;
  Self[141].StackBase = 0;
  v123 = (int)Self[16].ArbitraryUserPointer & 0x80000000;
  Self[16].ArbitraryUserPointer = (PVOID)v123;
  ms_exc.registration.TryLevel = -2;
  p_StackLimit = &Self[61].StackLimit;
  if ( (unsigned int)(v2 - 1) <= 0x134 )
  {
    v121 = 0;
    v126 = 1;
    ms_exc.registration.TryLevel = 1;
    v121 = (HDC)Self[16].Self;
    v3 = v123 >> 31;
    v126 = (v123 & 0x80000000) != 0;
    ms_exc.registration.TryLevel = -2;
    if ( v121 )
    {
      v129.top = 0;
      v129.right = 0;
      XDCOBJ::vLock((XDCOBJ *)&v129, v121);
      if ( v129.left )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v63);
        v130 = 0;
        if ( UserIsCurrentProcessImmersiveAppContainer() && !(_BYTE)v3 )
        {
          v130 = 1;
          GreEnableAppContainerRestriction(0);
        }
        if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v63, (struct XDCOBJ *)&v129, 0) )
        {
          v103 = 0;
          v94 = *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 188);
          do
          {
            v127 = 0;
            v4 = 1;
            v125 = 1;
            ms_exc.registration.TryLevel = 2;
            ExceptionList_high = HIWORD(v131->ExceptionList);
            v68 = ExceptionList_high;
            ExceptionList_low = LOWORD(v131->ExceptionList);
            v129.bottom = ExceptionList_low;
            v127 = ExceptionList_low;
            ms_exc.registration.TryLevel = -2;
            if ( (char *)v131 + ExceptionList_low > (char *)p_StackLimit )
              break;
            if ( ExceptionList_high != 2 )
            {
              switch ( ExceptionList_high )
              {
                case 0:
                  if ( ExceptionList_low >= 0x40 && !v130 )
                  {
                    ms_exc.registration.TryLevel = 11;
                    Version = (unsigned int)v131->StackBase;
                    v81 = Version;
                    StackLimit = (struct _POLYPATBLT *)v131->StackLimit;
                    v80 = StackLimit;
                    SubSystemTib = (int)v131->SubSystemTib;
                    v79 = SubSystemTib;
                    FiberData = (int)v131->FiberData;
                    v78 = FiberData;
                    v89 = (int)v131->Self;
                    ExceptionList = (unsigned int)v131[1].ExceptionList;
                    v77 = ExceptionList;
                    v99 = (struct SURFACE *)v131[1].StackBase;
                    v76 = v99;
                    v105 = (unsigned int)v131[1].Self;
                    v75 = v105;
                    v119 = (unsigned int)v131[2].ExceptionList;
                    v74 = v119;
                    ms_exc.registration.TryLevel = -2;
                    v23 = (BYTE2(v89) << 8) | BYTE2(v89);
                    v88 = v23;
                    v89 = v23;
                    if ( (((unsigned __int8)v23 ^ (unsigned __int8)(4 * v23)) & 0xCC) == 0 )
                    {
                      v96 = *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 188);
                      v113 = 0;
                      v123 = 0;
                      v90 = 0;
                      v91 = 0;
                      ms_exc.registration.TryLevel = 12;
                      v24 = v131;
                      ArbitraryUserPointer = v131->ArbitraryUserPointer;
                      ms_exc.registration.TryLevel = -2;
                      GreDCSelectBrush(v129.left, ArbitraryUserPointer);
                      left = v129.left;
                      v26 = *(_DWORD *)(v129.left + 1020);
                      v114 = *(struct SURFACE **)(v26 + 212);
                      v95 = *(_DWORD *)(v26 + 216);
                      ms_exc.registration.TryLevel = 13;
                      v27 = v24;
                      v28 = (struct SURFACE *)v24[1].StackLimit;
                      v72 = v28;
                      v29 = v24[2].StackBase;
                      v71 = v29;
                      ms_exc.registration.TryLevel = -2;
                      if ( v114 != v28 )
                      {
                        *(_DWORD *)(v26 + 212) = v28;
                        *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 216) = v29;
                        *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 184) |= 1u;
                        left = v129.left;
                      }
                      if ( (*(_BYTE *)(left + 80) & 1) != 0 )
                      {
                        v30 = *(_DWORD *)(left + 1020);
                        if ( *(_DWORD *)(v30 + 264) )
                        {
                          v31 = *(_DWORD *)(v30 + 184);
                          v123 = v31 & 0x40000;
                          *(_DWORD *)(v30 + 184) = v31 | 0x40000;
                          left = v129.left;
                          v32 = *(_DWORD *)(v129.left + 1020);
                          v113 = *(_DWORD *)(v32 + 268);
                          ms_exc.registration.TryLevel = 14;
                          v33 = v27[1].SubSystemTib;
                          v70 = v33;
                          ms_exc.registration.TryLevel = -2;
                          if ( (PVOID)v113 != v33 )
                          {
                            *(_DWORD *)(v32 + 268) = v33;
                            *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 184) |= 1u;
                            left = v129.left;
                          }
                        }
                      }
                      v34 = *(_DWORD *)(left + 1020);
                      v97 = *(PVOID *)(v34 + 324);
                      v35 = v97;
                      v36 = *(PVOID *)(v34 + 328);
                      v98 = v36;
                      ms_exc.registration.TryLevel = 15;
                      v37 = v27[1].FiberData;
                      v38 = v27[1].ArbitraryUserPointer;
                      v90 = v37;
                      v91 = v38;
                      ms_exc.registration.TryLevel = -2;
                      if ( v97 != v37 || v36 != v38 )
                      {
                        *(_DWORD *)(v34 + 324) = v37;
                        *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 328) = v38;
                        *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 340) |= 0x2010u;
                      }
                      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v66, (struct XDCOBJ *)&v129, 0x204u);
                      if ( (*(_BYTE *)(v66[0] + 56) & 1) != 0 )
                      {
                        v136.left = Version;
                        v136.top = (LONG)StackLimit;
                        v136.right = Version + SubSystemTib;
                        v136.bottom = (LONG)StackLimit + FiberData;
                        EXFORMOBJ::bXform((EXFORMOBJ *)v66, (struct ERECTL *)&v136);
                        ERECTL::vOrder((ERECTL *)&v136);
                        if ( !ERECTL::bEmpty(v39) )
                        {
                          if ( (*(_DWORD *)(v129.left + 24) & 0xE0) != 0 )
                            XDCOBJ::vAccumulate((XDCOBJ *)&v129, v40);
                          v41 = *(struct ERECTL **)(v129.left + 504);
                          if ( v41 )
                            GrePatBltLockedDC(
                              (POINTL **)&v129,
                              &v136,
                              (struct EXFORMOBJ *)v23,
                              v41,
                              ExceptionList,
                              v99,
                              v105,
                              v119,
                              (unsigned int)v61,
                              v62);
                        }
                      }
                      else
                      {
                        v42 = *(_DWORD **)(v129.left + 1020);
                        v43 = v42[51];
                        v44 = v42[49];
                        v45 = v42[52];
                        v87 = v42[50];
                        v42[51] = ExceptionList;
                        *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 196) = v99;
                        *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 208) = v105;
                        *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 200) = v119;
                        GreMaskBlt(v121, (int)StackLimit, SubSystemTib, FiberData, 0, 0, 0, 0, 0, 0, v88 << 16, 0);
                        *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 204) = v43;
                        *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 196) = v44;
                        *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 208) = v45;
                        *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 200) = v87;
                        v36 = v98;
                        v35 = v97;
                      }
                      v46 = *(_DWORD *)(v129.left + 1020);
                      if ( *(_DWORD *)(v46 + 188) != v96 )
                      {
                        *(_DWORD *)(v46 + 188) = v96;
                        *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 184) |= 0x1000u;
                      }
                      v47 = *(_DWORD *)(v129.left + 1020);
                      if ( v114 != *(struct SURFACE **)(v47 + 212) )
                      {
                        *(_DWORD *)(v47 + 212) = v114;
                        *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 216) = v95;
                        *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 184) |= 1u;
                      }
                      if ( (*(_BYTE *)(v129.left + 80) & 1) != 0 )
                      {
                        v48 = *(_DWORD *)(v129.left + 1020);
                        if ( *(_DWORD *)(v48 + 264) )
                        {
                          if ( v113 != *(_DWORD *)(v48 + 268) )
                          {
                            *(_DWORD *)(v48 + 268) = v113;
                            *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 184) |= 1u;
                          }
                          if ( !v123 )
                            *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 184) &= ~0x40000u;
                        }
                      }
                      v49 = *(_DWORD *)(v129.left + 1020);
                      if ( v35 != *(void **)(v49 + 324) || v36 != *(PVOID *)(v49 + 328) )
                      {
                        *(_DWORD *)(v49 + 324) = v35;
                        *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 328) = v36;
                        *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 340) |= 0x2010u;
                      }
                    }
                  }
                  goto LABEL_96;
                case 1:
                  v92 = 0;
                  v93 = 0;
                  if ( v130 || ExceptionList_low < 0x34 )
                    goto LABEL_96;
                  ms_exc.registration.TryLevel = 8;
                  v7 = v131;
                  if ( p_StackLimit != (PVOID *)v131 )
                  {
                    if ( ((unsigned __int8)v131 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( (unsigned int)p_StackLimit > _MmUserProbeAddress || p_StackLimit < (PVOID *)v131 )
                      *(_BYTE *)_MmUserProbeAddress = 0;
                  }
                  v67 = (unsigned int)v7->SubSystemTib;
                  v14 = v67;
                  ms_exc.registration.TryLevel = -2;
                  if ( v67 < 0xCCCCCCC && 20 * v67 <= ExceptionList_low - 48 )
                  {
                    v15 = *(_DWORD *)(v129.left + 1020);
                    FiberData = *(_DWORD *)(v15 + 212);
                    v119 = *(_DWORD *)(v15 + 216);
                    ms_exc.registration.TryLevel = 9;
                    StackLimit = (struct _POLYPATBLT *)v131->StackLimit;
                    v66[3] = StackLimit;
                    Version = v131->Version;
                    v65 = Version;
                    v114 = (struct SURFACE *)v131->ArbitraryUserPointer;
                    v64 = v114;
                    v113 = (unsigned int)v131[1].ExceptionList;
                    v86 = v113;
                    v123 = (unsigned int)v131[1].StackBase;
                    v85 = v123;
                    v16 = v131->Self;
                    v84 = v16;
                    v17 = v131[1].StackLimit;
                    v83 = v17;
                    SubSystemTib = (int)v131->StackBase;
                    v82 = SubSystemTib;
                    ms_exc.registration.TryLevel = -2;
                    if ( (struct _NT_TIB *)FiberData != v16 )
                    {
                      *(_DWORD *)(v15 + 212) = v16;
                      *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 216) = v17;
                      *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 184) |= 1u;
                    }
                    v18 = *(_DWORD *)(v129.left + 1020);
                    ExceptionList = *(_DWORD *)(v18 + 324);
                    v19 = *(PVOID *)(v18 + 328);
                    ms_exc.registration.TryLevel = 10;
                    v7 = v131;
                    v131 = (struct _NT_TIB *)v131[1].SubSystemTib;
                    v20 = v7[1].FiberData;
                    v92 = v131;
                    v93 = v20;
                    ms_exc.registration.TryLevel = -2;
                    if ( (struct _NT_TIB *)ExceptionList != v131 || v19 != v20 )
                    {
                      *(_DWORD *)(v18 + 324) = v131;
                      *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 328) = v20;
                      *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 340) |= 0x2010u;
                    }
                    GrePolyPatBltInternal(
                      SubSystemTib,
                      (struct XDCOBJ *)&v129,
                      (struct XDCOBJ *)&v7[1].ArbitraryUserPointer,
                      v14,
                      StackLimit,
                      Version,
                      v114,
                      v113,
                      v123,
                      (unsigned int)v61,
                      v62);
                    v21 = *(_DWORD *)(v129.left + 1020);
                    if ( FiberData != *(_DWORD *)(v21 + 212) )
                    {
                      *(_DWORD *)(v21 + 212) = FiberData;
                      *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 216) = v119;
                      *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 184) |= 1u;
                    }
                    v22 = *(_DWORD *)(v129.left + 1020);
                    if ( ExceptionList != *(_DWORD *)(v22 + 324) || v19 != *(PVOID *)(v22 + 328) )
                    {
                      *(_DWORD *)(v22 + 324) = ExceptionList;
                      *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 328) = v19;
                      *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 340) |= 0x2010u;
                    }
                  }
                  goto LABEL_97;
                case 2:
                  break;
                case 3:
                  v7 = v131;
                  if ( !v130 )
                    GreBatchTextOutRect(v131, &v129.left, (struct XDCOBJ *)ExceptionList_low, v61, v62);
                  goto LABEL_97;
                case 4:
                  v11 = 0;
                  v108 = 0;
                  v12 = 0;
                  v107 = 0;
                  ms_exc.registration.TryLevel = 6;
                  if ( ExceptionList_low >= 0xC )
                  {
                    v7 = v131;
                    v11 = v131->StackBase;
                    v108 = v11;
                    v12 = v131->StackLimit;
                    v107 = v12;
                  }
                  else
                  {
                    v4 = 0;
                    v125 = 0;
                    v7 = v131;
                  }
                  ms_exc.registration.TryLevel = -2;
                  bottom = v129.bottom;
                  if ( v4 )
                  {
                    v13 = (DC *)v129.left;
                    *(_DWORD *)(v129.left + 84) = v11;
                    *((_DWORD *)v13 + 22) = v12;
                    DC::vCalcFillOrigin(v13);
                  }
                  goto LABEL_98;
                case 5:
                  v132 = 0;
                  v133 = 0;
                  v134 = 0;
                  v135 = 0;
                  v8 = 0;
                  v111 = 0;
                  ms_exc.registration.TryLevel = 3;
                  if ( ExceptionList_low >= 0x18 )
                  {
                    v7 = v131;
                    v132 = v131->StackLimit;
                    v133 = v131->SubSystemTib;
                    v134 = v131->FiberData;
                    v135 = v131->ArbitraryUserPointer;
                    v8 = (struct XDCOBJ *)v131->StackBase;
                    v111 = v8;
                  }
                  else
                  {
                    v4 = 0;
                    v125 = 0;
                    v7 = v131;
                  }
                  ms_exc.registration.TryLevel = -2;
                  bottom = v129.bottom;
                  if ( v4 )
                  {
                    DEVLOCKOBJ::vFlushSpriteUpdates((DEVLOCKOBJ *)v63, 0);
                    GreExtSelectClipRgnLocked(v8, (struct _RECTL *)v61, v62);
                  }
                  goto LABEL_98;
                case 6:
                  v106 = 0;
                  ms_exc.registration.TryLevel = 7;
                  if ( ExceptionList_low >= 8 )
                  {
                    v7 = v131;
                    v106 = v131->StackBase;
                  }
                  else
                  {
                    v4 = 0;
                    v125 = 0;
                    v7 = v131;
                  }
                  ms_exc.registration.TryLevel = -2;
                  bottom = v129.bottom;
                  if ( v4 )
                    GreSelectFontInternal(v121, 1);
                  goto LABEL_98;
                case 7:
                  v10 = 0;
                  v110 = 0;
                  ms_exc.registration.TryLevel = 4;
                  if ( ExceptionList_low >= 8 )
                  {
                    v7 = v131;
                    v10 = v131->StackBase;
                    v110 = v10;
                  }
                  else
                  {
                    v4 = 0;
                    v125 = 0;
                    v7 = v131;
                  }
                  ms_exc.registration.TryLevel = -2;
                  bottom = v129.bottom;
                  if ( v4 )
                    goto LABEL_25;
                  goto LABEL_98;
                case 8:
                  v10 = 0;
                  v109 = 0;
                  ms_exc.registration.TryLevel = 5;
                  if ( ExceptionList_low >= 8 )
                  {
                    v7 = v131;
                    v10 = v131->StackBase;
                    v109 = v10;
                  }
                  else
                  {
                    v4 = 0;
                    v125 = 0;
                    v7 = v131;
                  }
                  ms_exc.registration.TryLevel = -2;
                  bottom = v129.bottom;
                  if ( v4 )
LABEL_25:
                    NtGdiDeleteObjectApp(v10);
                  goto LABEL_98;
                default:
LABEL_96:
                  v7 = v131;
                  goto LABEL_97;
              }
            }
            v7 = v131;
            if ( !v130 )
              GreBatchTextOut((struct XDCOBJ *)ExceptionList_low, v61, v62);
LABEL_97:
            bottom = v129.bottom;
LABEL_98:
            --StackBase;
            v50 = (struct _NT_TIB *)((char *)v7 + ((bottom + 3) & 0xFFFFFFFC));
            v131 = v50;
            v128 = v50;
            if ( !StackBase )
              break;
          }
          while ( &v50->StackBase < p_StackLimit );
          ms_exc.registration.TryLevel = 16;
          v51 = v112;
          v112[141].StackBase = 0;
          v51[16].ArbitraryUserPointer = (PVOID)((int)v51[16].ArbitraryUserPointer & 0x80000000);
          v51[16].ArbitraryUserPointer = (PVOID)((int)v51[16].ArbitraryUserPointer & ~0x80000000);
          ms_exc.registration.TryLevel = -2;
          *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 188) = v94;
          *(_DWORD *)(*(_DWORD *)(v129.left + 1020) + 184) |= 0x1000u;
        }
        v52 = (int *)v129.left;
        if ( v129.left )
        {
          if ( v129.top && (*(_DWORD *)(v129.left + 32) & 2) != 0 )
          {
            if ( !v129.right )
            {
              UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v129);
              v52 = (int *)v129.left;
              if ( UserAttr )
              {
                DC::RestoreAttributes((DC *)v129.left, UserAttr);
                v52 = (int *)v129.left;
              }
            }
            v52[8] &= ~2u;
            v129.top = 0;
            v52 = (int *)v129.left;
          }
          v104 = 0;
          v54 = *v52;
          HmgDecrementExclusiveReferenceCountEx(v52, v129.right, &v104);
          if ( v104 )
            bDeleteDCInternalEx(v54, 0);
        }
        v129.left = 0;
        if ( v130 )
          GreEnableAppContainerRestriction(1);
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v63);
      }
    }
    if ( v103 )
    {
      v55 = v131;
      while ( 1 )
      {
        ms_exc.registration.TryLevel = 17;
        v56 = HIWORD(v55->ExceptionList);
        v69 = v56;
        v57 = LOWORD(v55->ExceptionList);
        v101 = v57;
        ms_exc.registration.TryLevel = -2;
        if ( (char *)v55 + v57 > (char *)p_StackLimit )
        {
LABEL_126:
          ms_exc.registration.TryLevel = 20;
          v60 = v112;
          v112[141].StackBase = 0;
          v60[16].ArbitraryUserPointer = (PVOID)((int)v60[16].ArbitraryUserPointer & 0x80000000);
          ms_exc.registration.TryLevel = -2;
          break;
        }
        v58 = v56 - 7;
        if ( v58 )
        {
          if ( v58 != 1 )
            goto LABEL_124;
          v102 = 0;
          ms_exc.registration.TryLevel = 19;
          v59 = v55->StackBase;
          v102 = v59;
          ms_exc.registration.TryLevel = -2;
        }
        else
        {
          v100 = 0;
          ms_exc.registration.TryLevel = 18;
          v59 = v55->StackBase;
          v100 = v59;
          ms_exc.registration.TryLevel = -2;
        }
        NtGdiDeleteObjectApp(v59);
        v55 = v131;
LABEL_124:
        --StackBase;
        v55 = (struct _NT_TIB *)((char *)v55 + ((v57 + 3) & 0xFFFFFFFC));
        v131 = v55;
        v128 = v55;
        if ( !StackBase || &v55->StackBase >= p_StackLimit )
          goto LABEL_126;
      }
    }
  }
  v112[16].Self = 0;
}
