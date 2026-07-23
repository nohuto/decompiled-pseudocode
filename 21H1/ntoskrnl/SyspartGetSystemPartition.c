/*
 * XREFs of SyspartGetSystemPartition @ 0x14096ED18
 * Callers:
 *     BiMapEfiDeviceForSpaces @ 0x1405BE2A4 (BiMapEfiDeviceForSpaces.c)
 *     CmpMountPreloadedHives @ 0x140791858 (CmpMountPreloadedHives.c)
 * Callees:
 *     SiGetSystemDeviceName @ 0x1406E0C38 (SiGetSystemDeviceName.c)
 *     SiQuerySystemInformationString @ 0x140771864 (SiQuerySystemInformationString.c)
 */

__int64 __fastcall SyspartGetSystemPartition(void *a1, unsigned int a2, unsigned int *a3)
{
  __int64 result; // rax

  result = SiQuerySystemInformationString(SystemSystemPartitionInformation, a1, a2, a3);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
    return SiGetSystemDeviceName((__int64 (__fastcall *)(_QWORD, void **))SiGetSystemPartition, a1, a2, a3);
  return result;
}
