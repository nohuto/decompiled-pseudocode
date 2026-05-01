/*
 * XREFs of sub_180034EB8 @ 0x180034EB8
 * Callers:
 *     sub_180034E40 @ 0x180034E40 (sub_180034E40.c)
 *     sub_18003BBC4 @ 0x18003BBC4 (sub_18003BBC4.c)
 *     sub_180081B7C @ 0x180081B7C (sub_180081B7C.c)
 *     sub_180081BF0 @ 0x180081BF0 (sub_180081BF0.c)
 * Callees:
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 */

__int64 __fastcall sub_180034EB8(__int64 a1, __int64 a2)
{
  sub_18001E830(a1, a2, 0xBu);
  *(_DWORD *)(a1 + 8) = 0;
  return RtlReleaseSRWLockExclusive(a1);
}
