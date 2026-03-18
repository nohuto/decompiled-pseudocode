/*
 * XREFs of ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1C00BE760
 * Callers:
 *     PostInputMessage @ 0x1C00B19CC (PostInputMessage.c)
 *     SuspendThreadQueue @ 0x1C010D6B0 (SuspendThreadQueue.c)
 * Callees:
 *     _FreeTouchInputInfo @ 0x1C01DD0A0 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C0228620 (_FreeGestureInfo.c)
 */

void __fastcall CleanInputMessage(int a1, struct tagQMSG *a2, __int64 a3, __int64 a4)
{
  if ( a1 == 576 )
    FreeTouchInputInfo(*((_QWORD *)a2 + 5), 1LL, a3, a4);
  if ( a1 == 281 )
    FreeGestureInfo(*((_QWORD *)a2 + 5), 1LL, a3, a4);
}
