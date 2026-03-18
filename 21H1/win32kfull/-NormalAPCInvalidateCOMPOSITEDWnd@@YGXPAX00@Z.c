/*
 * XREFs of ?NormalAPCInvalidateCOMPOSITEDWnd@@YGXPAX00@Z @ 0x153436
 * Callers:
 *     <none>
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YGHPAUtagWND@@PBUtagRECT@@@Z @ 0x1533B5 (-InvalidateWEFCOMPOSITEDWindow@@YGHPAUtagWND@@PBUtagRECT@@@Z.c)
 */

void __stdcall NormalAPCInvalidateCOMPOSITEDWnd(_DWORD *a1, void *a2, void *a3)
{
  int v3; // eax

  EnterCrit(0, 1);
  v3 = HMValidateHandleNoSecure(a1[2], 1);
  if ( v3 && (*(_BYTE *)(*(_DWORD *)(v3 + 20) + 19) & 2) != 0 )
    InvalidateWEFCOMPOSITEDWindow(v3, a1 + 3);
  Win32FreePool(a1 - 12);
  UserSessionSwitchLeaveCrit();
}
