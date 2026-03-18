/*
 * XREFs of _NtUserfnGESTURE@28 @ 0x16B71B
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _SendGestureMessage@28 @ 0x188A6B (_SendGestureMessage@28.c)
 */

int __stdcall NtUserfnGESTURE(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // esi
  int v9; // [esp+4h] [ebp-4h] BYREF

  v7 = 0;
  v9 = 0;
  if ( a2 == 281 )
  {
    switch ( a6 )
    {
      case 670:
      case 671:
      case 683:
      case 684:
      case 689:
      case 690:
      case 691:
      case 692:
      case 695:
      case 696:
        if ( !a1 || a1 == -1 )
        {
          UserSetLastError((struct _NT_TIB *)0x578);
        }
        else if ( SendGestureMessage(a3, a4, a5, a6, &v9) )
        {
          v7 = v9;
        }
        break;
      default:
        return v7;
    }
  }
  return v7;
}
