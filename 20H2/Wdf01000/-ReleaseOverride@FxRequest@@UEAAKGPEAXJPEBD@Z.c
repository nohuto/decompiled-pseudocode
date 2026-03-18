/*
 * XREFs of ?ReleaseOverride@FxRequest@@UEAAKGPEAXJPEBD@Z @ 0x1C004E810
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C0002940 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C004E7B4 (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequest::ReleaseOverride(
        FxRequest *this,
        unsigned __int16 Offset,
        FxObjectDebugLeakDetection *Tag,
        unsigned int Line,
        char *File)
{
  if ( !Offset )
    return FxObject::Release(this, Tag, Line, File);
  FxRequest::ReleaseIrpReference(this);
  return 1LL;
}
