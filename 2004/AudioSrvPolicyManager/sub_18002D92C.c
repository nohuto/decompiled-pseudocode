/*
 * XREFs of sub_18002D92C @ 0x18002D92C
 * Callers:
 *     sub_18002D8F0 @ 0x18002D8F0 (sub_18002D8F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002D92C(_QWORD *a1)
{
  __int64 result; // rax

  *a1 = off_18003F4D8;
  result = 0LL;
  if ( a1[63] )
  {
    result = (unsigned int)RtlUnsubscribeWnfStateChangeNotification() | 0x10000000;
    if ( (int)result >= 0 )
      a1[63] = 0LL;
  }
  if ( a1[64] && (int)result >= 0 )
  {
    result = (unsigned int)RtlUnsubscribeWnfStateChangeNotification() | 0x10000000;
    if ( (int)result >= 0 )
      a1[64] = 0LL;
  }
  return result;
}
