/*
 * XREFs of ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C7C40
 * Callers:
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C74B4 (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?CreatePartitionTable@SC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x1405C76F0 (-CreatePartitionTable@SC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1405C7AF8 (-SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1405C7268 (-ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1405C7598 (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?CheckSum@MBR_HEADER@@QEAAKXZ @ 0x1405C75DC (-CheckSum@MBR_HEADER@@QEAAKXZ.c)
 *     ?ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z @ 0x1405C7620 (-ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x14088DA50 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall SC_MBR::WritePartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT *a2)
{
  __int8 *v2; // r10
  unsigned int v4; // edx
  const __m128i *v5; // r14
  unsigned int v7; // eax
  int v8; // edi
  int v9; // esi
  char v10; // bp
  __int8 *v11; // rdi
  __int8 *v12; // r15
  unsigned int v13; // r12d
  __int64 v14; // r8
  char v15; // cl
  int v16; // r9d
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // r8
  int Sectors; // eax
  unsigned int v25; // [rsp+20h] [rbp-68h]
  unsigned __int64 v26; // [rsp+24h] [rbp-64h]
  int v27; // [rsp+2Ch] [rbp-5Ch]
  struct _GUID v28; // [rsp+30h] [rbp-58h] BYREF

  v2 = 0LL;
  v4 = 0;
  v26 = 0LL;
  v25 = 0;
  v5 = (const __m128i *)*((_QWORD *)*this + 32);
  v7 = *((_DWORD *)a2 + 2);
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v28 = 0LL;
  if ( !v7 )
  {
    SC_ENV::CreateGuid(&v28);
    v4 = 0;
    v7 = *(_DWORD *)&v28.Data4[4] ^ *(_DWORD *)v28.Data4 ^ *(_DWORD *)&v28.Data2 ^ v28.Data1;
    *((_DWORD *)a2 + 2) = v7;
    v2 = 0LL;
  }
  if ( v5[27].m128i_i32[2] != v7 )
  {
    v5[27].m128i_i32[2] = v7;
    v10 = 1;
    *((_DWORD *)a2 + 3) = MBR_HEADER::CheckSum(v5);
  }
  while ( 2 )
  {
    v27 = v8;
    v11 = &v5[27].m128i_i8[14];
    v12 = v2;
    v13 = (unsigned int)v2;
    do
    {
      if ( v4 >= *((_DWORD *)a2 + 1) )
        break;
      v14 = 18LL * v4;
      v15 = *((_BYTE *)a2 + 144 * v4 + 80);
      if ( v15 == 5 || v15 == 15 )
      {
        if ( v12 )
          return (unsigned int)-1073741823;
        v16 = HIDWORD(v26);
        v12 = v11;
      }
      else
      {
        v16 = v26;
      }
      v17 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 36 * v4 + 23) = 0;
      *((_DWORD *)a2 + 36 * v4 + 22) = v17;
      *((_QWORD *)a2 + 18 * v4 + 12) = *((_QWORD *)a2 + 18 * v4 + 7);
      if ( *((_BYTE *)a2 + 144 * v4 + 76) != (_BYTE)v2 )
      {
        if ( v15 )
        {
          *v11 = *((_BYTE *)a2 + 144 * v4 + 81) != 0 ? 0x80 : 0;
          v11[4] = *((_BYTE *)a2 + 144 * v4 + 80);
          v18 = *((_QWORD *)a2 + 18 * v4 + 7);
          v19 = *((_DWORD *)*this + 57);
          if ( v19 )
            v18 /= (__int64)v19;
          *((_DWORD *)v11 + 2) = v18 - v16;
          v20 = *((_QWORD *)a2 + v14 + 8);
          v21 = *((_DWORD *)*this + 57);
          if ( v21 )
            v20 /= (__int64)v21;
          *((_DWORD *)v11 + 3) = v20;
          MBR_ENTRY::ComputeChs((MBR_ENTRY *)v11, (struct _DISK_GEOMETRY *)((char *)*this + 208));
          v4 = v25;
          LOBYTE(v2) = 0;
        }
        else
        {
          *(_OWORD *)v11 = 0LL;
        }
        v10 = 1;
      }
      ++v4;
      ++v13;
      v11 += 16;
      v25 = v4;
    }
    while ( v13 < 4 );
    if ( v10 )
    {
      v9 = SC_DISK::WriteSectors(*this, 1, (unsigned int)v26, 0LL);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v10 = 0;
    }
    if ( v12 )
    {
      v8 = *((_DWORD *)v12 + 2);
      LODWORD(v26) = v8 + HIDWORD(v26);
      v22 = (unsigned int)(v8 + HIDWORD(v26));
      if ( v27 )
        v8 = v27;
      HIDWORD(v26) = v8;
      Sectors = SC_DISK::ReadSectors(*this, 1, v22, 0LL);
      v2 = 0LL;
      v9 = Sectors;
      if ( Sectors >= 0 )
      {
        v4 = v25;
        v5[31].m128i_i16[7] = -21931;
        continue;
      }
    }
    break;
  }
  return (unsigned int)v9;
}
