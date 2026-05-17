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

int __stdcall RtlReAllocateHeap(int a1, int a2, int a3, int a4)
{
  if ( !a1 )
    RtlpLogHeapFailure(a3, 0, 0, 0);
  if ( *(_DWORD *)(a1 + 8) == -571548178 )
    return RtlpHpReAllocWithExceptionProtection(a3, a4);
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpTagReAllocateHeap(a4, a2);
  return RtlpReAllocateHeapInternal(a3, a4, 0, 0);
}
