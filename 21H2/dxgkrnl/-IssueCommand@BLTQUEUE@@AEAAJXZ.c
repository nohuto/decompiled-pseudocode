/*
 * XREFs of ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C0160498
 * Callers:
 *     ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x1C0160330 (-UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C01603BC (-Flush@BLTQUEUE@@QEAAXXZ.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C01C3D18 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?NotifyGlobalVmBusStatusChange@DXGDODPRESENT@@QEAAXE@Z @ 0x1C03BC5EC (-NotifyGlobalVmBusStatusChange@DXGDODPRESENT@@QEAAXE@Z.c)
 *     ?NotifyHostMonitorPowerState@DXGDODPRESENT@@QEAAXIE@Z @ 0x1C03BC644 (-NotifyHostMonitorPowerState@DXGDODPRESENT@@QEAAXIE@Z.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03BD184 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C03BE07C (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BLTQUEUE::IssueCommand(BLTQUEUE *this)
{
  *((_QWORD *)this + 78) = KeGetCurrentThread();
  *((LARGE_INTEGER *)this + 97) = KeQueryPerformanceCounter(0LL);
  KeSetEvent((PRKEVENT)((char *)this + 520), 0, 0);
  KeWaitForSingleObject((char *)this + 544, Executive, 0, 0, 0LL);
  *((_QWORD *)this + 78) = 0LL;
  return *((unsigned int *)this + 150);
}
