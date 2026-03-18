/*
 * XREFs of _DxgkEngIsDwmProcess@0 @ 0xCC8B2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall DxgkEngIsDwmProcess()
{
  return UserUnsafeIsCurrentProcessDwm();
}
