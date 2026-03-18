/*
 * XREFs of ?Flush@CD3DDevice@@QEAAXXZ @ 0x1800D5E58
 * Callers:
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x1800820C0 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?FlushAllDevices@CDeviceManager@@QEAAXXZ @ 0x1800D5DE8 (-FlushAllDevices@CDeviceManager@@QEAAXXZ.c)
 *     ?Present@CLegacyRemotingSwapChain@@UEAAJXZ @ 0x1800E0F90 (-Present@CLegacyRemotingSwapChain@@UEAAJXZ.c)
 *     ?RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18024F390 (-RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDevice::Flush(CD3DDevice *this)
{
  __int64 v2; // rcx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 76);
  if ( v2 )
  {
    v3 = 29;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 24LL))(v2, &v3);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 75) + 888LL))(*((_QWORD *)this + 75));
  }
  *((_BYTE *)this + 1435) = 0;
}
