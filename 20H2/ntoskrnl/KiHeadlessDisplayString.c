/*
 * XREFs of KiHeadlessDisplayString @ 0x140516A78
 * Callers:
 *     KiBugCheckDebugBreak @ 0x1405162E0 (KiBugCheckDebugBreak.c)
 *     KiBugCheckProgress @ 0x1405163B0 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x140516580 (KiDisplayBlueScreen.c)
 * Callees:
 *     HeadlessDispatch @ 0x1403BBE60 (HeadlessDispatch.c)
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
