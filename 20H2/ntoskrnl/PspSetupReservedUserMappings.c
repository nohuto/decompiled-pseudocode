/*
 * XREFs of PspSetupReservedUserMappings @ 0x1406D6F04
 * Callers:
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     ZwAllocateVirtualMemory @ 0x1403F8470 (ZwAllocateVirtualMemory.c)
 */

__int64 __fastcall PspSetupReservedUserMappings(_KPROCESS *a1, __int64 a2, _QWORD *a3)
{
  int v5; // ebx
  NTSTATUS VirtualMemory; // esi
  unsigned __int64 v8; // rbx
  __int64 v9; // rbp
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp+20h] BYREF

  BaseAddress = 0LL;
  RegionSize = 0LL;
  v5 = *(_DWORD *)(a3[26] + 8LL) & 0x60;
  if ( !v5 && !a3[32] )
    return 0LL;
  VirtualMemory = 0;
  KiStackAttachProcess(a1, 0, a2);
  if ( !v5 )
    goto LABEL_10;
  BaseAddress = (PVOID)4;
  if ( v5 == 32 )
  {
    RegionSize = 1048320LL;
  }
  else if ( v5 == 64 )
  {
    RegionSize = 16776960LL;
  }
  VirtualMemory = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
  if ( VirtualMemory >= 0 )
  {
LABEL_10:
    v8 = 0LL;
    if ( a3[32] )
    {
      v9 = 0LL;
      do
      {
        VirtualMemory = ZwAllocateVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          (PVOID *)(v9 + a3[35]),
                          0LL,
                          (PSIZE_T)(v9 + a3[35] + 8),
                          0x2000u,
                          4u);
        if ( VirtualMemory < 0 )
          break;
        ++v8;
        v9 += 16LL;
      }
      while ( v8 < a3[32] );
    }
  }
  KiUnstackDetachProcess(a2, 0);
  return (unsigned int)VirtualMemory;
}
