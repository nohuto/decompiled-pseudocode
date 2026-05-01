/*
 * XREFs of ?BoostUnboostSiHostProcess@ViewEventDispatcher@@AEAAX_N@Z @ 0x1802A1B24
 * Callers:
 *     ?BoostShellPriority@ViewEventDispatcher@@QEAAXW4BoostOptions@1@@Z @ 0x1802A1A5C (-BoostShellPriority@ViewEventDispatcher@@QEAAXW4BoostOptions@1@@Z.c)
 *     ?UnboostShellPriority@ViewEventDispatcher@@QEAAXXZ @ 0x1802A8584 (-UnboostShellPriority@ViewEventDispatcher@@QEAAXXZ.c)
 * Callees:
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802AC4C8 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall ViewEventDispatcher::BoostUnboostSiHostProcess(ViewEventDispatcher *this, char a2)
{
  void *v2; // rcx
  NTSTATUS v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char ProcessInformation; // [rsp+30h] [rbp+8h] BYREF

  v2 = (void *)*((_QWORD *)this + 73);
  if ( (((unsigned __int64)v2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ProcessInformation = a2;
    v3 = NtSetInformationProcess(v2, ProcessForegroundInformation, &ProcessInformation, 1u);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_NtStatus(
        retaddr,
        (void *)0xC61,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v3,
        v4);
  }
  else
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      3160LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x8000FFFFLL);
  }
}
