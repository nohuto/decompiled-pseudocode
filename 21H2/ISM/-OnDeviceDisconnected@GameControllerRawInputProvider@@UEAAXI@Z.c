/*
 * XREFs of ?OnDeviceDisconnected@GameControllerRawInputProvider@@UEAAXI@Z @ 0x180088B40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GameControllerRawInputProvider::OnDeviceDisconnected(GameControllerRawInputProvider *this, int a2)
{
  _DWORD *i; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  for ( i = (_DWORD *)*((_QWORD *)this + 8); i != (_DWORD *)((char *)this + 64); i = *(_DWORD **)i )
  {
    v4 = *(_QWORD *)i;
    if ( i[4] == a2 )
    {
      v5 = (_QWORD *)*((_QWORD *)i + 1);
      if ( *(_DWORD **)(v4 + 8) != i || (_DWORD *)*v5 != i )
        __fastfail(3u);
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      --*((_QWORD *)this + 10);
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(char *), _DWORD *, __int64))(**((_QWORD **)this + 4)
                                                                                                + 144LL))(
             *((_QWORD *)this + 4),
             GameControllerRawInputProvider::DeviceRemovalCallback,
             i,
             4LL);
      if ( v6 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          366LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
          (const char *)(unsigned int)v6);
        operator delete(i, (const struct std::nothrow_t *)0x20);
      }
      return;
    }
  }
}
