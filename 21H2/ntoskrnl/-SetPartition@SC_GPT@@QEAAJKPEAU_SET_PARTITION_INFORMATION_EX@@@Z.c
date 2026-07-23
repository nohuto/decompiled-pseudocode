/*
 * XREFs of ?SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1405C8390
 * Callers:
 *     ?SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1405C740C (-SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C8134 (-ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1405C8750 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x140617060 (-Free@SC_ENV@@SAXPEAX@Z.c)
 */

__int64 __fastcall SC_GPT::SetPartition(SC_DISK **this, int a2, struct _SET_PARTITION_INFORMATION_EX *a3)
{
  unsigned int v6; // ebx
  int PartitionTable; // eax
  struct SC_DISK_LAYOUT *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  PVOID Buffer; // [rsp+58h] [rbp+20h] BYREF

  Buffer = 0LL;
  if ( a2 )
  {
    PartitionTable = SC_GPT::ReadPartitionTable(this, (struct SC_DISK_LAYOUT **)&Buffer);
    v8 = (struct SC_DISK_LAYOUT *)Buffer;
    v6 = PartitionTable;
    if ( PartitionTable >= 0 )
    {
      v9 = (unsigned int)(a2 - 1);
      if ( (unsigned int)v9 < *((_DWORD *)Buffer + 1) )
      {
        v10 = 18 * v9;
        *(_OWORD *)((char *)Buffer + 8 * v10 + 80) = *(_OWORD *)&a3->Mbr.PartitionType;
        *(GUID *)((char *)v8 + 8 * v10 + 96) = a3->Gpt.PartitionId;
        *((_QWORD *)v8 + v10 + 14) = a3->Gpt.Attributes;
        *(_OWORD *)((char *)v8 + 8 * v10 + 120) = *(_OWORD *)a3->Gpt.Name;
        *(_OWORD *)((char *)v8 + 8 * v10 + 136) = *(_OWORD *)&a3->Gpt.Name[8];
        *(_OWORD *)((char *)v8 + 8 * v10 + 152) = *(_OWORD *)&a3->Gpt.Name[16];
        *(_OWORD *)((char *)v8 + 8 * v10 + 168) = *(_OWORD *)&a3->Gpt.Name[24];
        *((_QWORD *)v8 + v10 + 23) = *(_QWORD *)&a3->Gpt.Name[32];
        v6 = SC_GPT::WritePartitionTable((SC_GPT *)this, v8, 0);
      }
      else
      {
        v6 = -1073741811;
      }
    }
    if ( v8 )
      SC_ENV::Free(v8);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
