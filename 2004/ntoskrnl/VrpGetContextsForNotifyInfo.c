/*
 * XREFs of VrpGetContextsForNotifyInfo @ 0x1405CB270
 * Callers:
 *     VrpShouldOperateOnCall @ 0x1405CB100 (VrpShouldOperateOnCall.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VrpGetContextsForNotifyInfo(int a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  switch ( a1 )
  {
    case 28:
LABEL_11:
      result = *(_QWORD *)(*a2 + 88LL);
      goto LABEL_9;
    case 29:
LABEL_10:
      v6 = *(_QWORD *)(*a2 + 32LL);
      result = *(_QWORD *)(*a2 + 40LL);
      *a3 = result;
      *a4 = v6;
      return result;
    case 7:
LABEL_8:
      result = a2[6];
LABEL_9:
      *a3 = result;
      *a4 = 0LL;
      return result;
    case 22:
    case 23:
LABEL_7:
      result = a2[5];
      v5 = a2[4];
      *a3 = result;
      *a4 = v5;
      break;
    default:
      switch ( a1 )
      {
        case 0:
        case 14:
        case 30:
          result = a2[2];
          *a3 = result;
          *a4 = 0LL;
          break;
        case 1:
        case 5:
        case 6:
          goto LABEL_8;
        case 2:
        case 4:
        case 34:
          result = a2[3];
          *a3 = result;
          *a4 = 0LL;
          break;
        case 3:
        case 36:
        case 47:
          result = a2[5];
          *a3 = result;
          *a4 = 0LL;
          break;
        case 8:
        case 9:
          result = a2[7];
          *a3 = result;
          *a4 = 0LL;
          break;
        case 11:
        case 13:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 31:
        case 35:
        case 37:
        case 39:
        case 42:
        case 44:
        case 46:
        case 48:
          goto LABEL_7;
        case 26:
          goto LABEL_11;
        case 27:
        case 33:
          goto LABEL_10;
        case 32:
          result = *(_QWORD *)(*a2 + 72LL);
          *a3 = result;
          *a4 = 0LL;
          break;
        case 38:
        case 41:
        case 43:
        case 45:
          result = a2[4];
          *a3 = result;
          *a4 = 0LL;
          break;
        case 40:
          result = a2[1];
          *a3 = result;
          *a4 = 0LL;
          break;
        default:
          result = 0LL;
          goto LABEL_9;
      }
      break;
  }
  return result;
}
