/*
 * XREFs of ?SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1405C740C
 * Callers:
 *     IoSetPartitionInformation @ 0x14088E020 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x14088E100 (IoSetPartitionInformationEx.c)
 * Callees:
 *     ?Initialize@SC_MBR@@QEAAXPEAVSC_DISK@@@Z @ 0x1405C77A4 (-Initialize@SC_MBR@@QEAAXPEAVSC_DISK@@@Z.c)
 *     ?SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1405C7AF8 (-SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1405C8390 (-SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 */

__int64 __fastcall SC_DISK::SetPartition(SC_DISK *this, unsigned int a2, struct _SET_PARTITION_INFORMATION_EX *a3)
{
  int v3; // r9d
  struct _SET_PARTITION_INFORMATION_EX *v5; // r10
  unsigned int v6; // r11d
  SC_DISK *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 62);
  if ( v3 != a3->PartitionStyle )
    return 3221225485LL;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      v7 = this;
      return SC_GPT::SetPartition((SC_GPT *)&v7, a2, a3);
    }
    else
    {
      return 3221225659LL;
    }
  }
  else
  {
    SC_MBR::Initialize((SC_MBR *)&v7, this);
    return SC_MBR::SetPartition((SC_MBR *)&v7, v6, v5);
  }
}
