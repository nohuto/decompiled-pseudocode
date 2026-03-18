/*
 * XREFs of NtRIMGetPhysicalDeviceRect @ 0x1C0156A80
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C00506D8 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C0159B10 (RIMGetPhysicalDeviceRect.c)
 */

__int64 __fastcall NtRIMGetPhysicalDeviceRect(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMGetPhysicalDeviceRect(a1, a2, a3);
  else
    return 3221225506LL;
}
