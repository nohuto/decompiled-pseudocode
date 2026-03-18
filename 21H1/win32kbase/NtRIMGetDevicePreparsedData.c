/*
 * XREFs of NtRIMGetDevicePreparsedData @ 0x1C015CCC0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C009E9AC (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 *     RIMGetDevicePreparsedData @ 0x1C015F2D0 (RIMGetDevicePreparsedData.c)
 */

__int64 __fastcall NtRIMGetDevicePreparsedData(int a1, int a2, int a3, int a4)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMGetDevicePreparsedData(a1, a2, a3, a4, 1);
  else
    return 3221225506LL;
}
