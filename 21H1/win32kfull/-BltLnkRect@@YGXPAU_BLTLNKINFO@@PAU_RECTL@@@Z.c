/*
 * XREFs of ?BltLnkRect@@YGXPAU_BLTLNKINFO@@PAU_RECTL@@@Z @ 0x4F4D0
 * Callers:
 *     ?BltLnk@@YGHPAVSURFACE@@00PAVECLIPOBJ@@PAVXLATE@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x94E94 (-BltLnk@@YGHPAVSURFACE@@00PAVECLIPOBJ@@PAVXLATE@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z.c)
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     ?BltLnkAccel6666@@YGXPAE0JJJJ@Z @ 0x2481B3 (-BltLnkAccel6666@@YGXPAE0JJJJ@Z.c)
 *     ?BltLnkAccel8888@@YGXPAE0JJJJ@Z @ 0x248233 (-BltLnkAccel8888@@YGXPAE0JJJJ@Z.c)
 *     ?BltLnkAccelEEEE@@YGXPAE0JJJJ@Z @ 0x2482BF (-BltLnkAccelEEEE@@YGXPAE0JJJJ@Z.c)
 */

void __fastcall BltLnkRect(int a1, int *a2)
{
  int v2; // esi
  int v3; // edx
  int v4; // ecx
  void (__stdcall *v5)(struct BLTINFO *, unsigned int, unsigned int *, char); // edi
  int v6; // edx
  bool v7; // cc
  int v8; // edx
  int v9; // edi
  int v10; // edi
  int v11; // edx
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  char v15; // dl
  int v16; // ecx
  XLATEOBJ *v17; // edx
  void (__stdcall **v18)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // ecx
  int v19; // ecx
  void (__stdcall **v20)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // edi
  int i; // eax
  int v23; // edi
  unsigned int v24; // eax
  unsigned int v25; // eax
  int v26; // edx
  unsigned int v27; // ecx
  int v28; // ecx
  void (__stdcall *v29)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // ecx
  int v30; // edx
  char *v31; // ecx
  char *v32; // ecx
  char *v33; // ecx
  ULONG *pulXlate; // ecx
  char *v35; // edi
  char *v36; // edi
  char *v37; // edi
  char *v38; // edi
  char *v39; // edi
  int v40; // eax
  int v41; // edx
  int v42; // eax
  unsigned int j; // ecx
  char *v44; // edi
  int v45; // ecx
  unsigned int v46; // edx
  unsigned int v47; // ebx
  int k; // eax
  int v50; // ecx
  int v51; // eax
  unsigned int m; // ecx
  char *v53; // edi
  int v54; // ecx
  unsigned int v55; // edx
  unsigned int v56; // ebx
  int n; // eax
  int v59; // ecx
  int v60; // eax
  unsigned int v61; // ecx
  int ii; // eax
  int v64; // ecx
  int v65; // esi
  unsigned int v66; // edi
  unsigned int v67; // edx
  int v68; // edi
  int v69; // esi
  int v70; // ecx
  unsigned int v71; // edx
  XLATEOBJ *v72; // esi
  unsigned int v73; // ebx
  int v74; // esi
  unsigned int v75; // edi
  int v76; // eax
  XLATEOBJ **v77; // [esp+0h] [ebp-5D0h]
  int v78; // [esp+4h] [ebp-5CCh]
  _DWORD v79[8]; // [esp+10h] [ebp-5C0h] BYREF
  void (__stdcall **v80)(struct BLTINFO *); // [esp+30h] [ebp-5A0h]
  int (__stdcall *v81)(int); // [esp+34h] [ebp-59Ch]
  int v82; // [esp+38h] [ebp-598h]
  int v83; // [esp+3Ch] [ebp-594h]
  void (__stdcall **v84)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [esp+40h] [ebp-590h]
  int v85; // [esp+44h] [ebp-58Ch]
  int v86; // [esp+48h] [ebp-588h]
  int v87; // [esp+4Ch] [ebp-584h]
  int *v88; // [esp+50h] [ebp-580h]
  int v89; // [esp+54h] [ebp-57Ch]
  int v90; // [esp+58h] [ebp-578h]
  int v91; // [esp+5Ch] [ebp-574h]
  void (__stdcall *v92)(unsigned __int8 *, unsigned int, const unsigned __int8 *, unsigned int, unsigned int, unsigned int, unsigned int); // [esp+60h] [ebp-570h]
  unsigned int v93; // [esp+64h] [ebp-56Ch]
  void (__stdcall *v94)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned __int8 *, unsigned __int8 *); // [esp+68h] [ebp-568h]
  unsigned int v95; // [esp+6Ch] [ebp-564h]
  unsigned int v96; // [esp+70h] [ebp-560h]
  unsigned int v97; // [esp+74h] [ebp-55Ch]
  int v98; // [esp+78h] [ebp-558h]
  XLATEOBJ *v99; // [esp+7Ch] [ebp-554h]
  int v100; // [esp+80h] [ebp-550h]
  void (__stdcall **v101)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [esp+84h] [ebp-54Ch]
  char v102; // [esp+8Bh] [ebp-545h]
  unsigned int v103; // [esp+8Ch] [ebp-544h]
  int v104; // [esp+90h] [ebp-540h]
  void (__stdcall *v105)(struct BLTINFO *, unsigned int, unsigned int *, char); // [esp+94h] [ebp-53Ch]
  int v106; // [esp+98h] [ebp-538h]
  int v107; // [esp+9Ch] [ebp-534h]
  int v108; // [esp+A0h] [ebp-530h]
  int v109; // [esp+A4h] [ebp-52Ch]
  int v110; // [esp+A8h] [ebp-528h]
  int v111; // [esp+ACh] [ebp-524h]
  int v112; // [esp+B0h] [ebp-520h] BYREF
  int v113; // [esp+B4h] [ebp-51Ch]
  char *v114; // [esp+B8h] [ebp-518h]
  int v115; // [esp+BCh] [ebp-514h]
  int v116; // [esp+C0h] [ebp-510h]
  int v117; // [esp+C4h] [ebp-50Ch]
  void (__stdcall **v118)(unsigned int *, unsigned int *, unsigned int *, unsigned int); // [esp+C8h] [ebp-508h]
  int v119; // [esp+CCh] [ebp-504h]
  int v120; // [esp+D0h] [ebp-500h]
  int v121; // [esp+D4h] [ebp-4FCh]
  int v122; // [esp+D8h] [ebp-4F8h]
  unsigned int v123; // [esp+DCh] [ebp-4F4h]
  int v124; // [esp+E0h] [ebp-4F0h]
  int v125; // [esp+E4h] [ebp-4ECh]
  XLATEOBJ *v126; // [esp+130h] [ebp-4A0h] BYREF
  char *v127; // [esp+134h] [ebp-49Ch]
  int v128; // [esp+138h] [ebp-498h]
  int v129; // [esp+13Ch] [ebp-494h]
  int v130; // [esp+140h] [ebp-490h]
  int v131; // [esp+144h] [ebp-48Ch]
  void (__stdcall *v132)(struct BLTINFO *, unsigned int, unsigned int *, char); // [esp+148h] [ebp-488h]
  int v133; // [esp+14Ch] [ebp-484h]
  int v134; // [esp+150h] [ebp-480h]
  unsigned int v135; // [esp+154h] [ebp-47Ch]
  unsigned int v136; // [esp+158h] [ebp-478h]
  int v137; // [esp+15Ch] [ebp-474h]
  int v138; // [esp+160h] [ebp-470h]
  int v139; // [esp+164h] [ebp-46Ch]
  unsigned __int8 v140[256]; // [esp+1B0h] [ebp-420h] BYREF
  unsigned __int8 v141[256]; // [esp+2B0h] [ebp-320h] BYREF
  _DWORD v142[64]; // [esp+3B0h] [ebp-220h] BYREF
  _DWORD v143[66]; // [esp+4B0h] [ebp-120h] BYREF
  CPPEH_RECORD ms_exc; // [esp+5B8h] [ebp-18h]

  v88 = a2;
  v2 = a1;
  v91 = a1;
  v104 = a1;
  v82 = a1;
  v103 = 0;
  v90 = 0;
  v95 = 0;
  v125 = 0;
  v139 = 0;
  v80 = 0;
  v81 = 0;
  v92 = 0;
  v94 = 0;
  v107 = 0;
  v108 = 0;
  v96 = 0;
  v97 = 0;
  v87 = 0;
  v109 = 0;
  v111 = 0;
  v93 = 0;
  v89 = 0;
  v85 = 0;
  v83 = 0;
  memset(v79, 0, sizeof(v79));
  v110 = a2[3];
  v98 = a2[1];
  v100 = v110 - v98;
  v3 = *a2;
  v4 = v88[2] - v3;
  v106 = v4;
  v101 = *(void (__stdcall ***)(unsigned int *, unsigned int *, unsigned int *, unsigned int))(v2 + 16);
  v5 = (void (__stdcall *)(struct BLTINFO *, unsigned int, unsigned int *, char))v101[15];
  v105 = v5;
  if ( v5 == (void (__stdcall *)(struct BLTINFO *, unsigned int, unsigned int *, char))1 )
  {
    v89 = v3 >> 5;
    v90 = (v3 >> 3) & 3;
    v23 = v3 & 0x1F;
    v24 = (unsigned int)(v23 + v4 + 31) >> 5;
LABEL_47:
    v95 = v23;
    v5 = v105;
LABEL_48:
    v103 = v24;
    goto LABEL_8;
  }
  if ( v5 == (void (__stdcall *)(struct BLTINFO *, unsigned int, unsigned int *, char))2 )
  {
    v89 = v3 >> 3;
    v90 = (v3 >> 1) & 3;
    v23 = v3 & 7;
    v24 = (unsigned int)(v23 + v4 + 7) >> 3;
    goto LABEL_47;
  }
  if ( v5 == (void (__stdcall *)(struct BLTINFO *, unsigned int, unsigned int *, char))3 )
  {
    v89 = v3 >> 2;
    v23 = v3 & 3;
    v90 = v23;
    v24 = (unsigned int)(v23 + v4 + 3) >> 2;
    v85 = 1;
    goto LABEL_47;
  }
  if ( v5 == (void (__stdcall *)(struct BLTINFO *, unsigned int, unsigned int *, char))4 )
  {
    v89 = v3 >> 1;
    v23 = v3 & 1;
    v90 = 2 * v23;
    v24 = (unsigned int)(v23 + v4 + 1) >> 1;
    v85 = 2;
    goto LABEL_47;
  }
  if ( v5 == (void (__stdcall *)(struct BLTINFO *, unsigned int, unsigned int *, char))5 )
  {
    v89 = (3 * v3) >> 2;
    v90 = -v3 & 3;
    v95 = 0;
    v83 = v90;
    v85 = 3;
    v24 = (unsigned int)(v90 + 3 * (v106 + 1)) >> 2;
    goto LABEL_48;
  }
  if ( v5 == (void (__stdcall *)(struct BLTINFO *, unsigned int, unsigned int *, char))6 )
  {
    v89 = v3;
    v103 = v4;
    v90 = 0;
    v95 = 0;
    v85 = 4;
  }
