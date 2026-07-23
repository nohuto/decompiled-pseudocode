/*
 * XREFs of ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C71D8
 * Callers:
 *     IoReadDiskSignature @ 0x14088DCA0 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x14088DDA0 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x14088DF70 (IoReadPartitionTableEx.c)
 * Callees:
 *     ?ResetPartitionCache@SC_DISK@@QEAAJXZ @ 0x1405C72AC (-ResetPartitionCache@SC_DISK@@QEAAJXZ.c)
 *     ?Initialize@SC_MBR@@QEAAXPEAVSC_DISK@@@Z @ 0x1405C77A4 (-Initialize@SC_MBR@@QEAAXPEAVSC_DISK@@@Z.c)
 *     ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C7808 (-ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C8134 (-ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?ReadPartitionTable@SC_RAW@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C9404 (-ReadPartitionTable@SC_RAW@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 */

__int64 __fastcall SC_DISK::ReadPartitionTable(SC_DISK *this, struct SC_DISK_LAYOUT **a2)
{
  int v3; // r8d
  int v5; // r8d
  __int64 result; // rax
  SC_DISK *v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = *((_DWORD *)this + 62);
  if ( !v3 )
    goto LABEL_8;
  v5 = v3 - 1;
  if ( v5 )
  {
    if ( v5 != 1 )
      return 3221225659LL;
    v7 = this;
    return SC_RAW::ReadPartitionTable((SC_RAW *)&v7, a2);
  }
  v7 = this;
  result = SC_GPT::ReadPartitionTable((SC_GPT *)&v7, a2);
  if ( (int)result < 0 )
  {
    result = SC_DISK::ResetPartitionCache(this);
    if ( (int)result >= 0 )
    {
LABEL_8:
      SC_MBR::Initialize((SC_MBR *)&v7, this);
      return SC_MBR::ReadPartitionTable((SC_MBR *)&v7, a2);
    }
  }
  return result;
}
