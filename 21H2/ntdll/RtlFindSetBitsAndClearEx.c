/*
 * XREFs of RtlFindSetBitsAndClearEx @ 0x1800EC810
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBitsEx @ 0x1800EB9E0 (RtlClearBitsEx.c)
 */

ULONG64 __cdecl RtlFindSetBitsAndClearEx(PRTL_BITMAP_EX BitMapHeader, ULONG64 NumberToFind, ULONG64 HintIndex)
{
  unsigned __int64 SizeOfBitMap; // r15
  unsigned __int64 *Buffer; // r14
  ULONG64 v8; // rbx
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  ULONG64 v12; // rbp
  unsigned __int64 *v13; // rsi
  unsigned __int64 *v14; // r8
  signed __int64 v15; // r9
  unsigned __int64 *v16; // r10
  unsigned int v17; // ecx
  bool v18; // zf
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 *v21; // r9
  unsigned int v22; // r9d
  __int64 v23; // rcx
  ULONG64 v24; // r10
  __int64 v25; // rdx
  unsigned __int64 *v26; // rdi
  __int64 v27; // rax
  unsigned int v28; // r10d
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // eax
  ULONG64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rax

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v8 = HintIndex & -(__int64)(HintIndex < BitMapHeader->SizeOfBitMap);
  v9 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
  {
    v10 = v8 & 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_77;
  }
  while ( 1 )
  {
    if ( v9 - v8 + 1 < NumberToFind )
    {
LABEL_4:
      v11 = -1LL;
      goto LABEL_28;
    }
    v12 = v9 - NumberToFind + 1;
    v13 = &Buffer[v12 >> 6];
    v14 = &Buffer[v8 >> 6];
    v15 = ~*v14 | ((1LL << (v8 & 0x3F)) - 1);
    if ( NumberToFind <= 0x7F )
    {
      if ( NumberToFind < 0x40 )
      {
        if ( NumberToFind > 1 )
        {
          v25 = 0LL;
          v26 = &Buffer[v9 >> 6];
          while ( v15 != -1 )
          {
LABEL_39:
            v18 = !_BitScanForward64((unsigned __int64 *)&v27, v15);
            if ( v18 )
              LODWORD(v27) = 64;
            if ( (unsigned int)(v25 + v27) >= NumberToFind )
            {
              v29 = -v25;
LABEL_69:
              v11 = ((v14 - Buffer) << 6) + v29;
              goto LABEL_70;
            }
            v28 = NumberToFind;
            v29 = ~v15;
            while ( 1 )
            {
              v29 &= v29 >> (v28 >> 1);
              if ( !v29 )
                break;
              v28 -= v28 >> 1;
              if ( v28 <= 1 )
              {
                _BitScanForward64(&v29, v29);
                goto LABEL_69;
              }
            }
            if ( v14 == v26 )
              goto LABEL_4;
            v18 = !_BitScanReverse64((unsigned __int64 *)&v34, v15);
            if ( v18 )
              v25 = 64LL;
            else
              v25 = (unsigned int)(63 - v34);
            v15 = ~*++v14;
          }
          while ( 1 )
          {
            if ( ++v14 > v13 )
              goto LABEL_4;
            v15 = ~*v14;
            if ( *v14 )
            {
              v25 = 0LL;
              goto LABEL_39;
            }
          }
        }
        while ( v15 == -1 )
        {
          if ( ++v14 > v13 )
            goto LABEL_4;
          v15 = ~*v14;
        }
        _BitScanForward64(&v35, ~v15);
        v11 = v35 + ((v14 - Buffer) << 6);
LABEL_70:
        if ( v11 > v12 )
          goto LABEL_4;
        goto LABEL_27;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v15 < 0 )
          {
            if ( ++v14 > v13 )
              goto LABEL_4;
            v15 = ~*v14;
          }
          v18 = !_BitScanReverse64((unsigned __int64 *)&v30, v15);
          if ( v18 )
            v31 = 64;
          else
            v31 = 63 - v30;
          v11 = ((v14 - Buffer + 1) << 6) - v31;
          if ( v11 > v12 )
            goto LABEL_4;
          v32 = NumberToFind - v31;
          if ( NumberToFind == v31 )
            goto LABEL_27;
          v15 = ~*++v14;
          if ( v32 >= 0x40 )
            break;
LABEL_58:
          v18 = !_BitScanForward64(&v33, v15);
          if ( v18 )
            v33 = 64LL;
          if ( v33 >= v32 )
            goto LABEL_27;
        }
        if ( *v14 == -1LL )
        {
          v32 -= 64LL;
          if ( !v32 )
            goto LABEL_27;
          v15 = ~*++v14;
          goto LABEL_58;
        }
      }
    }
    v16 = v13 + 1;
    if ( (v12 & 0x3F) == 0 )
      v16 = &Buffer[v12 >> 6];
    if ( v15 )
    {
      if ( *++v14 != -1LL )
        goto LABEL_14;
      v18 = !_BitScanReverse64((unsigned __int64 *)&v19, v15);
      if ( v18 )
        v17 = 64;
      else
        v17 = 63 - v19;
    }
    else
    {
      v17 = 0;
    }
LABEL_19:
    v11 = ((v14 - Buffer) << 6) - v17;
    if ( v11 > v12 )
      goto LABEL_4;
    v21 = &v14[(NumberToFind - v17) >> 6];
    while ( ++v14 != v21 )
    {
      if ( *v14 != -1LL )
        goto LABEL_14;
    }
    v22 = ((_BYTE)NumberToFind - (_BYTE)v17) & 0x3F;
    if ( (((_BYTE)NumberToFind - (_BYTE)v17) & 0x3F) != 0 )
    {
      v18 = !_BitScanForward64((unsigned __int64 *)&v23, ~*v14);
      if ( v18 )
        LODWORD(v23) = 64;
      if ( (unsigned int)v23 < v22 )
      {
LABEL_14:
        while ( v14 <= v16 )
        {
          if ( *++v14 == -1LL )
          {
            v18 = !_BitScanReverse64((unsigned __int64 *)&v20, ~*(v14 - 1));
            if ( v18 )
              v17 = 64;
            else
              v17 = 63 - v20;
            goto LABEL_19;
          }
        }
        goto LABEL_4;
      }
    }
LABEL_27:
    if ( v11 != -1LL )
      break;
LABEL_28:
    if ( !v8 )
      break;
    v24 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v24 = SizeOfBitMap;
    v9 = v24 - 1;
    v8 = 0LL;
  }
  v10 = v11;
LABEL_77:
  if ( v10 != -1LL )
    RtlClearBitsEx((__int64)BitMapHeader, v10, NumberToFind);
  return v10;
}
