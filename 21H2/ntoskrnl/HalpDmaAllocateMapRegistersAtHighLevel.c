/*
 * XREFs of HalpDmaAllocateMapRegistersAtHighLevel @ 0x1404C6F2C
 * Callers:
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403A64D0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalAllocateCrashDumpRegisters @ 0x1404B8F80 (HalAllocateCrashDumpRegisters.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x140234490 (HalpDmaGetAdapterVersion.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x1404B72E8 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel @ 0x1404B8D88 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel @ 0x1404B8E64 (HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel.c)
 *     HalpDmaForceAllocation @ 0x1404C7BB4 (HalpDmaForceAllocation.c)
 *     HalpDmaPrependTranslations @ 0x1404C7FB0 (HalpDmaPrependTranslations.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x1404CD560 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 */

__int64 __fastcall HalpDmaAllocateMapRegistersAtHighLevel(__int64 a1, int *a2)
{
  char v2; // al
  char v3; // r13
  int v4; // r14d
  __int64 v6; // r15
  int v8; // esi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 result; // rax
  __int64 ScatterPagesFromScatterPoolAtHighLevel; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  int v19; // ecx
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // r8
  __int64 v25; // rax
  unsigned int v26; // [rsp+70h] [rbp+40h] BYREF
  int v27; // [rsp+78h] [rbp+48h] BYREF

  v2 = *(_BYTE *)(a1 + 434);
  v3 = 0;
  v4 = *a2;
  v6 = *(_QWORD *)(a1 + 152);
  v26 = 0;
  v8 = 0;
  v27 = 0;
  v9 = 0LL;
  if ( v2 )
  {
    if ( *(_QWORD *)(a1 + 104) )
      goto LABEL_32;
    v10 = *(_DWORD *)(a1 + 112) == 0;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 88) )
      goto LABEL_32;
    v10 = *(_DWORD *)(a1 + 96) == 0;
  }
  if ( v10 )
  {
    if ( !*(_BYTE *)(a1 + 337) )
    {
      if ( v2 )
      {
        result = HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel(a1);
        v8 = v27;
        v9 = result;
        if ( v27 == v4 )
          return result;
      }
      else
      {
        result = HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel(a1);
        v9 = result;
        if ( result )
          return result;
      }
    }
    if ( *(_BYTE *)(a1 + 434) )
    {
      ScatterPagesFromScatterPoolAtHighLevel = HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel(a1);
      if ( ScatterPagesFromScatterPoolAtHighLevel )
      {
        v13 = HalpDmaPrependTranslations(ScatterPagesFromScatterPoolAtHighLevel, v26, v9);
        v8 += v26;
        v9 = v13;
        v27 = v8;
      }
      if ( v8 == v4 )
        return v9;
      if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
        v16 = HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2(v14, v6, v15, &v26);
      else
        v16 = HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3(v14, v6, v15, &v26);
      if ( v16 )
      {
        v17 = HalpDmaPrependTranslations(v16, v26, v9);
        v8 += v26;
        v9 = v17;
        v27 = v8;
      }
      if ( v8 == v4 )
        return v9;
    }
    else
    {
      result = HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel(a1);
      v9 = result;
      if ( result )
        return result;
    }
    if ( HalpHiberInProgress )
    {
      if ( *(_BYTE *)(a1 + 434) )
      {
        *a2 = v27;
      }
      else if ( !v9 )
      {
        *a2 = 0;
      }
      return v9;
    }
    v8 = v27;
  }
LABEL_32:
  if ( *(_BYTE *)(a1 + 434) )
  {
    v18 = a1 + 104;
    v19 = v6 + 104;
    while ( 1 )
    {
      if ( *(_BYTE *)(a1 + 337) )
      {
        v9 = 0LL;
      }
      else
      {
        result = HalpDmaForceAllocation((unsigned int)&v27, *(_QWORD *)(a1 + 48), v18, v4, 0, (__int64)&v27);
        v8 = v27;
        v9 = result;
        if ( v27 == v4 )
          return result;
        v19 = v6 + 104;
      }
      v20 = HalpDmaForceAllocation(v19, *(_QWORD *)(v6 + 48), v19, v4 - v8, 0, (__int64)&v26);
      if ( v20 )
      {
        v22 = HalpDmaPrependTranslations(v20, v26, v9);
        v8 += v26;
        v9 = v22;
        v27 = v8;
      }
      if ( v8 == v4 )
        return v9;
      v23 = HalpDmaForceAllocation(v21, *(_QWORD *)(v6 + 40), (int)v6 + 88, v4 - v8, 0, (__int64)&v26);
      if ( v23 )
      {
        v25 = HalpDmaPrependTranslations(v23, v26, v9);
        v8 += v26;
        v24 = (_QWORD *)(v6 + 88);
        v27 = v8;
        v9 = v25;
      }
      if ( v8 == v4 )
        return v9;
      if ( v3 )
        goto LABEL_50;
      *(_DWORD *)(a1 + 112) = 0;
      v18 = a1 + 104;
      *(_QWORD *)(a1 + 104) = 0LL;
      v19 = v6 + 104;
      *(_QWORD *)(v6 + 104) = 0LL;
      v3 = 1;
      *(_DWORD *)(v6 + 112) = 0;
      *v24 = 0LL;
      *(_DWORD *)(v6 + 96) = 0;
    }
  }
  if ( *(_BYTE *)(a1 + 337)
    || (result = HalpDmaForceAllocation(a1, *(_QWORD *)(a1 + 40), (int)a1 + 88, v4, 1, 0LL)) == 0 )
  {
    result = HalpDmaForceAllocation(a1, *(_QWORD *)(v6 + 40), (int)v6 + 88, v4, 1, 0LL);
    if ( !result )
    {
LABEL_50:
      *a2 = 0;
      return 0LL;
    }
  }
  return result;
}