LABEL_8:
  v86 = *(_DWORD *)(v2 + 52);
  if ( !v86 )
  {
    v93 = *(_DWORD *)(v2 + 108);
    v6 = *(_DWORD *)(v2 + 64);
    v105 = (void (__stdcall *)(struct BLTINFO *, unsigned int, unsigned int *, char))v6;
    goto LABEL_10;
  }
  v35 = (char *)v5 - 1;
  if ( !v35 )
  {
    v92 = BltLnkReadPat1;
    goto LABEL_98;
  }
  v36 = v35 - 1;
  if ( !v36 )
  {
    v92 = (void (__stdcall *)(unsigned __int8 *, unsigned int, const unsigned __int8 *, unsigned int, unsigned int, unsigned int, unsigned int))BltLnkReadPat4;
    goto LABEL_98;
  }
  v37 = v36 - 1;
  if ( !v37 )
  {
    v92 = BltLnkReadPat;
LABEL_98:
    v40 = *(_DWORD *)(v2 + 112);
    v41 = v3 - *(_DWORD *)(v2 + 120);
    goto LABEL_99;
  }
  v38 = v37 - 1;
  if ( v38 )
  {
    v39 = v38 - 1;
    if ( !v39 )
    {
      v96 = 3 * *(_DWORD *)(v2 + 112);
      v97 = 3 * (v3 - *(_DWORD *)(v2 + 120));
      v92 = BltLnkReadPat;
      goto LABEL_100;
    }
    if ( v39 != (char *)1 )
      goto LABEL_100;
    v40 = 4 * *(_DWORD *)(v2 + 112);
    v41 = 4 * (v3 - *(_DWORD *)(v2 + 120));
  }
  else
  {
    v40 = 2 * *(_DWORD *)(v2 + 112);
    v41 = 2 * (v3 - *(_DWORD *)(v2 + 120));
  }
  v92 = BltLnkReadPat;
