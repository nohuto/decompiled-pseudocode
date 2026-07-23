/*
 * XREFs of RtlpHpSizeHeap @ 0x1800243E0
 * Callers:
 *     RtlSizeHeap @ 0x180024160 (RtlSizeHeap.c)
 *     RtlpHpFreeHeap @ 0x180024920 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180025710 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegReAlloc @ 0x1800271D0 (RtlpHpSegReAlloc.c)
 *     RtlValidateHeap @ 0x18005F680 (RtlValidateHeap.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x180002B78 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpVsChunkSize @ 0x180021698 (RtlpHpVsChunkSize.c)
 *     RtlpHpLargeAllocSize @ 0x180084A9C (RtlpHpLargeAllocSize.c)
 *     RtlCompareMemory @ 0x1800A1FB0 (RtlCompareMemory.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010ED88 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpSizeHeap(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 DescriptorValidateSafe; // rbx
  int v5; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // r8d
  unsigned int v10; // ebp
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // r8
  char v14; // cl
  unsigned __int64 v15; // r11
  int v16; // r14d
  unsigned int v17; // edx
  int v18; // ebx
  __int64 v19; // rcx
  unsigned int v20; // r8d
  __int64 v21; // rax
  char v22; // cl
  unsigned __int64 v23; // rdx
  int v24; // r8d
  __int64 v25; // r8
  unsigned __int16 v26; // r10
  unsigned int v27; // edx
  unsigned __int64 v28; // rcx
  __int16 v29; // ax
  __int64 v30; // rsi
  __int64 v32; // rax
  signed __int32 v33[10]; // [rsp+0h] [rbp-28h] BYREF

  DescriptorValidateSafe = 0LL;
  v5 = *(_DWORD *)(a1 + 20);
  v7 = *(_DWORD *)(a1 + 220);
  v8 = a3 | v5;
  v9 = 0;
  if ( v7 )
    LOBYTE(v9) = v7 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v10 = v8 | 1;
  if ( !v9 )
    v10 = v8;
  if ( !a2 || (a2 & 0xF) != 0 )
    return -1LL;
  if ( (_WORD)a2 )
  {
    v11 = 0;
  }
  else
  {
    v32 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((a2 - qword_18016DC48) >> 20));
    if ( !v32 || (v11 = v32 - 1, v11 == 2) )
    {
      v30 = RtlpHpLargeAllocSize(a1, a2, v10, 0LL);
      goto LABEL_29;
    }
  }
  v12 = 192LL * v11 + a1 + 256;
  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(v12, a2);
  }
  else if ( (v12 ^ (unsigned __int64)RtlpHpHeapGlobals ^ *(_QWORD *)v12 & a2 ^ *(_QWORD *)((*(_QWORD *)v12 & a2) + 0x10)) == 0xA2E64EADA2E64EADuLL )
  {
    DescriptorValidateSafe = (*(_QWORD *)v12 & a2)
                           + 32
                           * ((unsigned __int64)((unsigned int)a2 - (*(_DWORD *)v12 & (unsigned int)a2)) >> *(_BYTE *)(v12 + 8));
  }
  if ( !DescriptorValidateSafe )
    return -1LL;
  v13 = *(unsigned __int8 *)(DescriptorValidateSafe + 24);
  if ( (v13 & 1) == 0 )
    return -1LL;
  if ( (v13 & 2) != 0 )
  {
    LOBYTE(v13) = v13 & 0xC;
    if ( (unsigned __int8)v13 < 8u && (((1 << *(_BYTE *)(v12 + 8)) - 1) & a2) != 0 )
      return -1LL;
  }
  else
  {
    DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
    v13 = *(unsigned __int8 *)(DescriptorValidateSafe + 24);
    if ( (v13 & 3) != 3 )
      return -1LL;
    LOBYTE(v13) = v13 & 0xC;
    if ( (unsigned __int8)v13 < 8u )
      return -1LL;
  }
  v14 = *(_BYTE *)(v12 + 8);
  v15 = (*(_QWORD *)v12 & DescriptorValidateSafe)
      + ((__int64)(DescriptorValidateSafe - (*(_QWORD *)v12 & DescriptorValidateSafe)) >> 5 << v14);
  if ( a2 <= v15 )
  {
    v30 = ((unsigned __int64)*(unsigned __int8 *)(DescriptorValidateSafe + 31) << v14)
        - *(unsigned int *)(DescriptorValidateSafe + 4);
  }
  else if ( (_BYTE)v13 == 8 )
  {
    v16 = *(_DWORD *)((*(_QWORD *)v12 & DescriptorValidateSafe)
                    + ((__int64)(DescriptorValidateSafe - (*(_QWORD *)v12 & DescriptorValidateSafe)) >> 5 << v14)
                    + 0x28);
    v17 = DWORD2(RtlpHpHeapGlobals) ^ v16 ^ ((unsigned int)v15 >> 12);
    v18 = (unsigned __int16)v17;
    v19 = *(_QWORD *)(*(_QWORD *)(v12 + 24)
                    + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v17 + 15) >> 4]
                    + 128);
    v20 = a2 - HIWORD(v17) - v15;
    v21 = *(unsigned int *)(v19 + 72);
    v22 = *(_BYTE *)(v19 + 76);
    if ( (_DWORD)v21 )
    {
      v23 = (v21 * (unsigned __int64)v20) >> v22;
      v24 = v20 - v23 * v18;
    }
    else
    {
      LODWORD(v23) = v20 >> v22;
      v24 = ((1 << v22) - 1) & v20;
    }
    if ( v24 )
    {
      v30 = -1LL;
    }
    else
    {
      v25 = *(_QWORD *)(v15 + 8 * ((unsigned __int64)(unsigned int)(2 * v23) >> 6) + 48) >> ((2 * v23) & 0x3F);
      if ( (v25 & 1) != 0 )
      {
        v26 = v16 ^ ((unsigned int)v15 >> 12);
        v27 = WORD4(RtlpHpHeapGlobals) ^ v26;
        if ( (v25 & 2) != 0 )
        {
          v28 = WORD4(RtlpHpHeapGlobals) ^ (unsigned __int64)v26;
          v29 = *(_WORD *)(v28 + a2 - 2);
          if ( (v29 & 0x4000) != 0 )
          {
            _InterlockedOr(v33, 0);
            v29 = *(_WORD *)(v28 + a2 - 2);
          }
          if ( v29 < 0 )
            --v27;
          else
            v27 -= v29 & 0x3FFF;
        }
        v30 = v27;
      }
      else
      {
        v30 = -1LL;
      }
    }
  }
  else
  {
    v30 = RtlpHpVsChunkSize(*(_QWORD *)(v12 + 32), a2, v13, 0LL);
  }
LABEL_29:
  if ( v30 == -1
    || (v10 & 0x10000000) == 0
    || RtlCompareMemory((const void *)(v30 + a2), &CheckHeapFillPattern, 0x10uLL) == 16 )
  {
    return v30;
  }
  return -1LL;
}
