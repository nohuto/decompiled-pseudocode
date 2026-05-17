/*
 * XREFs of _RtlpFreeHandleForAtom@8 @ 0x4B2A7933
 * Callers:
 *     _RtlpFreeAllAtom@8 @ 0x4B2A78D7 (_RtlpFreeAllAtom@8.c)
 *     _RtlEmptyAtomTable@8 @ 0x4B34D050 (_RtlEmptyAtomTable@8.c)
 * Callees:
 *     _RtlIsValidIndexHandle@12 @ 0x4B2E0520 (_RtlIsValidIndexHandle@12.c)
 *     _RtlFreeHandle@8 @ 0x4B2E7780 (_RtlFreeHandle@8.c)
 */

int __fastcall RtlpFreeHandleForAtom(int a1, int a2)
{
  int v2; // esi
  int result; // eax
  void *v4; // [esp+4h] [ebp-4h] BYREF

  v2 = a1 + 12;
  result = RtlIsValidIndexHandle(a1 + 12, *(unsigned __int16 *)(a2 + 4), &v4);
  if ( (_BYTE)result )
    return RtlFreeHandle(v2, v4);
  return result;
}
