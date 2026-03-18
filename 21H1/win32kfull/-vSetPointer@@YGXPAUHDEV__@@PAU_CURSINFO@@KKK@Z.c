/*
 * XREFs of ?vSetPointer@@YGXPAUHDEV__@@PAU_CURSINFO@@KKK@Z @ 0x77F4E
 * Callers:
 *     _GreSetPointer@16 @ 0x771C2 (_GreSetPointer@16.c)
 * Callees:
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vUnlock@SURFREF@@QAEXXZ @ 0x78568 (-vUnlock@SURFREF@@QAEXXZ.c)
 *     ?vProcessCursorShape@@YGXPAUHDEV__@@HHPAU_SURFOBJ@@1PAVPALETTE@@PAU_RECTL@@PAPAUHBITMAP__@@@Z @ 0x935DE (-vProcessCursorShape@@YGXPAUHDEV__@@HHPAU_SURFOBJ@@1PAVPALETTE@@PAU_RECTL@@PAPAUHBITMAP__@@@Z.c)
 *     ?SETFLAG@@YGXHACKK@Z @ 0x9DB80 (-SETFLAG@@YGXHACKK@Z.c)
 *     _EngSetPointerShape@40 @ 0xD00A2 (_EngSetPointerShape@40.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??1EXLATEOBJ@@QAE@XZ @ 0x1CC63A (--1EXLATEOBJ@@QAE@XZ.c)
 */

