/*
 * XREFs of HeadlessDispatch @ 0x1403AF760
 * Callers:
 *     BgkDisplayStringEx @ 0x1404FF7A4 (BgkDisplayStringEx.c)
 *     BvgaDisplayString @ 0x1404FFC50 (BvgaDisplayString.c)
 *     BvgaSetTextColor @ 0x1404FFF10 (BvgaSetTextColor.c)
 *     BvgaSolidColorFill @ 0x1404FFF70 (BvgaSolidColorFill.c)
 *     KiBugCheckDebugBreak @ 0x140517E20 (KiBugCheckDebugBreak.c)
 *     KiDisplayBlueScreen @ 0x1405180C0 (KiDisplayBlueScreen.c)
 *     KiHeadlessDisplayString @ 0x1405185B8 (KiHeadlessDisplayString.c)
 *     EtwpInitializeActivityIdSeed @ 0x140798F34 (EtwpInitializeActivityIdSeed.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 *     HdlspDispatch @ 0x1409EEE80 (HdlspDispatch.c)
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
