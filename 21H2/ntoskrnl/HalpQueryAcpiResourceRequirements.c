/*
 * XREFs of HalpQueryAcpiResourceRequirements @ 0x1407B9864
 * Callers:
 *     HalpDispatchPnp @ 0x140765140 (HalpDispatchPnp.c)
 *     HalpQueryResources @ 0x1407B9734 (HalpQueryResources.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14037AE50 (HalQueryMaximumProcessorCount.c)
 *     HalpInterruptModel @ 0x14037AEA4 (HalpInterruptModel.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpInterruptGetIrtInfo @ 0x1407B9994 (HalpInterruptGetIrtInfo.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HalpQueryAcpiResourceRequirements(char **a1)
{
  int v2; // eax
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // ebx
  unsigned int MaximumProcessorCount; // eax
  unsigned int v7; // esi
  unsigned int v8; // r15d
  unsigned int v9; // ebp
  unsigned int v10; // r13d
  unsigned int v11; // edi
  char *PoolWithTag; // r14
  char *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+28h] [rbp-30h]

  v15 = 0LL;
  v16 = 0;
  v2 = HalpInterruptModel();
  if ( v2 > 0 && (v2 <= 4 || v2 == 4096) )
  {
    result = HalpInterruptGetIrtInfo(&v15);
    if ( (int)result < 0 )
      return result;
    v5 = 205;
    MaximumProcessorCount = HalQueryMaximumProcessorCount(v4);
    v7 = 205 - HIDWORD(v15) / MaximumProcessorCount;
  }
  else
  {
    v7 = 0;
    v5 = 0;
  }
  if ( SecondaryIcServicesEnabled )
  {
    v8 = v5;
    v9 = 256;
  }
  else
  {
    v8 = -1;
    v9 = 0;
  }
  v10 = v5 + v9 - v7;
  v11 = 32 * (v10 - 1) + 72;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v11, 0x206C6148u);
  memset(PoolWithTag, 0, v11);
  *((_DWORD *)PoolWithTag + 2) = -1;
  *(_DWORD *)PoolWithTag = v11;
  *((_DWORD *)PoolWithTag + 7) = 1;
  *((_DWORD *)PoolWithTag + 1) = 15;
  *((_DWORD *)PoolWithTag + 8) = 65537;
  *((_DWORD *)PoolWithTag + 9) = v10;
  if ( v10 )
  {
    v13 = PoolWithTag + 42;
    v14 = v10;
    do
    {
      if ( v7 >= v8 && v7 < v9 )
        v7 = v9;
      *(_DWORD *)(v13 + 6) = v7;
      *(_DWORD *)(v13 + 10) = v7++;
      *(_WORD *)(v13 - 1) = 258;
      v13 += 32;
      --v14;
    }
    while ( v14 );
  }
  *a1 = PoolWithTag;
  return 0LL;
}
