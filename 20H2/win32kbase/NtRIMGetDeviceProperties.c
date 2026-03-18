/*
 * XREFs of NtRIMGetDeviceProperties @ 0x1C01544A0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C00289E8 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 *     RIMGetDeviceProperties @ 0x1C0156CF0 (RIMGetDeviceProperties.c)
 */

__int64 __fastcall NtRIMGetDeviceProperties(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMGetDeviceProperties(a1, a2, a3, 1LL);
  else
    return 3221225506LL;
}
