/*
 * XREFs of VidSchGetDxgContext @ 0x1C00D2DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetDxgContext(__int64 a1)
{
  if ( !a1 || *(_DWORD *)(a1 + 896) )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 56);
}
