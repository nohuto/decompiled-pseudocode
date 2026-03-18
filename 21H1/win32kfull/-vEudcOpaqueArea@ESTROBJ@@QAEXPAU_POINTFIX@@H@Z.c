/*
 * XREFs of ?vEudcOpaqueArea@ESTROBJ@@QAEXPAU_POINTFIX@@H@Z @ 0x1F8EFF
 * Callers:
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     AdjustBoundingBox @ 0x1F79AF (AdjustBoundingBox.c)
 */

void __thiscall ESTROBJ::vEudcOpaqueArea(ESTROBJ *this, struct _POINTFIX *a2, int a3)
{
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // edi
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // esi
  int v16; // eax
  int v17; // ecx
  int v18; // [esp+10h] [ebp-38h]
  int v19; // [esp+14h] [ebp-34h]
  int v20; // [esp+18h] [ebp-30h]
  int v21; // [esp+1Ch] [ebp-2Ch]
  int v22; // [esp+20h] [ebp-28h] BYREF
  int v23; // [esp+24h] [ebp-24h]
  int v24; // [esp+28h] [ebp-20h] BYREF
  int v25; // [esp+2Ch] [ebp-1Ch]
  int v26; // [esp+30h] [ebp-18h]
  int v27; // [esp+34h] [ebp-14h]
  int v28; // [esp+38h] [ebp-10h]
  int v29; // [esp+3Ch] [ebp-Ch] BYREF
  int v30; // [esp+40h] [ebp-8h] BYREF
  int v31; // [esp+44h] [ebp-4h] BYREF

  v4 = *((_DWORD *)this + 11);
  v5 = 0;
  v30 = 0;
  v29 = 0;
  v22 = 0;
  v6 = *(_DWORD *)v4;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( *(_DWORD *)(v6 + 780) + 4 <= 0 )
    return;
  do
  {
    switch ( v5 )
    {
      case 0:
        goto LABEL_18;
      case 1:
        if ( !*((_DWORD *)this + 52) )
          goto LABEL_18;
        v9 = *(_DWORD *)(*(_DWORD *)v4 + 716);
        break;
      case 2:
        if ( !*((_DWORD *)this + 53) )
          goto LABEL_18;
        v9 = *(_DWORD *)(*(_DWORD *)v4 + 720);
        break;
      case 3:
        if ( !*((_DWORD *)this + 54) )
          goto LABEL_18;
        v9 = *(_DWORD *)(*(_DWORD *)v4 + 724);
        break;
      default:
        v7 = *((_DWORD *)this + 56);
        if ( !v7 )
          goto LABEL_18;
        if ( !*(_DWORD *)(v7 + 4 * v5 - 16) )
          goto LABEL_18;
        v8 = *(_DWORD *)(*(_DWORD *)v4 + 728);
        if ( !v8 )
          goto LABEL_18;
        v9 = *(_DWORD *)(v8 + 4 * v5 - 16);
        break;
    }
    if ( v9 )
    {
      v31 = v9;
      AdjustBoundingBox(v4, (int)&v31, &v30, &v29, &v22, &v24);
    }
LABEL_18:
    v31 = 0;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v31);
    v4 = *((_DWORD *)this + 11);
    ++v5;
  }
  while ( v5 < *(_DWORD *)(*(_DWORD *)v4 + 780) + 4 );
  if ( v30 || v29 )
  {
    v10 = v24;
    v18 = *((_DWORD *)this + 3);
    v19 = *((_DWORD *)this + 4);
    v20 = *((_DWORD *)this + 5);
    v21 = *((_DWORD *)this + 6);
    v11 = v22;
    v12 = v22;
    if ( v22 >= v24 )
      v12 = v24;
    v13 = v12 >> 4;
    v14 = v22;
    if ( v22 <= v24 )
      v14 = v24;
    v15 = v25;
    v27 = (v14 + 15) >> 4;
    v31 = v23;
    if ( v23 >= v25 )
      v31 = v25;
    v31 >>= 4;
    v28 = v23;
    if ( v23 <= v25 )
      v28 = v25;
    v26 = v13 + v18;
    v25 = v27 + v20;
    v27 = v31 + v19;
    v16 = ((v28 + 15) >> 4) + v21;
    if ( v31 + v19 < *((_DWORD *)this + 4) )
      *((_DWORD *)this + 4) = v31 + v19;
    if ( v16 > *((_DWORD *)this + 6) )
      *((_DWORD *)this + 6) = v16;
    if ( v26 < *((_DWORD *)this + 3) )
      *((_DWORD *)this + 3) = v26;
    if ( v25 > *((_DWORD *)this + 5) )
      *((_DWORD *)this + 5) = v25;
    if ( a3 )
    {
      if ( v30 )
      {
        v17 = v23;
        a2->x += v11;
        a2->y += v17;
        a2[1].x += v11;
        a2[1].y += v17;
      }
      if ( v29 )
      {
        a2[2].x += v10;
        a2[2].y += v15;
        a2[3].x += v10;
        a2[3].y += v15;
      }
    }
  }
}
