/*
 * XREFs of ?AddEdgeToGET@@YAPEAVEDGE@@PEAV1@0PEAU_POINTFIX@@1PEAU_RECTL@@@Z @ 0x1C00C4978
 * Callers:
 *     bConstructGET @ 0x1C00C4860 (bConstructGET.c)
 * Callees:
 *     <none>
 */

struct EDGE *__fastcall AddEdgeToGET(
        struct EDGE *a1,
        struct EDGE *a2,
        struct _POINTFIX *a3,
        struct _POINTFIX *a4,
        struct _RECTL *a5)
{
  FIX y; // r10d
  FIX v6; // edi
  FIX x; // edx
  FIX v9; // r8d
  FIX v10; // r15d
  int v12; // r11d
  FIX v13; // esi
  int v14; // r9d
  FIX v15; // edx
  LONG v16; // eax
  int v17; // r11d
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // r10d
  int v24; // ecx
  int v25; // edx
  bool v26; // zf
  int v27; // eax
  int v28; // r8d
  __int64 v29; // rax
  struct EDGE *result; // rax
  int v31; // eax
  __int64 v32; // rcx
  int v33; // edx
  int v34; // kr00_4
  int v35; // eax
  LONG top; // eax
  LONG bottom; // ecx
  bool v38; // sf
  bool v39; // of
  bool v40; // cc

  y = a4->y;
  v6 = a3->y;
  x = a4->x;
  v9 = a3->x;
  v10 = a4->x;
  v13 = 0;
  v14 = y - v6;
  v12 = y - v6;
  if ( y - v6 < 0 )
  {
    v10 = v9;
    v14 = v6 - y;
    v9 = x;
  }
  v15 = y;
  if ( v12 < 0 )
  {
    v15 = v6;
    v6 = y;
  }
  v16 = v15;
  *((_DWORD *)a2 + 10) = ((v12 >> 31) & 0xFFFFFFFE) + 1;
  v17 = 0;
  if ( a5 )
  {
    top = a5->top;
    if ( v15 < top )
      return a2;
    bottom = a5->bottom;
    if ( v6 > bottom )
      return a2;
    v39 = __OFSUB__(v6, top);
    v38 = v6 - top < 0;
    v40 = v6 < top;
    v13 = v6;
    if ( v6 >= top )
      top = v6;
    LOBYTE(v17) = v38 ^ v39;
    if ( !v40 )
      v13 = 0;
    v6 = top;
    v16 = v15;
    if ( v15 > bottom )
      v16 = a5->bottom;
  }
  v18 = (v6 + 15) >> 4;
  v19 = ((v16 + 15) >> 4) - v18;
  *((_DWORD *)a2 + 4) = v18;
  *((_DWORD *)a2 + 2) = v19;
  if ( v19 <= 0 )
    return a2;
  v20 = v10 - v9;
  if ( v10 - v9 < 0 )
  {
    v20 = v9 - v10;
    v21 = -v14;
    v22 = -1;
  }
  else
  {
    v21 = -1;
    v22 = 1;
  }
  *((_DWORD *)a2 + 9) = v22;
  *((_DWORD *)a2 + 5) = v21;
  if ( v20 >= v14 )
  {
    v34 = v20;
    v33 = v20 >> 31;
    v35 = __SPAIR64__(v33, v34) / v14;
    v20 = __SPAIR64__(v33, v34) % v14;
    *((_DWORD *)a2 + 8) = v35;
    if ( v22 == -1 )
      *((_DWORD *)a2 + 8) = -v35;
  }
  else
  {
    *((_DWORD *)a2 + 8) = 0;
  }
  *((_DWORD *)a2 + 6) = v20;
  *((_DWORD *)a2 + 7) = v14;
  if ( v17 )
    v23 = a5->top;
  else
    v23 = (v6 + 15) & 0xFFFFFFF0;
  if ( !v17 )
    v13 = v6;
  if ( v13 != v23 )
  {
    v31 = *((_DWORD *)a2 + 5);
    v32 = v23 - v13;
    do
    {
      v9 += *((_DWORD *)a2 + 8);
      v31 += *((_DWORD *)a2 + 6);
      if ( v31 >= 0 )
      {
        v31 -= v14;
        v9 += *((_DWORD *)a2 + 9);
      }
      --v32;
    }
    while ( v32 );
    *((_DWORD *)a2 + 5) = v31;
  }
  v24 = *((_DWORD *)a2 + 5);
  v25 = (v9 + 15) >> 4;
  v26 = *((_DWORD *)a2 + 9) == 1;
  *((_DWORD *)a2 + 3) = v25;
  if ( v26 )
    v27 = ((v9 + 15) & 0xFFFFFFF0) - v9;
  else
    v27 = ((_BYTE)v9 - 1) & 0xF;
  *((_DWORD *)a2 + 6) *= 16;
  v28 = *((_DWORD *)a2 + 4);
  *((_DWORD *)a2 + 7) = 16 * v14;
  *((_DWORD *)a2 + 5) = v24 - v14 * v27;
  while ( 1 )
  {
    v29 = *(_QWORD *)a1;
    if ( v28 <= *(_DWORD *)(*(_QWORD *)a1 + 16LL)
      && (v28 != *(_DWORD *)(*(_QWORD *)a1 + 16LL) || v25 <= *(_DWORD *)(v29 + 12)) )
    {
      break;
    }
    a1 = *(struct EDGE **)a1;
  }
  *(_QWORD *)a2 = v29;
  result = (struct EDGE *)((char *)a2 + 48);
  *(_QWORD *)a1 = a2;
  return result;
}
