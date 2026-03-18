/*
 * XREFs of CloseProtectedHandle @ 0x1C0029104
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0072F8C (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C0078F74 (DestroyProcessInfo.c)
 * Callees:
 *     SetHandleFlag @ 0x1C0029140 (SetHandleFlag.c)
 */

NTSTATUS __fastcall CloseProtectedHandle(HANDLE Handle)
{
  if ( !Handle )
    return 0;
  SetHandleFlag(Handle, 1LL);
  return ObCloseHandle(Handle, 1);
}
