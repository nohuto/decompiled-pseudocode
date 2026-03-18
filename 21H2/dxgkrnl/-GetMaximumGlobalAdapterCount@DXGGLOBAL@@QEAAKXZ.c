/*
 * XREFs of ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0179890
 * Callers:
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1C000A448 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ?DXGGLOBAL_GetMaximumGlobalAdapterCount@@YAKPEAVDXGGLOBAL@@@Z @ 0x1C000B7E0 (-DXGGLOBAL_GetMaximumGlobalAdapterCount@@YAKPEAVDXGGLOBAL@@@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C0168CB0 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 *     ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKE@Z @ 0x1C01FEB2C (-AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKE@Z.c)
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1C0308FE4 (--1DXGGLOBAL@@EEAA@XZ.c)
 *     ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C030BFE4 (-ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGGLOBAL::GetMaximumGlobalAdapterCount(DXGGLOBAL *this)
{
  __int64 result; // rax

  result = *((unsigned int *)this + 348);
  if ( !(_DWORD)result )
  {
    WdLogSingleEntry1(1LL, 2690LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_MaximumGlobalAdapterCount > 0", 2690LL, 0LL, 0LL, 0LL, 0LL);
    return *((unsigned int *)this + 348);
  }
  return result;
}
