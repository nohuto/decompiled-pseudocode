/*
 * XREFs of ?RtlULongAdd@@YGJKKPAK@Z @ 0x1CFF0E
 * Callers:
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AAEJXZ @ 0x1CF23A (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AAEJXZ.c)
 *     ?DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AAEJXZ @ 0x1CF484 (-DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AAEJXZ.c)
 *     ?GetNextElementIndex@?$CList@VCPhysicalMonitorHandle@@@OPM@@QAEEKPAK@Z @ 0x1CFDDD (-GetNextElementIndex@-$CList@VCPhysicalMonitorHandle@@@OPM@@QAEEKPAK@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __userpurge RtlULongAdd@<eax>(
        int a1@<edx>,
        unsigned int a2@<ecx>,
        int *a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned int v5; // eax
  int v6; // edx
  unsigned int result; // eax

  v5 = a2 + a1;
  if ( a2 + a1 < a2 )
    v6 = -1;
  else
    v6 = a2 + a1;
  result = v5 < a2 ? 0xC0000095 : 0;
  *a3 = v6;
  return result;
}
