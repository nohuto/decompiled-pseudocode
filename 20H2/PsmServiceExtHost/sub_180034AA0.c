/*
 * XREFs of sub_180034AA0 @ 0x180034AA0
 * Callers:
 *     sub_18003489C @ 0x18003489C (sub_18003489C.c)
 *     sub_180081948 @ 0x180081948 (sub_180081948.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180034AA0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)a1 < 0x2000000u
    && wcsnlen((const wchar_t *)(a1 + 12), 0x40uLL) != 64
    && wcsnlen((const wchar_t *)(a1 + 140), 0x40uLL) != 64
    && *(int *)(a1 + 268) <= 5 )
  {
    return 1LL;
  }
  result = 0LL;
  *(_WORD *)(a1 + 138) = 0;
  *(_WORD *)(a1 + 266) = 0;
  return result;
}
