/*
 * XREFs of NtUserGetPriorityClipboardFormat @ 0x1C01FBF90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _GetPriorityClipboardFormat @ 0x1C0220268 (_GetPriorityClipboardFormat.c)
 */

__int64 __fastcall NtUserGetPriorityClipboardFormat(volatile void *Address, int a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int PriorityClipboardFormat; // [rsp+28h] [rbp-20h]

  v2 = a2;
  EnterSharedCrit(0LL, 1LL);
  if ( v2 > 0x3FFFFFFFFFFFFFFFLL )
    ExRaiseAccessViolation();
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v4);
  ProbeForRead(Address, 4 * v2, CurrentProcessWow64Process != 0 ? 1 : 4);
  PriorityClipboardFormat = GetPriorityClipboardFormat(Address, (unsigned int)v2);
  UserSessionSwitchLeaveCrit(v7, v6, v8);
  return PriorityClipboardFormat;
}
