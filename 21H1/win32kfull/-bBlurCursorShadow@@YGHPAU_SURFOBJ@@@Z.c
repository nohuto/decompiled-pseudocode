/*
 * XREFs of ?bBlurCursorShadow@@YGHPAU_SURFOBJ@@@Z @ 0xCD2D0
 * Callers:
 *     ?bShadowAlphaCursor@@YGHPAU_SURFOBJ@@00PAU_XLATEOBJ@@1PAU_RECTL@@H@Z @ 0xCD162 (-bShadowAlphaCursor@@YGHPAU_SURFOBJ@@00PAU_XLATEOBJ@@1PAU_RECTL@@H@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __thiscall bBlurCursorShadow(_DWORD *this)
{
  _DWORD *v1; // ebx
  int v2; // eax
  _BYTE *v3; // esi
  char *v4; // eax
  int v5; // edx
  unsigned int v6; // edi
  _WORD *v7; // esi
  unsigned int v8; // eax
  int v9; // ebx
  unsigned int v10; // edi
  __int16 v11; // ax
  int v12; // ecx
  _BYTE *v13; // esi
  unsigned int v14; // edx
  int v15; // eax
  int v16; // edi
  unsigned int v17; // edx
  _WORD *v18; // ecx
  _DWORD *v19; // edi
  int v20; // ebx
  int v21; // esi
  __int16 v22; // ax
  int v23; // edx
  unsigned int v24; // eax
  _WORD *v25; // ebx
  int v26; // esi
  unsigned int v27; // edi
  __int16 v28; // ax
  int v30; // eax
  _DWORD *v31; // [esp+10h] [ebp-1B0h]
  int v33; // [esp+18h] [ebp-1A8h]
  unsigned int v34; // [esp+1Ch] [ebp-1A4h]
  unsigned int v35; // [esp+20h] [ebp-1A0h]
  unsigned int v36; // [esp+20h] [ebp-1A0h]
  unsigned int v37; // [esp+24h] [ebp-19Ch]
  int v38; // [esp+24h] [ebp-19Ch]
  unsigned int v39; // [esp+28h] [ebp-198h]
  int v40; // [esp+2Ch] [ebp-194h]
  _BYTE *v41; // [esp+30h] [ebp-190h]
  char *v42; // [esp+34h] [ebp-18Ch]
  char *v43; // [esp+38h] [ebp-188h]
  char v44; // [esp+3Ch] [ebp-184h] BYREF
  char v45; // [esp+BCh] [ebp-104h] BYREF
  _BYTE v46[128]; // [esp+13Ch] [ebp-84h] BYREF

  v41 = 0;
  v1 = this;
  v42 = 0;
  v43 = 0;
  v2 = this[4];
  if ( v2 < 3 || (int)this[5] < 3 )
    return 0;
  if ( v2 > 64 )
  {
    v3 = PALLOCMEM2(6 * v2, 1886221383, 1);
    v41 = v3;
    if ( !v3 )
      return 0;
    v30 = v1[4];
    v42 = &v3[2 * v30];
    v4 = &v3[4 * v30];
  }
  else
  {
    v3 = v46;
    v42 = &v45;
    v41 = v46;
    v4 = &v44;
  }
  v43 = v4;
  if ( !v3 )
    return 0;
  v5 = v1[8];
  v6 = 0;
  v40 = v5;
  v37 = 0;
  do
  {
    v7 = (&v41)[v6];
    v35 = 0;
    v8 = &v7[v1[4] - 2] >= v7 ? (unsigned int)(2 * v1[4] - 4) >> 1 : 0;
    if ( v8 )
    {
      v9 = v5 + 4;
      v10 = v8;
      do
      {
        v11 = *(unsigned __int8 *)(v9 + 7);
        v9 += 4;
        *v7 = *(unsigned __int8 *)(v9 - 1) + v11 + *(unsigned __int8 *)(v9 - 5);
        ++v35;
        ++v7;
      }
      while ( v35 < v10 );
      v1 = this;
      v6 = v37;
      v5 = v40;
    }
    v12 = v1[9];
    v5 += v12;
    ++v6;
    v40 = v5;
    v37 = v6;
  }
  while ( v6 < 3 );
  v13 = v41;
  v14 = v12 + v1[8] + 4;
  v36 = v14;
  v38 = 0;
  v15 = v1[5] - 2;
  if ( v1[5] != 2 )
  {
    v16 = v40;
    while ( 1 )
    {
      v39 = 0;
      v33 = v15 - 1;
      v31 = (_DWORD *)v14;
      v17 = 4 * v1[4] - 8 + v14 >= v14 ? (unsigned int)(4 * v1[4] - 8) >> 2 : 0;
      if ( v17 )
      {
        v18 = v13;
        v19 = v31;
        v20 = v43 - v13;
        v21 = v42 - v13;
        do
        {
          v22 = *v18 + *(_WORD *)((char *)v18 + v20) + *(_WORD *)((char *)v18 + v21);
          ++v18;
          *v19++ = (v22 & 0xFFF8) << 21;
          ++v39;
        }
        while ( v39 < v17 );
        v13 = v41;
        v1 = this;
        v16 = v40;
      }
      v23 = v1[9];
      v36 += v23;
      if ( !v33 )
        break;
      v34 = 0;
      v24 = &(&v41)[v38][2 * v1[4] - 4] >= (&v41)[v38] ? (unsigned int)(2 * v1[4] - 4) >> 1 : 0;
      if ( v24 )
      {
        v25 = (&v41)[v38];
        v26 = v16 + 4;
        v27 = v24;
        do
        {
          v28 = *(unsigned __int8 *)(v26 + 7);
          v26 += 4;
          *v25 = *(unsigned __int8 *)(v26 - 1) + v28 + *(unsigned __int8 *)(v26 - 5);
          ++v34;
          ++v25;
        }
        while ( v34 < v27 );
        v1 = this;
        v13 = v41;
        v16 = v40;
        v23 = this[9];
      }
      v16 += v23;
      v14 = v36;
      v40 = v16;
      v15 = v33;
      v38 = (unsigned int)(v38 + 1) < 3 ? v38 + 1 : 0;
    }
  }
  if ( v13 != v46 )
    Win32FreePool(v13);
  return 1;
}
