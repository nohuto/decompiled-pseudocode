/*
 * XREFs of ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x180081138
 * Callers:
 *     ?Present@CRenderTargetManager@@QEAAJXZ @ 0x180078F98 (-Present@CRenderTargetManager@@QEAAJXZ.c)
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x18007CF20 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x18007DBDC (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 *     ?UpdateCompositorClockBoost@CRenderTargetManager@@AEAAXXZ @ 0x180080CC8 (-UpdateCompositorClockBoost@CRenderTargetManager@@AEAAXXZ.c)
 *     ?CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z @ 0x180080F7C (-CollectStats@CRenderTargetManager@@QEAAIPEAPEAUtagCOMPOSITION_TARGET_ID_AND_STATS@@@Z.c)
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x1800EE630 (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     ?UpdateMPOCaps@CRenderTargetManager@@IEAAJXZ @ 0x1800F5E78 (-UpdateMPOCaps@CRenderTargetManager@@IEAAJXZ.c)
 *     ?NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ @ 0x1800F62A0 (-NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CRenderTargetManager@@IEAAJXZ @ 0x18019A380 (-HandleDDAArrivalOrDeparture@CRenderTargetManager@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800F4FF4 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 */

void __fastcall CRenderTargetManager::EndTargetEnumeration(CRenderTargetManager *this)
{
  struct CRenderTarget **v2; // rsi
  struct CRenderTarget **i; // rbx
  __int64 *v4; // rsi
  __int64 *v5; // rbx

  *((_BYTE *)this + 576) = 0;
  v2 = (struct CRenderTarget **)*((_QWORD *)this + 8);
  for ( i = (struct CRenderTarget **)*((_QWORD *)this + 7); i != v2; ++i )
    CRenderTargetManager::RemoveRenderTarget(this, *i);
  v4 = (__int64 *)*((_QWORD *)this + 8);
  v5 = (__int64 *)*((_QWORD *)this + 7);
  if ( v5 != v4 )
  {
    do
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v5++);
    while ( v5 != v4 );
    v5 = (__int64 *)*((_QWORD *)this + 7);
  }
  *((_QWORD *)this + 8) = v5;
}
