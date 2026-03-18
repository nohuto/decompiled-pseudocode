/*
 * XREFs of PsGetThreadSessionId @ 0x140660C10
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionId @ 0x14027D4C0 (MmGetSessionId.c)
 */

__int64 __fastcall PsGetThreadSessionId(__int64 a1)
{
  return MmGetSessionId(*(_QWORD *)(a1 + 544));
}
