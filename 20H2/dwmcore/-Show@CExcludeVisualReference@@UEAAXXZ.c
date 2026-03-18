/*
 * XREFs of ?Show@CExcludeVisualReference@@UEAAXXZ @ 0x180173E90
 * Callers:
 *     ?Show@CCursorVisualReference@@UEAAXXZ @ 0x180173F70 (-Show@CCursorVisualReference@@UEAAXXZ.c)
 * Callees:
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1800E11F8 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 */

void __fastcall CExcludeVisualReference::Show(CExcludeVisualReference *this)
{
  struct CVisual *Visual; // rax
  __int64 v2; // rcx
  char v3; // dl

  Visual = CExcludeVisualReference::GetVisual(this);
  if ( Visual )
  {
    v3 = *((_BYTE *)Visual + 94);
    *((_BYTE *)Visual + 94) = v3 & 0xFB;
    *(_BYTE *)(v2 + 20) = (v3 & 4) != 0;
    *(_DWORD *)(v2 + 16) = 1;
  }
}
