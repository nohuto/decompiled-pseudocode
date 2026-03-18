/*
 * XREFs of ?ConvertUnicodeDDCCICapabilitiesStringToASCIIString@CPhysicalMonitorHandle@@AAEJPADKPBGK@Z @ 0x1CF01C
 * Callers:
 *     ?DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AAEJXZ @ 0x1CF484 (-DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AAEJXZ.c)
 * Callees:
 *     ?IsValidDDCCICapabilitiesStringCharacter@CPhysicalMonitorHandle@@CGEG@Z @ 0x1CFE35 (-IsValidDDCCICapabilitiesStringCharacter@CPhysicalMonitorHandle@@CGEG@Z.c)
 */

int __userpurge CPhysicalMonitorHandle::ConvertUnicodeDDCCICapabilitiesStringToASCIIString@<eax>(
        unsigned __int16 a1@<bx>,
        char *a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        unsigned int a5)
{
  int v6; // edx
  int v7; // esi
  char v8; // cl
  unsigned __int16 v10; // [esp-8h] [ebp-Ch]

  v6 = 0;
  if ( a3 < a5 )
    return -1073741823;
  v7 = 0;
  if ( a5 )
  {
    v10 = a1;
    while ( CPhysicalMonitorHandle::IsValidDDCCICapabilitiesStringCharacter(v10) )
    {
      a2[v7] = v8;
      if ( ++v7 >= a5 )
        return v6;
    }
    return -1073741823;
  }
  return v6;
}
