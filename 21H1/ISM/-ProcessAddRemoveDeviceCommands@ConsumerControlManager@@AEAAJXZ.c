/*
 * XREFs of ?ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ @ 0x1800A0100
 * Callers:
 *     ?WorkerThreadProc@ConsumerControlManager@@AEAAJXZ @ 0x1800A056C (-WorkerThreadProc@ConsumerControlManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D280 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x18009EF3C (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ??_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x18009FDC8 (--_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?ContainsDevice@ConsumerControlNexusDevice@@QEAA_NPEAVPnpDevice@@@Z @ 0x1800A31EC (-ContainsDevice@ConsumerControlNexusDevice@@QEAA_NPEAVPnpDevice@@@Z.c)
 *     ?TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800A4218 (-TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUI.c)
 *     ?ContainsDevice@ConsumerControlGenericDevice@@QEAA_NPEAVPnpDevice@@@Z @ 0x1800A4420 (-ContainsDevice@ConsumerControlGenericDevice@@QEAA_NPEAVPnpDevice@@@Z.c)
 *     ?CreateAndInitialize@ConsumerControlGenericDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800A44DC (-CreateAndInitialize@ConsumerControlGenericDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall ConsumerControlManager::ProcessAddRemoveDeviceCommands(ConsumerControlManager *this)
{
  struct PnpDevice **v2; // rax
  struct PnpDevice **v3; // rsi
  struct PnpDevice *v4; // rcx
  int v5; // ecx
  __int64 *i; // rbx
  bool v7; // al
  __int64 *v8; // rcx
  __int64 **v9; // rax
  __int64 *j; // rbx
  bool v11; // al
  __int64 *v12; // rcx
  __int64 **v13; // rax
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v14; // rcx
  struct ConsumerControlNexusDevice **v15; // rax
  struct ConsumerControlNexusDevice **v16; // rdi
  ConsumerControlManager **v17; // rcx
  struct ConsumerControlGenericDevice **v18; // rax
  struct ConsumerControlGenericDevice **v19; // r14
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v20; // rbx
  ConsumerControlManager **v21; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  while ( *((_QWORD *)this + 10) )
  {
    v2 = (struct PnpDevice **)((char *)this + 64);
    v3 = (struct PnpDevice **)*((_QWORD *)this + 8);
    if ( v3[1] != (ConsumerControlManager *)((char *)this + 64) )
      goto LABEL_45;
    v4 = *v3;
    if ( *((struct PnpDevice ***)*v3 + 1) != v3 )
      goto LABEL_45;
    *v2 = v4;
    *((_QWORD *)v4 + 1) = v2;
    if ( v3 == v2 )
      v3 = 0LL;
    else
      --*((_QWORD *)this + 10);
    v5 = *((_DWORD *)v3 + 4);
    if ( v5 )
    {
      if ( v5 != 1 )
        goto LABEL_41;
      for ( i = (__int64 *)*((_QWORD *)this + 2); ; i = (__int64 *)*i )
      {
        if ( i == (__int64 *)((char *)this + 16) )
          goto LABEL_16;
        v7 = ConsumerControlGenericDevice::ContainsDevice((ConsumerControlGenericDevice *)i[2], v3[4]);
        v8 = (__int64 *)*i;
        if ( v7 )
          break;
      }
      if ( (__int64 *)v8[1] != i )
        goto LABEL_45;
      v9 = (__int64 **)i[1];
      if ( *v9 != i )
        goto LABEL_45;
      *v9 = v8;
      v8[1] = (__int64)v9;
      --*((_QWORD *)this + 4);
      ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'((ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)i);
LABEL_16:
      for ( j = (__int64 *)*((_QWORD *)this + 5); ; j = (__int64 *)*j )
      {
        if ( j == (__int64 *)((char *)this + 40) )
          goto LABEL_41;
        v11 = ConsumerControlNexusDevice::ContainsDevice((ConsumerControlNexusDevice *)j[2], v3[4]);
        v12 = (__int64 *)*j;
        if ( v11 )
          break;
      }
      if ( (__int64 *)v12[1] != j || (v13 = (__int64 **)j[1], *v13 != j) )
LABEL_45:
        __fastfail(3u);
      *v13 = v12;
      v12[1] = (__int64)v13;
      v14 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)j;
      --*((_QWORD *)this + 7);
      goto LABEL_40;
    }
    v15 = (struct ConsumerControlNexusDevice **)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v16 = v15;
    if ( v15 )
    {
      *v15 = 0LL;
      v15[1] = 0LL;
      v15[2] = 0LL;
    }
    else
    {
      v16 = 0LL;
    }
    if ( !v16 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF2,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_44;
    }
    if ( (int)ConsumerControlNexusDevice::TryCreateAndInitialize(
                v3[4],
                *((struct IRawInputClient **)this + 14),
                *((struct IMessageSession **)this + 15),
                *((struct IRawInputProvider **)this + 16),
                v16 + 2) < 0 )
    {
      v18 = (struct ConsumerControlGenericDevice **)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v19 = v18;
      if ( v18 )
      {
        *v18 = 0LL;
        v18[1] = 0LL;
        v18[2] = 0LL;
      }
      else
      {
        v19 = 0LL;
      }
      v20 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v19;
      if ( !v19 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFE,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolmanager.cpp",
          (const char *)0x8007000ELL);
        ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'((ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v16);
LABEL_44:
        ConsumerControlManager::ConsumerControlDeviceCommandListEntry::`scalar deleting destructor'((ConsumerControlManager::ConsumerControlDeviceCommandListEntry *)v3);
        return 2147942414LL;
      }
      if ( ConsumerControlGenericDevice::CreateAndInitialize(v3[4], v19 + 2) >= 0 )
      {
        v20 = 0LL;
        v21 = (ConsumerControlManager **)*((_QWORD *)this + 3);
        if ( *v21 != (ConsumerControlManager *)((char *)this + 16) )
          goto LABEL_45;
        *v19 = (ConsumerControlManager *)((char *)this + 16);
        v19[1] = (struct ConsumerControlGenericDevice *)v21;
        *v21 = (ConsumerControlManager *)v19;
        ++*((_QWORD *)this + 4);
        *((_QWORD *)this + 3) = v19;
        v19 = 0LL;
      }
      if ( v19 )
        ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v20);
      v14 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)v16;
LABEL_40:
      ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v14);
      goto LABEL_41;
    }
    v17 = (ConsumerControlManager **)*((_QWORD *)this + 6);
    if ( *v17 != (ConsumerControlManager *)((char *)this + 40) )
      goto LABEL_45;
    *v16 = (ConsumerControlManager *)((char *)this + 40);
    v16[1] = (struct ConsumerControlNexusDevice *)v17;
    *v17 = (ConsumerControlManager *)v16;
    ++*((_QWORD *)this + 7);
    *((_QWORD *)this + 6) = v16;
LABEL_41:
    ConsumerControlManager::ConsumerControlDeviceCommandListEntry::`scalar deleting destructor'((ConsumerControlManager::ConsumerControlDeviceCommandListEntry *)v3);
  }
  return 0LL;
}
