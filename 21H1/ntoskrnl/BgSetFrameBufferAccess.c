/*
 * XREFs of BgSetFrameBufferAccess @ 0x1409EE008
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140398620 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkSetVirtualFrameBuffer @ 0x1403C88E0 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall BgSetFrameBufferAccess(__int64 a1, __int64 a2, __int64 a3)
{
  qword_140C13430 = a1;
  *(_QWORD *)&xmmword_140C13440 = a2;
  *((_QWORD *)&xmmword_140C13440 + 1) = a3;
}
