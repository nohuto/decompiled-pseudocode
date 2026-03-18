/*
 * XREFs of IopLiveDumpIsUnderMemoryPressure @ 0x14055A6A0
 * Callers:
 *     IoCaptureLiveDump @ 0x14093A0B8 (IoCaptureLiveDump.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14093AAEC (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14093B1CC (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x14093B5F8 (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateIptBuffers @ 0x14093BF5C (IopLiveDumpAllocateIptBuffers.c)
 * Callees:
 *     <none>
 */

bool __fastcall IopLiveDumpIsUnderMemoryPressure(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r9

  v3 = 0;
  if ( a1 && *(_DWORD *)(a1 + 4) || a2 && *(_DWORD *)(a2 + 4) )
    return 1;
  if ( a3 )
    return *(_DWORD *)(a3 + 4) != 0;
  return v3;
}
