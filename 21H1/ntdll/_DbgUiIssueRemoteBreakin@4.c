/*
 * XREFs of _DbgUiIssueRemoteBreakin@4 @ 0x4B32DB10
 * Callers:
 *     _DbgUiDebugActiveProcess@4 @ 0x4B32DAA0 (_DbgUiDebugActiveProcess@4.c)
 * Callees:
 *     _RtlpCreateUserThreadEx@44 @ 0x4B2F0524 (_RtlpCreateUserThreadEx@44.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 */

NTSTATUS __cdecl DbgUiIssueRemoteBreakin(HANDLE Process)
{
  int v1; // ecx
  int v2; // esi
  int v4; // [esp+4h] [ebp-Ch] BYREF
  HANDLE Handle; // [esp+Ch] [ebp-4h] BYREF

  v2 = RtlpCreateUserThreadEx(
         Process,
         0,
         2,
         0LL,
         0x4000u,
         v1,
         (NTSTATUS (__cdecl *)(PVOID))DbgUiRemoteBreakin,
         0,
         &Handle,
         &v4);
  if ( v2 >= 0 )
    NtClose(Handle);
  return v2;
}
