/*
 * XREFs of _RtlpFreeHandleForAtom@8 @ 0x4B2A7933
 * Callers:
 *     _RtlpFreeAllAtom@8 @ 0x4B2A78D7 (_RtlpFreeAllAtom@8.c)
 *     _RtlEmptyAtomTable@8 @ 0x4B34D050 (_RtlEmptyAtomTable@8.c)
 * Callees:
 *     _RtlIsValidIndexHandle@12 @ 0x4B2E0520 (_RtlIsValidIndexHandle@12.c)
 *     _RtlFreeHandle@8 @ 0x4B2E7780 (_RtlFreeHandle@8.c)
 */

BOOLEAN __fastcall RtlpFreeHandleForAtom(int a1, int a2)
{
  _RTL_HANDLE_TABLE *v2; // esi
  BOOLEAN result; // al
  PRTL_HANDLE_TABLE_ENTRY Handle; // [esp+4h] [ebp-4h] BYREF

  v2 = (_RTL_HANDLE_TABLE *)(a1 + 12);
  result = RtlIsValidIndexHandle((PRTL_HANDLE_TABLE)(a1 + 12), *(unsigned __int16 *)(a2 + 4), &Handle);
  if ( result )
    return RtlFreeHandle(v2, Handle);
  return result;
}
