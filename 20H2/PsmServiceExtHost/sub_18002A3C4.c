/*
 * XREFs of sub_18002A3C4 @ 0x18002A3C4
 * Callers:
 *     sub_18001D590 @ 0x18001D590 (sub_18001D590.c)
 *     sub_18002A350 @ 0x18002A350 (sub_18002A350.c)
 *     sub_18007D71C @ 0x18007D71C (sub_18007D71C.c)
 * Callees:
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 *     sub_18002A414 @ 0x18002A414 (sub_18002A414.c)
 */

bool __fastcall sub_18002A3C4(__int64 a1)
{
  bool v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx

  sub_18002A414();
  v2 = (*(_DWORD *)(a1 + 340) & 2) != 0;
  sub_18001E830(v4, v3, 6u);
  RtlReleaseSRWLockShared(a1 + 304);
  return v2;
}
