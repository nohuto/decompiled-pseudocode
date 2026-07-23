/*
 * XREFs of _RtlFindClearBits@12 @ 0x4B34E6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindClearBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  ULONG v3; // edx
  unsigned int SizeOfBitMap; // esi
  unsigned int *Buffer; // edi
  ULONG v6; // ecx
  unsigned int v7; // ebx
  ULONG v8; // ecx
  unsigned int *v10; // esi
  int v11; // edi
  unsigned int v12; // ebx
  int v13; // eax
  ULONG v14; // edi
  bool v15; // zf
  int v16; // ecx
  int v17; // ecx
  ULONG v18; // edx
  unsigned int *v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // ebx
  int v23; // ecx
  int v24; // eax
  unsigned int v25; // edx
  unsigned int v26; // eax
  int v27; // ecx
  int v28; // eax
  ULONG v29; // ebx
  unsigned int v30; // edx
  ULONG v31; // ecx
  bool v32; // cf
  int v33; // ecx
  int v34; // eax
  unsigned int v35; // eax
  unsigned int *v36; // [esp+14h] [ebp-18h]
  ULONG v37; // [esp+18h] [ebp-14h]
  unsigned int *v38; // [esp+1Ch] [ebp-10h]
  unsigned int v39; // [esp+20h] [ebp-Ch]
  unsigned int *v40; // [esp+28h] [ebp-4h]

  v3 = NumberToFind;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v6 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v7 = BitMapHeader->SizeOfBitMap - 1;
  v37 = v6;
  v40 = Buffer;
  if ( !NumberToFind )
    return v6 & 0xFFFFFFF8;
  while ( 2 )
  {
    if ( v7 - v6 + 1 < v3 )
    {
      v8 = -1;
      goto LABEL_35;
    }
    v39 = v7 - v3 + 1;
    v38 = &Buffer[v39 >> 5];
    v10 = &Buffer[v37 >> 5];
    v11 = ((1 << (v6 & 0x1F)) - 1) | *v10;
    v3 = NumberToFind;
    if ( NumberToFind > 0x3F )
    {
      v12 = (unsigned int)v38;
      if ( (v39 & 0x1F) != 0 )
        v12 = (unsigned int)(v38 + 1);
      if ( v11 )
      {
        if ( *++v10 )
        {
          v14 = v39;
          goto LABEL_18;
        }
        v15 = !_BitScanReverse((unsigned int *)&v16, v11);
        if ( v15 )
          v13 = 32;
        else
          v13 = 31 - v16;
      }
      else
      {
        v13 = 0;
      }
      v14 = v39;
LABEL_23:
      v8 = 32 * (v10 - v40) - v13;
      if ( v8 <= v14 )
      {
        v18 = v3 - v13;
        v19 = &v10[v18 >> 5];
        while ( ++v10 != v19 )
        {
          if ( *v10 )
            goto LABEL_17;
        }
        v20 = v18 & 0x1F;
        if ( !v20 )
          goto LABEL_31;
        v15 = !_BitScanForward(&v21, *v10);
        if ( v15 )
          v21 = 32;
        if ( v21 >= v20 )
          goto LABEL_31;
LABEL_17:
        v3 = NumberToFind;
LABEL_18:
        while ( (unsigned int)v10 <= v12 )
        {
          if ( !*++v10 )
          {
            v15 = !_BitScanReverse((unsigned int *)&v17, *(v10 - 1));
            if ( v15 )
              v13 = 32;
            else
              v13 = 31 - v17;
            goto LABEL_23;
          }
        }
      }
      goto LABEL_39;
    }
    if ( NumberToFind >= 0x20 )
    {
      while ( 1 )
      {
        while ( v11 < 0 )
        {
          if ( ++v10 > v38 )
            goto LABEL_39;
          v11 = *v10;
        }
        v15 = !_BitScanReverse((unsigned int *)&v23, v11);
        if ( v15 )
          v24 = 32;
        else
          v24 = 31 - v23;
        Buffer = BitMapHeader->Buffer;
        v8 = 32 * (v10 - v40 + 1) - v24;
        if ( v8 > v39 )
          goto LABEL_80;
        v25 = v3 - v24;
        if ( !v25 )
          goto LABEL_32;
        v11 = *++v10;
        if ( v25 >= 0x20 )
        {
          if ( v11 )
            goto LABEL_57;
          v25 -= 32;
          if ( !v25 )
            goto LABEL_31;
          v11 = *++v10;
        }
        v15 = !_BitScanForward(&v26, v11);
        if ( v15 )
          v26 = 32;
        if ( v26 >= v25 )
        {
LABEL_31:
          Buffer = BitMapHeader->Buffer;
          goto LABEL_32;
        }
LABEL_57:
        v3 = NumberToFind;
      }
    }
    if ( NumberToFind <= 1 )
    {
      if ( v11 == -1 )
      {
        while ( ++v10 <= v38 )
        {
          v11 = *v10;
          if ( *v10 != -1 )
            goto LABEL_84;
        }
LABEL_39:
        Buffer = BitMapHeader->Buffer;
        v8 = -1;
        goto LABEL_34;
      }
LABEL_84:
      _BitScanForward(&v35, ~v11);
      Buffer = BitMapHeader->Buffer;
      v8 = v35 + 32 * (v10 - v40);
LABEL_79:
      if ( v8 > v39 )
      {
LABEL_80:
        v8 = -1;
        goto LABEL_34;
      }
LABEL_32:
      if ( v8 == -1 )
        goto LABEL_33;
    }
    else
    {
      v27 = 0;
      v36 = &v40[v7 >> 5];
      while ( 1 )
      {
        if ( v11 == -1 )
        {
          do
          {
            if ( ++v10 > v38 )
              goto LABEL_39;
            v11 = *v10;
          }
          while ( *v10 == -1 );
          v27 = 0;
        }
        v15 = !_BitScanForward((unsigned int *)&v28, v11);
        if ( v15 )
          v28 = 32;
        if ( v27 + v28 >= v3 )
        {
          v33 = -v27;
LABEL_78:
          Buffer = BitMapHeader->Buffer;
          v8 = 32 * (v10 - v40) + v33;
          goto LABEL_79;
        }
        v29 = NumberToFind;
        v30 = ~v11;
        while ( 1 )
        {
          v31 = v29 >> 1;
          v30 &= v30 >> (v29 >> 1);
          if ( !v30 )
            break;
          v32 = v29 == v31;
          v29 -= v31;
          if ( v32 || v29 == 1 )
          {
            _BitScanForward((unsigned int *)&v33, v30);
            v3 = NumberToFind;
            goto LABEL_78;
          }
        }
        if ( v10 == v36 )
          break;
        v15 = !_BitScanReverse((unsigned int *)&v34, v11);
        if ( v15 )
          v27 = 32;
        else
          v27 = 31 - v34;
        v3 = NumberToFind;
        v11 = *++v10;
      }
      Buffer = BitMapHeader->Buffer;
      v8 = -1;
LABEL_33:
      v3 = NumberToFind;
LABEL_34:
      SizeOfBitMap = BitMapHeader->SizeOfBitMap;
LABEL_35:
      if ( v37 )
      {
        v22 = v3 + HintIndex;
        if ( v3 + HintIndex > SizeOfBitMap )
          v22 = SizeOfBitMap;
        v7 = v22 - 1;
        v6 = 0;
        v37 = 0;
        continue;
      }
    }
    return v8;
  }
}
