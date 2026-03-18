/*
 * XREFs of _NtUserfnTOUCH@28 @ 0x16D56B
 * Callers:
 *     <none>
 * Callees:
 *     _IsTouchInputMessage@4 @ 0x46022 (_IsTouchInputMessage@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _ForwardTouchMessage@36 @ 0x149C25 (_ForwardTouchMessage@36.c)
 */

int __stdcall NtUserfnTOUCH(
        int a1,
        void *a2,
        struct tagTHREADINFO *a3,
        volatile void *Address,
        int a5,
        unsigned int a6,
        int a7)
{
  int v7; // esi
  int v9; // [esp+4h] [ebp-4h] BYREF

  v7 = 0;
  v9 = 0;
  if ( IsTouchInputMessage(a2) )
  {
    switch ( a6 )
    {
      case 0x29Eu:
      case 0x29Fu:
      case 0x2ABu:
      case 0x2ACu:
      case 0x2B1u:
      case 0x2B2u:
      case 0x2B3u:
      case 0x2B4u:
      case 0x2B7u:
      case 0x2B8u:
        if ( !a1 || a1 == -1 )
        {
          UserSetLastError((struct _NT_TIB *)0x578);
        }
        else if ( ForwardTouchMessage(_gptiCurrent, a1, (int)a2, a3, Address, 0, a5, a6, &v9) )
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
