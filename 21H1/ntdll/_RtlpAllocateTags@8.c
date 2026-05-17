/*
 * XREFs of _RtlpAllocateTags@8 @ 0x4B3575E6
 * Callers:
 *     _RtlCreateTagHeap@16 @ 0x4B2EA550 (_RtlCreateTagHeap@16.c)
 * Callees:
 *     _RtlLogStackBackTraceEx@4 @ 0x4B2DFD89 (_RtlLogStackBackTraceEx@4.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 */

int __fastcall RtlpAllocateTags(int a1, unsigned int a2)
{
  int v2; // eax
  int v3; // esi
  int *v5; // ebx
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned __int16 v9; // cx
  int v10; // edx
  unsigned int v11; // ecx
  __int16 v12; // ax
  int v13; // eax
  bool v14; // cf
  int v15; // edx
  int result; // eax
  int v17; // [esp+Ch] [ebp-18h] BYREF
  int v18; // [esp+10h] [ebp-14h] BYREF
  int v19; // [esp+14h] [ebp-10h]
  int v20; // [esp+18h] [ebp-Ch]
  unsigned int v21; // [esp+1Ch] [ebp-8h]
  int v22; // [esp+20h] [ebp-4h] BYREF

  v2 = RtlpGlobalTagHeap;
  v3 = a1;
  if ( !RtlpGlobalTagHeap )
    return 0;
  if ( a1 )
  {
    v20 = 0;
  }
  else
  {
    *(_DWORD *)(RtlpGlobalTagHeap + 96) = -285217025;
    v3 = v2;
    *(_DWORD *)(v2 + 64) = 1;
    v20 = 2048;
  }
  v19 = 0;
  if ( (*(_DWORD *)(v3 + 64) & 0x8000000) != 0 )
    v19 = (unsigned __int16)RtlLogStackBackTraceEx((void *)1);
  v5 = (int *)(v3 + 136);
  if ( !*(_DWORD *)(v3 + 136) )
  {
    v18 = 131008;
    if ( NtAllocateVirtualMemory(-1, v3 + 136, 0, (int)&v18, 0x2000, 4) < 0 )
      return 0;
    *(_DWORD *)(v3 + 132) = 134152192;
    ++a2;
  }
  v6 = *(unsigned __int16 *)(v3 + 132);
  v7 = *(unsigned __int16 *)(v3 + 134) - v6;
  v21 = v6;
  if ( a2 > v7 )
    return 0;
  v8 = v6;
  v9 = *(_WORD *)(v3 + 132);
  v17 = *v5;
  v10 = (v8 << 6) + v17;
  v22 = v10;
  if ( v21 >= a2 + v21 )
  {
    v15 = v17;
  }
  else
  {
    v11 = v21;
    v12 = v10;
    do
    {
      if ( ((v12 + 64) & 0xFFFu) <= 0x40 )
      {
        v17 = 4096;
        if ( NtAllocateVirtualMemory(-1, (int)&v22, 0, (int)&v17, 4096, 4) < 0 )
          return 0;
        v10 = v22;
        v11 = v21;
      }
      *(_WORD *)(v10 + 12) = v20 | v11;
      *(_WORD *)(v22 + 14) = v19;
      v13 = *(unsigned __int16 *)(v3 + 132);
      v10 = v22 + 64;
      ++v11;
      v22 = v10;
      v21 = v11;
      v14 = v11 < a2 + v13;
      v12 = v10;
    }
    while ( v14 );
    v9 = *(_WORD *)(v3 + 132);
    v15 = *v5;
  }
  result = v15 + (v9 << 6);
  *(_WORD *)(v3 + 132) = a2 + v9;
  return result;
}
