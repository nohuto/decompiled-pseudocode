/*
 * XREFs of MmAllocateContiguousNodeMemory @ 0x140214190
 * Callers:
 *     HalAllocateCommonBufferExV2 @ 0x1403B64E0 (HalAllocateCommonBufferExV2.c)
 *     HalpInterruptBuildGlobalStartupStub @ 0x1403B8E60 (HalpInterruptBuildGlobalStartupStub.c)
 *     HalpAllocateCR3Root @ 0x1403B9174 (HalpAllocateCR3Root.c)
 *     MmAllocateContiguousMemorySpecifyCacheNode @ 0x1403DE8E0 (MmAllocateContiguousMemorySpecifyCacheNode.c)
 *     HalpDmaAllocateContiguousMemory @ 0x140512B00 (HalpDmaAllocateContiguousMemory.c)
 *     HalpDmaControllerInitializeController @ 0x140519438 (HalpDmaControllerInitializeController.c)
 *     HvlpAllocateOverlayPages @ 0x14054CA0C (HvlpAllocateOverlayPages.c)
 *     IopInitializeInMemoryDumpData @ 0x140554988 (IopInitializeInMemoryDumpData.c)
 *     ViAllocateContiguousMemory @ 0x140A870B0 (ViAllocateContiguousMemory.c)
 *     IommupHvInitializeLibrary @ 0x140B4D2C4 (IommupHvInitializeLibrary.c)
 * Callees:
 *     MiAllocateContiguousMemory @ 0x140214244 (MiAllocateContiguousMemory.c)
 *     MiConvertContiguousMemoryParameters @ 0x14021499C (MiConvertContiguousMemoryParameters.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall MmAllocateContiguousNodeMemory(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebx
  __int128 v8; // [rsp+50h] [rbp-38h] BYREF
  __int128 v9; // [rsp+60h] [rbp-28h]
  __int64 v10; // [rsp+90h] [rbp+8h] BYREF

  v10 = a1;
  v6 = a6;
  v8 = 0LL;
  v9 = 0LL;
  if ( (int)MiConvertContiguousMemoryParameters(a1, a2, a3, a4, a5, a6, (__int64)&v8) < 0 )
    return 0LL;
  else
    return MiAllocateContiguousMemory(
             (unsigned int)&v10,
             v8,
             DWORD2(v8),
             v9,
             DWORD2(v9),
             v6,
             (__int64)&MiSystemPartition,
             1416523587,
             0);
}
