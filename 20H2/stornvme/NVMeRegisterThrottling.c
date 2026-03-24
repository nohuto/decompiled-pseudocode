/*
 * XREFs of NVMeRegisterThrottling @ 0x1C0013BB8
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000C9E4 (NVMeControllerInitPart3.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMeRegisterThrottling @ 0x1C0013BB8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0013BB8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0013BB8: mov     r11, rsp
 * 00000001C0013BBB: mov     [r11+8], rbx
 * 00000001C0013BBF: mov     [r11+10h], rbp
 * 00000001C0013BC3: mov     [r11+18h], rsi
 * 00000001C0013BC7: push    rdi
 * 00000001C0013BC8: sub     rsp, 30h
 * 00000001C0013BCC: and     qword ptr [r11+20h], 0
 * 00000001C0013BD1: mov     rbx, rcx
 * 00000001C0013BD4: movsxd  rdi, edx
 * 00000001C0013BD7: mov     ebp, r8d
 * 00000001C0013BDA: cmp     qword ptr [rcx+rdi*8+0F18h], 0
 * 00000001C0013BE3: jnz     short loc_1C0013C50
 * 00000001C0013BE5: lea     rax, [r11+20h]
 * 00000001C0013BE9: mov     rdx, rcx
 * 00000001C0013BEC: xor     ecx, ecx
 * 00000001C0013BEE: mov     [r11-18h], rax
 * 00000001C0013BF2: mov     r9d, 656D764Eh
 * 00000001C0013BF8: mov     r8d, 20h ; ' '
 * 00000001C0013BFE: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0013C05: nop     dword ptr [rax+rax+00h]
 * 00000001C0013C0A: test    eax, eax
 * 00000001C0013C0C: jnz     short loc_1C0013C55
 * 00000001C0013C0E: mov     rax, [rsp+38h+arg_18]
 * 00000001C0013C13: lea     rcx, ds:0[rbp*4]
 * 00000001C0013C1B: add     rcx, rbp
 * 00000001C0013C1E: add     rcx, rcx
 * 00000001C0013C21: mov     [rax], edi
 * 00000001C0013C23: mov     rax, [rsp+38h+arg_18]
 * 00000001C0013C28: and     qword ptr [rax+8], 0
 * 00000001C0013C2D: mov     rax, [rsp+38h+arg_18]
 * 00000001C0013C32: mov     [rax+10h], rcx
 * 00000001C0013C36: mov     rax, [rsp+38h+arg_18]
 * 00000001C0013C3B: and     dword ptr [rax+18h], 0
 * 00000001C0013C3F: mov     rax, [rsp+38h+arg_18]
 * 00000001C0013C44: mov     [rbx+rdi*8+0F18h], rax
 * 00000001C0013C4C: xor     eax, eax
 * 00000001C0013C4E: jmp     short loc_1C0013C55
 * 00000001C0013C50: mov     eax, 0C1000007h
 * 00000001C0013C55: mov     rbx, [rsp+38h+arg_0]
 * 00000001C0013C5A: mov     rbp, [rsp+38h+arg_8]
 * 00000001C0013C5F: mov     rsi, [rsp+38h+arg_10]
 * 00000001C0013C64: add     rsp, 30h
 * 00000001C0013C68: pop     rdi
 * 00000001C0013C69: retn
 */
