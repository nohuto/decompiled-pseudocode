/*
 * XREFs of LdrIsEnclaveAddress @ 0x1800CCD80
 * Callers:
 *     RtlGuardCheckImageBase @ 0x180074A68 (RtlGuardCheckImageBase.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x18002FA14 (LdrpObtainLockedEnclave.c)
 *     ZwQueryVirtualMemory @ 0x18009D270 (ZwQueryVirtualMemory.c)
 *     LdrpDereferenceEnclave @ 0x1800CD2D0 (LdrpDereferenceEnclave.c)
 */

char __fastcall LdrIsEnclaveAddress(PVOID BaseAddress)
{
  __int64 *v2; // rax
  bool v3; // bl
  __int64 *v4; // rdi
  __int64 v5; // rax
  _BYTE MemoryInformation[56]; // [rsp+30h] [rbp-38h] BYREF

  v2 = LdrpObtainLockedEnclave((unsigned __int64)BaseAddress, 0);
  v3 = 0;
  v4 = v2;
  if ( v2 )
  {
    if ( *((_DWORD *)v2 + 14) == 16 )
    {
      v5 = v2[14];
      if ( v5 )
      {
        if ( BaseAddress == *(PVOID *)(v5 + 184)
          && ZwQueryVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               BaseAddress,
               MemoryRegionInformationEx,
               MemoryInformation,
               0x30uLL,
               0LL) >= 0 )
        {
          v3 = (MemoryInformation[12] & 0x40) != 0;
        }
      }
    }
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v4 + 2));
    LdrpDereferenceEnclave(v4);
    LOBYTE(v2) = v3;
  }
  return (char)v2;
}
