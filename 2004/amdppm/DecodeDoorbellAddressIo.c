/*
 * XREFs of DecodeDoorbellAddressIo @ 0x1C0022BF8
 * Callers:
 *     RegisterHvLegacyPcc @ 0x1C0021C60 (RegisterHvLegacyPcc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DecodeDoorbellAddressIo(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  char v4; // r11
  unsigned int v5; // r10d
  char v7; // r9
  int v8; // eax

  v4 = *(_BYTE *)(a1 + 1);
  v5 = 0;
  if ( v4 )
  {
    v7 = *(_BYTE *)(a1 + 3);
    *(_QWORD *)a2 = 0x20000000000000LL;
    *(_WORD *)a2 = *(_WORD *)(a1 + 4);
    switch ( v7 )
    {
      case 8:
        *(_WORD *)(a2 + 2) = 0;
        break;
      case 16:
        *(_WORD *)(a2 + 2) = 1;
        break;
      case 32:
        *(_WORD *)(a2 + 2) = 2;
        break;
    }
    v8 = *(unsigned __int8 *)(a1 + 2);
    *a4 = v8;
    *a3 = ((1LL << v7) - 1) & ~(((1LL << v4) - 1) << v8);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v5;
}
