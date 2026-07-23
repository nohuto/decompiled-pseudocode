/*
 * XREFs of ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C7808
 * Callers:
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C71D8 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1405C7AF8 (-SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1405C7268 (-ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?CheckSum@MBR_HEADER@@QEAAKXZ @ 0x1405C75DC (-CheckSum@MBR_HEADER@@QEAAKXZ.c)
 *     ?Validate@MBR_ENTRY@@QEAAEK_K@Z @ 0x1405C7BE0 (-Validate@MBR_ENTRY@@QEAAEK_K@Z.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x140617060 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x14088D930 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 */

__int64 __fastcall SC_MBR::ReadPartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT **a2)
{
  unsigned __int8 *v2; // r13
  unsigned int v3; // r12d
  unsigned int v4; // r15d
  const __m128i *v5; // rbp
  unsigned int v6; // edi
  char *v7; // rax
  char *v8; // rbx
  unsigned __int8 *v9; // rax
  unsigned __int8 *v10; // r14
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned int v14; // eax
  char v15; // al
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // ecx
  unsigned __int8 v21; // cf
  char v22; // al
  unsigned int v23; // eax
  unsigned int v24; // r14d
  char *v25; // rax
  char *v26; // rsi
  int Sectors; // [rsp+20h] [rbp-68h]
  unsigned int v29; // [rsp+24h] [rbp-64h]
  __int64 v30; // [rsp+28h] [rbp-60h]
  char v33; // [rsp+A0h] [rbp+18h]
  unsigned int v34; // [rsp+A8h] [rbp+20h]
  unsigned int v35; // [rsp+A8h] [rbp+20h]

  v2 = 0LL;
  v33 = 0;
  v3 = 0;
  Sectors = 0;
  v4 = 0;
  v34 = 0;
  v5 = (const __m128i *)*((_QWORD *)*this + 32);
  v6 = 0;
  *a2 = 0LL;
  v7 = (char *)SC_ENV::Allocate(0x270uLL);
  v8 = v7;
  if ( !v7 )
    return (unsigned int)-1073741670;
  memset(v7 + 4, 0, 0x26CuLL);
  *(_DWORD *)v8 = 0;
  *((_DWORD *)v8 + 2) = v5[27].m128i_i32[2];
  *((_DWORD *)v8 + 3) = MBR_HEADER::CheckSum(v5);
  if ( v5[31].m128i_i16[7] != -21931 )
    goto LABEL_27;
  v9 = &v5[28].m128i_u8[2];
  while ( 2 )
  {
    v10 = v9;
    v11 = v34;
    v30 = 4LL;
    v12 = 4LL;
    v29 = v3;
    do
    {
      v13 = 18LL * v4;
      if ( *v10 == 5 || *v10 == 15 )
      {
        if ( v2 )
        {
          v15 = 1;
          v33 = 1;
          goto LABEL_19;
        }
        v2 = v10 - 4;
        v14 = v3;
      }
      else
      {
        v14 = v11;
      }
      v35 = v14;
      if ( MBR_ENTRY::Validate((MBR_ENTRY *)(v10 - 4), v14, *((_QWORD *)*this + 30)) )
      {
        *(_DWORD *)&v8[144 * v4 + 48] = 0;
        v16 = (v35 + (unsigned __int64)*((unsigned int *)v10 + 1)) << *((_DWORD *)*this + 58);
        *(_QWORD *)&v8[144 * v4 + 56] = v16;
        v17 = *((unsigned int *)v10 + 2);
        v18 = *((_DWORD *)*this + 58);
        *(_DWORD *)&v8[144 * v4 + 72] = -1;
        *(_QWORD *)&v8[144 * v4 + 64] = v17 << v18;
        v8[144 * v4 + 80] = *v10;
        v8[144 * v4 + 81] = *(v10 - 4) == 0x80;
        v19 = *v10;
        if ( (unsigned __int8)v19 > 0xFu || (v20 = 32801, v21 = _bittest(&v20, v19), v22 = 0, !v21) )
          v22 = 1;
        v8[144 * v4++ + 82] = v22;
        *(_DWORD *)&v8[8 * v13 + 84] = *((_DWORD *)v10 + 1);
        *(_DWORD *)&v8[8 * v13 + 88] = *((_DWORD *)v8 + 2);
        v15 = v33;
        *(_DWORD *)&v8[8 * v13 + 92] = 0;
        *(_QWORD *)&v8[8 * v13 + 96] = v16;
      }
      else
      {
        v15 = 1;
        v33 = 1;
      }
      v12 = v30;
LABEL_19:
      v10 += 16;
      v30 = --v12;
    }
    while ( v12 );
    v6 = Sectors;
    if ( v15 || !v2 )
    {
LABEL_27:
      *((_DWORD *)v8 + 1) = (v4 + 3) & 0xFFFFFFFC;
      *a2 = (struct SC_DISK_LAYOUT *)v8;
    }
    else
    {
      v23 = *((_DWORD *)v2 + 2);
      v2 = 0LL;
      v24 = v23 + v3;
      v3 = v23;
      v34 = v24;
      if ( v29 )
        v3 = v29;
      v25 = (char *)SC_ENV::Allocate(144 * v4 + 624);
      v26 = v25;
      if ( v25 )
      {
        memmove(v25, v8, (int)(144 * v4 + 48));
        memset(&v26[144 * v4 + 48], 0, 0x240uLL);
        SC_ENV::Free(v8);
        v8 = v26;
        Sectors = SC_DISK::ReadSectors(*this, 1, v24, 0LL);
        v6 = Sectors;
        if ( Sectors >= 0 )
        {
          v9 = &v5[28].m128i_u8[2];
          if ( v5[31].m128i_i16[7] != -21931 )
            goto LABEL_27;
          continue;
        }
      }
      else
      {
        v6 = -1073741670;
      }
      if ( v8 )
        SC_ENV::Free(v8);
    }
    return v6;
  }
}
