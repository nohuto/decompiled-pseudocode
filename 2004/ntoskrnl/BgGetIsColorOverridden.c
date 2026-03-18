/*
 * XREFs of BgGetIsColorOverridden @ 0x1409F1B58
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403C96F0 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

char __fastcall BgGetIsColorOverridden(_DWORD *a1)
{
  if ( !(_BYTE)qword_140C13490 )
    return 0;
  *a1 = HIDWORD(qword_140C13490);
  return 1;
}
