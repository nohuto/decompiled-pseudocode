/*
 * XREFs of ?ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_CLEARCOLORRESOURCES@@@Z @ 0x180232584
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800DF578 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x1800DF5F0 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
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
