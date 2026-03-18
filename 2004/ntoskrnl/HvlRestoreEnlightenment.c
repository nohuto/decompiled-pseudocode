/*
 * XREFs of HvlRestoreEnlightenment @ 0x1404ECA50
 * Callers:
 *     PopHiberCheckResume @ 0x140995550 (PopHiberCheckResume.c)
 * Callees:
 *     HvlpTryConfigureInterface @ 0x1403A63E0 (HvlpTryConfigureInterface.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     HvlpPhase0Enlightenments @ 0x1404F546C (HvlpPhase0Enlightenments.c)
 */

__int64 __fastcall HvlRestoreEnlightenment(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // eax

  result = HvlpEnlightenments;
  HvlEnlightenments = HvlpEnlightenments;
  if ( a1 == 1 )
  {
    result = HvlpFlags;
    if ( (HvlpFlags & 2) == 0 )
    {
      v5 = HvlpTryConfigureInterface(0LL, a2, a3, a4);
      if ( v5 < 0 )
        KeBugCheckEx(0x20001u, v5, 0LL, 0LL, 0LL);
      result = HvlpPhase0Enlightenments(0LL);
      if ( (int)result < 0 )
        KeBugCheckEx(0x20001u, (int)result, 0LL, 0LL, 0LL);
    }
  }
  return result;
}
