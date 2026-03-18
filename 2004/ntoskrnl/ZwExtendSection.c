/*
 * XREFs of ZwExtendSection @ 0x1403F5200
 * Callers:
 *     CmSiExtendSection @ 0x140270058 (CmSiExtendSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwExtendSection(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
