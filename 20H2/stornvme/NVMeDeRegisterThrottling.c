/*
 * XREFs of NVMeDeRegisterThrottling @ 0x1C0012C14
 * Callers:
 *     NVMeDisableThrottling @ 0x1C000D344 (NVMeDisableThrottling.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMeDeRegisterThrottling @ 0x1C0012C14
 * Reason: Hex-Rays returned no pseudocode for 0x1C0012C14
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0012C14: mov     [rsp+arg_0], rbx
 * 00000001C0012C19: push    rdi
 * 00000001C0012C1A: sub     rsp, 20h
 * 00000001C0012C1E: movsxd  rdi, edx
 * 00000001C0012C21: mov     rbx, rcx
 * 00000001C0012C24: mov     r8, [rcx+rdi*8+0F18h]
 * 00000001C0012C2C: test    r8, r8
 * 00000001C0012C2F: jz      short loc_1C0012C50
 * 00000001C0012C31: mov     rdx, rcx
 * 00000001C0012C34: mov     ecx, 1
 * 00000001C0012C39: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0012C40: nop     dword ptr [rax+rax+00h]
 * 00000001C0012C45: and     qword ptr [rbx+rdi*8+0F18h], 0
 * 00000001C0012C4E: jmp     short loc_1C0012C55
 * 00000001C0012C50: mov     eax, 0C1000007h
 * 00000001C0012C55: mov     rbx, [rsp+28h+arg_0]
 * 00000001C0012C5A: add     rsp, 20h
 * 00000001C0012C5E: pop     rdi
 * 00000001C0012C5F: retn
 */
