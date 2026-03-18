/*
 * XREFs of ZwCreatePort @ 0x1403F3A10
 * Callers:
 *     SeRmInitPhase1 @ 0x140A6449C (SeRmInitPhase1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreatePort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
