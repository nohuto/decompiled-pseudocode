/*
 * XREFs of AlpcRundownCompletionList @ 0x180086370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcRundownCompletionList(__int64 a1)
{
  return NtAlpcSetInformation(a1, 10LL, 0LL);
}
