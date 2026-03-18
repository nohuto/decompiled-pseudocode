/*
 * XREFs of _UpdatePointerDeviceCount@4 @ 0x1595ED
 * Callers:
 *     _Win32kRIMDevChangeCallback@4 @ 0x1403EC (_Win32kRIMDevChangeCallback@4.c)
 * Callees:
 *     <none>
 */

int __thiscall UpdatePointerDeviceCount(char *this)
{
  char *v1; // ecx

  v1 = this - 1;
  if ( v1 )
  {
    if ( v1 == (char *)1 )
      --gcPointerDevices;
  }
  else
  {
    ++gcPointerDevices;
  }
  return gcPointerDevices;
}
