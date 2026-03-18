/*
 * XREFs of HeadlessDispatch @ 0x1403BBE60
 * Callers:
 *     BgkDisplayStringEx @ 0x1404FDC04 (BgkDisplayStringEx.c)
 *     BvgaDisplayString @ 0x1404FE0B0 (BvgaDisplayString.c)
 *     BvgaSetTextColor @ 0x1404FE370 (BvgaSetTextColor.c)
 *     BvgaSolidColorFill @ 0x1404FE3D0 (BvgaSolidColorFill.c)
 *     KiBugCheckDebugBreak @ 0x1405162E0 (KiBugCheckDebugBreak.c)
 *     KiDisplayBlueScreen @ 0x140516580 (KiDisplayBlueScreen.c)
 *     KiHeadlessDisplayString @ 0x140516A78 (KiHeadlessDisplayString.c)
 *     EtwpInitializeActivityIdSeed @ 0x1407A97E0 (EtwpInitializeActivityIdSeed.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     HdlspDispatch @ 0x1409F1E80 (HdlspDispatch.c)
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
