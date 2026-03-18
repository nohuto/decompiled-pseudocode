/*
 * XREFs of NtGdiExtFloodFill @ 0x1C02B9E70
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00199EC (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C001A4BC (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001ACC8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001D0B8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0075870 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075A68 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008A108 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F7658 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00FEC0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C010D2DC (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012AF7C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012B37C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0138A2C (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C013A058 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     EngPaint @ 0x1C013A7E0 (EngPaint.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C01494C8 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C014B3E8 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ??0STACKMEMOBJ@@QEAA@KKJJJ@Z @ 0x1C02B902C (--0STACKMEMOBJ@@QEAA@KKJJJ@Z.c)
 *     ??1STACKMEMOBJ@@QEAA@XZ @ 0x1C02B912C (--1STACKMEMOBJ@@QEAA@XZ.c)
 *     ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x1C02B92F4 (-bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 *     ?bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z @ 0x1C02B9564 (-bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z.c)
 *     ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x1C02B9C0C (-iColorGet@FLOODBM@@QEAAKJ@Z.c)
 *     ?vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z @ 0x1C02B9CD4 (-vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z.c)
 *     ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x1C02BAB64 (-bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z.c)
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
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  DCVISRGNSHARELOCK *v22; // rcx
  __int64 v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // r9
  ULONG NearestIndexFromColorref; // eax
  DC *v29; // rcx
  ULONG v30; // r12d
  int v31; // edx
  __int64 v32; // r8
  char *v33; // r13
  int v34; // edx
  unsigned int v35; // ebx
  bool v36; // zf
  _DWORD *v37; // rax
  _DWORD *v38; // rcx
  void *v39; // r8
  struct _RECTL v40; // xmm6
  __int64 v41; // rcx
  int v42; // edi
  int v43; // edx
  LONG y; // ebx
  LONG x; // r10d
  int v46; // eax
  int v47; // eax
  BOOL v48; // r13d
  int v49; // esi
  int v50; // r12d
  int v51; // eax
  __int64 v52; // rax
  unsigned __int8 *v53; // rsi
  int v54; // ecx
  int v55; // eax
  int v56; // r10d
  int v57; // r11d
  int v58; // r12d
  int v59; // r13d
  int v60; // r12d
  LONG top; // r13d
  __int64 v62; // rsi
  BRUSHOBJ *v63; // rdi
  MIX v64; // eax
  MIX mix; // ebx
  struct ECLIPOBJ *v66; // rdx
  POINTL *v67; // r9
  struct ECLIPOBJ *v68; // rdx
  int v70; // [rsp+68h] [rbp-A0h] BYREF
  struct _POINTL v71; // [rsp+70h] [rbp-98h] BYREF
  DC *v72[2]; // [rsp+78h] [rbp-90h] BYREF
  struct _POINTL v73; // [rsp+88h] [rbp-80h] BYREF
  __int64 v74; // [rsp+90h] [rbp-78h] BYREF
  ULONG v75; // [rsp+98h] [rbp-70h]
  struct REGION *v76[2]; // [rsp+A0h] [rbp-68h] BYREF
  FLONG v77; // [rsp+B0h] [rbp-58h]
  int v78; // [rsp+B4h] [rbp-54h] BYREF
  int v79; // [rsp+B8h] [rbp-50h] BYREF
  struct REGION *v80; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v81; // [rsp+C8h] [rbp-40h] BYREF
  int v82; // [rsp+D0h] [rbp-38h]
  int v83; // [rsp+D4h] [rbp-34h]
  __int64 v84; // [rsp+D8h] [rbp-30h]
  struct REGION *v85[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v86; // [rsp+F0h] [rbp-18h] BYREF
  char v87; // [rsp+F8h] [rbp-10h]
  int v88; // [rsp+FCh] [rbp-Ch]
  _BYTE v89[4]; // [rsp+100h] [rbp-8h] BYREF
  int v90; // [rsp+104h] [rbp-4h]
  __int64 v91; // [rsp+108h] [rbp+0h]
  __int64 v92; // [rsp+120h] [rbp+18h]
  __int128 v93; // [rsp+128h] [rbp+20h] BYREF
  __int128 v94; // [rsp+138h] [rbp+30h]
  int v95; // [rsp+148h] [rbp+40h] BYREF
  struct _RECTL v96; // [rsp+14Ch] [rbp+44h]
  ULONG v97; // [rsp+15Ch] [rbp+54h]
  unsigned __int8 *v98; // [rsp+160h] [rbp+58h]
  int v99; // [rsp+168h] [rbp+60h]
  int v100; // [rsp+16Ch] [rbp+64h]
  _BYTE v101[4]; // [rsp+170h] [rbp+68h] BYREF
  int v102; // [rsp+174h] [rbp+6Ch]
  __int64 v103; // [rsp+178h] [rbp+70h]
  __int64 v104; // [rsp+190h] [rbp+88h]
  BRUSHOBJ *v105; // [rsp+198h] [rbp+90h]
  _BYTE v106[24]; // [rsp+1A0h] [rbp+98h] BYREF
  _BYTE v107[32]; // [rsp+1B8h] [rbp+B0h] BYREF
  _QWORD v108[2]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int16 v109; // [rsp+1E8h] [rbp+E0h]
  BRUSHOBJ pbo; // [rsp+208h] [rbp+100h] BYREF
  int v111; // [rsp+220h] [rbp+118h]
  int v112; // [rsp+224h] [rbp+11Ch]
  __int64 v113; // [rsp+228h] [rbp+120h]
  __int64 v114; // [rsp+230h] [rbp+128h]
  __int64 v115; // [rsp+260h] [rbp+158h]
  __int128 v116; // [rsp+268h] [rbp+160h]
  int v117; // [rsp+280h] [rbp+178h]
  struct _RECTL v118; // [rsp+298h] [rbp+190h] BYREF
  _DWORD v119[2]; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int64 v120; // [rsp+2B0h] [rbp+1A8h]
  CLIPOBJ pco; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int64 v122; // [rsp+308h] [rbp+200h]
  int v123; // [rsp+310h] [rbp+208h]
  int v124; // [rsp+338h] [rbp+230h]
  __int64 v125; // [rsp+348h] [rbp+240h]

  LODWORD(v84) = a4;
  DCOBJ::DCOBJ((DCOBJ *)v72, a1);
  v8 = v72[0];
  if ( !v72[0] || (*((_DWORD *)v72[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v14 = 0;
LABEL_115:
    v35 = v14;
    goto LABEL_116;
  }
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v72) )
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
        v12 = *((_QWORD *)v72[0] + 64);
      v13 = *(_QWORD *)(v10 + 48);
      v74 = v12;
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v13);
      GreReleaseSemaphoreInternal(*(_QWORD *)(v10 + 48));
      v83 = HIDWORD(v74);
      v81 = 0LL;
      v82 = v12;
      XDCOBJ::vAccumulate((XDCOBJ *)v72, (struct ERECTL *)&v81);
    }
    v14 = 1;
    goto LABEL_115;
  }
  DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v70);
  v15 = v72[0];
  v16 = *((_QWORD *)v72[0] + 122);
  v17 = *(_DWORD *)(v16 + 152);
  if ( (v17 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v72[0], *(_QWORD *)(v16 + 160));
    v15 = v72[0];
  }
  if ( (v17 & 0x2000) != 0 )
  {
    GreDCSelectPen(v15, *(_QWORD *)(*((_QWORD *)v15 + 122) + 168LL));
    v15 = v72[0];
  }
  v18 = (DYNAMICMODECHANGESHARELOCK *)*((_QWORD *)v15 + 62);
  if ( v18 && *((_WORD *)v18 + 50) == 3 )
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v76, (struct XDCOBJ *)v72);
    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v70, v19, v20, v21);
    v74 = ghsemSprite;
    GreAcquireSemaphore(ghsemSprite);
    bConvertDfbDcToDib((struct XDCOBJ *)v72);
    SEMOBJ::vUnlock((SEMOBJ *)&v74);
    DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v22);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v76);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v18);
  v108[0] = 0LL;
  v108[1] = 0LL;
  v109 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v107, (struct XDCOBJ *)v72, 0);
  v23 = *((_QWORD *)v72[0] + 62);
  v71.x = a2;
  v71.y = a3;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v106, (struct XDCOBJ *)v72, 516);
  if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v106, &v71, 1LL) )
  {
LABEL_34:
    v35 = 0;
    goto LABEL_112;
  }
  v24 = *(_QWORD *)(v23 + 48);
  v25 = *(_QWORD *)(v23 + 128);
  v26 = *((_QWORD *)v72[0] + 11);
  if ( (*(_DWORD *)(*((_QWORD *)v72[0] + 6) + 40LL) & 0x80u) == 0
    && !(unsigned int)DC::bIsCMYKColor(v72[0])
    && (*(_DWORD *)(v27 + 120) & 2) == 0 )
  {
    NearestIndexFromColorref = ulGetNearestIndexFromColorref(v25, v26, a4);
    v29 = v72[0];
    v30 = NearestIndexFromColorref;
    v75 = NearestIndexFromColorref;
    v31 = *((_DWORD *)v72[0] + 30);
    if ( (v31 & 4) != 0 || (v77 = 0, (v31 & 1) != 0) )
      v77 = 2;
    v32 = *((_QWORD *)v72[0] + 122);
    v33 = (char *)v72[0] + 1184;
    v105 = (BRUSHOBJ *)((char *)v72[0] + 1184);
    v34 = *(_DWORD *)(v32 + 152);
    if ( (v34 & 1) != 0 || (*((_DWORD *)v72[0] + 79) & 1) != 0 )
    {
      *(_DWORD *)(v32 + 152) = v34 & 0xFFFFFFFE;
      *((_DWORD *)v72[0] + 79) &= ~1u;
      EBRUSHOBJ::vInitBrush((char *)v29 + 1184, v72[0], *((_QWORD *)v72[0] + 17), v26, v25, v23, 1);
      v29 = v72[0];
    }
    if ( (*((_DWORD *)v33 + 30) & 0x100) != 0 )
    {
      v35 = 1;
      goto LABEL_112;
    }
    if ( (v107[24] & 1) == 0 )
    {
      v35 = XDCOBJ::bFullScreen((XDCOBJ *)v72);
      goto LABEL_112;
    }
    v36 = (*((_DWORD *)v29 + 10) & 1) == 0;
    v37 = (_DWORD *)((char *)v29 + 1016);
    v38 = (_DWORD *)((char *)v29 + 1024);
    if ( v36 )
      v38 = v37;
    v71.x += *v38;
    v71.y += v38[1];
    v80 = XDCOBJ::prgnEffRao(v72);
    if ( RGNOBJ::bInside((RGNOBJ *)&v80, &v71) != 2 )
      goto LABEL_34;
    v79 = 0;
    v78 = 0;
    v93 = 0LL;
    v86 = 0LL;
    v94 = 0LL;
    v87 = 0;
    v88 = 0;
    v74 = *(_QWORD *)(v23 + 48);
    PDEVOBJ::vSync((PDEVOBJ *)&v74, (struct _SURFOBJ *)(v23 + 24), 0LL, 0);
    v39 = 0LL;
    LODWORD(v76[0]) = 0;
    v40 = (struct _RECTL)*((_OWORD *)v80 + 6);
    v73 = 0LL;
    v118 = v40;
    if ( !*(_WORD *)(v23 + 100) && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v80) != 3 )
    {
      v41 = *(_QWORD *)(v23 + 80);
      v42 = *(_DWORD *)(v23 + 88);
      v43 = *(_DWORD *)(v23 + 96);
      y = v71.y;
      x = v71.x;
      goto LABEL_64;
    }
    LODWORD(v93) = *(_DWORD *)(v23 + 96);
    LODWORD(v74) = v93;
    DWORD1(v93) = v118.right - v118.left;
    DWORD2(v93) = v118.bottom - v118.top;
    v46 = 1;
    DWORD2(v94) = 1;
    *(_QWORD *)&v94 = v39;
    if ( (*(_DWORD *)(v23 + 112) & 0x40000) != 0 )
      v46 = 262145;
    DWORD2(v94) = v46;
    SURFMEM::bCreateDIB(
      (SURFMEM *)&v86,
      (struct _DEVBITMAPINFO *)&v93,
      v39,
      0LL,
      (unsigned int)v39,
      v39,
      (unsigned __int64)v39,
      (_DWORD)v39,
      1,
      (_DWORD)v39,
      (_DWORD)v39);
    if ( !v86 )
    {
      EngSetLastError(8u);
      goto LABEL_73;
    }
    v119[0] = 0;
    v119[1] = 0;
    v36 = (*(_DWORD *)(v23 + 112) & 0x400) == 0;
    v120 = *(_QWORD *)((char *)&v93 + 4);
    if ( v36 )
      v47 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, _DWORD *, struct _RECTL *))EngCopyBits)(
              v86 + 24,
              v23 + 24,
              0LL,
              xloIdent,
              v119,
              &v118);
    else
      v47 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, XLATEOBJ *const, _DWORD *, struct _RECTL *))(v24 + 2840))(
              v86 + 24,
              v23 + 24,
              0LL,
              xloIdent,
              v119,
              &v118);
    v48 = v47;
    v49 = -v118.left;
    v50 = -v118.top;
    v73.x = -v118.left;
    v73.y = -v118.top;
    if ( !v47 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v80) != 3 )
    {
      ERECTL::bOffsetAdd((ERECTL *)&v118, &v73, 0);
LABEL_62:
      if ( v48 )
      {
        x = v49 + v71.x;
        y = v50 + v71.y;
        v40 = v118;
        v43 = v74;
        v71.x += v49;
        v73.y = -v50;
        v30 = v75;
        v71.y = y;
        v73.x = -v49;
        v42 = *(_DWORD *)(v86 + 88);
        v41 = *(_QWORD *)(v86 + 80);
        LODWORD(v76[0]) = 1;
LABEL_64:
        v100 = -1;
        v84 = v41;
        v95 = v43;
        v96 = v40;
        v97 = v30;
        v52 = *(_QWORD *)(v23 + 128);
        v53 = (unsigned __int8 *)(v41 + v42 * y);
        v99 = a5;
        v98 = v53;
        if ( v52 )
        {
          v54 = *(_DWORD *)(v52 + 24);
          if ( (v54 & 0xC) != 0 )
          {
            v100 = 0xFFFFFF;
          }
          else if ( (v54 & 2) != 0 )
          {
            v100 = **(_DWORD **)(v52 + 112) | *(_DWORD *)(*(_QWORD *)(v52 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v52 + 112) + 8LL);
          }
        }
        v55 = FLOODBM::iColorGet((FLOODBM *)&v95, x);
        if ( !v57 && v55 == v30 || v57 == 1 && v55 != v30 )
          goto LABEL_73;
        FLOODBM::vFindExtent((FLOODBM *)&v95, v56, &v79, &v78);
        v58 = v78;
        v59 = v79;
        STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v101, 0x1B8u, 1, y, v79, v78);
        if ( !v104 )
        {
          EngSetLastError(8u);
          v35 = 0;
LABEL_109:
          STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v101);
          goto LABEL_110;
        }
        STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v89, 0xF8u, 0, v71.y, v59, v58);
        if ( !v92 )
        {
          EngSetLastError(8u);
          v35 = 0;
LABEL_108:
          STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v89);
          goto LABEL_109;
        }
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v85, 0x12E0u);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v85);
        if ( !v85[0] )
        {
          EngSetLastError(8u);
LABEL_101:
          v35 = 0;
LABEL_107:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v85);
          goto LABEL_108;
        }
        v35 = 1;
        v60 = v118.bottom - 1;
        top = v118.top;
        if ( v71.y >= v118.bottom - 1 )
        {
          v90 -= *(_DWORD *)(v91 + 8);
          v91 = *(_QWORD *)(v91 + 16);
        }
        else
        {
          v35 = FLOODBM::bExtendScanline(
                  (FLOODBM *)&v95,
                  (struct STACKOBJ *)v89,
                  (struct STACKOBJ *)v101,
                  v71.y + 1,
                  v53,
                  &v53[v42]) & 1;
        }
        if ( v35 )
        {
          v62 = v84;
          do
          {
            while ( 1 )
            {
              while ( v90 )
              {
                if ( !(unsigned int)RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)v85, (struct STACKOBJ *)v89) )
                  goto LABEL_94;
                if ( *(_DWORD *)v91 >= v60 )
                {
                  v90 -= *(_DWORD *)(v91 + 8);
                  v91 = *(_QWORD *)(v91 + 16);
                }
                else if ( !(unsigned int)FLOODBM::bExtendScanline(
                                           (FLOODBM *)&v95,
                                           (struct STACKOBJ *)v89,
                                           (struct STACKOBJ *)v101,
                                           *(_DWORD *)v91 + 1,
                                           (unsigned __int8 *)(v62 + v42 * *(_DWORD *)v91),
                                           (unsigned __int8 *)(v62 + v42 * *(_DWORD *)v91 + v42)) )
                {
LABEL_94:
                  v35 = 0;
                  goto LABEL_106;
                }
              }
              if ( !v102 )
                goto LABEL_96;
              v35 &= RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)v85, (struct STACKOBJ *)v101);
              if ( *(_DWORD *)v103 > top )
                break;
              v102 -= *(_DWORD *)(v103 + 8);
              v103 = *(_QWORD *)(v103 + 16);
            }
          }
          while ( (unsigned int)FLOODBM::bExtendScanline(
                                  (FLOODBM *)&v95,
                                  (struct STACKOBJ *)v101,
                                  (struct STACKOBJ *)v89,
                                  *(_DWORD *)v103 - 1,
                                  (unsigned __int8 *)(v62 + v42 * *(_DWORD *)v103),
                                  (unsigned __int8 *)(v62 + v42 * *(_DWORD *)v103 - v42)) );
          v35 = 0;
LABEL_96:
          if ( v35 )
          {
            if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v85) != 1 )
            {
              if ( LODWORD(v76[0])
                && (!RGNOBJ::bOffset((RGNOBJ *)v85, &v73) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v118, &v73, 1)) )
              {
                goto LABEL_101;
              }
              v63 = v105;
              v64 = EBRUSHOBJ::mixBest(
                      (EBRUSHOBJ *)v105,
                      *(_BYTE *)(*((_QWORD *)v72[0] + 122) + 212LL),
                      *(_BYTE *)(*((_QWORD *)v72[0] + 122) + 213LL));
              ++*(_DWORD *)(v23 + 92);
              v122 = 0LL;
              mix = v64;
              v123 = 0;
              v124 = 1;
              v125 = 0LL;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v85[0], (struct ERECTL *)&v118, 0);
              v67 = (POINTL *)v72[0];
              if ( (*((_DWORD *)v72[0] + 9) & 0xE0) != 0 )
              {
                XDCOBJ::vAccumulate((XDCOBJ *)v72, v66, (__m128i *)&v118);
                XDCOBJ::vAccumulateTight((XDCOBJ *)v72, v68, (__m128i *)&v118);
                v67 = (POINTL *)v72[0];
              }
              v35 = EngPaint((SURFOBJ *)(v23 + 24), &pco, v63, v67 + 147, mix);
            }
            if ( v35 )
              goto LABEL_107;
          }
        }
LABEL_106:
        EngSetLastError(8u);
        goto LABEL_107;
      }
LABEL_73:
      v35 = 0;
LABEL_110:
      SURFMEM::~SURFMEM((SURFMEM *)&v86);
      goto LABEL_112;
    }
    v48 = 0;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v81);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v81);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v76);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v76);
    if ( !v81
      || !v76[0]
      || (RGNOBJ::vSet((RGNOBJ *)&v81, &v118),
          !RGNOBJ::bMerge((RGNOBJ *)v76, (struct RGNOBJ *)&v81, (struct RGNOBJ *)&v80, 4u)) )
    {
LABEL_59:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v76);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v81);
      v50 = v73.y;
      v49 = v73.x;
      goto LABEL_62;
    }
    if ( !RGNOBJ::bOffset((RGNOBJ *)v76, &v73) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v118, &v73, 1) )
    {
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v76);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v81);
      goto LABEL_73;
    }
    v122 = 0LL;
    v123 = 0;
    v124 = 1;
    v125 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v76[0], (struct ERECTL *)&v118, 0);
    v112 = -1;
    pbo.flColorType = v77;
    v116 = 0LL;
    v115 = 0LL;
    pbo.pvRbrush = 0LL;
    v113 = 0LL;
    v114 = 0LL;
    v117 = 0;
    if ( a5 )
    {
      pbo.iSolidColor = (v75 & 1) == 0;
      if ( gbMultiMonMismatchColor )
      {
        v51 = ulIndexToRGB(v25, v26, (v75 & 1) == 0);
        goto LABEL_57;
      }
    }
    else
    {
      pbo.iSolidColor = v75;
      if ( gbMultiMonMismatchColor )
      {
        v51 = v84;
LABEL_57:
        v112 = v51;
        v111 = v51;
      }
    }
    v48 = EngPaint((SURFOBJ *)((v86 + 24) & -(__int64)(v86 != 0)), &pco, &pbo, 0LL, 0xD0Du);
    EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
    goto LABEL_59;
  }
  EngSetLastError(0x57u);
  v35 = 0;
LABEL_112:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v107);
  if ( v108[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v108);
LABEL_116:
  if ( v72[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v72);
  return v35;
}
