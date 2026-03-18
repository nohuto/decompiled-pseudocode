/*
 * XREFs of ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C00A6200
 * Callers:
 *     NtGdiFlushUserBatch @ 0x1C00A61D0 (NtGdiFlushUserBatch.c)
 * Callees:
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C0068268 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0068928 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C008C7C4 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00978D8 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C009CCDC (-GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009D358 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C009D960 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C009DD54 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C00A111C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C00AE050 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F3124 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C00F6024 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     GreMaskBlt @ 0x1C0102C4C (GreMaskBlt.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     GreSelectFontInternal @ 0x1C015E8C8 (GreSelectFontInternal.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026E454 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     GreEnableAppContainerRestriction @ 0x1C0273058 (GreEnableAppContainerRestriction.c)
 */

void __fastcall NtGdiFlushUserBatchInternal(PVOID Parameter, __int64 a2, DC *a3, __int64 a4)
{
  struct _NT_TIB *Self; // rcx
  PVOID *p_ArbitraryUserPointer; // r13
  unsigned int SubSystemTib; // edi
  unsigned int v7; // edi
  struct _DC_ATTR *UserAttr; // rax
  __int64 v9; // rdx
  int v10; // ecx
  size_t v11; // r8
  int v12; // ebx
  int v13; // edi
  PVOID v14; // rcx
  int v15; // eax
  int v16; // r10d
  DC *v17; // rdx
  int v18; // r8d
  int v19; // ecx
  int v20; // eax
  int v21; // r10d
  __int64 v22; // rcx
  int v23; // edi
  unsigned int v24; // r9d
  unsigned int v25; // r11d
  unsigned int v26; // esi
  unsigned int v27; // r14d
  unsigned int v28; // r15d
  int v29; // edx
  __int64 v30; // r8
  unsigned int v31; // ebx
  int v32; // rax^4
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // edx
  LONG v36; // r15d
  int v37; // edi
  DC *v38; // rcx
  __int64 v39; // rdx
  int v40; // esi
  int v41; // r8d
  __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  int v46; // rax^4
  struct EXFORMOBJ *v47; // rdx
  struct SURFACE *v48; // rcx
  _DWORD *v49; // rcx
  int v50; // edi
  int v51; // esi
  int v52; // r14d
  int v53; // r15d
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  struct _NT_TIB *v57; // rcx
  DC *v58; // rcx
  struct _DC_ATTR *v59; // rax
  __int64 v60; // rbx
  int v61; // ecx
  __int64 v62; // rbx
  int v63; // ecx
  PVOID v64; // rcx
  struct _NT_TIB *v65; // rcx
  char v66; // [rsp+70h] [rbp-1F8h]
  int v67; // [rsp+74h] [rbp-1F4h]
  DC *v68; // [rsp+78h] [rbp-1F0h] BYREF
  __int64 v69; // [rsp+80h] [rbp-1E8h]
  int v70; // [rsp+88h] [rbp-1E0h]
  char v71; // [rsp+8Ch] [rbp-1DCh]
  PVOID *v72; // [rsp+90h] [rbp-1D8h]
  int v73; // [rsp+98h] [rbp-1D0h]
  int StackLimit; // [rsp+9Ch] [rbp-1CCh]
  int v75; // [rsp+A0h] [rbp-1C8h]
  unsigned int v76; // [rsp+A4h] [rbp-1C4h]
  ULONG64 p_Self; // [rsp+A8h] [rbp-1C0h]
  unsigned int v78; // [rsp+B0h] [rbp-1B8h]
  unsigned int v79; // [rsp+B4h] [rbp-1B4h]
  unsigned int v80; // [rsp+B8h] [rbp-1B0h]
  unsigned int v81; // [rsp+BCh] [rbp-1ACh]
  int v82; // [rsp+C0h] [rbp-1A8h]
  int v83; // [rsp+C4h] [rbp-1A4h]
  LONG v84; // [rsp+C8h] [rbp-1A0h]
  int v85; // [rsp+CCh] [rbp-19Ch]
  int v86; // [rsp+D0h] [rbp-198h]
  int v87; // [rsp+D4h] [rbp-194h]
  int v88; // [rsp+D8h] [rbp-190h]
  int v89; // [rsp+DCh] [rbp-18Ch]
  int v90; // [rsp+E0h] [rbp-188h] BYREF
  PVOID v91; // [rsp+E8h] [rbp-180h]
  HDC FiberData; // [rsp+F0h] [rbp-178h]
  struct _NT_TIB *v93; // [rsp+F8h] [rbp-170h]
  PVOID v94; // [rsp+100h] [rbp-168h]
  int v95; // [rsp+108h] [rbp-160h]
  int v96; // [rsp+10Ch] [rbp-15Ch]
  int v97; // [rsp+110h] [rbp-158h]
  LONG v98; // [rsp+114h] [rbp-154h]
  PVOID v99; // [rsp+118h] [rbp-150h]
  PVOID v100; // [rsp+120h] [rbp-148h]
  PVOID v101; // [rsp+128h] [rbp-140h]
  PVOID v102; // [rsp+130h] [rbp-138h]
  PVOID v103; // [rsp+138h] [rbp-130h]
  LONG v104; // [rsp+140h] [rbp-128h]
  int v105; // [rsp+144h] [rbp-124h]
  int v106; // [rsp+148h] [rbp-120h]
  unsigned int v107; // [rsp+14Ch] [rbp-11Ch]
  unsigned int v108; // [rsp+150h] [rbp-118h]
  unsigned int v109; // [rsp+154h] [rbp-114h]
  unsigned int v110; // [rsp+158h] [rbp-110h]
  int v111; // [rsp+15Ch] [rbp-10Ch]
  int v112; // [rsp+160h] [rbp-108h]
  int v113; // [rsp+164h] [rbp-104h]
  int v114; // [rsp+168h] [rbp-100h]
  int v115; // [rsp+16Ch] [rbp-FCh]
  unsigned int v116; // [rsp+170h] [rbp-F8h]
  unsigned int v117; // [rsp+174h] [rbp-F4h]
  unsigned int v118; // [rsp+178h] [rbp-F0h]
  unsigned int v119; // [rsp+17Ch] [rbp-ECh]
  unsigned int v120; // [rsp+180h] [rbp-E8h]
  unsigned int v121; // [rsp+184h] [rbp-E4h]
  int v122; // [rsp+188h] [rbp-E0h]
  int v123; // [rsp+18Ch] [rbp-DCh]
  unsigned int v124; // [rsp+190h] [rbp-D8h]
  PVOID v125; // [rsp+198h] [rbp-D0h]
  __int64 v126; // [rsp+1A0h] [rbp-C8h]
  __int64 v127; // [rsp+1A8h] [rbp-C0h]
  LONG v128; // [rsp+1B0h] [rbp-B8h]
  _QWORD v129[2]; // [rsp+1B8h] [rbp-B0h] BYREF
  PVOID v130; // [rsp+1C8h] [rbp-A0h]
  _BYTE v131[80]; // [rsp+1D0h] [rbp-98h] BYREF
  struct _POINTL v132; // [rsp+220h] [rbp-48h] BYREF
  int v133; // [rsp+228h] [rbp-40h]
  int v134; // [rsp+22Ch] [rbp-3Ch]
  struct _RECTL v135; // [rsp+230h] [rbp-38h] BYREF

  Self = KeGetPcr()->NtTib.Self;
  v93 = Self;
  v72 = 0LL;
  v86 = 1;
  StackLimit = (int)Self[106].StackLimit;
  p_ArbitraryUserPointer = &Self[13].ArbitraryUserPointer;
  v72 = &Self[13].ArbitraryUserPointer;
  LODWORD(Self[106].StackLimit) = 0;
  LODWORD(Self[13].SubSystemTib) &= 0x80000000;
  SubSystemTib = (unsigned int)Self[13].SubSystemTib;
  p_Self = (ULONG64)&Self[35].Self;
  if ( (unsigned int)(StackLimit - 1) > 0x134 )
    goto LABEL_135;
  FiberData = 0LL;
  v71 = 1;
  FiberData = (HDC)v93[13].FiberData;
  v7 = SubSystemTib >> 31;
  v71 = v7;
  if ( FiberData )
  {
    v69 = 0LL;
    LOBYTE(a2) = 1;
    a3 = (DC *)HmgLockEx(FiberData, a2, 0LL);
    v68 = a3;
    if ( a3 )
    {
      if ( (*((_DWORD *)a3 + 11) & 2) == 0 )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v68);
        if ( UserAttr && !DC::SaveAttributes(v68, UserAttr) )
        {
          _InterlockedDecrement((volatile signed __int32 *)v68 + 3);
          p_ArbitraryUserPointer = v72;
          goto LABEL_125;
        }
        *((_DWORD *)v68 + 11) |= 2u;
        LODWORD(v69) = 1;
        a3 = v68;
      }
      if ( (*((_DWORD *)a3 + 130) & 4) == 0 )
        goto LABEL_15;
      DC::vMarkTransformDirty(a3);
    }
    else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet();
    }
    a3 = v68;
