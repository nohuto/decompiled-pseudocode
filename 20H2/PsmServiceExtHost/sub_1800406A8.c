/*
 * XREFs of sub_1800406A8 @ 0x1800406A8
 * Callers:
 *     sub_18004051C @ 0x18004051C (sub_18004051C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800406A8(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = 0LL;
  while ( 1 )
  {
    result = RtlSubscribeWnfStateChangeNotification(
               a1 + 304 + 8 * v2,
               qword_1800B34D0[v2],
               0LL,
               sub_1800433B0,
               a1,
               0LL,
               0,
               0);
    if ( (int)result < 0 )
      break;
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= 4 )
      return 0LL;
  }
  return result;
}
