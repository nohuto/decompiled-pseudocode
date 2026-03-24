/*
 * XREFs of ?Initialize@UmfdAllocation@@SG_NXZ @ 0xE5FBC
 * Callers:
 *     _UmfdSessionInitialize@0 @ 0xE5DB0 (_UmfdSessionInitialize@0.c)
 * Callees:
 *     ?Uninitialize@UmfdAllocation@@SGXXZ @ 0xD3A3C (-Uninitialize@UmfdAllocation@@SGXXZ.c)
 *     ?Create@CPointerHashTable@NSInstrumentation@@SGPAV12@_N@Z @ 0xE5FF2 (-Create@CPointerHashTable@NSInstrumentation@@SGPAV12@_N@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?Initialize@UmfdAllocation@@SG_NXZ @ 0xE5FBC
 * Reason: Hex-Rays returned no pseudocode for 0xE5FBC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000E5FBC: xor     cl, cl
 * 00000000000E5FBE: call    ?Create@CPointerHashTable@NSInstrumentation@@SGPAV12@_N@Z; NSInstrumentation::CPointerHashTable::Create(bool)
 * 00000000000E5FC3: mov     ?s_allocationLookup@UmfdAllocation@@0PAVCPointerHashTable@NSInstrumentation@@A, eax; NSInstrumentation::CPointerHashTable * UmfdAllocation::s_allocationLookup
 * 00000000000E5FC8: test    eax, eax
 * 00000000000E5FCA: jz      short loc_E5FEF
 * 00000000000E5FCC: push    61646647h; ulTag
 * 00000000000E5FD1: push    4; cjMemSize
 * 00000000000E5FD3: push    0; fl
 * 00000000000E5FD5: call    ds:__imp__EngAllocMem@12; EngAllocMem(x,x,x)
 * 00000000000E5FDB: mov     ?s_allocationLookupLock@UmfdAllocation@@0PAVCPlatformReaderWriterLock@NSInstrumentation@@A, eax; NSInstrumentation::CPlatformReaderWriterLock * UmfdAllocation::s_allocationLookupLock
 * 00000000000E5FE0: test    eax, eax
 * 00000000000E5FE2: jz      short loc_E5FEA
 * 00000000000E5FE4: and     dword ptr [eax], 0
 * 00000000000E5FE7: mov     al, 1
 * 00000000000E5FE9: retn
 * 00000000000E5FEA: call    ?Uninitialize@UmfdAllocation@@SGXXZ; UmfdAllocation::Uninitialize(void)
 * 00000000000E5FEF: xor     al, al
 * 00000000000E5FF1: retn
 */
