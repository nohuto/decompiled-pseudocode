/*
 * XREFs of sub_180021F90 @ 0x180021F90
 * Callers:
 *     sub_18001B374 @ 0x18001B374 (sub_18001B374.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180021F90(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8)
{
  __int64 (__fastcall *v8)(__int64, __int64, _QWORD, __int64, __int64, __int64, int, int); // r10
  HMODULE ModuleHandleW; // rax

  v8 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64, __int64, int, int))RtlSubscribeWnfStateChangeNotification;
  if ( RtlSubscribeWnfStateChangeNotification )
    return v8(a1, a2, a3, a4, a5, a6, a7, a8);
  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  RtlSubscribeWnfStateChangeNotification = (__int64)GetProcAddress(
                                                      ModuleHandleW,
                                                      "RtlSubscribeWnfStateChangeNotification");
  v8 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64, __int64, int, int))RtlSubscribeWnfStateChangeNotification;
  if ( RtlSubscribeWnfStateChangeNotification )
    return v8(a1, a2, a3, a4, a5, a6, a7, a8);
  else
    return 3221225785LL;
}