void __userpurge vSetPointer(
        unsigned int *a1@<edx>,
        int a2@<ecx>,
        HDEV a3,
        struct _CURSINFO *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  int v7; // eax
  unsigned int *v8; // ebx
  int *v9; // esi
  int v10; // ecx
  void (__stdcall *v11)(int, int, int, _DWORD); // edx
  unsigned int v12; // ecx
  int v13; // eax
  _DWORD *v14; // edx
  _DWORD *v15; // esi
  LONG v16; // eax
  SURFACE *v17; // edi
  LONG v18; // eax
  LONG v19; // ecx
  struct _SURFOBJ *v20; // edx
  int v21; // ecx
  struct _SURFOBJ *v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  LONG v25; // eax
  LONG v26; // ecx
  LONG v27; // edx
  bool v28; // cc
  SURFACE *v29; // edi
  unsigned int v30; // ecx
  int v31; // eax
  LONG v32; // ecx
  LONG v33; // edx
  LONG v34; // esi
  LONG v35; // edi
  int v36; // ecx
  int v37; // eax
  RECTL *p_prcl; // ecx
  int v39; // eax
  int v40; // edx
  int v41; // edi
  int v42; // ecx
  int v43; // eax
  LONG v44; // eax
  int v45; // ecx
  char v46; // si
  unsigned __int8 v47; // al
  int v48; // esi
  unsigned int v49; // ecx
  SURFACE *v50; // esi
  int v51; // eax
  struct _SURFOBJ *v52; // eax
  SURFOBJ *v53; // edi
  void (__stdcall *v54)(SURFOBJ *, int, int, _DWORD); // eax
  _BYTE *v55; // esi
  int v56; // ebx
  int v57; // ecx
  void (__stdcall *v58)(SURFOBJ *, int, int, _DWORD); // eax
  SURFOBJ *v59; // [esp-24h] [ebp-C8h]
  int v60; // [esp-20h] [ebp-C4h]
  SURFOBJ *v61; // [esp-20h] [ebp-C4h]
  XLATEOBJ *v62; // [esp-1Ch] [ebp-C0h]
  XLATEOBJ *v63; // [esp-1Ch] [ebp-C0h]
  int v64; // [esp-18h] [ebp-BCh]
  int v65; // [esp-18h] [ebp-BCh]
  LONG v66; // [esp-18h] [ebp-BCh]
  int v67; // [esp-14h] [ebp-B8h]
  int v68; // [esp-14h] [ebp-B8h]
  LONG v69; // [esp-14h] [ebp-B8h]
  int v70; // [esp-10h] [ebp-B4h]
  LONG v71; // [esp-10h] [ebp-B4h]
  LONG v72; // [esp-10h] [ebp-B4h]
  struct _SURFOBJ *v73; // [esp-Ch] [ebp-B0h]
  LONG v74; // [esp-Ch] [ebp-B0h]
  LONG v75; // [esp-Ch] [ebp-B0h]
  int v76; // [esp-4h] [ebp-A8h]
  FLONG v77; // [esp-4h] [ebp-A8h]
  struct _RECTL *v78; // [esp+0h] [ebp-A4h]
  volatile unsigned int *v79; // [esp+0h] [ebp-A4h]
  volatile unsigned int *v80; // [esp+0h] [ebp-A4h]
  volatile unsigned int *v81; // [esp+0h] [ebp-A4h]
  volatile unsigned int *v82; // [esp+0h] [ebp-A4h]
  volatile unsigned int *v83; // [esp+0h] [ebp-A4h]
  HBITMAP *v84; // [esp+4h] [ebp-A0h]
  unsigned int v85; // [esp+4h] [ebp-A0h]
  unsigned int v86; // [esp+4h] [ebp-A0h]
  unsigned int v87; // [esp+4h] [ebp-A0h]
  unsigned int v88; // [esp+4h] [ebp-A0h]
  unsigned int v89; // [esp+4h] [ebp-A0h]
  int v90[2]; // [esp+Ch] [ebp-98h] BYREF
  int v91; // [esp+14h] [ebp-90h]
  int v92; // [esp+18h] [ebp-8Ch]
  _DWORD *v93; // [esp+1Ch] [ebp-88h] BYREF
  int v94; // [esp+20h] [ebp-84h] BYREF
  int v95; // [esp+24h] [ebp-80h]
  XLATEOBJ *v96; // [esp+28h] [ebp-7Ch] BYREF
  XLATEOBJ *pxlo; // [esp+2Ch] [ebp-78h]
  struct PALETTE *v98; // [esp+30h] [ebp-74h]
  int v99; // [esp+34h] [ebp-70h]
  int v100; // [esp+38h] [ebp-6Ch]
  _DWORD *v101; // [esp+3Ch] [ebp-68h]
  LONG x; // [esp+40h] [ebp-64h]
  LONG y; // [esp+44h] [ebp-60h]
  int v104; // [esp+48h] [ebp-5Ch]
  _DWORD *v105; // [esp+4Ch] [ebp-58h]
  struct _SURFOBJ *v106; // [esp+50h] [ebp-54h] BYREF
  LONG v107; // [esp+54h] [ebp-50h]
  HDEV v108; // [esp+58h] [ebp-4Ch]
  SURFOBJ *pso; // [esp+5Ch] [ebp-48h]
  SURFACE *v110; // [esp+60h] [ebp-44h] BYREF
  int v111; // [esp+64h] [ebp-40h]
  int v112; // [esp+68h] [ebp-3Ch]
  LONG left; // [esp+6Ch] [ebp-38h] BYREF
  LONG top; // [esp+70h] [ebp-34h]
  LONG right; // [esp+74h] [ebp-30h]
  LONG bottom; // [esp+78h] [ebp-2Ch]
  RECTL prcl; // [esp+7Ch] [ebp-28h] BYREF
  RECTL v118; // [esp+8Ch] [ebp-18h] BYREF

  v7 = a2;
  v112 = a2;
  v111 = (unsigned __int8)a3 & 0x10;
  v8 = a1;
  v9 = (int *)(a2 + 24);
  v95 = (unsigned __int8)a3 & 0x20;
  v10 = *(_DWORD *)(a2 + 24);
  v101 = (_DWORD *)(v112 + 24);
  v108 = 0;
  if ( (v10 & 0x400) != 0 )
    return;
  if ( a1 )
  {
    v12 = a1[2];
    LOBYTE(a1) = 5;
    v13 = HmgShareLockCheck(v12, a1);
    v110 = (SURFACE *)v13;
    if ( !v13 )
      goto LABEL_87;
    v100 = 1;
    if ( *(_DWORD *)(v13 + 60) != 1 || (*(_BYTE *)(v13 + 36) & 1) != 0 )
      goto LABEL_87;
    v98 = ppalDefault;
    v14 = 0;
    v104 = 0;
    v15 = 0;
    pxlo = 0;
    v96 = 0;
    v94 = 0;
    v106 = 0;
    v105 = 0;
    v93 = 0;
    pso = *(SURFOBJ **)(v112 + 1820);
    v16 = v8[3];
    pso = pso != 0 ? (SURFOBJ *)&pso->sizlBitmap : 0;
    v17 = v110;
    v107 = v16;
    if ( v16 || v8[9] )
    {
      v18 = v8[9];
      LOBYTE(v14) = 5;
      if ( v18 )
      {
        v108 = (HDEV)1;
        v19 = v18;
      }
      else
      {
        v19 = v107;
      }
      v15 = (_DWORD *)HmgShareLockCheck(v19, v14);
      v93 = v15;
      if ( !v15 )
        goto LABEL_26;
      if ( v15[9] != *((int *)v110 + 9) >> 1 || v15[8] < *((_DWORD *)v110 + 8) )
        goto LABEL_86;
      v20 = (struct _SURFOBJ *)v15[22];
      v106 = v20;
      if ( !v20 )
      {
        v21 = *(_DWORD *)(v112 + 16);
        if ( v21 != v112 )
        {
          v20 = *(struct _SURFOBJ **)(v21 + 1112);
          v106 = v20;
        }
      }
      if ( !bIsCompatible(&v106, v20, v15, v112, 1) )
        goto LABEL_86;
      if ( EXLATEOBJ::bInitXlateObj(
             (int *)&v96,
             0,
             0,
             v106,
             *(_DWORD **)(v112 + 1112),
             (int)v98,
             (int)v98,
             0,
             0xFFFFFF,
             0,
             0) )
      {
        v14 = v15;
        pxlo = v96;
        v105 = v15;
      }
      else
      {
LABEL_26:
        v14 = v105;
      }
    }
    if ( v8[8] )
    {
      if ( (*v8 & 0x400) != 0 )
      {
        if ( v111 )
        {
LABEL_36:
          v25 = v8[5];
          v26 = v8[7];
          if ( v25 > v26 )
            goto LABEL_86;
          v27 = v8[6];
          v28 = v27 <= (int)v8[8];
          v107 = v8[8];
          v29 = v110;
          if ( !v28 )
            goto LABEL_86;
          prcl.right = v26;
          v30 = v8[4];
          prcl.left = v25;
          prcl.top = v27;
          prcl.bottom = v107;
          if ( !v30 )
            goto LABEL_44;
          if ( *(_DWORD *)(v112 + 1404) > 3u && (LOBYTE(v27) = 5, v31 = HmgShareLockCheck(v30, v27), (v94 = v31) != 0) )
          {
            v32 = v8[5];
            v33 = v8[6];
            v34 = v8[7];
            v35 = v8[8];
            v104 = v31;
            v118.left = v32;
            v118.top = v33;
            v118.right = v34;
            v118.bottom = v35;
            if ( v111 )
            {
              v118.left = v32 + 1;
              v118.top = v33 + 1;
              v118.right = v34 + 8;
              v118.bottom = v35 + 6;
            }
            v36 = *(_DWORD *)(v31 + 32);
            v37 = *(_DWORD *)(v31 + 36);
            v91 = v36;
            p_prcl = &v118;
          }
          else
          {
LABEL_44:
            v39 = *((_DWORD *)v29 + 8);
            if ( v15 && v39 >= v15[8] )
              v39 = v15[8];
            v91 = v39;
            p_prcl = &prcl;
            v37 = *((int *)v29 + 9) >> 1;
          }
          v92 = v37;
          v90[0] = 0;
          v90[1] = 0;
          ERECTL::operator*=(&p_prcl->left, v90);
          left = 0;
          top = 0;
          right = 0;
          bottom = 0;
          v111 = v111 != 0 ? 3 : 0;
          if ( (*v101 & 0x400) != 0 )
            goto LABEL_86;
          v40 = v112;
          v41 = 0;
          v42 = *((__int16 *)v8 + 3);
          v43 = *((__int16 *)v8 + 2);
          v99 = 0;
          *(_DWORD *)(v112 + 56) = v42;
          *(_DWORD *)(v40 + 52) = v43;
          v44 = *(_DWORD *)(v40 + 44);
          v45 = (unsigned __int8)a3 & 0xC | 1;
          v108 = 0;
          v46 = (char)a4;
          x = v44;
          y = *(_DWORD *)(v40 + 48);
          v107 = v45;
          if ( a4 && (v47 = a5, a5) )
          {
            if ( (unsigned int)a4 >= 0x10 )
              v46 = 16;
            if ( a5 >= 0xFF )
              v47 = -1;
            v45 |= (v46 & 0xF | (16 * v47)) << 8;
            v48 = 1;
            v107 = v45;
            v99 = 1;
          }
          else
          {
            v48 = v99;
          }
          if ( !v95 )
          {
            v98 = *(struct PALETTE **)(v40 + 2016);
            if ( v98 )
            {
              if ( !v48 || (*(_DWORD *)(v40 + 1416) & 0x200) != 0 )
              {
                if ( !v104 )
                {
                  v76 = v45;
                  v74 = y;
                  v51 = *((__int16 *)v8 + 3);
                  v71 = x;
                  left = prcl.left;
                  v68 = v51;
                  v65 = *((__int16 *)v8 + 2);
                  v62 = pxlo;
                  top = prcl.top;
                  right = prcl.right;
                  v60 = v105 != 0 ? (unsigned int)(v105 + 4) : 0;
                  bottom = prcl.bottom;
                  v50 = v110;
                  v52 = SURFACE::pSurfobj(v110);
                  v53 = pso;
                  v49 = ((int (__stdcall *)(SURFOBJ *, struct _SURFOBJ *, int, XLATEOBJ *, int, int, LONG, LONG, LONG *, int))v98)(
                          pso,
                          v52,
                          v60,
                          v62,
                          v65,
                          v68,
                          v71,
                          v74,
                          &left,
                          v76);
                  if ( v49 == 3 )
                  {
                    v54 = *(void (__stdcall **)(SURFOBJ *, int, int, _DWORD))(v112 + 2020);
                    if ( v54 )
                      v54(v53, -1, -1, 0);
                    v49 = 1;
                  }
                  v41 = (v49 >> 1) & 1;
                  goto LABEL_72;
                }
                if ( (*(_BYTE *)(v40 + 1416) & 0x20) != 0 )
                {
                  left = v118.left;
                  v67 = v111 + *((__int16 *)v8 + 3);
                  v64 = v111 + *((__int16 *)v8 + 2);
                  top = v118.top;
                  right = v118.right;
                  bottom = v118.bottom;
                  v49 = ((int (__stdcall *)(SURFOBJ *, _DWORD, int, _DWORD, int, int, LONG, LONG, LONG *, int))v98)(
                          pso,
                          0,
                          v104 + 16,
                          0,
                          v64,
                          v67,
                          x,
                          y,
                          &left,
                          v45 | 0x10);
                  if ( v49 == 3 )
                    v41 = 0;
                  else
                    v41 = (v49 >> 1) & 1;
                  v50 = v110;
LABEL_72:
                  v108 = (HDEV)((v49 >> 2) & 1);
                  v95 = v41 ^ 1;
                  v100 = v41 ^ 1;
                  if ( v41 == 1 )
                  {
                    v55 = v101;
                    v56 = v112;
                    v100 = v41 ^ 1;
                    if ( (*(_BYTE *)v101 & 4) != 0 )
                    {
                      EngSetPointerShape(
                        *(_DWORD *)(v112 + 1820) != 0 ? (SURFOBJ *)(*(_DWORD *)(v112 + 1820) + 16) : 0,
                        0,
                        0,
                        0,
                        0,
                        0,
                        0,
                        0,
                        0,
                        0);
                      v100 = v95;
                    }
                    goto LABEL_81;
                  }
                  v45 = v107;
LABEL_77:
                  v57 = (unsigned __int8)a3 & 0x40 | v45;
                  if ( v104 )
                  {
                    EngSetPointerShape(
                      pso,
                      0,
                      (SURFOBJ *)(v104 + 16),
                      0,
                      *((__int16 *)v8 + 2) + v111,
                      v111 + *((__int16 *)v8 + 3),
                      x,
                      y,
                      &v118,
                      v57 | 0x10);
                  }
                  else
                  {
                    v77 = v57;
                    v75 = y;
                    v72 = x;
                    v69 = *((__int16 *)v8 + 3);
                    v66 = *((__int16 *)v8 + 2);
                    v63 = pxlo;
                    v61 = v105 != 0 ? (SURFOBJ *)(v105 + 4) : 0;
                    v59 = SURFACE::pSurfobj(v50);
                    EngSetPointerShape(pso, v59, v61, v63, v66, v69, v72, v75, &prcl, v77);
                  }
                  v55 = v101;
                  v56 = v112;
LABEL_81:
                  if ( !v41 && (*v55 & 2) != 0 )
                  {
                    v58 = *(void (__stdcall **)(SURFOBJ *, int, int, _DWORD))(v56 + 2020);
                    if ( v58 )
                      v58(pso, -1, -1, 0);
                  }
                  SETFLAG(4, (volatile unsigned int *)v78, (unsigned int)v84);
                  SETFLAG(2, v81, v87);
                  SETFLAG(0x100000, v82, v88);
                  SETFLAG((int)&loc_1FFFFC + 4, v83, v89);
LABEL_86:
                  SURFREF::vUnlock((SURFREF *)&v94);
                  SURFREF::vUnlock((SURFREF *)&v93);
                  EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v96);
LABEL_87:
                  SURFREF::vUnlock((SURFREF *)&v110);
                  return;
                }
              }
            }
          }
          v50 = v110;
          goto LABEL_77;
        }
      }
      else if ( !v111 )
      {
        goto LABEL_36;
      }
    }
    v73 = v106;
    v70 = v14 != 0 ? (unsigned int)(v14 + 4) : 0;
    v22 = SURFACE::pSurfobj(v17);
    vProcessCursorShape(v108, (int)v22, v70, v73, (struct _SURFOBJ *)(v8 + 5), (struct PALETTE *)(v8 + 4), v78, v84);
    v23 = *v8;
    if ( v111 )
      v24 = v23 | 0x400;
    else
      v24 = v23 & 0xFFFFFBFF;
    *v8 = v24;
    goto LABEL_36;
  }
  if ( (v10 & 4) != 0 )
  {
    EngSetPointerShape(
      *(_DWORD *)(v7 + 1820) != 0 ? (SURFOBJ *)(*(_DWORD *)(v7 + 1820) + 16) : 0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0);
    v10 = *v9;
    v7 = v112;
  }
  if ( (v10 & 2) != 0 )
  {
    v11 = *(void (__stdcall **)(int, int, int, _DWORD))(v7 + 2020);
    if ( v11 )
      v11(*(_DWORD *)(v7 + 1820) != 0 ? *(_DWORD *)(v7 + 1820) + 16 : 0, -1, -1, 0);
  }
  SETFLAG(2, (volatile unsigned int *)v78, (unsigned int)v84);
  SETFLAG(4, v79, v85);
  SETFLAG(0x100000, v80, v86);
}
