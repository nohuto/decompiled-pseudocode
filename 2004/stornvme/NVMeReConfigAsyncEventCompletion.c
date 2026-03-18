/*
 * XREFs of NVMeReConfigAsyncEventCompletion @ 0x1C00191C0
 * Callers:
 *     <none>
 * Callees:
 *     GetLocalCommand @ 0x1C000A338 (GetLocalCommand.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C0018BBC (NVMeIssueAsyncEventCommand.c)
 */

__int64 __fastcall NVMeReConfigAsyncEventCompletion(__int64 a1, __int64 a2)
{
  _DWORD *LocalCommand; // rax
  __int64 v3; // r11

  LocalCommand = (_DWORD *)GetLocalCommand(a1, a2);
  *LocalCommand = 0;
  return NVMeIssueAsyncEventCommand(v3, (__int64)LocalCommand);
}
