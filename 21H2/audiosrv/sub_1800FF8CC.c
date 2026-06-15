/*
 * XREFs of sub_1800FF8CC @ 0x1800FF8CC
 * Callers:
 *     sub_1800615D4 @ 0x1800615D4 (sub_1800615D4.c)
 *     sub_1800FF6F8 @ 0x1800FF6F8 (sub_1800FF6F8.c)
 * Callees:
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     sub_180104244 @ 0x180104244 (sub_180104244.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800FF8CC(__int64 a1)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 16);
  v3 = 0;
  sub_180057764((__int64)&lpCriticalSection);
  if ( *(_DWORD *)(a1 + 56) == 3 )
    sub_180104244(a1);
  if ( v3 )
    LeaveCriticalSection(lpCriticalSection);
}
