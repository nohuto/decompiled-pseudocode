/*
 * XREFs of RtlFindSetBitsAndClear @ 0x1800EC620
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x18004B7E0 (RtlClearBits.c)
 */

ULONG __cdecl RtlFindSetBitsAndClear(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r15d
  ULONG v4; // esi
  _RTL_BITMAP *v6; // r13
  ULONG v7; // ebx
  unsigned int v8; // r9d
  ULONG v9; // ebx
  unsigned int *Buffer; // r10
  int v11; // r12d
  unsigned int v12; // r8d
  ULONG v13; // edx
  char *v14; // r14
  unsigned int v15; // r8d
  ULONG v16; // ebp
  __int64 v17; // r9
  unsigned __int64 v18; // rsi
  char *v19; // rdx
  signed __int64 v20; // r9
  unsigned __int64 v21; // r10
  int v22; // ecx
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // r8
  char v26; // r9
  char *v27; // rcx
  unsigned int v28; // r9d
  __int64 v29; // rcx
  unsigned int v30; // r9d
  int v31; // ecx
  int v32; // ecx
  char *v33; // rdi
  __int64 v34; // rax
  ULONG v35; // r10d
  unsigned __int64 v36; // r8
  __int64 v37; // rax
  unsigned int v38; // r10d
  __int64 v39; // rax
  __int64 v40; // rax
  bool v41; // cc
  unsigned __int64 v42; // rax
  unsigned int *v44; // [rsp+28h] [rbp-50h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = HintIndex;
  v6 = BitMapHeader;
  v7 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v8 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
  {
    v9 = v7 & 0xFFFFFFF8;
    goto LABEL_78;
  }
  Buffer = BitMapHeader->Buffer;
  v44 = Buffer;
  v11 = ((unsigned __int8)Buffer & 4) != 0LL ? 0x20 : 0;
  while ( 1 )
  {
    v12 = v11 + v8;
    v13 = v11 + v7;
    v14 = (char *)Buffer - (((unsigned __int8)v44 & 4) != 0LL ? 4 : 0);
    if ( v8 - v7 + 1 < NumberToFind )
    {
      v15 = -1;
      goto LABEL_29;
    }
    v16 = v12 - NumberToFind + 1;
    v17 = (1LL << (v13 & 0x3F)) - 1;
    v18 = (unsigned __int64)&v14[8 * ((unsigned __int64)v16 >> 6)];
    v19 = &v14[8 * ((unsigned __int64)v13 >> 6)];
    v20 = ~*(_QWORD *)v19 | v17;
    if ( NumberToFind > 0x7F )
    {
      v21 = v18 + 8;
      if ( (v16 & 0x3F) == 0 )
        v21 = (unsigned __int64)&v14[8 * ((unsigned __int64)(v12 - NumberToFind + 1) >> 6)];
      if ( v20 )
      {
        v19 += 8;
        if ( *(_QWORD *)v19 != -1LL )
          goto LABEL_15;
        v23 = !_BitScanReverse64((unsigned __int64 *)&v24, v20);
        if ( v23 )
LABEL_13:
          v22 = 64;
        else
          v22 = 63 - v24;
      }
      else
      {
        v22 = 0;
      }
LABEL_19:
      v15 = ((unsigned int)((v19 - v14) >> 3) << 6) - v22;
      if ( v15 <= v16 )
      {
        v26 = NumberToFind - v22;
        v27 = &v19[8 * ((unsigned __int64)(NumberToFind - v22) >> 6)];
        while ( 1 )
        {
          v19 += 8;
          if ( v19 == v27 )
            break;
          if ( *(_QWORD *)v19 != -1LL )
            goto LABEL_15;
        }
        v28 = v26 & 0x3F;
        if ( !v28 )
          goto LABEL_27;
        v23 = !_BitScanForward64((unsigned __int64 *)&v29, ~*(_QWORD *)v19);
        if ( v23 )
          LODWORD(v29) = 64;
        if ( (unsigned int)v29 >= v28 )
          goto LABEL_27;
LABEL_15:
        while ( (unsigned __int64)v19 <= v21 )
        {
          v19 += 8;
          if ( *(_QWORD *)v19 == -1LL )
          {
            v23 = !_BitScanReverse64((unsigned __int64 *)&v25, ~*((_QWORD *)v19 - 1));
            if ( v23 )
              goto LABEL_13;
            v22 = 63 - v25;
            goto LABEL_19;
          }
        }
      }
      goto LABEL_67;
    }
    v31 = 64;
    if ( NumberToFind >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v20 < 0 )
          {
            v19 += 8;
            if ( (unsigned __int64)v19 > v18 )
              goto LABEL_67;
            v20 = ~*(_QWORD *)v19;
          }
          v23 = !_BitScanReverse64((unsigned __int64 *)&v37, v20);
          if ( !v23 )
            v31 = 63 - v37;
          v15 = (((unsigned int)((v19 - v14) >> 3) + 1) << 6) - v31;
          if ( v15 > v16 )
            goto LABEL_67;
          v38 = NumberToFind - v31;
          if ( NumberToFind == v31 )
            goto LABEL_27;
          v19 += 8;
          v31 = 64;
          v20 = ~*(_QWORD *)v19;
          if ( v38 >= 0x40 )
            break;
LABEL_58:
          v23 = !_BitScanForward64((unsigned __int64 *)&v39, v20);
          if ( v23 )
            LODWORD(v39) = 64;
          if ( (unsigned int)v39 >= v38 )
            goto LABEL_27;
        }
        if ( *(_QWORD *)v19 == -1LL )
        {
          v38 -= 64;
          if ( !v38 )
            goto LABEL_27;
          v19 += 8;
          v20 = ~*(_QWORD *)v19;
          goto LABEL_58;
        }
      }
    }
    if ( NumberToFind <= 1 )
    {
      while ( v20 == -1 )
      {
        v19 += 8;
        if ( (unsigned __int64)v19 > v18 )
          goto LABEL_67;
        v20 = ~*(_QWORD *)v19;
      }
      _BitScanForward64(&v42, ~v20);
      v15 = v42 + ((unsigned int)((v19 - v14) >> 3) << 6);
      v41 = v15 <= v16;
LABEL_70:
      if ( v41 )
      {
LABEL_27:
        if ( v15 != -1 )
          break;
        goto LABEL_28;
      }
    }
    else
    {
      v32 = 0;
      v33 = &v14[8 * ((unsigned __int64)v12 >> 6)];
      while ( v20 != -1 )
      {
LABEL_40:
        v23 = !_BitScanForward64((unsigned __int64 *)&v34, v20);
        if ( v23 )
          LODWORD(v34) = 64;
        if ( v32 + (int)v34 >= NumberToFind )
        {
          LODWORD(v36) = -v32;
LABEL_69:
          v15 = ((unsigned int)((v19 - v14) >> 3) << 6) + v36;
          v41 = v15 <= v16;
          goto LABEL_70;
        }
        v35 = NumberToFind;
        v36 = ~v20;
        while ( 1 )
        {
          v36 &= v36 >> (v35 >> 1);
          if ( !v36 )
            break;
          v35 -= v35 >> 1;
          if ( v35 <= 1 )
          {
            _BitScanForward64(&v36, v36);
            goto LABEL_69;
          }
        }
        if ( v19 == v33 )
          goto LABEL_67;
        v23 = !_BitScanReverse64((unsigned __int64 *)&v40, v20);
        if ( v23 )
          v32 = 64;
        else
          v32 = 63 - v40;
        v19 += 8;
        v20 = ~*(_QWORD *)v19;
      }
      while ( 1 )
      {
        v19 += 8;
        if ( (unsigned __int64)v19 > v18 )
          break;
        v20 = ~*(_QWORD *)v19;
        if ( *(_QWORD *)v19 )
        {
          v32 = 0;
          goto LABEL_40;
        }
      }
    }
LABEL_67:
    v15 = -1;
LABEL_28:
    v4 = HintIndex;
LABEL_29:
    if ( !v7 )
      break;
    Buffer = v44;
    v30 = NumberToFind + v4;
    if ( NumberToFind + v4 > SizeOfBitMap )
      v30 = SizeOfBitMap;
    v8 = v30 - 1;
    v7 = 0;
  }
  v6 = BitMapHeader;
  v9 = v15 - v11;
  if ( v15 == -1 )
    v9 = -1;
LABEL_78:
  if ( v9 != -1 )
    RtlClearBits(v6, v9, NumberToFind);
  return v9;
}
