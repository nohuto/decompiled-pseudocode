/*
 * XREFs of RtlFindSetBitsEx @ 0x1402873C0
 * Callers:
 *     MiDeleteEmptyPageTableTail @ 0x1403F3600 (MiDeleteEmptyPageTableTail.c)
 *     MiUnlockDriverPages @ 0x1408C7600 (MiUnlockDriverPages.c)
 *     MiDeleteAweInfoPages @ 0x1408D86CC (MiDeleteAweInfoPages.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D8E80 (MiScrubProcessPhysicalPages.c)
 *     IopLiveDumpGetCapturePagesNoLock @ 0x1409AF984 (IopLiveDumpGetCapturePagesNoLock.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1409B02C8 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     <none>
 */

ULONG64 __cdecl RtlFindSetBitsEx(PRTL_BITMAP_EX BitMapHeader, ULONG64 NumberToFind, ULONG64 HintIndex)
{
  unsigned __int64 SizeOfBitMap; // r15
  unsigned __int64 *Buffer; // r14
  ULONG64 v7; // r11
  unsigned __int64 v8; // r10
  ULONG64 v9; // rbp
  unsigned __int64 *v10; // rdi
  unsigned __int64 *v11; // r8
  signed __int64 v12; // r9
  unsigned __int64 v13; // rax
  ULONG64 v14; // rdx
  ULONG64 v17; // r10
  __int64 v18; // rdx
  unsigned __int64 *v19; // rsi
  bool v20; // zf
  __int64 v21; // rax
  unsigned int v22; // r10d
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 *v25; // r10
  unsigned __int64 v26; // rax
  unsigned int v27; // ecx
  unsigned int v28; // r9d
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned __int64 *v31; // r9
  ULONG64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // eax
  int v36; // [rsp+58h] [rbp+10h]
  int v37; // [rsp+60h] [rbp+18h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v7 = HintIndex & -(__int64)(HintIndex < BitMapHeader->SizeOfBitMap);
  v8 = BitMapHeader->SizeOfBitMap - 1;
  if ( !NumberToFind )
    return v7 & 0xFFFFFFFFFFFFFFF8uLL;
  while ( 1 )
  {
    if ( v8 - v7 + 1 < NumberToFind )
      goto LABEL_14;
    v9 = v8 - NumberToFind + 1;
    v10 = &Buffer[v9 >> 6];
    v11 = &Buffer[v7 >> 6];
    v12 = ~*v11 | ((1LL << (v7 & 0x3F)) - 1);
    if ( NumberToFind > 0x7F )
    {
      v25 = v10 + 1;
      if ( (v9 & 0x3F) == 0 )
        v25 = &Buffer[v9 >> 6];
      if ( v12 )
      {
        v26 = ~*++v11;
        if ( *v11 != -1LL )
          goto LABEL_47;
        v36 &= v26;
        v20 = !_BitScanReverse64(&v26, v12);
        if ( v20 )
          v27 = 64;
        else
          v27 = 63 - v26;
      }
      else
      {
        v27 = 0;
      }
      while ( 1 )
      {
        v14 = ((v11 - Buffer) << 6) - v27;
        if ( v14 > v9 )
          goto LABEL_14;
        v31 = &v11[(NumberToFind - v27) >> 6];
        while ( ++v11 != v31 )
        {
          if ( *v11 != -1LL )
            goto LABEL_47;
        }
        v28 = ((_BYTE)NumberToFind - (_BYTE)v27) & 0x3F;
        if ( (((_BYTE)NumberToFind - (_BYTE)v27) & 0x3F) == 0 )
          goto LABEL_11;
        v20 = !_BitScanForward64((unsigned __int64 *)&v29, ~*v11);
        if ( v20 )
          LODWORD(v29) = 64;
        if ( (unsigned int)v29 >= v28 )
          goto LABEL_11;
        do
        {
LABEL_47:
          if ( v11 > v25 )
            goto LABEL_14;
          ++v11;
        }
        while ( *v11 != -1LL );
        v37 &= ~*(_DWORD *)v11;
        v20 = !_BitScanReverse64((unsigned __int64 *)&v30, ~*(v11 - 1));
        if ( v20 )
          v27 = 64;
        else
          v27 = 63 - v30;
      }
    }
    if ( NumberToFind >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v12 < 0 )
          {
            if ( ++v11 > v10 )
              goto LABEL_14;
            v12 = ~*v11;
          }
          v20 = !_BitScanReverse64((unsigned __int64 *)&v34, v12);
          if ( v20 )
            v35 = 64;
          else
            v35 = 63 - v34;
          v14 = ((v11 - Buffer + 1) << 6) - v35;
          if ( v14 > v9 )
            goto LABEL_14;
          v32 = NumberToFind - v35;
          if ( NumberToFind == v35 )
            goto LABEL_11;
          v12 = ~*++v11;
          if ( v32 >= 0x40 )
            break;
LABEL_58:
          v20 = !_BitScanForward64(&v33, v12);
          if ( v20 )
            v33 = 64LL;
          if ( v33 >= v32 )
            goto LABEL_11;
        }
        if ( *v11 == -1LL )
        {
          v32 -= 64LL;
          if ( !v32 )
            goto LABEL_11;
          v12 = ~*++v11;
          goto LABEL_58;
        }
      }
    }
    if ( NumberToFind > 1 )
    {
      v18 = 0LL;
      v19 = &Buffer[v8 >> 6];
      while ( v12 != -1 )
      {
LABEL_21:
        v20 = !_BitScanForward64((unsigned __int64 *)&v21, v12);
        if ( v20 )
          LODWORD(v21) = 64;
        if ( (unsigned int)(v18 + v21) >= NumberToFind )
        {
          v23 = -v18;
LABEL_28:
          v14 = ((v11 - Buffer) << 6) + v23;
          goto LABEL_10;
        }
        v22 = NumberToFind;
        v23 = ~v12;
        while ( 1 )
        {
          v23 &= v23 >> (v22 >> 1);
          if ( !v23 )
            break;
          v22 -= v22 >> 1;
          if ( v22 <= 1 )
          {
            _BitScanForward64(&v23, v23);
            goto LABEL_28;
          }
        }
        if ( v11 == v19 )
          goto LABEL_14;
        v20 = !_BitScanReverse64((unsigned __int64 *)&v24, v12);
        if ( v20 )
          v18 = 64LL;
        else
          v18 = (unsigned int)(63 - v24);
        v12 = ~*++v11;
      }
      while ( 1 )
      {
        if ( ++v11 > v10 )
          goto LABEL_14;
        v12 = ~*v11;
        if ( *v11 )
        {
          v18 = 0LL;
          goto LABEL_21;
        }
      }
    }
    while ( v12 == -1 )
    {
      if ( ++v11 > v10 )
        goto LABEL_14;
      v12 = ~*v11;
    }
    _BitScanForward64(&v13, ~v12);
    v14 = v13 + ((v11 - Buffer) << 6);
LABEL_10:
    if ( v14 <= v9 )
      break;
LABEL_14:
    v14 = -1LL;
LABEL_15:
    if ( !v7 )
      return v14;
    v17 = NumberToFind + HintIndex;
    if ( NumberToFind + HintIndex > SizeOfBitMap )
      v17 = SizeOfBitMap;
    v8 = v17 - 1;
    v7 = 0LL;
  }
LABEL_11:
  if ( v14 == -1LL )
    goto LABEL_15;
  return v14;
}
