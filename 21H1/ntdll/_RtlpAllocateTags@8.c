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
  _WORD *v10; // edx
  unsigned int v11; // ecx
  __int16 v12; // ax
  int v13; // eax
  bool v14; // cf
  int v15; // edx
  int result; // eax
  ULONG_PTR v17; // [esp-10h] [ebp-34h]
  ULONG_PTR v18; // [esp-10h] [ebp-34h]
  ULONG v19; // [esp+0h] [ebp-24h]
  int v20; // [esp+Ch] [ebp-18h] BYREF
  int v21; // [esp+10h] [ebp-14h] BYREF
  int v22; // [esp+14h] [ebp-10h]
  int v23; // [esp+18h] [ebp-Ch]
  unsigned int v24; // [esp+1Ch] [ebp-8h]
  PVOID BaseAddress; // [esp+20h] [ebp-4h] BYREF

  v2 = RtlpGlobalTagHeap;
  v3 = a1;
  if ( !RtlpGlobalTagHeap )
    return 0;
  if ( a1 )
  {
    v23 = 0;
  }
  else
  {
    *(_DWORD *)(RtlpGlobalTagHeap + 96) = -285217025;
    v3 = v2;
    *(_DWORD *)(v2 + 64) = 1;
    v23 = 2048;
  }
  v22 = 0;
  if ( (*(_DWORD *)(v3 + 64) & 0x8000000) != 0 )
    v22 = (unsigned __int16)RtlLogStackBackTraceEx((void *)1);
  v5 = (int *)(v3 + 136);
  if ( !*(_DWORD *)(v3 + 136) )
  {
    v21 = 131008;
    HIDWORD(v17) = &v21;
    LODWORD(v17) = 0;
    if ( NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)(v3 + 136), v17, (PSIZE_T)0x2000, 4u, v19) < 0 )
      return 0;
    *(_DWORD *)(v3 + 132) = 134152192;
    ++a2;
  }
  v6 = *(unsigned __int16 *)(v3 + 132);
  v7 = *(unsigned __int16 *)(v3 + 134) - v6;
  v24 = v6;
  if ( a2 > v7 )
    return 0;
  v8 = v6;
  v9 = *(_WORD *)(v3 + 132);
  v20 = *v5;
  v10 = (_WORD *)((v8 << 6) + v20);
  BaseAddress = v10;
  if ( v24 >= a2 + v24 )
  {
    v15 = v20;
  }
  else
  {
    v11 = v24;
    v12 = (__int16)v10;
    do
    {
      if ( ((v12 + 64) & 0xFFFu) <= 0x40 )
      {
        v20 = 4096;
        HIDWORD(v18) = &v20;
        LODWORD(v18) = 0;
        if ( NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, v18, (PSIZE_T)0x1000, 4u, v19) < 0 )
          return 0;
        v10 = BaseAddress;
        v11 = v24;
      }
      v10[6] = v23 | v11;
      *((_WORD *)BaseAddress + 7) = v22;
      v13 = *(unsigned __int16 *)(v3 + 132);
      v10 = (char *)BaseAddress + 64;
      ++v11;
      BaseAddress = v10;
      v24 = v11;
      v14 = v11 < a2 + v13;
      v12 = (__int16)v10;
    }
    while ( v14 );
    v9 = *(_WORD *)(v3 + 132);
    v15 = *v5;
  }
  result = v15 + (v9 << 6);
  *(_WORD *)(v3 + 132) = a2 + v9;
  return result;
}
