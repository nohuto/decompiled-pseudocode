/*
 * XREFs of NVMeCompletionQueueInit @ 0x1C000BD3C
 * Callers:
 *     AdminQueueInitialize @ 0x1C0009AC8 (AdminQueueInitialize.c)
 *     IoQueuesInitialize @ 0x1C000B2E4 (IoQueuesInitialize.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMeCompletionQueueInit @ 0x1C000BD3C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000BD3C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000BD3C: mov     [rsp+arg_0], rbx
 * 00000001C000BD41: mov     [rsp+arg_8], rbp
 * 00000001C000BD46: push    rsi
 * 00000001C000BD47: push    rdi
 * 00000001C000BD48: push    r14
 * 00000001C000BD4A: sub     rsp, 30h
 * 00000001C000BD4E: mov     rax, [rsp+48h+arg_20]
 * 00000001C000BD53: xor     edi, edi
 * 00000001C000BD55: movzx   ebp, r8w
 * 00000001C000BD59: mov     r10, r9
 * 00000001C000BD5C: mov     [rsp+48h+arg_10], edi
 * 00000001C000BD60: mov     rbx, rdx
 * 00000001C000BD63: mov     [rdx], r9
 * 00000001C000BD66: mov     rsi, rcx
 * 00000001C000BD69: test    rax, rax
 * 00000001C000BD6C: jz      short loc_1C000BD74
 * 00000001C000BD6E: mov     [rdx+8], rax
 * 00000001C000BD72: jmp     short loc_1C000BD8E
 * 00000001C000BD74: lea     r9, [rsp+48h+arg_10]
 * 00000001C000BD79: mov     r8, r10
 * 00000001C000BD7C: xor     edx, edx
 * 00000001C000BD7E: call    cs:__imp_StorPortGetPhysicalAddress
 * 00000001C000BD85: nop     dword ptr [rax+rax+00h]
 * 00000001C000BD8A: mov     [rbx+8], rax
 * 00000001C000BD8E: mov     rax, [rsi+98h]
 * 00000001C000BD95: lea     ecx, ds:1[rbp*2]
 * 00000001C000BD9C: imul    ecx, [rsi+0B0h]
 * 00000001C000BDA3: add     rax, 1000h
 * 00000001C000BDA9: mov     [rbx+0A8h], bp
 * 00000001C000BDB0: mov     [rbx+0AAh], edi
 * 00000001C000BDB6: mov     [rbx+0B0h], rdi
 * 00000001C000BDBD: mov     [rbx+0B8h], edi
 * 00000001C000BDC3: add     rcx, rax
 * 00000001C000BDC6: mov     rax, [rsp+48h+arg_28]
 * 00000001C000BDCB: mov     [rbx+0C0h], rax
 * 00000001C000BDD2: mov     [rbx+10h], rcx
 * 00000001C000BDD6: test    bp, bp
 * 00000001C000BDD9: jz      loc_1C000BEF0
 * 00000001C000BDDF: cmp     bp, [rsi+11Ch]
 * 00000001C000BDE6: ja      loc_1C000BEF0
 * 00000001C000BDEC: lea     r14, [rbx+120h]
 * 00000001C000BDF3: mov     byte ptr [rbx+0C8h], 1
 * 00000001C000BDFA: mov     [r14], rsi
 * 00000001C000BDFD: lea     r8, [rbx+0D8h]
 * 00000001C000BE04: mov     [rbx+0CCh], edi
 * 00000001C000BE0A: lea     r9, NVMeIoPollingDpcRoutine
 * 00000001C000BE11: mov     [rbx+128h], rbx
 * 00000001C000BE18: mov     rdx, rsi
 * 00000001C000BE1B: mov     eax, [rsi+0EE4h]
 * 00000001C000BE21: mov     ecx, eax
 * 00000001C000BE23: and     ecx, 4
 * 00000001C000BE26: test    al, 2
 * 00000001C000BE28: jz      short loc_1C000BE38
 * 00000001C000BE2A: neg     ecx
 * 00000001C000BE2C: mov     ecx, 1009h
 * 00000001C000BE31: sbb     eax, eax
 * 00000001C000BE33: add     eax, 3
 * 00000001C000BE36: jmp     short loc_1C000BE44
 * 00000001C000BE38: test    ecx, ecx
 * 00000001C000BE3A: mov     eax, edi
 * 00000001C000BE3C: mov     ecx, 100Ah
 * 00000001C000BE41: setnz   al
 * 00000001C000BE44: mov     [rsp+48h+var_20], eax
 * 00000001C000BE48: mov     [rsp+48h+var_28], r14
 * 00000001C000BE4D: call    cs:__imp_StorPortNotification
 * 00000001C000BE54: nop     dword ptr [rax+rax+00h]
 * 00000001C000BE59: cmp     [rbx+0CCh], edi
 * 00000001C000BE5F: jz      loc_1C000BF16
 * 00000001C000BE65: add     rbx, 0D0h
 * 00000001C000BE6C: cmp     [rbx], rdi
 * 00000001C000BE6F: jnz     loc_1C000BF16
 * 00000001C000BE75: movzx   r8d, word ptr [rsi+0D2h]
 * 00000001C000BE7D: mov     r9d, 656D764Eh
 * 00000001C000BE83: shl     r8d, 3
 * 00000001C000BE87: mov     rdx, rsi
 * 00000001C000BE8A: xor     ecx, ecx
 * 00000001C000BE8C: mov     [rsp+48h+var_28], rbx
 * 00000001C000BE91: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000BE98: nop     dword ptr [rax+rax+00h]
 * 00000001C000BE9D: cmp     [rbx], rdi
 * 00000001C000BEA0: jz      short loc_1C000BF16
 * 00000001C000BEA2: cmp     di, [rsi+0D2h]
 * 00000001C000BEA9: jnb     short loc_1C000BF16
 * 00000001C000BEAB: mov     rax, [rbx]
 * 00000001C000BEAE: lea     r8, NVMeIoPollingTimerExCallback
 * 00000001C000BEB5: mov     ecx, edi
 * 00000001C000BEB7: mov     r9, r14
 * 00000001C000BEBA: mov     rdx, rsi
 * 00000001C000BEBD: mov     rcx, [rax+rcx*8]
 * 00000001C000BEC1: lea     rax, [rsp+48h+arg_20]
 * 00000001C000BEC6: mov     [rsp+48h+arg_20], rcx
 * 00000001C000BECB: mov     ecx, 58h ; 'X'
 * 00000001C000BED0: mov     [rsp+48h+var_28], rax
 * 00000001C000BED5: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000BEDC: nop     dword ptr [rax+rax+00h]
 * 00000001C000BEE1: movzx   eax, word ptr [rsi+0D2h]
 * 00000001C000BEE8: inc     edi
 * 00000001C000BEEA: cmp     edi, eax
 * 00000001C000BEEC: jb      short loc_1C000BEAB
 * 00000001C000BEEE: jmp     short loc_1C000BF16
 * 00000001C000BEF0: lea     r8, [rbx+18h]
 * 00000001C000BEF4: mov     [rbx+0C8h], dil
 * 00000001C000BEFB: lea     r9, NVMeCompletionDpcRoutine
 * 00000001C000BF02: mov     rdx, rsi
 * 00000001C000BF05: mov     ecx, 1001h
 * 00000001C000BF0A: call    cs:__imp_StorPortNotification
 * 00000001C000BF11: nop     dword ptr [rax+rax+00h]
 * 00000001C000BF16: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000BF1B: mov     rbp, [rsp+48h+arg_8]
 * 00000001C000BF20: add     rsp, 30h
 * 00000001C000BF24: pop     r14
 * 00000001C000BF26: pop     rdi
 * 00000001C000BF27: pop     rsi
 * 00000001C000BF28: retn
 */
