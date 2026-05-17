/*
 * XREFs of _ZwRevertContainerImpersonation@0 @ 0x4B2F4140
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwRevertContainerImpersonation()
{
  return Wow64SystemServiceCall();
}
