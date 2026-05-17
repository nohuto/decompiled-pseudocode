/*
 * XREFs of _RtlQueryPackageIdentity@24 @ 0x4B2E4DE0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlQueryPackageIdentityEx@28 @ 0x4B2E4E20 (_RtlQueryPackageIdentityEx@28.c)
 */

int __stdcall RtlQueryPackageIdentity(int a1, int a2, int a3, int a4, int a5, bool *a6)
{
  int result; // eax
  __int64 v7; // [esp+8h] [ebp-8h] BYREF

  result = RtlQueryPackageIdentityEx(a1, a2, a3, a4, a5, 0, &v7);
  if ( result >= 0 )
  {
    if ( a6 )
      *a6 = v7 != 0;
  }
  return result;
}
