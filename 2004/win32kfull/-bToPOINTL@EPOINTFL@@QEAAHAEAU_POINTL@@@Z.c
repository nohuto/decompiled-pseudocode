/*
 * XREFs of ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1C012C660
 * Callers:
 *     GreGetTextExtentW @ 0x1C000C3CC (GreGetTextExtentW.c)
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C012C27C (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 * Callees:
 *     bFToL @ 0x1C00F64D8 (bFToL.c)
 */

__int64 __fastcall EPOINTFL::bToPOINTL(EPOINTFL *this, struct _POINTL *a2)
{
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  int v6; // r8d

  v5 = 0;
  if ( (unsigned int)bFToL(*(float *)this, (int *)a2, 6u) && (unsigned int)bFToL(*((float *)this + 1), &a2->y, v4) )
    return (unsigned int)(v6 - 5);
  return v5;
}
