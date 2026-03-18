/*
 * XREFs of ??0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z @ 0x18001C8A4
 * Callers:
 *     ??0CTransformGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18001C81C (--0CTransformGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ??0CCombinedGeometry@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18016BD20 (--0CCombinedGeometry@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ??0CGeometry2DGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18016C400 (--0CGeometry2DGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ??0CGeometryGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18016C494 (--0CGeometryGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ??0CTransform3DGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18016CE64 (--0CTransform3DGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

CCyclicResourceListEntry *__fastcall CCyclicResourceListEntry::CCyclicResourceListEntry(
        CCyclicResourceListEntry *this,
        struct CResourceTable *a2)
{
  char *v2; // rdx
  _QWORD *v3; // rax
  __int64 v4; // r8

  v2 = (char *)a2 + 64;
  *(_QWORD *)this = &CCyclicResourceListEntry::`vftable';
  v3 = (_QWORD *)((char *)this + 8);
  *((_QWORD *)this + 1) = (char *)this + 8;
  *((_QWORD *)this + 2) = (char *)this + 8;
  v4 = *(_QWORD *)v2;
  if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 )
    __fastfail(3u);
  *v3 = v4;
  *((_QWORD *)this + 2) = v2;
  *(_QWORD *)(v4 + 8) = v3;
  *(_QWORD *)v2 = v3;
  return this;
}
