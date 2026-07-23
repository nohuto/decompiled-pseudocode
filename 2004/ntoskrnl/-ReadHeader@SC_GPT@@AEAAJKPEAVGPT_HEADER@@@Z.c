/*
 * XREFs of ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x1405C2954
 * Callers:
 *     ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C2A4C (-ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x1405C2D94 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1405C3068 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140332D30 (RtlComputeCrc32.c)
 *     ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1405C1B88 (-ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 */

__int64 __fastcall SC_GPT::ReadHeader(SC_DISK **this, int a2, struct GPT_HEADER *a3)
{
  SC_DISK *v4; // rcx
  __int64 v6; // rbx
  int Sectors; // esi
  int v8; // ebp
  int v9; // ebx
  ULONG32 v10; // eax

  v4 = *this;
  if ( a2 )
    v6 = *((_QWORD *)v4 + 30) - 1LL;
  else
    v6 = 1LL;
  Sectors = SC_DISK::ReadSectors(v4, 1, v6, a3);
  if ( Sectors >= 0 )
  {
    Sectors = -1073741774;
    if ( *(_QWORD *)a3 == 0x5452415020494645LL
      && *((_DWORD *)a3 + 2) == 0x10000
      && *((_DWORD *)a3 + 3) == 92
      && *((_DWORD *)a3 + 21) == 128 )
    {
      v8 = *((_DWORD *)a3 + 20);
      if ( (unsigned int)(v8 - 1) <= 0x3FF && *((_QWORD *)a3 + 3) == v6 )
      {
        v9 = *((_DWORD *)a3 + 4);
        *((_DWORD *)a3 + 4) = 0;
        v10 = RtlComputeCrc32(0, a3, 0x5Cu);
        *((_DWORD *)a3 + 4) = v9;
        if ( v10 == v9 )
          return *((_QWORD *)a3 + 5) < (unsigned __int64)(((((v8 << 7) + *((_DWORD *)*this + 57) - 1) & (unsigned int)-*((_DWORD *)*this + 57)) >> *((_DWORD *)*this + 58))
                                                        + 2)
               ? 0xC0000032
               : 0;
      }
    }
  }
  return (unsigned int)Sectors;
}