LABEL_15:
    if ( a3 )
    {
      DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v131);
      v66 = 0;
      if ( (unsigned int)UserIsCurrentProcessImmersiveAppContainer() && !(_BYTE)v7 )
      {
        v66 = 1;
        GreEnableAppContainerRestriction(0LL);
      }
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v131, (struct XDCOBJ *)&v68, 0) )
      {
        v86 = 0;
        v127 = *(_QWORD *)(*((_QWORD *)v68 + 122) + 160LL);
        do
        {
          v70 = 0;
          v9 = 1LL;
          v73 = 1;
          v10 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
          v115 = v10;
          v11 = *(unsigned __int16 *)p_ArbitraryUserPointer;
          v67 = *(unsigned __int16 *)p_ArbitraryUserPointer;
          v70 = v67;
          if ( (unsigned __int64)p_ArbitraryUserPointer + v11 > p_Self )
            break;
          if ( v10 == 6 )
          {
            v101 = 0LL;
            if ( (unsigned int)v11 >= 0x10 )
            {
              v101 = p_ArbitraryUserPointer[1];
            }
            else
            {
              LODWORD(v9) = 0;
              v73 = 0;
            }
            v12 = v67;
            if ( (_DWORD)v9 )
              GreSelectFontInternal(FiberData);
          }
          else if ( v10 == 2 )
          {
            if ( !v66 )
              GreBatchTextOut((struct XDCOBJ *)&v68, (struct _BATCHTEXTOUT *)p_ArbitraryUserPointer, v11);
LABEL_27:
            v12 = v67;
          }
          else
          {
            switch ( v10 )
            {
              case 0:
                if ( (unsigned int)v11 < 0x48 )
                  goto LABEL_27;
                if ( v66 )
                  goto LABEL_27;
                v36 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                v98 = v36;
                v128 = v36;
                v84 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                v104 = v84;
                v83 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                v105 = v83;
                v82 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                v106 = v82;
                v96 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                v78 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                v107 = v78;
                v79 = *((_DWORD *)p_ArbitraryUserPointer + 10);
                v108 = v79;
                v80 = *((_DWORD *)p_ArbitraryUserPointer + 15);
                v109 = v80;
                v81 = *((_DWORD *)p_ArbitraryUserPointer + 16);
                v110 = v81;
                v37 = (BYTE2(v96) << 8) | BYTE2(v96);
                v97 = v37;
                v96 = v37;
                if ( (((unsigned __int8)v37 ^ (unsigned __int8)(4 * v37)) & 0xCC) != 0 )
                  goto LABEL_27;
                v126 = *(_QWORD *)(*((_QWORD *)v68 + 122) + 160LL);
                v75 = 0;
                v76 = 0;
                v125 = 0LL;
                v130 = p_ArbitraryUserPointer[3];
                GreDCSelectBrush(v68, v130);
                v38 = v68;
                v39 = *((_QWORD *)v68 + 122);
                v95 = *(_DWORD *)(v39 + 192);
                v40 = v95;
                LODWORD(v91) = *(_DWORD *)(v39 + 196);
                v111 = *((_DWORD *)p_ArbitraryUserPointer + 11);
                v41 = *((_DWORD *)p_ArbitraryUserPointer + 17);
                v112 = v41;
                if ( v95 != v111 )
                {
                  *(_DWORD *)(v39 + 192) = v111;
                  *(_DWORD *)(*((_QWORD *)v68 + 122) + 196LL) = v41;
                  *(_DWORD *)(*((_QWORD *)v68 + 122) + 152LL) |= 1u;
                  v38 = v68;
                }
                if ( (*((_DWORD *)v38 + 30) & 1) != 0 )
                {
                  v42 = *((_QWORD *)v38 + 122);
                  if ( *(_QWORD *)(v42 + 248) )
                  {
                    v43 = *(_DWORD *)(v42 + 152);
                    v76 = v43 & 0x40000;
                    *(_DWORD *)(v42 + 152) = v43 | 0x40000;
                    v38 = v68;
                    v44 = *((_QWORD *)v68 + 122);
                    v75 = *(_DWORD *)(v44 + 256);
                    v113 = *((_DWORD *)p_ArbitraryUserPointer + 12);
                    if ( v75 != v113 )
                    {
                      *(_DWORD *)(v44 + 256) = v113;
                      *(_DWORD *)(*((_QWORD *)v68 + 122) + 152LL) |= 1u;
                      v38 = v68;
                    }
                  }
                }
                v45 = *((_QWORD *)v38 + 122);
                v94 = *(PVOID *)(v45 + 324);
                v31 = (unsigned int)v94;
                v125 = *(PVOID *)((char *)p_ArbitraryUserPointer + 52);
                v46 = HIDWORD(v125);
                if ( v94 != v125 )
                {
                  *(_DWORD *)(v45 + 324) = (_DWORD)v125;
                  *(_DWORD *)(*((_QWORD *)v68 + 122) + 328LL) = v46;
                  *(_DWORD *)(*((_QWORD *)v68 + 122) + 340LL) |= 0x2010u;
                }
                EXFORMOBJ::vQuickInit((EXFORMOBJ *)v129, (struct XDCOBJ *)&v68, 0x204u);
                if ( (*(_DWORD *)(v129[0] + 32LL) & 1) != 0 )
                {
                  v132.x = v36;
                  v132.y = v84;
                  v133 = v36 + v83;
                  v134 = v84 + v82;
                  EXFORMOBJ::bXform((EXFORMOBJ *)v129, &v132);
                  ERECTL::vOrder((ERECTL *)&v132);
                  if ( !ERECTL::bEmpty((ERECTL *)&v132) )
                  {
                    if ( (*((_DWORD *)v68 + 9) & 0xE0) != 0 )
                      XDCOBJ::vAccumulate((XDCOBJ *)&v68, (struct ERECTL *)&v132);
                    v48 = (struct SURFACE *)*((_QWORD *)v68 + 62);
                    if ( v48 )
                      GrePatBltLockedDC((__int64)&v68, v47, (struct ERECTL *)&v132, v37, v48, v78, v79, v80, v81);
                  }
                }
                else
                {
                  v49 = (_DWORD *)*((_QWORD *)v68 + 122);
                  v50 = v49[46];
                  v51 = v49[44];
                  v52 = v49[47];
                  v53 = v49[45];
                  v49[46] = v78;
                  *(_DWORD *)(*((_QWORD *)v68 + 122) + 176LL) = v79;
                  *(_DWORD *)(*((_QWORD *)v68 + 122) + 188LL) = v80;
                  *(_DWORD *)(*((_QWORD *)v68 + 122) + 180LL) = v81;
                  GreMaskBlt(FiberData, v82, 0LL, 0, 0, 0LL, 0, 0, v97 << 16, 0);
                  *(_DWORD *)(*((_QWORD *)v68 + 122) + 184LL) = v50;
                  *(_DWORD *)(*((_QWORD *)v68 + 122) + 176LL) = v51;
                  *(_DWORD *)(*((_QWORD *)v68 + 122) + 188LL) = v52;
                  *(_DWORD *)(*((_QWORD *)v68 + 122) + 180LL) = v53;
                  v40 = v95;
                }
                v54 = *((_QWORD *)v68 + 122);
                if ( *(_QWORD *)(v54 + 160) != v126 )
                {
                  *(_QWORD *)(v54 + 160) = v126;
                  *(_DWORD *)(*((_QWORD *)v68 + 122) + 152LL) |= 0x1000u;
                }
                v55 = *((_QWORD *)v68 + 122);
                if ( v40 != *(_DWORD *)(v55 + 192) )
                {
                  *(_DWORD *)(v55 + 192) = v40;
                  *(_DWORD *)(*((_QWORD *)v68 + 122) + 196LL) = (_DWORD)v91;
                  *(_DWORD *)(*((_QWORD *)v68 + 122) + 152LL) |= 1u;
                }
                if ( (*((_DWORD *)v68 + 30) & 1) != 0 )
                {
                  v56 = *((_QWORD *)v68 + 122);
                  if ( *(_QWORD *)(v56 + 248) )
                  {
                    if ( v75 != *(_DWORD *)(v56 + 256) )
                    {
                      *(_DWORD *)(v56 + 256) = v75;
                      *(_DWORD *)(*((_QWORD *)v68 + 122) + 152LL) |= 1u;
                    }
                    if ( !v76 )
                      *(_DWORD *)(*((_QWORD *)v68 + 122) + 152LL) &= ~0x40000u;
                  }
                }
                v34 = *((_QWORD *)v68 + 122);
                v35 = HIDWORD(v94);
                if ( __PAIR64__(HIDWORD(v94), v31) == *(_QWORD *)(v34 + 324) )
                  goto LABEL_27;
                goto LABEL_74;
              case 1:
                v94 = 0LL;
                if ( v66 || (unsigned int)v11 < 0x38 )
                  goto LABEL_27;
                if ( (PVOID *)p_Self != p_ArbitraryUserPointer )
                {
                  if ( ((unsigned __int8)p_ArbitraryUserPointer & 7) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( p_Self > MmUserProbeAddress || p_Self < (unsigned __int64)p_ArbitraryUserPointer )
                    *(_BYTE *)MmUserProbeAddress = 0;
                }
                v116 = *((_DWORD *)p_ArbitraryUserPointer + 3);
                v21 = v116;
                if ( v116 >= 0xAAAAAAA || 24 * (unsigned __int64)v116 > (unsigned int)(v11 - 48) )
                  goto LABEL_27;
                v22 = *((_QWORD *)v68 + 122);
                v23 = *(_DWORD *)(v22 + 192);
                v75 = *(_DWORD *)(v22 + 196);
                v24 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                v117 = v24;
                v25 = *((_DWORD *)p_ArbitraryUserPointer + 4);
                v118 = v25;
                v26 = *((_DWORD *)p_ArbitraryUserPointer + 5);
                v119 = v26;
                v27 = *((_DWORD *)p_ArbitraryUserPointer + 7);
                v120 = v27;
                v28 = *((_DWORD *)p_ArbitraryUserPointer + 8);
                v121 = v28;
                v122 = *((_DWORD *)p_ArbitraryUserPointer + 6);
                v29 = *((_DWORD *)p_ArbitraryUserPointer + 9);
                v123 = v29;
                v76 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                v124 = v76;
                if ( v23 != v122 )
                {
                  *(_DWORD *)(v22 + 192) = v122;
                  *(_DWORD *)(*((_QWORD *)v68 + 122) + 196LL) = v29;
                  *(_DWORD *)(*((_QWORD *)v68 + 122) + 152LL) |= 1u;
                }
                v30 = *((_QWORD *)v68 + 122);
                v91 = *(PVOID *)(v30 + 324);
                v31 = (unsigned int)v91;
                v94 = p_ArbitraryUserPointer[5];
                v32 = HIDWORD(v94);
                if ( v91 != v94 )
                {
                  *(_DWORD *)(v30 + 324) = (_DWORD)v94;
                  *(_DWORD *)(*((_QWORD *)v68 + 122) + 328LL) = v32;
                  *(_DWORD *)(*((_QWORD *)v68 + 122) + 340LL) |= 0x2010u;
                }
                GrePolyPatBltInternal(
                  (struct XDCOBJ *)&v68,
                  v76,
                  (struct _POLYPATBLT *)(p_ArbitraryUserPointer + 6),
                  v21,
                  v24,
                  v25,
                  v26,
                  v27,
                  v28);
                v33 = *((_QWORD *)v68 + 122);
                if ( v23 != *(_DWORD *)(v33 + 192) )
                {
                  *(_DWORD *)(v33 + 192) = v23;
                  *(_DWORD *)(*((_QWORD *)v68 + 122) + 196LL) = v75;
                  *(_DWORD *)(*((_QWORD *)v68 + 122) + 152LL) |= 1u;
                }
                v34 = *((_QWORD *)v68 + 122);
                v35 = HIDWORD(v91);
                if ( __PAIR64__(HIDWORD(v91), v31) == *(_QWORD *)(v34 + 324) )
                  goto LABEL_27;
LABEL_74:
                *(_DWORD *)(v34 + 324) = v31;
                *(_DWORD *)(*((_QWORD *)v68 + 122) + 328LL) = v35;
                *(_DWORD *)(*((_QWORD *)v68 + 122) + 340LL) |= 0x2010u;
                goto LABEL_27;
              case 3:
                if ( !v66 )
                  GreBatchTextOutRect((struct XDCOBJ *)&v68, (struct tagRECT *)p_ArbitraryUserPointer, v11);
                goto LABEL_27;
              case 4:
                v15 = 0;
                v89 = 0;
                v16 = 0;
                v85 = 0;
                if ( (unsigned int)v11 >= 0xC )
                {
                  v15 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v89 = v15;
                  v16 = *((_DWORD *)p_ArbitraryUserPointer + 2);
                  v85 = v16;
                }
                else
                {
                  LODWORD(v9) = 0;
                  v73 = 0;
                }
                v12 = v67;
                if ( (_DWORD)v9 )
                {
                  v17 = v68;
                  *((_DWORD *)v68 + 31) = v15;
                  *((_DWORD *)v17 + 32) = v16;
                  v18 = *((_DWORD *)v17 + 10) & 1;
                  if ( v18 )
                    v19 = *((_DWORD *)v17 + 256);
                  else
                    v19 = *((_DWORD *)v17 + 254);
                  *((_DWORD *)v17 + 294) = v15 + v19;
                  if ( v18 )
                    v20 = *((_DWORD *)v17 + 257);
                  else
                    v20 = *((_DWORD *)v17 + 255);
                  *((_DWORD *)v17 + 295) = v16 + v20;
                }
                break;
              case 5:
                v135 = 0LL;
                v13 = 0;
                v88 = 0;
                if ( (unsigned int)v11 >= 0x18 )
                {
                  v135 = *(struct _RECTL *)(p_ArbitraryUserPointer + 1);
                  v13 = *((_DWORD *)p_ArbitraryUserPointer + 1);
                  v88 = v13;
                }
                else
                {
                  LODWORD(v9) = 0;
                  v73 = 0;
                }
                v12 = v67;
                if ( (_DWORD)v9 )
                {
                  DEVLOCKOBJ::vFlushSpriteUpdates((DEVLOCKOBJ *)v131, 0);
                  GreExtSelectClipRgnLocked(&v68, &v135, v13);
                }
                break;
              case 7:
                v14 = 0LL;
                v99 = 0LL;
                if ( (unsigned int)v11 >= 0x10 )
                {
                  v14 = p_ArbitraryUserPointer[1];
                  v99 = v14;
                }
                else
                {
                  v9 = 0LL;
                  v73 = 0;
                }
                v12 = v67;
                goto LABEL_40;
              case 8:
                v14 = 0LL;
                v100 = 0LL;
                if ( (unsigned int)v11 >= 0x10 )
                {
                  v14 = p_ArbitraryUserPointer[1];
                  v100 = v14;
                }
                else
                {
                  v9 = 0LL;
                  v73 = 0;
                }
                v12 = v67;
LABEL_40:
                if ( (_DWORD)v9 )
                  NtGdiDeleteObjectApp(v14, v9, v11, 0x1C0000000uLL);
                break;
              default:
                goto LABEL_27;
            }
          }
          --StackLimit;
          p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + ((v12 + 7) & 0xFFFFFFF8));
          v72 = p_ArbitraryUserPointer;
          if ( !StackLimit )
            break;
        }
        while ( (unsigned __int64)p_ArbitraryUserPointer + 4 < p_Self );
        v57 = v93;
        LODWORD(v93[106].StackLimit) = 0;
        LODWORD(v57[13].SubSystemTib) &= 0x80000000;
        LODWORD(v57[13].SubSystemTib) &= ~0x80000000;
        *(_QWORD *)(*((_QWORD *)v68 + 122) + 160LL) = v127;
        *(_DWORD *)(*((_QWORD *)v68 + 122) + 152LL) |= 0x1000u;
      }
      v58 = v68;
      if ( v68 )
      {
        if ( (_DWORD)v69 && (*((_DWORD *)v68 + 11) & 2) != 0 )
        {
          if ( !HIDWORD(v69) )
          {
            v59 = XDCOBJ::GetUserAttr((XDCOBJ *)&v68);
            v58 = v68;
            if ( v59 )
            {
              DC::RestoreAttributes(v68, v59);
              v58 = v68;
            }
          }
          *((_DWORD *)v58 + 11) &= ~2u;
          LODWORD(v69) = 0;
          v58 = v68;
        }
        v90 = 0;
        v60 = *(_QWORD *)v58;
        HmgDecrementExclusiveReferenceCountEx(v58, HIDWORD(v69), &v90);
        if ( v90 )
          bDeleteDCInternalEx(v60, 0LL);
      }
      v68 = 0LL;
      if ( v66 )
        GreEnableAppContainerRestriction(1LL);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v131);
    }
  }
