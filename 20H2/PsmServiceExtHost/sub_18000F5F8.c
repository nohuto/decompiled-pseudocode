/*
 * XREFs of sub_18000F5F8 @ 0x18000F5F8
 * Callers:
 *     sub_18000F494 @ 0x18000F494 (sub_18000F494.c)
 * Callees:
 *     sub_18000F818 @ 0x18000F818 (sub_18000F818.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 */

_BOOL8 __fastcall sub_18000F5F8(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v4; // eax
  _QWORD v5[16]; // [rsp+20h] [rbp-98h] BYREF

  v5[0] = 255LL;
  if ( !(unsigned int)sub_18000F818(a1 + 40, v5) )
    return 0LL;
  memset(&v5[2], 0, 0x68uLL);
  v2 = *(_DWORD *)(a1 + 32);
  if ( (v2 & 0xF000) != 0 )
    return 0LL;
  if ( (v2 & 1) != 0 )
  {
    v4 = HIBYTE(v2);
    if ( (_BYTE)v4 && (unsigned __int8)v4 > *(_BYTE *)(a1 + 36) )
      return 0LL;
  }
  else if ( v2 || *(_BYTE *)(a1 + 36) != BYTE4(v5[6]) )
  {
    return 0LL;
  }
  return *(_WORD *)(a1 + 96) == LOWORD(v5[14])
      && *(_BYTE *)(a1 + 98) == BYTE2(v5[14])
      && !*(_DWORD *)(a1 + 100)
      && ((*(_BYTE *)(a1 + 16) & 2) != 0 || !*(_QWORD *)a1)
      && ((*(_BYTE *)(a1 + 16) & 4) != 0 || !*(_QWORD *)(a1 + 8));
}
