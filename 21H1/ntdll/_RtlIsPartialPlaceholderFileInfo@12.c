/*
 * XREFs of _RtlIsPartialPlaceholderFileInfo@12 @ 0x4B366800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlIsPartialPlaceholderFileInfo(int *a1, int a2, bool *a3)
{
  int v3; // eax

  if ( a2 > 60 )
  {
    if ( a2 == 63 || a2 == 68 || a2 == 70 )
      goto LABEL_8;
    return a2 < 76 ? -1073741637 : -1073741821;
  }
  if ( a2 != 60 )
  {
    if ( a2 < 2 )
      return a2 < 76 ? -1073741637 : -1073741821;
    if ( a2 > 3 )
    {
      if ( a2 == 35 )
      {
        v3 = *a1;
        goto LABEL_9;
      }
      if ( a2 <= 36 || a2 > 38 )
        return a2 < 76 ? -1073741637 : -1073741821;
    }
  }
LABEL_8:
  v3 = a1[14];
LABEL_9:
  *a3 = (v3 & 0x440000) != 0;
  return 0;
}
