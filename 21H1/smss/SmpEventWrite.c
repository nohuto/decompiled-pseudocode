/*
 * XREFs of SmpEventWrite @ 0x140009F80
 * Callers:
 *     SmpInitializeKnownDlls @ 0x140007950 (SmpInitializeKnownDlls.c)
 *     SmpProcessFileRenames @ 0x140009348 (SmpProcessFileRenames.c)
 *     SmpNtSerializeBoot @ 0x140009490 (SmpNtSerializeBoot.c)
 *     SmpLoadDataFromRegistry @ 0x1400094D0 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for SmpEventWrite @ 0x140009F80
 * Reason: Hex-Rays returned no pseudocode for 0x140009F80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140009F80: push    rbx
 * 0000000140009F82: sub     rsp, 20h
 * 0000000140009F86: mov     rbx, rcx
 * 0000000140009F89: mov     rcx, cs:SmpTraceHandle; RegHandle
 * 0000000140009F90: test    rcx, rcx
 * 0000000140009F93: jz      short loc_140009FAC
 * 0000000140009F95: mov     rdx, rbx; EventDescriptor
 * 0000000140009F98: call    cs:__imp_EtwEventEnabled
 * 0000000140009F9F: nop     dword ptr [rax+rax+00h]
 * 0000000140009FA4: test    al, al
 * 0000000140009FA6: jnz     loc_14000FD52
 * 0000000140009FAC: add     rsp, 20h
 * 0000000140009FB0: pop     rbx
 * 0000000140009FB1: retn
 * 000000014000FD52: mov     rcx, cs:SmpTraceHandle
 * 000000014000FD59: xor     r9d, r9d
 * 000000014000FD5C: xor     r8d, r8d
 * 000000014000FD5F: mov     rdx, rbx
 * 000000014000FD62: call    cs:__imp_EtwEventWrite
 * 000000014000FD69: nop     dword ptr [rax+rax+00h]
 * 000000014000FD6E: nop
 * 000000014000FD6F: jmp     loc_140009FAC
 */
