/*
 * XREFs of ?reset@?$unique_ptr@VMagnifierExperienceHelper@@U?$default_delete@VMagnifierExperienceHelper@@@wistd@@@wistd@@QEAAXPEAVMagnifierExperienceHelper@@@Z @ 0x18008D2E4
 * Callers:
 *     ??1CMagnifierControl@@EEAA@XZ @ 0x18008BF18 (--1CMagnifierControl@@EEAA@XZ.c)
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18008C3CC (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::unique_ptr<MagnifierExperienceHelper,wistd::default_delete<MagnifierExperienceHelper>>::reset(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    return (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
             WPF::g_pProcessHeap,
             v2);
  return result;
}
