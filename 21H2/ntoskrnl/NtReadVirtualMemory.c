/*
 * XREFs of NtReadVirtualMemory @ 0x14079E790
 * Callers:
 *     <none>
 * Callees:
 *     MiReadWriteVirtualMemory @ 0x14079E7C0 (MiReadWriteVirtualMemory.c)
 */

__int64 __fastcall NtReadVirtualMemory(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return MiReadWriteVirtualMemory(a1, a5, 16, 0);
}
