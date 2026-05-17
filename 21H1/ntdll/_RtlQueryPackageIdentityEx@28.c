/*
 * XREFs of _RtlQueryPackageIdentityEx@28 @ 0x4B2E4E20
 * Callers:
 *     _RtlQueryPackageIdentity@24 @ 0x4B2E4DE0 (_RtlQueryPackageIdentity@24.c)
 *     _LdrAppxHandleIntegrityFailure@4 @ 0x4B32C290 (_LdrAppxHandleIntegrityFailure@4.c)
 *     _LdrpConstructModernAppKeyName@8 @ 0x4B331983 (_LdrpConstructModernAppKeyName@8.c)
 *     _RtlpHpOptIntoSegmentHeap@4 @ 0x4B358522 (_RtlpHpOptIntoSegmentHeap@4.c)
 * Callees:
 *     _RtlQueryPackageClaims@32 @ 0x4B2E4E70 (_RtlQueryPackageClaims@32.c)
 */

int __stdcall RtlQueryPackageIdentityEx(int a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7)
{
  int result; // eax
  _DWORD v8[3]; // [esp+8h] [ebp-Ch] BYREF

  v8[0] = 0;
  v8[1] = 0;
  result = RtlQueryPackageClaims(a1, a2, a3, a4, a5, a6, a7 != 0 ? v8 : 0, 0);
  if ( result >= 0 )
  {
    if ( a7 )
    {
      *a7 = v8[0];
      a7[1] = 0;
    }
  }
  return result;
}
