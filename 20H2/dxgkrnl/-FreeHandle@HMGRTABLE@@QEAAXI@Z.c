/*
 * XREFs of ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0108DF0
 * Callers:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000230C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0018734 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00E1F44 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0108410 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0111F08 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C0112DF8 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01268EC (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01269AC (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C0126AC8 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 *     ?VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023F120 (-VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C028F1BC (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x1C02B1194 (--1DXGCHANNELENDPOINTPROXY@@UEAA@XZ.c)
 *     ?FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C02B1920 (-FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x1C02B1F3C (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
 *     ??1DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x1C02BAF2C (--1DXGTRACKEDWORKLOAD@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall HMGRTABLE::FreeHandle(HMGRTABLE *this, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edi
  unsigned int v5; // eax
  unsigned int v6; // r8d
  int v7; // edx
  char v8; // cl
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax

  v2 = *((_DWORD *)this + 5);
  v3 = a2;
  if ( v2 >= *((_DWORD *)this + 4) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = 250LL;
    WdLogEvent5_WdAssertion(v10);
    v2 = *((_DWORD *)this + 5);
  }
  if ( v2 < 0x80 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v11 + 24) = 251LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v5 = (v3 >> 6) & 0xFFFFFF;
  if ( v5 < *((_DWORD *)this + 4) )
  {
    v6 = *(_DWORD *)(*(_QWORD *)this + 16LL * v5 + 8);
    v7 = (v6 >> 5) & 3;
    if ( v3 >> 30 == v7 && (v6 & 0x1F) != 0 )
    {
      v8 = v7 + 1;
      if ( v7 == 3 )
        v8 = 1;
      *(_DWORD *)(*(_QWORD *)this + 16LL * v5 + 8) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(32 * v8)) & 0x60;
      *(_DWORD *)(*(_QWORD *)this + 16LL * v5 + 8) &= 0xFFFFFFE0;
      *(_DWORD *)(*(_QWORD *)this + 16LL * v5 + 8) &= ~0x2000u;
      v9 = *(_QWORD *)this;
      ++*((_DWORD *)this + 5);
      *(_DWORD *)(v9 + 16LL * v5) = *(_DWORD *)(v9 + 16LL * *((unsigned int *)this + 3));
      *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) = v5;
    }
  }
}
