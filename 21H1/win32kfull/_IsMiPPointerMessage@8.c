/*
 * XREFs of _IsMiPPointerMessage@8 @ 0x14E3B9
 * Callers:
 *     ?PointerMsgIdFromHookCall@@YGKPAUtagTHREADINFO@@IJ@Z @ 0x159F54 (-PointerMsgIdFromHookCall@@YGKPAUtagTHREADINFO@@IJ@Z.c)
 * Callees:
 *     _IsPointerInputMessage@4 @ 0x4485A (_IsPointerInputMessage@4.c)
 *     _IsPointerParentNotify@8 @ 0x46012 (_IsPointerParentNotify@8.c)
 */

BOOL __thiscall IsMiPPointerMessage(void *this)
{
  unsigned int v1; // edx
  int v2; // ecx
  unsigned int v4; // edx

  if ( IsPointerInputMessage((unsigned int)this) )
    return (_WORD)v1 == 1;
  if ( IsPointerParentNotify(v2, v1) )
  {
    v1 = HIWORD(v4);
    return (_WORD)v1 == 1;
  }
  return 0;
}
