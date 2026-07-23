/*
 * XREFs of MiDbgCopyMemoryTarget @ 0x140545D80
 * Callers:
 *     <none>
 * Callees:
 *     KeFlushSingleTb @ 0x1402599A8 (KeFlushSingleTb.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiFillPteHierarchy @ 0x1403171C0 (MiFillPteHierarchy.c)
 *     MiWriteValidPteNewProtection @ 0x14031A750 (MiWriteValidPteNewProtection.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     MiCopyFromUntrustedMemory @ 0x140545880 (MiCopyFromUntrustedMemory.c)
 *     MiCopyToUntrustedMemory @ 0x1405459AC (MiCopyToUntrustedMemory.c)
 */

__int64 __fastcall MiDbgCopyMemoryTarget(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  __int64 v6; // rsi
  signed __int32 v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  int v10; // edi
  _BYTE *v11; // r14
  __int64 i; // rbp
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  unsigned __int64 LeafVa; // rax
  int SystemRegionType; // eax
  unsigned int v17; // r8d
  unsigned int v18; // edx
  unsigned int v19; // r9d
  unsigned int v20; // r8d
  int v21; // eax
  signed __int32 v22; // eax
  unsigned int v23; // edi
  __int64 result; // rax
  int j; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v26[5]; // [rsp+28h] [rbp-50h] BYREF
  int v27; // [rsp+98h] [rbp+20h] BYREF

  v27 = 0;
  memset(v26, 0, 32);
  v6 = a2;
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v27, a2, (__int64)a3, a4);
    goto LABEL_25;
  }
  v9 = v8 | *(_DWORD *)(a4 + 4);
  v10 = 0;
  *(_DWORD *)a4 = v9;
  v11 = *(_BYTE **)a2;
  MiFillPteHierarchy(*(_QWORD *)a2, v26);
  for ( i = 3LL; ; --i )
  {
    v13 = v26[i];
    v14 = MI_READ_PTE_LOCK_FREE(v13);
    a2 = 3221225477LL;
    if ( (v14 & 1) == 0 )
      break;
    if ( (v14 & 0x80u) != 0LL || !i )
      goto LABEL_8;
  }
  v10 = -1073741819;
LABEL_8:
  if ( (v14 & 1) != 0 )
  {
    if ( (*(_DWORD *)(v6 + 24) & 1) != 0 )
    {
      if ( (v14 & 0x800) == 0 )
      {
        v10 = -1073741819;
        goto LABEL_24;
      }
      if ( (v14 & 0x42) == 0 )
      {
        MiWriteValidPteNewProtection(v13, v14 | 0x42);
        LeafVa = MiGetLeafVa((unsigned __int64)v11);
        SystemRegionType = MiGetSystemRegionType(LeafVa);
        v17 = 2;
        if ( SystemRegionType == 1 )
        {
          v18 = 2;
        }
        else if ( SystemRegionType == 2 )
        {
          v18 = 1;
          v17 = 0;
        }
        else
        {
          v18 = 0;
        }
        KeFlushSingleTb((unsigned __int64)v11, v18, v17);
      }
    }
    if ( v10 >= 0 )
    {
      v19 = *(_DWORD *)(v6 + 20);
      v20 = *(_DWORD *)(v6 + 16);
      if ( (*(_DWORD *)(v6 + 24) & 1) != 0 )
        v21 = MiCopyToUntrustedMemory(v11, *(_BYTE **)(v6 + 8), v20, v19);
      else
        v21 = MiCopyFromUntrustedMemory(*(_BYTE **)(v6 + 8), v11, v20, v19);
      v10 = v21;
    }
  }
LABEL_24:
  *(_DWORD *)(v6 + 28) = v10;
LABEL_25:
  v22 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v23 = ~v22 & 0x80000000;
  if ( (v22 & 0x7FFFFFFF) != 0 )
  {
    for ( j = 0; ; KeYieldProcessorEx(&j, a2, (__int64)a3, a4) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v23 )
        break;
    }
  }
  else
  {
    result = v23 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  _InterlockedDecrement(a3);
  return result;
}
