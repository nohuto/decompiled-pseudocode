/*
 * XREFs of _pGetAdditionalModeEntry @ 0x1C01DC5CC
 * Callers:
 *     _pGetAdditionalTiming @ 0x1C01DC484 (_pGetAdditionalTiming.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall pGetAdditionalModeEntry(int a1, char a2)
{
  _DWORD *result; // rax

  if ( a1 == -2 )
    WdLogSingleEntry0(1LL);
  for ( result = qword_1C0131EA0; result && (a1 != result[2] || a2 != *((_BYTE *)result + 12)); result = *(_DWORD **)result )
    ;
  return result;
}
