/*
 * XREFs of ___libm_error_support @ 0x4B2FD3A2
 * Callers:
 *     __ceil_pentium4 @ 0x4B2F8300 (__ceil_pentium4.c)
 *     __floor_pentium4 @ 0x4B2F84C0 (__floor_pentium4.c)
 * Callees:
 *     _RtlGetReturnAddressHijackTarget@0 @ 0x4B2B0650 (_RtlGetReturnAddressHijackTarget@0.c)
 *     __errno @ 0x4B33D420 (__errno.c)
 */

_DWORD *__cdecl __libm_error_support(double *a1, int a2, double *a3, int a4)
{
  _DWORD *result; // eax
  double *v5; // esi
  double v6; // st7
  double v7; // [esp+1Ch] [ebp-10h]

  if ( a4 > 166 )
  {
    result = (_DWORD *)(a4 - 1000);
    switch ( a4 )
    {
      case 1000:
      case 1001:
      case 1002:
      case 1003:
      case 1004:
      case 1005:
      case 1007:
        goto LABEL_28;
      case 1006:
      case 1008:
      case 1009:
        goto LABEL_15;
      case 1010:
      case 1011:
      case 1012:
        v6 = *a1 * 0.0;
        goto LABEL_36;
      default:
        return result;
    }
  }
  else
  {
    if ( a4 == 166 )
      goto LABEL_32;
    if ( a4 <= 25 )
    {
      if ( a4 == 25 )
        goto LABEL_13;
      if ( a4 == 2 )
      {
LABEL_32:
        v5 = a3;
        v7 = *a3;
        result = (_DWORD *)RtlGetReturnAddressHijackTarget();
        if ( !result )
        {
          result = _errno();
          *result = 34;
        }
        goto LABEL_39;
      }
      if ( a4 != 3 )
      {
        if ( a4 == 8 )
          goto LABEL_32;
        if ( a4 != 9 )
        {
          if ( a4 != 14 )
          {
            if ( a4 != 15 )
            {
              result = (_DWORD *)(a4 - 24);
              if ( a4 != 24 )
                return result;
              goto LABEL_32;
            }
LABEL_13:
            v5 = a3;
            v7 = *a3;
            result = (_DWORD *)RtlGetReturnAddressHijackTarget();
LABEL_39:
            *v5 = v7;
            return result;
          }
          goto LABEL_32;
        }
      }
      goto LABEL_15;
    }
    switch ( a4 )
    {
      case 26:
        result = a3;
        *a3 = 1.0;
        return result;
      case 27:
        goto LABEL_32;
      case 28:
        goto LABEL_15;
      case 29:
LABEL_28:
        v6 = *a1;
LABEL_36:
        v5 = a3;
        *a3 = v6;
        goto LABEL_37;
    }
    if ( a4 == 58 || (result = (_DWORD *)(a4 - 61), a4 == 61) )
    {
LABEL_15:
      v5 = a3;
      v6 = *a3;
LABEL_37:
      v7 = v6;
      result = (_DWORD *)RtlGetReturnAddressHijackTarget();
      if ( !result )
      {
        result = _errno();
        *result = 33;
      }
      goto LABEL_39;
    }
  }
  return result;
}
