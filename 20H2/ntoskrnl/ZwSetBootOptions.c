/*
 * XREFs of ZwSetBootOptions @ 0x1403FB290
 * Callers:
 *     BiSetBootOptions @ 0x140975424 (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetBootOptions(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
