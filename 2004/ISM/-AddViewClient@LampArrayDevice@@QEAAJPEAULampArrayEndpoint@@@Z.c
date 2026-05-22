/*
 * XREFs of ?AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z @ 0x1800A0E64
 * Callers:
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x18009EBD4 (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCServer@@KK@Z @ 0x18009EE10 (-OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCServer@@KK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D2E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??_GViewClientListEntry@LampArrayDevice@@QEAAPEAXI@Z @ 0x1800A0E20 (--_GViewClientListEntry@LampArrayDevice@@QEAAPEAXI@Z.c)
 *     ?CreateClientView@HidLampArrayDevice@@QEAAJPEAUISIPCEndpoint@@PEAPEAULampArrayDeviceView@@@Z @ 0x1800A63C0 (-CreateClientView@HidLampArrayDevice@@QEAAJPEAUISIPCEndpoint@@PEAPEAULampArrayDeviceView@@@Z.c)
 */

__int64 __fastcall LampArrayDevice::AddViewClient(LampArrayDevice *this, struct LampArrayEndpoint *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rbx
  _QWORD *v9; // r14
  int ClientView; // eax
  LampArrayDevice **v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    v4[3] = 0LL;
    v4[4] = 0LL;
    v4[2] = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      (const char *)0x8007000ELL);
    return (unsigned int)v6;
  }
  v7 = v5[2];
  v8 = *(_QWORD *)a2;
  if ( v7 != *(_QWORD *)a2 )
  {
    if ( v8 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*(_QWORD *)a2);
      v7 = v5[2];
    }
    v5[2] = v8;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *((_DWORD *)v5 + 6) = *((_DWORD *)a2 + 2);
  v9 = v5 + 4;
  ClientView = HidLampArrayDevice::CreateClientView(
                 *((HidLampArrayDevice **)this + 3),
                 (struct ISIPCEndpoint *)v5[2],
                 (struct LampArrayDeviceView **)v5 + 4);
  v6 = ClientView;
  if ( ClientView < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      (const char *)(unsigned int)ClientView);
LABEL_20:
    LampArrayDevice::ViewClientListEntry::`scalar deleting destructor'((LampArrayDevice::ViewClientListEntry *)v5);
    return (unsigned int)v6;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v5[2] + 40LL))(v5[2], *v9);
  if ( v6 < 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v5[2] + 48LL))(v5[2], *v9);
    goto LABEL_20;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v11 = (LampArrayDevice **)*((_QWORD *)this + 5);
  if ( *v11 != (LampArrayDevice *)((char *)this + 32) )
    __fastfail(3u);
  *v5 = (char *)this + 32;
  v5[1] = v11;
  *v11 = (LampArrayDevice *)v5;
  *((_QWORD *)this + 5) = v5;
  ++*((_QWORD *)this + 6);
  if ( this != (LampArrayDevice *)-56LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  return 0LL;
}
