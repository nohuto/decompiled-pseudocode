/*
 * XREFs of ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x180014A08
 * Callers:
 *     ?Reallocate@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180012938 (-Reallocate@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001298C (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x180014AB0 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?Left@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@H@Z @ 0x180038760 (-Left@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@H@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000F974 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __noreturn ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException()
{
  ATL::AtlThrowImpl(-2147024882);
}
