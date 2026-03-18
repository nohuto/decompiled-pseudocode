/*
 * XREFs of ?IsValidDDCCICapabilitiesStringCharacter@CPhysicalMonitorHandle@@CGEG@Z @ 0x1CFE35
 * Callers:
 *     ?ConvertUnicodeDDCCICapabilitiesStringToASCIIString@CPhysicalMonitorHandle@@AAEJPADKPBGK@Z @ 0x1CF01C (-ConvertUnicodeDDCCICapabilitiesStringToASCIIString@CPhysicalMonitorHandle@@AAEJPADKPBGK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPhysicalMonitorHandle::IsValidDDCCICapabilitiesStringCharacter(unsigned __int16 a1)
{
  return a1 >= 0x61u && a1 <= 0x7Au
      || a1 >= 0x41u && a1 <= 0x5Au
      || a1 >= 0x30u && a1 <= 0x39u
      || a1 == 40
      || a1 == 41
      || a1 == 95
      || a1 == 46
      || a1 == 32
      || !a1;
}
