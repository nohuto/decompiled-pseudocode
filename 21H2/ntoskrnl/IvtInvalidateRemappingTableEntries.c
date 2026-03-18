/*
 * XREFs of IvtInvalidateRemappingTableEntries @ 0x1404598B2
 * Callers:
 *     IvtInvalidateRemappingTableEntry @ 0x140459930 (IvtInvalidateRemappingTableEntry.c)
 *     IvtUpdateRemappingDestination @ 0x14052FC00 (IvtUpdateRemappingDestination.c)
 *     IvtInitializeIommu @ 0x140A63CE0 (IvtInitializeIommu.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     IvtIommuSendCommand @ 0x14052F378 (IvtIommuSendCommand.c)
 *     IvtIommuWaitCommand @ 0x14052F618 (IvtIommuWaitCommand.c)
 */

__int64 __fastcall IvtInvalidateRemappingTableEntries(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  v5[1] = 0LL;
  v5[0] = 4LL;
  if ( a2 )
    v5[0] = ((unsigned __int64)(unsigned __int16)*a2 << 32) | 0x14;
  IvtIommuSendCommand(a1, v5, 0LL);
  return IvtIommuWaitCommand(a1, v3, 0LL);
}
