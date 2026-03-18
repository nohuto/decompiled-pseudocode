/*
 * XREFs of ?bInit@DDA_CLIPLINE@@QAEHPAU_POINTFIX@@0@Z @ 0x24939F
 * Callers:
 *     ?bEnumStartLine@XCLIPOBJ@@QAEHK@Z @ 0x237B25 (-bEnumStartLine@XCLIPOBJ@@QAEHK@Z.c)
 *     ?vUpdateCosmeticStyleState@EPATHOBJ@@QAEXPAVSURFACE@@PAU_LINEATTRS@@@Z @ 0x23848A (-vUpdateCosmeticStyleState@EPATHOBJ@@QAEXPAVSURFACE@@PAU_LINEATTRS@@@Z.c)
 * Callees:
 *     __aulldiv @ 0xF91F1 (__aulldiv.c)
 */

int __thiscall DDA_CLIPLINE::bInit(DDA_CLIPLINE *this, struct _POINTFIX *a2, struct _POINTFIX *a3)
{
  int v3; // edx
  FIX x; // ecx
  FIX v6; // esi
  int v7; // esi
  FIX y; // eax
  FIX v9; // edi
  int v10; // edi
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  struct _POINTFIX *v16; // edx
  int v17; // eax
  signed int v18; // edi
  int v19; // esi
  signed int v20; // esi
  BOOL v21; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // esi
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // ecx
  unsigned int v30; // [esp+10h] [ebp-10h]
  int v31; // [esp+14h] [ebp-Ch]
  unsigned int v32; // [esp+18h] [ebp-8h]
  FIX v33; // [esp+1Ch] [ebp-4h]
  int v34; // [esp+28h] [ebp+8h]
  struct _POINTFIX *v35; // [esp+28h] [ebp+8h]
  struct _POINTFIX *v36; // [esp+2Ch] [ebp+Ch]

  v3 = 0;
  *(_DWORD *)this = 0;
  x = a2->x;
  v6 = a3->x;
  v33 = a2->x;
  if ( a3->x < a2->x )
  {
    x = -x;
    v6 = -v6;
    v3 = 32;
    v33 = x;
    *(_DWORD *)this = 32;
  }
  v7 = v6 - x;
  *((_DWORD *)this + 4) = v7;
  if ( v7 < 0 )
    return 0;
  y = a2->y;
  v9 = a3->y;
  v34 = y;
  if ( v9 < y )
  {
    y = -y;
    v3 |= 8u;
    v34 = y;
    v9 = -v9;
    *(_DWORD *)this = v3;
  }
  v10 = v9 - y;
  *((_DWORD *)this + 3) = v10;
  if ( v10 < 0 )
    return 0;
  if ( v10 >= (unsigned int)v7 )
  {
    if ( v10 == v7 )
    {
      v3 |= 0x10u;
    }
    else
    {
      v11 = v7;
      *((_DWORD *)this + 3) = v7;
      v3 |= 5u;
      v7 = v10;
      *((_DWORD *)this + 4) = v10;
      v10 = v11;
      x = v34;
      v34 = v33;
    }
  }
  v32 = v3 | *(unsigned int *)((char *)&gaflRound + (v3 & 0xFFFFFFFC));
  *(_DWORD *)this = v32;
  v12 = x >> 4;
  v13 = x & 0xF;
  *((_DWORD *)this + 1) = v12;
  *((_DWORD *)this + 2) = v34 >> 4;
  v35 = (struct _POINTFIX *)(v34 & 0xF);
  v14 = (unsigned __int64)(v7 * (__int64)(int)&v35[1] - v10 * (__int64)v13) >> 32;
  v15 = v7 * (_DWORD)(v35 + 1) - v10 * v13;
  if ( (v32 & 0x8000) != 0 )
  {
    v14 = (unsigned __int64)(v7 * (__int64)(int)&v35[1] - v10 * (__int64)v13 - 1) >> 32;
    v15 = v7 * (_DWORD)(v35 + 1) - v10 * v13 - 1;
  }
  v36 = (struct _POINTFIX *)(__PAIR64__(v14, v15) >> 4);
  *((_DWORD *)this + 6) = v36;
  v16 = v35;
  v31 = v14 >> 4;
  *((_DWORD *)this + 7) = v14 >> 4;
  v17 = ((_BYTE)v10 + (_BYTE)v35) & 0xF;
  v30 = (unsigned int)(v7 + v13) >> 4;
  v18 = v30 - 1;
  v19 = ((_BYTE)v7 + (_BYTE)v13) & 0xF;
  if ( !v19 )
    goto LABEL_19;
  if ( v17 )
  {
    v16 = v35;
    if ( (int)abs32(v17 - 8) <= v19 )
LABEL_18:
      v18 = v30;
  }
  else if ( v19 - (unsigned int)((v32 & 0x80) != 0) + 8 >= 0x10 )
  {
    goto LABEL_18;
  }
LABEL_19:
  if ( (v32 & 0x90) != 0x90 )
    goto LABEL_26;
  if ( v19 && v17 == v19 + 8 )
    --v18;
  if ( v13 && v16 == (struct _POINTFIX *)(v13 + 8) )
  {
    v20 = 0;
  }
  else
  {
LABEL_26:
    v20 = 0;
    if ( v13 )
    {
      if ( v16 )
        v20 = (int)abs32((int)&v16[-1]) <= v13;
      else
        v20 = (unsigned int)(((__PAIR64__(v13, 0) - ((unsigned __int8)v32 & 0x80)) >> 32) + 8) >= 0x10;
    }
  }
  v21 = 0;
  if ( v31 >= 0 )
    v21 = *((_DWORD *)this + 6) >= *((_DWORD *)this + 4) - (*((_DWORD *)this + 3) & (unsigned int)-v20);
  if ( v18 < v20 )
    return 0;
  v22 = *((_DWORD *)this + 1);
  v23 = v22 + v20;
  v24 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 8) = v23;
  *((_DWORD *)this + 10) = v22 + v18;
  v25 = v24 + v21;
  v26 = *((int *)this + 3) * (__int64)v18;
  *((_DWORD *)this + 9) = v25;
  v28 = *((_DWORD *)this + 4);
  v27 = __PAIR64__(v31, (unsigned int)v36) + v26;
  if ( v27 >= 0xFFFFFFFFLL )
    v27 /= (unsigned __int64)v28;
  else
    LODWORD(v27) = (unsigned int)v27 / v28;
  *((_DWORD *)this + 11) = v24 + v27;
  return 1;
}
