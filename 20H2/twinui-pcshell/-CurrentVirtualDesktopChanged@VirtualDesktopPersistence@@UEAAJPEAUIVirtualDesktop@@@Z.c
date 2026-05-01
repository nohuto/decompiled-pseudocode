/*
 * XREFs of ?CurrentVirtualDesktopChanged@VirtualDesktopPersistence@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1804351A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktopPersistence::CurrentVirtualDesktopChanged(
        VirtualDesktopPersistence *this,
        struct IVirtualDesktop *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v6; // rax
  _QWORD v7[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, _QWORD *))(*(_QWORD *)a2 + 32LL))(a2, v7);
  if ( v3 < 0 )
  {
    v4 = 64LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v6 = v7[0] - 0x4658059A45DB96FFLL;
  if ( v7[0] == 0x4658059A45DB96FFLL )
    v6 = v7[1] - 0x1012647F7CCD4687LL;
  if ( v6 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, const wchar_t *, int, _QWORD *, __int64))(**((_QWORD **)this + 2) + 32LL))(
           *((_QWORD *)this + 2),
           0LL,
           0LL,
           L"CurrentVirtualDesktop",
           3,
           v7,
           16LL);
    if ( v3 < 0 )
    {
      v4 = 69LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