LABEL_125:
  if ( v86 )
  {
    while ( 1 )
    {
      v61 = *((unsigned __int16 *)p_ArbitraryUserPointer + 1);
      v114 = v61;
      v62 = *(unsigned __int16 *)p_ArbitraryUserPointer;
      v87 = *(unsigned __int16 *)p_ArbitraryUserPointer;
      if ( (unsigned __int64)p_ArbitraryUserPointer + v62 > p_Self )
      {
LABEL_134:
        v65 = v93;
        LODWORD(v93[106].StackLimit) = 0;
        LODWORD(v65[13].SubSystemTib) &= 0x80000000;
        break;
      }
      v63 = v61 - 7;
      if ( v63 )
      {
        if ( v63 != 1 )
          goto LABEL_132;
        v102 = 0LL;
        v64 = p_ArbitraryUserPointer[1];
        v102 = v64;
      }
      else
      {
        v103 = 0LL;
        v64 = p_ArbitraryUserPointer[1];
        v103 = v64;
      }
      NtGdiDeleteObjectApp(v64, 1LL, a3, a4);
LABEL_132:
      --StackLimit;
      p_ArbitraryUserPointer = (PVOID *)((char *)p_ArbitraryUserPointer + (((_DWORD)v62 + 7) & 0xFFFFFFF8));
      v72 = p_ArbitraryUserPointer;
      if ( !StackLimit || (unsigned __int64)p_ArbitraryUserPointer + 4 >= p_Self )
        goto LABEL_134;
    }
  }
LABEL_135:
  v93[13].FiberData = 0LL;
}
