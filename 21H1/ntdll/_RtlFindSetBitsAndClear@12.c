/*
 * XREFs of _RtlFindSetBitsAndClear@12 @ 0x4B34F1B0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlClearBits@12 @ 0x4B2E1AE0 (_RtlClearBits@12.c)
 */

ULONG __cdecl RtlFindSetBitsAndClear(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  _RTL_BITMAP *v3; // eax
  unsigned int v4; // edx
  unsigned int SizeOfBitMap; // edi
  unsigned int *Buffer; // esi
  ULONG v7; // ecx
  unsigned int v8; // ebx
  ULONG v9; // ecx
  unsigned int *v10; // esi
  signed int v11; // edi
  unsigned int v12; // ebx
  int v13; // eax
  bool v14; // zf
  int v15; // ecx
  int v16; // ecx
  unsigned int v17; // edx
  unsigned int *v18; // edi
  unsigned int v19; // edx
  unsigned int v20; // eax
  unsigned int v21; // ebx
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // edx
  unsigned int v25; // eax
  int v26; // ecx
  int v27; // eax
  ULONG v28; // ebx
  unsigned int v29; // edx
  ULONG v30; // ecx
  bool v31; // cf
  int v32; // ecx
  int v33; // eax
  unsigned int *v34; // ecx
  unsigned int v35; // eax
  unsigned int *v37; // [esp+14h] [ebp-18h]
  unsigned int v38; // [esp+18h] [ebp-14h]
  unsigned int *v39; // [esp+1Ch] [ebp-10h]
  ULONG v40; // [esp+20h] [ebp-Ch]
  ULONG v41; // [esp+20h] [ebp-Ch]
  unsigned int *v42; // [esp+28h] [ebp-4h]

  v3 = BitMapHeader;
  v4 = NumberToFind;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v7 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v8 = BitMapHeader->SizeOfBitMap - 1;
  v40 = v7;
  v42 = Buffer;
  if ( !NumberToFind )
  {
    v9 = v7 & 0xFFFFFFF8;
    goto LABEL_83;
  }
  while ( 2 )
  {
    if ( v8 - v7 + 1 < v4 )
    {
      v9 = -1;
      goto LABEL_32;
    }
    v38 = v8 - v4 + 1;
    v39 = &Buffer[v38 >> 5];
    v10 = &Buffer[v40 >> 5];
    v11 = ((1 << (v7 & 0x1F)) - 1) | ~*v10;
    v4 = NumberToFind;
    if ( NumberToFind > 0x3F )
    {
      v12 = (unsigned int)v39;
      if ( (v38 & 0x1F) != 0 )
        v12 = (unsigned int)(v39 + 1);
      if ( v11 )
      {
        if ( *++v10 != -1 )
          goto LABEL_15;
        v14 = !_BitScanReverse((unsigned int *)&v15, v11);
        if ( v14 )
          v13 = 32;
        else
          v13 = 31 - v15;
      }
      else
      {
        v13 = 0;
      }
LABEL_20:
      v9 = 32 * (v10 - BitMapHeader->Buffer) - v13;
      if ( v9 <= v38 )
      {
        v17 = v4 - v13;
        v18 = &v10[v17 >> 5];
        while ( ++v10 != v18 )
        {
          if ( *v10 != -1 )
            goto LABEL_14;
        }
        v19 = v17 & 0x1F;
        if ( !v19 )
          goto LABEL_28;
        v14 = !_BitScanForward(&v20, ~*v10);
        if ( v14 )
          v20 = 32;
        if ( v20 >= v19 )
          goto LABEL_28;
LABEL_14:
        v4 = NumberToFind;
LABEL_15:
        while ( (unsigned int)v10 <= v12 )
        {
          if ( *++v10 == -1 )
          {
            v14 = !_BitScanReverse((unsigned int *)&v16, ~*(v10 - 1));
            if ( v14 )
              v13 = 32;
            else
              v13 = 31 - v16;
            goto LABEL_20;
          }
        }
      }
      goto LABEL_36;
    }
    if ( NumberToFind >= 0x20 )
    {
      while ( 1 )
      {
        while ( v11 < 0 )
        {
          if ( ++v10 > v39 )
            goto LABEL_36;
          v11 = ~*v10;
        }
        v14 = !_BitScanReverse((unsigned int *)&v22, v11);
        if ( v14 )
          v23 = 32;
        else
          v23 = 31 - v22;
        v9 = 32 * (v10 - BitMapHeader->Buffer + 1) - v23;
        if ( v9 > v38 )
          goto LABEL_36;
        v24 = v4 - v23;
        if ( !v24 )
          goto LABEL_28;
        v11 = ~*++v10;
        if ( v24 >= 0x20 )
        {
          if ( *v10 != -1 )
            goto LABEL_54;
          v24 -= 32;
          if ( !v24 )
            goto LABEL_28;
          v11 = ~*++v10;
        }
        v14 = !_BitScanForward(&v25, v11);
        if ( v14 )
          v25 = 32;
        if ( v25 >= v24 )
        {
LABEL_28:
          Buffer = BitMapHeader->Buffer;
          goto LABEL_29;
        }
LABEL_54:
        v4 = NumberToFind;
      }
    }
    if ( NumberToFind <= 1 )
    {
      if ( v11 == -1 )
      {
        while ( ++v10 <= v39 )
        {
          v11 = ~*v10;
          if ( *v10 )
            goto LABEL_81;
        }
LABEL_36:
        Buffer = BitMapHeader->Buffer;
        v9 = -1;
        goto LABEL_31;
      }
LABEL_81:
      v34 = v10;
      Buffer = BitMapHeader->Buffer;
      _BitScanForward(&v35, ~v11);
      v9 = v35 + 32 * (v34 - v42);
LABEL_76:
      if ( v9 > v38 )
      {
        v9 = -1;
        goto LABEL_31;
      }
LABEL_29:
      if ( v9 == -1 )
        goto LABEL_30;
    }
    else
    {
      v26 = 0;
      v37 = &v42[v8 >> 5];
      while ( 1 )
      {
        if ( v11 == -1 )
        {
          do
          {
            if ( ++v10 > v39 )
              goto LABEL_36;
            v11 = ~*v10;
          }
          while ( !*v10 );
          v26 = 0;
        }
        v14 = !_BitScanForward((unsigned int *)&v27, v11);
        if ( v14 )
          v27 = 32;
        if ( v26 + v27 >= v4 )
        {
          v32 = -v26;
LABEL_75:
          v9 = 32 * (v10 - v42) + v32;
          Buffer = BitMapHeader->Buffer;
          goto LABEL_76;
        }
        v28 = NumberToFind;
        v29 = ~v11;
        while ( 1 )
        {
          v30 = v28 >> 1;
          v29 &= v29 >> (v28 >> 1);
          if ( !v29 )
            break;
          v31 = v28 == v30;
          v28 -= v30;
          if ( v31 || v28 == 1 )
          {
            _BitScanForward((unsigned int *)&v32, v29);
            v4 = NumberToFind;
            goto LABEL_75;
          }
        }
        if ( v10 == v37 )
          break;
        v14 = !_BitScanReverse((unsigned int *)&v33, v11);
        if ( v14 )
          v26 = 32;
        else
          v26 = 31 - v33;
        v4 = NumberToFind;
        v11 = ~*++v10;
      }
      Buffer = BitMapHeader->Buffer;
      v9 = -1;
LABEL_30:
      v4 = NumberToFind;
LABEL_31:
      SizeOfBitMap = BitMapHeader->SizeOfBitMap;
LABEL_32:
      if ( v40 )
      {
        v21 = v4 + HintIndex;
        if ( v4 + HintIndex > SizeOfBitMap )
          v21 = SizeOfBitMap;
        v8 = v21 - 1;
        v7 = 0;
        v40 = 0;
        continue;
      }
    }
    break;
  }
  v4 = NumberToFind;
  v3 = BitMapHeader;
LABEL_83:
  v41 = v9;
  if ( v9 != -1 )
  {
    RtlClearBits(v3, v9, v4);
    return v41;
  }
  return v9;
}
