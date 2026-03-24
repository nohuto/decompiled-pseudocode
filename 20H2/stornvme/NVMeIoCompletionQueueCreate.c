/*
 * XREFs of NVMeIoCompletionQueueCreate @ 0x1C0017FB0
 * Callers:
 *     IoQueuesCreation @ 0x1C000AA18 (IoQueuesCreation.c)
 *     IoQueuesCreationAsync @ 0x1C000AB9C (IoQueuesCreationAsync.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C000451C (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000456C (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C00054C0 (memset.c)
 *     ProcessMultipleCommands @ 0x1C001B3D0 (ProcessMultipleCommands.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BB0C (WaitForCommandCompleteWithCustomTimeout.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeIoCompletionQueueCreate @ 0x1C0017FB0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0017FB0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0017FB0: mov     [rsp-38h+arg_10], rbx
 * 00000001C0017FB5: mov     [rsp-38h+arg_8], dl
 * 00000001C0017FB9: push    rbp
 * 00000001C0017FBA: push    rsi
 * 00000001C0017FBB: push    rdi
 * 00000001C0017FBC: push    r12
 * 00000001C0017FBE: push    r13
 * 00000001C0017FC0: push    r14
 * 00000001C0017FC2: push    r15
 * 00000001C0017FC4: mov     rbp, rsp
 * 00000001C0017FC7: sub     rsp, 40h
 * 00000001C0017FCB: mov     edi, [rcx+80h]
 * 00000001C0017FD1: xor     r10d, r10d
 * 00000001C0017FD4: and     edi, 8
 * 00000001C0017FD7: mov     [rbp+arg_0], r10
 * 00000001C0017FDB: mov     r13b, r8b
 * 00000001C0017FDE: mov     [rbp+arg_18], r10
 * 00000001C0017FE2: mov     bl, dl
 * 00000001C0017FE4: mov     [rbp+var_10], r10
 * 00000001C0017FE8: lea     r11d, [r10+1]
 * 00000001C0017FEC: mov     rsi, rcx
 * 00000001C0017FEF: mov     r14d, r10d
 * 00000001C0017FF2: mov     r15d, r10d
 * 00000001C0017FF5: movzx   r12d, r11w
 * 00000001C0017FF9: cmp     r11w, [rcx+11Ah]
 * 00000001C0018001: ja      loc_1C001826E
 * 00000001C0018007: test    r13b, r13b
 * 00000001C001800A: jz      loc_1C00180CB
 * 00000001C0018010: lea     rax, [rbp+arg_0]
 * 00000001C0018014: mov     r9d, 656D764Eh
 * 00000001C001801A: mov     r8d, 70h ; 'p'
 * 00000001C0018020: mov     [rsp+40h+var_20], rax
 * 00000001C0018025: mov     rdx, rsi
 * 00000001C0018028: xor     ecx, ecx
 * 00000001C001802A: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0018031: nop     dword ptr [rax+rax+00h]
 * 00000001C0018036: mov     rcx, [rbp+arg_0]; void *
 * 00000001C001803A: test    rcx, rcx
 * 00000001C001803D: jz      loc_1C00182BA
 * 00000001C0018043: xor     edx, edx; Val
 * 00000001C0018045: lea     r8d, [rdx+70h]; Size
 * 00000001C0018049: call    memset
 * 00000001C001804E: lea     r9, [rbp+var_10]
 * 00000001C0018052: mov     edx, 2000h
 * 00000001C0018057: lea     r8, [rbp+arg_18]
 * 00000001C001805B: mov     rcx, rsi
 * 00000001C001805E: call    NVMeAllocateDmaBuffer
 * 00000001C0018063: mov     rcx, [rbp+arg_18]; void *
 * 00000001C0018067: test    rcx, rcx
 * 00000001C001806A: jz      loc_1C001829D
 * 00000001C0018070: xor     edx, edx; Val
 * 00000001C0018072: mov     r8d, 10A0h; Size
 * 00000001C0018078: call    memset
 * 00000001C001807D: mov     rax, [rbp+arg_0]
 * 00000001C0018081: xor     r10d, r10d
 * 00000001C0018084: mov     [rax+0Bh], r10b
 * 00000001C0018088: lea     r11d, [r10+1]
 * 00000001C001808C: mov     rax, [rbp+arg_0]
 * 00000001C0018090: mov     dword ptr [rax+14h], 0F000000h
 * 00000001C0018097: mov     rcx, [rbp+arg_0]
 * 00000001C001809B: mov     rax, [rbp+arg_18]
 * 00000001C001809F: mov     [rcx+60h], rax
 * 00000001C00180A3: mov     rcx, [rbp+arg_0]
 * 00000001C00180A7: mov     rax, [rbp+arg_18]
 * 00000001C00180AB: mov     [rcx+40h], rax
 * 00000001C00180AF: mov     rax, [rbp+arg_0]
 * 00000001C00180B3: mov     [rax], r11d
 * 00000001C00180B6: mov     rax, [rbp+arg_18]
 * 00000001C00180BA: mov     rcx, [rbp+arg_0]
 * 00000001C00180BE: mov     [rax+1088h], rcx
 * 00000001C00180C5: mov     rax, [rbp+arg_18]
 * 00000001C00180C9: jmp     short loc_1C0018116
 * 00000001C00180CB: lea     rbx, [rsi+338h]
 * 00000001C00180D2: xor     edx, edx; Val
 * 00000001C00180D4: mov     rcx, [rbx+60h]; void *
 * 00000001C00180D8: mov     r8d, 10A0h; Size
 * 00000001C00180DE: mov     [rbx+0Bh], r10b
 * 00000001C00180E2: call    memset
 * 00000001C00180E7: mov     rax, [rbx+60h]
 * 00000001C00180EB: xor     r10d, r10d
 * 00000001C00180EE: mov     [rax+1088h], r10
 * 00000001C00180F5: lea     r11d, [r10+1]
 * 00000001C00180F9: mov     rax, [rbx+60h]
 * 00000001C00180FD: mov     [rbx+40h], rax
 * 00000001C0018101: mov     [rbx], r11d
 * 00000001C0018104: mov     rax, [rsi+398h]
 * 00000001C001810B: mov     [rbp+arg_0], rbx
 * 00000001C001810F: mov     bl, [rbp+arg_8]
 * 00000001C0018112: mov     [rbp+arg_18], rax
 * 00000001C0018116: or      [rax+109Dh], r11b
 * 00000001C001811D: mov     rax, [rbp+arg_18]
 * 00000001C0018121: and     byte ptr [rax+109Dh], 0FDh
 * 00000001C0018128: mov     rax, [rbp+arg_18]
 * 00000001C001812C: mov     [rax+1094h], r10w
 * 00000001C0018134: mov     rdx, [rbp+arg_18]
 * 00000001C0018138: mov     r9, [rsi+308h]
 * 00000001C001813F: movzx   eax, r12w
 * 00000001C0018143: imul    r8, rax, 158h
 * 00000001C001814A: mov     byte ptr [rdx+1000h], 5
 * 00000001C0018151: mov     rax, [rsi+308h]
 * 00000001C0018158: mov     rcx, [rax+r8-150h]
 * 00000001C0018160: mov     [rdx+1018h], rcx
 * 00000001C0018167: mov     [rdx+1028h], r12w
 * 00000001C001816F: movzx   eax, word ptr [rsi+116h]
 * 00000001C0018176: sub     ax, r11w
 * 00000001C001817A: mov     [rdx+102Ah], ax
 * 00000001C0018181: mov     eax, [rdx+102Ch]
 * 00000001C0018187: or      eax, r11d
 * 00000001C001818A: mov     [rdx+102Ch], eax
 * 00000001C0018190: cmp     [rsi+10h], r10b
 * 00000001C0018194: jnz     short loc_1C00181A5
 * 00000001C0018196: cmp     [r8+r9-90h], r10b
 * 00000001C001819E: jnz     short loc_1C00181A5
 * 00000001C00181A0: or      eax, 2
 * 00000001C00181A3: jmp     short loc_1C00181A8
 * 00000001C00181A5: and     eax, 0FFFFFFFDh
 * 00000001C00181A8: mov     [rdx+102Ch], eax
 * 00000001C00181AE: mov     rax, [rsi+308h]
 * 00000001C00181B5: movzx   ecx, word ptr [rax+r8-0A8h]
 * 00000001C00181BE: mov     [rdx+102Eh], cx
 * 00000001C00181C5: test    r13b, r13b
 * 00000001C00181C8: jnz     short loc_1C00181CE
 * 00000001C00181CA: test    edi, edi
 * 00000001C00181CC: jz      short loc_1C00181E4
 * 00000001C00181CE: mov     rax, [rbp+arg_18]
 * 00000001C00181D2: lea     rcx, NVMeIoCompletionQueueCreateCompletion
 * 00000001C00181D9: mov     [rax+1080h], rcx
 * 00000001C00181E0: test    edi, edi
 * 00000001C00181E2: jnz     short loc_1C001822E
 * 00000001C00181E4: mov     rdx, [rbp+arg_0]
 * 00000001C00181E8: mov     rcx, rsi
 * 00000001C00181EB: add     rdx, 8
 * 00000001C00181EF: call    ProcessCommand
 * 00000001C00181F4: xor     r10d, r10d
 * 00000001C00181F7: test    r13b, r13b
 * 00000001C00181FA: jnz     short loc_1C0018256
 * 00000001C00181FC: mov     rdx, [rbp+arg_0]
 * 00000001C0018200: mov     r9d, 2710h
 * 00000001C0018206: add     rdx, 8
 * 00000001C001820A: mov     r8b, bl
 * 00000001C001820D: mov     rcx, rsi; int
 * 00000001C0018210: call    WaitForCommandCompleteWithCustomTimeout
 * 00000001C0018215: mov     rax, [rbp+arg_0]
 * 00000001C0018219: mov     r11d, 1
 * 00000001C001821F: cmp     [rax+0Bh], r11b
 * 00000001C0018223: jnz     loc_1C0018306
 * 00000001C0018229: xor     r10d, r10d
 * 00000001C001822C: jmp     short loc_1C001825C
 * 00000001C001822E: test    r15, r15
 * 00000001C0018231: jz      short loc_1C0018249
 * 00000001C0018233: mov     rax, [rbp+arg_0]
 * 00000001C0018237: add     rax, 8
 * 00000001C001823B: mov     [r15+28h], rax
 * 00000001C001823F: mov     r15, [rbp+arg_0]
 * 00000001C0018243: add     r15, 8
 * 00000001C0018247: jmp     short loc_1C001825C
 * 00000001C0018249: mov     r14, [rbp+arg_0]
 * 00000001C001824D: add     r14, 8
 * 00000001C0018251: mov     r15, r14
 * 00000001C0018254: jmp     short loc_1C001825C
 * 00000001C0018256: mov     r11d, 1
 * 00000001C001825C: add     r12w, r11w
 * 00000001C0018260: cmp     r12w, [rsi+11Ah]
 * 00000001C0018268: jbe     loc_1C0018007
 * 00000001C001826E: test    edi, edi
 * 00000001C0018270: jz      short loc_1C0018282
 * 00000001C0018272: test    r14, r14
 * 00000001C0018275: jz      short loc_1C0018282
 * 00000001C0018277: mov     rdx, r14
 * 00000001C001827A: mov     rcx, rsi
 * 00000001C001827D: call    ProcessMultipleCommands
 * 00000001C0018282: mov     al, 1
 * 00000001C0018284: mov     rbx, [rsp+40h+arg_10]
 * 00000001C001828C: add     rsp, 40h
 * 00000001C0018290: pop     r15
 * 00000001C0018292: pop     r14
 * 00000001C0018294: pop     r13
 * 00000001C0018296: pop     r12
 * 00000001C0018298: pop     rdi
 * 00000001C0018299: pop     rsi
 * 00000001C001829A: pop     rbp
 * 00000001C001829B: retn
 * 00000001C001829D: mov     r8, [rbp+arg_0]
 * 00000001C00182A1: test    r8, r8
 * 00000001C00182A4: jz      short loc_1C00182BA
 * 00000001C00182A6: mov     rdx, rsi
 * 00000001C00182A9: mov     ecx, 1
 * 00000001C00182AE: call    cs:__imp_StorPortExtendedFunction
 * 00000001C00182B5: nop     dword ptr [rax+rax+00h]
 * 00000001C00182BA: test    r14, r14
 * 00000001C00182BD: jz      short loc_1C0018306
 * 00000001C00182BF: mov     rcx, r14
 * 00000001C00182C2: call    GetSrbExtension
 * 00000001C00182C7: mov     rdi, [r14+28h]
 * 00000001C00182CB: lea     r8, [r14+38h]
 * 00000001C00182CF: mov     edx, 2000h
 * 00000001C00182D4: mov     rcx, rsi
 * 00000001C00182D7: mov     rbx, [rax+1088h]
 * 00000001C00182DE: mov     r9, [rbx+68h]
 * 00000001C00182E2: call    NVMeFreeDmaBuffer
 * 00000001C00182E7: mov     r8, rbx
 * 00000001C00182EA: mov     rdx, rsi
 * 00000001C00182ED: mov     ecx, 1
 * 00000001C00182F2: call    cs:__imp_StorPortExtendedFunction
 * 00000001C00182F9: nop     dword ptr [rax+rax+00h]
 * 00000001C00182FE: mov     r14, rdi
 * 00000001C0018301: test    rdi, rdi
 * 00000001C0018304: jnz     short loc_1C00182BF
 * 00000001C0018306: xor     al, al
 * 00000001C0018308: jmp     loc_1C0018284
 */
