/*
 * XREFs of _xxxSendPointerMessageWorker@24 @ 0x15ABD3
 * Callers:
 *     _EditionPointerParentNotify@112 @ 0xF1DE0 (_EditionPointerParentNotify@112.c)
 *     _xxxSendPointerMessage@28 @ 0x15AB89 (_xxxSendPointerMessage@28.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YGHKPAUtagWND@@H@Z @ 0x15B489 (-xxxNotifyCaptureChangeIfCaptured@@YGHKPAUtagWND@@H@Z.c)
 *     ?xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z @ 0x15B536 (-xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall xxxSendPointerMessageWorker(int a1, int a2, int a3, int a4, int a5, char a6)
{
  _BYTE *v6; // eax
  int (__stdcall *v7)(int, int, int, int, int); // eax

  v6 = *(_BYTE **)(a1 + 20);
  if ( (char)v6[12] < 0 || (char)v6[11] < 0 || (v6[10] & 4) != 0 )
    return 0;
  v7 = (int (__stdcall *)(int, int, int, int, int))mpFnidPfn[(a6 + 6) & 0x1F];
  if ( a2 == 528 )
    return v7(a1, 528, 582, a3, a5);
  else
    return v7(a1, a2, a4, a3, a5);
}
