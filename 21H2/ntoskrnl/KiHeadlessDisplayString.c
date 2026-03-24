/*
 * XREFs of KiHeadlessDisplayString @ 0x1405185B8
 * Callers:
 *     KiBugCheckDebugBreak @ 0x140517E20 (KiBugCheckDebugBreak.c)
 *     KiBugCheckProgress @ 0x140517EF0 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x1405180C0 (KiDisplayBlueScreen.c)
 * Callees:
 *     HeadlessDispatch @ 0x1403AF760 (HeadlessDispatch.c)
 */

__int64 __fastcall KiHeadlessDisplayString(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a2 )
      return HeadlessDispatch(23LL, a1, a2, 0LL, 0LL);
  }
  return result;
}
