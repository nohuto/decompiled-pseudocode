/*
 * XREFs of ??_ECMergedDirtyRect@@UEAAPEAXI@Z @ 0x1800C7DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 */

CMergedDirtyRect *__fastcall CMergedDirtyRect::`vector deleting destructor'(CMergedDirtyRect *this, char a2)
{
  *(_QWORD *)this = &CMergedRectBase<4>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
