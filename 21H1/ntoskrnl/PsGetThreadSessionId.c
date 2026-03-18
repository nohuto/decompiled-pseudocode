/*
 * XREFs of PsGetThreadSessionId @ 0x1405DA910
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionId @ 0x1402041B0 (MmGetSessionId.c)
 */

__int64 __fastcall PsGetThreadSessionId(__int64 a1)
{
  return MmGetSessionId(*(_QWORD *)(a1 + 544));
}
