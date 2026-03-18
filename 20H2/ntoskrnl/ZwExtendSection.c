/*
 * XREFs of ZwExtendSection @ 0x1403F9DD0
 * Callers:
 *     CmSiExtendSection @ 0x140203AC0 (CmSiExtendSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwExtendSection(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
