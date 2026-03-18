/*
 * XREFs of ?vConvertAndSaveBGRATo1@@YGXPAEPBKJJPAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x22B9BC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __stdcall vConvertAndSaveBGRATo1(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // edi
  _BYTE *v8; // ebx
  int v9; // eax
  int v10; // ecx
  char v11; // dl
  _DWORD *v12; // esi
  int v13; // ebx
  int v14; // edi
  _BYTE *v15; // edi
  char NearestIndexFromColorref; // al
  char v17; // bl
  char v18; // bl
  char v19; // bl
  char v20; // bl
  char v21; // bl
  char v22; // bl
  char v23; // bl
  int v25; // [esp+10h] [ebp-4h]
  _BYTE *v26; // [esp+1Ch] [ebp+8h]
  int v27; // [esp+20h] [ebp+Ch]
  int v28; // [esp+20h] [ebp+Ch]
  int v29; // [esp+20h] [ebp+Ch]
  int v30; // [esp+20h] [ebp+Ch]
  int v31; // [esp+20h] [ebp+Ch]
  int v32; // [esp+20h] [ebp+Ch]
  int v33; // [esp+20h] [ebp+Ch]
  int v34; // [esp+20h] [ebp+Ch]
  int v35; // [esp+20h] [ebp+Ch]
  char v36; // [esp+23h] [ebp+Fh]
  int v37; // [esp+24h] [ebp+10h]
  int v38; // [esp+24h] [ebp+10h]
  int v39; // [esp+24h] [ebp+10h]
  _DWORD *v40; // [esp+28h] [ebp+14h]
  unsigned int v41; // [esp+28h] [ebp+14h]
  char v42; // [esp+2Bh] [ebp+17h]

  v7 = a3;
  v8 = (_BYTE *)(a1 + (a4 >> 3));
  LOBYTE(v9) = 7;
  v26 = v8;
  v10 = a4 & 7;
  if ( (a4 & 7) != 0 )
  {
    v11 = *v8;
    v9 = 7 - v10 + 1;
    v42 = *v8;
    v25 = v9;
    if ( v9 >= a3 )
    {
      v9 = a3;
      v25 = a3;
    }
    v12 = a2;
    v7 = a3 - v9;
    v37 = a3 - v9;
    if ( v9 )
    {
      v13 = 7 - v10;
      v14 = v25;
      do
      {
        v27 = *v12;
        BYTE2(v27) = *v12;
        LOBYTE(v27) = BYTE2(*v12);
        HIBYTE(v27) = 2;
        LOBYTE(v9) = (unsigned __int8)ulGetNearestIndexFromColorref(a6, a7, v27, *(_DWORD *)(a6 + 20) != 0) << v13;
        v11 = v9 | v42 & ~(1 << v13);
        ++v12;
        --v13;
        v42 = v11;
        --v14;
      }
      while ( v14 );
      v7 = v37;
      v8 = v26;
    }
    *v8++ = v11;
    v26 = v8;
  }
  else
  {
    v12 = a2;
  }
  v40 = v12;
  if ( v7 >= 8 )
  {
    v41 = (unsigned int)v7 >> 3;
    v38 = -8 * ((unsigned int)v7 >> 3) + v7;
    v15 = v26;
    do
    {
      v28 = *v12;
      BYTE2(v28) = *v12;
      LOBYTE(v28) = BYTE2(*v12);
      HIBYTE(v28) = 2;
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(a6, a7, v28, *(_DWORD *)(a6 + 20) != 0);
      v29 = v12[1];
      BYTE2(v29) = v29;
      LOBYTE(v29) = BYTE2(v12[1]);
      HIBYTE(v29) = 2;
      v17 = ((unsigned __int8)ulGetNearestIndexFromColorref(a6, a7, v29, *(_DWORD *)(a6 + 20) != 0) << 6) | (NearestIndexFromColorref << 7);
      v30 = v12[2];
      BYTE2(v30) = v30;
      LOBYTE(v30) = BYTE2(v12[2]);
      HIBYTE(v30) = 2;
      v18 = (32 * ulGetNearestIndexFromColorref(a6, a7, v30, *(_DWORD *)(a6 + 20) != 0)) | v17;
      v31 = v12[3];
      BYTE2(v31) = v31;
      LOBYTE(v31) = BYTE2(v12[3]);
      HIBYTE(v31) = 2;
      v19 = (16 * ulGetNearestIndexFromColorref(a6, a7, v31, *(_DWORD *)(a6 + 20) != 0)) | v18;
      v32 = v12[4];
      BYTE2(v32) = v32;
      LOBYTE(v32) = BYTE2(v12[4]);
      HIBYTE(v32) = 2;
      v20 = (8 * ulGetNearestIndexFromColorref(a6, a7, v32, *(_DWORD *)(a6 + 20) != 0)) | v19;
      v33 = v12[5];
      BYTE2(v33) = v33;
      LOBYTE(v33) = BYTE2(v12[5]);
      HIBYTE(v33) = 2;
      v21 = (4 * ulGetNearestIndexFromColorref(a6, a7, v33, *(_DWORD *)(a6 + 20) != 0)) | v20;
      v34 = v12[6];
      BYTE2(v34) = v34;
      LOBYTE(v34) = BYTE2(v12[6]);
      HIBYTE(v34) = 2;
      v22 = (2 * ulGetNearestIndexFromColorref(a6, a7, v34, *(_DWORD *)(a6 + 20) != 0)) | v21;
      v35 = v12[7];
      BYTE2(v35) = v35;
      LOBYTE(v35) = BYTE2(v12[7]);
      HIBYTE(v35) = 2;
      LOBYTE(v9) = v22 | ulGetNearestIndexFromColorref(a6, a7, v35, *(_DWORD *)(a6 + 20) != 0);
      v12 += 8;
      *v15++ = v9;
      --v41;
    }
    while ( v41 );
    v26 = v15;
    v7 = v38;
    v8 = v26;
    v40 = v12;
  }
  if ( v7 )
  {
    v36 = *v8;
    v23 = 7;
    do
    {
      v39 = *v12;
      BYTE2(v39) = *v12;
      LOBYTE(v39) = BYTE2(*v12);
      HIBYTE(v39) = 2;
      LOBYTE(v9) = v36 & ~(1 << v23) | ((unsigned __int8)ulGetNearestIndexFromColorref(
                                                           a6,
                                                           a7,
                                                           v39,
                                                           *(_DWORD *)(a6 + 20) != 0) << v23);
      v12 = v40 + 1;
      --v23;
      v36 = v9;
      ++v40;
      --v7;
    }
    while ( v7 );
    *v26 = v9;
  }
  return v9;
}
