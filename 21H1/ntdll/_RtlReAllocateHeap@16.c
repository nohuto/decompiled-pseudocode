/*
 * XREFs of _RtlReAllocateHeap@16 @ 0x4B2C26C0
 * Callers:
 *     _LdrRemoveLoadAsDataTable@16 @ 0x4B2B8980 (_LdrRemoveLoadAsDataTable@16.c)
 *     _LdrAddLoadAsDataTable@20 @ 0x4B2B8AD0 (_LdrAddLoadAsDataTable@20.c)
 *     _LdrpSetAlternateResourceModuleHandle@32 @ 0x4B2B9366 (_LdrpSetAlternateResourceModuleHandle@32.c)
 *     _RtlpAllocateUserBlockFromHeap@16 @ 0x4B2C01B1 (_RtlpAllocateUserBlockFromHeap@16.c)
 *     _LdrUnloadAlternateResourceModuleEx@8 @ 0x4B2DA360 (_LdrUnloadAlternateResourceModuleEx@8.c)
 *     _RtlAllocateHandle@8 @ 0x4B2E0600 (_RtlAllocateHandle@8.c)
 *     _NtdllpReallocateStringRoutine@8 @ 0x4B333B47 (_NtdllpReallocateStringRoutine@8.c)
 *     _RtlpMUIEnumerateFolder@12 @ 0x4B354614 (_RtlpMUIEnumerateFolder@12.c)
 *     _RtlDebugReAllocateHeap@16 @ 0x4B35FC56 (_RtlDebugReAllocateHeap@16.c)
 *     _SafeReallocBlob @ 0x4B36D0C0 (_SafeReallocBlob.c)
 * Callees:
 *     _RtlpReAllocateHeapInternal@24 @ 0x4B2C2710 (_RtlpReAllocateHeapInternal@24.c)
 *     _RtlpHpReAllocWithExceptionProtection@16 @ 0x4B34D46A (_RtlpHpReAllocWithExceptionProtection@16.c)
 *     _RtlpHpTagReAllocateHeap@16 @ 0x4B370621 (_RtlpHpTagReAllocateHeap@16.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

PVOID __cdecl RtlReAllocateHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress, SIZE_T Size)
{
  if ( !HeapHandle )
    RtlpLogHeapFailure(BaseAddress, 0, 0, 0);
  if ( *((_DWORD *)HeapHandle + 2) == -571548178 )
    return (PVOID)RtlpHpReAllocWithExceptionProtection(BaseAddress, Size);
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return (PVOID)RtlpHpTagReAllocateHeap(Size, Flags);
  return (PVOID)RtlpReAllocateHeapInternal(HeapHandle, (int)BaseAddress, Size, 0, 0);
}
