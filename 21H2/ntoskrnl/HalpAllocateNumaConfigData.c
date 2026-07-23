/*
 * XREFs of HalpAllocateNumaConfigData @ 0x140A654EC
 * Callers:
 *     HalpNumaInitializeStaticConfiguration @ 0x140A64EE0 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpInitializeConfigurationFromMadt @ 0x140A64F94 (HalpInitializeConfigurationFromMadt.c)
 * Callees:
 *     HalpMap @ 0x1403BBAA8 (HalpMap.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpAllocPhysicalMemory @ 0x140A65AC0 (HalpAllocPhysicalMemory.c)
 */

unsigned __int64 __fastcall HalpAllocateNumaConfigData(__int64 a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v6; // r12
  unsigned int v7; // edi
  __int64 v8; // r13
  unsigned int v9; // ebp
  unsigned int v10; // edx
  int v11; // ebx
  unsigned int v12; // esi
  unsigned __int64 result; // rax
  __int64 v14; // r14
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r8
  char *v22; // r8

  v6 = (unsigned int)(4 * a2);
  v7 = a4;
  v8 = 4 * a3;
  v9 = 2 * a2 * a2;
  v10 = v9
      + ((((((((((v8 + ((v8 + 79) & 0xFFFFFFF8) + 7) & 0xFFFFFFF8) + v8 + 7) & 0xFFFFFFF8) + v6 + 7) & 0xFFFFFFF8)
          + v6
          + 7) & 0xFFFFFFF8)
        + v6
        + 7) & 0xFFFFFFF8);
  if ( a4 )
  {
    v7 = a4 + 1;
    v10 = 16 * (a4 + 1) + ((v10 + 7) & 0xFFFFFFF8);
  }
  v11 = a5;
  if ( a5 )
  {
    v11 = a5 + 1;
    v10 = 16 * (a5 + 1) + ((v10 + 7) & 0xFFFFFFF8);
  }
  v12 = (v10 + 4095) >> 12;
  result = HalpAllocPhysicalMemory(a1, 0LL, v12, 0LL);
  if ( result )
  {
    result = HalpMap(result, v12, 1u, 0LL, 4u);
    v14 = result;
    if ( result )
    {
      memset((void *)result, 0, v12 << 12);
      v15 = (v14 + 79) & 0xFFFFFFFFFFFFFFF8uLL;
      HalpNumaConfig = v14;
      *(_QWORD *)v14 = v15;
      *(_DWORD *)(v14 + 64) = a2;
      v16 = (v15 + v8 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      *(_QWORD *)(v14 + 8) = v16;
      v17 = (v16 + v8 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      *(_QWORD *)(v14 + 16) = v17;
      v18 = (v17 + v8 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      *(_QWORD *)(v14 + 24) = v18;
      v19 = ((unsigned int)v6 + 7LL + v18) & 0xFFFFFFFFFFFFFFF8uLL;
      *(_QWORD *)(v14 + 32) = v19;
      v20 = (v19 + v6 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      *(_QWORD *)(v14 + 40) = v20;
      v21 = (v20 + v6 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      *(_QWORD *)(v14 + 48) = v21;
      v22 = (char *)(v9 + v21);
      result = a3;
      *(_DWORD *)(v14 + 68) = a3;
      if ( v7 )
      {
        result = 16LL * v7;
        HalpNumaMemoryRanges = (void *)((unsigned __int64)(v22 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v22 = (char *)HalpNumaMemoryRanges + result;
      }
      if ( v11 )
      {
        HalpChannelMemoryRangeCount = v11;
        result = (unsigned __int64)(v22 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        HalpChannelMemoryRanges = (void *)result;
      }
    }
  }
  return result;
}
