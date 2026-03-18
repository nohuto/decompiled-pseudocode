/*
 * XREFs of MiDbgCopyMemoryTarget @ 0x1405A47A0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiCopyFromUntrustedMemory @ 0x140291210 (MiCopyFromUntrustedMemory.c)
 *     MiGetLeafVa @ 0x1402CFEB0 (MiGetLeafVa.c)
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteValidPteNewProtection @ 0x14033DBC0 (MiWriteValidPteNewProtection.c)
 *     MiFillPteHierarchy @ 0x140352E50 (MiFillPteHierarchy.c)
 *     MiCopyToUntrustedMemory @ 0x1403AE6BC (MiCopyToUntrustedMemory.c)
 */

__int64 __fastcall MiDbgCopyMemoryTarget(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v7; // eax
  unsigned int v8; // edi
  void **v9; // r14
  __int64 i; // rbp
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  unsigned __int64 LeafVa; // rax
  int SystemRegionType; // eax
  unsigned int v15; // r8d
  unsigned int v16; // edx
  unsigned int v17; // r9d
  unsigned int v18; // r8d
  int v19; // eax
  int v20; // edi
  signed __int32 v21; // eax
  unsigned int v22; // edi
  __int64 result; // rax
  int j; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v25[5]; // [rsp+28h] [rbp-50h] BYREF
  int v26; // [rsp+98h] [rbp+20h] BYREF

  memset(v25, 0, 32);
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v26 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v26, a2, (__int64)a3, a4);
  }
  else
  {
    *(_DWORD *)a4 = v8 | *(_DWORD *)(a4 + 4);
    v9 = *(void ***)a2;
    MiFillPteHierarchy(*(_QWORD *)a2, v25);
    for ( i = 3LL; ; --i )
    {
      v11 = v25[i];
      v12 = MI_READ_PTE_LOCK_FREE(v11);
      if ( (v12 & 1) == 0 )
        goto LABEL_20;
      if ( (v12 & 0x80u) != 0LL || !i )
        break;
    }
    if ( (*(_DWORD *)(a2 + 24) & 1) != 0 )
    {
      if ( (v12 & 0x800) == 0 )
      {
LABEL_20:
        v20 = -1073741819;
        goto LABEL_21;
      }
      if ( (v12 & 0x42) == 0 )
      {
        MiWriteValidPteNewProtection(v11, v12 | 0x42);
        LeafVa = MiGetLeafVa((unsigned __int64)v9);
        SystemRegionType = MiGetSystemRegionType(LeafVa);
        v15 = 2;
        if ( SystemRegionType == 1 )
        {
          v16 = 2;
        }
        else if ( SystemRegionType == 2 )
        {
          v16 = 1;
          v15 = 0;
        }
        else
        {
          v16 = 0;
        }
        KeFlushSingleTb((unsigned __int64)v9, v16, v15);
      }
    }
    v17 = *(_DWORD *)(a2 + 20);
    v18 = *(_DWORD *)(a2 + 16);
    if ( (*(_DWORD *)(a2 + 24) & 1) != 0 )
      v19 = MiCopyToUntrustedMemory(v9, *(_BYTE **)(a2 + 8), v18, v17);
    else
      v19 = MiCopyFromUntrustedMemory(*(_BYTE **)(a2 + 8), v9, v18, v17);
    v20 = v19;
LABEL_21:
    *(_DWORD *)(a2 + 28) = v20;
  }
  v21 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v22 = ~v21 & 0x80000000;
  if ( (v21 & 0x7FFFFFFF) != 0 )
  {
    for ( j = 0; ; KeYieldProcessorEx(&j, a2, (__int64)a3, a4) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v22 )
        break;
    }
  }
  else
  {
    result = v22 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  _InterlockedDecrement(a3);
  return result;
}
