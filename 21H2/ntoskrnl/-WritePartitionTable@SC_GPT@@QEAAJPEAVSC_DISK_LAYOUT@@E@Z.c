/*
 * XREFs of ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1405C8750
 * Callers:
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C74B4 (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x1405C7E8C (-CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1405C8390 (-SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x14021FAD0 (RtlComputeCrc32.c)
 *     memset @ 0x140414300 (memset.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1405C7598 (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z @ 0x1405C7620 (-ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x1405C803C (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x140617060 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x14088D930 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x14088DA50 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall SC_GPT::WritePartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT *a2, char a3)
{
  SC_DISK *v4; // rdx
  __int64 v6; // rbp
  unsigned int v7; // ecx
  int Header; // ebx
  unsigned int v9; // r8d
  unsigned int v10; // r15d
  unsigned int v11; // r11d
  unsigned __int64 v12; // r10
  unsigned int v13; // r15d
  int v14; // r14d
  unsigned int v15; // r9d
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // eax
  SC_DISK *v19; // rcx
  SIZE_T v20; // r13
  char *v21; // rax
  char *v22; // r14
  __int64 v23; // r9
  __int64 v24; // rcx
  char *v25; // r13
  __int64 v26; // r12
  __int64 v27; // rbx
  int v28; // ecx
  struct _GUID *v29; // rcx
  unsigned __int64 v30; // r8
  unsigned int v31; // eax
  __int64 v32; // rdx
  unsigned int v33; // eax
  unsigned __int64 v34; // r12
  __int128 v35; // xmm0
  char *v36; // r9
  __int64 v37; // r8
  int v38; // edi
  __int64 v39; // rbx
  __int64 v40; // rax
  ULONG v41; // r8d
  __int64 v42; // rbx
  int v44; // [rsp+20h] [rbp-68h]
  int v45; // [rsp+24h] [rbp-64h]
  unsigned __int64 v46; // [rsp+28h] [rbp-60h]
  unsigned __int64 v47; // [rsp+30h] [rbp-58h]
  char *Buffer; // [rsp+40h] [rbp-48h]
  int v49; // [rsp+90h] [rbp+8h]
  __int64 v50; // [rsp+90h] [rbp+8h]
  unsigned int v52; // [rsp+A8h] [rbp+20h]

  v45 = 0;
  v4 = *this;
  v6 = *((_QWORD *)*this + 32);
  if ( a3 )
  {
    if ( *(_WORD *)(v6 + 510) == 0xAA55 )
      v45 = *(_DWORD *)(v6 + 440);
    v7 = 128;
    if ( *((_DWORD *)a2 + 10) > 0x80u )
      v7 = *((_DWORD *)a2 + 10);
    if ( v7 > 0x400 )
      return (unsigned int)-1073741811;
    v44 = 128;
    v9 = -*((_DWORD *)v4 + 57) & ((v7 << 7) + *((_DWORD *)v4 + 57) - 1);
    v10 = v9 >> *((_DWORD *)v4 + 58);
    v11 = v9 >> 7;
    v12 = v10 + 2;
  }
  else
  {
    v13 = 2 - ((*((_BYTE *)v4 + 192) & 1) != 0);
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
    v44 = *(_DWORD *)(v6 + 84);
    v9 = -*((_DWORD *)*this + 57) & (v44 * v11 + *((_DWORD *)*this + 57) - 1);
    v10 = v9 >> *((_DWORD *)*this + 58);
  }
  v15 = *((_DWORD *)a2 + 1);
  v52 = v11;
  v46 = v12;
  if ( v15 <= v11 )
  {
    v16 = 0LL;
    if ( v15 )
    {
      while ( *((_OWORD *)a2 + 9 * v16 + 5) != PARTITION_LEGACY_BL_GUID )
      {
        v16 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v16 >= v15 )
          goto LABEL_18;
      }
    }
    else
    {
LABEL_18:
      LODWORD(v16) = -1;
    }
    if ( (_DWORD)v16 != -1 )
    {
      v17 = *((_QWORD *)a2 + 18 * (unsigned int)v16 + 8);
      v18 = *((_DWORD *)*this + 57);
      if ( v18 )
        v17 /= (__int64)v18;
      if ( v12 < (unsigned __int64)v10 + v17 + 2 )
        v12 = v10 + v17 + 2;
      v46 = v12;
    }
    v19 = *this;
    if ( (*((_DWORD *)*this + 48) & 1) != 0 )
      v47 = *((_QWORD *)v19 + 30) - 1LL;
    else
      v47 = *((_QWORD *)v19 + 30) - v10 - 2LL;
    v20 = (2 << *((_DWORD *)v19 + 58)) + v9;
    v21 = (char *)SC_ENV::Allocate(v20);
    v22 = v21;
    if ( !v21 )
      return (unsigned int)-1073741670;
    memset(v21, 0, v20);
    v23 = 0LL;
    v49 = 0;
    v24 = 1 << *((_DWORD *)*this + 58);
    v25 = &v22[v20 - v24];
    Buffer = &v22[v24];
    if ( *((_DWORD *)a2 + 1) )
    {
      v26 = (__int64)&v22[v24 + 32];
      do
      {
        v27 = 144 * v23;
        v28 = *((_DWORD *)a2 + 36 * v23 + 12);
        if ( v28 )
        {
          if ( v28 == 1 && *(_OWORD *)((char *)a2 + v27 + 80) == VIRTUAL_STORAGE_TYPE_VENDOR_UNKNOWN )
            goto LABEL_47;
        }
        else if ( !*((_BYTE *)a2 + v27 + 80) )
        {
          goto LABEL_47;
        }
        v29 = (struct _GUID *)((char *)a2 + v27 + 96);
        if ( *(_QWORD *)&v29->Data1 == *(_QWORD *)&NullGuid.Data1 && *(_QWORD *)v29->Data4 == *(_QWORD *)NullGuid.Data4 )
        {
          SC_ENV::CreateGuid(v29);
          LODWORD(v23) = v49;
          v29 = (struct _GUID *)((char *)a2 + v27 + 96);
        }
        *(_OWORD *)(v26 - 32) = *(_OWORD *)((char *)a2 + v27 + 80);
        *(struct _GUID *)(v26 - 16) = *v29;
        v30 = *(_QWORD *)((char *)a2 + v27 + 56);
        v31 = *((_DWORD *)*this + 57);
        if ( v31 )
          v30 = (__int64)v30 / v31;
        *(_QWORD *)v26 = v30;
        v32 = *(_QWORD *)((char *)a2 + v27 + 64) - 1LL + *(_QWORD *)((char *)a2 + v27 + 56);
        v33 = *((_DWORD *)*this + 57);
        if ( v33 )
          v32 /= (__int64)v33;
        *(_QWORD *)(v26 + 8) = v32;
        *(_QWORD *)(v26 + 16) = *(_QWORD *)((char *)a2 + v27 + 112);
        *(_OWORD *)(v26 + 24) = *(_OWORD *)((char *)a2 + v27 + 120);
        *(_OWORD *)(v26 + 40) = *(_OWORD *)((char *)a2 + v27 + 136);
        *(_OWORD *)(v26 + 56) = *(_OWORD *)((char *)a2 + v27 + 152);
        *(_OWORD *)(v26 + 72) = *(_OWORD *)((char *)a2 + v27 + 168);
        *(_QWORD *)(v26 + 88) = *(_QWORD *)((char *)a2 + v27 + 184);
        if ( v30 < v46 || v32 > v47 )
        {
          Header = -1073741811;
          goto LABEL_61;
        }
        v26 += 128LL;
LABEL_47:
        v23 = (unsigned int)(v23 + 1);
        v49 = v23;
      }
      while ( (unsigned int)v23 < *((_DWORD *)a2 + 1) );
    }
    if ( *((_QWORD *)a2 + 1) == *(_QWORD *)&NullGuid.Data1 && *((_QWORD *)a2 + 2) == *(_QWORD *)NullGuid.Data4 )
      SC_ENV::CreateGuid((struct _GUID *)((char *)a2 + 8));
    *((_QWORD *)a2 + 4) = (v47 - v46 + 1) << *((_DWORD *)*this + 58);
    *((_DWORD *)a2 + 10) = v52;
    *(_QWORD *)v22 = 0x5452415020494645LL;
    *((_QWORD *)v22 + 6) = v47;
    *((_QWORD *)v22 + 5) = v46;
    *((_DWORD *)v22 + 2) = 0x10000;
    *((_QWORD *)v22 + 4) = v10 + v47 + 1;
    v34 = v46 - v10;
    *((_DWORD *)v22 + 3) = 92;
    *((_QWORD *)v22 + 3) = 1LL;
    v35 = *(_OWORD *)((char *)a2 + 8);
    *((_DWORD *)v22 + 20) = v52;
    *((_QWORD *)v22 + 9) = v34;
    *(_OWORD *)(v22 + 56) = v35;
    *((_DWORD *)v22 + 21) = v44;
    v50 = v10;
    *((_DWORD *)v22 + 22) = RtlComputeCrc32(0, Buffer, v10 << *((_DWORD *)*this + 58));
    *((_DWORD *)v22 + 4) = RtlComputeCrc32(0, v22, 0x5Cu);
    v36 = v22;
    v37 = 1LL;
    if ( v34 == 2 )
    {
      v38 = ++v10;
    }
    else
    {
      Header = SC_DISK::WriteSectors(*this, 1, 1LL, v22);
      if ( Header < 0 )
      {
LABEL_61:
        SC_ENV::Free(v22);
        return (unsigned int)Header;
      }
      v37 = *((_QWORD *)v22 + 9);
      v36 = Buffer;
      v38 = v10 + 1;
    }
    Header = SC_DISK::WriteSectors(*this, v10, v37, v36);
    if ( Header >= 0 )
    {
      if ( (*((_DWORD *)*this + 48) & 1) != 0 )
        goto LABEL_59;
      *(_OWORD *)v25 = *(_OWORD *)v22;
      *((_OWORD *)v25 + 1) = *((_OWORD *)v22 + 1);
      *((_OWORD *)v25 + 2) = *((_OWORD *)v22 + 2);
      *((_OWORD *)v25 + 3) = *((_OWORD *)v22 + 3);
      *((_OWORD *)v25 + 4) = *((_OWORD *)v22 + 4);
      *((_QWORD *)v25 + 10) = *((_QWORD *)v22 + 10);
      *((_DWORD *)v25 + 22) = *((_DWORD *)v22 + 22);
      v39 = *((_QWORD *)v25 + 4);
      v40 = *((_QWORD *)v25 + 3);
      v41 = *((_DWORD *)v25 + 3);
      *((_DWORD *)v25 + 4) = 0;
      *((_QWORD *)v25 + 3) = v39;
      v42 = v39 - v50;
      *((_QWORD *)v25 + 9) = v42;
      *((_QWORD *)v25 + 4) = v40;
      *((_DWORD *)v25 + 4) = RtlComputeCrc32(0, v25, v41);
      Header = SC_DISK::WriteSectors(*this, v38, v42, Buffer);
      if ( Header >= 0 )
      {
LABEL_59:
        *((_DWORD *)*this + 48) &= ~2u;
        if ( a3 )
        {
          memset((void *)v6, 0, 0x200uLL);
          *(_DWORD *)(v6 + 458) = -1;
          *(_DWORD *)(v6 + 440) = v45;
          *(_BYTE *)(v6 + 450) = -18;
          *(_DWORD *)(v6 + 454) = 1;
          MBR_ENTRY::ComputeChs((MBR_ENTRY *)(v6 + 446), (struct _DISK_GEOMETRY *)((char *)*this + 208));
          *(_WORD *)(v6 + 510) = -21931;
          Header = SC_DISK::WriteSectors(*this, 1, 0LL, 0LL);
        }
      }
    }
    goto LABEL_61;
  }
  return (unsigned int)-1073741811;
}