LABEL_99:
  v96 = v40;
  v97 = v41;
LABEL_100:
  if ( v97 >= v96 )
    v97 %= v96;
  v87 = *(_DWORD *)(v2 + 116);
  v109 = v98 - *(_DWORD *)(v2 + 124);
  v6 = *(_DWORD *)(v2 + 64);
  v105 = (void (__stdcall *)(struct BLTINFO *, unsigned int, unsigned int *, char))v6;
  if ( v6 < 0 )
    v109 += v100 - 1;
  if ( v109 >= v87 )
  {
    v109 %= v87;
LABEL_108:
    v6 = (int)v105;
    goto LABEL_109;
  }
  if ( v109 < 0 )
  {
    v109 = v87 - ~v109 % v87 - 1;
    goto LABEL_108;
  }
LABEL_109:
  v108 = v86 + v109 * *(_DWORD *)(v2 + 76);
LABEL_10:
  v7 = v6 <= 0;
  v8 = v98;
  if ( v7 )
    v9 = v110 - 1;
  else
    v9 = v98;
  v10 = *(_DWORD *)(v2 + 44) + *(_DWORD *)(v2 + 72) * v9;
  v98 = v10;
  v86 = *(_DWORD *)(v2 + 40);
  if ( v86 )
  {
    v112 = *(_DWORD *)(v2 + 32);
    v11 = *(_DWORD *)(v2 + 104) - *(_DWORD *)(v2 + 4) + v8;
    *(_DWORD *)(v2 + 160) = v11;
    v12 = *v88 + *(_DWORD *)(v2 + 100) - *(_DWORD *)v2;
    *(_DWORD *)(v2 + 148) = v12;
    *(_DWORD *)(v2 + 152) = v12 + v106;
    v107 = v86;
    v13 = *(_DWORD *)(v2 + 68);
    if ( (int)v105 <= 0 )
      v107 += v13 * (v11 + v100 - 1);
    else
      v107 += v11 * v13;
  }
  v14 = *(_DWORD *)(v2 + 184);
  v110 = v14;
  if ( v14 )
  {
    v25 = *v88 + *(_DWORD *)(v2 + 136) - *(_DWORD *)v2;
    v86 = v25;
    v26 = v88[1] + *(_DWORD *)(v2 + 140) - *(_DWORD *)(v2 + 4);
    v111 = v26;
    if ( (int)v105 < 0 )
      v111 = v100 + v26 - 1;
    v27 = *(_DWORD *)(v2 + 128);
    v84 = (void (__stdcall **)(unsigned int *, unsigned int *, unsigned int *, unsigned int))v27;
    if ( v25 >= v27 )
      v86 = v25 % v27;
    v28 = *(_DWORD *)(v2 + 132);
    v99 = (XLATEOBJ *)v28;
    if ( v111 >= v28 )
    {
      v111 %= v28;
    }
    else if ( v111 < 0 )
    {
      v111 = v28 - ~v111 % v28 - 1;
    }
    v79[1] = *(_DWORD *)(v2 + 48);
    v79[0] = v79[1] + v111 * *(_DWORD *)(v2 + 80);
    v79[5] = v86;
    v79[4] = v84;
    v79[3] = v111;
    v79[2] = v99;
    LOBYTE(v79[7]) = *(_BYTE *)(v2 + 189);
    v79[6] = *(_DWORD *)(v2 + 96);
    if ( v101[15] == (void (__stdcall *)(unsigned int *, unsigned int *, unsigned int *, unsigned int))1 )
    {
      v94 = BltLnkSrcCopyMsk1;
    }
    else if ( v101[15] == (void (__stdcall *)(unsigned int *, unsigned int *, unsigned int *, unsigned int))2 )
    {
      v94 = (void (__stdcall *)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned __int8 *, unsigned __int8 *))BltLnkSrcCopyMsk4;
    }
    else if ( v101[15] == (void (__stdcall *)(unsigned int *, unsigned int *, unsigned int *, unsigned int))3 )
    {
      v94 = (void (__stdcall *)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned __int8 *, unsigned __int8 *))BltLnkSrcCopyMsk8;
    }
    else if ( v101[15] == (void (__stdcall *)(unsigned int *, unsigned int *, unsigned int *, unsigned int))4 )
    {
      v94 = (void (__stdcall *)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned __int8 *, unsigned __int8 *))BltLnkSrcCopyMsk16;
    }
    else
    {
      if ( v101[15] != (void (__stdcall *)(unsigned int *, unsigned int *, unsigned int *, unsigned int))5 )
      {
        v14 = v110;
        if ( v101[15] == (void (__stdcall *)(unsigned int *, unsigned int *, unsigned int *, unsigned int))6 )
          v94 = (void (__stdcall *)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned __int8 *, unsigned __int8 *))BltLnkSrcCopyMsk32;
        goto LABEL_16;
      }
      v94 = (void (__stdcall *)(struct BLTINFO *, struct _BLTLNK_MASKINFO *, unsigned __int8 *, unsigned __int8 *))BltLnkSrcCopyMsk24;
    }
    v14 = v110;
  }
