/*
 * XREFs of RtlReAllocateHeap @ 0x180023640
 * Callers:
 *     LdrpSetAlternateResourceModuleHandle @ 0x18000F4AC (LdrpSetAlternateResourceModuleHandle.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x18001F3EC (RtlpAllocateUserBlockFromHeap.c)
 *     RtlAllocateHandle @ 0x180059AC0 (RtlAllocateHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006B810 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrAddLoadAsDataTable @ 0x180074140 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180074900 (LdrRemoveLoadAsDataTable.c)
 *     RtlpMUIEnumerateFolder @ 0x1800873AC (RtlpMUIEnumerateFolder.c)
 *     NtdllpReallocateStringRoutine @ 0x1800D4A28 (NtdllpReallocateStringRoutine.c)
 *     RtlDebugReAllocateHeap @ 0x1800F99D0 (RtlDebugReAllocateHeap.c)
 *     _SafeReallocBlob @ 0x180107D34 (_SafeReallocBlob.c)
 * Callees:
 *     RtlpHpReAllocWithExceptionProtection @ 0x1800236C8 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlpReAllocateHeapInternal @ 0x180023720 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpTagReAllocateHeap @ 0x18009D09C (RtlpHpTagReAllocateHeap.c)
 *     RtlpLogHeapFailure @ 0x18010E1BC (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlReAllocateHeap(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  if ( !a1 )
    RtlpLogHeapFailure(19, 0, a3, 0, 0LL, 0LL);
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    return RtlpHpReAllocWithExceptionProtection(a1, a2, a3, a4);
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpTagReAllocateHeap(a1, a3, a4, a2);
  return RtlpReAllocateHeapInternal(a1, a2, a3, a4, 0LL, 0LL);
}
