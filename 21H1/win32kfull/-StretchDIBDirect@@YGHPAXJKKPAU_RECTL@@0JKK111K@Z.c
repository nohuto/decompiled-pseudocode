/*
 * XREFs of ?StretchDIBDirect@@YGHPAXJKKPAU_RECTL@@0JKK111K@Z @ 0x4916C
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 * Callees:
 *     ?vDirectStretch32@@YGXPAU_STR_BLT@@@Z @ 0x49530 (-vDirectStretch32@@YGXPAU_STR_BLT@@@Z.c)
 *     _GreAssertSystemCriticalProcess@4 @ 0xB5596 (_GreAssertSystemCriticalProcess@4.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _vDirectStretch8@4 @ 0xF95D4 (_vDirectStretch8@4.c)
 *     ?vDirectStretch16@@YGXPAU_STR_BLT@@@Z @ 0x246BFE (-vDirectStretch16@@YGXPAU_STR_BLT@@@Z.c)
 *     ?vDirectStretch8Narrow@@YGXPAU_STR_BLT@@@Z @ 0x246D7D (-vDirectStretch8Narrow@@YGXPAU_STR_BLT@@@Z.c)
 */

int __userpurge StretchDIBDirect@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        void *a3,
        int a4,
        _DWORD *a5,
        unsigned int a6,
        struct _RECTL *a7,
        void *a8,
        int a9,
        _DWORD *a10,
        LONG *a11,
        struct _RECTL *a12,
        struct _RECTL *a13,
        struct _RECTL *a14,
        unsigned int a15)
{
  LONG v15; // ebx
  int v16; // eax
  LONG v17; // esi
  signed int v18; // ecx
  ULONG v19; // edi
  __int64 v20; // kr00_8
  unsigned __int64 v21; // kr08_8
  int v22; // edx
  LONG v23; // eax
  LONG left; // ecx
  LONG right; // ecx
  int v26; // ecx
  ULONG v27; // ebx
  LARGE_INTEGER v28; // rax
  _DWORD *v29; // ebx
  LONG top; // eax
  int v31; // ecx
  int v32; // ebx
  int v33; // edx
  LONG v34; // edi
  void (__stdcall *v35)(struct _STR_BLT *); // eax
  LONG v36; // eax
  LONG *v37; // edx
  ULONG HighPart; // ecx
  LARGE_INTEGER v40; // kr20_8
  int v41; // edx
  ULONG v42; // ecx
  unsigned __int64 v43; // rax
  int v44; // edi
  LONG v45; // edi
  int v46; // edx
  int v47; // ecx
  unsigned __int64 v48; // rax
  signed int v49; // ebx
  LARGE_INTEGER v50; // [esp-10h] [ebp-FCh]
  LARGE_INTEGER v51; // [esp-10h] [ebp-FCh]
  LARGE_INTEGER v52; // [esp-10h] [ebp-FCh]
  LARGE_INTEGER v53; // [esp-10h] [ebp-FCh]
  _DWORD v54[14]; // [esp+10h] [ebp-DCh] BYREF
  LONG *v55; // [esp+48h] [ebp-A4h]
  unsigned int v56; // [esp+4Ch] [ebp-A0h]
  int v57; // [esp+50h] [ebp-9Ch]
  int v58; // [esp+54h] [ebp-98h]
  unsigned int v59; // [esp+58h] [ebp-94h]
  struct _RECTL *v60; // [esp+5Ch] [ebp-90h]
  int v61; // [esp+60h] [ebp-8Ch]
  int v62; // [esp+64h] [ebp-88h]
  int v63; // [esp+68h] [ebp-84h]
  LONG v64; // [esp+6Ch] [ebp-80h]
  LONG v65; // [esp+70h] [ebp-7Ch]
  LONG v66; // [esp+74h] [ebp-78h]
  unsigned int v67; // [esp+78h] [ebp-74h]
  unsigned int v68; // [esp+7Ch] [ebp-70h]
  LONG v69; // [esp+80h] [ebp-6Ch]
  _DWORD *v70; // [esp+84h] [ebp-68h]
  ULONG v71; // [esp+88h] [ebp-64h]
  ULONG v72; // [esp+8Ch] [ebp-60h]
  unsigned int v73; // [esp+90h] [ebp-5Ch]
  unsigned int v74; // [esp+94h] [ebp-58h]
  LONG v75; // [esp+98h] [ebp-54h]
  struct _RECTL *v76; // [esp+9Ch] [ebp-50h]
  int LowPart; // [esp+A0h] [ebp-4Ch]
  ULONG Divisor; // [esp+A4h] [ebp-48h]
  _DWORD *v79; // [esp+A8h] [ebp-44h]
  int v80; // [esp+ACh] [ebp-40h]
  int bottom; // [esp+B0h] [ebp-3Ch]
  LONG v82; // [esp+B4h] [ebp-38h]
  ULONG QuadPart; // [esp+B8h] [ebp-34h]
  int v84; // [esp+BCh] [ebp-30h]
  int v85; // [esp+C0h] [ebp-2Ch] BYREF
  int v86; // [esp+C4h] [ebp-28h]
  void *v87; // [esp+C8h] [ebp-24h]
  int v88; // [esp+CCh] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+D4h] [ebp-18h]

  v58 = a1;
  v57 = a2;
  v79 = a5;
  v59 = a6;
  v60 = a7;
  v70 = a10;
  v55 = a11;
  v76 = a12;
  v56 = (unsigned int)a13;
  v82 = a5[2];
  v15 = *a5;
  v69 = v15;
  Divisor = v82 - v15;
  v16 = a5[3];
  v17 = a5[1];
  v75 = v17;
  v71 = v16 - v17;
  v63 = a10[2];
  v84 = *a10;
  QuadPart = v63 - v84;
  v62 = a10[3];
  v80 = a10[1];
  v72 = v62 - v80;
  v66 = v15;
  v65 = v82;
  v64 = v17;
  bottom = v16;
  LowPart = 0;
  v61 = 0;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v18 = v82 - v15;
  if ( v82 - v15 <= 0 )
    return 1;
  if ( (int)v71 <= 0 )
    return 1;
  v19 = QuadPart;
  if ( (int)QuadPart <= 0 || (int)v72 <= 0 )
    return 1;
  if ( v18 <= 0x7FFF && (int)v71 <= 0x7FFF && (int)QuadPart <= 0x7FFF && (int)v72 <= 0x7FFF )
  {
    if ( !v76 )
    {
      v76 = (struct _RECTL *)&v85;
      v87 = a3;
      v86 = 0;
      v88 = a4;
    }
    v50.HighPart = QuadPart - 1;
    v50.LowPart = -1;
    v20 = *(_QWORD *)&RtlExtendedLargeIntegerDivide(v50, v18, 0) + 1LL;
    v74 = HIDWORD(v20);
    v68 = v20;
    v51.HighPart = v72 - 1;
    v51.LowPart = -1;
    v21 = *(_QWORD *)&RtlExtendedLargeIntegerDivide(v51, v71, 0) + 1LL;
    v73 = HIDWORD(v21);
    v67 = v21;
    v22 = v84;
    if ( v84 >= 0 && v63 <= (int)a8 )
      goto LABEL_13;
    LowPart = 1;
    v52.HighPart = Divisor;
    v52.LowPart = 0;
    v40 = RtlExtendedLargeIntegerDivide(v52, QuadPart, 0);
    HighPart = v40.HighPart;
    Divisor = HIDWORD(v40.QuadPart);
    QuadPart = v40.QuadPart;
    v22 = v84;
    if ( v84 < 0 )
    {
      v41 = -v84;
      if ( (int)(v19 + v84) <= 0 )
        return 1;
      v42 = Divisor * v41;
      v43 = QuadPart * (unsigned __int64)(unsigned int)v41;
      HIDWORD(v43) += v42;
      v84 = 0;
      v15 += (v43 + 0x7FFFFFFF) >> 32;
      v69 = v15;
      v66 = v15;
      v22 = 0;
      HighPart = Divisor;
    }
    if ( v63 <= (int)a8 )
    {
LABEL_13:
      v23 = v82;
    }
    else
    {
      v44 = v19 - (v63 - (_DWORD)a8);
      if ( v44 <= 0 )
        return 1;
      v23 = ((__PAIR64__(HighPart, QuadPart) * (unsigned int)v44 + 0x7FFFFFFF) >> 32) + *v79;
      v82 = v23;
      v65 = v23;
      v22 = v84;
    }
    left = v76->left;
    if ( v15 < v76->left )
    {
      v15 = v76->left;
      v69 = v76->left;
      v66 = left;
    }
    right = v76->right;
    if ( v23 > right )
    {
      v23 = v76->right;
      v82 = v23;
      v65 = right;
    }
    if ( v23 <= v15 )
      return 1;
    v26 = v15 - *v79;
    if ( LowPart || v26 )
    {
      v27 = ((v74 << 31) | (v68 >> 1)) + v68 * v26;
      v84 = ((__PAIR64__(v74 >> 1, (v74 << 31) | (v68 >> 1)) + __PAIR64__(v74, v68) * (unsigned int)v26) >> 32) + *v70;
      v17 = v75;
    }
    else
    {
      v27 = (v74 << 31) | (v68 >> 1);
      v84 = (v74 >> 1) + v22;
    }
    QuadPart = v27;
    v28.HighPart = v80;
    if ( v80 >= 0 && v62 <= a9 )
      goto LABEL_24;
    v61 = 1;
    v53.HighPart = v71;
    v53.LowPart = 0;
    v28 = RtlExtendedLargeIntegerDivide(v53, v72, 0);
    v45 = v28.HighPart;
    LowPart = v28.LowPart;
    v28.HighPart = v80;
    if ( v80 < 0 )
    {
      v46 = -v80;
      if ( (int)(v72 + v80) <= 0 )
        return 1;
      v47 = v45 * v46;
      v48 = (unsigned int)LowPart * (unsigned __int64)(unsigned int)v46;
      HIDWORD(v48) += v47;
      v80 = 0;
      v17 += (v48 + 0x7FFFFFFF) >> 32;
      v75 = v17;
      v64 = v17;
      v28.QuadPart = (unsigned int)LowPart;
    }
    if ( v62 <= a9 )
    {
LABEL_24:
      v29 = v79;
LABEL_25:
      top = v76->top;
      if ( v17 < top )
      {
        v17 = v76->top;
        v75 = v17;
        v64 = top;
      }
      if ( bottom > v76->bottom )
        bottom = v76->bottom;
      if ( bottom > v17 )
      {
        v31 = v17 - v29[1];
        if ( v61 || v31 )
        {
          v32 = ((v73 << 31) | (v67 >> 1)) + v67 * v31;
          v33 = ((__PAIR64__(v73 >> 1, (v73 << 31) | (v67 >> 1)) + __PAIR64__(v73, v67) * (unsigned int)v31) >> 32)
              + v70[1];
          v17 = v75;
        }
        else
        {
          v32 = (v73 << 31) | (v67 >> 1);
          v33 = (v73 >> 1) + v28.HighPart;
        }
        v54[0] = v59 + v33 * (_DWORD)v60;
        v54[3] = v57 + v17 * v58;
        v54[1] = v60;
        v54[2] = v84;
        v34 = v69;
        v54[5] = v69;
        v54[4] = v58;
        v54[6] = v82;
        v54[7] = bottom - v17;
        v54[8] = v74;
        v54[9] = v68;
        v54[10] = v73;
        v54[11] = v67;
        v54[12] = QuadPart;
        v54[13] = v32;
        v35 = (void (__stdcall *)(struct _STR_BLT *))(&pfnStrArray)[v56 | (8 * (v82 - v69 < 7))];
        ms_exc.registration.TryLevel = 0;
        v35((struct _STR_BLT *)v54);
        ms_exc.registration.TryLevel = -2;
        v36 = v82;
        v37 = v55;
        *v55 = v34;
        v37[2] = v36;
        v37[1] = v17;
        v37[3] = bottom;
      }
      return 1;
    }
    v49 = v72 - (v62 - a9);
    if ( v49 > 0 )
    {
      v28.QuadPart = __PAIR64__(v45, v28.LowPart) * (unsigned int)v49 + 0x7FFFFFFF;
      v29 = v79;
      bottom = v28.HighPart + v79[1];
      v28.HighPart = v80;
      goto LABEL_25;
    }
    return 1;
  }
  return 0;
}
