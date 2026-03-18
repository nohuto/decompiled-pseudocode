/*
 * XREFs of KiHeadlessDisplayString @ 0x140513148
 * Callers:
 *     KiBugCheckDebugBreak @ 0x1405129B0 (KiBugCheckDebugBreak.c)
 *     KiBugCheckProgress @ 0x140512A80 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x140512C50 (KiDisplayBlueScreen.c)
 * Callees:
 *     HeadlessDispatch @ 0x1403B99E0 (HeadlessDispatch.c)
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
