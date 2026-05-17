/*
 * XREFs of RtlCreateQueryDebugBuffer @ 0x1800D7680
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D8F60 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009D3B0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009D470 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18009D5B0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009D5F0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009D9F0 (NtCreateSection.c)
 */

__int64 __fastcall RtlCreateQueryDebugBuffer(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // [rsp+B8h] [rbp+38h]

  v1 = 0x400000LL;
  v4 = 0LL;
  if ( a1 )
    v1 = a1;
  v2 = (v1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v2 <= 0xFFFFFFFF && is_mul_ok(v2, 2uLL) )
  {
    if ( (int)NtCreateSection() >= 0 && (int)ZwMapViewOfSection() >= 0 && (int)ZwAllocateVirtualMemory() >= 0 )
    {
      v4 = v2;
      if ( (int)ZwAllocateVirtualMemory() >= 0 )
      {
        MEMORY[0] = 0LL;
        MEMORY[8] = 0LL;
        MEMORY[0x48] = 208LL;
        MEMORY[0x50] = 208LL;
        MEMORY[0x58] = v2;
        *(_OWORD *)v2 = MEMORY[0];
        *(_OWORD *)(v2 + 16) = MEMORY[0x10];
        *(_OWORD *)(v2 + 32) = MEMORY[0x20];
        *(_OWORD *)(v2 + 48) = MEMORY[0x30];
        *(_OWORD *)(v2 + 64) = MEMORY[0x40];
        *(_OWORD *)(v2 + 80) = MEMORY[0x50];
        *(_OWORD *)(v2 + 96) = MEMORY[0x60];
        *(_OWORD *)(v2 + 112) = MEMORY[0x70];
        *(_OWORD *)(v2 + 128) = MEMORY[0x80];
        *(_OWORD *)(v2 + 144) = MEMORY[0x90];
        *(_OWORD *)(v2 + 160) = MEMORY[0xA0];
        *(_OWORD *)(v2 + 176) = MEMORY[0xB0];
        *(_OWORD *)(v2 + 192) = MEMORY[0xC0];
        *(_QWORD *)(v2 + 8) = v2;
        *(_QWORD *)(v2 + 80) = 208LL;
        *(_QWORD *)v2 = 0LL;
        return 0LL;
      }
    }
    if ( v4 )
      ZwFreeVirtualMemory();
  }
  return 0LL;
}
