/*
 * XREFs of NtUserGetDManipHookInitFunction @ 0x1C011BEF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00AE624 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall NtUserGetDManipHookInitFunction(unsigned __int16 *a1, unsigned __int16 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  EnterSharedCrit(0LL, 1LL);
  ProbeForWrite(a1, 0x208uLL, 2u);
  ProbeForWrite(a2, 0x208uLL, 2u);
  PsGetCurrentProcessWin32Process(v4);
  RtlStringCchCopyW((char *)a1, 260LL, (char *)gszModuleDManipHook);
  RtlStringCchCopyW((char *)a2, 260LL, (char *)L"InitializeDManipHook");
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return 1LL;
}
