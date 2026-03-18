/*
 * XREFs of NtGdiExtFloodFill @ 0x1C02B8910
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00690E4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0097914 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0098FF0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00993B8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009D358 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C009E20C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00A0F50 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A1148 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F3124 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00F8FAC (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C0102BAC (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012CEF8 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012D26C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C013A9FC (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C013C058 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     EngPaint @ 0x1C013C7F0 (EngPaint.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C014BAB8 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C014DBF8 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ??0STACKMEMOBJ@@QEAA@KKJJJ@Z @ 0x1C02B7ACC (--0STACKMEMOBJ@@QEAA@KKJJJ@Z.c)
 *     ??1STACKMEMOBJ@@QEAA@XZ @ 0x1C02B7BCC (--1STACKMEMOBJ@@QEAA@XZ.c)
 *     ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x1C02B7D94 (-bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 *     ?bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z @ 0x1C02B8004 (-bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z.c)
 *     ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x1C02B86AC (-iColorGet@FLOODBM@@QEAAKJ@Z.c)
 *     ?vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z @ 0x1C02B8774 (-vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z.c)
 *     ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x1C02B9604 (-bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiExtFloodFill(HDC a1, LONG a2, LONG a3, unsigned int a4, int a5)
{
  DC *v8; // rbx
  char v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdx
  int v14; // r14d
  DC *v15; // rax
  __int64 v16; // rdx
  int v17; // ebx
  DYNAMICMODECHANGESHARELOCK *v18; // rcx
  DCVISRGNSHARELOCK *v19; // rcx
  __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // r9
  ULONG NearestIndexFromColorref; // eax
  DC *v26; // rcx
  ULONG v27; // r12d
  int v28; // edx
  __int64 v29; // r8
  char *v30; // r13
  int v31; // edx
  unsigned int v32; // ebx
  bool v33; // zf
  _DWORD *v34; // rax
  _DWORD *v35; // rcx
  void *v36; // r8
  struct _RECTL v37; // xmm6
  __int64 v38; // rcx
  int v39; // edi
  int v40; // edx
  LONG y; // ebx
  LONG x; // r10d
  int v43; // eax
  int v44; // eax
  BOOL v45; // r13d
  int v46; // esi
  int v47; // r12d
  int v48; // eax
  __int64 v49; // rax
  unsigned __int8 *v50; // rsi
  int v51; // ecx
  int v52; // eax
  int v53; // r10d
  int v54; // r11d
  int v55; // r12d
  int v56; // r13d
  int v57; // r12d
  LONG top; // r13d
  __int64 v59; // rsi
  BRUSHOBJ *v60; // rdi
  MIX v61; // eax
  MIX mix; // ebx
  struct ECLIPOBJ *v63; // rdx
  POINTL *v64; // r9
  struct ECLIPOBJ *v65; // rdx
  int v67; // [rsp+68h] [rbp-A0h] BYREF
  struct _POINTL v68; // [rsp+70h] [rbp-98h] BYREF
  DC *v69[2]; // [rsp+78h] [rbp-90h] BYREF
  struct _POINTL v70; // [rsp+88h] [rbp-80h] BYREF
  __int64 v71; // [rsp+90h] [rbp-78h] BYREF
  ULONG v72; // [rsp+98h] [rbp-70h]
  struct REGION *v73[2]; // [rsp+A0h] [rbp-68h] BYREF
  FLONG v74; // [rsp+B0h] [rbp-58h]
  int v75; // [rsp+B4h] [rbp-54h] BYREF
  int v76; // [rsp+B8h] [rbp-50h] BYREF
  struct REGION *v77; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v78; // [rsp+C8h] [rbp-40h] BYREF
  int v79; // [rsp+D0h] [rbp-38h]
  int v80; // [rsp+D4h] [rbp-34h]
  __int64 v81; // [rsp+D8h] [rbp-30h]
  struct REGION *v82[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v83; // [rsp+F0h] [rbp-18h] BYREF
  char v84; // [rsp+F8h] [rbp-10h]
  int v85; // [rsp+FCh] [rbp-Ch]
  _BYTE v86[4]; // [rsp+100h] [rbp-8h] BYREF
  int v87; // [rsp+104h] [rbp-4h]
  __int64 v88; // [rsp+108h] [rbp+0h]
  __int64 v89; // [rsp+120h] [rbp+18h]
  __int128 v90; // [rsp+128h] [rbp+20h] BYREF
  __int128 v91; // [rsp+138h] [rbp+30h]
  int v92; // [rsp+148h] [rbp+40h] BYREF
  struct _RECTL v93; // [rsp+14Ch] [rbp+44h]
  ULONG v94; // [rsp+15Ch] [rbp+54h]
  unsigned __int8 *v95; // [rsp+160h] [rbp+58h]
  int v96; // [rsp+168h] [rbp+60h]
  int v97; // [rsp+16Ch] [rbp+64h]
  _BYTE v98[4]; // [rsp+170h] [rbp+68h] BYREF
  int v99; // [rsp+174h] [rbp+6Ch]
  __int64 v100; // [rsp+178h] [rbp+70h]
  __int64 v101; // [rsp+190h] [rbp+88h]
  BRUSHOBJ *v102; // [rsp+198h] [rbp+90h]
  _BYTE v103[24]; // [rsp+1A0h] [rbp+98h] BYREF
  _BYTE v104[32]; // [rsp+1B8h] [rbp+B0h] BYREF
  _QWORD v105[2]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int16 v106; // [rsp+1E8h] [rbp+E0h]
  BRUSHOBJ pbo; // [rsp+208h] [rbp+100h] BYREF
  int v108; // [rsp+220h] [rbp+118h]
  int v109; // [rsp+224h] [rbp+11Ch]
  __int64 v110; // [rsp+228h] [rbp+120h]
  __int64 v111; // [rsp+230h] [rbp+128h]
  __int64 v112; // [rsp+260h] [rbp+158h]
  __int128 v113; // [rsp+268h] [rbp+160h]
  int v114; // [rsp+280h] [rbp+178h]
  struct _RECTL v115; // [rsp+298h] [rbp+190h] BYREF
  _DWORD v116[2]; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int64 v117; // [rsp+2B0h] [rbp+1A8h]
  CLIPOBJ pco; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int64 v119; // [rsp+308h] [rbp+200h]
  int v120; // [rsp+310h] [rbp+208h]
  int v121; // [rsp+338h] [rbp+230h]
  __int64 v122; // [rsp+348h] [rbp+240h]

  LODWORD(v81) = a4;
  DCOBJ::DCOBJ((DCOBJ *)v69, a1);
  v8 = v69[0];
  if ( !v69[0] || (*((_DWORD *)v69[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v14 = 0;
LABEL_115:
    v32 = v14;
    goto LABEL_116;
  }
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v69) )
  {
    if ( (v9 & 0xE0) != 0 )
    {
      v10 = *((_QWORD *)v8 + 6);
      GreAcquireSemaphore(*(_QWORD *)(v10 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(v10 + 48), 11LL);
      v11 = *(_QWORD *)(v10 + 2552);
      if ( v11 )
        v12 = *(_QWORD *)(v11 + 56);
      else
        v12 = *((_QWORD *)v69[0] + 64);
      v13 = *(_QWORD *)(v10 + 48);
      v71 = v12;
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v13);
      GreReleaseSemaphoreInternal(*(_QWORD *)(v10 + 48));
      v80 = HIDWORD(v71);
      v78 = 0LL;
      v79 = v12;
      XDCOBJ::vAccumulate((XDCOBJ *)v69, (struct ERECTL *)&v78);
    }
    v14 = 1;
    goto LABEL_115;
  }
  DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v67);
  v15 = v69[0];
  v16 = *((_QWORD *)v69[0] + 122);
  v17 = *(_DWORD *)(v16 + 152);
  if ( (v17 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v69[0], *(_QWORD *)(v16 + 160));
    v15 = v69[0];
  }
  if ( (v17 & 0x2000) != 0 )
  {
    GreDCSelectPen(v15, *(_QWORD *)(*((_QWORD *)v15 + 122) + 168LL));
    v15 = v69[0];
  }
  v18 = (DYNAMICMODECHANGESHARELOCK *)*((_QWORD *)v15 + 62);
  if ( v18 && *((_WORD *)v18 + 50) == 3 )
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v73, (struct XDCOBJ *)v69);
    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v67);
    v71 = ghsemSprite;
    GreAcquireSemaphore(ghsemSprite);
    bConvertDfbDcToDib((struct XDCOBJ *)v69);
    SEMOBJ::vUnlock((SEMOBJ *)&v71);
    DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v19);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v73);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v18);
  v105[0] = 0LL;
  v105[1] = 0LL;
  v106 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v104, (struct XDCOBJ *)v69, 0);
  v20 = *((_QWORD *)v69[0] + 62);
  v68.x = a2;
  v68.y = a3;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v103, (struct XDCOBJ *)v69, 516);
  if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v103, &v68) )
  {
LABEL_34:
    v32 = 0;
    goto LABEL_112;
  }
  v21 = *(_QWORD *)(v20 + 48);
  v22 = *(_QWORD *)(v20 + 128);
  v23 = *((_QWORD *)v69[0] + 11);
  if ( (*(_DWORD *)(*((_QWORD *)v69[0] + 6) + 40LL) & 0x80u) == 0
    && !(unsigned int)DC::bIsCMYKColor(v69[0])
    && (*(_DWORD *)(v24 + 120) & 2) == 0 )
  {
    NearestIndexFromColorref = ulGetNearestIndexFromColorref(v22, v23, a4, 1LL);
    v26 = v69[0];
    v27 = NearestIndexFromColorref;
    v72 = NearestIndexFromColorref;
    v28 = *((_DWORD *)v69[0] + 30);
    if ( (v28 & 4) != 0 || (v74 = 0, (v28 & 1) != 0) )
      v74 = 2;
    v29 = *((_QWORD *)v69[0] + 122);
    v30 = (char *)v69[0] + 1184;
    v102 = (BRUSHOBJ *)((char *)v69[0] + 1184);
    v31 = *(_DWORD *)(v29 + 152);
    if ( (v31 & 1) != 0 || (*((_DWORD *)v69[0] + 79) & 1) != 0 )
    {
      *(_DWORD *)(v29 + 152) = v31 & 0xFFFFFFFE;
      *((_DWORD *)v69[0] + 79) &= ~1u;
      EBRUSHOBJ::vInitBrush((char *)v26 + 1184, v69[0], *((_QWORD *)v69[0] + 17), v23, v22, v20, 1);
      v26 = v69[0];
    }
    if ( (*((_DWORD *)v30 + 30) & 0x100) != 0 )
    {
      v32 = 1;
      goto LABEL_112;
    }
    if ( (v104[24] & 1) == 0 )
    {
      v32 = XDCOBJ::bFullScreen((XDCOBJ *)v69);
      goto LABEL_112;
    }
    v33 = (*((_DWORD *)v26 + 10) & 1) == 0;
    v34 = (_DWORD *)((char *)v26 + 1016);
    v35 = (_DWORD *)((char *)v26 + 1024);
    if ( v33 )
      v35 = v34;
    v68.x += *v35;
    v68.y += v35[1];
    v77 = XDCOBJ::prgnEffRao(v69);
    if ( RGNOBJ::bInside((RGNOBJ *)&v77, &v68) != 2 )
      goto LABEL_34;
    v76 = 0;
    v75 = 0;
    v90 = 0LL;
    v83 = 0LL;
    v91 = 0LL;
    v84 = 0;
    v85 = 0;
    v71 = *(_QWORD *)(v20 + 48);
    PDEVOBJ::vSync((PDEVOBJ *)&v71, (struct _SURFOBJ *)(v20 + 24), 0LL, 0);
    v36 = 0LL;
    LODWORD(v73[0]) = 0;
    v37 = (struct _RECTL)*((_OWORD *)v77 + 6);
    v70 = 0LL;
    v115 = v37;
    if ( !*(_WORD *)(v20 + 100) && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v77) != 3 )
    {
      v38 = *(_QWORD *)(v20 + 80);
      v39 = *(_DWORD *)(v20 + 88);
      v40 = *(_DWORD *)(v20 + 96);
      y = v68.y;
      x = v68.x;
      goto LABEL_64;
    }
    LODWORD(v90) = *(_DWORD *)(v20 + 96);
    LODWORD(v71) = v90;
    DWORD1(v90) = v115.right - v115.left;
    DWORD2(v90) = v115.bottom - v115.top;
    v43 = 1;
    DWORD2(v91) = 1;
    *(_QWORD *)&v91 = v36;
    if ( (*(_DWORD *)(v20 + 112) & 0x40000) != 0 )
      v43 = 262145;
    DWORD2(v91) = v43;
    SURFMEM::bCreateDIB(
      (SURFMEM *)&v83,
      (struct _DEVBITMAPINFO *)&v90,
      v36,
      0LL,
      (unsigned int)v36,
      v36,
      (unsigned __int64)v36,
      (_DWORD)v36,
      1,
      (_DWORD)v36,
      (_DWORD)v36);
    if ( !v83 )
    {
      EngSetLastError(8u);
      goto LABEL_73;
    }
    v116[0] = 0;
    v116[1] = 0;
    v33 = (*(_DWORD *)(v20 + 112) & 0x400) == 0;
    v117 = *(_QWORD *)((char *)&v90 + 4);
    if ( v33 )
      v44 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, _DWORD *, struct _RECTL *))EngCopyBits)(
              v83 + 24,
              v20 + 24,
              0LL,
              xloIdent,
              v116,
              &v115);
    else
      v44 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, XLATEOBJ *const, _DWORD *, struct _RECTL *))(v21 + 2840))(
              v83 + 24,
              v20 + 24,
              0LL,
              xloIdent,
              v116,
              &v115);
    v45 = v44;
    v46 = -v115.left;
    v47 = -v115.top;
    v70.x = -v115.left;
    v70.y = -v115.top;
    if ( !v44 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v77) != 3 )
    {
      ERECTL::bOffsetAdd((ERECTL *)&v115, &v70, 0);
LABEL_62:
      if ( v45 )
      {
        x = v46 + v68.x;
        y = v47 + v68.y;
        v37 = v115;
        v40 = v71;
        v68.x += v46;
        v70.y = -v47;
        v27 = v72;
        v68.y = y;
        v70.x = -v46;
        v39 = *(_DWORD *)(v83 + 88);
        v38 = *(_QWORD *)(v83 + 80);
        LODWORD(v73[0]) = 1;
LABEL_64:
        v97 = -1;
        v81 = v38;
        v92 = v40;
        v93 = v37;
        v94 = v27;
        v49 = *(_QWORD *)(v20 + 128);
        v50 = (unsigned __int8 *)(v38 + v39 * y);
        v96 = a5;
        v95 = v50;
        if ( v49 )
        {
          v51 = *(_DWORD *)(v49 + 24);
          if ( (v51 & 0xC) != 0 )
          {
            v97 = 0xFFFFFF;
          }
          else if ( (v51 & 2) != 0 )
          {
            v97 = **(_DWORD **)(v49 + 112) | *(_DWORD *)(*(_QWORD *)(v49 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v49 + 112) + 8LL);
          }
        }
        v52 = FLOODBM::iColorGet((FLOODBM *)&v92, x);
        if ( !v54 && v52 == v27 || v54 == 1 && v52 != v27 )
          goto LABEL_73;
        FLOODBM::vFindExtent((FLOODBM *)&v92, v53, &v76, &v75);
        v55 = v75;
        v56 = v76;
        STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v98, 0x1B8u, 1, y, v76, v75);
        if ( !v101 )
        {
          EngSetLastError(8u);
          v32 = 0;
LABEL_109:
          STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v98);
          goto LABEL_110;
        }
        STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v86, 0xF8u, 0, v68.y, v56, v55);
        if ( !v89 )
        {
          EngSetLastError(8u);
          v32 = 0;
LABEL_108:
          STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v86);
          goto LABEL_109;
        }
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v82, 0x12E0u);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v82);
        if ( !v82[0] )
        {
          EngSetLastError(8u);
LABEL_101:
          v32 = 0;
LABEL_107:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v82);
          goto LABEL_108;
        }
        v32 = 1;
        v57 = v115.bottom - 1;
        top = v115.top;
        if ( v68.y >= v115.bottom - 1 )
        {
          v87 -= *(_DWORD *)(v88 + 8);
          v88 = *(_QWORD *)(v88 + 16);
        }
        else
        {
          v32 = FLOODBM::bExtendScanline(
                  (FLOODBM *)&v92,
                  (struct STACKOBJ *)v86,
                  (struct STACKOBJ *)v98,
                  v68.y + 1,
                  v50,
                  &v50[v39]) & 1;
        }
        if ( v32 )
        {
          v59 = v81;
          do
          {
            while ( 1 )
            {
              while ( v87 )
              {
                if ( !(unsigned int)RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)v82, (struct STACKOBJ *)v86) )
                  goto LABEL_94;
                if ( *(_DWORD *)v88 >= v57 )
                {
                  v87 -= *(_DWORD *)(v88 + 8);
                  v88 = *(_QWORD *)(v88 + 16);
                }
                else if ( !(unsigned int)FLOODBM::bExtendScanline(
                                           (FLOODBM *)&v92,
                                           (struct STACKOBJ *)v86,
                                           (struct STACKOBJ *)v98,
                                           *(_DWORD *)v88 + 1,
                                           (unsigned __int8 *)(v59 + v39 * *(_DWORD *)v88),
                                           (unsigned __int8 *)(v59 + v39 * *(_DWORD *)v88 + v39)) )
                {
LABEL_94:
                  v32 = 0;
                  goto LABEL_106;
                }
              }
              if ( !v99 )
                goto LABEL_96;
              v32 &= RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)v82, (struct STACKOBJ *)v98);
              if ( *(_DWORD *)v100 > top )
                break;
              v99 -= *(_DWORD *)(v100 + 8);
              v100 = *(_QWORD *)(v100 + 16);
            }
          }
          while ( (unsigned int)FLOODBM::bExtendScanline(
                                  (FLOODBM *)&v92,
                                  (struct STACKOBJ *)v98,
                                  (struct STACKOBJ *)v86,
                                  *(_DWORD *)v100 - 1,
                                  (unsigned __int8 *)(v59 + v39 * *(_DWORD *)v100),
                                  (unsigned __int8 *)(v59 + v39 * *(_DWORD *)v100 - v39)) );
          v32 = 0;
LABEL_96:
          if ( v32 )
          {
            if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v82) != 1 )
            {
              if ( LODWORD(v73[0])
                && (!RGNOBJ::bOffset((RGNOBJ *)v82, &v70) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v115, &v70, 1)) )
              {
                goto LABEL_101;
              }
              v60 = v102;
              v61 = EBRUSHOBJ::mixBest(
                      (EBRUSHOBJ *)v102,
                      *(_BYTE *)(*((_QWORD *)v69[0] + 122) + 212LL),
                      *(_BYTE *)(*((_QWORD *)v69[0] + 122) + 213LL));
              ++*(_DWORD *)(v20 + 92);
              v119 = 0LL;
              mix = v61;
              v120 = 0;
              v121 = 1;
              v122 = 0LL;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v82[0], (struct ERECTL *)&v115, 0);
              v64 = (POINTL *)v69[0];
              if ( (*((_DWORD *)v69[0] + 9) & 0xE0) != 0 )
              {
                XDCOBJ::vAccumulate((XDCOBJ *)v69, v63, (__m128i *)&v115);
                XDCOBJ::vAccumulateTight((XDCOBJ *)v69, v65, (__m128i *)&v115);
                v64 = (POINTL *)v69[0];
              }
              v32 = EngPaint((SURFOBJ *)(v20 + 24), &pco, v60, v64 + 147, mix);
            }
            if ( v32 )
              goto LABEL_107;
          }
        }
LABEL_106:
        EngSetLastError(8u);
        goto LABEL_107;
      }
LABEL_73:
      v32 = 0;
LABEL_110:
      SURFMEM::~SURFMEM((SURFMEM *)&v83);
      goto LABEL_112;
    }
    v45 = 0;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v78);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v78);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v73);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v73);
    if ( !v78
      || !v73[0]
      || (RGNOBJ::vSet((RGNOBJ *)&v78, &v115),
          !RGNOBJ::bMerge((RGNOBJ *)v73, (struct RGNOBJ *)&v78, (struct RGNOBJ *)&v77, 4u)) )
    {
LABEL_59:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v73);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v78);
      v47 = v70.y;
      v46 = v70.x;
      goto LABEL_62;
    }
    if ( !RGNOBJ::bOffset((RGNOBJ *)v73, &v70) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v115, &v70, 1) )
    {
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v73);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v78);
      goto LABEL_73;
    }
    v119 = 0LL;
    v120 = 0;
    v121 = 1;
    v122 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v73[0], (struct ERECTL *)&v115, 0);
    v109 = -1;
    pbo.flColorType = v74;
    v113 = 0LL;
    v112 = 0LL;
    pbo.pvRbrush = 0LL;
    v110 = 0LL;
    v111 = 0LL;
    v114 = 0;
    if ( a5 )
    {
      pbo.iSolidColor = (v72 & 1) == 0;
      if ( gbMultiMonMismatchColor )
      {
        v48 = ulIndexToRGB(v22, v23, (v72 & 1) == 0);
        goto LABEL_57;
      }
    }
    else
    {
      pbo.iSolidColor = v72;
      if ( gbMultiMonMismatchColor )
      {
        v48 = v81;
LABEL_57:
        v109 = v48;
        v108 = v48;
      }
    }
    v45 = EngPaint((SURFOBJ *)((v83 + 24) & -(__int64)(v83 != 0)), &pco, &pbo, 0LL, 0xD0Du);
    EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
    goto LABEL_59;
  }
  EngSetLastError(0x57u);
  v32 = 0;
LABEL_112:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v104);
  if ( v105[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v105);
LABEL_116:
  if ( v69[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v69);
  return v32;
}
