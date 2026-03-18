/*
 * XREFs of MiMakeProtectionMask @ 0x1402ACEC0
 * Callers:
 *     MiInitializePoolCommitPacket @ 0x140258BC8 (MiInitializePoolCommitPacket.c)
 *     MmSetAddressRangeModifiedEx @ 0x140262F80 (MmSetAddressRangeModifiedEx.c)
 *     MmProtectPool @ 0x1402704BC (MmProtectPool.c)
 *     MiCommitExistingVad @ 0x1402AB230 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MmMapIoSpaceEx @ 0x140335F40 (MmMapIoSpaceEx.c)
 *     MmAllocateContiguousNodeMemory @ 0x140335F90 (MmAllocateContiguousNodeMemory.c)
 *     MmSetPageProtection @ 0x140377AF0 (MmSetPageProtection.c)
 *     MmProtectMdlSystemAddress @ 0x14052CCE0 (MmProtectMdlSystemAddress.c)
 *     MmMapMdl @ 0x1405320E0 (MmMapMdl.c)
 *     MmAllocateSecureKernelPages @ 0x14054DF34 (MmAllocateSecureKernelPages.c)
 *     MmProtectVirtualMemory @ 0x1405F7EB0 (MmProtectVirtualMemory.c)
 *     MiInitializeCreateSectionPacket @ 0x1405FB190 (MiInitializeCreateSectionPacket.c)
 *     MiMapViewOfSection @ 0x1405FD010 (MiMapViewOfSection.c)
 *     MiMapViewOfSectionCommon @ 0x1405FEEE0 (MiMapViewOfSectionCommon.c)
 *     MiAllocateVirtualMemory @ 0x140696560 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x140696D50 (NtProtectVirtualMemory.c)
 *     MiValidateAllocationType @ 0x1406B7580 (MiValidateAllocationType.c)
 *     MiCopyPagesIntoEnclave @ 0x1408CEB88 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408CFBC4 (MiLoadDataIntoVsmEnclave.c)
 *     MmUpdateSlabRangeProtection @ 0x140A8FE38 (MmUpdateSlabRangeProtection.c)
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
