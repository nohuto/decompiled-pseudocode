/*
 * XREFs of ?Uninitialize@UmfdAllocation@@SGXXZ @ 0xD3A3C
 * Callers:
 *     _UmfdSessionUninitialize@0 @ 0xD39AC (_UmfdSessionUninitialize@0.c)
 *     ?Initialize@UmfdAllocation@@SG_NXZ @ 0xE5FBC (-Initialize@UmfdAllocation@@SG_NXZ.c)
 * Callees:
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SGXPAV12@@Z @ 0xD3A64 (-Destroy@CPointerHashTable@NSInstrumentation@@SGXPAV12@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?Uninitialize@UmfdAllocation@@SGXXZ @ 0xD3A3C
 * Reason: Hex-Rays returned no pseudocode for 0xD3A3C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000D3A3C: mov     ecx, ?s_allocationLookup@UmfdAllocation@@0PAVCPointerHashTable@NSInstrumentation@@A; NSInstrumentation::CPointerHashTable * UmfdAllocation::s_allocationLookup
 * 00000000000D3A42: test    ecx, ecx
 * 00000000000D3A44: jz      short loc_D3A52
 * 00000000000D3A46: call    ?Destroy@CPointerHashTable@NSInstrumentation@@SGXPAV12@@Z; NSInstrumentation::CPointerHashTable::Destroy(NSInstrumentation::CPointerHashTable *)
 * 00000000000D3A4B: and     ?s_allocationLookup@UmfdAllocation@@0PAVCPointerHashTable@NSInstrumentation@@A, 0; NSInstrumentation::CPointerHashTable * UmfdAllocation::s_allocationLookup
 * 00000000000D3A52: mov     eax, ?s_allocationLookupLock@UmfdAllocation@@0PAVCPlatformReaderWriterLock@NSInstrumentation@@A; NSInstrumentation::CPlatformReaderWriterLock * UmfdAllocation::s_allocationLookupLock
 * 00000000000D3A57: test    eax, eax
 * 00000000000D3A59: jz      short locret_D3A62
 * 00000000000D3A5B: push    eax; pv
 * 00000000000D3A5C: call    ds:__imp__EngFreeMem@4; EngFreeMem(x)
 * 00000000000D3A62: retn
 */
