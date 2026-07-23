/*
 * XREFs of RtlFindSetBits @ 0x18008A0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindSetBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r15d
  ULONG v6; // r10d
  unsigned int v7; // r9d
  unsigned int *Buffer; // r11
  __int64 v9; // rcx
  int v10; // r12d
  unsigned int v11; // r8d
  ULONG v12; // edx
  char *v13; // r14
  ULONG v14; // ebp
  __int64 v15; // r9
  unsigned __int64 v16; // rsi
  char *v17; // rdx
  signed __int64 v18; // r9
  int v19; // ecx
  unsigned __int64 v20; // rax
  unsigned int v21; // r8d
  bool v22; // cc
  ULONG v23; // r10d
  int v25; // ecx
  char *v26; // rbx
  bool v27; // zf
  __int64 v28; // rax
  ULONG v29; // r11d
  unsigned __int64 v30; // r8
  __int64 v31; // rax
  unsigned __int64 v32; // r11
  __int64 v33; // rax
  int v34; // ecx
  char v35; // r9
  char *v36; // rcx
  __int64 v37; // rax
  unsigned int v38; // r11d
  __int64 v39; // rax
  unsigned int v40; // r9d
  __int64 v41; // rcx
  __int64 v42; // r8
  ULONG v43; // r9d
  __int64 v44; // [rsp+0h] [rbp-58h]
  unsigned int *v45; // [rsp+8h] [rbp-50h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v6 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v7 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
    return v6 & 0xFFFFFFF8;
  Buffer = BitMapHeader->Buffer;
  v45 = Buffer;
  v9 = (unsigned __int8)Buffer & 4;
  v44 = v9;
  v10 = v9 != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v11 = v10 + v7;
    v12 = v10 + v6;
    v13 = (char *)Buffer - (v9 != 0 ? 4 : 0);
    if ( v7 - v6 + 1 < NumberToFind )
    {
LABEL_33:
      v21 = -1;
      goto LABEL_75;
    }
    v14 = v11 - NumberToFind + 1;
    v15 = (1LL << (v12 & 0x3F)) - 1;
    v16 = (unsigned __int64)&v13[8 * ((unsigned __int64)v14 >> 6)];
    v17 = &v13[8 * ((unsigned __int64)v12 >> 6)];
    v18 = ~*(_QWORD *)v17 | v15;
    if ( NumberToFind > 0x7F )
    {
      v32 = v16 + 8;
      if ( (v14 & 0x3F) == 0 )
        v32 = (unsigned __int64)&v13[8 * ((unsigned __int64)(v11 - NumberToFind + 1) >> 6)];
      if ( !v18 )
      {
        v34 = 0;
        goto LABEL_40;
      }
      v17 += 8;
      if ( *(_QWORD *)v17 != -1LL )
        goto LABEL_68;
      v27 = !_BitScanReverse64((unsigned __int64 *)&v33, v18);
      if ( !v27 )
      {
        v34 = 63 - v33;
        goto LABEL_40;
      }
LABEL_67:
      v34 = 64;
LABEL_40:
      while ( 1 )
      {
        v21 = ((unsigned int)((v17 - v13) >> 3) << 6) - v34;
        if ( v21 > v14 )
          goto LABEL_33;
        v35 = NumberToFind - v34;
        v36 = &v17[8 * ((unsigned __int64)(NumberToFind - v34) >> 6)];
        while ( 1 )
        {
          v17 += 8;
          if ( v17 == v36 )
            break;
          if ( *(_QWORD *)v17 != -1LL )
            goto LABEL_68;
        }
        v40 = v35 & 0x3F;
        if ( !v40 )
          goto LABEL_12;
        v27 = !_BitScanForward64((unsigned __int64 *)&v41, ~*(_QWORD *)v17);
        if ( v27 )
          LODWORD(v41) = 64;
        if ( (unsigned int)v41 >= v40 )
          goto LABEL_12;
        do
        {
LABEL_68:
          if ( (unsigned __int64)v17 > v32 )
            goto LABEL_33;
          v17 += 8;
        }
        while ( *(_QWORD *)v17 != -1LL );
        v27 = !_BitScanReverse64((unsigned __int64 *)&v42, ~*((_QWORD *)v17 - 1));
        if ( v27 )
          goto LABEL_67;
        v34 = 63 - v42;
      }
    }
    v19 = 64;
    if ( NumberToFind >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v18 < 0 )
          {
            v17 += 8;
            if ( (unsigned __int64)v17 > v16 )
              goto LABEL_33;
            v18 = ~*(_QWORD *)v17;
          }
          v27 = !_BitScanReverse64((unsigned __int64 *)&v37, v18);
          if ( !v27 )
            v19 = 63 - v37;
          v21 = (((unsigned int)((v17 - v13) >> 3) + 1) << 6) - v19;
          if ( v21 > v14 )
            goto LABEL_33;
          v38 = NumberToFind - v19;
          if ( NumberToFind == v19 )
            goto LABEL_12;
          v17 += 8;
          v19 = 64;
          v18 = ~*(_QWORD *)v17;
          if ( v38 >= 0x40 )
            break;
LABEL_53:
          v27 = !_BitScanForward64((unsigned __int64 *)&v39, v18);
          if ( v27 )
            LODWORD(v39) = 64;
          if ( (unsigned int)v39 >= v38 )
            goto LABEL_12;
        }
        if ( *(_QWORD *)v17 == -1LL )
        {
          v38 -= 64;
          if ( !v38 )
            goto LABEL_12;
          v17 += 8;
          v18 = ~*(_QWORD *)v17;
          goto LABEL_53;
        }
      }
    }
    if ( NumberToFind > 1 )
    {
      v25 = 0;
      v26 = &v13[8 * ((unsigned __int64)v11 >> 6)];
      while ( v18 != -1 )
      {
LABEL_21:
        v27 = !_BitScanForward64((unsigned __int64 *)&v28, v18);
        if ( v27 )
          LODWORD(v28) = 64;
        if ( v25 + (int)v28 >= NumberToFind )
        {
          LODWORD(v30) = -v25;
LABEL_32:
          v21 = ((unsigned int)((v17 - v13) >> 3) << 6) + v30;
          v22 = v21 <= v14;
          goto LABEL_11;
        }
        v29 = NumberToFind;
        v30 = ~v18;
        while ( 1 )
        {
          v30 &= v30 >> (v29 >> 1);
          if ( !v30 )
            break;
          v29 -= v29 >> 1;
          if ( v29 <= 1 )
          {
            _BitScanForward64(&v30, v30);
            goto LABEL_32;
          }
        }
        if ( v17 == v26 )
          goto LABEL_33;
        v27 = !_BitScanReverse64((unsigned __int64 *)&v31, v18);
        if ( v27 )
          v25 = 64;
        else
          v25 = 63 - v31;
        v17 += 8;
        v18 = ~*(_QWORD *)v17;
      }
      while ( 1 )
      {
        v17 += 8;
        if ( (unsigned __int64)v17 > v16 )
          goto LABEL_33;
        v18 = ~*(_QWORD *)v17;
        if ( *(_QWORD *)v17 )
        {
          v25 = 0;
          goto LABEL_21;
        }
      }
    }
    while ( v18 == -1 )
    {
      v17 += 8;
      if ( (unsigned __int64)v17 > v16 )
        goto LABEL_33;
      v18 = ~*(_QWORD *)v17;
    }
    _BitScanForward64(&v20, ~v18);
    v21 = v20 + ((unsigned int)((v17 - v13) >> 3) << 6);
    v22 = v21 <= v14;
LABEL_11:
    if ( !v22 )
      goto LABEL_33;
LABEL_12:
    if ( v21 != -1 )
      break;
LABEL_75:
    if ( !v6 )
      break;
    v9 = v44;
    v43 = NumberToFind + HintIndex;
    Buffer = v45;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v43 = SizeOfBitMap;
    v7 = v43 - 1;
    v6 = 0;
  }
  v23 = v21 - v10;
  if ( v21 == -1 )
    return -1;
  return v23;
}
