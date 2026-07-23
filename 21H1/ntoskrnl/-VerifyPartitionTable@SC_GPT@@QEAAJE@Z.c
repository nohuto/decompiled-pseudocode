/*
 * XREFs of ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x1405C2664
 * Callers:
 *     ?VerifyPartitionTable@SC_DISK@@QEAAJE@Z @ 0x1405C1678 (-VerifyPartitionTable@SC_DISK@@QEAAJE@Z.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x1402F5E90 (RtlComputeCrc32.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1405C1798 (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z @ 0x1405C219C (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x1405C2224 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406E2CE0 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x1408893C0 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 */

__int64 __fastcall SC_GPT::VerifyPartitionTable(SC_DISK **this, char a2)
{
  SC_DISK *v2; // rax
  __int16 *v3; // r12
  unsigned int v5; // ebx
  __int64 v6; // r15
  bool v7; // cf
  unsigned int v8; // r13d
  __int64 v9; // rsi
  unsigned int v10; // r14d
  struct _GPT_ENTRY *v11; // rax
  struct _GPT_ENTRY *v12; // rsi
  struct _GPT_ENTRY *v13; // r14
  unsigned int v14; // ebx
  SC_DISK *v15; // r10
  __int64 v16; // r9
  void **v17; // rsi
  __int64 *v18; // rbx
  __int64 v19; // rbx
  int v20; // edx
  int v21; // ecx
  BOOL v22; // r15d
  int v23; // eax
  unsigned int v24; // r14d
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  void *v29; // r9
  PVOID *v30; // rdi
  __int64 v31; // rsi
  __int128 v33; // [rsp+20h] [rbp-30h] BYREF
  __int128 v34; // [rsp+30h] [rbp-20h] BYREF
  __int128 v35; // [rsp+40h] [rbp-10h] BYREF
  __int16 v36; // [rsp+90h] [rbp+40h] BYREF
  char v37; // [rsp+98h] [rbp+48h]

  v37 = a2;
  v2 = *this;
  v3 = &v36;
  v36 = 0;
  v5 = 0;
  v6 = 0LL;
  v7 = (*((_BYTE *)v2 + 192) & 1) != 0;
  v35 = 0LL;
  v8 = 2 - v7;
  v34 = 0LL;
  v33 = 0LL;
  do
  {
    v9 = *((_QWORD *)*this + 32);
    *(_QWORD *)((char *)&v33 + v6) = v9;
    if ( (int)SC_GPT::ReadHeader(this, v5, (struct GPT_HEADER *)v9) >= 0 )
    {
      v10 = -*((_DWORD *)*this + 57) & (*(_DWORD *)(v9 + 80) * *(_DWORD *)(v9 + 84) + *((_DWORD *)*this + 57) - 1);
      v11 = (struct _GPT_ENTRY *)SC_ENV::Allocate(v10 + (1 << *((_DWORD *)*this + 58)));
      *(_QWORD *)((char *)&v35 + v6) = v11;
      v12 = v11;
      if ( !v11 )
      {
        v14 = -1073741670;
        goto LABEL_34;
      }
      if ( v5 )
      {
        v13 = v11;
        v12 = (struct _GPT_ENTRY *)((char *)v11 + (1 << *((_DWORD *)*this + 58)));
      }
      else
      {
        v13 = (struct _GPT_ENTRY *)((char *)v11 + v10);
      }
      *(_QWORD *)((char *)&v33 + v6) = v13;
      *(_QWORD *)((char *)&v34 + v6) = v12;
      memmove(v13, *((const void **)*this + 32), 1 << *((_DWORD *)*this + 58));
      if ( (int)SC_GPT::ReadEntries(this, v13, v12) >= 0 )
        *(_BYTE *)v3 = 1;
    }
    ++v5;
    v6 += 8LL;
    v3 = (__int16 *)((char *)v3 + 1);
  }
  while ( v5 < v8 );
  v14 = 0;
  if ( !v36 )
  {
LABEL_11:
    v14 = -1073741774;
    goto LABEL_34;
  }
  v15 = *this;
  if ( (*((_DWORD *)*this + 48) & 1) == 0 )
  {
    if ( !(_BYTE)v36
      || !HIBYTE(v36)
      || __PAIR128__(*(_QWORD *)(*((_QWORD *)&v33 + 1) + 24LL), *(_QWORD *)(*((_QWORD *)&v33 + 1) + 32LL)) != *(_OWORD *)(v33 + 24)
      || *(_OWORD *)(*((_QWORD *)&v33 + 1) + 40LL) != *(_OWORD *)(v33 + 40)
      || *(_QWORD *)(*((_QWORD *)&v33 + 1) + 80LL) != *(_QWORD *)(v33 + 80)
      || *(_DWORD *)(*((_QWORD *)&v33 + 1) + 88LL) != *(_DWORD *)(v33 + 88) )
    {
      goto LABEL_23;
    }
    v16 = *(_QWORD *)(*((_QWORD *)&v33 + 1) + 56LL) - *(_QWORD *)(v33 + 56);
    if ( !v16 )
      v16 = *(_QWORD *)(*((_QWORD *)&v33 + 1) + 64LL) - *(_QWORD *)(v33 + 64);
    if ( v16 )
    {
LABEL_23:
      if ( !v37 )
        goto LABEL_11;
      if ( (_BYTE)v36 )
      {
        v17 = (void **)&v34;
        v18 = (__int64 *)&v33;
      }
      else
      {
        v17 = (void **)&v34 + 1;
        v18 = (__int64 *)&v33 + 1;
      }
      v19 = *v18;
      v20 = *((_DWORD *)v15 + 57);
      v21 = *((_DWORD *)v15 + 58);
      v22 = (_BYTE)v36 != 0;
      v23 = *(_DWORD *)(v19 + 80) * *(_DWORD *)(v19 + 84);
      *(_DWORD *)(v19 + 16) = 0;
      v24 = (-v20 & (unsigned int)(v23 + v20 - 1)) >> v21;
      v25 = *(_QWORD *)(v19 + 24);
      *(_QWORD *)(v19 + 24) = *(_QWORD *)(v19 + 32);
      *(_QWORD *)(v19 + 32) = v25;
      v26 = *(_QWORD *)(v19 + 24);
      if ( v22 )
        v27 = v26 - v24;
      else
        v27 = v26 + 1;
      *(_QWORD *)(v19 + 72) = v27;
      *(_DWORD *)(v19 + 16) = RtlComputeCrc32(0, (PVOID)v19, *(_DWORD *)(v19 + 12));
      if ( v22 )
      {
        v29 = *v17;
        v28 = *(_QWORD *)(v19 + 72);
      }
      else
      {
        v28 = *(_QWORD *)(v19 + 24);
        v29 = (void *)v19;
      }
      v14 = SC_DISK::WriteSectors(*this, v24 + 1, v28, v29);
    }
  }
LABEL_34:
  v30 = (PVOID *)&v35;
  v31 = 2LL;
  do
  {
    if ( *v30 )
      SC_ENV::Free(*v30);
    ++v30;
    --v31;
  }
  while ( v31 );
  return v14;
}
