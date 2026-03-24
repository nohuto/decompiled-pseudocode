/*
 * XREFs of NVMeCompletionQueueInit @ 0x1C000BD8C
 * Callers:
 *     AdminQueueInitialize @ 0x1C0009B18 (AdminQueueInitialize.c)
 *     IoQueuesInitialize @ 0x1C000B334 (IoQueuesInitialize.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMeCompletionQueueInit @ 0x1C000BD8C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000BD8C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000BD8C: mov     [rsp+arg_0], rbx
 * 00000001C000BD91: mov     [rsp+arg_8], rbp
 * 00000001C000BD96: push    rsi
 * 00000001C000BD97: push    rdi
 * 00000001C000BD98: push    r14
 * 00000001C000BD9A: sub     rsp, 30h
 * 00000001C000BD9E: mov     rax, [rsp+48h+arg_20]
 * 00000001C000BDA3: xor     edi, edi
 * 00000001C000BDA5: movzx   ebp, r8w
 * 00000001C000BDA9: mov     r10, r9
 * 00000001C000BDAC: mov     [rsp+48h+arg_10], edi
 * 00000001C000BDB0: mov     rbx, rdx
 * 00000001C000BDB3: mov     [rdx], r9
 * 00000001C000BDB6: mov     rsi, rcx
 * 00000001C000BDB9: test    rax, rax
 * 00000001C000BDBC: jz      short loc_1C000BDC4
 * 00000001C000BDBE: mov     [rdx+8], rax
 * 00000001C000BDC2: jmp     short loc_1C000BDDE
 * 00000001C000BDC4: lea     r9, [rsp+48h+arg_10]
 * 00000001C000BDC9: mov     r8, r10
 * 00000001C000BDCC: xor     edx, edx
 * 00000001C000BDCE: call    cs:__imp_StorPortGetPhysicalAddress
 * 00000001C000BDD5: nop     dword ptr [rax+rax+00h]
 * 00000001C000BDDA: mov     [rbx+8], rax
 * 00000001C000BDDE: mov     rax, [rsi+98h]
 * 00000001C000BDE5: lea     ecx, ds:1[rbp*2]
 * 00000001C000BDEC: imul    ecx, [rsi+0B0h]
 * 00000001C000BDF3: add     rax, 1000h
 * 00000001C000BDF9: mov     [rbx+0A8h], bp
 * 00000001C000BE00: mov     [rbx+0AAh], edi
 * 00000001C000BE06: mov     [rbx+0B0h], rdi
 * 00000001C000BE0D: mov     [rbx+0B8h], edi
 * 00000001C000BE13: add     rcx, rax
 * 00000001C000BE16: mov     rax, [rsp+48h+arg_28]
 * 00000001C000BE1B: mov     [rbx+0C0h], rax
 * 00000001C000BE22: mov     [rbx+10h], rcx
 * 00000001C000BE26: test    bp, bp
 * 00000001C000BE29: jz      loc_1C000BF40
 * 00000001C000BE2F: cmp     bp, [rsi+11Ch]
 * 00000001C000BE36: ja      loc_1C000BF40
 * 00000001C000BE3C: lea     r14, [rbx+120h]
 * 00000001C000BE43: mov     byte ptr [rbx+0C8h], 1
 * 00000001C000BE4A: mov     [r14], rsi
 * 00000001C000BE4D: lea     r8, [rbx+0D8h]
 * 00000001C000BE54: mov     [rbx+0CCh], edi
 * 00000001C000BE5A: lea     r9, NVMeIoPollingDpcRoutine
 * 00000001C000BE61: mov     [rbx+128h], rbx
 * 00000001C000BE68: mov     rdx, rsi
 * 00000001C000BE6B: mov     eax, [rsi+0EE4h]
 * 00000001C000BE71: mov     ecx, eax
 * 00000001C000BE73: and     ecx, 4
 * 00000001C000BE76: test    al, 2
 * 00000001C000BE78: jz      short loc_1C000BE88
 * 00000001C000BE7A: neg     ecx
 * 00000001C000BE7C: mov     ecx, 1009h
 * 00000001C000BE81: sbb     eax, eax
 * 00000001C000BE83: add     eax, 3
 * 00000001C000BE86: jmp     short loc_1C000BE94
 * 00000001C000BE88: test    ecx, ecx
 * 00000001C000BE8A: mov     eax, edi
 * 00000001C000BE8C: mov     ecx, 100Ah
 * 00000001C000BE91: setnz   al
 * 00000001C000BE94: mov     [rsp+48h+var_20], eax
 * 00000001C000BE98: mov     [rsp+48h+var_28], r14
 * 00000001C000BE9D: call    cs:__imp_StorPortNotification
 * 00000001C000BEA4: nop     dword ptr [rax+rax+00h]
 * 00000001C000BEA9: cmp     [rbx+0CCh], edi
 * 00000001C000BEAF: jz      loc_1C000BF66
 * 00000001C000BEB5: add     rbx, 0D0h
 * 00000001C000BEBC: cmp     [rbx], rdi
 * 00000001C000BEBF: jnz     loc_1C000BF66
 * 00000001C000BEC5: movzx   r8d, word ptr [rsi+0D2h]
 * 00000001C000BECD: mov     r9d, 656D764Eh
 * 00000001C000BED3: shl     r8d, 3
 * 00000001C000BED7: mov     rdx, rsi
 * 00000001C000BEDA: xor     ecx, ecx
 * 00000001C000BEDC: mov     [rsp+48h+var_28], rbx
 * 00000001C000BEE1: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000BEE8: nop     dword ptr [rax+rax+00h]
 * 00000001C000BEED: cmp     [rbx], rdi
 * 00000001C000BEF0: jz      short loc_1C000BF66
 * 00000001C000BEF2: cmp     di, [rsi+0D2h]
 * 00000001C000BEF9: jnb     short loc_1C000BF66
 * 00000001C000BEFB: mov     rax, [rbx]
 * 00000001C000BEFE: lea     r8, NVMeIoPollingTimerExCallback
 * 00000001C000BF05: mov     ecx, edi
 * 00000001C000BF07: mov     r9, r14
 * 00000001C000BF0A: mov     rdx, rsi
 * 00000001C000BF0D: mov     rcx, [rax+rcx*8]
 * 00000001C000BF11: lea     rax, [rsp+48h+arg_20]
 * 00000001C000BF16: mov     [rsp+48h+arg_20], rcx
 * 00000001C000BF1B: mov     ecx, 58h ; 'X'
 * 00000001C000BF20: mov     [rsp+48h+var_28], rax
 * 00000001C000BF25: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000BF2C: nop     dword ptr [rax+rax+00h]
 * 00000001C000BF31: movzx   eax, word ptr [rsi+0D2h]
 * 00000001C000BF38: inc     edi
 * 00000001C000BF3A: cmp     edi, eax
 * 00000001C000BF3C: jb      short loc_1C000BEFB
 * 00000001C000BF3E: jmp     short loc_1C000BF66
 * 00000001C000BF40: lea     r8, [rbx+18h]
 * 00000001C000BF44: mov     [rbx+0C8h], dil
 * 00000001C000BF4B: lea     r9, NVMeCompletionDpcRoutine
 * 00000001C000BF52: mov     rdx, rsi
 * 00000001C000BF55: mov     ecx, 1001h
 * 00000001C000BF5A: call    cs:__imp_StorPortNotification
 * 00000001C000BF61: nop     dword ptr [rax+rax+00h]
 * 00000001C000BF66: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000BF6B: mov     rbp, [rsp+48h+arg_8]
 * 00000001C000BF70: add     rsp, 30h
 * 00000001C000BF74: pop     r14
 * 00000001C000BF76: pop     rdi
 * 00000001C000BF77: pop     rsi
 * 00000001C000BF78: retn
 */
