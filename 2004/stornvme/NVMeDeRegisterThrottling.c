/*
 * XREFs of NVMeDeRegisterThrottling @ 0x1C0012C94
 * Callers:
 *     NVMeDisableThrottling @ 0x1C000D32C (NVMeDisableThrottling.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMeDeRegisterThrottling @ 0x1C0012C94
 * Reason: Hex-Rays returned no pseudocode for 0x1C0012C94
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0012C94: mov     [rsp+arg_0], rbx
 * 00000001C0012C99: push    rdi
 * 00000001C0012C9A: sub     rsp, 20h
 * 00000001C0012C9E: movsxd  rdi, edx
 * 00000001C0012CA1: mov     rbx, rcx
 * 00000001C0012CA4: mov     r8, [rcx+rdi*8+0F18h]
 * 00000001C0012CAC: test    r8, r8
 * 00000001C0012CAF: jz      short loc_1C0012CD0
 * 00000001C0012CB1: mov     rdx, rcx
 * 00000001C0012CB4: mov     ecx, 1
 * 00000001C0012CB9: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0012CC0: nop     dword ptr [rax+rax+00h]
 * 00000001C0012CC5: and     qword ptr [rbx+rdi*8+0F18h], 0
 * 00000001C0012CCE: jmp     short loc_1C0012CD5
 * 00000001C0012CD0: mov     eax, 0C1000007h
 * 00000001C0012CD5: mov     rbx, [rsp+28h+arg_0]
 * 00000001C0012CDA: add     rsp, 20h
 * 00000001C0012CDE: pop     rdi
 * 00000001C0012CDF: retn
 */
