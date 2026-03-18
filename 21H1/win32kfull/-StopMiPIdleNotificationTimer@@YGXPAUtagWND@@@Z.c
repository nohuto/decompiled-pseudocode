/*
 * XREFs of ?StopMiPIdleNotificationTimer@@YGXPAUtagWND@@@Z @ 0x14DB71
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YGHPAUtagQMSG@@I0PAUtagWND@@H@Z @ 0x14CF17 (-GeneratePointerMessageFromMouse@@YGHPAUtagQMSG@@I0PAUtagWND@@H@Z.c)
 *     _PostMousePointerLeaveAndCleanup@8 @ 0x14E54F (_PostMousePointerLeaveAndCleanup@8.c)
 * Callees:
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 */

void __thiscall StopMiPIdleNotificationTimer(_DWORD *this)
{
  int v1; // eax

  v1 = *(_DWORD *)(this[2] + 720);
  if ( *this == *(_DWORD *)(v1 + 4) )
  {
    *(_DWORD *)(v1 + 4) = 0;
    FindTimer((unsigned int)this, 65523, 2u, 1, 0);
  }
}