LABEL_16:
  if ( *(int *)(v2 + 60) <= 0 || (int)v105 <= 0 )
    goto LABEL_26;
  v15 = *(_BYTE *)(v2 + 188);
  v102 = v15;
  if ( v15 != -52
    || !v14
    || *(void (__stdcall **)(unsigned int *, unsigned int *, unsigned int *, unsigned int))(*(_DWORD *)(v2 + 20) + 60) != v101[15]
    || (*(_BYTE *)(*(_DWORD *)(v2 + 32) + 4) & 1) == 0 )
  {
    if ( v15 != -30 && v15 != -72 )
      goto LABEL_21;
    v16 = v110;
    if ( !v110 )
    {
      v84 = *(void (__stdcall ***)(unsigned int *, unsigned int *, unsigned int *, unsigned int))(v2 + 108);
      if ( v84 == (void (__stdcall **)(unsigned int *, unsigned int *, unsigned int *, unsigned int))-1
        || *(_DWORD *)(*(_DWORD *)(v2 + 20) + 60) != 1 )
      {
        goto LABEL_22;
      }
      v29 = v101[15];
      if ( (unsigned int)v29 - 3 > 3 )
      {
LABEL_21:
        v16 = v110;
LABEL_22:
        if ( !v16
          && *(_DWORD *)(v2 + 172)
          && *(_DWORD *)(v2 + 176)
          && v101[15] == (void (__stdcall *)(unsigned int *, unsigned int *, unsigned int *, unsigned int))3
          && *(_DWORD *)(*(_DWORD *)(v2 + 20) + 60) == 3
          && (*(_BYTE *)(*(_DWORD *)(v2 + 32) + 4) & 1) != 0 )
        {
          switch ( v15 )
          {
            case 102:
              BltLnkAccel6666(*(unsigned __int8 **)(v2 + 84), *(unsigned __int8 **)(v2 + 88), v106, v100, (int)v77, v78);
              return;
            case -120:
              BltLnkAccel8888(*(unsigned __int8 **)(v2 + 84), *(unsigned __int8 **)(v2 + 88), v106, v100, (int)v77, v78);
              return;
            case -18:
              BltLnkAccelEEEE(*(unsigned __int8 **)(v2 + 84), *(unsigned __int8 **)(v2 + 88), v106, v100, (int)v77, v78);
              return;
          }
        }
        goto LABEL_26;
      }
      v105 = 0;
      v30 = 0;
      v31 = (char *)v29 - 3;
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( v32 )
        {
          v33 = v32 - 1;
          if ( v33 )
          {
            if ( v33 != (char *)1 )
              goto LABEL_73;
            v105 = BltLnkPatMaskCopy32;
          }
          else
          {
            v105 = BltLnkPatMaskCopy24;
          }
          v30 = 0xFFFFFF;
        }
        else
        {
          v105 = BltLnkPatMaskCopy16;
          v30 = 0xFFFF;
        }
      }
      else
      {
        v105 = BltLnkPatMaskCopy8;
        v30 = 255;
      }
LABEL_73:
      v99 = *(XLATEOBJ **)(v2 + 32);
      pulXlate = v99->pulXlate;
      if ( (v30 & pulXlate[1]) == v30 && (v30 & *pulXlate) == 0 )
      {
        LOBYTE(v30) = (v102 != -30) - 1;
        v128 = v10;
        v127 = (char *)v107;
        v129 = 1;
        v132 = *(void (__stdcall **)(struct BLTINFO *, unsigned int, unsigned int *, char))(v2 + 64);
        v130 = v106;
        v131 = v100;
        v133 = *(_DWORD *)(v2 + 84);
        v134 = *(_DWORD *)(v2 + 88);
        v135 = *(_DWORD *)(v2 + 148);
        v136 = v106 + v135;
        v137 = *v88;
        v138 = 0;
        v126 = v99;
        ms_exc.registration.TryLevel = 1;
        v105((struct BLTINFO *)&v126, (unsigned int)v84, v143, v30);
        goto LABEL_44;
      }
      v15 = v102;
      goto LABEL_21;
    }
