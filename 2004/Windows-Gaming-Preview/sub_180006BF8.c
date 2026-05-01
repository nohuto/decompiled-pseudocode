/*
 * XREFs of sub_180006BF8 @ 0x180006BF8
 * Callers:
 *     sub_180007730 @ 0x180007730 (sub_180007730.c)
 * Callees:
 *     sub_180006478 @ 0x180006478 (sub_180006478.c)
 *     sub_180007110 @ 0x180007110 (sub_180007110.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180006BF8(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  RTL_SRWLOCK *v8; // rdi
  FARPROC RtlRegisterFeatureConfigurationChangeNotification; // rax
  HMODULE ModuleHandleW; // rax

  *a2 = 0LL;
  if ( *(_BYTE *)a1 )
  {
    v8 = (RTL_SRWLOCK *)(a1 + 32);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 32));
    if ( !*(_QWORD *)(a1 + 88) )
    {
      *(_QWORD *)(a1 + 88) = 0LL;
      RtlRegisterFeatureConfigurationChangeNotification = (FARPROC)qword_18005AB68;
      if ( qword_18005AB68 )
        goto LABEL_7;
      ModuleHandleW = hModule;
      if ( !hModule )
      {
        ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
        hModule = ModuleHandleW;
      }
      RtlRegisterFeatureConfigurationChangeNotification = GetProcAddress(
                                                            ModuleHandleW,
                                                            "RtlRegisterFeatureConfigurationChangeNotification");
      qword_18005AB68 = (__int64)RtlRegisterFeatureConfigurationChangeNotification;
      if ( RtlRegisterFeatureConfigurationChangeNotification )
LABEL_7:
        ((void (__fastcall *)(__int64 (__fastcall *)(), __int64, _QWORD, __int64))RtlRegisterFeatureConfigurationChangeNotification)(
          sub_180007280,
          a1,
          0LL,
          a1 + 88);
    }
    if ( !(unsigned int)sub_180007110(a1 + 72, 0x418A073AA3BC7C75LL, a1)
      && !(unsigned int)sub_180007110(a1 + 80, 0x418A073AA3BC88F5LL, a1) )
    {
      sub_180006478(a1 + 104, a2, a3, a4);
    }
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
  }
}
