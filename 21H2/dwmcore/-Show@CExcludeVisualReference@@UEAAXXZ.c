/*
 * XREFs of ?Show@CExcludeVisualReference@@UEAAXXZ @ 0x1801A92C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1801A9220 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 */

void __fastcall CExcludeVisualReference::Show(CExcludeVisualReference *this)
{
  struct CVisual *Visual; // rax
  __int64 v2; // rcx
  char v3; // dl

  Visual = CExcludeVisualReference::GetVisual(this);
  if ( Visual )
  {
    v3 = *((_BYTE *)Visual + 102);
    *((_BYTE *)Visual + 102) = v3 & 0xFB;
    *(_BYTE *)(v2 + 20) = (v3 & 4) != 0;
    *(_DWORD *)(v2 + 16) = 1;
  }
}
