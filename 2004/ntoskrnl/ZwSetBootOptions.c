/*
 * XREFs of ZwSetBootOptions @ 0x1403F66C0
 * Callers:
 *     BiSetBootOptions @ 0x14096F654 (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetBootOptions(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
