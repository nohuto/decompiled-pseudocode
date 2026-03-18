/*
 * XREFs of ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1C0118CF0
 * Callers:
 *     PostInputMessage @ 0x1C00D6C28 (PostInputMessage.c)
 *     SuspendThreadQueue @ 0x1C010F150 (SuspendThreadQueue.c)
 * Callees:
 *     _FreeTouchInputInfo @ 0x1C01DC3E0 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C0227790 (_FreeGestureInfo.c)
 */

void __fastcall CleanInputMessage(int a1, struct tagQMSG *a2, __int64 a3, __int64 a4)
{
  if ( a1 == 576 )
    FreeTouchInputInfo(*((_QWORD *)a2 + 5), 1LL);
  if ( a1 == 281 )
    FreeGestureInfo(*((_QWORD *)a2 + 5), 1LL, a3, a4);
}
