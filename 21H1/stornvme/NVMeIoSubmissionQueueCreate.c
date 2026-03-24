/*
 * XREFs of NVMeIoSubmissionQueueCreate @ 0x1C0018720
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
 * Hex-Rays decompilation failed for NVMeIoSubmissionQueueCreate @ 0x1C0018720
 * Reason: Hex-Rays returned no pseudocode for 0x1C0018720
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0018720: mov     [rsp-38h+arg_10], rbx
 * 00000001C0018725: mov     [rsp-38h+arg_8], dl
 * 00000001C0018729: push    rbp
 * 00000001C001872A: push    rsi
 * 00000001C001872B: push    rdi
 * 00000001C001872C: push    r12
 * 00000001C001872E: push    r13
 * 00000001C0018730: push    r14
 * 00000001C0018732: push    r15
 * 00000001C0018734: mov     rbp, rsp
 * 00000001C0018737: sub     rsp, 40h
 * 00000001C001873B: mov     edi, [rcx+80h]
 * 00000001C0018741: xor     r9d, r9d
 * 00000001C0018744: and     edi, 8
 * 00000001C0018747: mov     [rbp+arg_0], r9
 * 00000001C001874B: mov     r13b, r8b
 * 00000001C001874E: mov     [rbp+arg_18], r9
 * 00000001C0018752: mov     bl, dl
 * 00000001C0018754: mov     [rbp+var_10], r9
 * 00000001C0018758: lea     r10d, [r9+1]
 * 00000001C001875C: mov     rsi, rcx
 * 00000001C001875F: mov     r14d, r9d
 * 00000001C0018762: mov     r15d, r9d
 * 00000001C0018765: movzx   r12d, r10w
 * 00000001C0018769: cmp     r10w, [rcx+118h]
 * 00000001C0018771: ja      loc_1C00189C5
 * 00000001C0018777: test    r13b, r13b
 * 00000001C001877A: jz      loc_1C0018847
 * 00000001C0018780: lea     rax, [rbp+arg_0]
 * 00000001C0018784: mov     r9d, 656D764Eh
 * 00000001C001878A: mov     r8d, 70h ; 'p'
 * 00000001C0018790: mov     [rsp+40h+var_20], rax
 * 00000001C0018795: mov     rdx, rsi
 * 00000001C0018798: xor     ecx, ecx
 * 00000001C001879A: call    cs:__imp_StorPortExtendedFunction
 * 00000001C00187A1: nop     dword ptr [rax+rax+00h]
 * 00000001C00187A6: mov     rcx, [rbp+arg_0]; void *
 * 00000001C00187AA: test    rcx, rcx
 * 00000001C00187AD: jz      loc_1C0018A11
 * 00000001C00187B3: xor     edx, edx; Val
 * 00000001C00187B5: lea     r8d, [rdx+70h]; Size
 * 00000001C00187B9: call    memset
 * 00000001C00187BE: lea     r9, [rbp+var_10]
 * 00000001C00187C2: mov     edx, 2000h
 * 00000001C00187C7: lea     r8, [rbp+arg_18]
 * 00000001C00187CB: mov     rcx, rsi
 * 00000001C00187CE: call    NVMeAllocateDmaBuffer
 * 00000001C00187D3: mov     rcx, [rbp+arg_18]; void *
 * 00000001C00187D7: test    rcx, rcx
 * 00000001C00187DA: jz      loc_1C00189F4
 * 00000001C00187E0: xor     edx, edx; Val
 * 00000001C00187E2: mov     r8d, 10A0h; Size
 * 00000001C00187E8: call    memset
 * 00000001C00187ED: mov     rax, [rbp+arg_0]
 * 00000001C00187F1: xor     r9d, r9d
 * 00000001C00187F4: mov     [rax+0Bh], r9b
 * 00000001C00187F8: lea     r10d, [r9+1]
 * 00000001C00187FC: mov     rax, [rbp+arg_0]
 * 00000001C0018800: mov     dword ptr [rax+14h], 0F000000h
 * 00000001C0018807: mov     rcx, [rbp+arg_0]
 * 00000001C001880B: mov     rax, [rbp+arg_18]
 * 00000001C001880F: mov     [rcx+60h], rax
 * 00000001C0018813: mov     rcx, [rbp+arg_0]
 * 00000001C0018817: mov     rax, [rbp+arg_18]
 * 00000001C001881B: mov     [rcx+40h], rax
 * 00000001C001881F: mov     rcx, [rbp+arg_0]
 * 00000001C0018823: mov     rax, [rbp+var_10]
 * 00000001C0018827: mov     [rcx+68h], rax
 * 00000001C001882B: mov     rax, [rbp+arg_0]
 * 00000001C001882F: mov     [rax], r10d
 * 00000001C0018832: mov     rax, [rbp+arg_18]
 * 00000001C0018836: mov     rcx, [rbp+arg_0]
 * 00000001C001883A: mov     [rax+1088h], rcx
 * 00000001C0018841: mov     rax, [rbp+arg_18]
 * 00000001C0018845: jmp     short loc_1C0018892
 * 00000001C0018847: lea     rbx, [rsi+338h]
 * 00000001C001884E: xor     edx, edx; Val
 * 00000001C0018850: mov     rcx, [rbx+60h]; void *
 * 00000001C0018854: mov     r8d, 10A0h; Size
 * 00000001C001885A: mov     [rbx+0Bh], r9b
 * 00000001C001885E: call    memset
 * 00000001C0018863: mov     rax, [rbx+60h]
 * 00000001C0018867: xor     r9d, r9d
 * 00000001C001886A: mov     [rax+1088h], r9
 * 00000001C0018871: lea     r10d, [r9+1]
 * 00000001C0018875: mov     rax, [rbx+60h]
 * 00000001C0018879: mov     [rbx+40h], rax
 * 00000001C001887D: mov     [rbx], r10d
 * 00000001C0018880: mov     rax, [rsi+398h]
 * 00000001C0018887: mov     [rbp+arg_0], rbx
 * 00000001C001888B: mov     bl, [rbp+arg_8]
 * 00000001C001888E: mov     [rbp+arg_18], rax
 * 00000001C0018892: or      [rax+109Dh], r10b
 * 00000001C0018899: mov     rax, [rbp+arg_18]
 * 00000001C001889D: and     byte ptr [rax+109Dh], 0FDh
 * 00000001C00188A4: mov     rax, [rbp+arg_18]
 * 00000001C00188A8: mov     [rax+1094h], r9w
 * 00000001C00188B0: mov     r8, [rbp+arg_18]
 * 00000001C00188B4: movzx   eax, r12w
 * 00000001C00188B8: imul    rdx, rax, 88h
 * 00000001C00188BF: mov     [r8+1000h], r10b
 * 00000001C00188C6: mov     rax, [rsi+300h]
 * 00000001C00188CD: mov     rcx, [rdx+rax-80h]
 * 00000001C00188D2: mov     [r8+1018h], rcx
 * 00000001C00188D9: mov     [r8+1028h], r12w
 * 00000001C00188E1: movzx   eax, word ptr [rsi+116h]
 * 00000001C00188E8: sub     ax, r10w
 * 00000001C00188EC: mov     [r8+102Ah], ax
 * 00000001C00188F4: mov     eax, [r8+102Ch]
 * 00000001C00188FB: and     eax, 0FFFFFFFDh
 * 00000001C00188FE: or      eax, 5
 * 00000001C0018901: mov     [r8+102Ch], eax
 * 00000001C0018908: mov     rax, [rsi+300h]
 * 00000001C001890F: movzx   ecx, word ptr [rdx+rax-56h]
 * 00000001C0018914: mov     [r8+102Eh], cx
 * 00000001C001891C: test    r13b, r13b
 * 00000001C001891F: jnz     short loc_1C0018925
 * 00000001C0018921: test    edi, edi
 * 00000001C0018923: jz      short loc_1C001893B
 * 00000001C0018925: mov     rax, [rbp+arg_18]
 * 00000001C0018929: lea     rcx, NVMeIoSubmissionQueueCreateCompletion
 * 00000001C0018930: mov     [rax+1080h], rcx
 * 00000001C0018937: test    edi, edi
 * 00000001C0018939: jnz     short loc_1C0018985
 * 00000001C001893B: mov     rdx, [rbp+arg_0]
 * 00000001C001893F: mov     rcx, rsi
 * 00000001C0018942: add     rdx, 8
 * 00000001C0018946: call    ProcessCommand
 * 00000001C001894B: xor     r9d, r9d
 * 00000001C001894E: test    r13b, r13b
 * 00000001C0018951: jnz     short loc_1C00189AD
 * 00000001C0018953: mov     rdx, [rbp+arg_0]
 * 00000001C0018957: mov     r9d, 2710h
 * 00000001C001895D: add     rdx, 8
 * 00000001C0018961: mov     r8b, bl
 * 00000001C0018964: mov     rcx, rsi; int
 * 00000001C0018967: call    WaitForCommandCompleteWithCustomTimeout
 * 00000001C001896C: mov     rax, [rbp+arg_0]
 * 00000001C0018970: mov     r10d, 1
 * 00000001C0018976: cmp     [rax+0Bh], r10b
 * 00000001C001897A: jnz     loc_1C0018A5D
 * 00000001C0018980: xor     r9d, r9d
 * 00000001C0018983: jmp     short loc_1C00189B3
 * 00000001C0018985: test    r15, r15
 * 00000001C0018988: jz      short loc_1C00189A0
 * 00000001C001898A: mov     rax, [rbp+arg_0]
 * 00000001C001898E: add     rax, 8
 * 00000001C0018992: mov     [r15+28h], rax
 * 00000001C0018996: mov     r15, [rbp+arg_0]
 * 00000001C001899A: add     r15, 8
 * 00000001C001899E: jmp     short loc_1C00189B3
 * 00000001C00189A0: mov     r14, [rbp+arg_0]
 * 00000001C00189A4: add     r14, 8
 * 00000001C00189A8: mov     r15, r14
 * 00000001C00189AB: jmp     short loc_1C00189B3
 * 00000001C00189AD: mov     r10d, 1
 * 00000001C00189B3: add     r12w, r10w
 * 00000001C00189B7: cmp     r12w, [rsi+118h]
 * 00000001C00189BF: jbe     loc_1C0018777
 * 00000001C00189C5: test    edi, edi
 * 00000001C00189C7: jz      short loc_1C00189D9
 * 00000001C00189C9: test    r14, r14
 * 00000001C00189CC: jz      short loc_1C00189D9
 * 00000001C00189CE: mov     rdx, r14
 * 00000001C00189D1: mov     rcx, rsi
 * 00000001C00189D4: call    ProcessMultipleCommands
 * 00000001C00189D9: mov     al, 1
 * 00000001C00189DB: mov     rbx, [rsp+40h+arg_10]
 * 00000001C00189E3: add     rsp, 40h
 * 00000001C00189E7: pop     r15
 * 00000001C00189E9: pop     r14
 * 00000001C00189EB: pop     r13
 * 00000001C00189ED: pop     r12
 * 00000001C00189EF: pop     rdi
 * 00000001C00189F0: pop     rsi
 * 00000001C00189F1: pop     rbp
 * 00000001C00189F2: retn
 * 00000001C00189F4: mov     r8, [rbp+arg_0]
 * 00000001C00189F8: test    r8, r8
 * 00000001C00189FB: jz      short loc_1C0018A11
 * 00000001C00189FD: mov     rdx, rsi
 * 00000001C0018A00: mov     ecx, 1
 * 00000001C0018A05: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0018A0C: nop     dword ptr [rax+rax+00h]
 * 00000001C0018A11: test    r14, r14
 * 00000001C0018A14: jz      short loc_1C0018A5D
 * 00000001C0018A16: mov     rcx, r14
 * 00000001C0018A19: call    GetSrbExtension
 * 00000001C0018A1E: mov     rdi, [r14+28h]
 * 00000001C0018A22: lea     r8, [r14+38h]
 * 00000001C0018A26: mov     edx, 2000h
 * 00000001C0018A2B: mov     rcx, rsi
 * 00000001C0018A2E: mov     rbx, [rax+1088h]
 * 00000001C0018A35: mov     r9, [rbx+68h]
 * 00000001C0018A39: call    NVMeFreeDmaBuffer
 * 00000001C0018A3E: mov     r8, rbx
 * 00000001C0018A41: mov     rdx, rsi
 * 00000001C0018A44: mov     ecx, 1
 * 00000001C0018A49: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0018A50: nop     dword ptr [rax+rax+00h]
 * 00000001C0018A55: mov     r14, rdi
 * 00000001C0018A58: test    rdi, rdi
 * 00000001C0018A5B: jnz     short loc_1C0018A16
 * 00000001C0018A5D: xor     al, al
 * 00000001C0018A5F: jmp     loc_1C00189DB
 */
