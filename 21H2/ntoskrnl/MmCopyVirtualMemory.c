/*
 * XREFs of MmCopyVirtualMemory @ 0x1407BA6D0
 * Callers:
 *     PsQueryProcessCommandLine @ 0x140241D20 (PsQueryProcessCommandLine.c)
 *     KiTpWriteUmMemory @ 0x14057352C (KiTpWriteUmMemory.c)
 * Callees:
 *     MiCopyVirtualMemory @ 0x1407BB560 (MiCopyVirtualMemory.c)
 */

__int64 __fastcall MmCopyVirtualMemory(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  return MiCopyVirtualMemory(a1, a5, a6, a7, 0);
}
