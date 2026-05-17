/*
 * XREFs of LdrpLoadForwardedDll @ 0x180016C08
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x18001664C (LdrpGetDelayloadExportDll.c)
 *     LdrpResolveProcedureAddress @ 0x1800303F4 (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x1800318A0 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x180016E4C (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x1800197B0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180019900 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpPreprocessDllName @ 0x18001A360 (LdrpPreprocessDllName.c)
 *     LdrpLoadDllInternal @ 0x18001FA14 (LdrpLoadDllInternal.c)
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpLoadForwardedDll(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int appended; // [rsp+40h] [rbp-2C8h] BYREF
  _DWORD v11[3]; // [rsp+44h] [rbp-2C4h] BYREF
  __int64 v12; // [rsp+50h] [rbp-2B8h] BYREF
  int v13; // [rsp+58h] [rbp-2B0h]
  __int128 v14; // [rsp+60h] [rbp-2A8h]
  __int128 v15; // [rsp+70h] [rbp-298h]
  __int128 v16; // [rsp+80h] [rbp-288h]
  __int64 v17; // [rsp+90h] [rbp-278h]
  int v18; // [rsp+A0h] [rbp-268h] BYREF
  _WORD *v19; // [rsp+A8h] [rbp-260h]
  _WORD v20[128]; // [rsp+B0h] [rbp-258h] BYREF
  int v21; // [rsp+1B0h] [rbp-158h] BYREF
  _WORD *v22; // [rsp+1B8h] [rbp-150h]
  _WORD v23[128]; // [rsp+1C0h] [rbp-148h] BYREF

  v22 = v23;
  v21 = 0x1000000;
  v23[0] = 0;
  v19 = v20;
  v18 = 0x1000000;
  v20[0] = 0;
  appended = LdrpAppendAnsiStringToFilenameBuffer(&v18, a1);
  if ( appended >= 0 )
  {
    v12 = 72LL;
    v13 = 1;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    RtlActivateActivationContextUnsafeFast(&v12, *(_QWORD *)(a4 + 136));
    v11[0] = 0;
    appended = LdrpPreprocessDllName(&v18, &v21, a4, v11);
    if ( appended >= 0 )
      LdrpLoadDllInternal((unsigned int)&v21, a2, v11[0], a5, a4, a3, a6, (__int64)&appended);
    RtlDeactivateActivationContextUnsafeFast(&v12);
  }
  if ( v20 != v19 )
    NtdllpFreeStringRoutine();
  v19 = v20;
  v18 = 0x1000000;
  v20[0] = 0;
  if ( v23 != v22 )
    NtdllpFreeStringRoutine();
  return (unsigned int)appended;
}
