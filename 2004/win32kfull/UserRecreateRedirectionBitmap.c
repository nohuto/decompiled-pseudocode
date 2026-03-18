/*
 * XREFs of UserRecreateRedirectionBitmap @ 0x1C01E8650
 * Callers:
 *     <none>
 * Callees:
 *     HintSpriteShape @ 0x1C001F104 (HintSpriteShape.c)
 *     GetRedirectionBitmap @ 0x1C0021060 (GetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0021474 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00229F0 (DeleteOldRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x1C004F050 (UnsetRedirectedWindow.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C004F130 (DeleteOrSetRedirectionBitmap.c)
 *     RecreateRedirectionBitmap @ 0x1C0051748 (RecreateRedirectionBitmap.c)
 *     ?UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z @ 0x1C01E7EAC (-UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z.c)
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
        SetRedirectionBitmap(v2, 0LL, 0);
        DeleteOrSetRedirectionBitmap((__int64)v2, v3, 1);
        result = RecreateRedirectionBitmap(v2, 0, 0, 0, 0, 0LL);
        if ( (int)result < 0 )
          return UnsetRedirectedWindow(v2, 1);
      }
    }
  }
  return result;
}
