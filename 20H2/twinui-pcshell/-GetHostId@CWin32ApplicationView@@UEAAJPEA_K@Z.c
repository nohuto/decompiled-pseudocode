/*
 * XREFs of ?GetHostId@CWin32ApplicationView@@UEAAJPEA_K@Z @ 0x180193DB0
 * Callers:
 *     ?IsEqualByHostId@CWin32ApplicationView@@UEAAJ_KPEAH@Z @ 0x1801945E0 (-IsEqualByHostId@CWin32ApplicationView@@UEAAJ_KPEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B3E8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180141484 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180159B90 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?v_GetProcessId@CWin32ApplicationView@@EEAAJPEAK@Z @ 0x180195180 (-v_GetProcessId@CWin32ApplicationView@@EEAAJPEAK@Z.c)
 */

__int64 __fastcall CWin32ApplicationView::GetHostId(CWin32ApplicationView *this, unsigned __int64 *a2)
{
  int ProcessId; // eax
  unsigned int v4; // edi
  unsigned int v5; // ebx
  char *v7; // rbx
  const char *v8; // r9
  unsigned int LastError; // eax
  int TokenHostIdAsUlong64; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD dwProcessId; // [rsp+30h] [rbp+8h] BYREF
  void *TokenHandle; // [rsp+38h] [rbp+10h] BYREF

  *a2 = -1LL;
  ProcessId = CWin32ApplicationView::v_GetProcessId((CWin32ApplicationView *)((char *)this - 8), &dwProcessId);
  v4 = 0;
  v5 = ProcessId;
  if ( ProcessId < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F5,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)ProcessId);
    return v5;
  }
  v7 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  if ( ((unsigned __int64)(v7 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    TokenHandle = 0LL;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &TokenHandle,
      0LL);
    if ( OpenProcessToken(v7, 8u, &TokenHandle) )
    {
      TokenHostIdAsUlong64 = RtlQueryTokenHostIdAsUlong64(TokenHandle, a2);
      if ( TokenHostIdAsUlong64 >= 0 )
        goto LABEL_10;
      LastError = wil::details::in1diag3::Return_NtStatus(
                    retaddr,
                    (void *)0x3FC,
                    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
                    (const char *)(unsigned int)TokenHostIdAsUlong64);
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x3FB,
                    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
                    v8);
    }
    v4 = LastError;
LABEL_10:
    if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(TokenHandle);
    goto LABEL_12;
  }
  v4 = -2147024894;
LABEL_12:
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v7);
  return v4;
}
