/*
 * XREFs of sub_18002C298 @ 0x18002C298
 * Callers:
 *     sub_18002C530 @ 0x18002C530 (sub_18002C530.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002C364 @ 0x18002C364 (sub_18002C364.c)
 */

__int64 __fastcall sub_18002C298(__int64 a1)
{
  __int64 v2; // rcx

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
    sub_18002C364(v2, &unk_1800A0CF8);
  *(_QWORD *)(a1 + 648) |= 0x400000000000uLL;
  return RtlWakeAllConditionVariable(a1 + 680);
}
