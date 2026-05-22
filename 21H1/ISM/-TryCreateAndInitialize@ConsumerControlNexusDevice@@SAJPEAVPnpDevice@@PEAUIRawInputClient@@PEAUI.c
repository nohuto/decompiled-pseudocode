/*
 * XREFs of ?TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800A4218
 * Callers:
 *     ?ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ @ 0x1800A0100 (-ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ.c)
 * Callees:
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z @ 0x180020634 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002836C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??4?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEAAAEAV012@PEAUISystemInputRouter@@@Z @ 0x18002AEAC (--4-$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEAAAEAV012@PEAUISystemInputRouter@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180037530 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800A3310 (-Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?NotifyDeviceAttach@ConsumerControlNexusDevice@@AEAAJPEAUIRawInputProvider@@@Z @ 0x1800A3678 (-NotifyDeviceAttach@ConsumerControlNexusDevice@@AEAAJPEAUIRawInputProvider@@@Z.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::TryCreateAndInitialize(
        struct PnpDevice *a1,
        struct IRawInputClient *a2,
        struct IMessageSession *a3,
        struct IRawInputProvider *a4,
        struct ConsumerControlNexusDevice **a5)
{
  __int64 *v9; // rax
  __int64 *v10; // rbx
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v9 = (__int64 *)RefCountedObject::operator new(0x90uLL);
  v10 = v9;
  if ( v9 )
  {
    *v9 = (__int64)&RefCountedObject::`vftable';
    *((_DWORD *)v9 + 2) = 1;
    *v9 = (__int64)&ConsumerControlNexusDevice::`vftable';
    v9[2] = 0LL;
    v9[3] = 0LL;
    v9[4] = 0LL;
    v9[8] = 0LL;
    v9[7] = (__int64)(v9 + 6);
    v9[6] = (__int64)(v9 + 6);
    v9[11] = 0LL;
    v9[10] = (__int64)(v9 + 9);
    v9[9] = (__int64)(v9 + 9);
    *((_BYTE *)v9 + 104) = 0;
    v9[14] = 0LL;
    v9[15] = 0LL;
    v9[16] = 0LL;
    *((_BYTE *)v9 + 136) = 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  Microsoft::WRL::ComPtr<IRawInputClient>::operator=(v10 + 14, (__int64)a2);
  Microsoft::WRL::ComPtr<ISystemInputRouter>::operator=(v10 + 15, (__int64)a3);
  v12 = ConsumerControlNexusDevice::Initialize((ConsumerControlNexusDevice *)v10, a1);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 57LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)(unsigned int)v12);
    RefCountedObject::Release((RefCountedObject *)v10);
    return v13;
  }
  v12 = ConsumerControlNexusDevice::NotifyDeviceAttach((ConsumerControlNexusDevice *)v10, a4);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 59LL;
    goto LABEL_10;
  }
  *a5 = (struct ConsumerControlNexusDevice *)v10;
  return 0LL;
}
