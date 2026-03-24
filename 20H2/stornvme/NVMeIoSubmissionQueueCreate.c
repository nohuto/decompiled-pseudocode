/*
 * XREFs of NVMeIoSubmissionQueueCreate @ 0x1C0018690
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
 * Hex-Rays decompilation failed for NVMeIoSubmissionQueueCreate @ 0x1C0018690
 * Reason: Hex-Rays returned no pseudocode for 0x1C0018690
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0018690: mov     [rsp-38h+arg_10], rbx
 * 00000001C0018695: mov     [rsp-38h+arg_8], dl
 * 00000001C0018699: push    rbp
 * 00000001C001869A: push    rsi
 * 00000001C001869B: push    rdi
 * 00000001C001869C: push    r12
 * 00000001C001869E: push    r13
 * 00000001C00186A0: push    r14
 * 00000001C00186A2: push    r15
 * 00000001C00186A4: mov     rbp, rsp
 * 00000001C00186A7: sub     rsp, 40h
 * 00000001C00186AB: mov     edi, [rcx+80h]
 * 00000001C00186B1: xor     r9d, r9d
 * 00000001C00186B4: and     edi, 8
 * 00000001C00186B7: mov     [rbp+arg_0], r9
 * 00000001C00186BB: mov     r13b, r8b
 * 00000001C00186BE: mov     [rbp+arg_18], r9
 * 00000001C00186C2: mov     bl, dl
 * 00000001C00186C4: mov     [rbp+var_10], r9
 * 00000001C00186C8: lea     r10d, [r9+1]
 * 00000001C00186CC: mov     rsi, rcx
 * 00000001C00186CF: mov     r14d, r9d
 * 00000001C00186D2: mov     r15d, r9d
 * 00000001C00186D5: movzx   r12d, r10w
 * 00000001C00186D9: cmp     r10w, [rcx+118h]
 * 00000001C00186E1: ja      loc_1C0018929
 * 00000001C00186E7: test    r13b, r13b
 * 00000001C00186EA: jz      loc_1C00187AB
 * 00000001C00186F0: lea     rax, [rbp+arg_0]
 * 00000001C00186F4: mov     r9d, 656D764Eh
 * 00000001C00186FA: mov     r8d, 70h ; 'p'
 * 00000001C0018700: mov     [rsp+40h+var_20], rax
 * 00000001C0018705: mov     rdx, rsi
 * 00000001C0018708: xor     ecx, ecx
 * 00000001C001870A: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0018711: nop     dword ptr [rax+rax+00h]
 * 00000001C0018716: mov     rcx, [rbp+arg_0]; void *
 * 00000001C001871A: test    rcx, rcx
 * 00000001C001871D: jz      loc_1C0018975
 * 00000001C0018723: xor     edx, edx; Val
 * 00000001C0018725: lea     r8d, [rdx+70h]; Size
 * 00000001C0018729: call    memset
 * 00000001C001872E: lea     r9, [rbp+var_10]
 * 00000001C0018732: mov     edx, 2000h
 * 00000001C0018737: lea     r8, [rbp+arg_18]
 * 00000001C001873B: mov     rcx, rsi
 * 00000001C001873E: call    NVMeAllocateDmaBuffer
 * 00000001C0018743: mov     rcx, [rbp+arg_18]; void *
 * 00000001C0018747: test    rcx, rcx
 * 00000001C001874A: jz      loc_1C0018958
 * 00000001C0018750: xor     edx, edx; Val
 * 00000001C0018752: mov     r8d, 10A0h; Size
 * 00000001C0018758: call    memset
 * 00000001C001875D: mov     rax, [rbp+arg_0]
 * 00000001C0018761: xor     r9d, r9d
 * 00000001C0018764: mov     [rax+0Bh], r9b
 * 00000001C0018768: lea     r10d, [r9+1]
 * 00000001C001876C: mov     rax, [rbp+arg_0]
 * 00000001C0018770: mov     dword ptr [rax+14h], 0F000000h
 * 00000001C0018777: mov     rcx, [rbp+arg_0]
 * 00000001C001877B: mov     rax, [rbp+arg_18]
 * 00000001C001877F: mov     [rcx+60h], rax
 * 00000001C0018783: mov     rcx, [rbp+arg_0]
 * 00000001C0018787: mov     rax, [rbp+arg_18]
 * 00000001C001878B: mov     [rcx+40h], rax
 * 00000001C001878F: mov     rax, [rbp+arg_0]
 * 00000001C0018793: mov     [rax], r10d
 * 00000001C0018796: mov     rax, [rbp+arg_18]
 * 00000001C001879A: mov     rcx, [rbp+arg_0]
 * 00000001C001879E: mov     [rax+1088h], rcx
 * 00000001C00187A5: mov     rax, [rbp+arg_18]
 * 00000001C00187A9: jmp     short loc_1C00187F6
 * 00000001C00187AB: lea     rbx, [rsi+338h]
 * 00000001C00187B2: xor     edx, edx; Val
 * 00000001C00187B4: mov     rcx, [rbx+60h]; void *
 * 00000001C00187B8: mov     r8d, 10A0h; Size
 * 00000001C00187BE: mov     [rbx+0Bh], r9b
 * 00000001C00187C2: call    memset
 * 00000001C00187C7: mov     rax, [rbx+60h]
 * 00000001C00187CB: xor     r9d, r9d
 * 00000001C00187CE: mov     [rax+1088h], r9
 * 00000001C00187D5: lea     r10d, [r9+1]
 * 00000001C00187D9: mov     rax, [rbx+60h]
 * 00000001C00187DD: mov     [rbx+40h], rax
 * 00000001C00187E1: mov     [rbx], r10d
 * 00000001C00187E4: mov     rax, [rsi+398h]
 * 00000001C00187EB: mov     [rbp+arg_0], rbx
 * 00000001C00187EF: mov     bl, [rbp+arg_8]
 * 00000001C00187F2: mov     [rbp+arg_18], rax
 * 00000001C00187F6: or      [rax+109Dh], r10b
 * 00000001C00187FD: mov     rax, [rbp+arg_18]
 * 00000001C0018801: and     byte ptr [rax+109Dh], 0FDh
 * 00000001C0018808: mov     rax, [rbp+arg_18]
 * 00000001C001880C: mov     [rax+1094h], r9w
 * 00000001C0018814: mov     r8, [rbp+arg_18]
 * 00000001C0018818: movzx   eax, r12w
 * 00000001C001881C: imul    rdx, rax, 88h
 * 00000001C0018823: mov     [r8+1000h], r10b
 * 00000001C001882A: mov     rax, [rsi+300h]
 * 00000001C0018831: mov     rcx, [rdx+rax-80h]
 * 00000001C0018836: mov     [r8+1018h], rcx
 * 00000001C001883D: mov     [r8+1028h], r12w
 * 00000001C0018845: movzx   eax, word ptr [rsi+116h]
 * 00000001C001884C: sub     ax, r10w
 * 00000001C0018850: mov     [r8+102Ah], ax
 * 00000001C0018858: mov     eax, [r8+102Ch]
 * 00000001C001885F: and     eax, 0FFFFFFFDh
 * 00000001C0018862: or      eax, 5
 * 00000001C0018865: mov     [r8+102Ch], eax
 * 00000001C001886C: mov     rax, [rsi+300h]
 * 00000001C0018873: movzx   ecx, word ptr [rdx+rax-56h]
 * 00000001C0018878: mov     [r8+102Eh], cx
 * 00000001C0018880: test    r13b, r13b
 * 00000001C0018883: jnz     short loc_1C0018889
 * 00000001C0018885: test    edi, edi
 * 00000001C0018887: jz      short loc_1C001889F
 * 00000001C0018889: mov     rax, [rbp+arg_18]
 * 00000001C001888D: lea     rcx, NVMeIoSubmissionQueueCreateCompletion
 * 00000001C0018894: mov     [rax+1080h], rcx
 * 00000001C001889B: test    edi, edi
 * 00000001C001889D: jnz     short loc_1C00188E9
 * 00000001C001889F: mov     rdx, [rbp+arg_0]
 * 00000001C00188A3: mov     rcx, rsi
 * 00000001C00188A6: add     rdx, 8
 * 00000001C00188AA: call    ProcessCommand
 * 00000001C00188AF: xor     r9d, r9d
 * 00000001C00188B2: test    r13b, r13b
 * 00000001C00188B5: jnz     short loc_1C0018911
 * 00000001C00188B7: mov     rdx, [rbp+arg_0]
 * 00000001C00188BB: mov     r9d, 2710h
 * 00000001C00188C1: add     rdx, 8
 * 00000001C00188C5: mov     r8b, bl
 * 00000001C00188C8: mov     rcx, rsi; int
 * 00000001C00188CB: call    WaitForCommandCompleteWithCustomTimeout
 * 00000001C00188D0: mov     rax, [rbp+arg_0]
 * 00000001C00188D4: mov     r10d, 1
 * 00000001C00188DA: cmp     [rax+0Bh], r10b
 * 00000001C00188DE: jnz     loc_1C00189C1
 * 00000001C00188E4: xor     r9d, r9d
 * 00000001C00188E7: jmp     short loc_1C0018917
 * 00000001C00188E9: test    r15, r15
 * 00000001C00188EC: jz      short loc_1C0018904
 * 00000001C00188EE: mov     rax, [rbp+arg_0]
 * 00000001C00188F2: add     rax, 8
 * 00000001C00188F6: mov     [r15+28h], rax
 * 00000001C00188FA: mov     r15, [rbp+arg_0]
 * 00000001C00188FE: add     r15, 8
 * 00000001C0018902: jmp     short loc_1C0018917
 * 00000001C0018904: mov     r14, [rbp+arg_0]
 * 00000001C0018908: add     r14, 8
 * 00000001C001890C: mov     r15, r14
 * 00000001C001890F: jmp     short loc_1C0018917
 * 00000001C0018911: mov     r10d, 1
 * 00000001C0018917: add     r12w, r10w
 * 00000001C001891B: cmp     r12w, [rsi+118h]
 * 00000001C0018923: jbe     loc_1C00186E7
 * 00000001C0018929: test    edi, edi
 * 00000001C001892B: jz      short loc_1C001893D
 * 00000001C001892D: test    r14, r14
 * 00000001C0018930: jz      short loc_1C001893D
 * 00000001C0018932: mov     rdx, r14
 * 00000001C0018935: mov     rcx, rsi
 * 00000001C0018938: call    ProcessMultipleCommands
 * 00000001C001893D: mov     al, 1
 * 00000001C001893F: mov     rbx, [rsp+40h+arg_10]
 * 00000001C0018947: add     rsp, 40h
 * 00000001C001894B: pop     r15
 * 00000001C001894D: pop     r14
 * 00000001C001894F: pop     r13
 * 00000001C0018951: pop     r12
 * 00000001C0018953: pop     rdi
 * 00000001C0018954: pop     rsi
 * 00000001C0018955: pop     rbp
 * 00000001C0018956: retn
 * 00000001C0018958: mov     r8, [rbp+arg_0]
 * 00000001C001895C: test    r8, r8
 * 00000001C001895F: jz      short loc_1C0018975
 * 00000001C0018961: mov     rdx, rsi
 * 00000001C0018964: mov     ecx, 1
 * 00000001C0018969: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0018970: nop     dword ptr [rax+rax+00h]
 * 00000001C0018975: test    r14, r14
 * 00000001C0018978: jz      short loc_1C00189C1
 * 00000001C001897A: mov     rcx, r14
 * 00000001C001897D: call    GetSrbExtension
 * 00000001C0018982: mov     rdi, [r14+28h]
 * 00000001C0018986: lea     r8, [r14+38h]
 * 00000001C001898A: mov     edx, 2000h
 * 00000001C001898F: mov     rcx, rsi
 * 00000001C0018992: mov     rbx, [rax+1088h]
 * 00000001C0018999: mov     r9, [rbx+68h]
 * 00000001C001899D: call    NVMeFreeDmaBuffer
 * 00000001C00189A2: mov     r8, rbx
 * 00000001C00189A5: mov     rdx, rsi
 * 00000001C00189A8: mov     ecx, 1
 * 00000001C00189AD: call    cs:__imp_StorPortExtendedFunction
 * 00000001C00189B4: nop     dword ptr [rax+rax+00h]
 * 00000001C00189B9: mov     r14, rdi
 * 00000001C00189BC: test    rdi, rdi
 * 00000001C00189BF: jnz     short loc_1C001897A
 * 00000001C00189C1: xor     al, al
 * 00000001C00189C3: jmp     loc_1C001893F
 */
