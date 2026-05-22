/*
 * XREFs of ?SendDeviceCommand@ISMHeatFrameworkHost@@UEAAJKPEAUHeatDeviceCommandMessageInternal@@@Z @ 0x18012D3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ISMHeatFrameworkHost::SendDeviceCommand(
        ISMHeatFrameworkHost *this,
        __int64 a2,
        struct HeatDeviceCommandMessageInternal *a3)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-28h] BYREF
  struct HeatDeviceCommandMessageInternal *v8; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *((_QWORD *)this + 4);
  if ( !v3 )
    return 0LL;
  v8 = a3;
  v7 = 1;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v3 + 72LL))(v3, a2, &v7);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x92,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
