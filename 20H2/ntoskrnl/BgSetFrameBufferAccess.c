/*
 * XREFs of BgSetFrameBufferAccess @ 0x1409F4008
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14039B270 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkSetVirtualFrameBuffer @ 0x1403CC330 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall BgSetFrameBufferAccess(__int64 a1, __int64 a2, __int64 a3)
{
  qword_140C13490 = a1;
  *(_QWORD *)&xmmword_140C134A0 = a2;
  *((_QWORD *)&xmmword_140C134A0 + 1) = a3;
}
