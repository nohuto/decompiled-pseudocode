/*
 * XREFs of ZwWriteRequestData @ 0x1403F2E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwWriteRequestData(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
