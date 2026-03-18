/*
 * XREFs of HeadlessDispatch @ 0x1403B99E0
 * Callers:
 *     BgkDisplayStringEx @ 0x1404FA374 (BgkDisplayStringEx.c)
 *     BvgaDisplayString @ 0x1404FA820 (BvgaDisplayString.c)
 *     BvgaSetTextColor @ 0x1404FAAE0 (BvgaSetTextColor.c)
 *     BvgaSolidColorFill @ 0x1404FAB40 (BvgaSolidColorFill.c)
 *     KiBugCheckDebugBreak @ 0x1405129B0 (KiBugCheckDebugBreak.c)
 *     KiDisplayBlueScreen @ 0x140512C50 (KiDisplayBlueScreen.c)
 *     KiHeadlessDisplayString @ 0x140513148 (KiHeadlessDisplayString.c)
 *     EtwpInitializeActivityIdSeed @ 0x14079A4B0 (EtwpInitializeActivityIdSeed.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     HdlspDispatch @ 0x1409EBE80 (HdlspDispatch.c)
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
