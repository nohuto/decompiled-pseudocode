/*
 * XREFs of NdisStatusToDropReason @ 0x1C00C61F0
 * Callers:
 *     PktMonClientNblDropNdis @ 0x1C00C656C (PktMonClientNblDropNdis.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisStatusToDropReason(int a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case -1073741670:
      return 3LL;
    case -1073676275:
      return 202LL;
    case -1073676273:
      return 2LL;
    case -1073676271:
      return 4LL;
    case -1073676270:
      return 204LL;
    case -1071448052:
      return 203LL;
    case -1071448033:
      return 5LL;
    case -1071448022:
      return 201LL;
  }
  result = 38LL;
  if ( a1 != -1071448017 )
    return 0LL;
  return result;
}
