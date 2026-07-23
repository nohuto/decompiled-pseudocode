/*
 * XREFs of MiPickClusterForMappedFileFault @ 0x1403249C0
 * Callers:
 *     MiResolveMappedFileFault @ 0x1403241D0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiSufficientAvailablePages @ 0x140263410 (MiSufficientAvailablePages.c)
 *     MiObtainFaultCharges @ 0x1402C0390 (MiObtainFaultCharges.c)
 *     MiStartingOffset @ 0x140329160 (MiStartingOffset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiPickClusterForMappedFileFault(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  __int64 *v8; // r15
  unsigned int v9; // r14d
  __int64 v10; // rbx
  char v11; // r12
  unsigned __int64 v12; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  int v15; // r13d
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rbp
  unsigned int v18; // edx
  __int64 result; // rax
  unsigned int v20; // edx
  int v21; // ecx
  unsigned int v22; // r15d
  unsigned __int64 i; // rdi
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  int v27; // ecx
  __int64 v28; // rdx
  int v29; // [rsp+20h] [rbp-58h]
  __int64 v30; // [rsp+20h] [rbp-58h]
  __int64 v31; // [rsp+28h] [rbp-50h]

  v8 = *(__int64 **)(a2 + 208);
  v9 = 0;
  v10 = *(_QWORD *)(a2 + 168);
  v11 = 1;
  v12 = *(_QWORD *)(a2 + 232);
  CurrentThread = KeGetCurrentThread();
  v15 = 1;
  v31 = *v8;
  if ( (v10 & 0x400) == 0 )
    goto LABEL_5;
  if ( BYTE5(CurrentThread[1].Queue) )
    goto LABEL_5;
  v29 = *(_DWORD *)(*v8 + 56);
  if ( (v29 & 8) != 0 && BYTE4(CurrentThread[1].Queue) != 2 )
    goto LABEL_5;
  if ( *(__int64 *)(a1 + 7168) < 160 )
    goto LABEL_5;
  if ( dword_140C4ED00 )
  {
    --dword_140C4ED00;
LABEL_5:
    v16 = v12;
    v17 = v12;
    goto LABEL_6;
  }
  if ( !(unsigned int)MiSufficientAvailablePages(a1, 0x140uLL) )
    goto LABEL_5;
  v20 = *(_DWORD *)(a2 + 184);
  if ( v20 == 1 )
    goto LABEL_5;
  v17 = a4 - 8 + 8 * (*((unsigned int *)v8 + 11) - (unsigned __int64)(*((_DWORD *)v8 + 13) & 0x3FFFFFFF));
  v21 = v29;
  if ( !a3 )
  {
    if ( (v29 & 0x20) != 0 )
    {
      v20 = 4;
      if ( (v8[4] & 4) != 0 )
        v20 = 8;
    }
    else if ( !v20 )
    {
      v20 = LODWORD(CurrentThread[1].WaitListEntry.Flink) + 1;
    }
  }
  v30 = 8LL * v20;
  if ( v17 > v12 + v30 - 8 )
    v17 = v12 + v30 - 8;
  if ( !a3 && (v21 & 0x20000000) != 0 )
  {
    v22 = MiStartingOffset(v8, v12, a5);
    v27 = v22 & (dword_140C4ED90 - 1);
    if ( v17 > v12 + 8 * (((unsigned int)(dword_140C4ED90 - v27) >> 12) - 1LL) )
      v17 = v12 + 8 * (((unsigned int)(dword_140C4ED90 - v27) >> 12) - 1LL);
  }
  else
  {
    v22 = 0;
  }
  if ( v17 > (v12 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
    v17 = v12 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
  for ( i = v17; i > v12; i -= 8LL )
  {
    if ( MI_READ_PTE_LOCK_FREE(i) == v10 )
    {
      ++v15;
    }
    else if ( i == v17 )
    {
      v17 -= 8LL;
    }
  }
  v24 = v17 - v30 + 8;
  if ( v24 < a4 )
    v24 = a4;
  v25 = v12 & 0xFFFFFFFFFFFFF000uLL;
  if ( v24 >= (v12 & 0xFFFFFFFFFFFFF000uLL) )
    v25 = v24;
  if ( a3 || (*(_DWORD *)(a2 + 192) & 0x40) != 0 )
  {
    v26 = v12;
  }
  else
  {
    v26 = v25;
    if ( (*(_DWORD *)(v31 + 56) & 0x20000000) != 0 )
    {
      v28 = (v22 >> 12) & ((unsigned int)(dword_140C4ED90 - 1) >> 12);
      if ( v25 < v12 - 8 * v28 )
        v26 = v12 - 8LL * (unsigned int)v28;
    }
  }
  v16 = v26;
  while ( v26 < v12 )
  {
    if ( MI_READ_PTE_LOCK_FREE(v26) == v10 )
    {
      ++v15;
    }
    else if ( v26 == v16 )
    {
      v16 += 8LL;
    }
    v26 += 8LL;
  }
LABEL_6:
  v18 = v15 - 1;
  if ( a6 == -1 )
    v18 = v15;
  if ( v18 )
  {
    if ( a6 == -1 )
      v11 = 3;
    v9 = MiObtainFaultCharges((ULONG_PTR *)a1, v18, v11);
  }
  result = v9 + 1;
  if ( a6 == -1 )
    result = v9;
  *a7 = v16;
  *a8 = v17;
  return result;
}
