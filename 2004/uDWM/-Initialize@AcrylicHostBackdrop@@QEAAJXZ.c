/*
 * XREFs of ?Initialize@AcrylicHostBackdrop@@QEAAJXZ @ 0x180014BCC
 * Callers:
 *     ?Initialize@CTopLevelWindow@@MEAAJ_N@Z @ 0x180017B00 (-Initialize@CTopLevelWindow@@MEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@UdwmDcompVisual@@QEAAJXZ @ 0x180013124 (-Initialize@UdwmDcompVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcrylicHostBackdrop::Initialize(AcrylicHostBackdrop *this)
{
  __int64 v2; // rax
  struct IDCompositionDesktopDevicePartner **v3; // rbx
  CBaseObject *v4; // rcx
  int v5; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         88LL);
  v3 = (struct IDCompositionDesktopDevicePartner **)v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_QWORD *)v2 = &UdwmDcompVisual::`vftable';
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_QWORD *)(v2 + 40) = 0LL;
    *(_QWORD *)(v2 + 48) = 0LL;
    *(_QWORD *)(v2 + 56) = 0LL;
    *(_QWORD *)(v2 + 64) = 0LL;
    *(_QWORD *)(v2 + 72) = 0LL;
    *(_QWORD *)(v2 + 80) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v4 )
    CBaseObject::Release(v4);
  *((_QWORD *)this + 2) = v3;
  if ( v3 )
  {
    if ( *((_BYTE *)this + 24) )
      return 0LL;
    v5 = UdwmDcompVisual::Initialize(v3);
    if ( v5 >= 0 )
      return 0LL;
    v7 = 12LL;
  }
  else
  {
    v5 = -2147024882;
    v7 = 9LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"clientcore\\windows\\dwm\\udwm\\acrylichostbackdrop.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
