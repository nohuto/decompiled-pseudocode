/*
 * XREFs of ?CreatePartitionTable@SC_RAW@@QEAAJXZ @ 0x1405C9334
 * Callers:
 *     ?CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x1405C6E38 (-CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1405C7598 (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 */

__int64 __fastcall SC_RAW::CreatePartitionTable(SC_DISK **this)
{
  __int64 v2; // rbx
  int v3; // edx

  v2 = *((_QWORD *)*this + 32);
  memset((void *)(v2 + 446), 0, 0x40uLL);
  *(_DWORD *)(v2 + 440) = 0;
  *(_WORD *)(v2 + 510) = 0;
  v3 = SC_DISK::WriteSectors(*this, 1, 0LL, 0LL);
  if ( v3 >= 0 && *((_DWORD *)*this + 62) == 1 )
  {
    memset(*((void **)*this + 32), 0, 1 << *((_DWORD *)*this + 58));
    v3 = SC_DISK::WriteSectors(*this, 1, 1LL, 0LL);
    if ( v3 >= 0 && (*((_DWORD *)*this + 48) & 1) == 0 )
      return (unsigned int)SC_DISK::WriteSectors(*this, 1, *((_QWORD *)*this + 30) - 1LL, 0LL);
  }
  return (unsigned int)v3;
}
