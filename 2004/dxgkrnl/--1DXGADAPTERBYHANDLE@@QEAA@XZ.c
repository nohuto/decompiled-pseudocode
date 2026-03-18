/*
 * XREFs of ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C00199D4
 * Callers:
 *     DxgkGetDisplayModeList @ 0x1C016C5A0 (DxgkGetDisplayModeList.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 */

void __fastcall DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(DXGADAPTER **this)
{
  DXGADAPTER *v1; // rcx

  v1 = *this;
  if ( v1 )
    DXGADAPTER::ReleaseReference(v1);
}
