/*
 * XREFs of NVMeControllerIdentifyWorkItem @ 0x1C0012B90
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerIdentify @ 0x1C0016AA8 (NVMeControllerIdentify.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeControllerIdentifyWorkItem @ 0x1C0012B90
 * Reason: Hex-Rays returned no pseudocode for 0x1C0012B90
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0012B90: mov     [rsp+arg_0], rbx
 * 00000001C0012B95: push    rdi
 * 00000001C0012B96: sub     rsp, 20h
 * 00000001C0012B9A: mov     rdi, r8
 * 00000001C0012B9D: mov     rbx, rcx
 * 00000001C0012BA0: call    NVMeControllerIdentify
 * 00000001C0012BA5: mov     r8, rdi
 * 00000001C0012BA8: mov     rdx, rbx
 * 00000001C0012BAB: mov     ecx, 1Fh
 * 00000001C0012BB0: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0012BB7: nop     dword ptr [rax+rax+00h]
 * 00000001C0012BBC: mov     rbx, [rsp+28h+arg_0]
 * 00000001C0012BC1: add     rsp, 20h
 * 00000001C0012BC5: pop     rdi
 * 00000001C0012BC6: retn
 */
