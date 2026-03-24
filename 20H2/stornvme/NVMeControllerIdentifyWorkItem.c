/*
 * XREFs of NVMeControllerIdentifyWorkItem @ 0x1C0012B10
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerIdentify @ 0x1C0016A28 (NVMeControllerIdentify.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeControllerIdentifyWorkItem @ 0x1C0012B10
 * Reason: Hex-Rays returned no pseudocode for 0x1C0012B10
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0012B10: mov     [rsp+arg_0], rbx
 * 00000001C0012B15: push    rdi
 * 00000001C0012B16: sub     rsp, 20h
 * 00000001C0012B1A: mov     rdi, r8
 * 00000001C0012B1D: mov     rbx, rcx
 * 00000001C0012B20: call    NVMeControllerIdentify
 * 00000001C0012B25: mov     r8, rdi
 * 00000001C0012B28: mov     rdx, rbx
 * 00000001C0012B2B: mov     ecx, 1Fh
 * 00000001C0012B30: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0012B37: nop     dword ptr [rax+rax+00h]
 * 00000001C0012B3C: mov     rbx, [rsp+28h+arg_0]
 * 00000001C0012B41: add     rsp, 20h
 * 00000001C0012B45: pop     rdi
 * 00000001C0012B46: retn
 */
