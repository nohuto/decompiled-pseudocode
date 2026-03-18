/*
 * XREFs of ?QueryWarpExtension@CD3DDevice@@AEAAJXZ @ 0x1800B0A80
 * Callers:
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x1800B1CA8 (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CD3DDevice::QueryWarpExtension(CD3DDevice *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((int *)this + 156) < 40960 )
    return 0LL;
  v2 = (_QWORD *)((char *)this + 608);
  v3 = *((_QWORD *)this + 76);
  *v2 = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 74))(
         *((_QWORD *)this + 74),
         &GUID_f13ebcd1_672c_4f8b_a631_9539ca748d71,
         v2) < 0 )
    return 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v2 + 24LL))(*v2, (char *)this + 960);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\globald3ddevice.cpp",
    (const char *)(unsigned int)v4,
    v7);
  return v5;
}
