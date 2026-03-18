/*
 * XREFs of ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEAAKXZ @ 0x1C01BFEEC
 * Callers:
 *     ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x1C01BEDD0 (-DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BF100 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C01BFB40 (-DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkGetMaximumAdapterCountInSession@@YAKXZ @ 0x1C01E9FD0 (-DxgkGetMaximumAdapterCountInSession@@YAKXZ.c)
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C03A9208 (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGGLOBAL::GetMaximumAdapterCountInSession(DXGGLOBAL *this)
{
  int v2; // ecx
  unsigned int v3; // ecx
  __int64 result; // rax

  v2 = *((_DWORD *)this + 348);
  if ( !v2 )
  {
    WdLogSingleEntry1(1LL, 2716LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_MaximumGlobalAdapterCount > 0", 2716LL, 0LL, 0LL, 0LL, 0LL);
    v2 = *((_DWORD *)this + 348);
  }
  v3 = v2 + 2;
  result = 1024LL;
  if ( v3 < 0x400 )
    return v3;
  return result;
}
