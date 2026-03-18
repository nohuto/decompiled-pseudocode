/*
 * XREFs of CloseProtectedHandle @ 0x1C0019454
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0067F7C (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C006B620 (DestroyProcessInfo.c)
 * Callees:
 *     SetHandleFlag @ 0x1C0019490 (SetHandleFlag.c)
 */

NTSTATUS __fastcall CloseProtectedHandle(HANDLE Handle)
{
  if ( !Handle )
    return 0;
  SetHandleFlag(Handle, 1LL);
  return ObCloseHandle(Handle, 1);
}
