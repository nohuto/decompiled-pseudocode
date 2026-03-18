/*
 * XREFs of UserRecreateRedirectionBitmap @ 0x1C01E7990
 * Callers:
 *     <none>
 * Callees:
 *     HintSpriteShape @ 0x1C003CE8C (HintSpriteShape.c)
 *     GetRedirectionBitmap @ 0x1C003F430 (GetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0090CAC (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     UnsetRedirectedWindow @ 0x1C00C11EC (UnsetRedirectedWindow.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00C12CC (DeleteOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00C135C (DeleteOrSetRedirectionBitmap.c)
 *     RecreateRedirectionBitmap @ 0x1C00F9CD8 (RecreateRedirectionBitmap.c)
 *     ?UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z @ 0x1C01E71EC (-UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UserRecreateRedirectionBitmap(__int64 a1)
{
  __int64 result; // rax
  struct tagWND *v2; // rdi
  HSURF v3; // rbx

  gbValidateHandleForIL = 0;
  result = ValidateHwnd(a1);
  v2 = (struct tagWND *)result;
  if ( result )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(result + 40) + 27LL) & 0x20) != 0 )
    {
      HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), (struct tagWND *)result, 0LL, 0);
      DeleteOldRedirectionBitmap((__int64)v2);
      result = GetRedirectionBitmap((__int64)v2);
      v3 = (HSURF)result;
      if ( result )
      {
        UnselectRedirectionBitmapsInDCEs(v2);
        SetRedirectionBitmap((void **)v2, 0LL, 0);
        DeleteOrSetRedirectionBitmap((__int64)v2, v3, 1);
        result = RecreateRedirectionBitmap((void **)v2, 0, 0, 0, 0, 0LL);
        if ( (int)result < 0 )
          return UnsetRedirectedWindow(v2, 1);
      }
    }
  }
  return result;
}
