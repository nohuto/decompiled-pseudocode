/*
 * XREFs of sub_18001217C @ 0x18001217C
 * Callers:
 *     sub_1800129C0 @ 0x1800129C0 (sub_1800129C0.c)
 *     sub_18001FA04 @ 0x18001FA04 (sub_18001FA04.c)
 *     sub_18002C120 @ 0x18002C120 (sub_18002C120.c)
 * Callees:
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

__int64 __fastcall sub_18001217C(__int64 a1)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  v4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  sub_18001A330(&lpCriticalSection);
  if ( *(_DWORD *)(a1 + 564) != 5 )
  {
    *(_DWORD *)(a1 + 572) = 0;
    *(_DWORD *)(a1 + 564) = 5;
    *(_DWORD *)(a1 + 568) = 1;
  }
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
