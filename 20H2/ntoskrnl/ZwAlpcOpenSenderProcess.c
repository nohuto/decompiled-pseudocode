/*
 * XREFs of ZwAlpcOpenSenderProcess @ 0x1403F9250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcOpenSenderProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
