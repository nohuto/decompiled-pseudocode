/*
 * XREFs of LdrpFindLoadedDll @ 0x18001DB20
 * Callers:
 *     LdrGetDllHandleEx @ 0x1800168A0 (LdrGetDllHandleEx.c)
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpPreprocessDllName @ 0x18001A360 (LdrpPreprocessDllName.c)
 *     LdrpFindLoadedDllInternal @ 0x18001DBEC (LdrpFindLoadedDllInternal.c)
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     LdrpDropLastInProgressCount @ 0x18005D92C (LdrpDropLastInProgressCount.c)
 *     LdrpDrainWorkQueue @ 0x18005E8F4 (LdrpDrainWorkQueue.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpFindLoadedDll(unsigned __int16 *a1, __int64 a2, PVOID *a3)
{
  int LoadedDllInternal; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+34h] [rbp-CCh]
  _UNICODE_STRING v10; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v11[128]; // [rsp+50h] [rbp-B0h] BYREF

  *(_DWORD *)&v10.Length = 0x1000000;
  *a3 = 0LL;
  v8 = 0;
  v10.Buffer = v11;
  v11[0] = 0;
  LoadedDllInternal = LdrpPreprocessDllName(a1, &v10.Length, 0LL, &v8);
  if ( LoadedDllInternal >= 0 )
  {
    LoadedDllInternal = LdrpFindLoadedDllInternal(&v10, v8);
    if ( LoadedDllInternal >= 0 && v9 < 6 && (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
    {
      LdrpDereferenceModule(*a3);
      *a3 = 0LL;
      LdrpDrainWorkQueue(0LL);
      LoadedDllInternal = LdrpFindLoadedDllInternal(&v10, v8);
      LdrpDropLastInProgressCount(v7, v6);
      if ( LoadedDllInternal >= 0 && v9 != 9 )
      {
        LdrpDereferenceModule(*a3);
        *a3 = 0LL;
        LoadedDllInternal = -1073741515;
      }
    }
  }
  if ( v11 != v10.Buffer )
    NtdllpFreeStringRoutine(v10.Buffer);
  return (unsigned int)LoadedDllInternal;
}
