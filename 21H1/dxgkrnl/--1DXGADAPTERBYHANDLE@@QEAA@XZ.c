/*
 * XREFs of ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C000F3A0
 * Callers:
 *     DxgkGetDisplayModeList @ 0x1C015CB40 (DxgkGetDisplayModeList.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(DXGADAPTER **this)
{
  DXGADAPTER *v1; // rcx

  v1 = *this;
  if ( v1 )
    DXGADAPTER::ReleaseReferenceNoTracking(v1);
}
