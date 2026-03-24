/*
 * XREFs of _pGetAdditionalModeEntry @ 0x1C019ADF8
 * Callers:
 *     _pGetAdditionalTiming @ 0x1C019AC9C (_pGetAdditionalTiming.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall pGetAdditionalModeEntry(__int64 a1, __int64 a2)
{
  char v2; // di
  int v3; // ebx
  _DWORD *result; // rax
  __int64 v5; // rax

  v2 = a2;
  v3 = a1;
  if ( (_DWORD)a1 == -2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v5);
  }
  for ( result = qword_1C00B3200; result && (v3 != result[2] || v2 != *((_BYTE *)result + 12)); result = *(_DWORD **)result )
    ;
  return result;
}
