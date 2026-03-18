/*
 * XREFs of ?vDetermineSurfaceBounds@@YGXPAU_SURFOBJ@@EJJPAU_RECTL@@@Z @ 0x938C2
 * Callers:
 *     ?vCalculateCursorBounds@@YGXPAU_SURFOBJ@@0PAU_RECTL@@@Z @ 0x93840 (-vCalculateCursorBounds@@YGXPAU_SURFOBJ@@0PAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __userpurge vDetermineSurfaceBounds(
        char a1@<dl>,
        _DWORD *a2@<ecx>,
        int a3,
        int a4,
        int *a5,
        int a6,
        struct _RECTL *a7)
{
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  int v11; // edi
  int v12; // esi
  int v13; // ecx
  int v14; // ebx
  _BYTE *v15; // eax
  _BYTE *v16; // ecx
  int v17; // edx
  int v18; // edx
  int *v19; // ecx
  _BYTE *v20; // ecx
  _BYTE *v21; // edx
  _BYTE *v22; // edx
  int v23; // ecx
  int j; // esi
  _BYTE *v25; // ebx
  int v26; // esi
  _BYTE *v27; // edx
  _BYTE *v28; // eax
  int v29; // ebx
  int v30; // edx
  int v31; // ecx
  char v32; // dl
  _BYTE *v33; // eax
  int v34; // ecx
  char i; // dl
  _DWORD *v36; // [esp+Ch] [ebp-1Ch]
  int v37; // [esp+10h] [ebp-18h]
  int v38; // [esp+14h] [ebp-14h]
  int v39; // [esp+18h] [ebp-10h]
  int v40; // [esp+20h] [ebp-8h]
  int v41; // [esp+20h] [ebp-8h]
  int v42; // [esp+20h] [ebp-8h]

  v8 = a2[11];
  v9 = a2[4];
  v10 = a2[8];
  v11 = a2[9];
  v37 = (int)(&galBitsPerPixel)[v8];
  v36 = a2;
  v40 = v10;
  v12 = (v9 * v37 + 7) >> 3;
  v38 = v12;
  if ( v8 == 1 && (v13 = v9 & 7) != 0 )
  {
    v30 = 256 >> v13;
    v31 = v10;
    v14 = a3;
    v32 = v30 - 1;
    v33 = (_BYTE *)(v31 - 1 + v12 + a3 * v11);
    v34 = a4 - a3;
    if ( a1 )
    {
      for ( ; v34; --v34 )
      {
        *v33 |= v32;
        v33 += v11;
      }
    }
    else
    {
      for ( i = ~v32; v34; --v34 )
      {
        *v33 &= i;
        v33 += v11;
      }
    }
  }
  else
  {
    v14 = a3;
  }
  v15 = (_BYTE *)(v40 + v14 * v11);
  while ( 1 )
  {
    v16 = v15;
    v17 = v12;
    if ( v12 )
      break;
LABEL_8:
    v15 += v11;
    a3 = ++v14;
    if ( v14 >= a4 )
    {
      v18 = 0x80000000;
      *a5 = 0x7FFFFFFF;
      a5[1] = 0x7FFFFFFF;
      v19 = a5 + 2;
      a5[3] = 0x80000000;
      goto LABEL_27;
    }
  }
  while ( 1 )
  {
    v14 = a3;
    if ( *v16 != a1 )
      break;
    ++v16;
    if ( !--v17 )
      goto LABEL_8;
  }
  v20 = (_BYTE *)(v40 + v11 * (a4 - 1));
LABEL_11:
  v21 = v20;
  v41 = v12;
  while ( *v21 == a1 )
  {
    ++v21;
    if ( !--v41 )
    {
      v20 -= v11;
      --a4;
      goto LABEL_11;
    }
  }
  v22 = v15;
  v23 = a4 - a3;
  for ( j = 0; ; ++j )
  {
    v42 = v23;
    v25 = v22;
    if ( v23 )
      break;
LABEL_19:
    ++v22;
  }
  while ( 1 )
  {
    v23 = a4 - a3;
    if ( *v25 != a1 )
      break;
    v25 += v11;
    if ( !--v42 )
      goto LABEL_19;
  }
  v39 = j;
  v26 = v38;
  v27 = &v15[v38 - 1];
LABEL_21:
  v28 = v27;
  v29 = v23;
  while ( 1 )
  {
    v23 = a4 - a3;
    if ( *v28 != a1 )
      break;
    v28 += v11;
    if ( !--v29 )
    {
      --v27;
      --v26;
      goto LABEL_21;
    }
  }
  a5[1] = a3;
  a5[3] = a4;
  *a5 = 8 * v39 / v37;
  v19 = a5 + 2;
  v18 = (v37 - 1 + 8 * v26) / v37;
  a5[2] = v18;
  if ( v18 >= v36[4] )
    v18 = v36[4];
LABEL_27:
  *v19 = v18;
}
