/*
 * XREFs of _DxgkEngReleaseDC@8 @ 0xBFC26
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall DxgkEngReleaseDC(int a1, int a2)
{
  if ( a2 )
    return bDeleteDCInternal(a2, 1, 0, 1);
  else
    return UserReleaseDC(a1);
}
