/*
 * XREFs of ?OnShutdown@CComposition@@QEAAXXZ @ 0x180155454
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801533D4 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18006AF70 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800CB050 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CFC44 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDeviceManager@@0AEAV?$allocator@VDeviceInfo@CDeviceManager@@@0@@Z @ 0x1800DB458 (--$_Destroy_range@V-$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessOffTheadPreComputeRequests@CComposition@@IEAAPEAU_SLIST_ENTRY@@XZ @ 0x18015566C (-ProcessOffTheadPreComputeRequests@CComposition@@IEAAPEAU_SLIST_ENTRY@@XZ.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x1801557C0 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x1801557F0 (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x180155B10 (-clear@-$vector@V-$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     ?Disconnect@CMessageConversationHost@@QEAAXXZ @ 0x1801641F8 (-Disconnect@CMessageConversationHost@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x180164930 (-InternalRelease@-$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CComposition::OnShutdown(CComposition *this)
{
  char *v1; // rsi
  struct _SLIST_ENTRY *v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rcx
  CRenderTargetBitmap *v7; // rcx
  Microsoft::Bamo::BaseBamoConnection *v8; // rcx
  CComposition *v9; // rcx

  v1 = (char *)this + 520;
  *((_BYTE *)this + 1132) = 1;
  AcquireSRWLockExclusive((PSRWLOCK)this + 65);
  *((_DWORD *)v1 + 2) = GetCurrentThreadId();
  v3 = CComposition::ProcessOffTheadPreComputeRequests(this);
  std::_Destroy_range<std::allocator<CDeviceManager::DeviceInfo>>(qword_180348598, xmmword_1803485A0);
  *(_QWORD *)&xmmword_1803485A0 = qword_180348598;
  CComposition::ReleaseNotificationChannels(this);
  v4 = *((_QWORD *)this + 11);
  *(_QWORD *)(v4 + 16) = *(_QWORD *)(v4 + 8);
  *(_QWORD *)(v4 + 40) = *(_QWORD *)(v4 + 32);
  *(_BYTE *)(v4 + 130) = 1;
  std::vector<wil::com_ptr_t<CRenderTarget,wil::err_returncode_policy>>::clear(v4 + 56);
  while ( *((_DWORD *)this + 80) )
    CComposition::CloseChannel(
      this,
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 37) + 8LL * (unsigned int)(*((_DWORD *)this + 80) - 1)) + 16LL));
  CMessageConversationHost::Disconnect(*((CMessageConversationHost **)this + 135));
  CRenderTargetBitmap::Release(*((CRenderTargetBitmap **)this + 135));
  v5 = *((_QWORD *)this + 137);
  *((_QWORD *)this + 135) = 0LL;
  Microsoft::WRL::ComPtr<DataProviderRegistrarConnection>::InternalRelease(v5 + 24);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)(v5 + 32));
  v6 = *(_QWORD *)(v5 + 16);
  if ( v6 )
  {
    *(_QWORD *)(v5 + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (CRenderTargetBitmap *)*((_QWORD *)this + 137);
  if ( v7 )
  {
    *((_QWORD *)this + 137) = 0LL;
    CRenderTargetBitmap::Release(v7);
  }
  v8 = (Microsoft::Bamo::BaseBamoConnection *)*((_QWORD *)this + 136);
  if ( v8 )
  {
    *((_QWORD *)this + 136) = 0LL;
    Microsoft::Bamo::BaseBamoConnection::Release(v8);
  }
  *((_DWORD *)v1 + 2) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)v1);
  CComposition::CompleteOffTheadPreComputeRequests(v9, v3);
}
