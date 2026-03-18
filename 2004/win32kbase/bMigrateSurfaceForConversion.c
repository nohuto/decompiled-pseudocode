/*
 * XREFs of bMigrateSurfaceForConversion @ 0x1C00BF860
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1C00BF6C0 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C001E790 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1C00299F0 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 *     ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x1C0029B20 (-bUnMap@SURFREFVIEW@@QEAAHXZ.c)
 *     HmgIncrementShareReferenceCount @ 0x1C0087570 (HmgIncrementShareReferenceCount.c)
 *     HmgShareLockEx @ 0x1C0087EB0 (HmgShareLockEx.c)
 *     HmgShareLockCheck @ 0x1C0088B80 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0089440 (HmgDecrementShareReferenceCountEx.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C00BFFE0 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00C006C (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00C00B4 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     HmgQueryAltLock @ 0x1C00C0120 (HmgQueryAltLock.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00C01BC (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x1C00C01EC (-SwapShareCount@OBJECT@@SAXPEAV1@0@Z.c)
 *     HmgSwapLockedHandleContents @ 0x1C00C0290 (HmgSwapLockedHandleContents.c)
 *     IsvSpDwmMigrateLSurfShapeReferenceSupported @ 0x1C00C1D8C (IsvSpDwmMigrateLSurfShapeReferenceSupported.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00CF18C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bMigrateSurfaceForConversion(struct OBJECT *a1, struct OBJECT *a2, int a3, _DWORD *a4)
{
  unsigned int v7; // r12d
  struct _SURFOBJ *v8; // rdi
  void *v9; // rdx
  struct DC *v10; // r8
  int v11; // eax
  struct OBJECT *v12; // r13
  __int64 v13; // rbx
  int v14; // eax
  void *v15; // rdx
  struct DC *v16; // r8
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rsi
  int AltLock; // eax
  __int64 v21; // rbx
  int v22; // edi
  int v23; // eax
  int v24; // edi
  HLSURF v25; // rbx
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  HLSURF *v27; // rsi
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int16 v34; // r8
  __int16 v35; // dx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int64 v59; // rax
  __int128 v60; // xmm0
  __int128 v61; // xmm2
  __int128 v62; // xmm3
  struct _EPROCESS *v63; // rdx
  struct _EPROCESS *v64; // rbx
  HLSURF v65; // rdx
  int v66; // eax
  int v67; // edi
  struct SFMLOGICALSURFACE *v68; // rbx
  void *v69; // rdx
  struct DC *v70; // r8
  __int64 v71; // r8
  void *v72; // rdx
  struct DC *v73; // r8
  __int64 v75; // rsi
  int v76; // eax
  __int64 v77; // rdi
  int v78; // ebx
  int v79; // eax
  int v80; // xmm0_4
  int v81; // xmm1_4
  __int64 v82; // rax
  int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rbx
  int v86; // eax
  void *v87; // rdx
  struct DC *v88; // r8
  int v90; // [rsp+40h] [rbp-C0h]
  int v91; // [rsp+44h] [rbp-BCh]
  _DWORD *v92; // [rsp+48h] [rbp-B8h] BYREF
  SURFACE *v93[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v94; // [rsp+60h] [rbp-A0h]
  SURFACE *v95[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v96; // [rsp+78h] [rbp-88h] BYREF
  int v97; // [rsp+80h] [rbp-80h]
  __int64 v98; // [rsp+88h] [rbp-78h] BYREF
  int v99; // [rsp+90h] [rbp-70h]
  struct _SURFOBJ *v100; // [rsp+98h] [rbp-68h]
  struct _SURFOBJ *v101; // [rsp+A0h] [rbp-60h]
  __int128 v102; // [rsp+B0h] [rbp-50h]
  __int128 v103; // [rsp+C0h] [rbp-40h]
  __int128 v104; // [rsp+D0h] [rbp-30h]
  __int128 v105; // [rsp+E0h] [rbp-20h]
  __int128 v106; // [rsp+F0h] [rbp-10h]
  __int128 v107; // [rsp+100h] [rbp+0h]
  __int128 v108; // [rsp+110h] [rbp+10h]
  __int128 v109; // [rsp+120h] [rbp+20h]
  __int128 v110; // [rsp+130h] [rbp+30h]
  __int128 v111; // [rsp+140h] [rbp+40h]
  __int64 v112; // [rsp+150h] [rbp+50h]
  __int64 v113; // [rsp+160h] [rbp+60h] BYREF
  int v114; // [rsp+168h] [rbp+68h]
  int v115; // [rsp+16Ch] [rbp+6Ch]

  v114 = *((_DWORD *)a1 + 14);
  v115 = *((_DWORD *)a1 + 15);
  v92 = a4;
  v113 = 0LL;
  v7 = 1;
  v93[0] = 0LL;
  v8 = (struct _SURFOBJ *)(((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL));
  v101 = v8;
  SURFREFVIEW::bMap((SURFREFVIEW *)v93, v8);
  v95[0] = 0LL;
  v100 = (struct _SURFOBJ *)(((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
  SURFREFVIEW::bMap((SURFREFVIEW *)v95, v100);
  *a4 = 0;
  v11 = *((_DWORD *)a1 + 28);
  if ( (v11 & 0x80100000) != 0 )
  {
    SURFREFVIEW::bUnMapImmediate(v95, v9, v10);
    v95[0] = 0LL;
    SURFREFVIEW::bUnMapImmediate(v93, v87, v88);
    v93[0] = 0LL;
    goto LABEL_93;
  }
  if ( *((_WORD *)a1 + 50) == 3 )
  {
LABEL_3:
    v12 = a1;
    goto LABEL_4;
  }
  if ( *((_WORD *)a2 + 50) != 3 )
  {
    if ( (v11 & 0x400000) != 0 )
      goto LABEL_3;
    if ( (*((_DWORD *)a2 + 28) & 0x400000) == 0 )
    {
LABEL_93:
      v7 = 0;
      goto LABEL_49;
    }
  }
  v12 = a2;
LABEL_4:
  v13 = *((_QWORD *)v12 + 6);
  if ( (*(_DWORD *)(v13 + 40) & 0x20000) != 0 )
    *((_DWORD *)a1 + 29) |= 0x10u;
  if ( a3
    || ((*((_DWORD *)v12 + 28) & 0x400) == 0
      ? (v14 = ((__int64 (__fastcall *)(unsigned __int64, struct _SURFOBJ *, _QWORD, void *, __int64 *, __int64 *))EngCopyBits)(
                 ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL),
                 v8,
                 0LL,
                 &xloIdent,
                 &v113,
                 &v113))
      : (v14 = (*(__int64 (__fastcall **)(unsigned __int64, struct _SURFOBJ *, _QWORD, void *, __int64 *, __int64 *))(v13 + 2840))(
                 ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL),
                 v8,
                 0LL,
                 &xloIdent,
                 &v113,
                 &v113)),
        v14) )
  {
    if ( (*(_DWORD *)(v13 + 40) & 0x20000) != 0 )
      *((_DWORD *)a1 + 29) &= ~0x10u;
    v17 = *(_DWORD *)a1;
    v94 = *((_DWORD *)a1 + 29) & 0x80;
    v18 = v17 & 0x800000;
    if ( !v18 || (v91 = 1, (*((_WORD *)a1 + 51) & 0x200) == 0) )
      v91 = 0;
    if ( !v18 || (v90 = 1, (*((_WORD *)a1 + 51) & 0x400) == 0) )
      v90 = 0;
    v19 = *((_QWORD *)a1 + 4);
    AltLock = HmgQueryAltLock(v19);
    v21 = *((_QWORD *)a2 + 4);
    v22 = AltLock;
    v23 = HmgQueryAltLock(v21);
    if ( !(unsigned int)HmgSwapLockedHandleContents(v19, v22, v21, v23, 5) )
    {
      v7 = 0;
      goto LABEL_47;
    }
    v96 = 0LL;
    v24 = 0;
    v97 = 0;
    v25 = 0LL;
    FirstLSurf = SURFACE::GetFirstLSurf(a1);
    v27 = (HLSURF *)FirstLSurf;
    if ( !FirstLSurf )
      goto LABEL_25;
    v24 = -__CFSHR__(*((_DWORD *)FirstLSurf + 61), 3);
    if ( !__CFSHR__(*((_DWORD *)FirstLSurf + 61), 3) )
      goto LABEL_25;
    if ( qword_1C02511F0 )
      v28 = qword_1C02511F0();
    else
      v28 = -1073741637;
    if ( v28 >= 0 && qword_1C02511F8 )
      v25 = (HLSURF)qword_1C02511F8(*((_QWORD *)a1 + 6), v27, 0LL, 1LL, 1);
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v96, v25);
    if ( !v96 )
    {
      v7 = 0;
    }
    else
    {
LABEL_25:
      OBJECT::SwapShareCount(a1, a2);
      v29 = *((_QWORD *)a1 + 4);
      *((_QWORD *)a1 + 70) = a2;
      *((_QWORD *)a1 + 4) = *((_QWORD *)a2 + 4);
      v30 = *((_QWORD *)a2 + 18);
      *((_QWORD *)a2 + 4) = v29;
      v31 = *((_QWORD *)a1 + 18);
      *((_QWORD *)a1 + 18) = v30;
      v32 = *((_QWORD *)a2 + 20);
      *((_QWORD *)a2 + 18) = v31;
      v33 = *((_QWORD *)a1 + 20);
      *((_QWORD *)a1 + 20) = v32;
      v34 = *((_WORD *)a2 + 7);
      *((_QWORD *)a2 + 20) = v33;
      v35 = v34 & 0x8000 | *((_WORD *)a1 + 7) & 0x4000;
      *((_WORD *)a1 + 7) = *((_WORD *)a1 + 7) & 0x8000 | v34 & 0x4000;
      LODWORD(v32) = *((_DWORD *)a2 + 42);
      *((_WORD *)a2 + 7) = v35;
      LODWORD(v33) = *((_DWORD *)a1 + 42);
      *((_DWORD *)a1 + 42) = v32;
      v36 = *((_QWORD *)a2 + 22);
      *((_DWORD *)a2 + 42) = v33;
      v37 = *((_QWORD *)a1 + 22);
      *((_QWORD *)a1 + 22) = v36;
      *((_QWORD *)a2 + 22) = v37;
      v38 = *((_QWORD *)a1 + 19);
      *((_QWORD *)a1 + 19) = *((_QWORD *)a2 + 19);
      *((_QWORD *)a2 + 19) = v38;
      v39 = *((_QWORD *)a1 + 16);
      *((_QWORD *)a1 + 16) = *((_QWORD *)a2 + 16);
      LODWORD(v38) = *((_DWORD *)a2 + 80);
      *((_QWORD *)a2 + 16) = v39;
      LODWORD(v39) = *((_DWORD *)a1 + 80);
      *((_DWORD *)a1 + 80) = v38;
      LODWORD(v38) = *((_DWORD *)a2 + 81);
      *((_DWORD *)a2 + 80) = v39;
      LODWORD(v39) = *((_DWORD *)a1 + 81);
      *((_DWORD *)a1 + 81) = v38;
      *((_DWORD *)a2 + 81) = v39;
      v40 = *((_QWORD *)a1 + 61);
      v41 = *(_OWORD *)((char *)a1 + 344);
      v102 = *(_OWORD *)((char *)a1 + 328);
      v42 = *(_OWORD *)((char *)a1 + 360);
      v103 = v41;
      v43 = *(_OWORD *)((char *)a1 + 376);
      v104 = v42;
      v44 = *(_OWORD *)((char *)a1 + 392);
      v105 = v43;
      v45 = *(_OWORD *)((char *)a1 + 408);
      v106 = v44;
      v46 = *(_OWORD *)((char *)a1 + 424);
      v107 = v45;
      v47 = *(_OWORD *)((char *)a1 + 440);
      v108 = v46;
      v48 = *(_OWORD *)((char *)a1 + 456);
      v109 = v47;
      v49 = *(_OWORD *)((char *)a1 + 472);
      v110 = v48;
      v111 = v49;
      v112 = v40;
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
      v50 = v103;
      *(_OWORD *)((char *)a2 + 328) = v102;
      v51 = v104;
      *(_OWORD *)((char *)a2 + 344) = v50;
      v52 = v105;
      *(_OWORD *)((char *)a2 + 360) = v51;
      v53 = v106;
      *(_OWORD *)((char *)a2 + 376) = v52;
      v54 = v107;
      *(_OWORD *)((char *)a2 + 392) = v53;
      v55 = v108;
      *(_OWORD *)((char *)a2 + 408) = v54;
      v56 = v109;
      *(_OWORD *)((char *)a2 + 424) = v55;
      v57 = v110;
      *(_OWORD *)((char *)a2 + 440) = v56;
      v58 = v111;
      v59 = v112;
      *(_OWORD *)((char *)a2 + 456) = v57;
      v60 = *((_OWORD *)a2 + 31);
      *(_OWORD *)((char *)a2 + 472) = v58;
      *((_QWORD *)a2 + 61) = v59;
      v61 = *((_OWORD *)a1 + 31);
      v62 = *((_OWORD *)a1 + 32);
      *((_OWORD *)a1 + 31) = v60;
      *((_OWORD *)a1 + 32) = *((_OWORD *)a2 + 32);
      LODWORD(v59) = *((_DWORD *)a2 + 28);
      *((_OWORD *)a2 + 31) = v61;
      *((_OWORD *)a2 + 32) = v62;
      LODWORD(v39) = *((_DWORD *)a1 + 28);
      *((_DWORD *)a1 + 28) = *((_DWORD *)a2 + 28) ^ (v39 ^ v59) & 0x3B5EF;
      *((_DWORD *)a2 + 28) = v39 ^ (v39 ^ *((_DWORD *)a2 + 28)) & 0x3B5EF;
      LODWORD(v39) = *((_DWORD *)a1 + 29);
      *((_DWORD *)a1 + 29) = v39 ^ (v39 ^ *((_DWORD *)a2 + 29)) & 0x3FFF;
      *((_DWORD *)a2 + 29) ^= (v39 ^ *((_DWORD *)a2 + 29)) & 0x3FFF;
      LODWORD(v39) = *((_DWORD *)a1 + 28);
      *((_DWORD *)a1 + 28) = v39 ^ (v39 ^ *((_DWORD *)a2 + 28)) & 0xC00000;
      *((_DWORD *)a2 + 28) ^= (v39 ^ *((_DWORD *)a2 + 28)) & 0xC00000;
      LODWORD(v39) = *((_DWORD *)a1 + 29);
      *((_DWORD *)a1 + 29) = v39 ^ (v39 ^ *((_DWORD *)a2 + 29)) & 0x390D;
      v63 = (struct _EPROCESS *)*((_QWORD *)a2 + 80);
      *((_DWORD *)a2 + 29) ^= (v39 ^ *((_DWORD *)a2 + 29)) & 0x390D;
      v64 = (struct _EPROCESS *)*((_QWORD *)a1 + 80);
      SURFACE::vAppContainerOwner(a1, v63);
      SURFACE::vAppContainerOwner(a2, v64);
      if ( (*((_DWORD *)a1 + 29) & 0x800) != 0 )
      {
        v80 = *((_DWORD *)a1 + 165);
        v81 = *((_DWORD *)a1 + 166);
        v82 = *(_QWORD *)((char *)a1 + 668);
        *((_DWORD *)a2 + 29) |= 0x800u;
        *((_DWORD *)a2 + 165) = v80;
        *((_DWORD *)a2 + 166) = v81;
        *(_QWORD *)((char *)a2 + 668) = v82;
      }
      if ( v91 )
      {
        *((_WORD *)a1 + 51) &= ~0x200u;
        v83 = *(_DWORD *)a2 & 0x800000;
        if ( v83 )
          *((_WORD *)a2 + 51) |= 0x200u;
        if ( v90 && v83 )
          *((_WORD *)a2 + 51) |= 0x400u;
        *v92 = 1;
      }
      if ( v27 )
      {
        v65 = *v27;
        v98 = 0LL;
        v99 = 1;
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v98, v65);
        if ( v24 )
        {
          if ( qword_1C0251190 )
          {
            v66 = qword_1C0251190();
            v67 = -1073741637;
          }
          else
          {
            v67 = -1073741637;
            v66 = -1073741637;
          }
          if ( v66 >= 0 && qword_1C0251198 )
            qword_1C0251198(*((_QWORD *)v12 + 6), v98, a2, v96);
        }
        else
        {
          v67 = -1073741637;
        }
        while ( 1 )
        {
          v68 = SURFACE::GetFirstLSurf(a1);
          if ( !v68 )
            break;
          if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported() >= 0 && qword_1C02511A8 )
            qword_1C02511A8(*((_QWORD *)v12 + 6), v68, a2);
        }
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)&v98);
      }
      else
      {
        v67 = -1073741637;
      }
      if ( (*((_DWORD *)a2 + 29) & 4) != 0 )
      {
        v84 = HmgShareLockEx(*((_QWORD *)a2 + 18), 5, 0);
        v85 = v84;
        if ( v84 )
        {
          if ( *(_QWORD *)(v84 + 24) )
          {
            if ( qword_1C02511B0 )
              v67 = qword_1C02511B0();
            if ( v67 >= 0 && qword_1C02511B8 )
              qword_1C02511B8(*(_QWORD *)(v85 + 24), v101, v100);
          }
          HmgDecrementShareReferenceCountEx(v85, 0LL);
        }
      }
      if ( v94 )
      {
        HmgDecrementShareReferenceCountEx((__int64)a1, 0LL);
        HmgIncrementShareReferenceCount((int *)a2);
      }
      if ( *((_DWORD *)a1 + 2) )
      {
        *v92 = 1;
LABEL_46:
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)&v96);
LABEL_47:
        if ( !v7 && v91 )
        {
          *((_WORD *)a2 + 51) &= ~0x200u;
          v86 = *(_DWORD *)a1 & 0x800000;
          if ( v86 )
            *((_WORD *)a1 + 51) |= 0x200u;
          if ( v90 && v86 )
            *((_WORD *)a1 + 51) |= 0x400u;
        }
        goto LABEL_48;
      }
      v92 = (_DWORD *)HmgShareLockCheck(*((_QWORD *)a1 + 4), 5);
      SURFREFVIEW::bUnMapImmediate(v93, v69, v70);
      v93[0] = 0LL;
      v7 = SURFREF::bDeleteSurface(&v92, 0LL, v71);
      if ( !v7 )
        *((_QWORD *)a1 + 70) = 0LL;
      if ( v92 )
        HmgDecrementShareReferenceCountEx((__int64)v92, 0LL);
      if ( v7 )
        goto LABEL_46;
    }
    v75 = *((_QWORD *)a1 + 4);
    v76 = HmgQueryAltLock(v75);
    v77 = *((_QWORD *)a2 + 4);
    v78 = v76;
    v79 = HmgQueryAltLock(v77);
    HmgSwapLockedHandleContents(v77, v79, v75, v78, 5);
    goto LABEL_46;
  }
  v7 = 0;
LABEL_48:
  SURFREFVIEW::bUnMapImmediate(v95, v15, v16);
  v95[0] = 0LL;
  SURFREFVIEW::bUnMapImmediate(v93, v72, v73);
  v93[0] = 0LL;
LABEL_49:
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v95);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v93);
  return v7;
}
