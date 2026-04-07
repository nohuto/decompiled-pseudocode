/*
 * XREFs of ??1AtlasedRects@@QEAA@XZ @ 0x18007FEC8
 * Callers:
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18001AA10 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800270B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall AtlasedRects::~AtlasedRects(AtlasedRects *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 8);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 4);
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
