/*
 * XREFs of GreDecBitmapExclusiveRefCnt @ 0x1C0093A7C
 * Callers:
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C00937E0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C01373DC (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C024D304 (xxxRealDrawMenuItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreDecBitmapExclusiveRefCnt(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  LOBYTE(a2) = 5;
  result = HmgLock(a1, a2);
  if ( result )
  {
    _InterlockedDecrement((volatile signed __int32 *)(result + 12));
    _InterlockedDecrement((volatile signed __int32 *)(result + 12));
  }
  return result;
}
