/*
 * XREFs of ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C030BFE4
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02BA5BC (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0179890 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 */

void __fastcall DXGGLOBAL::ReleaseAdapterOrdinal(DXGGLOBAL *this, unsigned int a2)
{
  ULONG v2; // ebx
  struct _RTL_BITMAP *v4; // rcx

  v2 = a2;
  if ( a2 >= 0x400 )
  {
    WdLogSingleEntry1(1LL, 3779LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Ordinal < MAX_ADAPTERS_CEILING", 3779LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 816));
  if ( v2 < (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(this) )
  {
    v4 = (struct _RTL_BITMAP *)((char *)this + 864);
  }
  else
  {
    v2 -= DXGGLOBAL::GetMaximumGlobalAdapterCount(this);
    v4 = (struct _RTL_BITMAP *)((char *)this + 880);
  }
  RtlClearBits(v4, v2, 1u);
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 102);
}
