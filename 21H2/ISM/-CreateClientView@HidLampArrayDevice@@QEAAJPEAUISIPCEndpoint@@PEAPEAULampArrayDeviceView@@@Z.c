/*
 * XREFs of ?CreateClientView@HidLampArrayDevice@@QEAAJPEAUISIPCEndpoint@@PEAPEAULampArrayDeviceView@@@Z @ 0x1800A6780
 * Callers:
 *     ?AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z @ 0x1800A1224 (-AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@LampArrayDeviceView@@QEAAXPEAGPEAUHardwareAttributes@@PEAUDeviceAttributes@@PEAULampAttributes@@@Z @ 0x1800A79B4 (-Initialize@LampArrayDeviceView@@QEAAXPEAGPEAUHardwareAttributes@@PEAUDeviceAttributes@@PEAULamp.c)
 */

__int64 __fastcall HidLampArrayDevice::CreateClientView(
        HidLampArrayDevice *this,
        struct ISIPCEndpoint *a2,
        struct LampArrayDeviceView **a3)
{
  struct DeviceAttributes *v3; // rbp
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LampArrayDeviceView *v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = (HidLampArrayDevice *)((char *)this + 544);
  *a3 = 0LL;
  v6 = -1LL;
  do
    ++v6;
  while ( *((_WORD *)this + v6 + 12) );
  v7 = (*(__int64 (__fastcall **)(struct ISIPCEndpoint *, __int64, __int64, char *, LampArrayDeviceView **))(*(_QWORD *)a2 + 24LL))(
         a2,
         40LL * *((int *)this + 136) + 5231,
         2 * v6,
         (char *)this + 24,
         &v11);
  v8 = v7;
  if ( v7 >= 0 )
  {
    LampArrayDeviceView::Initialize(
      v11,
      (unsigned __int16 *)this + 12,
      (HidLampArrayDevice *)((char *)this + 538),
      v3,
      *((struct LampAttributes **)this + 71));
    *a3 = v11;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDE,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
