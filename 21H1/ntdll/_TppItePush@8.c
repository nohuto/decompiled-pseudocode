/*
 * XREFs of _TppItePush@8 @ 0x4B3847FD
 * Callers:
 *     _TppCancelTimer@12 @ 0x4B2B7D76 (_TppCancelTimer@12.c)
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 * Callees:
 *     <none>
 */

signed __int32 __fastcall TppItePush(volatile signed __int32 *a1, signed __int32 *a2)
{
  signed __int32 result; // eax
  signed __int32 v4; // edx

  a2[1] = (signed __int32)NtCurrentTeb()->ClientId.UniqueThread;
  result = *a1;
  do
  {
    v4 = result;
    *a2 = result;
    result = _InterlockedCompareExchange(a1, (signed __int32)a2, result);
  }
  while ( result != v4 );
  return result;
}
