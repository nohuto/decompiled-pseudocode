/*
 * XREFs of _UserGetHwnd@16 @ 0x1542EC
 * Callers:
 *     ?LookUpWndobjs@@YGHPAVDCOBJ@@0PAPAUHDC__@@H@Z @ 0x1D7B4D (-LookUpWndobjs@@YGHPAVDCOBJ@@0PAPAUHDC__@@H@Z.c)
 *     ?vConstructor@DEVLOCKOBJ_WNDOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x1D86EC (-vConstructor@DEVLOCKOBJ_WNDOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     _NtGdiSetPixelFormat@8 @ 0x222992 (_NtGdiSetPixelFormat@8.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     ?PwndFromHDC@@YGPAUtagWND@@QAUHDC__@@@Z @ 0x9A796 (-PwndFromHDC@@YGPAUtagWND@@QAUHDC__@@@Z.c)
 */

int __fastcall UserGetHwnd(void *a1, _DWORD *a2, int *a3, int a4)
{
  int v6; // edi
  struct tagWND *v7; // eax
  int v8; // edx

  v6 = 0;
  GreLockVisRgnShared(*(_DWORD *)(_gpDispInfo + 20));
  v7 = PwndFromHDC(a1);
  if ( v7 )
  {
    v6 = 1;
    v8 = (unsigned __int16)atomWndObj;
    *a2 = *(_DWORD *)v7;
    *a3 = _GetProp((int)v7, v8, 1);
  }
  GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  return v6;
}
