/*
 * XREFs of ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1C027FFFC
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C011BAD8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0008090 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C00081FC (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ @ 0x1C0046C38 (-DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSVM::DestroyVmProcess(DXGPROCESSVM *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 **v5; // rcx
  unsigned int v6; // edx
  __int64 v7; // rdx

  v1 = (__int64 *)((char *)this + 512);
  v3 = *(_QWORD *)(*((_QWORD *)this + 62) + 496LL);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v3 + 96));
  v4 = *v1;
  if ( *v1 )
  {
    if ( *(__int64 **)(v4 + 8) != v1 || (v5 = (__int64 **)v1[1], *v5 != v1) )
      __fastfail(3u);
    *v5 = (__int64 *)v4;
    *(_QWORD *)(v4 + 8) = v5;
    v1[1] = 0LL;
    *v1 = 0LL;
  }
  *(_QWORD *)(v3 + 104) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 96, 0LL);
  KeLeaveCriticalRegion();
  v6 = *((_DWORD *)this + 135);
  if ( v6 )
  {
    DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)this + 62), v6);
    *((_DWORD *)this + 135) = 0;
  }
  DXGPROCESSVMWP::DecrementNumVmProcesses(*((DXGVIRTUALMACHINE ***)this + 62));
  DXGPROCESS::ReleaseReference(*((DXGPROCESS **)this + 62), v7);
  *((_QWORD *)this + 62) = 0LL;
}
