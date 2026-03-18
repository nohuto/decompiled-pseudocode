/*
 * XREFs of MiUnsecureVirtualMemoryAgainstWrites @ 0x1406F608C
 * Callers:
 *     MiRemoveSecureEntry @ 0x140281480 (MiRemoveSecureEntry.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1407A4A8C (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 */

__int64 __fastcall MiUnsecureVirtualMemoryAgainstWrites(ULONG_PTR a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v4; // [rsp+50h] [rbp+8h] BYREF
  int v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  v4 = 0;
  return MiSetProtectionOnSection((__int64)KeGetCurrentThread()->ApcState.Process, a1, a2, a3, 4u, 0, &v5, (__int64)&v4);
}
