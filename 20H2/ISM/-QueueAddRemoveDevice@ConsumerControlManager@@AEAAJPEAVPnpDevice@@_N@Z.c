/*
 * XREFs of ?QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z @ 0x18009FE3C
 * Callers:
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x18009EB34 (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z @ 0x18009ECD0 (-OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D360 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x18009F82C (--4-$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z.c)
 *     ??_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x18009F868 (--_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?Release@ConsumerControlManager@@UEAAKXZ @ 0x18009FF50 (-Release@ConsumerControlManager@@UEAAKXZ.c)
 */

__int64 __fastcall ConsumerControlManager::QueueAddRemoveDevice(
        ConsumerControlManager *this,
        struct PnpDevice *a2,
        unsigned __int8 a3)
{
  int v3; // esi
  _QWORD *v6; // rax
  ULONG_PTR v7; // rbx
  ConsumerControlManager *v9; // rcx
  DWORD v10; // eax
  ConsumerControlManager::ConsumerControlDeviceCommandListEntry *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a3;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = (ULONG_PTR)v6;
  if ( v6 )
  {
    *v6 = 0LL;
    v6[1] = 0LL;
    v6[2] = 0LL;
    v6[3] = 0LL;
    v6[4] = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v9 = *(ConsumerControlManager **)(v7 + 24);
    if ( v9 != this )
    {
      if ( this )
      {
        _InterlockedIncrement((volatile signed __int32 *)this + 2);
        v9 = *(ConsumerControlManager **)(v7 + 24);
      }
      *(_QWORD *)(v7 + 24) = this;
      if ( v9 )
        ConsumerControlManager::Release((ULONG_PTR)v9);
    }
    Microsoft::WRL::ComPtr<HidLampArrayDevice>::operator=((RefCountedObject **)(v7 + 32), (volatile signed __int32 *)a2);
    *(_DWORD *)(v7 + 16) = v3 ^ 1;
    v10 = QueueUserAPC((PAPCFUNC)ConsumerControlManager::AddRemoveDeviceCommandApc, *((HANDLE *)this + 12), v7);
    v11 = (ConsumerControlManager::ConsumerControlDeviceCommandListEntry *)v7;
    if ( v10 )
      v11 = 0LL;
    if ( v11 )
      ConsumerControlManager::ConsumerControlDeviceCommandListEntry::`scalar deleting destructor'(v11);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