LABEL_26:
    v17 = *(XLATEOBJ **)(v2 + 172);
    v99 = v17;
    v18 = *(void (__stdcall ***)(unsigned int *, unsigned int *, unsigned int *, unsigned int))(v2 + 64);
    v84 = v18;
    if ( v17 )
    {
      v114 = (char *)v143 + v83;
      v113 = v107;
      v115 = 1;
      v118 = v18;
      v116 = v106;
      v117 = 1;
      v119 = 1;
      v120 = 1;
      v121 = *(_DWORD *)(v2 + 148);
      v122 = v106 + v121;
      v123 = v95;
      v124 = 1;
      v112 = *(_DWORD *)(v2 + 32);
      v19 = 4 * (*(_DWORD *)(*(_DWORD *)(v2 + 20) + 60) | (8 * (_DWORD)v101[15]));
      if ( (*(_BYTE *)(v112 + 4) & 1) != 0 )
        ++v19;
      v80 = (&SrcCopyFunctionTable)[v19];
      v17 = v99;
      v18 = v84;
    }
    v128 = v10;
    v127 = (char *)&v141[v83];
    v129 = 1;
    v132 = (void (__stdcall *)(struct BLTINFO *, unsigned int, unsigned int *, char))v18;
    v130 = v106;
    v131 = 1;
    v133 = 1;
    v134 = 1;
    v135 = v95;
    v136 = v106 + v95;
    v137 = *v88;
    v138 = 0;
    v126 = xloIdent;
    v20 = v101;
    if ( !v110 )
      v81 = off_24C60C[4 * ((unsigned int)v101[15] | (8 * (_DWORD)v101[15]))];
    if ( !*(_DWORD *)(v2 + 180) )
    {
      v101 = (&RopFunctionTable)[*(_BYTE *)(v2 + 188) & 0xF];
      v107 = v100;
      for ( i = v98; ; v128 = i )
      {
        v110 = i;
        if ( !v107-- )
          return;
        if ( *(_DWORD *)(v2 + 172) )
        {
          ms_exc.registration.TryLevel = 2;
          ((void (__stdcall *)(int *))v80)(&v112);
          ms_exc.registration.TryLevel = -2;
          v113 += *(_DWORD *)(v2 + 84);
        }
        ms_exc.registration.TryLevel = 3;
        ((void (__stdcall *)(unsigned __int8 *, int, _DWORD *, unsigned int))v101)(v141, v110 + 4 * v89, v143, v103);
        ms_exc.registration.TryLevel = -2;
        if ( !*(_DWORD *)(v2 + 184) )
        {
          ms_exc.registration.TryLevel = 4;
          v81((int)&v126);
          ms_exc.registration.TryLevel = -2;
          goto LABEL_39;
        }
        ms_exc.registration.TryLevel = 5;
        v94((struct BLTINFO *)&v126, (struct _BLTLNK_MASKINFO *)v79, v140, 0);
        ms_exc.registration.TryLevel = -2;
        if ( *(int *)(v2 + 64) <= 0 )
        {
          if ( !v111 )
          {
            v111 = *(_DWORD *)(v2 + 132) - 1;
            v79[0] = *(_DWORD *)(v2 + 48) + v111 * *(_DWORD *)(v2 + 80);
            goto LABEL_39;
          }
          --v111;
          v42 = *(_DWORD *)(v2 + 96) + v79[0];
        }
        else
        {
          ++v111;
          v79[0] += *(_DWORD *)(v2 + 96);
          if ( v111 < *(_DWORD *)(v2 + 132) )
            goto LABEL_39;
          v111 = 0;
          v42 = *(_DWORD *)(v2 + 48);
        }
        v79[0] = v42;
LABEL_39:
        i = *(_DWORD *)(v2 + 88) + v110;
      }
    }
    if ( !*(_DWORD *)(v2 + 176) )
    {
      v101 = (&RopFunctionTable)[*(_DWORD *)(v2 + 168) & 0xF];
      if ( !v108 )
      {
        if ( v20[15] == (void (__stdcall *)(unsigned int *, unsigned int *, unsigned int *, unsigned int))5 )
        {
          v44 = (char *)v142 + v83;
          v45 = v106;
          if ( v106 )
          {
            v99 = (XLATEOBJ *)(v93 >> 8);
            v46 = HIWORD(v93);
            v47 = v93 >> 8;
            do
            {
              *v44 = v93;
              v44[1] = v47;
              v44[2] = v46;
              v44 += 3;
              --v45;
            }
            while ( v45 );
          }
        }
        else
        {
          for ( j = v103; j; v142[j] = v93 )
            --j;
        }
      }
      for ( k = v98; ; v128 = k )
      {
        v110 = k;
        if ( !v100-- )
          return;
        if ( *(_DWORD *)(v2 + 172) )
        {
          ms_exc.registration.TryLevel = 6;
          ((void (__stdcall *)(int *))v80)(&v112);
          ms_exc.registration.TryLevel = -2;
          v113 += *(_DWORD *)(v2 + 84);
        }
        if ( v108 )
        {
          ms_exc.registration.TryLevel = 7;
          v92((unsigned __int8 *)v142 + v90, v95, (const unsigned __int8 *)v108, v96, v97, v106, v85);
          ms_exc.registration.TryLevel = -2;
          if ( *(_DWORD *)(v2 + 64) == 1 )
          {
            ++v109;
            v108 += *(_DWORD *)(v2 + 92);
            if ( v109 >= v87 )
            {
              v109 = 0;
              v108 = *(_DWORD *)(v2 + 52);
            }
          }
          else
          {
            v50 = *(_DWORD *)(v82 + 76);
            if ( v109 )
            {
              --v109;
              v108 -= v50;
            }
            else
            {
              v109 = v87 - 1;
              v108 = *(_DWORD *)(v2 + 52) + (v87 - 1) * v50;
            }
          }
        }
        ((void (__stdcall *)(unsigned __int8 *, _DWORD *, _DWORD *, unsigned int, XLATEOBJ **))v101)(
          v141,
          v142,
          v143,
          v103,
          v77);
        if ( !*(_DWORD *)(v2 + 184) )
        {
          ms_exc.registration.TryLevel = 8;
          v77 = &v126;
          ((void (*)(void))v81)();
          ms_exc.registration.TryLevel = -2;
          goto LABEL_162;
        }
        ms_exc.registration.TryLevel = 9;
        v77 = 0;
        ((void (__stdcall *)(XLATEOBJ **, _DWORD *, _DWORD *))v94)(&v126, v79, v143);
        ms_exc.registration.TryLevel = -2;
        if ( *(int *)(v2 + 64) <= 0 )
        {
          if ( !v111 )
          {
            v111 = *(_DWORD *)(v2 + 132) - 1;
            v79[0] = *(_DWORD *)(v2 + 48) + v111 * *(_DWORD *)(v2 + 80);
            goto LABEL_162;
          }
          --v111;
          v51 = *(_DWORD *)(v2 + 96) + v79[0];
        }
        else
        {
          ++v111;
          v79[0] += *(_DWORD *)(v2 + 96);
          if ( v111 < *(_DWORD *)(v2 + 132) )
            goto LABEL_162;
          v111 = 0;
          v51 = *(_DWORD *)(v2 + 48);
        }
        v79[0] = v51;
LABEL_162:
        k = *(_DWORD *)(v2 + 88) + v110;
      }
    }
    if ( !v17 )
    {
      if ( !v108 )
      {
        if ( v101[15] == (void (__stdcall *)(unsigned int *, unsigned int *, unsigned int *, unsigned int))5 )
        {
          v53 = (char *)v142 + v83;
          v54 = v106;
          if ( v106 )
          {
            v99 = (XLATEOBJ *)(v93 >> 8);
            v55 = HIWORD(v93);
            v56 = v93 >> 8;
            do
            {
              *v53 = v93;
              v53[1] = v56;
              v53[2] = v55;
              v53 += 3;
              --v54;
            }
            while ( v54 );
          }
        }
        else
        {
          for ( m = v103; m; v142[m] = v93 )
            --m;
        }
      }
      v101 = (&RopFunctionTable)[*(_DWORD *)(v2 + 164) & 0xF];
      v107 = v100;
      for ( n = v98; ; v128 = n )
      {
        v110 = n;
        if ( !v107-- )
          return;
        if ( *(_DWORD *)(v2 + 180) && v108 )
        {
          ms_exc.registration.TryLevel = 10;
          v92((unsigned __int8 *)v142 + v90, v95, (const unsigned __int8 *)v108, v96, v97, v106, v85);
          ms_exc.registration.TryLevel = -2;
          if ( *(_DWORD *)(v2 + 64) == 1 )
          {
            ++v109;
            v108 += *(_DWORD *)(v2 + 92);
            if ( v109 >= v87 )
            {
              v109 = 0;
              v108 = *(_DWORD *)(v2 + 52);
            }
          }
          else
          {
            v59 = *(_DWORD *)(v82 + 76);
            if ( v109 )
            {
              --v109;
              v108 -= v59;
            }
            else
            {
              v109 = v87 - 1;
              v108 = *(_DWORD *)(v2 + 52) + (v87 - 1) * v59;
            }
          }
        }
        ms_exc.registration.TryLevel = 11;
        ((void (__stdcall *)(unsigned __int8 *, int, _DWORD *, unsigned int, XLATEOBJ **))v101)(
          v141,
          v110 + 4 * v89,
          v142,
          v103,
          v77);
        ms_exc.registration.TryLevel = -2;
        if ( !*(_DWORD *)(v2 + 184) )
        {
          ms_exc.registration.TryLevel = 12;
          v77 = &v126;
          ((void (*)(void))v81)();
          ms_exc.registration.TryLevel = -2;
          goto LABEL_191;
        }
        ms_exc.registration.TryLevel = 13;
        v77 = 0;
        ((void (__stdcall *)(XLATEOBJ **, _DWORD *, _DWORD *))v94)(&v126, v79, v143);
        ms_exc.registration.TryLevel = -2;
        if ( *(int *)(v2 + 64) <= 0 )
        {
          if ( !v111 )
          {
            v111 = *(_DWORD *)(v2 + 132) - 1;
            v79[0] = *(_DWORD *)(v2 + 48) + v111 * *(_DWORD *)(v2 + 80);
            goto LABEL_191;
          }
          --v111;
          v60 = *(_DWORD *)(v2 + 96) + v79[0];
        }
        else
        {
          ++v111;
          v79[0] += *(_DWORD *)(v2 + 96);
          if ( v111 < *(_DWORD *)(v2 + 132) )
            goto LABEL_191;
          v111 = 0;
          v60 = *(_DWORD *)(v2 + 48);
        }
        v79[0] = v60;
LABEL_191:
        n = *(_DWORD *)(v2 + 88) + v110;
      }
    }
    v61 = *(unsigned __int8 *)(v2 + 188);
    v101 = (&RopFunctionTable)[*(_BYTE *)(v2 + 188) & 0xF];
    v84 = (&RopFunctionTable)[v61 >> 4];
    v107 = v100;
    for ( ii = v98; ; v128 = ii )
    {
      v110 = ii;
      if ( !v107-- )
        return;
      ms_exc.registration.TryLevel = 14;
      ((void (__stdcall *)(int *))v80)(&v112);
      ms_exc.registration.TryLevel = -2;
      v113 += *(_DWORD *)(v2 + 84);
      v99 = (XLATEOBJ *)(v110 + 4 * v89);
      ms_exc.registration.TryLevel = 15;
      ((void (__stdcall *)(unsigned __int8 *, XLATEOBJ *, _DWORD *, unsigned int, XLATEOBJ **))v101)(
        v140,
        v99,
        v143,
        v103,
        v77);
      ((void (__stdcall *)(_DWORD *, XLATEOBJ *, _DWORD *, unsigned int))v84)(v142, v99, v143, v103);
      ms_exc.registration.TryLevel = -2;
      if ( v108 )
      {
        ms_exc.registration.TryLevel = 16;
        v92((unsigned __int8 *)v143 + v90, v95, (const unsigned __int8 *)v108, v96, v97, v106, v85);
        ms_exc.registration.TryLevel = -2;
        if ( *(_DWORD *)(v2 + 64) == 1 )
        {
          ++v109;
          v108 += *(_DWORD *)(v2 + 92);
          if ( v109 >= v87 )
          {
            v109 = 0;
            v108 = *(_DWORD *)(v2 + 52);
          }
        }
        else
        {
          v64 = *(_DWORD *)(v82 + 76);
          if ( v109 )
          {
            --v109;
            v108 -= v64;
          }
          else
          {
            v109 = v87 - 1;
            v108 = *(_DWORD *)(v2 + 52) + (v87 - 1) * v64;
          }
        }
        v98 = v103;
        if ( v103 )
        {
          v65 = 0;
          v66 = v103;
          do
          {
            *(_DWORD *)&v141[v65 * 4] = v143[v65] & v142[v65] | ~v143[v65] & *(_DWORD *)&v140[v65 * 4];
            ++v65;
            --v66;
          }
          while ( v66 );
LABEL_217:
          v2 = v91;
        }
      }
      else
      {
        if ( *(_DWORD *)(*(_DWORD *)(v2 + 16) + 60) != 5 )
        {
          v67 = v103;
          if ( !v103 )
            goto LABEL_218;
          v68 = ~v93;
          v69 = 0;
          do
          {
            *(_DWORD *)&v141[v69 * 4] = v93 & v142[v69] | v68 & *(_DWORD *)&v140[v69 * 4];
            ++v69;
            --v67;
          }
          while ( v67 );
          goto LABEL_217;
        }
        v99 = (XLATEOBJ *)((char *)v143 + v83);
        v70 = v106;
        if ( v106 )
        {
          v86 = v93 >> 8;
          v71 = HIWORD(v93);
          v72 = v99;
          v73 = v93 >> 8;
          do
          {
            LOBYTE(v72->iUniq) = v93;
            BYTE1(v72->iUniq) = v73;
            BYTE2(v72->iUniq) = v71;
            v72 = (XLATEOBJ *)((char *)v72 + 3);
            --v70;
          }
          while ( v70 );
          v2 = v91;
        }
        v98 = v103;
        if ( v103 )
        {
          v74 = 0;
          v75 = v103;
          do
          {
            *(_DWORD *)&v141[v74 * 4] = v143[v74] & v142[v74] | ~v143[v74] & *(_DWORD *)&v140[v74 * 4];
            ++v74;
            --v75;
          }
          while ( v75 );
          goto LABEL_217;
        }
      }
LABEL_218:
      if ( !*(_DWORD *)(v2 + 184) )
      {
        ms_exc.registration.TryLevel = 17;
        v77 = &v126;
        ((void (*)(void))v81)();
        ms_exc.registration.TryLevel = -2;
        goto LABEL_227;
      }
      ms_exc.registration.TryLevel = 18;
      v77 = 0;
      ((void (__stdcall *)(XLATEOBJ **, _DWORD *, _DWORD *))v94)(&v126, v79, v143);
      ms_exc.registration.TryLevel = -2;
      if ( *(int *)(v2 + 64) <= 0 )
      {
        if ( !v111 )
        {
          v111 = *(_DWORD *)(v2 + 132) - 1;
          v79[0] = *(_DWORD *)(v2 + 48) + v111 * *(_DWORD *)(v2 + 80);
          goto LABEL_227;
        }
        --v111;
        v76 = *(_DWORD *)(v2 + 96) + v79[0];
      }
      else
      {
        ++v111;
        v79[0] += *(_DWORD *)(v2 + 96);
        if ( v111 < *(_DWORD *)(v2 + 132) )
          goto LABEL_227;
        v111 = 0;
        v76 = *(_DWORD *)(v2 + 48);
      }
      v79[0] = v76;
LABEL_227:
      ii = *(_DWORD *)(v2 + 88) + v110;
    }
  }
  v128 = v10;
  v127 = (char *)v107;
  v129 = 1;
  v132 = v105;
  v130 = v106;
  v131 = v100;
  v133 = *(_DWORD *)(v2 + 84);
  v134 = *(_DWORD *)(v2 + 88);
  v135 = *(_DWORD *)(v2 + 148);
  v136 = v106 + v135;
  v137 = *v88;
  v138 = 0;
  v126 = xloIdent;
  ms_exc.registration.TryLevel = 0;
  v94((struct BLTINFO *)&v126, (struct _BLTLNK_MASKINFO *)v79, (unsigned __int8 *)v143, v141);
LABEL_44:
  ms_exc.registration.TryLevel = -2;
}
