/*
 * XREFs of BgSetFrameBufferAccess @ 0x1409F2008
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14039BC90 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkSetVirtualFrameBuffer @ 0x1403CCE70 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall BgSetFrameBufferAccess(__int64 a1, __int64 a2, __int64 a3)
{
  qword_140C13650 = a1;
  *(_QWORD *)&xmmword_140C13660 = a2;
  *((_QWORD *)&xmmword_140C13660 + 1) = a3;
}
