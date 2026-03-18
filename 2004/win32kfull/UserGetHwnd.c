/*
 * XREFs of UserGetHwnd @ 0x1C01E903C
 * Callers:
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C027C658 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     ?vConstructor@DEVLOCKOBJ_WNDOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C027CF38 (-vConstructor@DEVLOCKOBJ_WNDOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     NtGdiSetPixelFormat @ 0x1C02BCAE0 (NtGdiSetPixelFormat.c)
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     ?PwndFromHDC@@YAPEAUtagWND@@QEAUHDC__@@@Z @ 0x1C00FC094 (-PwndFromHDC@@YAPEAUtagWND@@QEAUHDC__@@@Z.c)
 */

__int64 __fastcall UserGetHwnd(__int64 *a1, _QWORD *a2, __int64 *a3)
{
  unsigned int v6; // edi
  struct tagWND *v7; // rax
  __int64 v8; // rdx

  v6 = 0;
  GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 40LL));
  v7 = PwndFromHDC(a1);
  if ( v7 )
  {
    v8 = (unsigned __int16)atomWndObj;
    *a2 = *(_QWORD *)v7;
    *a3 = GetProp((__int64)v7, v8, 1LL);
    v6 = 1;
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return v6;
}
