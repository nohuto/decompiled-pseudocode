/*
 * XREFs of ?bRecordSegment@XCLIPOBJ@@IAEHXZ @ 0x23802E
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QAEHKPAU_CLIPLINE@@@Z @ 0x237A4C (-bEnumLine@XCLIPOBJ@@QAEHKPAU_CLIPLINE@@@Z.c)
 * Callees:
 *     ?bIntersectWall@XCLIPOBJ@@IAEHJPAU_POINTL@@0PAJ@Z @ 0x237F88 (-bIntersectWall@XCLIPOBJ@@IAEHJPAU_POINTL@@0PAJ@Z.c)
 *     ?bRecordRun@XCLIPOBJ@@IAEHAAJ@Z @ 0x237FC4 (-bRecordRun@XCLIPOBJ@@IAEHAAJ@Z.c)
 */

int __thiscall XCLIPOBJ::bRecordSegment(struct _POINTL **this)
{
  XCLIPOBJ *v1; // esi
  int v2; // edi
  struct _POINTL *v3; // edx
  int *p_x; // eax

  v1 = (XCLIPOBJ *)this;
  this[20] = (struct _POINTL *)((char *)this[20] + (_DWORD)this[21]);
  v2 = *(&this[17][1].y + (_DWORD)this[20]);
  v3 = this[30];
  if ( (((unsigned int)v3[2].x >> 22) & 1) == v2 > v3[16].x )
  {
    p_x = &v3[18].x;
  }
  else
  {
    XCLIPOBJ::bIntersectWall((XCLIPOBJ *)this, v2, v3 + 15, 0, &v3[3].x);
    this = (struct _POINTL **)v1;
    p_x = (int *)(*((_DWORD *)v1 + 30) + 24);
  }
  return XCLIPOBJ::bRecordRun((XCLIPOBJ *)this, p_x);
}
