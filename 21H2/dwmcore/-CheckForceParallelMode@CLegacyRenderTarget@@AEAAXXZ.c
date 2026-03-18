/*
 * XREFs of ?CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ @ 0x18001F4A8
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x18001D5F0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetGroup@CSyncLockGroup@@SAPEAV1@I@Z @ 0x1801BFBDC (-GetGroup@CSyncLockGroup@@SAPEAV1@I@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIMonitorTarget@@_K0@Z @ 0x1801C0184 (-reserve_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vli.c)
 */

void __fastcall CLegacyRenderTarget::CheckForceParallelMode(CLegacyRenderTarget *this)
{
  struct CSyncLockGroup *Group; // rax

  if ( !*((_QWORD *)this + 2314) )
  {
    if ( CCommonRegistryData::m_parallelModePolicy == 1 )
    {
      if ( !*((_BYTE *)this + 11489) )
        return;
LABEL_6:
      Group = CSyncLockGroup::GetGroup(0xFFFFFFFF);
      *((_QWORD *)this + 2314) = Group;
      *(_QWORD *)detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::reserve_region(
                   (char *)Group + 16,
                   (__int64)(*((_QWORD *)Group + 3) - *((_QWORD *)Group + 2)) >> 3) = (char *)this + 144;
      return;
    }
    if ( CCommonRegistryData::m_parallelModePolicy == 2 )
      goto LABEL_6;
  }
}
