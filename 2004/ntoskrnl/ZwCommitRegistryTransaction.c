/*
 * XREFs of ZwCommitRegistryTransaction @ 0x1403F48C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCommitRegistryTransaction(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
