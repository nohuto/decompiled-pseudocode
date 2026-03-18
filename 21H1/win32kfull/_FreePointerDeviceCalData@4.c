/*
 * XREFs of _FreePointerDeviceCalData@4 @ 0x159121
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall FreePointerDeviceCalData(_DWORD *a1)
{
  int result; // eax

  if ( *a1 )
  {
    Win32FreePool(*a1);
    *a1 = 0;
  }
  if ( a1[2] )
  {
    Win32FreePool(a1[2]);
    a1[2] = 0;
  }
  if ( a1[4] )
  {
    Win32FreePool(a1[4]);
    a1[4] = 0;
  }
  if ( a1[6] )
  {
    Win32FreePool(a1[6]);
    a1[6] = 0;
  }
  result = a1[8];
  if ( result )
  {
    result = Win32FreePool(a1[8]);
    a1[8] = 0;
  }
  return result;
}
