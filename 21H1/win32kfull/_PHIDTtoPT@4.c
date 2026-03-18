/*
 * XREFs of _PHIDTtoPT@4 @ 0x159214
 * Callers:
 *     _PostPointerEventMessage@16 @ 0x159285 (_PostPointerEventMessage@16.c)
 *     __GetPointerDeviceInfoProperties@8 @ 0x159B80 (__GetPointerDeviceInfoProperties@8.c)
 *     __GetPointerDeviceType@4 @ 0x159BF4 (__GetPointerDeviceType@4.c)
 * Callees:
 *     <none>
 */

int __thiscall PHIDTtoPT(_DWORD *this)
{
  int v1; // ecx
  int result; // eax

  v1 = this[3];
  result = 1;
  if ( v1 > 0 )
  {
    if ( v1 <= 4 )
    {
      return 3;
    }
    else if ( v1 != 5 )
    {
      if ( v1 == 6 )
      {
        return 2;
      }
      else if ( v1 == 7 )
      {
        return 4;
      }
    }
  }
  return result;
}
