/*
 * XREFs of ZwImpersonateAnonymousToken @ 0x1403FA110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwImpersonateAnonymousToken(HANDLE ThreadHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
