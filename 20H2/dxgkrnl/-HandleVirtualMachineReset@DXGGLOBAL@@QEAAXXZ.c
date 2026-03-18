/*
 * XREFs of ?HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ @ 0x1C0268AF4
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C020C98C (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0001FAC (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ @ 0x1C0023D58 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ.c)
 *     ?DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C023778C (-DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C0237830 (-DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::HandleVirtualMachineReset(DXGGLOBAL *this)
{
  __int64 v2; // rdx
  __int64 Current; // rax
  __int64 *v4; // rdx
  __int64 v5; // rdx
  unsigned int v6; // edx
  DXG_GUEST_GLOBAL_VMBUS *v7; // rcx
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v9);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 376, 0LL);
  v2 = *((_QWORD *)this + 45);
  v8[0] = (char *)this + 360;
  while ( 1 )
  {
    v8[1] = v2;
    Current = DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(v8);
    if ( !Current )
      break;
    *(_DWORD *)(Current + 424) = 0;
    v2 = *v4;
  }
  ExReleasePushLockSharedEx((char *)this + 376, 0LL);
  KeLeaveCriticalRegion();
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9, v5);
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 400));
  v6 = *((_DWORD *)this + 401);
  if ( v6 )
  {
    DXG_GUEST_GLOBAL_VMBUS::DeleteGpadl(*((struct _KTHREAD ***)this + 197), v6);
    *((_DWORD *)this + 401) = 0;
  }
  v7 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)this + 197);
  if ( v7 )
    DXG_GUEST_GLOBAL_VMBUS::DestroyVmBusChannel(v7);
  *((_QWORD *)this + 51) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 400, 0LL);
  KeLeaveCriticalRegion();
}
