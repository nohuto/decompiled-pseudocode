/*
 * XREFs of ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1C033534C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0186C8C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C000C1D8 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000ED3C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ @ 0x1C00578B8 (-DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ.c)
 *     McTemplateK0ppqqpppz_EtwWriteTransfer @ 0x1C0057D24 (McTemplateK0ppqqpppz_EtwWriteTransfer.c)
 */

void __fastcall DXGPROCESSVM::DestroyVmProcess(DXGPROCESSVM *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rax
  _QWORD *v5; // rcx
  unsigned int v6; // edx

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0ppqqpppz_EtwWriteTransfer(
      (__int64)this,
      &EventDestroyDxgProcessVm,
      *((_QWORD *)this + 8),
      this,
      *(_QWORD *)(*((_QWORD *)this + 8) + 80LL),
      *((_DWORD *)this + 126),
      *((_DWORD *)this + 106),
      *((_QWORD *)this + 82),
      *((_QWORD *)this + 77),
      *(_QWORD *)(*((_QWORD *)this + 76) + 608LL),
      *((_QWORD *)this + 80));
  v2 = (_QWORD *)((char *)this + 624);
  v3 = *(_QWORD *)(*((_QWORD *)this + 76) + 608LL);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v3 + 128));
  v4 = *((_QWORD *)this + 78);
  if ( v4 )
  {
    if ( *(_QWORD **)(v4 + 8) != v2 || (v5 = (_QWORD *)*((_QWORD *)this + 79), (_QWORD *)*v5 != v2) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    *((_QWORD *)this + 79) = 0LL;
    *v2 = 0LL;
  }
  *(_QWORD *)(v3 + 136) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 128, 0LL);
  KeLeaveCriticalRegion();
  v6 = *((_DWORD *)this + 163);
  if ( v6 )
  {
    DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)this + 76), v6);
    *((_DWORD *)this + 163) = 0;
  }
  DXGPROCESSVMWP::DecrementNumVmProcesses(*((DXGVIRTUALMACHINE ***)this + 76));
  DXGPROCESS::ReleaseReference(*((DXGPROCESS **)this + 76));
  *((_QWORD *)this + 76) = 0LL;
}
