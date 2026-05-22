/*
 * XREFs of ?CreateAndInitialize@ConsumerControlGenericDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800A44DC
 * Callers:
 *     ?ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ @ 0x1800A0100 (-ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002836C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180037530 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ?Initialize@ConsumerControlGenericDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800A45AC (-Initialize@ConsumerControlGenericDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 */

__int64 __fastcall ConsumerControlGenericDevice::CreateAndInitialize(
        struct PnpDevice *a1,
        struct ConsumerControlGenericDevice **a2)
{
  ConsumerControlGenericDevice *v4; // rax
  ConsumerControlGenericDevice *v5; // rbx
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (ConsumerControlGenericDevice *)RefCountedObject::operator new(0x20uLL);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &RefCountedObject::`vftable';
    *((_DWORD *)v4 + 2) = 1;
    *(_QWORD *)v4 = &ConsumerControlGenericDevice::`vftable';
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 3) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v7 = ConsumerControlGenericDevice::Initialize(v5, a1);
    v8 = v7;
    if ( v7 >= 0 )
    {
      *a2 = v5;
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolgenericdevice.cpp",
        (const char *)(unsigned int)v7);
      RefCountedObject::Release(v5);
      return v8;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolgenericdevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
