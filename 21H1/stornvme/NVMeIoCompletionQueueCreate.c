/*
 * XREFs of NVMeIoCompletionQueueCreate @ 0x1C0018040
 * Callers:
 *     IoQueuesCreation @ 0x1C000AA68 (IoQueuesCreation.c)
 *     IoQueuesCreationAsync @ 0x1C000ABEC (IoQueuesCreationAsync.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C000451C (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0004570 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0005500 (memset.c)
 *     ProcessMultipleCommands @ 0x1C001B4A0 (ProcessMultipleCommands.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BBDC (WaitForCommandCompleteWithCustomTimeout.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeIoCompletionQueueCreate @ 0x1C0018040
 * Reason: Hex-Rays returned no pseudocode for 0x1C0018040
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0018040: mov     [rsp-38h+arg_10], rbx
 * 00000001C0018045: mov     [rsp-38h+arg_8], dl
 * 00000001C0018049: push    rbp
 * 00000001C001804A: push    rsi
 * 00000001C001804B: push    rdi
 * 00000001C001804C: push    r12
 * 00000001C001804E: push    r13
 * 00000001C0018050: push    r14
 * 00000001C0018052: push    r15
 * 00000001C0018054: mov     rbp, rsp
 * 00000001C0018057: sub     rsp, 40h
 * 00000001C001805B: mov     edi, [rcx+80h]
 * 00000001C0018061: xor     r10d, r10d
 * 00000001C0018064: and     edi, 8
 * 00000001C0018067: mov     [rbp+arg_0], r10
 * 00000001C001806B: mov     r13b, r8b
 * 00000001C001806E: mov     [rbp+arg_18], r10
 * 00000001C0018072: mov     bl, dl
 * 00000001C0018074: mov     [rbp+var_10], r10
 * 00000001C0018078: lea     r11d, [r10+1]
 * 00000001C001807C: mov     rsi, rcx
 * 00000001C001807F: mov     r14d, r10d
 * 00000001C0018082: mov     r15d, r10d
 * 00000001C0018085: movzx   r12d, r11w
 * 00000001C0018089: cmp     r11w, [rcx+11Ah]
 * 00000001C0018091: ja      loc_1C001830A
 * 00000001C0018097: test    r13b, r13b
 * 00000001C001809A: jz      loc_1C0018167
 * 00000001C00180A0: lea     rax, [rbp+arg_0]
 * 00000001C00180A4: mov     r9d, 656D764Eh
 * 00000001C00180AA: mov     r8d, 70h ; 'p'
 * 00000001C00180B0: mov     [rsp+40h+var_20], rax
 * 00000001C00180B5: mov     rdx, rsi
 * 00000001C00180B8: xor     ecx, ecx
 * 00000001C00180BA: call    cs:__imp_StorPortExtendedFunction
 * 00000001C00180C1: nop     dword ptr [rax+rax+00h]
 * 00000001C00180C6: mov     rcx, [rbp+arg_0]; void *
 * 00000001C00180CA: test    rcx, rcx
 * 00000001C00180CD: jz      loc_1C0018356
 * 00000001C00180D3: xor     edx, edx; Val
 * 00000001C00180D5: lea     r8d, [rdx+70h]; Size
 * 00000001C00180D9: call    memset
 * 00000001C00180DE: lea     r9, [rbp+var_10]
 * 00000001C00180E2: mov     edx, 2000h
 * 00000001C00180E7: lea     r8, [rbp+arg_18]
 * 00000001C00180EB: mov     rcx, rsi
 * 00000001C00180EE: call    NVMeAllocateDmaBuffer
 * 00000001C00180F3: mov     rcx, [rbp+arg_18]; void *
 * 00000001C00180F7: test    rcx, rcx
 * 00000001C00180FA: jz      loc_1C0018339
 * 00000001C0018100: xor     edx, edx; Val
 * 00000001C0018102: mov     r8d, 10A0h; Size
 * 00000001C0018108: call    memset
 * 00000001C001810D: mov     rax, [rbp+arg_0]
 * 00000001C0018111: xor     r10d, r10d
 * 00000001C0018114: mov     [rax+0Bh], r10b
 * 00000001C0018118: lea     r11d, [r10+1]
 * 00000001C001811C: mov     rax, [rbp+arg_0]
 * 00000001C0018120: mov     dword ptr [rax+14h], 0F000000h
 * 00000001C0018127: mov     rcx, [rbp+arg_0]
 * 00000001C001812B: mov     rax, [rbp+arg_18]
 * 00000001C001812F: mov     [rcx+60h], rax
 * 00000001C0018133: mov     rcx, [rbp+arg_0]
 * 00000001C0018137: mov     rax, [rbp+arg_18]
 * 00000001C001813B: mov     [rcx+40h], rax
 * 00000001C001813F: mov     rcx, [rbp+arg_0]
 * 00000001C0018143: mov     rax, [rbp+var_10]
 * 00000001C0018147: mov     [rcx+68h], rax
 * 00000001C001814B: mov     rax, [rbp+arg_0]
 * 00000001C001814F: mov     [rax], r11d
 * 00000001C0018152: mov     rax, [rbp+arg_18]
 * 00000001C0018156: mov     rcx, [rbp+arg_0]
 * 00000001C001815A: mov     [rax+1088h], rcx
 * 00000001C0018161: mov     rax, [rbp+arg_18]
 * 00000001C0018165: jmp     short loc_1C00181B2
 * 00000001C0018167: lea     rbx, [rsi+338h]
 * 00000001C001816E: xor     edx, edx; Val
 * 00000001C0018170: mov     rcx, [rbx+60h]; void *
 * 00000001C0018174: mov     r8d, 10A0h; Size
 * 00000001C001817A: mov     [rbx+0Bh], r10b
 * 00000001C001817E: call    memset
 * 00000001C0018183: mov     rax, [rbx+60h]
 * 00000001C0018187: xor     r10d, r10d
 * 00000001C001818A: mov     [rax+1088h], r10
 * 00000001C0018191: lea     r11d, [r10+1]
 * 00000001C0018195: mov     rax, [rbx+60h]
 * 00000001C0018199: mov     [rbx+40h], rax
 * 00000001C001819D: mov     [rbx], r11d
 * 00000001C00181A0: mov     rax, [rsi+398h]
 * 00000001C00181A7: mov     [rbp+arg_0], rbx
 * 00000001C00181AB: mov     bl, [rbp+arg_8]
 * 00000001C00181AE: mov     [rbp+arg_18], rax
 * 00000001C00181B2: or      [rax+109Dh], r11b
 * 00000001C00181B9: mov     rax, [rbp+arg_18]
 * 00000001C00181BD: and     byte ptr [rax+109Dh], 0FDh
 * 00000001C00181C4: mov     rax, [rbp+arg_18]
 * 00000001C00181C8: mov     [rax+1094h], r10w
 * 00000001C00181D0: mov     rdx, [rbp+arg_18]
 * 00000001C00181D4: mov     r9, [rsi+308h]
 * 00000001C00181DB: movzx   eax, r12w
 * 00000001C00181DF: imul    r8, rax, 158h
 * 00000001C00181E6: mov     byte ptr [rdx+1000h], 5
 * 00000001C00181ED: mov     rax, [rsi+308h]
 * 00000001C00181F4: mov     rcx, [r8+rax-150h]
 * 00000001C00181FC: mov     [rdx+1018h], rcx
 * 00000001C0018203: mov     [rdx+1028h], r12w
 * 00000001C001820B: movzx   eax, word ptr [rsi+116h]
 * 00000001C0018212: sub     ax, r11w
 * 00000001C0018216: mov     [rdx+102Ah], ax
 * 00000001C001821D: mov     eax, [rdx+102Ch]
 * 00000001C0018223: or      eax, r11d
 * 00000001C0018226: mov     [rdx+102Ch], eax
 * 00000001C001822C: cmp     [rsi+10h], r10b
 * 00000001C0018230: jnz     short loc_1C0018241
 * 00000001C0018232: cmp     [r8+r9-90h], r10b
 * 00000001C001823A: jnz     short loc_1C0018241
 * 00000001C001823C: or      eax, 2
 * 00000001C001823F: jmp     short loc_1C0018244
 * 00000001C0018241: and     eax, 0FFFFFFFDh
 * 00000001C0018244: mov     [rdx+102Ch], eax
 * 00000001C001824A: mov     rax, [rsi+308h]
 * 00000001C0018251: movzx   ecx, word ptr [r8+rax-0A8h]
 * 00000001C001825A: mov     [rdx+102Eh], cx
 * 00000001C0018261: test    r13b, r13b
 * 00000001C0018264: jnz     short loc_1C001826A
 * 00000001C0018266: test    edi, edi
 * 00000001C0018268: jz      short loc_1C0018280
 * 00000001C001826A: mov     rax, [rbp+arg_18]
 * 00000001C001826E: lea     rcx, NVMeIoCompletionQueueCreateCompletion
 * 00000001C0018275: mov     [rax+1080h], rcx
 * 00000001C001827C: test    edi, edi
 * 00000001C001827E: jnz     short loc_1C00182CA
 * 00000001C0018280: mov     rdx, [rbp+arg_0]
 * 00000001C0018284: mov     rcx, rsi
 * 00000001C0018287: add     rdx, 8
 * 00000001C001828B: call    ProcessCommand
 * 00000001C0018290: xor     r10d, r10d
 * 00000001C0018293: test    r13b, r13b
 * 00000001C0018296: jnz     short loc_1C00182F2
 * 00000001C0018298: mov     rdx, [rbp+arg_0]
 * 00000001C001829C: mov     r9d, 2710h
 * 00000001C00182A2: add     rdx, 8
 * 00000001C00182A6: mov     r8b, bl
 * 00000001C00182A9: mov     rcx, rsi; int
 * 00000001C00182AC: call    WaitForCommandCompleteWithCustomTimeout
 * 00000001C00182B1: mov     rax, [rbp+arg_0]
 * 00000001C00182B5: mov     r11d, 1
 * 00000001C00182BB: cmp     [rax+0Bh], r11b
 * 00000001C00182BF: jnz     loc_1C00183A2
 * 00000001C00182C5: xor     r10d, r10d
 * 00000001C00182C8: jmp     short loc_1C00182F8
 * 00000001C00182CA: test    r15, r15
 * 00000001C00182CD: jz      short loc_1C00182E5
 * 00000001C00182CF: mov     rax, [rbp+arg_0]
 * 00000001C00182D3: add     rax, 8
 * 00000001C00182D7: mov     [r15+28h], rax
 * 00000001C00182DB: mov     r15, [rbp+arg_0]
 * 00000001C00182DF: add     r15, 8
 * 00000001C00182E3: jmp     short loc_1C00182F8
 * 00000001C00182E5: mov     r14, [rbp+arg_0]
 * 00000001C00182E9: add     r14, 8
 * 00000001C00182ED: mov     r15, r14
 * 00000001C00182F0: jmp     short loc_1C00182F8
 * 00000001C00182F2: mov     r11d, 1
 * 00000001C00182F8: add     r12w, r11w
 * 00000001C00182FC: cmp     r12w, [rsi+11Ah]
 * 00000001C0018304: jbe     loc_1C0018097
 * 00000001C001830A: test    edi, edi
 * 00000001C001830C: jz      short loc_1C001831E
 * 00000001C001830E: test    r14, r14
 * 00000001C0018311: jz      short loc_1C001831E
 * 00000001C0018313: mov     rdx, r14
 * 00000001C0018316: mov     rcx, rsi
 * 00000001C0018319: call    ProcessMultipleCommands
 * 00000001C001831E: mov     al, 1
 * 00000001C0018320: mov     rbx, [rsp+40h+arg_10]
 * 00000001C0018328: add     rsp, 40h
 * 00000001C001832C: pop     r15
 * 00000001C001832E: pop     r14
 * 00000001C0018330: pop     r13
 * 00000001C0018332: pop     r12
 * 00000001C0018334: pop     rdi
 * 00000001C0018335: pop     rsi
 * 00000001C0018336: pop     rbp
 * 00000001C0018337: retn
 * 00000001C0018339: mov     r8, [rbp+arg_0]
 * 00000001C001833D: test    r8, r8
 * 00000001C0018340: jz      short loc_1C0018356
 * 00000001C0018342: mov     rdx, rsi
 * 00000001C0018345: mov     ecx, 1
 * 00000001C001834A: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0018351: nop     dword ptr [rax+rax+00h]
 * 00000001C0018356: test    r14, r14
 * 00000001C0018359: jz      short loc_1C00183A2
 * 00000001C001835B: mov     rcx, r14
 * 00000001C001835E: call    GetSrbExtension
 * 00000001C0018363: mov     rdi, [r14+28h]
 * 00000001C0018367: lea     r8, [r14+38h]
 * 00000001C001836B: mov     edx, 2000h
 * 00000001C0018370: mov     rcx, rsi
 * 00000001C0018373: mov     rbx, [rax+1088h]
 * 00000001C001837A: mov     r9, [rbx+68h]
 * 00000001C001837E: call    NVMeFreeDmaBuffer
 * 00000001C0018383: mov     r8, rbx
 * 00000001C0018386: mov     rdx, rsi
 * 00000001C0018389: mov     ecx, 1
 * 00000001C001838E: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0018395: nop     dword ptr [rax+rax+00h]
 * 00000001C001839A: mov     r14, rdi
 * 00000001C001839D: test    rdi, rdi
 * 00000001C00183A0: jnz     short loc_1C001835B
 * 00000001C00183A2: xor     al, al
 * 00000001C00183A4: jmp     loc_1C0018320
 */
