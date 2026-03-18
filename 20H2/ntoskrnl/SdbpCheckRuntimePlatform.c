/*
 * XREFs of SdbpCheckRuntimePlatform @ 0x140967FA0
 * Callers:
 *     <none>
 * Callees:
 *     SdbReadDWORDTag @ 0x140752FC4 (SdbReadDWORDTag.c)
 *     SdbpCheckRuntimePlatformImpl @ 0x140967FF8 (SdbpCheckRuntimePlatformImpl.c)
 */

__int64 __fastcall SdbpCheckRuntimePlatform(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // ebx
  unsigned int DWORDTag; // eax

  v5 = *(_DWORD *)(a2 + 544);
  DWORDTag = SdbReadDWORDTag(a3, a5, 0x7Fu);
  return SdbpCheckRuntimePlatformImpl(a1, *(unsigned int *)(a3 + 1328), v5, DWORDTag);
}
