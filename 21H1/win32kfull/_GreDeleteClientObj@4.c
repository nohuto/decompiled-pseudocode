/*
 * XREFs of _GreDeleteClientObj@4 @ 0x1FD2D6
 * Callers:
 *     _NtGdiDeleteClientObj@4 @ 0x1FD874 (_NtGdiDeleteClientObj@4.c)
 * Callees:
 *     <none>
 */

int __stdcall GreDeleteClientObj(int a1)
{
  int v1; // eax

  v1 = HmgRemoveObject(a1, 0, 0, 1, 6, 0);
  if ( !v1 )
    return 0;
  FreeObject(v1, 6);
  return 1;
}
