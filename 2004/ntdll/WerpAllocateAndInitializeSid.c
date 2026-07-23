/*
 * XREFs of WerpAllocateAndInitializeSid @ 0x1800DD78C
 * Callers:
 *     SendMessageToWERService @ 0x1800DD36C (SendMessageToWERService.c)
 * Callees:
 *     RtlInitializeSid @ 0x180040060 (RtlInitializeSid.c)
 *     ZwAllocateVirtualMemory @ 0x18009D110 (ZwAllocateVirtualMemory.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 *     WerpFreeSid @ 0x1800DDA9C (WerpFreeSid.c)
 */

__int64 __fastcall WerpAllocateAndInitializeSid(
        PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        PVOID *a11)
{
  NTSTATUS v13; // ebx
  PVOID BaseAddress; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+40h] [rbp-18h] BYREF

  RegionSize[0] = 12LL;
  BaseAddress = 0LL;
  if ( !a11 )
    return 3221225485LL;
  v13 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x1000u, 4u);
  if ( v13 < 0 )
    goto LABEL_8;
  if ( BaseAddress )
  {
    memset(BaseAddress, 0, RegionSize[0]);
    v13 = RtlInitializeSid(BaseAddress, IdentifierAuthority, 1u);
    if ( v13 >= 0 )
    {
      *((_DWORD *)BaseAddress + 2) = 18;
      *a11 = BaseAddress;
      v13 = 0;
    }
  }
  if ( v13 < 0 )
  {
LABEL_8:
    if ( BaseAddress )
      WerpFreeSid(BaseAddress);
  }
  return (unsigned int)v13;
}
