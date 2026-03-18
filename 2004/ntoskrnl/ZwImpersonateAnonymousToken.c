/*
 * XREFs of ZwImpersonateAnonymousToken @ 0x1403F5540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwImpersonateAnonymousToken(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
