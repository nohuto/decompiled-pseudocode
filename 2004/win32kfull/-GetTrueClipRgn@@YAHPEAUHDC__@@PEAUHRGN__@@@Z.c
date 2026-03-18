/*
 * XREFs of ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C014F974
 * Callers:
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C0070824 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 * Callees:
 *     GreGetRandomRgn @ 0x1C005FC10 (GreGetRandomRgn.c)
 */

__int64 __fastcall GetTrueClipRgn(HDC a1, HRGN a2)
{
  HRGN EmptyRgn; // rbx
  unsigned int v5; // ebp
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  EmptyRgn = (HRGN)CreateEmptyRgn(a1);
  v5 = GreCopyVisRgn(a1, a2);
  if ( !(unsigned int)GreGetDCOrg(a1, &v7) )
    return 0LL;
  if ( (unsigned int)GreGetRandomRgn(a1, EmptyRgn, 1) )
  {
    GreOffsetRgn(EmptyRgn, (unsigned int)v7, HIDWORD(v7));
    v5 = GreCombineRgn(a2, a2, EmptyRgn, 1LL);
  }
  GreOffsetRgn(a2, (unsigned int)-(int)v7, (unsigned int)-HIDWORD(v7));
  GreDeleteObject(EmptyRgn);
  return v5;
}
