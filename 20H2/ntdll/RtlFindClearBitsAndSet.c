/*
 * XREFs of RtlFindClearBitsAndSet @ 0x1800486B0
 * Callers:
 *     LdrpAcquireTlsIndex @ 0x180048538 (LdrpAcquireTlsIndex.c)
 * Callees:
 *     RtlSetBits @ 0x1800489E0 (RtlSetBits.c)
 */

ULONG __cdecl RtlFindClearBitsAndSet(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r15d
  _RTL_BITMAP *v5; // r13
  ULONG v6; // ebx
  unsigned int v7; // r9d
  unsigned int *Buffer; // rdi
  int v9; // r12d
  unsigned int v10; // r10d
  ULONG v11; // edx
  char *v12; // r14
  ULONG v13; // ebp
  __int64 v14; // r8
  unsigned __int64 v15; // rsi
  unsigned __int64 *v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  unsigned int v19; // ecx
  bool v20; // cc
  ULONG v21; // ebx
  int v23; // ecx
  unsigned __int64 *v24; // rdi
  bool v25; // zf
  __int64 v26; // rax
  ULONG v27; // r10d
  unsigned __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rcx
  ULONG v31; // r9d
  __int64 v32; // rax
  int v33; // r8d
  unsigned int v34; // r9d
  unsigned __int64 v35; // r10
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  char v38; // r8
  unsigned __int64 *v39; // r9
  __int64 v40; // rax
  unsigned int v41; // r8d
  __int64 v42; // rax
  unsigned int *v43; // [rsp+28h] [rbp-50h]
  ULONG v45; // [rsp+90h] [rbp+18h]

  v45 = HintIndex;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v5 = BitMapHeader;
  v6 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v7 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
  {
    v21 = v6 & 0xFFFFFFF8;
    goto LABEL_15;
  }
  Buffer = BitMapHeader->Buffer;
  v43 = Buffer;
  v9 = ((unsigned __int8)Buffer & 4) != 0LL ? 0x20 : 0;
  while ( 1 )
  {
    v10 = v9 + v7;
    v11 = v9 + v6;
    v12 = (char *)Buffer - (((unsigned __int8)v43 & 4) != 0LL ? 4 : 0);
    if ( v7 - v6 + 1 >= NumberToFind )
    {
      v13 = v10 - NumberToFind + 1;
      v14 = (1LL << (v11 & 0x3F)) - 1;
      v15 = (unsigned __int64)&v12[8 * ((unsigned __int64)v13 >> 6)];
      v16 = (unsigned __int64 *)&v12[8 * ((unsigned __int64)v11 >> 6)];
      v17 = *v16 | v14;
      if ( NumberToFind > 0x7F )
      {
        v35 = v15 + 8;
        if ( (v13 & 0x3F) == 0 )
          v35 = (unsigned __int64)&v12[8 * ((unsigned __int64)v13 >> 6)];
        if ( v17 )
        {
          if ( *++v16 )
            goto LABEL_76;
          v25 = !_BitScanReverse64((unsigned __int64 *)&v36, v17);
          if ( v25 )
          {
            LODWORD(v17) = 64;
            goto LABEL_58;
          }
LABEL_57:
          LODWORD(v17) = 63 - v36;
        }
LABEL_58:
        while ( 1 )
        {
          v19 = ((unsigned int)(((char *)v16 - v12) >> 3) << 6) - v17;
          if ( v19 > v13 )
            goto LABEL_35;
          v37 = NumberToFind - (unsigned int)v17;
          v38 = NumberToFind - v17;
          v39 = &v16[v37 >> 6];
          while ( ++v16 != v39 )
          {
            if ( *v16 )
              goto LABEL_76;
          }
          v41 = v38 & 0x3F;
          if ( !v41 )
            goto LABEL_12;
          v25 = !_BitScanForward64((unsigned __int64 *)&v42, *v16);
          if ( v25 )
            LODWORD(v42) = 64;
          if ( (unsigned int)v42 >= v41 )
            goto LABEL_12;
          do
          {
LABEL_76:
            if ( (unsigned __int64)v16 > v35 )
              goto LABEL_35;
            ++v16;
          }
          while ( *v16 );
          v25 = !_BitScanReverse64((unsigned __int64 *)&v36, *(v16 - 1));
          if ( !v25 )
            goto LABEL_57;
          LODWORD(v17) = 64;
        }
      }
      if ( NumberToFind < 0x40 )
      {
        if ( NumberToFind > 1 )
        {
          v23 = 0;
          v24 = (unsigned __int64 *)&v12[8 * ((unsigned __int64)v10 >> 6)];
          while ( v17 != -1 )
          {
LABEL_23:
            v25 = !_BitScanForward64((unsigned __int64 *)&v26, v17);
            if ( v25 )
              LODWORD(v26) = 64;
            if ( v23 + (int)v26 >= NumberToFind )
            {
              LODWORD(v30) = -v23;
LABEL_34:
              v19 = ((unsigned int)(((char *)v16 - v12) >> 3) << 6) + v30;
              v20 = v19 <= v13;
              goto LABEL_11;
            }
            v27 = NumberToFind;
            v28 = ~v17;
            while ( 1 )
            {
              v28 &= v28 >> (v27 >> 1);
              if ( !v28 )
                break;
              v27 -= v27 >> 1;
              if ( v27 <= 1 )
              {
                _BitScanForward64((unsigned __int64 *)&v30, v28);
                goto LABEL_34;
              }
            }
            if ( v16 == v24 )
              goto LABEL_35;
            v25 = !_BitScanReverse64((unsigned __int64 *)&v29, v17);
            if ( v25 )
              v23 = 64;
            else
              v23 = 63 - v29;
            v17 = *++v16;
          }
          while ( (unsigned __int64)++v16 <= v15 )
          {
            v17 = *v16;
            if ( *v16 != -1LL )
            {
              v23 = 0;
              goto LABEL_23;
            }
          }
        }
        else
        {
          while ( v17 == -1 )
          {
            if ( (unsigned __int64)++v16 > v15 )
              goto LABEL_35;
            v17 = *v16;
          }
          _BitScanForward64(&v18, ~v17);
          v19 = v18 + ((unsigned int)(((char *)v16 - v12) >> 3) << 6);
          v20 = v19 <= v13;
LABEL_11:
          if ( v20 )
          {
LABEL_12:
            if ( v19 != -1 )
              break;
            goto LABEL_36;
          }
        }
LABEL_35:
        v19 = -1;
LABEL_36:
        HintIndex = v45;
        goto LABEL_37;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v17 < 0 )
          {
            if ( (unsigned __int64)++v16 > v15 )
              goto LABEL_35;
            v17 = *v16;
          }
          v25 = !_BitScanReverse64((unsigned __int64 *)&v32, v17);
          if ( v25 )
            v33 = 64;
          else
            v33 = 63 - v32;
          v19 = (((unsigned int)(((char *)v16 - v12) >> 3) + 1) << 6) - v33;
          if ( v19 > v13 )
            goto LABEL_35;
          v34 = NumberToFind - v33;
          if ( NumberToFind == v33 )
            goto LABEL_12;
          v17 = *++v16;
          if ( v34 >= 0x40 )
            break;
LABEL_63:
          v25 = !_BitScanForward64((unsigned __int64 *)&v40, v17);
          if ( v25 )
            LODWORD(v40) = 64;
          if ( (unsigned int)v40 >= v34 )
            goto LABEL_12;
        }
        if ( !v17 )
        {
          v34 -= 64;
          if ( !v34 )
            goto LABEL_12;
          v17 = *++v16;
          goto LABEL_63;
        }
      }
    }
    v19 = -1;
LABEL_37:
    if ( !v6 )
      break;
    Buffer = v43;
    v31 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v31 = SizeOfBitMap;
    v7 = v31 - 1;
    v6 = 0;
  }
  v5 = BitMapHeader;
  v21 = v19 - v9;
  if ( v19 == -1 )
    v21 = -1;
LABEL_15:
  if ( v21 != -1 )
    RtlSetBits(v5, v21, NumberToFind);
  return v21;
}
