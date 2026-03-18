/*
 * XREFs of IsPointerInputMessageWithState @ 0x1C019E558
 * Callers:
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C0187DE0 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z @ 0x1C01953D0 (-IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z.c)
 *     ?MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z @ 0x1C01956D0 (-MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z.c)
 *     ?SetPointerInfoNodeMessagePosted@CTouchProcessor@@IEAAH_KIH@Z @ 0x1C019B638 (-SetPointerInfoNodeMessagePosted@CTouchProcessor@@IEAAH_KIH@Z.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C019E528 (IsPointerInputMessage.c)
 */

__int64 __fastcall IsPointerInputMessageWithState(int a1)
{
  BOOL v1; // eax
  int v2; // ecx
  unsigned int v3; // edx

  v1 = IsPointerInputMessage(a1);
  v3 = 0;
  if ( v1 )
    return v2 != 595;
  return v3;
}
