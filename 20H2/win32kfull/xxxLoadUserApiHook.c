/*
 * XREFs of xxxLoadUserApiHook @ 0x1C0074590
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     xxxDefWindowProc @ 0x1C00743E0 (xxxDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 * Callees:
 *     xxxLoadHmodIndex @ 0x1C00751F4 (xxxLoadHmodIndex.c)
 */

__int64 __fastcall xxxLoadUserApiHook(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rcx

  v3 = 0;
  if ( gihmodUserApiHook < 0 )
    return 0LL;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3);
  if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) || (unsigned int)PsGetWin32KFilterSet() == 5 )
    return 0LL;
  v6 = *(_QWORD *)(gptiCurrent + 424LL);
  v7 = *(_DWORD *)(v6 + 404);
  if ( _bittest(&v7, gihmodUserApiHook) )
    return 1LL;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000000D) != 0 )
    return 0LL;
  if ( (*(_DWORD *)(v6 + 12) & 0x80u) != 0 )
    v8 = (unsigned int)gihmodUserApiHookWOW;
  else
    v8 = (unsigned int)gihmodUserApiHook;
  LOBYTE(v3) = xxxLoadHmodIndex(v8) != 0;
  return v3;
}
