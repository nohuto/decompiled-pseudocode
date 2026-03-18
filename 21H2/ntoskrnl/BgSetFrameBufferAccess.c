/*
 * XREFs of BgSetFrameBufferAccess @ 0x140AAB008
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403A78F0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkSetVirtualFrameBuffer @ 0x1403DC330 (BgkSetVirtualFrameBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall BgSetFrameBufferAccess(__int64 a1, __int64 a2, __int64 a3)
{
  qword_140C0E0F0 = a1;
  *(_QWORD *)&xmmword_140C0E100 = a2;
  *((_QWORD *)&xmmword_140C0E100 + 1) = a3;
}
