/*
 * XREFs of ?UpdateVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z @ 0x1C02B581C
 * Callers:
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C0285228 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?UpdateVmBusHandle@DXGVMBUSCHANNEL@@QEAAJPEAX@Z @ 0x1C02B3870 (-UpdateVmBusHandle@DXGVMBUSCHANNEL@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::UpdateVmBus(DXGVMBUSCHANNEL **this, void *a2)
{
  __int64 v4; // rdx
  unsigned int updated; // ebx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (struct DXGFASTMUTEX *const)(this + 5), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  updated = DXGVMBUSCHANNEL::UpdateVmBusHandle(this[13], a2);
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7, v4);
  return updated;
}
