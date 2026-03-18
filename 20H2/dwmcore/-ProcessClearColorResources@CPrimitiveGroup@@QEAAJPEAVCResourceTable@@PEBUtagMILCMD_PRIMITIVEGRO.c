/*
 * XREFs of ?ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_CLEARCOLORRESOURCES@@@Z @ 0x1801E2E00
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x180069748 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x1800D2C80 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessClearColorResources(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVEGROUP_CLEARCOLORRESOURCES *a3)
{
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
  CPrimitiveGroup::ReleaseColorResources(this);
  return 0LL;
}
