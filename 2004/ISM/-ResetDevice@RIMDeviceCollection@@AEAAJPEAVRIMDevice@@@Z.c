/*
 * XREFs of ?ResetDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x180090814
 * Callers:
 *     ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z @ 0x180038630 (-OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMDeviceCollection::ResetDevice(
        RIMDeviceCollection *this,
        struct RIMDevice *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rbx
  bool v5; // zf
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)a2 + 4);
  if ( *(_DWORD *)(v4 + 8) < 0x60Cu )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1144LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      a4);
    __debugbreak();
  }
  v5 = (*(_DWORD *)(v4 + 4) & 0xFFFFFEFF) == 0;
  *(_BYTE *)(v4 + 38) = 1;
  if ( v5
    || (v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2), v4),
        v7 = v6,
        v6 >= 0) )
  {
    *(_BYTE *)(v4 + 38) = 0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x482,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
