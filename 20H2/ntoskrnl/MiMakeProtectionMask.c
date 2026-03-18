/*
 * XREFs of MiMakeProtectionMask @ 0x14027C200
 * Callers:
 *     MmProtectPool @ 0x1402385B4 (MmProtectPool.c)
 *     MmMapIoSpaceEx @ 0x14025FEE0 (MmMapIoSpaceEx.c)
 *     MmAllocateContiguousNodeMemory @ 0x14025FF30 (MmAllocateContiguousNodeMemory.c)
 *     MiCommitExistingVad @ 0x14027A570 (MiCommitExistingVad.c)
 *     MmSetAddressRangeModifiedEx @ 0x14029ECE0 (MmSetAddressRangeModifiedEx.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiInitializePoolCommitPacket @ 0x1402CB7D8 (MiInitializePoolCommitPacket.c)
 *     MmSetPageProtection @ 0x140379A80 (MmSetPageProtection.c)
 *     MmProtectMdlSystemAddress @ 0x1405306B0 (MmProtectMdlSystemAddress.c)
 *     MmMapMdl @ 0x140535AB0 (MmMapMdl.c)
 *     MmAllocateSecureKernelPages @ 0x140551904 (MmAllocateSecureKernelPages.c)
 *     MiMapViewOfSectionCommon @ 0x140621360 (MiMapViewOfSectionCommon.c)
 *     MiMapViewOfSection @ 0x140621850 (MiMapViewOfSection.c)
 *     MiAllocateVirtualMemory @ 0x14067B2A0 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x14067BA90 (NtProtectVirtualMemory.c)
 *     MiValidateAllocationType @ 0x14067CBB0 (MiValidateAllocationType.c)
 *     MmProtectVirtualMemory @ 0x14067CCB0 (MmProtectVirtualMemory.c)
 *     MiInitializeCreateSectionPacket @ 0x14067F6F0 (MiInitializeCreateSectionPacket.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D49C8 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408D5A04 (MiLoadDataIntoVsmEnclave.c)
 *     MmUpdateSlabRangeProtection @ 0x140A95B38 (MmUpdateSlabRangeProtection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeProtectionMask(unsigned int a1)
{
  char v1; // dl
  __int64 result; // rax

  if ( a1 >= 0x800 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 0xF) != 0 )
  {
    if ( (a1 & 0xF0) != 0 )
      return 0xFFFFFFFFLL;
    v1 = *((_BYTE *)MmUserProtectionToMask1 + (a1 & 0xF));
  }
  else
  {
    if ( !((unsigned __int8)a1 >> 4) )
      return 0xFFFFFFFFLL;
    v1 = *((_BYTE *)MmUserProtectionToMask2 + ((unsigned __int8)a1 >> 4));
  }
  result = (unsigned int)v1;
  if ( (_DWORD)result == -1 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 0x700) == 0 )
    return result;
  if ( (a1 & 0x100) != 0 )
  {
    if ( (_DWORD)result != 24 && (a1 & 0x600) == 0 )
    {
      result = (unsigned int)result | 0x10;
      goto LABEL_14;
    }
    return 0xFFFFFFFFLL;
  }
LABEL_14:
  if ( (a1 & 0x200) != 0 )
  {
    if ( (_DWORD)result != 24 && (a1 & 0x400) == 0 )
      return (unsigned int)result | 8;
    return 0xFFFFFFFFLL;
  }
  if ( (a1 & 0x400) != 0 )
  {
    if ( (_DWORD)result != 24 && (result & 2) == 0 )
      return (unsigned int)result | 0x18;
    return 0xFFFFFFFFLL;
  }
  return result;
}
