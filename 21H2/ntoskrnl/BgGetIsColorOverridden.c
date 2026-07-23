/*
 * XREFs of BgGetIsColorOverridden @ 0x1409F5B58
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403CCE70 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

char __fastcall BgGetIsColorOverridden(_DWORD *a1)
{
  if ( !(_BYTE)qword_140C13670 )
    return 0;
  *a1 = HIDWORD(qword_140C13670);
  return 1;
}
