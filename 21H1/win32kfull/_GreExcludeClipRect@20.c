/*
 * XREFs of _GreExcludeClipRect@20 @ 0x79558
 * Callers:
 *     _NtGdiExcludeClipRect@20 @ 0x7893A (_NtGdiExcludeClipRect@20.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@1PBUtagBITMAP@@2HH@Z @ 0x7A92E (-BltOldRedirectionBitsToNewBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@1PBUtagBITMAP@@2HH@Z.c)
 * Callees:
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bXform@EXFORMOBJ@@QAEHAAVERECTL@@@Z @ 0x7988A (-bXform@EXFORMOBJ@@QAEHAAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall GreExcludeClipRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  int v5; // esi
  struct _RECTL *v7; // ecx
  int v8; // eax
  _DWORD v10[3]; // [esp+10h] [ebp-34h] BYREF
  LONG v11; // [esp+1Ch] [ebp-28h]
  DC *v12[3]; // [esp+20h] [ebp-24h] BYREF
  struct _RECTL v13; // [esp+2Ch] [ebp-18h] BYREF

  v5 = 0;
  v11 = a2;
  memset(v12, 0, sizeof(v12));
  XDCOBJ::vLock((XDCOBJ *)v12, a1);
  if ( v12[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v10, (struct XDCOBJ *)v12, 0x80000204);
    v13.left = a2;
    v13.top = a3;
    v13.right = a4;
    v13.bottom = a5;
    if ( (*(_BYTE *)(v10[0] + 56) & 1) != 0 )
    {
      EXFORMOBJ::bXform((EXFORMOBJ *)v10, (struct ERECTL *)&v13);
      ERECTL::vOrder((ERECTL *)&v13);
      v8 = DC::iCombine(v12[0], v7, 4);
    }
    else
    {
      if ( (v11 & 0xF8000000) != 0 && (v11 & 0xF8000000) != -134217728
        || (a5 & 0xF8000000) != 0 && (a5 & 0xF8000000) != 0xF8000000
        || (a4 & 0xF8000000) != 0 && (a4 & 0xF8000000) != 0xF8000000
        || (a3 & 0xF8000000) != 0 && (a3 & 0xF8000000) != 0xF8000000 )
      {
        EngSetLastError(0x57u);
        goto LABEL_6;
      }
      v8 = DC::iCombine(v12[0], (struct EXFORMOBJ *)v10, &v13, 4);
    }
    v5 = v8;
    if ( v8 > 1 )
      v5 = 3;
  }
  else
  {
    EngSetLastError(6u);
  }
LABEL_6:
  if ( v12[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v12);
  return v5;
}
