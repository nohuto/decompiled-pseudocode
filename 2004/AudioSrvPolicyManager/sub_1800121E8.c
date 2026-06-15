/*
 * XREFs of sub_1800121E8 @ 0x1800121E8
 * Callers:
 *     sub_180012B64 @ 0x180012B64 (sub_180012B64.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18002C920 @ 0x18002C920 (sub_18002C920.c)
 * Callees:
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

__int64 __fastcall sub_1800121E8(__int64 a1)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  v4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  sub_18001A330(&lpCriticalSection);
  if ( *(_DWORD *)(a1 + 564) == 5 )
  {
    *(_DWORD *)(a1 + 564) = 0;
    *(_DWORD *)(a1 + 568) = 0;
    *(_DWORD *)(a1 + 572) = 0;
    *(_DWORD *)(a1 + 576) = 0;
    *(_DWORD *)(a1 + 580) = 0;
    *(_DWORD *)(a1 + 584) = 0;
    *(_DWORD *)(a1 + 588) = 1;
  }
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
