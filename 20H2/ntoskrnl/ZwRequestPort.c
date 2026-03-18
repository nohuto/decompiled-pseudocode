/*
 * XREFs of ZwRequestPort @ 0x1403FB070
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x1403204A8 (SepRmDispatchDataToLsa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRequestPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
