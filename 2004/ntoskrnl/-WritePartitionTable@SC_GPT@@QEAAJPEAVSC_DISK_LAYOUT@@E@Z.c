/*
 * XREFs of ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1405C3068
 * Callers:
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C1DD4 (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x1405C27A4 (-CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1405C2CA8 (-SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140332D30 (RtlComputeCrc32.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1405C1EB8 (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z @ 0x1405C1F40 (-ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x1405C2954 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x140706430 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x14088A6E0 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x14088A800 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall SC_GPT::WritePartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT *a2, char a3)
{
  SC_DISK *v3; // r9
  __int64 v6; // rbp
  int v7; // ecx
  unsigned int v8; // r8d
  unsigned int v9; // r12d
  unsigned int v10; // edx
  unsigned __int64 v11; // r15
  unsigned int v12; // r15d
  int v13; // r14d
  int Header; // ebx
  unsigned int v15; // r10d
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rdx
  SIZE_T v20; // r13
  char *v21; // rax
  char *v22; // r14
  __int64 v23; // r9
  __int64 v24; // rcx
  char *v25; // r13
  __int64 v26; // r15
  __int64 v27; // rbx
  int v28; // ecx
  __int64 v29; // rax
  struct _GUID *v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // r8
  unsigned int v33; // eax
  __int64 v34; // rdx
  unsigned int v35; // eax
  __int128 *v36; // rbx
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // r15
  unsigned __int64 v40; // rdi
  __int128 v41; // xmm0
  char *v42; // r9
  int v43; // edi
  __int64 v44; // r8
  __int64 v45; // rbx
  __int64 v46; // rax
  ULONG v47; // r8d
  __int64 v48; // rbx
  int v50; // [rsp+20h] [rbp-68h]
  int v51; // [rsp+24h] [rbp-64h]
  unsigned __int64 v52; // [rsp+28h] [rbp-60h]
  unsigned __int64 v53; // [rsp+30h] [rbp-58h]
  char *Buffer; // [rsp+40h] [rbp-48h]
  int v55; // [rsp+90h] [rbp+8h]
  unsigned int v57; // [rsp+A8h] [rbp+20h]

  v3 = *this;
  v51 = 0;
  v6 = *((_QWORD *)*this + 32);
  if ( a3 )
  {
    if ( *(_WORD *)(v6 + 510) == 0xAA55 )
      v51 = *(_DWORD *)(v6 + 440);
    v7 = 128;
    v50 = 128;
    if ( *((_DWORD *)a2 + 10) > 0x80u )
      v7 = *((_DWORD *)a2 + 10);
    v8 = -*((_DWORD *)v3 + 57) & ((v7 << 7) + *((_DWORD *)v3 + 57) - 1);
    v9 = v8 >> *((_DWORD *)v3 + 58);
    v10 = v8 >> 7;
    v11 = v9 + 2;
  }
  else
  {
    v12 = 2 - ((*((_BYTE *)v3 + 192) & 1) != 0);
    v13 = 0;
    while ( 1 )
    {
      Header = SC_GPT::ReadHeader(this, v13, (struct GPT_HEADER *)v6);
      if ( Header >= 0 )
        break;
      if ( ++v13 >= v12 )
        return (unsigned int)Header;
    }
    v3 = *this;
    v10 = *(_DWORD *)(v6 + 80);
    v11 = *(_QWORD *)(v6 + 40);
    v50 = *(_DWORD *)(v6 + 84);
    v8 = -*((_DWORD *)*this + 57) & (v50 * v10 + *((_DWORD *)*this + 57) - 1);
    v9 = v8 >> *((_DWORD *)*this + 58);
  }
  v15 = *((_DWORD *)a2 + 1);
  v57 = v10;
  v52 = v11;
  if ( v15 <= v10 )
  {
    v16 = 0LL;
    if ( v15 )
    {
      while ( 1 )
      {
        v17 = *((_QWORD *)a2 + 18 * v16 + 10) - PARTITION_LEGACY_BL_GUID;
        if ( !v17 )
          v17 = *((_QWORD *)a2 + 18 * v16 + 11) - *((_QWORD *)&PARTITION_LEGACY_BL_GUID + 1);
        if ( !v17 )
          break;
        v16 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v16 >= v15 )
        {
          v3 = *this;
          goto LABEL_20;
        }
      }
      v3 = *this;
    }
    else
    {
LABEL_20:
      LODWORD(v16) = -1;
    }
    if ( (_DWORD)v16 != -1 )
    {
      v3 = *this;
      v18 = *((_DWORD *)*this + 57);
      v19 = *((_QWORD *)a2 + 18 * (unsigned int)v16 + 8);
      if ( v18 )
        v19 /= (__int64)v18;
      if ( v11 < (unsigned __int64)v9 + v19 + 2 )
      {
        v11 = v9 + v19 + 2;
        v52 = v11;
      }
    }
    if ( (*((_DWORD *)v3 + 48) & 1) != 0 )
      v53 = *((_QWORD *)v3 + 30) - 1LL;
    else
      v53 = *((_QWORD *)v3 + 30) - v9 - 2LL;
    v20 = (2 << *((_DWORD *)v3 + 58)) + v8;
    v21 = (char *)SC_ENV::Allocate(v20);
    v22 = v21;
    if ( !v21 )
      return (unsigned int)-1073741670;
    memset(v21, 0, v20);
    v23 = 0LL;
    v55 = 0;
    v24 = 1 << *((_DWORD *)*this + 58);
    v25 = &v22[v20 - v24];
    Buffer = &v22[v24];
    if ( *((_DWORD *)a2 + 1) )
    {
      v26 = (__int64)&v22[v24 + 32];
      while ( 1 )
      {
        v27 = 144 * v23;
        v28 = *((_DWORD *)a2 + 36 * v23 + 12);
        if ( v28 )
        {
          if ( v28 == 1 )
          {
            v29 = *(_QWORD *)((char *)a2 + v27 + 80) - *(_QWORD *)&VIRTUAL_STORAGE_TYPE_VENDOR_UNKNOWN.Data1;
            if ( !v29 )
              v29 = *(_QWORD *)((char *)a2 + v27 + 88) - *(_QWORD *)VIRTUAL_STORAGE_TYPE_VENDOR_UNKNOWN.Data4;
            if ( !v29 )
              goto LABEL_52;
          }
        }
        else if ( !*((_BYTE *)a2 + v27 + 80) )
        {
          goto LABEL_52;
        }
        v30 = (struct _GUID *)((char *)a2 + v27 + 96);
        v31 = *(_QWORD *)&v30->Data1 - *(_QWORD *)&VIRTUAL_STORAGE_TYPE_VENDOR_UNKNOWN.Data1;
        if ( *(_QWORD *)&v30->Data1 == *(_QWORD *)&VIRTUAL_STORAGE_TYPE_VENDOR_UNKNOWN.Data1 )
          v31 = *(_QWORD *)v30->Data4 - *(_QWORD *)VIRTUAL_STORAGE_TYPE_VENDOR_UNKNOWN.Data4;
        if ( !v31 )
        {
          SC_ENV::CreateGuid(v30);
          LODWORD(v23) = v55;
          v30 = (struct _GUID *)((char *)a2 + v27 + 96);
        }
        *(_OWORD *)(v26 - 32) = *(_OWORD *)((char *)a2 + v27 + 80);
        *(struct _GUID *)(v26 - 16) = *v30;
        v32 = *(_QWORD *)((char *)a2 + v27 + 56);
        v33 = *((_DWORD *)*this + 57);
        if ( v33 )
          v32 = (__int64)v32 / v33;
        *(_QWORD *)v26 = v32;
        v34 = *(_QWORD *)((char *)a2 + v27 + 64) - 1LL + *(_QWORD *)((char *)a2 + v27 + 56);
        v35 = *((_DWORD *)*this + 57);
        if ( v35 )
          v34 /= (__int64)v35;
        *(_QWORD *)(v26 + 8) = v34;
        *(_QWORD *)(v26 + 16) = *(_QWORD *)((char *)a2 + v27 + 112);
        *(_OWORD *)(v26 + 24) = *(_OWORD *)((char *)a2 + v27 + 120);
        *(_OWORD *)(v26 + 40) = *(_OWORD *)((char *)a2 + v27 + 136);
        *(_OWORD *)(v26 + 56) = *(_OWORD *)((char *)a2 + v27 + 152);
        *(_OWORD *)(v26 + 72) = *(_OWORD *)((char *)a2 + v27 + 168);
        *(_QWORD *)(v26 + 88) = *(_QWORD *)((char *)a2 + v27 + 184);
        if ( v32 < v52 || v34 > v53 )
        {
          Header = -1073741811;
          goto LABEL_68;
        }
        v26 += 128LL;
LABEL_52:
        v23 = (unsigned int)(v23 + 1);
        v55 = v23;
        if ( (unsigned int)v23 >= *((_DWORD *)a2 + 1) )
        {
          v11 = v52;
          break;
        }
      }
    }
    v36 = (__int128 *)((char *)a2 + 8);
    v37 = *((_QWORD *)a2 + 1) - *(_QWORD *)&VIRTUAL_STORAGE_TYPE_VENDOR_UNKNOWN.Data1;
    if ( !v37 )
      v37 = *((_QWORD *)a2 + 2) - *(_QWORD *)VIRTUAL_STORAGE_TYPE_VENDOR_UNKNOWN.Data4;
    if ( !v37 )
      SC_ENV::CreateGuid((struct _GUID *)((char *)a2 + 8));
    v38 = v53 - v11;
    v39 = v9;
    *((_QWORD *)a2 + 4) = (v38 + 1) << *((_DWORD *)*this + 58);
    *((_DWORD *)a2 + 10) = v57;
    *(_QWORD *)v22 = 0x5452415020494645LL;
    *((_QWORD *)v22 + 6) = v53;
    *((_QWORD *)v22 + 4) = v9 + v53 + 1;
    *((_QWORD *)v22 + 5) = v52;
    v40 = v52 - v9;
    *((_DWORD *)v22 + 2) = 0x10000;
    *((_DWORD *)v22 + 3) = 92;
    *((_QWORD *)v22 + 3) = 1LL;
    v41 = *v36;
    *((_DWORD *)v22 + 20) = v57;
    *((_QWORD *)v22 + 9) = v40;
    *(_OWORD *)(v22 + 56) = v41;
    *((_DWORD *)v22 + 21) = v50;
    *((_DWORD *)v22 + 22) = RtlComputeCrc32(0, Buffer, v9 << *((_DWORD *)*this + 58));
    *((_DWORD *)v22 + 4) = RtlComputeCrc32(0, v22, 0x5Cu);
    v42 = v22;
    if ( v40 == 2 )
    {
      v43 = v9 + 1;
      v44 = 1LL;
      ++v9;
    }
    else
    {
      Header = SC_DISK::WriteSectors(*this, 1, 1LL, v22);
      if ( Header < 0 )
      {
LABEL_68:
        SC_ENV::Free(v22);
        return (unsigned int)Header;
      }
      v44 = *((_QWORD *)v22 + 9);
      v43 = v9 + 1;
      v42 = Buffer;
    }
    Header = SC_DISK::WriteSectors(*this, v9, v44, v42);
    if ( Header >= 0 )
    {
      if ( (*((_DWORD *)*this + 48) & 1) != 0 )
        goto LABEL_66;
      *(_OWORD *)v25 = *(_OWORD *)v22;
      *((_OWORD *)v25 + 1) = *((_OWORD *)v22 + 1);
      *((_OWORD *)v25 + 2) = *((_OWORD *)v22 + 2);
      *((_OWORD *)v25 + 3) = *((_OWORD *)v22 + 3);
      *((_OWORD *)v25 + 4) = *((_OWORD *)v22 + 4);
      *((_QWORD *)v25 + 10) = *((_QWORD *)v22 + 10);
      *((_DWORD *)v25 + 22) = *((_DWORD *)v22 + 22);
      v45 = *((_QWORD *)v25 + 4);
      v46 = *((_QWORD *)v25 + 3);
      v47 = *((_DWORD *)v25 + 3);
      *((_DWORD *)v25 + 4) = 0;
      *((_QWORD *)v25 + 3) = v45;
      v48 = v45 - v39;
      *((_QWORD *)v25 + 9) = v48;
      *((_QWORD *)v25 + 4) = v46;
      *((_DWORD *)v25 + 4) = RtlComputeCrc32(0, v25, v47);
      Header = SC_DISK::WriteSectors(*this, v43, v48, Buffer);
      if ( Header >= 0 )
      {
LABEL_66:
        *((_DWORD *)*this + 48) &= ~2u;
        if ( a3 )
        {
          memset((void *)v6, 0, 0x200uLL);
          *(_DWORD *)(v6 + 458) = -1;
          *(_DWORD *)(v6 + 440) = v51;
          *(_BYTE *)(v6 + 450) = -18;
          *(_DWORD *)(v6 + 454) = 1;
          MBR_ENTRY::ComputeChs((MBR_ENTRY *)(v6 + 446), (struct _DISK_GEOMETRY *)((char *)*this + 208));
          *(_WORD *)(v6 + 510) = -21931;
          Header = SC_DISK::WriteSectors(*this, 1, 0LL, 0LL);
        }
      }
    }
    goto LABEL_68;
  }
  return (unsigned int)-1073741811;
}
