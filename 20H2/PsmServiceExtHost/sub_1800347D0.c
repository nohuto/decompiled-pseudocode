/*
 * XREFs of sub_1800347D0 @ 0x1800347D0
 * Callers:
 *     sub_1800202A0 @ 0x1800202A0 (sub_1800202A0.c)
 *     sub_18003474C @ 0x18003474C (sub_18003474C.c)
 *     sub_180081D54 @ 0x180081D54 (sub_180081D54.c)
 * Callees:
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 */

__int64 __fastcall sub_1800347D0(__int64 a1, __int64 a2)
{
  sub_18001E830(a1, a2, 4u);
  *(_DWORD *)(a1 + 24) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 16);
}
