/*
 * XREFs of ?GetDoDCddShadowSection@ADAPTER_DISPLAY@@QEBAPEAXIPEAI@Z @ 0x1C02C0DCC
 * Callers:
 *     ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C01C7390 (-DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void *__fastcall ADAPTER_DISPLAY::GetDoDCddShadowSection(ADAPTER_DISPLAY *this, unsigned int a2, unsigned int *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdi
  void *v8; // rcx

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 1422LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      1422LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 2)) )
  {
    WdLogSingleEntry1(1LL, 1423LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 1423LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 2800LL) )
  {
    WdLogSingleEntry1(1LL, 1424LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsDisplayOnlyAdapter()",
      1424LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = *((_QWORD *)this + 16);
  v7 = 4000 * v3;
  v8 = *(void **)(v7 + v6 + 616);
  if ( v8 )
  {
    ObfReferenceObject(v8);
    v6 = *((_QWORD *)this + 16);
  }
  *a3 = *(_DWORD *)(v7 + v6 + 612);
  return *(void **)(v7 + v6 + 616);
}
