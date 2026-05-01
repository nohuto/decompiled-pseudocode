/*
 * XREFs of sub_180081948 @ 0x180081948
 * Callers:
 *     sub_180028A50 @ 0x180028A50 (sub_180028A50.c)
 * Callees:
 *     sub_180034AA0 @ 0x180034AA0 (sub_180034AA0.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memcmp @ 0x180046816 (memcmp.c)
 *     memset @ 0x18004683A (memset.c)
 */

_BOOL8 __fastcall sub_180081948(__int64 a1)
{
  _BOOL8 result; // rax
  _QWORD Buf1[14]; // [rsp+20h] [rbp-29h] BYREF

  result = 0;
  if ( (unsigned int)sub_180034AA0(a1) )
  {
    if ( (*(_DWORD *)a1 & 0xFF7FD9BF) == 0
      && !*(_DWORD *)(a1 + 4)
      && !*(_DWORD *)(a1 + 8)
      && !*(_WORD *)(a1 + 140)
      && *(_DWORD *)(a1 + 268) == 5
      && !*(_DWORD *)(a1 + 272) )
    {
      memset(Buf1, 0, 0x68uLL);
      Buf1[11] = 33LL;
      Buf1[5] = 128LL;
      *(_OWORD *)&Buf1[9] = 0xFFFFFFFFFFFFFFFFuLL;
      memset(&Buf1[6], 255, 24);
      if ( !memcmp(Buf1, (const void *)(a1 + 280), 0x68uLL) )
        return 1;
    }
  }
  return result;
}
