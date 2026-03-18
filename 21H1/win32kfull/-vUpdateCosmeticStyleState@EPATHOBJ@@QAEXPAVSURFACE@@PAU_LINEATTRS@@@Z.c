/*
 * XREFs of ?vUpdateCosmeticStyleState@EPATHOBJ@@QAEXPAVSURFACE@@PAU_LINEATTRS@@@Z @ 0x23848A
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _RtlEnlargedUnsignedDivide@16 @ 0x238817 (_RtlEnlargedUnsignedDivide@16.c)
 *     ?bInit@DDA_CLIPLINE@@QAEHPAU_POINTFIX@@0@Z @ 0x24939F (-bInit@DDA_CLIPLINE@@QAEHPAU_POINTFIX@@0@Z.c)
 */

void __thiscall EPATHOBJ::vUpdateCosmeticStyleState(EPATHOBJ *this, struct SURFACE *a2, struct _LINEATTRS *a3)
{
  int v4; // esi
  int v5; // esi
  _DWORD *v6; // eax
  unsigned int v7; // ebx
  PFLOAT_LONG pstyle; // edx
  union _FLOAT_LONG *i; // eax
  struct _POINTFIX *v10; // edi
  int v11; // ebx
  struct _POINTFIX *v12; // edx
  struct _POINTFIX *v13; // ecx
  struct _POINTFIX *v14; // edi
  int v15; // ecx
  FIX y; // eax
  int v17; // eax
  bool v18; // al
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  ULONG v22; // [esp+0h] [ebp-70h]
  ULONG *v23; // [esp+4h] [ebp-6Ch]
  unsigned int v24; // [esp+14h] [ebp-5Ch]
  int v25; // [esp+18h] [ebp-58h]
  unsigned int v26; // [esp+1Ch] [ebp-54h]
  struct _POINTFIX *v27; // [esp+20h] [ebp-50h]
  int v28; // [esp+24h] [ebp-4Ch]
  int v29; // [esp+28h] [ebp-48h]
  struct _POINTFIX *v30; // [esp+2Ch] [ebp-44h]
  int v31; // [esp+30h] [ebp-40h]
  FIX x; // [esp+34h] [ebp-3Ch]
  FIX v33; // [esp+34h] [ebp-3Ch]
  _DWORD v34[13]; // [esp+38h] [ebp-38h] BYREF

  memset(v34, 0, 0x30u);
  if ( (a3->fl & 2) != 0 )
  {
    v29 = 1;
    v28 = 1;
    v26 = 1;
    v4 = 2;
  }
  else
  {
    v5 = 0;
    v6 = (_DWORD *)*((_DWORD *)a2 + 7);
    v7 = v6[376];
    v29 = v6[374];
    v28 = v6[375];
    pstyle = a3->pstyle;
    v26 = v7;
    for ( i = &pstyle[a3->cstyle]; i > pstyle; v5 += i->e )
      --i;
    v4 = 2 * v7 * v5;
  }
  v25 = v4;
  v10 = *(struct _POINTFIX **)(*((_DWORD *)this + 2) + 24);
  v27 = v10;
  if ( (v10[1].x & 1) == 0 )
  {
    do
      v10 = (struct _POINTFIX *)v10->y;
    while ( (v10[1].x & 1) == 0 );
    v27 = v10;
  }
  v11 = 0;
  v31 = 0;
  if ( (v10[1].x & 4) == 0 )
  {
    v11 = LOWORD(a3->elStyleState.e) + v26 * HIWORD(a3->elStyleState.l);
    v31 = v11;
  }
  v12 = v10 + 2;
  v30 = v10 + 2;
  v13 = v10 + 3;
  while ( 2 )
  {
    v24 = (unsigned int)&v10[v10[1].y + 2];
    if ( (unsigned int)v13 >= v24 )
      goto LABEL_37;
    v14 = v13;
    do
    {
      if ( !DDA_CLIPLINE::bInit((DDA_CLIPLINE *)v34, v12, v14) )
        goto LABEL_35;
      x = v14->x;
      if ( v14->x - v30->x >= 0 )
        v15 = x - v30->x;
      else
        v15 = v30->x - x;
      y = v30->y;
      v33 = v14->y;
      if ( v33 - y >= 0 )
        v17 = v33 - y;
      else
        v17 = y - v33;
      if ( v29 == v28 )
      {
        v18 = v15 >= v17;
      }
      else
      {
        if ( (unsigned int)v29 * (unsigned __int64)(unsigned int)v15 >= (unsigned int)v28
                                                                      * (unsigned __int64)(unsigned int)v17 )
          goto LABEL_32;
        v18 = 0;
      }
      if ( !v18 )
      {
        if ( (v34[0] & 5) == 0 )
          goto LABEL_28;
        goto LABEL_33;
      }
LABEL_32:
      if ( (v34[0] & 5) != 0 )
      {
LABEL_28:
        v19 = v28;
        v20 = v34[11] - v34[9];
        goto LABEL_29;
      }
LABEL_33:
      v19 = v29;
      v20 = v34[10] - v34[8];
LABEL_29:
      v21 = v20 + 1;
      if ( (v21 & 0xFFFF0000) != 0 )
      {
        v4 = v25;
        RtlEnlargedUnsignedDivide(
          (ULARGE_INTEGER)(v11 + (unsigned int)v19 * (unsigned __int64)(unsigned int)v21),
          v22,
          v23);
        v11 = v31;
      }
      else
      {
        v11 += v19 * v21;
        v31 = v11;
        if ( v11 >= v4 )
        {
          v11 %= v4;
          v31 = v11;
        }
      }
LABEL_35:
      v12 = v14++;
      v30 = v12;
    }
    while ( (unsigned int)v14 < v24 );
    v10 = v27;
LABEL_37:
    v10 = (struct _POINTFIX *)v10->x;
    v27 = v10;
    if ( v10 )
    {
      v13 = v10 + 2;
      continue;
    }
    break;
  }
  a3->elStyleState.e = (unsigned __int16)(v11 % v26) | ((unsigned __int16)(v11 / v26) << 16);
}
