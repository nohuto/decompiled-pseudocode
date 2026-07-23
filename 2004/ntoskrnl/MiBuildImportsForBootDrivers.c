/*
 * XREFs of MiBuildImportsForBootDrivers @ 0x140A5439C
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140A54214 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     RtlImageDirectoryEntryToData @ 0x14027C310 (RtlImageDirectoryEntryToData.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 MiBuildImportsForBootDrivers()
{
  PVOID *v0; // rcx
  int v1; // ebx
  unsigned int v2; // r12d
  PVOID *v3; // rbp
  PVOID *v4; // rsi
  PVOID v5; // rax
  __int16 v6; // ax
  char *Pool; // r15
  PVOID *i; // r14
  unsigned __int64 *v9; // rdi
  PVOID v10; // rdx
  ULONG v11; // r11d
  unsigned __int64 v12; // r8
  ULONG j; // r10d
  ULONG v14; // edi
  unsigned __int64 v15; // rcx
  void **v16; // rdx
  __int64 v17; // r8
  PVOID *v18; // rax
  _QWORD *v19; // rax
  unsigned int v20; // r10d
  char *v21; // rdx
  __int64 v22; // r9
  PVOID *v23; // rcx
  PVOID *v24; // rcx
  unsigned int v25; // r9d
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  PVOID *k; // rbx
  PVOID v30; // rcx
  ULONG Size; // [rsp+60h] [rbp+8h] BYREF
  PVOID *v32; // [rsp+68h] [rbp+10h]

  v0 = (PVOID *)PsLoadedModuleList;
  v1 = 0;
  v32 = &PsLoadedModuleList;
  Size = 0;
  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  if ( PsLoadedModuleList == &PsLoadedModuleList )
    return 3221226021LL;
  do
  {
    v5 = v0[6];
    if ( PsNtosImageBase == v5 )
    {
      v3 = v0;
    }
    else if ( PsHalImageBase == v5 )
    {
      v4 = v0;
    }
    v6 = ((_DWORD)v0[13] & 0x4000000) == 0 || v0 == v4 || v0 == v3;
    *((_WORD *)v0 + 54) = v6;
    ++v2;
    v0[17] = (PVOID)1;
    v0 = (PVOID *)*v0;
  }
  while ( v0 != &PsLoadedModuleList );
  if ( !v3 || !v4 )
    return 3221226021LL;
  Pool = (char *)MiAllocatePool(256, 8LL * v2, 0x54446D4Du);
  if ( Pool )
  {
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      v9 = (unsigned __int64 *)RtlImageDirectoryEntryToData(i[6], 1u, 0xCu, &Size);
      if ( !v9 )
        goto LABEL_15;
      memset(Pool, 0, 8LL * v2);
      v10 = 0LL;
      v11 = Size >> 3;
      v12 = 0LL;
      for ( j = 0; j < v11; ++v9 )
      {
        if ( !v10 || *v9 < (unsigned __int64)v10 || *v9 >= v12 )
        {
          v24 = (PVOID *)PsLoadedModuleList;
          v25 = 0;
          if ( PsLoadedModuleList != &PsLoadedModuleList )
          {
            v26 = *v9;
            while ( 1 )
            {
              v10 = v24[6];
              v12 = (unsigned __int64)v10 + *((unsigned int *)v24 + 16);
              if ( v26 >= (unsigned __int64)v10 && v26 < v12 )
                break;
              v24 = (PVOID *)*v24;
              ++v25;
              if ( v24 == v32 )
                goto LABEL_40;
            }
            *(_QWORD *)&Pool[8 * v25] = v24;
          }
LABEL_40:
          v27 = *v9;
          if ( *v9 < (unsigned __int64)v10 || v27 >= v12 )
          {
            if ( v27 )
              goto LABEL_59;
            v10 = 0LL;
          }
        }
        ++j;
      }
      Size = 0;
      v14 = 0;
      v15 = 0LL;
      if ( !v2 )
        goto LABEL_15;
      v16 = (void **)Pool;
      v17 = v2;
      do
      {
        v18 = (PVOID *)*v16;
        if ( *v16 && v18 != v3 && v18 != i && v18 != v4 )
        {
          v15 = (unsigned __int64)*v16;
          ++v14;
        }
        ++v16;
        --v17;
      }
      while ( v17 );
      Size = v14;
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          i[17] = (PVOID)(v15 | 1);
          ++*(_WORD *)(v15 + 108);
        }
        else
        {
          if ( v14 > 0x1FFFFFFE || (v19 = MiAllocatePool(256, 8 * v14 + 8, 0x54446D4Du)) == 0LL )
          {
LABEL_59:
            v1 = 1;
            break;
          }
          v20 = 0;
          *v19 = v14;
          v21 = Pool;
          v22 = v2;
          do
          {
            v23 = *(PVOID **)v21;
            if ( *(_QWORD *)v21 && v23 != v3 && v23 != i && v23 != v4 )
            {
              v19[v20 + 1] = v23;
              ++*(_WORD *)(*(_QWORD *)v21 + 108LL);
              ++v20;
            }
            v21 += 8;
            --v22;
          }
          while ( v22 );
          i[17] = v19;
        }
      }
      else
      {
LABEL_15:
        i[17] = (PVOID)-2LL;
      }
    }
    ExFreePoolWithTag(Pool, 0);
    v3[17] = (PVOID)1;
    v4[17] = (PVOID)1;
    if ( v1 != 1 )
      return 0LL;
    for ( k = (PVOID *)PsLoadedModuleList; k != &PsLoadedModuleList; k = (PVOID *)*k )
    {
      v30 = k[17];
      if ( v30 != (PVOID)1 && v30 != (PVOID)-2LL && ((unsigned __int8)v30 & 1) == 0 )
        ExFreePoolWithTag(v30, 0);
      k[17] = (PVOID)1;
      *((_WORD *)k + 54) = 1;
    }
  }
  return 3221225626LL;
}
