/*
 * XREFs of _ComputeInputColorInfo @ 0x1C2EEC
 * Callers:
 *     _GetDstBFInfo @ 0x1BB40C (_GetDstBFInfo.c)
 *     _SetupAAHeader @ 0x1C3166 (_SetupAAHeader.c)
 * Callees:
 *     <none>
 */

char __fastcall ComputeInputColorInfo(int a1, int a2, int a3, _BYTE *a4, int a5)
{
  int v5; // edi
  _BYTE *v6; // esi
  int v7; // ebx
  _BYTE *v8; // edx
  int v9; // ecx
  int v10; // eax
  _BYTE *v11; // ecx
  char v12; // al
  _BYTE *v13; // edx
  _BYTE *v14; // edi
  _BYTE *v15; // edx
  int v16; // ecx
  char v17; // bl
  char v18; // cl
  char v19; // al
  bool v20; // zf
  int v24; // [esp+10h] [ebp-Ch]
  int v25; // [esp+14h] [ebp-8h]
  int v26; // [esp+14h] [ebp-8h]
  int v27; // [esp+18h] [ebp-4h]
  int v28; // [esp+18h] [ebp-4h]
  int v29; // [esp+2Ch] [ebp+10h]
  int v30; // [esp+2Ch] [ebp+10h]

  v5 = a5;
  v6 = (_BYTE *)(a5 + 40);
  if ( a1 )
  {
    v7 = *(unsigned __int16 *)(a5 + 2);
    if ( *(_WORD *)(a5 + 2) )
    {
      v8 = *(_BYTE **)(a5 + 52);
      v29 = BYTE1(SrcOrderTable[a3]);
      v9 = BYTE2(SrcOrderTable[a3]);
      v27 = HIBYTE(SrcOrderTable[a3]);
      v25 = v9;
      if ( v6[1] == 1 )
      {
        *(_DWORD *)(v5 + 8) = Input1BPPToAA24;
      }
      else
      {
        if ( v6[1] == 2 )
        {
LABEL_8:
          *(_DWORD *)(v5 + 8) = Input4BPPToAA24;
          goto LABEL_11;
        }
        if ( v6[1] != 3 && (unsigned __int8)v6[1] != 254 )
        {
          if ( (unsigned __int8)v6[1] != 255 )
            goto LABEL_11;
          goto LABEL_8;
        }
        *(_DWORD *)(v5 + 8) = Input8BPPToAA24;
      }
LABEL_11:
      v10 = v29 - v9;
      v11 = (_BYTE *)(a1 + v9);
      v30 = v29 - v25;
      do
      {
        v8[2] = v11[v10];
        v8[1] = *v11;
        v12 = v11[v27 - v25];
        v11 += a2;
        *v8 = v12;
        v8 += 4;
        v10 = v30;
        --v7;
      }
      while ( v7 );
      return v10;
    }
  }
  v13 = a4;
  *(_DWORD *)(a5 + 8) = InputAABFDATAToAA24;
  if ( (*a4 & 1) != 0 )
  {
    *v6 |= 1u;
    *(_BYTE *)(a5 + 42) = a4[21];
    *(_BYTE *)(a5 + 43) = a4[22];
    *(_BYTE *)(a5 + 44) = a4[23];
  }
  else
  {
    v24 = 3;
    v14 = a4 + 8;
    v15 = (_BYTE *)(a5 + 51);
    do
    {
      v16 = (unsigned __int8)*(v14 - 4);
      --v14;
      v26 = v16;
      --v15;
      v17 = 0;
      v28 = (unsigned __int8)*v14;
      if ( *v14 < 8u )
      {
        v19 = -1 << (8 - v28);
        v18 = v16 - (8 - v28);
        if ( v26 - (8 - v28) >= 0 )
        {
          v17 = 0;
        }
        else
        {
          v17 = 8 - v28 - v26;
          v18 = 0;
        }
      }
      else
      {
        v18 = v28 + v16 - 8;
        v19 = -1;
      }
      v20 = v24-- == 1;
      *(v15 - 6) = v19;
      *v15 = v18;
      v14[v6 - a4] = v17;
    }
    while ( !v20 );
    v13 = a4;
    v5 = a5;
  }
  LOBYTE(v10) = v13[1];
  switch ( (_BYTE)v10 )
  {
    case 4:
LABEL_29:
      *(_BYTE *)(a5 + 51) = 2;
      return v10;
    case 5:
      if ( v13[20] == 4 )
        *v6 |= 2u;
      *(_BYTE *)(a5 + 51) = 3;
      break;
    case 6:
      if ( (*(_BYTE *)v5 & 8) != 0 )
      {
        LOBYTE(v10) = v13[20];
        if ( (_BYTE)v10 )
        {
          if ( (_BYTE)v10 == 4 )
            *v6 |= 4u;
        }
        else
        {
          *v6 |= 8u;
        }
        if ( !dwABPreMul[0] )
          *(_DWORD *)(v5 + 8) = InputPreMul32BPPToAA24;
      }
      *(_BYTE *)(a5 + 51) = 4;
      break;
    default:
      if ( (unsigned __int8)v10 > 0xFBu && (unsigned __int8)v10 <= 0xFDu )
        goto LABEL_29;
      break;
  }
  return v10;
}
