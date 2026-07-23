/*
 * XREFs of LdrpLoadDll @ 0x18001733C
 * Callers:
 *     LdrLoadDll @ 0x180016A10 (LdrLoadDll.c)
 *     LdrpInitShimEngine @ 0x18006B74C (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18006B8F4 (LdrpLoadShimEngine.c)
 *     LdrpInitializeImportRedirection @ 0x180081BF4 (LdrpInitializeImportRedirection.c)
 *     LdrpCorInitialize @ 0x180082BB4 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x180083114 (LdrpLoadWow64.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D0960 (LdrpGetProcApphelpCheckModule.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DAFF8 (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     LdrpPreprocessDllName @ 0x18001A360 (LdrpPreprocessDllName.c)
 *     LdrpLogDllState @ 0x18001A6CC (LdrpLogDllState.c)
 *     LdrpLoadDllInternal @ 0x18001FA14 (LdrpLoadDllInternal.c)
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpLoadDll(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v7; // [rsp+40h] [rbp-C0h] BYREF
  int v8; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING v9; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v10[128]; // [rsp+60h] [rbp-A0h] BYREF

  v7 = a3;
  LdrpLogDllState(0LL, a1, 5288LL);
  *(_DWORD *)&v9.Length = 0x1000000;
  v9.Buffer = v10;
  v10[0] = 0;
  v8 = LdrpPreprocessDllName(a1, &v9, 0LL, &v7);
  if ( v8 >= 0 )
    LdrpLoadDllInternal(&v9, 0LL, 0LL, a4, (__int64)&v8);
  if ( v10 != v9.Buffer )
    NtdllpFreeStringRoutine();
  *(_DWORD *)&v9.Length = 0x1000000;
  v9.Buffer = v10;
  v10[0] = 0;
  LdrpLogDllState(0LL, a1, 5289LL);
  return (unsigned int)v8;
}
