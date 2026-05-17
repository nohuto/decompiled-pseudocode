/*
 * XREFs of LdrpLoadDll @ 0x18001733C
 * Callers:
 *     LdrLoadDll @ 0x180016A10 (LdrLoadDll.c)
 *     LdrpInitShimEngine @ 0x18006C77C (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18006C924 (LdrpLoadShimEngine.c)
 *     LdrpInitializeImportRedirection @ 0x180082514 (LdrpInitializeImportRedirection.c)
 *     LdrpCorInitialize @ 0x1800832C4 (LdrpCorInitialize.c)
 *     LdrpLoadWow64 @ 0x180083824 (LdrpLoadWow64.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D0920 (LdrpGetProcApphelpCheckModule.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DADA8 (AVrfpLoadAndInitializeProvider.c)
 * Callees:
 *     LdrpPreprocessDllName @ 0x18001A360 (LdrpPreprocessDllName.c)
 *     LdrpLogDllState @ 0x18001A6CC (LdrpLogDllState.c)
 *     LdrpLoadDllInternal @ 0x18001FA14 (LdrpLoadDllInternal.c)
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpLoadDll(__int64 a1, int a2, int a3, __int64 a4)
{
  int v8; // [rsp+40h] [rbp-C0h] BYREF
  int v9; // [rsp+48h] [rbp-B8h] BYREF
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  _WORD *v11; // [rsp+58h] [rbp-A8h]
  _WORD v12[128]; // [rsp+60h] [rbp-A0h] BYREF

  v8 = a3;
  LdrpLogDllState(0LL, a1, 5288LL);
  v10 = 0x1000000;
  v11 = v12;
  v12[0] = 0;
  v9 = LdrpPreprocessDllName(a1, &v10, 0LL, &v8);
  if ( v9 >= 0 )
    LdrpLoadDllInternal((unsigned int)&v10, a2, v8, 4, 0LL, 0LL, a4, (__int64)&v9);
  if ( v12 != v11 )
    NtdllpFreeStringRoutine();
  v10 = 0x1000000;
  v11 = v12;
  v12[0] = 0;
  LdrpLogDllState(0LL, a1, 5289LL);
  return (unsigned int)v9;
}
