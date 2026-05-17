/*
 * XREFs of _EtwpGetUmLoggerInfoFromContext@12 @ 0x4B2F03CA
 * Callers:
 *     _EtwpStopUmLogger@16 @ 0x4B2ED853 (_EtwpStopUmLogger@16.c)
 *     _EtwpQueryUmLogger@16 @ 0x4B2ED9ED (_EtwpQueryUmLogger@16.c)
 *     _EtwpStartUmLogger@16 @ 0x4B2F0075 (_EtwpStartUmLogger@16.c)
 * Callees:
 *     __alldiv @ 0x4B2F6300 (__alldiv.c)
 */

__int16 __fastcall EtwpGetUmLoggerInfoFromContext(int a1, int a2, unsigned __int16 *a3)
{
  int v3; // eax
  __int16 result; // ax

  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 212);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 208);
  *(_DWORD *)(a1 + 68) = *(_QWORD *)(a2 + 232) / (__int64)((unsigned int)EtwpOneSecond | 0xFFFFFFFF00000000uLL);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 140) >> 10;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 156);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 152);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 148);
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 272);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 160);
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(a2 + 280);
  v3 = *(_DWORD *)(a2 + 276);
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 112) = v3;
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 256);
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 16);
  if ( a3 )
    *(_DWORD *)(a1 + 164) = *a3;
  result = *(_WORD *)(a2 + 20);
  *(_WORD *)(a1 + 8) = result;
  *(_BYTE *)(a1 + 11) = 1;
  return result;
}
