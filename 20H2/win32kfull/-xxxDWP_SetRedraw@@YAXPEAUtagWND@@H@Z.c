/*
 * XREFs of ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C00F31AC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 * Callees:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0042DB4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     SetVisible @ 0x1C00925D0 (SetVisible.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     ?SetRedrawProp@@YAXPEAUtagWND@@H@Z @ 0x1C00F3278 (-SetRedrawProp@@YAXPEAUtagWND@@H@Z.c)
 *     SpbCheckPwnd @ 0x1C021A354 (SpbCheckPwnd.c)
 */

void __fastcall xxxDWP_SetRedraw(struct tagWND *a1, int a2)
{
  char v3; // cl

  v3 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( a2 )
  {
    if ( (v3 & 0x10) == 0 )
    {
      SetRedrawProp(a1, 0);
      SetVisible(a1, 1u);
      if ( *(_QWORD *)(gpDispInfo + 32LL) )
        SpbCheckPwnd(a1);
      zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
      SetOrClrWF(1, (__int64)a1, 0x108u, 1);
    }
  }
  else if ( (v3 & 0x10) != 0 )
  {
    if ( *(_QWORD *)(gpDispInfo + 32LL) )
      SpbCheckPwnd(a1);
    SetRedrawProp(a1, 1);
    SetVisible(a1, 2 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 1));
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
  }
}
