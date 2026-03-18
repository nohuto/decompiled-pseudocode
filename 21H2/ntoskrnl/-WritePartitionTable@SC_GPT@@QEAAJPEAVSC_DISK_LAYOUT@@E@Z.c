/*
 * XREFs of ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1406503B0
 * Callers:
 *     ?CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x14064FAD0 (-CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14064FFEC (-SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1406515E8 (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140369820 (RtlComputeCrc32.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x14064FC7C (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1406516CC (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z @ 0x140651754 (-ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406D9550 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKE@Z @ 0x140930250 (-Allocate@SC_ENV@@SAPEAX_KKE@Z.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x140930370 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall SC_GPT::WritePartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT *a2, char a3)
{
  __int64 v4; // rdx
  __int64 v6; // rbp
  unsigned int v7; // ecx
  int Header; // ebx
  unsigned int v9; // r8d
  unsigned int v10; // r15d
  unsigned int v11; // r11d
  unsigned __int64 v12; // r9
  unsigned int v13; // r15d
  int v14; // r14d
  int v15; // edx
  int v16; // r8d
  unsigned int v17; // r10d
  __int64 v18; // rcx
  unsigned int v19; // eax
  SC_DISK *v20; // rcx
  unsigned int v21; // r8d
  size_t v22; // r13
  char *v23; // rax
  char *v24; // r14
  __int64 v25; // r9
  __int64 v26; // rcx
  char *v27; // r13
  __int64 v28; // r12
  __int64 v29; // rbx
  int v30; // ecx
  struct _GUID *v31; // rcx
  unsigned __int64 v32; // r8
  unsigned int v33; // eax
  __int64 v34; // rdx
  unsigned int v35; // eax
  unsigned __int64 v36; // r12
  __int128 v37; // xmm0
  SC_DISK *v38; // rcx
  unsigned __int64 v39; // r8
  char *v40; // r9
  unsigned int v41; // edi
  __int64 v42; // rbx
  __int64 v43; // rax
  unsigned int v44; // r8d
  unsigned __int64 v45; // rbx
  int v47; // [rsp+20h] [rbp-68h]
  int v48; // [rsp+24h] [rbp-64h]
  unsigned __int64 v49; // [rsp+28h] [rbp-60h]
  unsigned __int64 v50; // [rsp+30h] [rbp-58h]
  char *v51; // [rsp+40h] [rbp-48h]
  int v52; // [rsp+90h] [rbp+8h]
  __int64 v53; // [rsp+90h] [rbp+8h]
  unsigned int v55; // [rsp+A8h] [rbp+20h]

  v48 = 0;
  v4 = (__int64)*this;
  v6 = *((_QWORD *)*this + 33);
  if ( !a3 )
  {
    v13 = 2 - ((*(_BYTE *)(v4 + 200) & 1) != 0);
    v14 = 0;
    while ( 1 )
    {
      Header = SC_GPT::ReadHeader(this, v14, (struct GPT_HEADER *)v6);
      if ( Header >= 0 )
        break;
      if ( ++v14 >= v13 )
        return (unsigned int)Header;
    }
    v11 = *(_DWORD *)(v6 + 80);
    v12 = *(_QWORD *)(v6 + 40);
    v15 = *((_DWORD *)*this + 59);
    v47 = *(_DWORD *)(v6 + 84);
    v16 = v15 - 1;
    LODWORD(v4) = -v15;
    v9 = v4 & (v47 * v11 + v16);
    v10 = v9 >> *((_DWORD *)*this + 60);
LABEL_14:
    v17 = *((_DWORD *)a2 + 1);
    v55 = v11;
    v49 = v12;
    if ( v17 > v11 )
      return (unsigned int)-1073741811;
    v18 = 0LL;
    if ( v17 )
    {
      while ( 1 )
      {
        LODWORD(v4) = 18 * v18;
        if ( *((_OWORD *)a2 + 9 * v18 + 5) == PARTITION_LEGACY_BL_GUID )
          break;
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 >= v17 )
          goto LABEL_25;
      }
      if ( (_DWORD)v18 != -1 )
      {
        v4 = *((_QWORD *)a2 + 18 * v18 + 8);
        v19 = *((_DWORD *)*this + 59);
        if ( v19 )
          v4 /= (__int64)v19;
        if ( v12 < (unsigned __int64)v10 + v4 + 2 )
          v12 = v10 + v4 + 2;
        v49 = v12;
      }
    }
LABEL_25:
    v20 = *this;
    if ( (*((_DWORD *)*this + 50) & 1) != 0 )
      v50 = *((_QWORD *)v20 + 31) - 1LL;
    else
      v50 = *((_QWORD *)v20 + 31) - v10 - 2LL;
    v21 = (2 << *((_DWORD *)v20 + 60)) + v9;
    v22 = v21;
    v23 = (char *)SC_ENV::Allocate(v21, v4, v21);
    v24 = v23;
    if ( !v23 )
      return (unsigned int)-1073741670;
    memset(v23, 0, v22);
    v25 = 0LL;
    v52 = 0;
    v26 = 1 << *((_DWORD *)*this + 60);
    v27 = &v24[v22 - v26];
    v51 = &v24[v26];
    if ( *((_DWORD *)a2 + 1) )
    {
      v28 = (__int64)&v24[v26 + 32];
      do
      {
        v29 = 144 * v25;
        v30 = *((_DWORD *)a2 + 36 * v25 + 12);
        if ( v30 )
        {
          if ( v30 == 1 && *(_OWORD *)((char *)a2 + v29 + 80) == VIRTUAL_STORAGE_TYPE_VENDOR_UNKNOWN )
            goto LABEL_47;
        }
        else if ( !*((_BYTE *)a2 + v29 + 80) )
        {
          goto LABEL_47;
        }
        v31 = (struct _GUID *)((char *)a2 + v29 + 96);
        if ( *(_QWORD *)&v31->Data1 == *(_QWORD *)&NullGuid.Data1 && *(_QWORD *)v31->Data4 == *(_QWORD *)NullGuid.Data4 )
        {
          SC_ENV::CreateGuid(v31);
          LODWORD(v25) = v52;
          v31 = (struct _GUID *)((char *)a2 + v29 + 96);
        }
        *(_OWORD *)(v28 - 32) = *(_OWORD *)((char *)a2 + v29 + 80);
        *(struct _GUID *)(v28 - 16) = *v31;
        v32 = *(_QWORD *)((char *)a2 + v29 + 56);
        v33 = *((_DWORD *)*this + 59);
        if ( v33 )
          v32 = (__int64)v32 / v33;
        *(_QWORD *)v28 = v32;
        v34 = *(_QWORD *)((char *)a2 + v29 + 64) - 1LL + *(_QWORD *)((char *)a2 + v29 + 56);
        v35 = *((_DWORD *)*this + 59);
        if ( v35 )
          v34 /= (__int64)v35;
        *(_QWORD *)(v28 + 8) = v34;
        *(_QWORD *)(v28 + 16) = *(_QWORD *)((char *)a2 + v29 + 112);
        *(_OWORD *)(v28 + 24) = *(_OWORD *)((char *)a2 + v29 + 120);
        *(_OWORD *)(v28 + 40) = *(_OWORD *)((char *)a2 + v29 + 136);
        *(_OWORD *)(v28 + 56) = *(_OWORD *)((char *)a2 + v29 + 152);
        *(_OWORD *)(v28 + 72) = *(_OWORD *)((char *)a2 + v29 + 168);
        *(_QWORD *)(v28 + 88) = *(_QWORD *)((char *)a2 + v29 + 184);
        if ( v32 < v49 || v34 > v50 )
        {
          Header = -1073741811;
          goto LABEL_61;
        }
        v28 += 128LL;
LABEL_47:
        v25 = (unsigned int)(v25 + 1);
        v52 = v25;
      }
      while ( (unsigned int)v25 < *((_DWORD *)a2 + 1) );
    }
    if ( *((_QWORD *)a2 + 1) == *(_QWORD *)&NullGuid.Data1 && *((_QWORD *)a2 + 2) == *(_QWORD *)NullGuid.Data4 )
      SC_ENV::CreateGuid((struct _GUID *)((char *)a2 + 8));
    *((_QWORD *)a2 + 4) = (v50 - v49 + 1) << *((_DWORD *)*this + 60);
    *((_DWORD *)a2 + 10) = v55;
    *(_QWORD *)v24 = 0x5452415020494645LL;
    *((_QWORD *)v24 + 6) = v50;
    *((_QWORD *)v24 + 5) = v49;
    *((_DWORD *)v24 + 2) = 0x10000;
    *((_QWORD *)v24 + 4) = v10 + v50 + 1;
    v36 = v49 - v10;
    *((_DWORD *)v24 + 3) = 92;
    *((_QWORD *)v24 + 3) = 1LL;
    v37 = *(_OWORD *)((char *)a2 + 8);
    *((_DWORD *)v24 + 20) = v55;
    *((_QWORD *)v24 + 9) = v36;
    *(_OWORD *)(v24 + 56) = v37;
    *((_DWORD *)v24 + 21) = v47;
    v53 = v10;
    *((_DWORD *)v24 + 22) = RtlComputeCrc32(0, v51, v10 << *((_DWORD *)*this + 60));
    *((_DWORD *)v24 + 4) = RtlComputeCrc32(0, v24, 0x5Cu);
    v38 = *this;
    v39 = 1LL;
    v40 = v24;
    if ( v36 == 2 )
    {
      v41 = ++v10;
    }
    else
    {
      Header = SC_DISK::WriteSectors(v38, 1u, 1uLL, v24);
      if ( Header < 0 )
      {
LABEL_61:
        SC_ENV::Free(v24);
        return (unsigned int)Header;
      }
      v38 = *this;
      v40 = v51;
      v39 = *((_QWORD *)v24 + 9);
      v41 = v10 + 1;
    }
    Header = SC_DISK::WriteSectors(v38, v10, v39, v40);
    if ( Header >= 0 )
    {
      if ( (*((_DWORD *)*this + 50) & 1) != 0 )
        goto LABEL_59;
      *(_OWORD *)v27 = *(_OWORD *)v24;
      *((_OWORD *)v27 + 1) = *((_OWORD *)v24 + 1);
      *((_OWORD *)v27 + 2) = *((_OWORD *)v24 + 2);
      *((_OWORD *)v27 + 3) = *((_OWORD *)v24 + 3);
      *((_OWORD *)v27 + 4) = *((_OWORD *)v24 + 4);
      *((_QWORD *)v27 + 10) = *((_QWORD *)v24 + 10);
      *((_DWORD *)v27 + 22) = *((_DWORD *)v24 + 22);
      v42 = *((_QWORD *)v27 + 4);
      v43 = *((_QWORD *)v27 + 3);
      v44 = *((_DWORD *)v27 + 3);
      *((_DWORD *)v27 + 4) = 0;
      *((_QWORD *)v27 + 3) = v42;
      v45 = v42 - v53;
      *((_QWORD *)v27 + 9) = v45;
      *((_QWORD *)v27 + 4) = v43;
      *((_DWORD *)v27 + 4) = RtlComputeCrc32(0, v27, v44);
      Header = SC_DISK::WriteSectors(*this, v41, v45, v51);
      if ( Header >= 0 )
      {
LABEL_59:
        *((_DWORD *)*this + 50) &= ~2u;
        if ( a3 )
        {
          memset((void *)v6, 0, 0x200uLL);
          *(_DWORD *)(v6 + 458) = -1;
          *(_DWORD *)(v6 + 440) = v48;
          *(_BYTE *)(v6 + 450) = -18;
          *(_DWORD *)(v6 + 454) = 1;
          MBR_ENTRY::ComputeChs((MBR_ENTRY *)(v6 + 446), (struct _DISK_GEOMETRY *)*this + 9);
          *(_WORD *)(v6 + 510) = -21931;
          Header = SC_DISK::WriteSectors(*this, 1u, 0LL, 0LL);
        }
      }
    }
    goto LABEL_61;
  }
  if ( *(_WORD *)(v6 + 510) == 0xAA55 )
    v48 = *(_DWORD *)(v6 + 440);
  v7 = *((_DWORD *)a2 + 10);
  if ( v7 <= 0x80 )
  {
    v7 = 128;
    goto LABEL_8;
  }
  if ( v7 <= 0x400 )
  {
LABEL_8:
    v47 = 128;
    v9 = -*(_DWORD *)(v4 + 236) & ((v7 << 7) + *(_DWORD *)(v4 + 236) - 1);
    v10 = v9 >> *(_DWORD *)(v4 + 240);
    v11 = v9 >> 7;
    v12 = v10 + 2;
    goto LABEL_14;
  }
  return (unsigned int)-1073741811;
}
