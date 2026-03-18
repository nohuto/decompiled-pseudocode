/*
 * XREFs of ZwDeletePrivateNamespace @ 0x1403F9C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeletePrivateNamespace(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
