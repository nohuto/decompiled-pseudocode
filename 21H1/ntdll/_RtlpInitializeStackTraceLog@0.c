/*
 * XREFs of _RtlpInitializeStackTraceLog@0 @ 0x4B36EA32
 * Callers:
 *     _RtlpRegisterStackTrace@12 @ 0x4B36F97B (_RtlpRegisterStackTrace@12.c)
 * Callees:
 *     _RtlCreateMemoryBlockLookaside@20 @ 0x4B2AA940 (_RtlCreateMemoryBlockLookaside@20.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlDestroyMemoryBlockLookaside@4 @ 0x4B34D500 (_RtlDestroyMemoryBlockLookaside@4.c)
 *     _RtlAllocateMemoryBlockLookaside@12 @ 0x4B3A2010 (_RtlAllocateMemoryBlockLookaside@12.c)
 */

void __usercall RtlpInitializeStackTraceLog(int a1@<edi>)
{
  PVOID v1; // edi
  _DWORD *v2; // esi
  size_t v3; // [esp-Ch] [ebp-14h]
  PVOID Block; // [esp+0h] [ebp-8h] BYREF
  PVOID MemoryBlockLookaside; // [esp+4h] [ebp-4h] BYREF

  if ( !RtlpHeapStackTraceLog && RtlCreateMemoryBlockLookaside(&MemoryBlockLookaside, 0, 0x10000u, 0xCu, 0xC90u) >= 0 )
  {
    HIDWORD(v3) = a1;
    v1 = MemoryBlockLookaside;
    if ( RtlAllocateMemoryBlockLookaside(MemoryBlockLookaside, 0xC90u, &Block) < 0
      || (LODWORD(v3) = 3216,
          v2 = Block,
          memset(Block, 0, v3),
          *v2 = v1,
          _InterlockedCompareExchange(&RtlpHeapStackTraceLog, (signed __int32)v2, 0)) )
    {
      RtlDestroyMemoryBlockLookaside(v1);
    }
  }
}
