/*
 * XREFs of _DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION @ 0x1C0307154
 * Callers:
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 */

void __fastcall DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(__int64 a1)
{
  void *v2; // rcx
  DXGADAPTER *v3; // rcx

  v2 = *(void **)a1;
  if ( v2 )
    operator delete[](v2);
  v3 = *(DXGADAPTER **)(a1 + 8);
  if ( v3 )
    DXGADAPTER::ReleaseReference(v3);
}
