/*
 * XREFs of TimeToDaysAndFraction @ 0x4B344F4F
 * Callers:
 *     _RtlTimeToElapsedTimeFields@8 @ 0x4B344E50 (_RtlTimeToElapsedTimeFields@8.c)
 * Callees:
 *     _RtlExtendedMagicDivide@20 @ 0x4B3083C0 (_RtlExtendedMagicDivide@20.c)
 */

_DWORD *__fastcall TimeToDaysAndFraction(__int64 *a1, _DWORD *a2, _DWORD *a3)
{
  unsigned __int64 v4; // rax
  int v5; // esi
  int v6; // eax
  int v7; // esi
  _DWORD *result; // eax

  v4 = RtlExtendedMagicDivide(*a1, (unsigned int)Magic10000 | 0xD1B7175800000000uLL, 0xDu);
  v5 = v4;
  v6 = RtlExtendedMagicDivide(v4, (unsigned int)Magic86400000 | 0xC6D750EB00000000uLL, 0x1Au);
  *a2 = v6;
  v7 = v5 - 86400000 * v6;
  result = a3;
  *a3 = v7;
  return result;
}
