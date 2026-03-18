/*
 * XREFs of ?bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C001AA10
 * Callers:
 *     ?pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z @ 0x1C001A800 (-pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BEZIER32::bNext(BEZIER32 *this, struct _POINTFIX *a2)
{
  int v3; // ebp
  __int64 result; // rax
  int v5; // r9d
  int v6; // r15d
  int v7; // edi
  int v8; // ecx
  int v9; // r10d
  int v10; // r11d
  int v11; // r14d
  signed int v12; // eax
  int v13; // edx
  int i; // r9d
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  int v21; // eax
  int v22; // ebx
  int v23; // r10d
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // r10d
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  int v31; // edx
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // ecx

  a2->x = *((_DWORD *)this + 9) + ((*((_DWORD *)this + 1) + 4096) >> 13);
  a2->y = *((_DWORD *)this + 10) + ((*((_DWORD *)this + 5) + 4096) >> 13);
  v3 = *(_DWORD *)this;
  if ( !*(_DWORD *)this )
    return 0LL;
  v5 = *((_DWORD *)this + 4);
  v6 = *((_DWORD *)this + 3);
  v7 = -v5;
  if ( v5 >= 0 )
    v7 = *((_DWORD *)this + 4);
  v8 = abs32(v6);
  if ( v8 > v7 )
  {
    v9 = abs32(v6);
  }
  else
  {
    v9 = v5;
    if ( v5 < 0 )
      v9 = -v5;
  }
  v10 = *((_DWORD *)this + 8);
  v11 = -v10;
  if ( v10 >= 0 )
    v11 = *((_DWORD *)this + 8);
  v12 = abs32(*((_DWORD *)this + 7));
  if ( v12 > v11 )
  {
    v13 = v12;
  }
  else
  {
    v13 = *((_DWORD *)this + 8);
    if ( v10 < 0 )
      v13 = -*((_DWORD *)this + 8);
  }
  if ( v9 > v13 )
  {
    if ( v8 <= v7 )
    {
      v8 = v5;
      if ( v5 < 0 )
        v8 = -v5;
    }
  }
  else if ( v12 > v11 )
  {
    v8 = v12;
  }
  else
  {
    v8 = *((_DWORD *)this + 8);
    if ( v10 < 0 )
      v8 = -*((_DWORD *)this + 8);
  }
  if ( v8 > 523776 )
  {
    v34 = (v6 + v5) >> 3;
    *((_DWORD *)this + 3) = v34;
    v35 = *((_DWORD *)this + 2) - v34;
    v36 = v10 + *((_DWORD *)this + 7);
    *((_DWORD *)this + 2) = v35 >> 1;
    v36 >>= 3;
    *((_DWORD *)this + 6) = (*((_DWORD *)this + 6) - v36) >> 1;
    *((_DWORD *)this + 4) = v5 >> 2;
    *((_DWORD *)this + 7) = v36;
    *((_DWORD *)this + 8) = v10 >> 2;
    *(_DWORD *)this *= 2;
    v3 = *(_DWORD *)this;
  }
  for ( i = v3; (i & 1) == 0; *(_DWORD *)this = i )
  {
    v21 = *((_DWORD *)this + 4);
    v22 = *((_DWORD *)this + 3);
    v23 = 2 * v22 - v21;
    v24 = v21 - 2 * v22;
    v25 = abs32(v21);
    if ( v23 >= 0 )
      v24 = v23;
    if ( v25 <= v24 )
    {
      v25 = v23;
      if ( v23 < 0 )
        v25 = *((_DWORD *)this + 4) - 2 * v22;
    }
    if ( v25 > 130944 )
      break;
    v26 = *((_DWORD *)this + 8);
    v27 = 2 * *((_DWORD *)this + 7) - v26;
    v28 = v26 - 2 * *((_DWORD *)this + 7);
    v29 = abs32(v26);
    if ( v27 >= 0 )
      v28 = v27;
    if ( v29 <= v28 )
    {
      v29 = v27;
      if ( v27 < 0 )
        v29 = *((_DWORD *)this + 8) - 2 * *((_DWORD *)this + 7);
    }
    if ( v29 > 130944 )
      break;
    v30 = *((_DWORD *)this + 2);
    v31 = *((_DWORD *)this + 7);
    *((_DWORD *)this + 4) *= 4;
    *((_DWORD *)this + 8) *= 4;
    v32 = v22 + 2 * v30;
    v33 = *((_DWORD *)this + 6);
    *((_DWORD *)this + 2) = v32;
    *((_DWORD *)this + 3) = 8 * v22 - *((_DWORD *)this + 4);
    *((_DWORD *)this + 6) = v31 + 2 * v33;
    *((_DWORD *)this + 7) = 8 * v31 - *((_DWORD *)this + 8);
    i = *(int *)this >> 1;
  }
  v15 = *((_DWORD *)this + 3);
  v16 = *((_DWORD *)this + 7);
  *(_DWORD *)this = i - 1;
  v17 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 1) += v17;
  *((_DWORD *)this + 2) = v15 + v17;
  v18 = v15 + v15 - *((_DWORD *)this + 4);
  *((_DWORD *)this + 4) = v15;
  v19 = *((_DWORD *)this + 6);
  *((_DWORD *)this + 5) += v19;
  *((_DWORD *)this + 6) = v16 + v19;
  v20 = v16 - *((_DWORD *)this + 8);
  *((_DWORD *)this + 3) = v18;
  *((_DWORD *)this + 7) = v16 + v20;
  result = 1LL;
  *((_DWORD *)this + 8) = v16;
  return result;
}
