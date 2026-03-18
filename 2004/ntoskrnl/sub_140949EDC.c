/*
 * XREFs of sub_140949EDC @ 0x140949EDC
 * Callers:
 *     sub_1405ADB40 @ 0x1405ADB40 (sub_1405ADB40.c)
 *     sub_14094A080 @ 0x14094A080 (sub_14094A080.c)
 *     ExpGenuinePolicyPostProcess @ 0x14094A430 (ExpGenuinePolicyPostProcess.c)
 *     sub_14094A8B0 @ 0x14094A8B0 (sub_14094A8B0.c)
 *     sub_14094A930 @ 0x14094A930 (sub_14094A930.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140949EDC(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 4;
  if ( a3 < 4 )
    return 3221225507LL;
  if ( a1 )
    *a1 = 4;
  if ( a2 )
    *a2 = a5;
  return result;
}
