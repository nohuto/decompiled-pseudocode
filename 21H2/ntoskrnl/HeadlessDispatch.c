/*
 * XREFs of HeadlessDispatch @ 0x1403AF8D0
 * Callers:
 *     BgkDisplayStringEx @ 0x1404FF724 (BgkDisplayStringEx.c)
 *     BvgaDisplayString @ 0x1404FFBD0 (BvgaDisplayString.c)
 *     BvgaSetTextColor @ 0x1404FFE90 (BvgaSetTextColor.c)
 *     BvgaSolidColorFill @ 0x1404FFEF0 (BvgaSolidColorFill.c)
 *     KiBugCheckDebugBreak @ 0x140518060 (KiBugCheckDebugBreak.c)
 *     KiDisplayBlueScreen @ 0x140518300 (KiDisplayBlueScreen.c)
 *     KiHeadlessDisplayString @ 0x1405187F8 (KiHeadlessDisplayString.c)
 *     EtwpInitializeActivityIdSeed @ 0x140799134 (EtwpInitializeActivityIdSeed.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     HdlspDispatch @ 0x1409EFE80 (HdlspDispatch.c)
 */

__int64 __fastcall HeadlessDispatch(__int64 a1, __int64 a2, __int64 a3, void *a4, size_t *a5)
{
  int v6; // eax

  if ( !HeadlessGlobals || !HeadlessGlobals[1] )
  {
    if ( (_DWORD)a1 == 21 || (_DWORD)a1 == 1 )
      return 3221225473LL;
    if ( (unsigned int)a1 <= 0x10 )
    {
      v6 = 79876;
      if ( _bittest(&v6, a1) )
      {
        if ( !a4 || !a5 )
          return 3221225485LL;
        memset(a4, 0, *a5);
      }
    }
    return 0LL;
  }
  return HdlspDispatch(a1);
}
