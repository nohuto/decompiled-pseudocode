/*
 * XREFs of ?bLines@@YGHPAU_BMINFO@@PAU_POINTFIX@@1PAU_RUN@@KPAU_LINESTATE@@PAU_RECTL@@PAP6GXPAU_STRIP@@03@ZKPAKJPAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x23F480
 * Callers:
 *     ?bStrokeCosmetic@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@K@Z @ 0x1EAFDB (-bStrokeCosmetic@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@K@Z.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YGHXZ @ 0x9591E (-bUMPDSecurityGateEx@@YGHXZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     __aulldiv @ 0xF91F1 (__aulldiv.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _RtlEnlargedUnsignedDivide@16 @ 0x238817 (_RtlEnlargedUnsignedDivide@16.c)
 */

int __userpurge bLines@<eax>(
        int *a1@<edx>,
        unsigned int a2@<ecx>,
        struct _BMINFO *a3,
        struct _POINTFIX *a4,
        struct _POINTFIX *a5,
        struct _RUN *a6,
        unsigned int a7,
        struct _LINESTATE *a8,
        unsigned int a9,
        void (__stdcall **a10)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *),
        unsigned int a11,
        unsigned int *a12,
        int a13,
        struct _W32KCDD_ENG_CALLBACKS *a14)
{
  struct _BMINFO *v16; // edx
  int v17; // ecx
  int v18; // eax
  int v19; // esi
  int v20; // edx
  unsigned int v21; // ebx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // edx
  int v26; // eax
  __int64 v27; // kr00_8
  unsigned int v28; // edx
  int v29; // ecx
  unsigned int v30; // esi
  int v31; // eax
  int v32; // esi
  unsigned int v33; // ecx
  unsigned int v34; // eax
  int v35; // eax
  unsigned int v36; // ecx
  unsigned int v37; // eax
  unsigned int v38; // edx
  int v39; // eax
  unsigned int v40; // esi
  int v41; // edx
  int v42; // edx
  signed int v43; // eax
  unsigned int v44; // ecx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  int v47; // eax
  unsigned int v48; // eax
  int v49; // edx
  int v50; // ecx
  struct _RUN *v51; // ecx
  LONG v52; // eax
  int *v53; // eax
  int v54; // edi
  int v55; // eax
  unsigned int v56; // edx
  void (__stdcall **v57)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *); // ecx
  int v58; // eax
  void (__stdcall **v59)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *); // eax
  ULONG v60; // esi
  ULONG *v61; // edx
  _DWORD *v62; // ecx
  unsigned int v63; // eax
  ULONG v64; // [esp+0h] [ebp-268h]
  ULONG *v65; // [esp+4h] [ebp-264h]
  struct _BMINFO *v66; // [esp+10h] [ebp-258h]
  int v67; // [esp+30h] [ebp-238h]
  int v68; // [esp+34h] [ebp-234h]
  unsigned int v69; // [esp+38h] [ebp-230h]
  __int64 v71; // [esp+48h] [ebp-220h]
  int v72; // [esp+50h] [ebp-218h]
  signed int v73; // [esp+58h] [ebp-210h]
  struct _BMINFO *v75; // [esp+60h] [ebp-208h]
  int v76; // [esp+64h] [ebp-204h]
  int v77; // [esp+6Ch] [ebp-1FCh]
  unsigned int v78; // [esp+70h] [ebp-1F8h]
  unsigned int v79; // [esp+74h] [ebp-1F4h]
  unsigned int v80; // [esp+74h] [ebp-1F4h]
  int v81; // [esp+78h] [ebp-1F0h]
  LONG v82; // [esp+78h] [ebp-1F0h]
  void (__stdcall *v83)(_DWORD *, unsigned int, struct _RUN *); // [esp+78h] [ebp-1F0h]
  signed int v84; // [esp+80h] [ebp-1E8h]
  int v85; // [esp+80h] [ebp-1E8h]
  int v86; // [esp+84h] [ebp-1E4h]
  int v87; // [esp+84h] [ebp-1E4h]
  int v88; // [esp+88h] [ebp-1E0h]
  int v89; // [esp+88h] [ebp-1E0h]
  unsigned int v90; // [esp+88h] [ebp-1E0h]
  unsigned int v91; // [esp+8Ch] [ebp-1DCh]
  int v92; // [esp+90h] [ebp-1D8h]
  int v93; // [esp+90h] [ebp-1D8h]
  unsigned int v94; // [esp+90h] [ebp-1D8h]
  int v95; // [esp+94h] [ebp-1D4h]
  LONG iStop; // [esp+94h] [ebp-1D4h]
  int v97; // [esp+94h] [ebp-1D4h]
  int v98; // [esp+98h] [ebp-1D0h]
  int v99; // [esp+98h] [ebp-1D0h]
  int v100; // [esp+9Ch] [ebp-1CCh]
  LONG iStart; // [esp+9Ch] [ebp-1CCh]
  int v102; // [esp+9Ch] [ebp-1CCh]
  LONG v103; // [esp+9Ch] [ebp-1CCh]
  char v104; // [esp+9Ch] [ebp-1CCh]
  int v105; // [esp+9Ch] [ebp-1CCh]
  int v106; // [esp+9Ch] [ebp-1CCh]
  _DWORD v107[105]; // [esp+A0h] [ebp-1C8h] BYREF
  _DWORD v108[3]; // [esp+244h] [ebp-24h] BYREF
  CPPEH_RECORD ms_exc; // [esp+250h] [ebp-18h]

  v75 = a3;
  if ( a2 <= (unsigned int)&off_268CE0 || !bUMPDSecurityGateEx() )
  {
    v66 = (struct _BMINFO *)((char *)a3 + 8 * (_DWORD)a5);
    v69 = 0;
    v68 = 0;
    v67 = 0;
    v78 = 0;
    v77 = 0;
    v71 = 0LL;
    v86 = 0;
    v76 = 0;
    v73 = 0;
    memset(v107, 0, sizeof(v107));
    v108[0] = a12;
    v108[1] = a10;
    v16 = a3;
LABEL_7:
    v17 = *a1;
    v18 = *(_DWORD *)v16;
    v92 = v18;
    v19 = a1[1];
    v20 = *((_DWORD *)v16 + 1);
    v21 = a9;
    if ( v18 < v17 )
    {
      v22 = v17;
      v17 = v92;
      v93 = v22;
      v23 = v19;
      v19 = v20;
      v20 = v23;
      v21 = a9 | 0x20;
      v18 = v93;
    }
    if ( v20 < v19 )
    {
      v19 = -v19;
      v20 = -v20;
      v21 |= 8u;
    }
    v24 = v18 - v17;
    v94 = v24;
    if ( v24 >= 0 )
    {
      v25 = v20 - v19;
      v91 = v25;
      if ( v25 >= 0 )
      {
        if ( v25 >= (unsigned int)v24 )
        {
          if ( v25 == v24 )
          {
            v21 |= 0x10u;
          }
          else
          {
            v94 = v25;
            v25 = v24;
            v91 = v24;
            v26 = v17;
            v17 = v19;
            v19 = v26;
            v21 |= 5u;
          }
        }
        v21 |= (unsigned int)(&gaflRound)[(v21 >> 2) & 7];
        v68 = v17 >> 4;
        v67 = v19 >> 4;
        v100 = v17 & 0xF;
        v95 = v19 & 0xF;
        v27 = (int)v94 * (__int64)(v95 + 8) - (v17 & 0xF) * (__int64)v25;
        if ( (v21 & 0x8000) != 0 )
          --v27;
        v78 = (unsigned __int64)v27 >> 4;
        v77 = SHIDWORD(v27) >> 4;
        v71 = ~(v27 >> 4);
        v28 = v91;
        v87 = ((_BYTE)v91 + (_BYTE)v95) & 0xF;
        v29 = v17 & 0xF;
        v98 = ((_BYTE)v100 + (_BYTE)v94) & 0xF;
        v30 = (v100 + v94) >> 4;
        v84 = v30;
        v81 = v21 & 0x20;
        if ( (v21 & 0x20) != 0 )
        {
          if ( (((_BYTE)v91 + (_BYTE)v95) & 0xF) != 0 )
          {
            v28 = v91;
            if ( v98 + abs32(v87 - 8) > 0x10 )
              goto LABEL_24;
          }
          else
          {
            v29 = v100;
            if ( v98 - (unsigned int)((v21 & 0x80) != 0) + 8 >= 0x10 )
LABEL_24:
              v84 = ++v30;
          }
          if ( (v21 & 0x90) == 0x10 )
          {
            if ( (((_BYTE)v91 + (_BYTE)v95) & 0xF) != 0 && v98 == v87 + 8 )
              v84 = v30 + 1;
            v31 = v95;
            if ( v95 && v29 == v95 + 8 )
            {
LABEL_31:
              v32 = 2;
              v33 = v28;
              goto LABEL_37;
            }
          }
          else
          {
            v31 = v95;
          }
          v32 = 1;
          if ( v31 )
          {
            v28 = v91;
            if ( v29 + abs32(v31 - 8) > 0x10 )
              goto LABEL_31;
            v33 = 0;
          }
          else
          {
            v34 = v29 - ((v21 & 0x80) != 0) + 8;
            v33 = v34 >= 0x10 ? v28 : 0;
            v32 = 2 - (v34 < 0x10);
          }
LABEL_37:
          v99 = 0;
          v35 = (__PAIR64__(v77, v78) + v33) >> 32;
          v36 = v78 + v33;
          if ( v35 >> 31 != -1 )
          {
            if ( __PAIR64__(v35, v36) >= 2 * v94 - v28 )
            {
              v99 = 2;
              v38 = v91;
            }
            else
            {
              v37 = v94 - v28;
              v38 = v91;
              v99 = v36 >= v37;
            }
LABEL_41:
            v39 = v99;
            goto LABEL_42;
          }
          v38 = v91;
          goto LABEL_68;
        }
        v40 = v30 - 1;
        v84 = v40;
        if ( (((_BYTE)v100 + (_BYTE)v94) & 0xF) != 0 )
        {
          if ( (((_BYTE)v91 + (_BYTE)v95) & 0xF) != 0 )
          {
            v41 = ((_BYTE)v100 + (_BYTE)v94) & 0xF;
            if ( (int)abs32(v87 - 8) <= v98 )
            {
LABEL_48:
              v40 = (v100 + v94) >> 4;
              v84 = v40;
            }
          }
          else
          {
            v41 = ((_BYTE)v100 + (_BYTE)v94) & 0xF;
            v29 = v100;
            if ( v98 - (unsigned int)((v21 & 0x80) != 0) + 8 >= 0x10 )
              goto LABEL_48;
          }
        }
        else
        {
          v41 = ((_BYTE)v100 + (_BYTE)v94) & 0xF;
        }
        if ( (v21 & 0x90) == 0x90 )
        {
          if ( v41 && v87 == v41 + 8 )
            v84 = v40 - 1;
          v42 = v95;
          if ( v29 && v95 == v29 + 8 )
          {
            v32 = 0;
            goto LABEL_64;
          }
        }
        else
        {
          v42 = v95;
        }
        v32 = 0;
        if ( v29 )
        {
          if ( v42 )
            v32 = (int)abs32(v42 - 8) <= v29;
          else
            v32 = (unsigned int)(((__PAIR64__(v29, 0) - ((unsigned __int8)v21 & 0x80)) >> 32) + 8) >= 0x10;
        }
LABEL_64:
        v99 = 0;
        v38 = v91;
        if ( v77 >= 0 )
        {
          if ( v78 < v94 - (v91 & -v32) )
            goto LABEL_41;
          v39 = 1;
          v99 = 1;
LABEL_42:
          v76 = v39;
          v86 = v32;
          v73 = v84;
          if ( v84 < v32 )
            goto LABEL_69;
          if ( (v21 & 0x40) != 0 )
          {
            v69 = v38;
            goto LABEL_71;
          }
LABEL_77:
          v44 = v91;
          goto LABEL_78;
        }
LABEL_68:
        v39 = 0;
        goto LABEL_42;
      }
    }
    while ( 1 )
    {
LABEL_69:
      if ( (v21 & 0x40) == 0 )
      {
        a1 = (int *)v75;
        v16 = (struct _BMINFO *)((char *)v75 + 8);
        v75 = v16;
        if ( v16 >= v66 )
          return 1;
        goto LABEL_7;
      }
      a5 = (struct _POINTFIX *)((char *)a5 - 1);
      if ( !a5 )
        return 1;
LABEL_71:
      v81 = v21 & 0x20;
      if ( (v21 & 0x20) != 0 )
      {
        v32 = v73 - a4->y;
        v43 = v73 - a4->x;
      }
      else
      {
        v32 = v86 + a4->x;
        v43 = v86 + a4->y;
      }
      v84 = v43;
      ++a4;
      v44 = v69;
      v91 = v69;
      a6[4].iStart = a6[4].iStop;
      v45 = __PAIR64__(v77, v78) + v69 * (unsigned __int64)(unsigned int)v32;
      if ( v45 >= 0xFFFFFFFF )
      {
        v99 = v45 / v94;
        goto LABEL_77;
      }
      v99 = (unsigned int)v45 / v94;
LABEL_78:
      if ( (v21 & 0x400) != 0 )
        break;
LABEL_111:
      v89 = v32 + v68;
      v55 = v67 + v99;
      v105 = v67 + v99;
      if ( (v21 & 5) != 0 )
      {
        v55 = v32 + v68;
        v105 = v32 + v68;
        v89 = v67 + v99;
      }
      if ( (v21 & 8) != 0 )
        v105 = -v55;
      v56 = v91;
      if ( 2 * v91 > v94 )
      {
        v21 |= 2u;
        v71 = __PAIR64__(v77, v78) - v94;
        v56 = v94 - v91;
        v91 = v94 - v91;
        v99 = v32 - v99;
      }
      v80 = v56;
      v107[1] = v21;
      v83 = (void (__stdcall *)(_DWORD *, unsigned int, struct _RUN *))*((_DWORD *)a8 + (v21 & 3));
      v107[4] = v89 & *(_DWORD *)(a2 + 20);
      v107[2] = a11;
      v57 = &a10[v105 * a11];
      v58 = *(_DWORD *)(a2 + 16);
      if ( v58 >= 0 )
        v59 = &v57[v89 >> v58];
      else
        v59 = (void (__stdcall **)(struct _STRIP *, struct _BMINFO *, struct _LINESTATE *))((char *)v57 + 3 * v89);
      v107[3] = v59;
      v106 = v84 - v32 + 1;
      v90 = 0;
      v97 = 0;
      v85 = 0;
      if ( v56 )
      {
        v60 = 1
            - v32
            + RtlEnlargedUnsignedDivide(
                (ULARGE_INTEGER)(v71 + v94 * (unsigned __int64)(unsigned int)(v99 + 1)),
                v64,
                v65);
        v97 = v94 / v91;
        v85 = v94 % v91;
      }
      else
      {
        v60 = 0x7FFFFFFF;
      }
      v61 = &v107[5];
      while ( 1 )
      {
        v72 = v106;
        v106 -= v60;
        v62 = v61 + 1;
        if ( v106 <= 0 )
          break;
        *v61++ = v60;
        if ( v62 == v108 )
        {
          v107[0] = v62 - &v107[5];
          ms_exc.registration.TryLevel = 0;
          v83(v107, a2, a6);
          ms_exc.registration.TryLevel = -2;
          v61 = &v107[5];
        }
        v60 = v97;
        v63 = v90 + v85;
        v90 = v63;
        if ( v63 >= v80 )
        {
          v90 = v63 - v80;
          v60 = v97 + 1;
        }
      }
      *v61 = v72;
      v107[0] = v62 - &v107[5];
      ms_exc.registration.TryLevel = 1;
      v83(v107, a2, a6);
      ms_exc.registration.TryLevel = -2;
    }
    iStop = a6[8].iStop;
    iStart = a6[9].iStart;
    v46 = __PAIR64__((unsigned int)a6, iStop);
    if ( (v21 & 5) != 0 )
    {
      iStop = a6[9].iStart;
      iStart = a6[8].iStop;
      v46 = __PAIR64__((unsigned int)a6, iStop);
    }
    if ( (_DWORD)v46 != iStart )
    {
      if ( v44 * (unsigned __int64)(unsigned int)iStart > v94 * (unsigned __int64)(unsigned int)iStop )
      {
        v46 = __PAIR64__(v77, v78) + v91 * (unsigned __int64)(unsigned int)v73;
        if ( v46 >= 0xFFFFFFFF )
          v46 /= v94;
        else
          LODWORD(v46) = (unsigned int)v46 / v94;
        iStop = iStart;
        HIDWORD(v46) = a6;
        a6[1].iStart = 0;
        a6[1].iStop = iStart;
        a6[2].iStart = iStart;
        v102 = v46 - v76;
        if ( !v81 )
        {
          LODWORD(v46) = v99 - v76;
LABEL_94:
          HIDWORD(v46) = *(_DWORD *)(HIDWORD(v46) + 32);
          v88 = HIDWORD(v46) + v46 * iStop;
          v79 = HIDWORD(v46) + iStop * (v102 + 1);
          a6[4].iStart = v79;
          v48 = a6[3].iStop;
          if ( v88 >= v48 )
            v88 %= v48;
          if ( v79 >= v48 )
            a6[4].iStart = v79 % v48;
          if ( v81 )
          {
            v49 = -v88;
            if ( v88 > 0 )
              v49 = v48 - v88;
            v103 = a6[6].iStop;
            v82 = a6[8].iStart == 0;
            v50 = v103 + 4 * a6[10].iStart;
          }
          else
          {
            v103 = a6[7].iStart;
            v82 = a6[8].iStart;
            v50 = v103 + 4 * a6[10].iStart;
            v49 = v88;
          }
          a6[7].iStop = v82;
          a6[5].iStart = v103;
          a6[5].iStop = v50 - 4;
          v51 = a6;
          v52 = a6[3].iStart;
          if ( v49 >= v52 )
          {
            v49 -= v52;
            if ( (a6[10].iStart & 1) != 0 )
            {
              a6[7].iStop = a6[7].iStop == 0;
              v51 = a6;
            }
          }
          v53 = (int *)a6[5].iStart;
          v104 = (char)v53;
          while ( 1 )
          {
            v51[6].iStart = (LONG)v53;
            v54 = *v53;
            if ( v49 < *v53 )
              break;
            v49 -= v54;
            ++v53;
          }
          v51[2].iStop = v54 - v49;
          if ( (((_BYTE)v53 - v104) & 4) != 0 )
            a6[7].iStop = a6[7].iStop == 0;
          goto LABEL_111;
        }
        v47 = v46 - v99;
LABEL_92:
        LODWORD(v46) = v47 + 1;
        goto LABEL_94;
      }
      v46 = __PAIR64__((unsigned int)a6, iStop);
    }
    *(_QWORD *)(HIDWORD(v46) + 8) = (unsigned int)v46;
    *(_DWORD *)(HIDWORD(v46) + 16) = v46;
    v102 = v73 - v86;
    if ( !v81 )
    {
      LODWORD(v46) = v32 - v86;
      v102 = v73 - v86;
      goto LABEL_94;
    }
    v47 = v73 - v32;
    goto LABEL_92;
  }
  if ( gfUMPDDebug )
    _DbgPrint("clientcore\\windows\\core\\ntgdi\\gre\\windows\\engline.cxx:%d:bLines:Invalid surface format.\n", 416);
  return 0;
}
