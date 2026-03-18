/*
 * XREFs of NtRIMAreSiblingDevices @ 0x1C015C6A0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C009E9AC (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 *     RIMAreSiblingDevices @ 0x1C015EA50 (RIMAreSiblingDevices.c)
 */

__int64 __fastcall NtRIMAreSiblingDevices(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMAreSiblingDevices(a1, a2, a3, 1LL);
  else
    return 3221225506LL;
}
