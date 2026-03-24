/*
 * XREFs of NVMeRegisterThrottling @ 0x1C0013C38
 * Callers:
 *     NVMeEnableThrottling @ 0x1C000D38C (NVMeEnableThrottling.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMeRegisterThrottling @ 0x1C0013C38
 * Reason: Hex-Rays returned no pseudocode for 0x1C0013C38
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0013C38: mov     r11, rsp
 * 00000001C0013C3B: mov     [r11+8], rbx
 * 00000001C0013C3F: mov     [r11+10h], rbp
 * 00000001C0013C43: mov     [r11+18h], rsi
 * 00000001C0013C47: push    rdi
 * 00000001C0013C48: sub     rsp, 30h
 * 00000001C0013C4C: and     qword ptr [r11+20h], 0
 * 00000001C0013C51: mov     rbx, rcx
 * 00000001C0013C54: movsxd  rdi, edx
 * 00000001C0013C57: mov     ebp, r8d
 * 00000001C0013C5A: cmp     qword ptr [rcx+rdi*8+0F18h], 0
 * 00000001C0013C63: jnz     short loc_1C0013CD0
 * 00000001C0013C65: lea     rax, [r11+20h]
 * 00000001C0013C69: mov     rdx, rcx
 * 00000001C0013C6C: xor     ecx, ecx
 * 00000001C0013C6E: mov     [r11-18h], rax
 * 00000001C0013C72: mov     r9d, 656D764Eh
 * 00000001C0013C78: mov     r8d, 20h ; ' '
 * 00000001C0013C7E: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0013C85: nop     dword ptr [rax+rax+00h]
 * 00000001C0013C8A: test    eax, eax
 * 00000001C0013C8C: jnz     short loc_1C0013CD5
 * 00000001C0013C8E: mov     rax, [rsp+38h+arg_18]
 * 00000001C0013C93: lea     rcx, ds:0[rbp*4]
 * 00000001C0013C9B: add     rcx, rbp
 * 00000001C0013C9E: add     rcx, rcx
 * 00000001C0013CA1: mov     [rax], edi
 * 00000001C0013CA3: mov     rax, [rsp+38h+arg_18]
 * 00000001C0013CA8: and     qword ptr [rax+8], 0
 * 00000001C0013CAD: mov     rax, [rsp+38h+arg_18]
 * 00000001C0013CB2: mov     [rax+10h], rcx
 * 00000001C0013CB6: mov     rax, [rsp+38h+arg_18]
 * 00000001C0013CBB: and     dword ptr [rax+18h], 0
 * 00000001C0013CBF: mov     rax, [rsp+38h+arg_18]
 * 00000001C0013CC4: mov     [rbx+rdi*8+0F18h], rax
 * 00000001C0013CCC: xor     eax, eax
 * 00000001C0013CCE: jmp     short loc_1C0013CD5
 * 00000001C0013CD0: mov     eax, 0C1000007h
 * 00000001C0013CD5: mov     rbx, [rsp+38h+arg_0]
 * 00000001C0013CDA: mov     rbp, [rsp+38h+arg_8]
 * 00000001C0013CDF: mov     rsi, [rsp+38h+arg_10]
 * 00000001C0013CE4: add     rsp, 30h
 * 00000001C0013CE8: pop     rdi
 * 00000001C0013CE9: retn
 */
