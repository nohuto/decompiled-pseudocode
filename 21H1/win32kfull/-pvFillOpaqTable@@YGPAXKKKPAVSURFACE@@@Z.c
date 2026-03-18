/*
 * XREFs of ?pvFillOpaqTable@@YGPAXKKKPAVSURFACE@@@Z @ 0x9C0EE
 * Callers:
 *     _vSrcOpaqCopyS4D32@44 @ 0x9BFDA (_vSrcOpaqCopyS4D32@44.c)
 *     _vSrcOpaqCopyS4D16@44 @ 0x1D562F (_vSrcOpaqCopyS4D16@44.c)
 *     _vSrcOpaqCopyS4D24@44 @ 0x1D577F (_vSrcOpaqCopyS4D24@44.c)
 * Callees:
 *     <none>
 */

int *__userpurge pvFillOpaqTable@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        unsigned int a3,
        int *a4,
        unsigned int a5,
        struct SURFACE *a6)
{
  int v7; // esi
  int v9; // eax
  int v10; // edx
  int v11; // ebx
  int v12; // ecx
  int v13; // esi
  int v14; // edx
  int v15; // edi
  int v16; // ecx
  int v17; // eax
  char v18; // cl
  int v19; // eax
  unsigned int v20; // edx
  int *v21; // edx
  int v22; // eax
  int v23; // eax
  unsigned int v24; // edx
  int v26; // [esp+Ch] [ebp-30h]
  unsigned int v27; // [esp+10h] [ebp-2Ch]
  int v28; // [esp+14h] [ebp-28h]
  char v29; // [esp+18h] [ebp-24h]
  int v30; // [esp+1Ch] [ebp-20h]
  char v32; // [esp+24h] [ebp-18h]
  int v33; // [esp+28h] [ebp-14h]
  int v34; // [esp+2Ch] [ebp-10h]
  int v35; // [esp+30h] [ebp-Ch]
  int v36; // [esp+30h] [ebp-Ch]
  int v37; // [esp+34h] [ebp-8h]
  int v38; // [esp+38h] [ebp-4h]
  unsigned int v39; // [esp+38h] [ebp-4h]
  unsigned int *v40; // [esp+44h] [ebp+8h]
  _WORD *v41; // [esp+44h] [ebp+8h]
  unsigned int v42; // [esp+48h] [ebp+Ch]
  unsigned int v43; // [esp+48h] [ebp+Ch]
  unsigned int v44; // [esp+48h] [ebp+Ch]

  v7 = *a4;
  if ( *a4 != dword_2738BC || a3 != dword_2738C0 || a1 != dword_2738C4 )
  {
    dword_2738C4 = a1;
    dword_2738C0 = a3;
    v9 = a4[22];
    dword_2738BC = v7;
    if ( !v9 )
      v9 = *(_DWORD *)(a4[7] + 1112);
    v10 = *(_DWORD *)(v9 + 16);
    if ( (v10 & 2) != 0 )
    {
      v21 = *(int **)(v9 + 76);
      v11 = *v21;
      v15 = v21[9] + v21[6] - 8;
      v13 = v21[1];
      v34 = v21[2];
      v33 = v21[10] + v21[7] - 8;
      v22 = v21[11] + v21[8] - 8;
      v14 = v33;
      v37 = v22;
    }
    else
    {
      v11 = a2 == 2 ? 31 : 255;
      v12 = a2 == 2 ? 5 : 8;
      if ( (v10 & 4) != 0 )
      {
        v15 = a2 == 2 ? -3 : 0;
        v13 = v11 << v12;
        v14 = v12 + v12 - 8;
        v34 = v11 << v12 << v12;
        v37 = v12 + v14;
      }
      else if ( (v10 & 8) != 0 )
      {
        v34 = a2 == 2 ? 31 : 255;
        v13 = v11 << v12;
        v37 = a2 == 2 ? -3 : 0;
        v14 = v12 + v12 - 8;
        v11 = v11 << v12 << v12;
        v15 = v12 + v14;
      }
      else
      {
        v11 = 0;
        v13 = 0;
        v34 = 0;
        v15 = 0;
        v14 = 0;
        v37 = 0;
      }
      LOBYTE(v33) = v14;
    }
    v32 = 0;
    if ( v15 < 0 )
    {
      v23 = -v15;
      LOBYTE(v15) = 0;
      v32 = v23;
    }
    v35 = (unsigned __int8)byte_251AE8[(unsigned __int8)((a3 & v11) << v32 >> v15)];
    v28 = (unsigned __int8)byte_251AE8[(unsigned __int8)((a1 & (unsigned int)v11) << v32 >> v15)] - v35;
    LOBYTE(v16) = 0;
    v36 = 16 * v35;
    v29 = 0;
    if ( v14 < 0 )
    {
      v16 = -v14;
      LOBYTE(v14) = 0;
      v29 = v16;
      LOBYTE(v33) = 0;
    }
    v42 = (unsigned __int8)byte_251AE8[(unsigned __int8)((a3 & v13) << v16 >> v14)];
    v27 = (unsigned __int8)byte_251AE8[(unsigned __int8)((a1 & (unsigned int)v13) << v29 >> v14)] - v42;
    LOBYTE(v16) = 0;
    v43 = 16 * v42;
    v17 = v37;
    LOBYTE(v30) = 0;
    if ( v37 < 0 )
    {
      v16 = -v37;
      LOBYTE(v37) = 0;
      v30 = -v17;
    }
    v44 = v27 + v43;
    v38 = (unsigned __int8)byte_251AE8[(unsigned __int8)((a3 & v34) << v16 >> v37)];
    v18 = v37;
    v26 = (unsigned __int8)byte_251AE8[(unsigned __int8)((a1 & (unsigned int)v34) << v30 >> v37)] - v38;
    v39 = v26 + 16 * v38;
    v19 = v28 + v36;
    if ( a2 == 2 )
    {
      LOWORD(dword_274B68) = a3;
      v41 = (_WORD *)&dword_274B68 + 1;
      do
      {
        v44 += v27;
        v39 += v26;
        v24 = (unsigned int)((unsigned __int8)byte_251BE8[(unsigned __int8)(v39 >> 4)] << v18) >> v30;
        v18 = v37;
        *v41++ = v13 & ((unsigned int)((unsigned __int8)byte_251BE8[(unsigned __int8)(v44 >> 4)] << v33) >> v29) | v11 & ((unsigned int)((unsigned __int8)byte_251BE8[(unsigned __int8)((unsigned int)(v28 + v19) >> 4)] << v15) >> v32) | v34 & v24;
        v19 += v28;
      }
      while ( v41 < word_274B86 );
      *v41 = a1;
    }
    else
    {
      dword_274B68 = a3;
      v40 = (unsigned int *)&unk_274B6C;
      do
      {
        v44 += v27;
        v39 += v26;
        v20 = (unsigned int)((unsigned __int8)byte_251BE8[(unsigned __int8)(v39 >> 4)] << v18) >> v30;
        v18 = v37;
        *v40++ = v11 & ((unsigned int)((unsigned __int8)byte_251BE8[(unsigned __int8)((unsigned int)(v28 + v19) >> 4)] << v15) >> v32) | v13 & ((unsigned int)((unsigned __int8)byte_251BE8[(unsigned __int8)(v44 >> 4)] << v33) >> v29) | v34 & v20;
        v19 += v28;
      }
      while ( v40 < &dword_274BA4 );
      *v40 = a1;
    }
  }
  return &dword_274B68;
}
