/*
 * XREFs of sub_18005B5E8 @ 0x18005B5E8
 * Callers:
 *     sub_18000E9C0 @ 0x18000E9C0 (sub_18000E9C0.c)
 *     sub_18005B580 @ 0x18005B580 (sub_18005B580.c)
 * Callees:
 *     sub_1800104CC @ 0x1800104CC (sub_1800104CC.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_18006C4AC @ 0x18006C4AC (sub_18006C4AC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_180123D28 @ 0x180123D28 (sub_180123D28.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18005B5E8(LPCRITICAL_SECTION lpCriticalSection, struct _RTL_CRITICAL_SECTION *a2)
{
  bool v4; // bl
  int v5; // eax
  int v6; // eax
  unsigned __int64 v7; // r8
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  int v11; // [rsp+50h] [rbp+7h] BYREF
  int v12; // [rsp+54h] [rbp+Bh] BYREF
  int v13; // [rsp+58h] [rbp+Fh] BYREF
  int v14; // [rsp+5Ch] [rbp+13h] BYREF
  int v15; // [rsp+60h] [rbp+17h] BYREF
  LPCRITICAL_SECTION v16; // [rsp+68h] [rbp+1Fh] BYREF
  __int128 *v17; // [rsp+70h] [rbp+27h] BYREF
  __int128 v18; // [rsp+78h] [rbp+2Fh] BYREF

  v11 = 0;
  v18 = xmmword_18015B730;
  v12 = 0;
  if ( !LOBYTE(lpCriticalSection[1].SpinCount) )
  {
    v4 = (unsigned __int8)sub_18006C4AC(lpCriticalSection)
      && (int)GetDefaultSpatialSettingsForEndpoint(a2, &v11, &v18, &v12) >= 0;
    EnterCriticalSection(lpCriticalSection);
    v16 = lpCriticalSection;
    if ( v4
      && !LOBYTE(lpCriticalSection[1].SpinCount)
      && (*(int (__fastcall **)(_QWORD, int *))(**(_QWORD **)&lpCriticalSection[1].LockCount + 112LL))(
           *(_QWORD *)&lpCriticalSection[1].LockCount,
           &v11) < 0 )
    {
      sub_1800104CC();
      LOBYTE(lpCriticalSection[171].RecursionCount) = 1;
      memset(&lpCriticalSection[2].LockSemaphore, 0, 0x48uLL);
      memset((char *)&lpCriticalSection[4].OwningThread + 4, 0, 0x1A10uLL);
      LODWORD(lpCriticalSection[4].OwningThread) = 0;
      v5 = v11;
      LODWORD(lpCriticalSection[2].LockSemaphore) = v11;
      HIDWORD(lpCriticalSection[4].DebugInfo) = v5;
      *(_OWORD *)((char *)&lpCriticalSection[2].SpinCount + 4) = v18;
      v6 = v12;
      lpCriticalSection[4].RecursionCount = v12 != 0;
      LODWORD(lpCriticalSection[2].SpinCount) = v6;
      (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, HANDLE *, _QWORD, _QWORD))(*(_QWORD *)lpCriticalSection[1].DebugInfo
                                                                                    + 48LL))(
        lpCriticalSection[1].DebugInfo,
        &lpCriticalSection[2].LockSemaphore,
        0LL,
        0LL);
      if ( (unsigned int)dword_18019C448 > 4 )
      {
        if ( __vcrt_trace_logging_provider::_TlgKeywordOn(
               (__vcrt_trace_logging_provider *)&dword_18019C448,
               (const struct _TlgProvider_t *)0x10,
               v7) )
        {
          v13 = v10;
          v14 = v12;
          v15 = v11;
          v17 = &v18;
          v16 = a2;
          sub_180123D28(
            v8,
            (unsigned int)&unk_18016C009,
            v9,
            v10,
            (__int64)&v16,
            (__int64)&v17,
            (__int64)&v15,
            (__int64)&v14,
            (__int64)&v13);
        }
      }
    }
    LOBYTE(lpCriticalSection[1].SpinCount) = 1;
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
  }
}
