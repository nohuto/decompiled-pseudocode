/*
 * XREFs of ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C8134
 * Callers:
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C71D8 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1405C8390 (-SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z @ 0x1405C7F1C (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x1405C803C (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x140617060 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x14088D930 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 */

__int64 __fastcall SC_GPT::ReadPartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT **a2)
{
  __int64 v4; // rdi
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  int Header; // esi
  SC_DISK *v8; // rdx
  int v9; // ecx
  unsigned int v10; // ecx
  SIZE_T v11; // rbp
  char *v12; // rax
  char *v13; // rbx
  char *v14; // r10
  __int64 v16; // rbp
  unsigned int v17; // r11d
  char *v18; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // ecx
  PVOID Buffer; // [rsp+40h] [rbp+8h] BYREF

  Buffer = 0LL;
  v4 = *((_QWORD *)*this + 32);
  *a2 = 0LL;
  v5 = 2 - ((*((_BYTE *)*this + 192) & 1) != 0);
  v6 = 0;
  do
  {
    Header = SC_GPT::ReadHeader(this, v6, (struct GPT_HEADER *)v4);
    if ( Header >= 0 )
    {
      Header = SC_GPT::ReadEntries((SC_GPT *)this, (struct GPT_HEADER *)v4, (struct _GPT_ENTRY **)&Buffer);
      if ( Header >= 0 )
        goto LABEL_6;
    }
    ++v6;
  }
  while ( v6 < v5 );
  if ( Header < 0 )
  {
LABEL_13:
    v14 = (char *)Buffer;
    goto LABEL_14;
  }
LABEL_6:
  v8 = *this;
  v9 = *((_DWORD *)*this + 48);
  if ( (v9 & 1) != 0 || v6 || *(_QWORD *)(v4 + 32) == *((_QWORD *)v8 + 30) - 1LL )
    v10 = v9 & 0xFFFFFFFD;
  else
    v10 = v9 | 2;
  *((_DWORD *)v8 + 48) = v10;
  v11 = (unsigned int)(144 * *(_DWORD *)(v4 + 80) + 48);
  v12 = (char *)SC_ENV::Allocate(v11);
  v13 = v12;
  if ( !v12 )
  {
    Header = -1073741670;
    goto LABEL_13;
  }
  memset(v12, 0, v11);
  v14 = (char *)Buffer;
  v16 = 0LL;
  *(_DWORD *)v13 = 1;
  v17 = 0;
  *(_OWORD *)(v13 + 8) = *(_OWORD *)(v4 + 56);
  *((_QWORD *)v13 + 3) = *(_QWORD *)(v4 + 40) << *((_DWORD *)*this + 58);
  *((_QWORD *)v13 + 4) = (*(_QWORD *)(v4 + 48) - *(_QWORD *)(v4 + 40) + 1LL) << *((_DWORD *)*this + 58);
  for ( *((_DWORD *)v13 + 10) = *(_DWORD *)(v4 + 80); v17 < *(_DWORD *)(v4 + 80); ++v17 )
  {
    v18 = &v14[128 * (unsigned __int64)v17];
    v19 = *(_QWORD *)v18 - *(_QWORD *)&NullGuid.Data1;
    if ( *(_QWORD *)v18 == *(_QWORD *)&NullGuid.Data1 )
      v19 = *((_QWORD *)v18 + 1) - *(_QWORD *)NullGuid.Data4;
    if ( v19 )
    {
      v20 = 18 * v16;
      *(_DWORD *)&v13[8 * v20 + 48] = 1;
      *(_QWORD *)&v13[8 * v20 + 56] = *((_QWORD *)v18 + 4) << *((_DWORD *)*this + 58);
      v21 = *((_QWORD *)v18 + 5) - *((_QWORD *)v18 + 4) + 1LL;
      v22 = *((_DWORD *)*this + 58);
      *(_DWORD *)&v13[8 * v20 + 72] = -1;
      *(_QWORD *)&v13[8 * v20 + 64] = v21 << v22;
      v16 = (unsigned int)(v16 + 1);
      *(_OWORD *)&v13[8 * v20 + 80] = *(_OWORD *)v18;
      *(_OWORD *)&v13[8 * v20 + 96] = *((_OWORD *)v18 + 1);
      *(_QWORD *)&v13[8 * v20 + 112] = *((_QWORD *)v18 + 6);
      *(_OWORD *)&v13[8 * v20 + 120] = *(_OWORD *)(v18 + 56);
      *(_OWORD *)&v13[8 * v20 + 136] = *(_OWORD *)(v18 + 72);
      *(_OWORD *)&v13[8 * v20 + 152] = *(_OWORD *)(v18 + 88);
      *(_OWORD *)&v13[8 * v20 + 168] = *(_OWORD *)(v18 + 104);
      *(_QWORD *)&v13[8 * v20 + 184] = *((_QWORD *)v18 + 15);
    }
  }
  *((_DWORD *)v13 + 1) = v16;
  *a2 = (struct SC_DISK_LAYOUT *)v13;
LABEL_14:
  if ( v14 )
    SC_ENV::Free(v14);
  return (unsigned int)Header;
}
