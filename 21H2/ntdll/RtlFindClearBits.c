/*
 * XREFs of RtlFindClearBits @ 0x180086550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindClearBits(PRTL_BITMAP BitMapHeader, ULONG NumberToFind, ULONG HintIndex)
{
  unsigned int SizeOfBitMap; // r15d
  ULONG v6; // r9d
  unsigned int v7; // r10d
  unsigned int *Buffer; // r8
  __int64 v9; // rcx
  int v10; // r12d
  unsigned int v11; // r11d
  ULONG v12; // edx
  char *v13; // r14
  ULONG v14; // ebp
  __int64 v15; // r8
  unsigned __int64 v16; // rdi
  unsigned __int64 *v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  unsigned int v20; // ecx
  bool v21; // cc
  ULONG v22; // r9d
  int v24; // ecx
  unsigned __int64 *v25; // rbx
  bool v26; // zf
  __int64 v27; // rax
  ULONG v28; // r11d
  unsigned __int64 v29; // r10
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // r8d
  unsigned int v34; // r10d
  __int64 v35; // rax
  unsigned __int64 v36; // r11
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  char v39; // r8
  unsigned __int64 *v40; // r10
  unsigned int v41; // r8d
  __int64 v42; // rax
  ULONG v43; // r10d
  unsigned int *v44; // [rsp+0h] [rbp-58h]
  __int64 v45; // [rsp+8h] [rbp-50h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v6 = HintIndex < BitMapHeader->SizeOfBitMap ? HintIndex : 0;
  v7 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
    return v6 & 0xFFFFFFF8;
  Buffer = BitMapHeader->Buffer;
  v44 = Buffer;
  v9 = (unsigned __int8)Buffer & 4;
  v45 = v9;
  v10 = v9 != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v11 = v10 + v7;
    v12 = v10 + v6;
    v13 = (char *)Buffer - (v9 != 0 ? 4 : 0);
    if ( v7 - v6 + 1 >= NumberToFind )
    {
      v14 = v11 - NumberToFind + 1;
      v15 = (1LL << (v12 & 0x3F)) - 1;
      v16 = (unsigned __int64)&v13[8 * ((unsigned __int64)v14 >> 6)];
      v17 = (unsigned __int64 *)&v13[8 * ((unsigned __int64)v12 >> 6)];
      v18 = *v17 | v15;
      if ( NumberToFind > 0x7F )
      {
        v36 = v16 + 8;
        if ( (v14 & 0x3F) == 0 )
          v36 = (unsigned __int64)&v13[8 * ((unsigned __int64)v14 >> 6)];
        if ( v18 )
        {
          if ( *++v17 )
            goto LABEL_72;
          v26 = !_BitScanReverse64((unsigned __int64 *)&v37, v18);
          if ( v26 )
          {
            LODWORD(v18) = 64;
            goto LABEL_58;
          }
LABEL_57:
          LODWORD(v18) = 63 - v37;
        }
LABEL_58:
        while ( 1 )
        {
          v20 = ((unsigned int)(((char *)v17 - v13) >> 3) << 6) - v18;
          if ( v20 > v14 )
            goto LABEL_34;
          v38 = NumberToFind - (unsigned int)v18;
          v39 = NumberToFind - v18;
          v40 = &v17[v38 >> 6];
          while ( ++v17 != v40 )
          {
            if ( *v17 )
              goto LABEL_72;
          }
          v41 = v39 & 0x3F;
          if ( !v41 )
            goto LABEL_12;
          v26 = !_BitScanForward64((unsigned __int64 *)&v42, *v17);
          if ( v26 )
            LODWORD(v42) = 64;
          if ( (unsigned int)v42 >= v41 )
            goto LABEL_12;
          do
          {
LABEL_72:
            if ( (unsigned __int64)v17 > v36 )
              goto LABEL_34;
            ++v17;
          }
          while ( *v17 );
          v26 = !_BitScanReverse64((unsigned __int64 *)&v37, *(v17 - 1));
          if ( !v26 )
            goto LABEL_57;
          LODWORD(v18) = 64;
        }
      }
      if ( NumberToFind < 0x40 )
      {
        if ( NumberToFind > 1 )
        {
          v24 = 0;
          v25 = (unsigned __int64 *)&v13[8 * ((unsigned __int64)v11 >> 6)];
          while ( v18 != -1 )
          {
LABEL_21:
            v26 = !_BitScanForward64((unsigned __int64 *)&v27, v18);
            if ( v26 )
              LODWORD(v27) = 64;
            if ( v24 + (int)v27 >= NumberToFind )
            {
              LODWORD(v31) = -v24;
LABEL_32:
              v20 = ((unsigned int)(((char *)v17 - v13) >> 3) << 6) + v31;
              v21 = v20 <= v14;
              goto LABEL_11;
            }
            v28 = NumberToFind;
            v29 = ~v18;
            while ( 1 )
            {
              v29 &= v29 >> (v28 >> 1);
              if ( !v29 )
                break;
              v28 -= v28 >> 1;
              if ( v28 <= 1 )
              {
                _BitScanForward64((unsigned __int64 *)&v31, v29);
                goto LABEL_32;
              }
            }
            if ( v17 == v25 )
              goto LABEL_34;
            v26 = !_BitScanReverse64((unsigned __int64 *)&v30, v18);
            if ( v26 )
              v24 = 64;
            else
              v24 = 63 - v30;
            v18 = *++v17;
          }
          while ( (unsigned __int64)++v17 <= v16 )
          {
            v18 = *v17;
            if ( *v17 != -1LL )
            {
              v24 = 0;
              goto LABEL_21;
            }
          }
        }
        else
        {
          while ( v18 == -1 )
          {
            if ( (unsigned __int64)++v17 > v16 )
              goto LABEL_34;
            v18 = *v17;
          }
          _BitScanForward64(&v19, ~v18);
          v20 = v19 + ((unsigned int)(((char *)v17 - v13) >> 3) << 6);
          v21 = v20 <= v14;
LABEL_11:
          if ( v21 )
          {
LABEL_12:
            if ( v20 != -1 )
              break;
            goto LABEL_35;
          }
        }
LABEL_34:
        v20 = -1;
LABEL_35:
        Buffer = v44;
        goto LABEL_36;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v18 < 0 )
          {
            if ( (unsigned __int64)++v17 > v16 )
              goto LABEL_34;
            v18 = *v17;
          }
          v26 = !_BitScanReverse64((unsigned __int64 *)&v32, v18);
          if ( v26 )
            v33 = 64;
          else
            v33 = 63 - v32;
          v20 = (((unsigned int)(((char *)v17 - v13) >> 3) + 1) << 6) - v33;
          if ( v20 > v14 )
            goto LABEL_34;
          v34 = NumberToFind - v33;
          if ( NumberToFind == v33 )
            goto LABEL_12;
          v18 = *++v17;
          if ( v34 >= 0x40 )
            break;
LABEL_48:
          v26 = !_BitScanForward64((unsigned __int64 *)&v35, v18);
          if ( v26 )
            LODWORD(v35) = 64;
          if ( (unsigned int)v35 >= v34 )
            goto LABEL_12;
        }
        if ( !v18 )
        {
          v34 -= 64;
          if ( !v34 )
            goto LABEL_12;
          v18 = *++v17;
          goto LABEL_48;
        }
      }
    }
    v20 = -1;
LABEL_36:
    if ( !v6 )
      break;
    v9 = v45;
    v43 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v43 = SizeOfBitMap;
    v7 = v43 - 1;
    v6 = 0;
  }
  v22 = v20 - v10;
  if ( v20 == -1 )
    return -1;
  return v22;
}
