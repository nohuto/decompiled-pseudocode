/*
 * XREFs of KiOpLocateDecodeEntry @ 0x1402620D4
 * Callers:
 *     KiOpDecode @ 0x140261E80 (KiOpDecode.c)
 * Callees:
 *     KiOpFetchNextByte @ 0x140262008 (KiOpFetchNextByte.c)
 */

__int64 __fastcall KiOpLocateDecodeEntry(__int64 a1)
{
  __int64 *v1; // rsi
  __int64 *v2; // rbx
  unsigned __int8 v4; // dl
  int v5; // ecx
  char v6; // cl
  __int64 result; // rax
  char v8; // cl
  char v9; // cl

  v1 = &qword_1400046F8;
  v2 = KiOpOneByteTable;
  if ( *(_BYTE *)(a1 + 57) )
  {
    v1 = AlpcSecurityType;
    v2 = KiOpTwoByteTable;
  }
  while ( v2 != v1 )
  {
    v4 = *(_BYTE *)(a1 + 56);
    if ( v4 < *(_BYTE *)v2 )
      goto LABEL_5;
    if ( v4 > (unsigned __int8)(*(_BYTE *)v2 + *((_BYTE *)v2 + 1) - 1) )
      goto LABEL_5;
    v5 = *((_DWORD *)v2 + 1);
    if ( v5 )
    {
      if ( (v5 & *(_DWORD *)(a1 + 48)) == 0 )
        goto LABEL_5;
    }
    v6 = *((_BYTE *)v2 + 8);
    if ( v6 != -1 || *((_BYTE *)v2 + 9) != 0xFF || *((_BYTE *)v2 + 10) != 0xFF )
    {
      if ( !*(_BYTE *)(a1 + 80) )
      {
        result = KiOpFetchNextByte(a1, (_BYTE *)(a1 + 65));
        if ( (int)result < 0 )
          return result;
        *(_BYTE *)(a1 + 80) = 1;
        v6 = *((_BYTE *)v2 + 8);
      }
      if ( v6 != -1 && v6 != ((*(_BYTE *)(a1 + 65) >> 3) & 7) )
        goto LABEL_5;
      v8 = *((_BYTE *)v2 + 10);
      if ( v8 != -1 && v8 != (*(_BYTE *)(a1 + 65) & 7) )
        goto LABEL_5;
      v9 = *((_BYTE *)v2 + 9);
      if ( v9 != -1 )
      {
        if ( (*(_BYTE *)(a1 + 65) & 0xC0) == 0xC0 )
        {
          if ( v9 != 3 )
            goto LABEL_5;
        }
        else if ( v9 == 3 )
        {
          goto LABEL_5;
        }
      }
    }
    if ( (*((_DWORD *)v2 + 3) & 0xF4000000) == 0 || (*((_DWORD *)v2 + 3) & 0xF4000000 & *(_DWORD *)(a1 + 60)) != 0 )
    {
      *(_QWORD *)(a1 + 88) = v2;
      return 0LL;
    }
LABEL_5:
    v2 += 3;
  }
  return 0LL;
}
