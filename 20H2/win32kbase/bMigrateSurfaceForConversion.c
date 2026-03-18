/*
 * XREFs of bMigrateSurfaceForConversion @ 0x1C001AC00
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1C001AA60 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C001B380 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C001B40C (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C001B4B8 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     HmgQueryAltLock @ 0x1C001B590 (HmgQueryAltLock.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C001B62C (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x1C001B65C (-SwapShareCount@OBJECT@@SAXPEAV1@0@Z.c)
 *     HmgSwapLockedHandleContents @ 0x1C001B6E0 (HmgSwapLockedHandleContents.c)
 *     HmgShareLockEx @ 0x1C0042C10 (HmgShareLockEx.c)
 *     HmgShareLockCheck @ 0x1C00438E0 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0043DF0 (HmgDecrementShareReferenceCountEx.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00471A0 (HmgIncrementShareReferenceCount.c)
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C0082410 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1C0093800 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 *     ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x1C0093930 (-bUnMap@SURFREFVIEW@@QEAAHXZ.c)
 *     IsvSpDwmMigrateLSurfShapeReferenceSupported @ 0x1C00BF700 (IsvSpDwmMigrateLSurfShapeReferenceSupported.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00CEC10 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bMigrateSurfaceForConversion(struct OBJECT *a1, struct OBJECT *a2, int a3, _DWORD *a4)
{
  unsigned int v7; // r12d
  struct _SURFOBJ *v8; // rdi
  int v9; // eax
  struct OBJECT *v10; // r13
  __int64 v11; // rbx
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rsi
  int AltLock; // eax
  __int64 v17; // rbx
  int v18; // edi
  int v19; // eax
  int v20; // edi
  HLSURF v21; // rbx
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  HLSURF *v23; // rsi
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int16 v30; // r8
  __int16 v31; // dx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int64 v55; // rax
  __int128 v56; // xmm0
  __int128 v57; // xmm2
  __int128 v58; // xmm3
  struct _EPROCESS *v59; // rdx
  struct _EPROCESS *v60; // rbx
  __int64 v61; // rdx
  HLSURF v62; // rdx
  int v63; // eax
  int v64; // edi
  struct SFMLOGICALSURFACE *v65; // rbx
  __int64 v67; // rsi
  int v68; // eax
  __int64 v69; // rdi
  int v70; // ebx
  int v71; // eax
  int v72; // xmm0_4
  int v73; // xmm1_4
  __int64 v74; // rax
  int v75; // eax
  __int64 v76; // rax
  __int64 v77; // rbx
  int v78; // eax
  int v80; // [rsp+40h] [rbp-C0h]
  int v81; // [rsp+44h] [rbp-BCh]
  _DWORD *v82; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v83[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v84; // [rsp+60h] [rbp-A0h]
  _QWORD v85[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v86; // [rsp+78h] [rbp-88h] BYREF
  int v87; // [rsp+80h] [rbp-80h]
  __int64 v88; // [rsp+88h] [rbp-78h] BYREF
  int v89; // [rsp+90h] [rbp-70h]
  struct _SURFOBJ *v90; // [rsp+98h] [rbp-68h]
  struct _SURFOBJ *v91; // [rsp+A0h] [rbp-60h]
  __int128 v92; // [rsp+B0h] [rbp-50h]
  __int128 v93; // [rsp+C0h] [rbp-40h]
  __int128 v94; // [rsp+D0h] [rbp-30h]
  __int128 v95; // [rsp+E0h] [rbp-20h]
  __int128 v96; // [rsp+F0h] [rbp-10h]
  __int128 v97; // [rsp+100h] [rbp+0h]
  __int128 v98; // [rsp+110h] [rbp+10h]
  __int128 v99; // [rsp+120h] [rbp+20h]
  __int128 v100; // [rsp+130h] [rbp+30h]
  __int128 v101; // [rsp+140h] [rbp+40h]
  __int64 v102; // [rsp+150h] [rbp+50h]
  __int64 v103; // [rsp+160h] [rbp+60h] BYREF
  int v104; // [rsp+168h] [rbp+68h]
  int v105; // [rsp+16Ch] [rbp+6Ch]

  v104 = *((_DWORD *)a1 + 14);
  v105 = *((_DWORD *)a1 + 15);
  v82 = a4;
  v103 = 0LL;
  v7 = 1;
  v83[0] = 0LL;
  v8 = (struct _SURFOBJ *)(((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL));
  v91 = v8;
  SURFREFVIEW::bMap((SURFREFVIEW *)v83, v8);
  v85[0] = 0LL;
  v90 = (struct _SURFOBJ *)(((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
  SURFREFVIEW::bMap((SURFREFVIEW *)v85, v90);
  *a4 = 0;
  v9 = *((_DWORD *)a1 + 28);
  if ( (v9 & 0x80100000) != 0 )
  {
    SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v85);
    v85[0] = 0LL;
    SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v83);
    v83[0] = 0LL;
    goto LABEL_93;
  }
  if ( *((_WORD *)a1 + 50) == 3 )
  {
LABEL_3:
    v10 = a1;
    goto LABEL_4;
  }
  if ( *((_WORD *)a2 + 50) != 3 )
  {
    if ( (v9 & 0x400000) != 0 )
      goto LABEL_3;
    if ( (*((_DWORD *)a2 + 28) & 0x400000) == 0 )
    {
LABEL_93:
      v7 = 0;
      goto LABEL_49;
    }
  }
  v10 = a2;
LABEL_4:
  v11 = *((_QWORD *)v10 + 6);
  if ( (*(_DWORD *)(v11 + 40) & 0x20000) != 0 )
    *((_DWORD *)a1 + 29) |= 0x10u;
  if ( a3
    || ((*((_DWORD *)v10 + 28) & 0x400) == 0
      ? (v12 = ((__int64 (__fastcall *)(unsigned __int64, struct _SURFOBJ *, _QWORD, void *, __int64 *, __int64 *))EngCopyBits)(
                 ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL),
                 v8,
                 0LL,
                 &xloIdent,
                 &v103,
                 &v103))
      : (v12 = (*(__int64 (__fastcall **)(unsigned __int64, struct _SURFOBJ *, _QWORD, void *, __int64 *, __int64 *))(v11 + 2840))(
                 ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL),
                 v8,
                 0LL,
                 &xloIdent,
                 &v103,
                 &v103)),
        v12) )
  {
    if ( (*(_DWORD *)(v11 + 40) & 0x20000) != 0 )
      *((_DWORD *)a1 + 29) &= ~0x10u;
    v13 = *(_DWORD *)a1;
    v84 = *((_DWORD *)a1 + 29) & 0x80;
    v14 = v13 & 0x800000;
    if ( !v14 || (v81 = 1, (*((_WORD *)a1 + 51) & 0x200) == 0) )
      v81 = 0;
    if ( !v14 || (v80 = 1, (*((_WORD *)a1 + 51) & 0x400) == 0) )
      v80 = 0;
    v15 = *((_QWORD *)a1 + 4);
    AltLock = HmgQueryAltLock(v15);
    v17 = *((_QWORD *)a2 + 4);
    v18 = AltLock;
    v19 = HmgQueryAltLock(v17);
    if ( !(unsigned int)HmgSwapLockedHandleContents(v15, v18, v17, v19, 5) )
    {
      v7 = 0;
      goto LABEL_47;
    }
    v86 = 0LL;
    v20 = 0;
    v87 = 0;
    v21 = 0LL;
    FirstLSurf = SURFACE::GetFirstLSurf(a1);
    v23 = (HLSURF *)FirstLSurf;
    if ( !FirstLSurf )
      goto LABEL_25;
    v20 = -__CFSHR__(*((_DWORD *)FirstLSurf + 61), 3);
    if ( !__CFSHR__(*((_DWORD *)FirstLSurf + 61), 3) )
      goto LABEL_25;
    if ( qword_1C024F1F0 )
      v24 = qword_1C024F1F0();
    else
      v24 = -1073741637;
    if ( v24 >= 0 && qword_1C024F1F8 )
      v21 = (HLSURF)qword_1C024F1F8(*((_QWORD *)a1 + 6), v23, 0LL, 1LL, 1);
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v86, v21);
    if ( !v86 )
    {
      v7 = 0;
    }
    else
    {
LABEL_25:
      OBJECT::SwapShareCount(a1, a2);
      v25 = *((_QWORD *)a1 + 4);
      *((_QWORD *)a1 + 70) = a2;
      *((_QWORD *)a1 + 4) = *((_QWORD *)a2 + 4);
      v26 = *((_QWORD *)a2 + 18);
      *((_QWORD *)a2 + 4) = v25;
      v27 = *((_QWORD *)a1 + 18);
      *((_QWORD *)a1 + 18) = v26;
      v28 = *((_QWORD *)a2 + 20);
      *((_QWORD *)a2 + 18) = v27;
      v29 = *((_QWORD *)a1 + 20);
      *((_QWORD *)a1 + 20) = v28;
      v30 = *((_WORD *)a2 + 7);
      *((_QWORD *)a2 + 20) = v29;
      v31 = v30 & 0x8000 | *((_WORD *)a1 + 7) & 0x4000;
      *((_WORD *)a1 + 7) = *((_WORD *)a1 + 7) & 0x8000 | v30 & 0x4000;
      LODWORD(v28) = *((_DWORD *)a2 + 42);
      *((_WORD *)a2 + 7) = v31;
      LODWORD(v29) = *((_DWORD *)a1 + 42);
      *((_DWORD *)a1 + 42) = v28;
      v32 = *((_QWORD *)a2 + 22);
      *((_DWORD *)a2 + 42) = v29;
      v33 = *((_QWORD *)a1 + 22);
      *((_QWORD *)a1 + 22) = v32;
      *((_QWORD *)a2 + 22) = v33;
      v34 = *((_QWORD *)a1 + 19);
      *((_QWORD *)a1 + 19) = *((_QWORD *)a2 + 19);
      *((_QWORD *)a2 + 19) = v34;
      v35 = *((_QWORD *)a1 + 16);
      *((_QWORD *)a1 + 16) = *((_QWORD *)a2 + 16);
      LODWORD(v34) = *((_DWORD *)a2 + 80);
      *((_QWORD *)a2 + 16) = v35;
      LODWORD(v35) = *((_DWORD *)a1 + 80);
      *((_DWORD *)a1 + 80) = v34;
      LODWORD(v34) = *((_DWORD *)a2 + 81);
      *((_DWORD *)a2 + 80) = v35;
      LODWORD(v35) = *((_DWORD *)a1 + 81);
      *((_DWORD *)a1 + 81) = v34;
      *((_DWORD *)a2 + 81) = v35;
      v36 = *((_QWORD *)a1 + 61);
      v37 = *(_OWORD *)((char *)a1 + 344);
      v92 = *(_OWORD *)((char *)a1 + 328);
      v38 = *(_OWORD *)((char *)a1 + 360);
      v93 = v37;
      v39 = *(_OWORD *)((char *)a1 + 376);
      v94 = v38;
      v40 = *(_OWORD *)((char *)a1 + 392);
      v95 = v39;
      v41 = *(_OWORD *)((char *)a1 + 408);
      v96 = v40;
      v42 = *(_OWORD *)((char *)a1 + 424);
      v97 = v41;
      v43 = *(_OWORD *)((char *)a1 + 440);
      v98 = v42;
      v44 = *(_OWORD *)((char *)a1 + 456);
      v99 = v43;
      v45 = *(_OWORD *)((char *)a1 + 472);
      v100 = v44;
      v101 = v45;
      v102 = v36;
      *(_OWORD *)((char *)a1 + 328) = *(_OWORD *)((char *)a2 + 328);
      *(_OWORD *)((char *)a1 + 344) = *(_OWORD *)((char *)a2 + 344);
      *(_OWORD *)((char *)a1 + 360) = *(_OWORD *)((char *)a2 + 360);
      *(_OWORD *)((char *)a1 + 376) = *(_OWORD *)((char *)a2 + 376);
      *(_OWORD *)((char *)a1 + 392) = *(_OWORD *)((char *)a2 + 392);
      *(_OWORD *)((char *)a1 + 408) = *(_OWORD *)((char *)a2 + 408);
      *(_OWORD *)((char *)a1 + 424) = *(_OWORD *)((char *)a2 + 424);
      *(_OWORD *)((char *)a1 + 440) = *(_OWORD *)((char *)a2 + 440);
      *(_OWORD *)((char *)a1 + 456) = *(_OWORD *)((char *)a2 + 456);
      *(_OWORD *)((char *)a1 + 472) = *(_OWORD *)((char *)a2 + 472);
      *((_QWORD *)a1 + 61) = *((_QWORD *)a2 + 61);
      v46 = v93;
      *(_OWORD *)((char *)a2 + 328) = v92;
      v47 = v94;
      *(_OWORD *)((char *)a2 + 344) = v46;
      v48 = v95;
      *(_OWORD *)((char *)a2 + 360) = v47;
      v49 = v96;
      *(_OWORD *)((char *)a2 + 376) = v48;
      v50 = v97;
      *(_OWORD *)((char *)a2 + 392) = v49;
      v51 = v98;
      *(_OWORD *)((char *)a2 + 408) = v50;
      v52 = v99;
      *(_OWORD *)((char *)a2 + 424) = v51;
      v53 = v100;
      *(_OWORD *)((char *)a2 + 440) = v52;
      v54 = v101;
      v55 = v102;
      *(_OWORD *)((char *)a2 + 456) = v53;
      v56 = *((_OWORD *)a2 + 31);
      *(_OWORD *)((char *)a2 + 472) = v54;
      *((_QWORD *)a2 + 61) = v55;
      v57 = *((_OWORD *)a1 + 31);
      v58 = *((_OWORD *)a1 + 32);
      *((_OWORD *)a1 + 31) = v56;
      *((_OWORD *)a1 + 32) = *((_OWORD *)a2 + 32);
      LODWORD(v55) = *((_DWORD *)a2 + 28);
      *((_OWORD *)a2 + 31) = v57;
      *((_OWORD *)a2 + 32) = v58;
      LODWORD(v35) = *((_DWORD *)a1 + 28);
      *((_DWORD *)a1 + 28) = *((_DWORD *)a2 + 28) ^ (v35 ^ v55) & 0x3B5EF;
      *((_DWORD *)a2 + 28) = v35 ^ (v35 ^ *((_DWORD *)a2 + 28)) & 0x3B5EF;
      LODWORD(v35) = *((_DWORD *)a1 + 29);
      *((_DWORD *)a1 + 29) = v35 ^ (v35 ^ *((_DWORD *)a2 + 29)) & 0x3FFF;
      *((_DWORD *)a2 + 29) ^= (v35 ^ *((_DWORD *)a2 + 29)) & 0x3FFF;
      LODWORD(v35) = *((_DWORD *)a1 + 28);
      *((_DWORD *)a1 + 28) = v35 ^ (v35 ^ *((_DWORD *)a2 + 28)) & 0xC00000;
      *((_DWORD *)a2 + 28) ^= (v35 ^ *((_DWORD *)a2 + 28)) & 0xC00000;
      LODWORD(v35) = *((_DWORD *)a1 + 29);
      *((_DWORD *)a1 + 29) = v35 ^ (v35 ^ *((_DWORD *)a2 + 29)) & 0x390D;
      v59 = (struct _EPROCESS *)*((_QWORD *)a2 + 80);
      *((_DWORD *)a2 + 29) ^= (v35 ^ *((_DWORD *)a2 + 29)) & 0x390D;
      v60 = (struct _EPROCESS *)*((_QWORD *)a1 + 80);
      SURFACE::vAppContainerOwner(a1, v59);
      SURFACE::vAppContainerOwner(a2, v60);
      if ( (*((_DWORD *)a1 + 29) & 0x800) != 0 )
      {
        v72 = *((_DWORD *)a1 + 165);
        v73 = *((_DWORD *)a1 + 166);
        v74 = *(_QWORD *)((char *)a1 + 668);
        *((_DWORD *)a2 + 29) |= 0x800u;
        *((_DWORD *)a2 + 165) = v72;
        *((_DWORD *)a2 + 166) = v73;
        *(_QWORD *)((char *)a2 + 668) = v74;
      }
      if ( v81 )
      {
        *((_WORD *)a1 + 51) &= ~0x200u;
        v75 = *(_DWORD *)a2 & 0x800000;
        if ( v75 )
        {
          v61 = 512LL;
          *((_WORD *)a2 + 51) |= 0x200u;
        }
        if ( v80 && v75 )
          *((_WORD *)a2 + 51) |= 0x400u;
        *v82 = 1;
      }
      if ( v23 )
      {
        v62 = *v23;
        v88 = 0LL;
        v89 = 1;
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v88, v62);
        if ( v20 )
        {
          if ( qword_1C024F190 )
          {
            v63 = qword_1C024F190();
            v64 = -1073741637;
          }
          else
          {
            v64 = -1073741637;
            v63 = -1073741637;
          }
          if ( v63 >= 0 && qword_1C024F198 )
            qword_1C024F198(*((_QWORD *)v10 + 6), v88, a2, v86);
        }
        else
        {
          v64 = -1073741637;
        }
        while ( 1 )
        {
          v65 = SURFACE::GetFirstLSurf(a1);
          if ( !v65 )
            break;
          if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported() >= 0 && qword_1C024F1A8 )
            qword_1C024F1A8(*((_QWORD *)v10 + 6), v65, a2);
        }
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)&v88);
      }
      else
      {
        v64 = -1073741637;
      }
      if ( (*((_DWORD *)a2 + 29) & 4) != 0 )
      {
        LOBYTE(v61) = 5;
        v76 = HmgShareLockEx(*((_QWORD *)a2 + 18), v61, 0LL);
        v77 = v76;
        if ( v76 )
        {
          if ( *(_QWORD *)(v76 + 24) )
          {
            if ( qword_1C024F1B0 )
              v64 = qword_1C024F1B0();
            if ( v64 >= 0 && qword_1C024F1B8 )
              qword_1C024F1B8(*(_QWORD *)(v77 + 24), v91, v90);
          }
          HmgDecrementShareReferenceCountEx(v77, 0LL);
        }
      }
      if ( v84 )
      {
        HmgDecrementShareReferenceCountEx(a1, 0LL);
        HmgIncrementShareReferenceCount(a2);
      }
      if ( *((_DWORD *)a1 + 2) )
      {
        *v82 = 1;
LABEL_46:
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)&v86);
LABEL_47:
        if ( !v7 && v81 )
        {
          *((_WORD *)a2 + 51) &= ~0x200u;
          v78 = *(_DWORD *)a1 & 0x800000;
          if ( v78 )
            *((_WORD *)a1 + 51) |= 0x200u;
          if ( v80 && v78 )
            *((_WORD *)a1 + 51) |= 0x400u;
        }
        goto LABEL_48;
      }
      LOBYTE(v61) = 5;
      v82 = (_DWORD *)HmgShareLockCheck(*((_QWORD *)a1 + 4), v61);
      SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v83);
      v83[0] = 0LL;
      v7 = SURFREF::bDeleteSurface(&v82, 0LL);
      if ( !v7 )
        *((_QWORD *)a1 + 70) = 0LL;
      if ( v82 )
        HmgDecrementShareReferenceCountEx(v82, 0LL);
      if ( v7 )
        goto LABEL_46;
    }
    v67 = *((_QWORD *)a1 + 4);
    v68 = HmgQueryAltLock(v67);
    v69 = *((_QWORD *)a2 + 4);
    v70 = v68;
    v71 = HmgQueryAltLock(v69);
    HmgSwapLockedHandleContents(v69, v71, v67, v70, 5);
    goto LABEL_46;
  }
  v7 = 0;
LABEL_48:
  SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v85);
  v85[0] = 0LL;
  SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v83);
  v83[0] = 0LL;
LABEL_49:
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v85);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v83);
  return v7;
}
