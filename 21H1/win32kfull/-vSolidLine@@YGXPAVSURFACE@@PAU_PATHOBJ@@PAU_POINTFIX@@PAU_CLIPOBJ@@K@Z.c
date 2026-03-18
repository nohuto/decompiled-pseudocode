/*
 * XREFs of ?vSolidLine@@YGXPAVSURFACE@@PAU_PATHOBJ@@PAU_POINTFIX@@PAU_CLIPOBJ@@K@Z @ 0xBE23C
 * Callers:
 *     _EngLineTo@36 @ 0xBDF44 (_EngLineTo@36.c)
 *     _EngStrokePath@32 @ 0x1EB539 (_EngStrokePath@32.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YGHXZ @ 0x9591E (-bUMPDSecurityGateEx@@YGHXZ.c)
 *     ?vDrawLine@@YGXPAU_POINTFIX@@0PAEJKPAU_RECTL@@KPAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0xBE39A (-vDrawLine@@YGXPAU_POINTFIX@@0PAEJKPAU_RECTL@@KPAU_W32KCDD_ENG_CALLBACKS@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __userpurge vSolidLine(
        EPATHOBJ *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct SURFACE *a3,
        struct _PATHOBJ *a4,
        unsigned int a5,
        struct _CLIPOBJ *a6,
        unsigned int a7)
{
  EPATHOBJ *v7; // edi
  unsigned int v8; // esi
  int v9; // ebx
  FLONG v10; // ecx
  FLONG v11; // esi
  int *p_cCurves; // eax
  unsigned int v13; // esi
  int v14; // ebx
  unsigned int v15; // ebx
  int v16; // ecx
  int v17; // eax
  ULONG count; // edx
  ULONG v19; // edi
  POINTFIX *pptfx; // ecx
  unsigned int v21; // [esp+0h] [ebp-90h]
  struct _W32KCDD_ENG_CALLBACKS *v22; // [esp+4h] [ebp-8Ch]
  int *v23; // [esp+Ch] [ebp-84h]
  POINTFIX *v24; // [esp+10h] [ebp-80h]
  unsigned int v25; // [esp+14h] [ebp-7Ch]
  struct _RECTL *v26; // [esp+18h] [ebp-78h]
  struct _POINTFIX *v27; // [esp+1Ch] [ebp-74h]
  struct _POINTFIX *v28; // [esp+20h] [ebp-70h]
  struct _PATHDATA v29; // [esp+24h] [ebp-6Ch] BYREF
  EPATHOBJ *v30; // [esp+30h] [ebp-60h]
  FIX x; // [esp+34h] [ebp-5Ch]
  FIX y; // [esp+38h] [ebp-58h]
  POINTFIX v33; // [esp+3Ch] [ebp-54h]
  int v34; // [esp+44h] [ebp-4Ch]
  int cCurves; // [esp+48h] [ebp-48h] BYREF
  struct _PATHOBJ v36; // [esp+4Ch] [ebp-44h]
  FLONG fl; // [esp+54h] [ebp-3Ch]
  FLONG v38; // [esp+58h] [ebp-38h]
  int v39; // [esp+5Ch] [ebp-34h]
  FLONG v40; // [esp+60h] [ebp-30h]
  ULONG v41; // [esp+64h] [ebp-2Ch]
  int v42; // [esp+68h] [ebp-28h]
  FLONG v43; // [esp+6Ch] [ebp-24h]
  ULONG v44; // [esp+70h] [ebp-20h]
  FLONG v45; // [esp+74h] [ebp-1Ch]
  FLONG v46; // [esp+78h] [ebp-18h]
  int v47; // [esp+7Ch] [ebp-14h]
  FLONG v48; // [esp+80h] [ebp-10h]
  ULONG v49; // [esp+84h] [ebp-Ch]

  v7 = a1;
  v30 = a1;
  v29.count = 0;
  v29.pptfx = 0;
  v33.x = 0;
  v33.y = 0;
  x = 0;
  y = 0;
  v23 = 0;
  v8 = a2[15];
  v27 = (struct _POINTFIX *)a2[13];
  v28 = (struct _POINTFIX *)a2[12];
  v25 = v8;
  v26 = (struct _RECTL *)a2[111];
  switch ( v8 )
  {
    case 1u:
      v9 = -(a5 != 0);
      goto LABEL_8;
    case 2u:
      v15 = (16 * a5) | a5;
      goto LABEL_21;
    case 3u:
      v15 = a5;
LABEL_21:
      v14 = (v15 << 8) | v15;
      goto LABEL_22;
    case 4u:
      v14 = a5;
LABEL_22:
      v9 = (v14 << 16) | v14;
      goto LABEL_8;
  }
  if ( (v8 <= 4 || v8 > 6) && bUMPDSecurityGateEx() )
  {
    if ( gfUMPDDebug )
      _DbgPrint(
        "clientcore\\windows\\core\\ntgdi\\gre\\windows\\solline.cxx:%d:vSolidLine:Invalid surface format.\n",
        178);
    return;
  }
  v9 = a5;
LABEL_8:
  if ( a4 && LOBYTE(a4[2].cCurves) == 1 )
  {
    cCurves = a4->cCurves;
    v36 = a4[1];
    fl = a4[2].fl;
    v7 = v30;
    v39 = cCurves;
    v42 = cCurves;
    v47 = cCurves;
    v10 = 1 - a4[1].fl;
    v38 = a4[1].fl;
    v41 = a4[1].cCurves;
    v44 = v41;
    v49 = v41;
    v11 = 1 - a4[2].fl;
    v40 = a4[2].fl;
    p_cCurves = &cCurves;
    v43 = v11;
    v46 = v11;
    v8 = v25;
    v45 = v10;
    v48 = v10;
    v23 = &cCurves;
  }
  else
  {
    p_cCurves = 0;
  }
  v13 = v8 - 1;
  if ( v7 )
  {
    v16 = *((_DWORD *)v7 + 2);
    v29.flags = 0;
    *(_DWORD *)v7 &= ~8u;
    *(_DWORD *)(v16 + 52) = *(_DWORD *)(v16 + 20);
    do
    {
      v17 = EPATHOBJ::bEnum(v7, &v29);
      count = v29.count;
      v19 = v29.count;
      v34 = v17;
      if ( !v29.count )
        break;
      pptfx = v29.pptfx;
      if ( (v29.flags & 1) != 0 )
      {
        v33 = *v29.pptfx;
        v24 = v29.pptfx + 1;
        v19 = v29.count - 1;
      }
      else
      {
        v24 = v29.pptfx;
      }
      if ( v19 )
      {
        do
        {
          vDrawLine(v28, v27, (unsigned __int8 *)v9, (int)v23, v13, v26, v21, v22);
          ++v24;
          --v19;
        }
        while ( v19 );
        pptfx = v29.pptfx;
        count = v29.count;
      }
      x = pptfx[count - 1].x;
      y = pptfx[count - 1].y;
      if ( (v29.flags & 8) != 0 )
        vDrawLine(v28, v27, (unsigned __int8 *)v9, (int)v23, v13, v26, v21, v22);
      v7 = v30;
    }
    while ( v34 );
  }
  else
  {
    vDrawLine(v28, v27, (unsigned __int8 *)v9, (int)p_cCurves, v13, v26, v21, v22);
  }
}
