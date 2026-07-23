/*
 * XREFs of ?Initialize@SC_MBR@@QEAAXPEAVSC_DISK@@@Z @ 0x1405C77A4
 * Callers:
 *     ?CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x1405C6E38 (-CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C71D8 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1405C740C (-SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C74B4 (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SC_MBR::Initialize(SC_MBR *this, struct SC_DISK *a2)
{
  __int64 v2; // rax
  unsigned int v3; // eax

  *(_QWORD *)this = a2;
  v2 = *((_QWORD *)a2 + 26);
  if ( !v2 || v2 > 1024 )
  {
    *((_QWORD *)a2 + 26) = 1024LL;
    a2 = *(struct SC_DISK **)this;
  }
  v3 = *((_DWORD *)a2 + 55);
  if ( !v3 || v3 > 0xFF )
  {
    *((_DWORD *)a2 + 55) = 255;
    a2 = *(struct SC_DISK **)this;
  }
  if ( (unsigned int)(*((_DWORD *)a2 + 56) - 1) > 0x3E )
    *((_DWORD *)a2 + 56) = 63;
}
