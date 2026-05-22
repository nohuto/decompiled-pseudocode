/*
 * XREFs of ??R?$default_delete@VSystemButtonProcessor@@@std@@QEBAXPEAVSystemButtonProcessor@@@Z @ 0x180171948
 * Callers:
 *     ?Create@SystemButtonProcessor@@SAJPEAPEAV1@@Z @ 0x18003992C (-Create@SystemButtonProcessor@@SAJPEAPEAV1@@Z.c)
 *     ??1?$unique_ptr@VComboButtonProcessor@@U?$default_delete@VComboButtonProcessor@@@std@@@std@@QEAA@XZ @ 0x180171928 (--1-$unique_ptr@VComboButtonProcessor@@U-$default_delete@VComboButtonProcessor@@@std@@@std@@QEAA.c)
 *     ?Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1801719E8 (-Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?Create@RawButtonProcessor@@SAJPEAPEAV1@@Z @ 0x180181EB4 (-Create@RawButtonProcessor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::default_delete<SystemButtonProcessor>::operator()(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a2 + 8) + 24LL))(a2 + 8, 1LL);
  return result;
}
