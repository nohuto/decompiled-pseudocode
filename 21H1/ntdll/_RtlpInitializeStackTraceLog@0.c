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

void __stdcall RtlpInitializeStackTraceLog()
{
  int v0; // edi
  _DWORD *v1; // esi
  void *v2; // [esp+0h] [ebp-8h] BYREF
  int v3; // [esp+4h] [ebp-4h] BYREF

  if ( !RtlpHeapStackTraceLog && RtlCreateMemoryBlockLookaside(&v3, 0, 0x10000u, 0xCu, 0xC90u) >= 0 )
  {
    v0 = v3;
    if ( (int)RtlAllocateMemoryBlockLookaside(v3, 3216, &v2) < 0
      || (v1 = v2,
          memset(v2, 0, 0xC90u),
          *v1 = v0,
          _InterlockedCompareExchange(&RtlpHeapStackTraceLog, (signed __int32)v1, 0)) )
    {
      RtlDestroyMemoryBlockLookaside(v0);
    }
  }
}
