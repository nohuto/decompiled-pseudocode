/*
 * XREFs of RtlpAllocateTags @ 0x1800F3600
 * Callers:
 *     RtlCreateTagHeap @ 0x18007D0D0 (RtlCreateTagHeap.c)
 * Callees:
 *     RtlLogStackBackTraceEx @ 0x180011AA0 (RtlLogStackBackTraceEx.c)
 *     ZwAllocateVirtualMemory @ 0x18009D3B0 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall RtlpAllocateTags(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int16 v5; // bp
  __int16 v6; // r15
  __int64 *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // r8
  _WORD *v10; // rdx
  __int16 v11; // r8
  __int16 v12; // ax
  int v13; // ecx
  ULONG_PTR v15[7]; // [rsp+30h] [rbp-38h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+18h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+20h] BYREF

  v2 = RtlpGlobalTagHeap;
  v4 = a1;
  if ( !RtlpGlobalTagHeap )
    return 0LL;
  if ( a1 )
  {
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(RtlpGlobalTagHeap + 152) = -285217025;
    v5 = 2048;
    *(_DWORD *)(v2 + 112) = 1;
    v4 = v2;
  }
  v6 = 0;
  if ( (*(_DWORD *)(v4 + 112) & 0x8000000) != 0 )
    v6 = RtlLogStackBackTraceEx(1u);
  v7 = (__int64 *)(v4 + 232);
  if ( !*(_QWORD *)(v4 + 232) )
  {
    RegionSize = 147384LL;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v4 + 232), 0LL, &RegionSize, 0x2000u, 4u) < 0 )
      return 0LL;
    *(_DWORD *)(v4 + 224) = 134152192;
    ++a2;
  }
  v8 = *(unsigned __int16 *)(v4 + 224);
  if ( a2 > *(unsigned __int16 *)(v4 + 226) - (unsigned int)v8 )
    return 0LL;
  v9 = *v7;
  v10 = (_WORD *)(*v7 + 72 * v8);
  BaseAddress = v10;
  if ( (unsigned int)v8 < (unsigned int)v8 + a2 )
  {
    v11 = (__int16)v10;
    do
    {
      if ( ((v11 + 72) & 0xFFFu) <= 0x48uLL )
      {
        v15[0] = 4096LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, v15, 0x1000u, 4u) < 0 )
          return 0LL;
        v10 = BaseAddress;
      }
      v12 = v8;
      LODWORD(v8) = v8 + 1;
      v10[8] = v5 | v12;
      *((_WORD *)BaseAddress + 9) = v6;
      v13 = *(unsigned __int16 *)(v4 + 224);
      v10 = (char *)BaseAddress + 72;
      BaseAddress = v10;
      v11 = (__int16)v10;
    }
    while ( (unsigned int)v8 < a2 + v13 );
    v9 = *v7;
    LOWORD(v8) = v13;
  }
  *(_WORD *)(v4 + 224) = a2 + v8;
  return v9 + 72LL * (unsigned __int16)v8;
}
