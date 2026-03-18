/*
 * XREFs of _UserRecreateRedirectionBitmap@4 @ 0x1539FA
 * Callers:
 *     <none>
 * Callees:
 *     _UnsetRedirectedWindow@8 @ 0x1BE12 (_UnsetRedirectedWindow@8.c)
 *     _DeleteOrSetRedirectionBitmap@12 @ 0x20636 (_DeleteOrSetRedirectionBitmap@12.c)
 *     ?SetRedirectionBitmap@@YGHPAUtagWND@@QAUHBITMAP__@@H@Z @ 0x20C0E (-SetRedirectionBitmap@@YGHPAUtagWND@@QAUHBITMAP__@@H@Z.c)
 *     _RecreateRedirectionBitmap@24 @ 0x23D22 (_RecreateRedirectionBitmap@24.c)
 *     _HintSpriteShape@16 @ 0x23F60 (_HintSpriteShape@16.c)
 *     _GetRedirectionBitmap@4 @ 0x30300 (_GetRedirectionBitmap@4.c)
 *     _DeleteOldRedirectionBitmap@4 @ 0x6E4D2 (_DeleteOldRedirectionBitmap@4.c)
 *     ?UnselectRedirectionBitmapsInDCEs@@YGXQAUtagWND@@@Z @ 0x153526 (-UnselectRedirectionBitmapsInDCEs@@YGXQAUtagWND@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
_DWORD *__userpurge UserRecreateRedirectionBitmap@<eax>(HBITMAP a1@<edi>, int a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // esi
  HSURF v4; // edi
  int v6; // [esp+0h] [ebp-8h]

  _gbValidateHandleForIL = 0;
  result = (_DWORD *)ValidateHwnd(a2);
  v3 = result;
  if ( result )
  {
    if ( (*(_BYTE *)(result[5] + 19) & 0x20) != 0 )
    {
      HintSpriteShape(*(_DWORD *)(_gpDispInfo + 20), result, 0, 0);
      DeleteOldRedirectionBitmap(v3);
      result = (_DWORD *)GetRedirectionBitmap((int)v3);
      v4 = (HSURF)result;
      if ( result )
      {
        UnselectRedirectionBitmapsInDCEs(v3);
        SetRedirectionBitmap(0, v3, 0, a1, v6);
        DeleteOrSetRedirectionBitmap((int)v3, v4, 1);
        result = (_DWORD *)RecreateRedirectionBitmap((int)v3, 0, 0, 0, 0, 0);
        if ( (int)result < 0 )
          return (_DWORD *)UnsetRedirectedWindow((int)v3, 1);
      }
    }
  }
  return result;
}
