/*
 * XREFs of RtlReAllocateHeap @ 0x180023640
 * Callers:
 *     LdrpSetAlternateResourceModuleHandle @ 0x18000F4AC (LdrpSetAlternateResourceModuleHandle.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x18001F3EC (RtlpAllocateUserBlockFromHeap.c)
 *     RtlAllocateHandle @ 0x18004CAB0 (RtlAllocateHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006A7E0 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrAddLoadAsDataTable @ 0x180073110 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800738D0 (LdrRemoveLoadAsDataTable.c)
 *     RtlpMUIEnumerateFolder @ 0x180086DAC (RtlpMUIEnumerateFolder.c)
 *     NtdllpReallocateStringRoutine @ 0x1800D4C74 (NtdllpReallocateStringRoutine.c)
 *     RtlDebugReAllocateHeap @ 0x1800F9B40 (RtlDebugReAllocateHeap.c)
 *     _SafeReallocBlob @ 0x180107E94 (_SafeReallocBlob.c)
 * Callees:
 *     RtlpHpReAllocWithExceptionProtection @ 0x1800236C8 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlpReAllocateHeapInternal @ 0x180023720 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpTagReAllocateHeap @ 0x18009CBDC (RtlpHpTagReAllocateHeap.c)
 *     RtlpLogHeapFailure @ 0x18010E31C (RtlpLogHeapFailure.c)
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
