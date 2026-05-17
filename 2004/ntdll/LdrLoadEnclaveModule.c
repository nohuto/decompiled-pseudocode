/*
 * XREFs of LdrLoadEnclaveModule @ 0x1800CCE20
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleasePath @ 0x180011F80 (RtlReleasePath.c)
 *     LdrpInitializeDllPath @ 0x1800169B8 (LdrpInitializeDllPath.c)
 *     LdrpPreprocessDllName @ 0x18001A360 (LdrpPreprocessDllName.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x18002FA14 (LdrpObtainLockedEnclave.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800CCFA8 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800CD074 (LdrpCreatePendingEnclaveModule.c)
 *     LdrpDereferenceEnclave @ 0x1800CD2D0 (LdrpDereferenceEnclave.c)
 *     LdrpLoadEnclaveModule @ 0x1800CD7B8 (LdrpLoadEnclaveModule.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x1800CFFD4 (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 */

__int64 __fastcall LdrLoadEnclaveModule(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rax
  __int64 *v6; // rdi
  int PendingEnclaveModule; // ebx
  _QWORD *v9; // r14
  _QWORD *i; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  int v14[3]; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v15[15]; // [rsp+50h] [rbp-B0h] BYREF
  char v16; // [rsp+CCh] [rbp-34h]
  int v17; // [rsp+D0h] [rbp-30h] BYREF
  __int16 *v18; // [rsp+D8h] [rbp-28h]
  __int16 v19; // [rsp+E0h] [rbp-20h] BYREF

  v5 = LdrpObtainLockedEnclave(a1, 1);
  v6 = v5;
  if ( !v5 )
    return 3221225632LL;
  if ( *((_DWORD *)v5 + 14) == 16 )
  {
    LdrpInitializeDllPath(*(void **)(a3 + 8), a2, v15);
    if ( v6[11] || (v9 = v6 + 12, (_QWORD *)*v9 != v9) )
    {
      PendingEnclaveModule = -1073741800;
    }
    else
    {
      v17 = 0x1000000;
      v18 = &v19;
      v19 = 0;
      v13 = 0x800000;
      PendingEnclaveModule = LdrpPreprocessDllName((unsigned __int16 *)a3, (unsigned __int16 *)&v17, 0, &v13);
      if ( PendingEnclaveModule >= 0 )
      {
        v14[0] = 0;
        PendingEnclaveModule = LdrpCreatePendingEnclaveModule(
                                 (_DWORD)v6,
                                 (unsigned int)&v17,
                                 v13,
                                 7,
                                 (__int64)v15,
                                 0LL,
                                 0LL,
                                 (__int64)v14);
        if ( PendingEnclaveModule >= 0 )
        {
          for ( i = (_QWORD *)*v9; i != v9; i = (_QWORD *)*i )
          {
            PendingEnclaveModule = LdrpLoadEnclaveModule(i[22]);
            if ( PendingEnclaveModule < 0 )
              goto LABEL_15;
          }
          PendingEnclaveModule = v14[0];
        }
      }
    }
  }
  else
  {
    PendingEnclaveModule = -1073741664;
  }
LABEL_15:
  LdrpCleanupEnclaveLoadState(v6, (unsigned int)PendingEnclaveModule);
  RtlLeaveCriticalSection((__int64)(v6 + 2), v11, v12);
  LdrpDereferenceEnclave(v6);
  if ( v16 )
    RtlReleasePath(v15[0]);
  LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry((unsigned int)PendingEnclaveModule);
  return (unsigned int)PendingEnclaveModule;
}
