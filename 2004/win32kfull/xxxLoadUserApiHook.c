/*
 * XREFs of xxxLoadUserApiHook @ 0x1C00456D0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     xxxDefWindowProc @ 0x1C00AF770 (xxxDefWindowProc.c)
 * Callees:
 *     xxxLoadHmodIndex @ 0x1C0046334 (xxxLoadHmodIndex.c)
 */

__int64 xxxLoadUserApiHook()
{
  unsigned int v0; // ebx
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // rcx

  v0 = 0;
  if ( gihmodUserApiHook < 0 )
    return 0LL;
  CurrentProcess = PsGetCurrentProcess();
  if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) || (unsigned int)PsGetWin32KFilterSet() == 5 )
    return 0LL;
  v3 = *(_QWORD *)(gptiCurrent + 416LL);
  v4 = *(_DWORD *)(v3 + 404);
  if ( _bittest(&v4, gihmodUserApiHook) )
    return 1LL;
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x1000000D) != 0 )
    return 0LL;
  if ( (*(_DWORD *)(v3 + 12) & 0x80u) != 0 )
    v5 = (unsigned int)gihmodUserApiHookWOW;
  else
    v5 = (unsigned int)gihmodUserApiHook;
  LOBYTE(v0) = xxxLoadHmodIndex(v5) != 0;
  return v0;
}
