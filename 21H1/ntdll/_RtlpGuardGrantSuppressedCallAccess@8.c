/*
 * XREFs of _RtlpGuardGrantSuppressedCallAccess@8 @ 0x4B363C51
 * Callers:
 *     @RtlpHandleInvalidUserCallTarget@4 @ 0x4B3638A5 (@RtlpHandleInvalidUserCallTarget@4.c)
 *     _RtlGuardGrantSuppressedCallAccess@12 @ 0x4B363AA3 (_RtlGuardGrantSuppressedCallAccess@12.c)
 *     _RtlpUnsuppressForwardReferencingCallTarget@4 @ 0x4B363CC9 (_RtlpUnsuppressForwardReferencingCallTarget@4.c)
 * Callees:
 *     _NtSetInformationVirtualMemory@24 @ 0x4B2F4360 (_NtSetInformationVirtualMemory@24.c)
 */

NTSTATUS __fastcall RtlpGuardGrantSuppressedCallAccess(int a1, int a2)
{
  ULONG_PTR v3; // [esp-10h] [ebp-48h]
  _MEMORY_RANGE_ENTRY VirtualAddresses; // [esp+0h] [ebp-38h] BYREF
  int v5; // [esp+10h] [ebp-28h]
  int v6; // [esp+18h] [ebp-20h]
  int v7; // [esp+1Ch] [ebp-1Ch]
  _DWORD v8[2]; // [esp+24h] [ebp-14h] BYREF
  _DWORD v9[2]; // [esp+2Ch] [ebp-Ch] BYREF
  char v10; // [esp+34h] [ebp-4h] BYREF

  v9[1] = a2;
  v8[1] = 4096;
  v8[0] = a1 & 0xFFFFF000;
  LODWORD(VirtualAddresses.NumberOfBytes) = &v10;
  v9[0] = a1 & 0xFFF;
  HIDWORD(VirtualAddresses.NumberOfBytes) = v9;
  *((_DWORD *)&VirtualAddresses.VirtualAddress + 1) = 0;
  HIDWORD(v3) = v8;
  LODWORD(v3) = 1;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  return NtSetInformationVirtualMemory(
           (HANDLE)0xFFFFFFFF,
           VmCfgCallTargetInformation,
           v3,
           &VirtualAddresses,
           (PVOID)0x20,
           1u);
}
