/*
 * XREFs of ZwSetBootOptions @ 0x1403F5430
 * Callers:
 *     BiSetBootOptions @ 0x14096E2B4 (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetBootOptions(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
