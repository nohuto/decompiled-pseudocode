/*
 * XREFs of ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14065193C
 * Callers:
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x140651304 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x140651C24 (-SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x140651394 (-ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?CheckSum@MBR_HEADER@@QEAAKXZ @ 0x140651710 (-CheckSum@MBR_HEADER@@QEAAKXZ.c)
 *     ?Validate@MBR_ENTRY@@QEAAEK_K@Z @ 0x140651D0C (-Validate@MBR_ENTRY@@QEAAEK_K@Z.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406D9550 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKE@Z @ 0x140930250 (-Allocate@SC_ENV@@SAPEAX_KKE@Z.c)
 */

__int64 __fastcall SC_MBR::ReadPartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT **a2, unsigned __int8 a3)
{
  unsigned __int8 *v3; // r13
  unsigned int v4; // r12d
  unsigned int v5; // r15d
  const __m128i *v6; // rbp
  unsigned int v7; // edi
  char *v8; // rax
  char *v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // r14
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned int v17; // eax
  char v18; // al
  __int64 v19; // rdx
  int v20; // ecx
  unsigned int v21; // eax
  int v22; // ecx
  unsigned __int8 v23; // cf
  char v24; // al
  unsigned int v25; // eax
  unsigned int v26; // r14d
  char *v27; // rax
  char *v28; // rsi
  int Sectors; // [rsp+20h] [rbp-68h]
  __int64 v31; // [rsp+28h] [rbp-60h]
  char v34; // [rsp+A0h] [rbp+18h]
  unsigned int v35; // [rsp+A8h] [rbp+20h]
  unsigned int v36; // [rsp+A8h] [rbp+20h]

  v3 = 0LL;
  v34 = 0;
  v4 = 0;
  Sectors = 0;
  v5 = 0;
  v35 = 0;
  v6 = (const __m128i *)*((_QWORD *)*this + 33);
  v7 = 0;
  *a2 = 0LL;
  v8 = (char *)SC_ENV::Allocate(0x270uLL, (unsigned int)a2, a3);
  v9 = v8;
  if ( !v8 )
    return (unsigned int)-1073741670;
  memset(v8 + 4, 0, 0x26CuLL);
  *(_DWORD *)v9 = 0;
  *((_DWORD *)v9 + 2) = v6[27].m128i_i32[2];
  *((_DWORD *)v9 + 3) = MBR_HEADER::CheckSum(v6);
  if ( v6[31].m128i_i16[7] != -21931 )
    goto LABEL_27;
  v12 = &v6[28].m128i_u8[2];
  while ( 2 )
  {
    v13 = v12;
    v14 = v35;
    v31 = 4LL;
    v15 = 4LL;
    do
    {
      v16 = 18LL * v5;
      if ( *v13 == 5 || *v13 == 15 )
      {
        if ( v3 )
        {
          v18 = 1;
          v34 = 1;
          goto LABEL_19;
        }
        v3 = v13 - 4;
        v17 = v4;
      }
      else
      {
        v17 = v14;
      }
      v36 = v17;
      if ( MBR_ENTRY::Validate((MBR_ENTRY *)(v13 - 4), v17, *((_QWORD *)*this + 31)) )
      {
        *(_DWORD *)&v9[144 * v5 + 48] = 0;
        v11 = (v36 + (unsigned __int64)*((unsigned int *)v13 + 1)) << *((_DWORD *)*this + 60);
        *(_QWORD *)&v9[144 * v5 + 56] = v11;
        v19 = *((unsigned int *)v13 + 2);
        v20 = *((_DWORD *)*this + 60);
        *(_DWORD *)&v9[144 * v5 + 72] = -1;
        v10 = v19 << v20;
        *(_QWORD *)&v9[144 * v5 + 64] = v10;
        v9[144 * v5 + 80] = *v13;
        v9[144 * v5 + 81] = *(v13 - 4) == 0x80;
        v21 = *v13;
        if ( (unsigned __int8)v21 > 0xFu || (v22 = 32801, v23 = _bittest(&v22, v21), v24 = 0, !v23) )
          v24 = 1;
        v9[144 * v5++ + 82] = v24;
        *(_DWORD *)&v9[8 * v16 + 84] = *((_DWORD *)v13 + 1);
        *(_DWORD *)&v9[8 * v16 + 88] = *((_DWORD *)v9 + 2);
        v18 = v34;
        *(_DWORD *)&v9[8 * v16 + 92] = 0;
        *(_QWORD *)&v9[8 * v16 + 96] = v11;
      }
      else
      {
        v18 = 1;
        v34 = 1;
      }
      v15 = v31;
LABEL_19:
      v13 += 16;
      v31 = --v15;
    }
    while ( v15 );
    v7 = Sectors;
    if ( v18 || !v3 )
    {
LABEL_27:
      *((_DWORD *)v9 + 1) = (v5 + 3) & 0xFFFFFFFC;
      *a2 = (struct SC_DISK_LAYOUT *)v9;
    }
    else
    {
      v25 = *((_DWORD *)v3 + 2);
      v3 = 0LL;
      v26 = v25 + v4;
      if ( !v4 )
        v4 = v25;
      v35 = v26;
      v27 = (char *)SC_ENV::Allocate(144 * v5 + 624, v10, v11);
      v28 = v27;
      if ( v27 )
      {
        memmove(v27, v9, (int)(144 * v5 + 48));
        memset(&v28[144 * v5 + 48], 0, 0x240uLL);
        SC_ENV::Free(v9);
        v9 = v28;
        Sectors = SC_DISK::ReadSectors(*this, 1, v26, 0LL);
        v7 = Sectors;
        if ( Sectors >= 0 )
        {
          v12 = &v6[28].m128i_u8[2];
          if ( v6[31].m128i_i16[7] != -21931 )
            goto LABEL_27;
          continue;
        }
LABEL_30:
        SC_ENV::Free(v9);
      }
      else
      {
        v7 = -1073741670;
        if ( v9 )
          goto LABEL_30;
      }
    }
    return v7;
  }
}
