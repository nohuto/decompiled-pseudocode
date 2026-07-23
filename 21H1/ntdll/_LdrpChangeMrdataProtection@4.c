/*
 * XREFs of _LdrpChangeMrdataProtection@4 @ 0x4B2E1D9E
 * Callers:
 *     _LdrProtectMrdata@4 @ 0x4B2E1D36 (_LdrProtectMrdata@4.c)
 * Callees:
 *     _ZwProtectVirtualMemory@20 @ 0x4B2F2E80 (_ZwProtectVirtualMemory@20.c)
 *     _LdrpLocateMrdata@0 @ 0x4B334ED2 (_LdrpLocateMrdata@0.c)
 */

NTSTATUS __thiscall LdrpChangeMrdataProtection(void *this)
{
  NTSTATUS result; // eax
  PVOID BaseAddress; // [esp+0h] [ebp-Ch] BYREF
  ULONG_PTR RegionSize; // [esp+4h] [ebp-8h] BYREF

  HIDWORD(RegionSize) = this;
  if ( !LdrpMrdataBase )
    LdrpLocateMrdata();
  BaseAddress = (PVOID)LdrpMrdataBase;
  LODWORD(RegionSize) = LdrpMrdataSize;
  result = ZwProtectVirtualMemory(
             (HANDLE)0xFFFFFFFF,
             &BaseAddress,
             &RegionSize,
             HIDWORD(RegionSize),
             (PULONG)&RegionSize + 1);
  if ( result < 0 )
    __fastfail(5u);
  return result;
}
