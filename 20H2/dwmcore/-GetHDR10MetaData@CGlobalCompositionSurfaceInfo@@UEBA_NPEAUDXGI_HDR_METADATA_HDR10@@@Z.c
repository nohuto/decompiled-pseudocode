/*
 * XREFs of ?GetHDR10MetaData@CGlobalCompositionSurfaceInfo@@UEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z @ 0x1801F7D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CGlobalCompositionSurfaceInfo::GetHDR10MetaData(
        CGlobalCompositionSurfaceInfo *this,
        struct DXGI_HDR_METADATA_HDR10 *a2)
{
  char v2; // r8

  v2 = 1;
  if ( *((_DWORD *)this + 54) != 1 )
    return 0;
  *a2 = *(struct DXGI_HDR_METADATA_HDR10 *)((char *)this + 220);
  return v2;
}
