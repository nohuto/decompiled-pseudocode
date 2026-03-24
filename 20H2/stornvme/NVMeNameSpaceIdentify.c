/*
 * XREFs of NVMeNameSpaceIdentify @ 0x1C0018DC4
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000C5DC (NVMeControllerInitPart1.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     memset @ 0x1C00054C0 (memset.c)
 *     IsIntelChatham @ 0x1C00090DC (IsIntelChatham.c)
 *     NVMeVersionCheck @ 0x1C001B194 (NVMeVersionCheck.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BB0C (WaitForCommandCompleteWithCustomTimeout.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeNameSpaceIdentify @ 0x1C0018DC4
 * Reason: Hex-Rays returned no pseudocode for 0x1C0018DC4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0018DC4: mov     [rsp-38h+arg_10], rbx
 * 00000001C0018DC9: push    rbp
 * 00000001C0018DCA: push    rsi
 * 00000001C0018DCB: push    rdi
 * 00000001C0018DCC: push    r12
 * 00000001C0018DCE: push    r13
 * 00000001C0018DD0: push    r14
 * 00000001C0018DD2: push    r15
 * 00000001C0018DD4: mov     rbp, rsp
 * 00000001C0018DD7: sub     rsp, 30h
 * 00000001C0018DDB: mov     rax, [rcx+648h]
 * 00000001C0018DE2: xor     r13d, r13d
 * 00000001C0018DE5: mov     rsi, [rcx+6A8h]
 * 00000001C0018DEC: mov     rdi, rcx
 * 00000001C0018DEF: mov     r15d, 0FFh
 * 00000001C0018DF5: mov     r12d, r13d
 * 00000001C0018DF8: mov     ecx, [rax+204h]
 * 00000001C0018DFE: cmp     ecx, r15d
 * 00000001C0018E01: ja      short loc_1C0018E0E
 * 00000001C0018E03: mov     r15d, ecx
 * 00000001C0018E06: test    ecx, ecx
 * 00000001C0018E08: jz      loc_1C00190F0
 * 00000001C0018E0E: mov     ebx, 1
 * 00000001C0018E13: mov     r14d, ebx
 * 00000001C0018E16: cmp     [rdi+10h], r13b
 * 00000001C0018E1A: jz      short loc_1C0018E29
 * 00000001C0018E1C: cmp     [rdi+0C0h], r14d
 * 00000001C0018E23: jnz     loc_1C00190E0
 * 00000001C0018E29: mov     rcx, [rdi+398h]; void *
 * 00000001C0018E30: xor     edx, edx; Val
 * 00000001C0018E32: mov     r8d, 10A0h; Size
 * 00000001C0018E38: mov     [rdi+343h], r13b
 * 00000001C0018E3F: call    memset
 * 00000001C0018E44: mov     rax, [rdi+398h]
 * 00000001C0018E4B: mov     edx, r13d
 * 00000001C0018E4E: mov     [rax+1088h], r13
 * 00000001C0018E55: mov     rax, [rdi+398h]
 * 00000001C0018E5C: mov     [rdi+378h], rax
 * 00000001C0018E63: mov     [rdi+338h], ebx
 * 00000001C0018E69: mov     rcx, [rdi+398h]
 * 00000001C0018E70: lea     eax, [rbx+rdx]
 * 00000001C0018E73: add     edx, ebx
 * 00000001C0018E75: or      [rcx+109Dh], al
 * 00000001C0018E7B: cmp     edx, 2
 * 00000001C0018E7E: jl      short loc_1C0018E69
 * 00000001C0018E80: mov     rax, [rdi+398h]
 * 00000001C0018E87: lea     rbx, [rdi+340h]
 * 00000001C0018E8E: test    r14d, r14d
 * 00000001C0018E91: mov     rdx, rbx
 * 00000001C0018E94: mov     [rax+1094h], r13w
 * 00000001C0018E9C: mov     rcx, [rdi+398h]
 * 00000001C0018EA3: mov     rax, [rdi+6B0h]
 * 00000001C0018EAA: mov     [rcx+1018h], rax
 * 00000001C0018EB1: setz    al
 * 00000001C0018EB4: mov     [rcx+1028h], al
 * 00000001C0018EBA: mov     byte ptr [rcx+1000h], 6
 * 00000001C0018EC1: mov     [rcx+1004h], r14d
 * 00000001C0018EC8: mov     rcx, rdi
 * 00000001C0018ECB: call    ProcessCommand
 * 00000001C0018ED0: mov     r9d, 2710h
 * 00000001C0018ED6: mov     r8b, 1
 * 00000001C0018ED9: mov     rdx, rbx
 * 00000001C0018EDC: mov     rcx, rdi; int
 * 00000001C0018EDF: call    WaitForCommandCompleteWithCustomTimeout
 * 00000001C0018EE4: mov     rcx, rdi
 * 00000001C0018EE7: call    IsIntelChatham
 * 00000001C0018EEC: mov     ebx, 1
 * 00000001C0018EF1: test    al, al
 * 00000001C0018EF3: jz      short loc_1C0018F4E
 * 00000001C0018EF5: mov     al, [rsi+180h]
 * 00000001C0018EFB: mov     byte ptr [rbp+arg_0+3], al
 * 00000001C0018EFE: mov     al, [rsi+181h]
 * 00000001C0018F04: mov     byte ptr [rbp+arg_0+2], al
 * 00000001C0018F07: mov     al, [rsi+182h]
 * 00000001C0018F0D: mov     byte ptr [rbp+arg_0+1], al
 * 00000001C0018F10: mov     al, [rsi+183h]
 * 00000001C0018F16: mov     byte ptr [rbp+arg_0], al
 * 00000001C0018F19: cmp     [rbp+arg_0], 0DEADBEEFh
 * 00000001C0018F20: jz      short loc_1C0018F4E
 * 00000001C0018F22: cmp     r14d, ebx
 * 00000001C0018F25: jnz     short loc_1C0018F4E
 * 00000001C0018F27: xor     edx, edx; Val
 * 00000001C0018F29: mov     r8d, 1000h; Size
 * 00000001C0018F2F: mov     rcx, rsi; void *
 * 00000001C0018F32: call    memset
 * 00000001C0018F37: mov     eax, 3FFFDF0h
 * 00000001C0018F3C: mov     [rsi], rax
 * 00000001C0018F3F: mov     byte ptr [rsi+82h], 9
 * 00000001C0018F46: mov     [rsi+8], rax
 * 00000001C0018F4A: mov     [rsi+10h], rax
 * 00000001C0018F4E: cmp     [rdi+343h], bl
 * 00000001C0018F54: jnz     loc_1C00190DA
 * 00000001C0018F5A: mov     r8b, [rdi+10h]
 * 00000001C0018F5E: test    r8b, r8b
 * 00000001C0018F61: jnz     short loc_1C0018F8E
 * 00000001C0018F63: cmp     r15d, ebx
 * 00000001C0018F66: jbe     short loc_1C0018F8E
 * 00000001C0018F68: mov     rcx, rdi
 * 00000001C0018F6B: call    NVMeVersionCheck
 * 00000001C0018F70: test    al, al
 * 00000001C0018F72: jz      short loc_1C0018F8E
 * 00000001C0018F74: movzx   eax, byte ptr [rsi+1Ah]
 * 00000001C0018F78: and     eax, 0Fh
 * 00000001C0018F7B: cmp     [rsi+rax*4+82h], r13b
 * 00000001C0018F83: jnz     short loc_1C0018F8E
 * 00000001C0018F85: cmp     [rsi], r13
 * 00000001C0018F88: jz      loc_1C00190DA
 * 00000001C0018F8E: mov     [rbp+arg_8], r13
 * 00000001C0018F92: test    r8b, r8b
 * 00000001C0018F95: jz      short loc_1C0018FAF
 * 00000001C0018F97: mov     rcx, [rdi+658h]
 * 00000001C0018F9E: mov     [rbp+arg_8], rcx
 * 00000001C0018FA2: lea     rax, [rcx+68h]
 * 00000001C0018FA6: mov     [rdi+658h], rax
 * 00000001C0018FAD: jmp     short loc_1C0018FE2
 * 00000001C0018FAF: lea     rax, [rbp+arg_8]
 * 00000001C0018FB3: mov     r9d, 656D764Eh
 * 00000001C0018FB9: mov     r8d, 68h ; 'h'
 * 00000001C0018FBF: mov     [rsp+30h+var_10], rax
 * 00000001C0018FC4: mov     rdx, rdi
 * 00000001C0018FC7: xor     ecx, ecx
 * 00000001C0018FC9: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0018FD0: nop     dword ptr [rax+rax+00h]
 * 00000001C0018FD5: mov     rcx, [rbp+arg_8]; void *
 * 00000001C0018FD9: test    rcx, rcx
 * 00000001C0018FDC: jz      loc_1C00190F0
 * 00000001C0018FE2: xor     edx, edx; Val
 * 00000001C0018FE4: lea     r8d, [rdx+68h]; Size
 * 00000001C0018FE8: call    memset
 * 00000001C0018FED: mov     cl, [rsi+1Ah]
 * 00000001C0018FF0: mov     rax, [rbp+arg_8]
 * 00000001C0018FF4: and     cl, 0Fh
 * 00000001C0018FF7: mov     [rax+40h], cl
 * 00000001C0018FFA: movzx   eax, byte ptr [rsi+1Ah]
 * 00000001C0018FFE: and     eax, 0Fh
 * 00000001C0019001: mov     ecx, [rsi+rax*4+80h]
 * 00000001C0019008: mov     rax, [rbp+arg_8]
 * 00000001C001900C: mov     [rax+30h], ecx
 * 00000001C001900F: mov     eax, ebx
 * 00000001C0019011: mov     rdx, [rbp+arg_8]
 * 00000001C0019015: mov     cl, [rdx+32h]
 * 00000001C0019018: shl     eax, cl
 * 00000001C001901A: mov     [rdx+34h], eax
 * 00000001C001901D: mov     rcx, [rsi]
 * 00000001C0019020: mov     rax, [rbp+arg_8]
 * 00000001C0019024: mov     [rax+38h], rcx
 * 00000001C0019028: mov     cl, [rsi+18h]
 * 00000001C001902B: mov     rax, [rbp+arg_8]
 * 00000001C001902F: and     cl, bl
 * 00000001C0019031: mov     [rax+41h], cl
 * 00000001C0019034: mov     cl, [rsi+1Dh]
 * 00000001C0019037: mov     rax, [rbp+arg_8]
 * 00000001C001903B: and     cl, 7
 * 00000001C001903E: mov     [rax+42h], cl
 * 00000001C0019041: movzx   ecx, word ptr [rsi+2Eh]
 * 00000001C0019045: mov     rax, [rbp+arg_8]
 * 00000001C0019049: mov     [rax+5Ch], cx
 * 00000001C001904D: movzx   ecx, word ptr [rsi+64h]
 * 00000001C0019051: mov     rax, [rbp+arg_8]
 * 00000001C0019055: mov     [rax+5Eh], cx
 * 00000001C0019059: movzx   ecx, word ptr [rsi+66h]
 * 00000001C001905D: mov     rax, [rbp+arg_8]
 * 00000001C0019061: mov     [rax+60h], cx
 * 00000001C0019065: mov     rcx, [rsi+78h]
 * 00000001C0019069: mov     rax, [rbp+arg_8]
 * 00000001C001906D: mov     [rax+54h], rcx
 * 00000001C0019071: mov     cl, r14b
 * 00000001C0019074: movups  xmm0, xmmword ptr [rsi+68h]
 * 00000001C0019078: mov     rax, [rbp+arg_8]
 * 00000001C001907C: sub     cl, bl
 * 00000001C001907E: add     r12d, ebx
 * 00000001C0019081: movdqu  xmmword ptr [rax+44h], xmm0
 * 00000001C0019086: mov     rax, [rbp+arg_8]
 * 00000001C001908A: mov     [rax], bx
 * 00000001C001908D: mov     rax, [rbp+arg_8]
 * 00000001C0019091: mov     dword ptr [rax+4], 4
 * 00000001C0019098: mov     rax, [rbp+arg_8]
 * 00000001C001909C: mov     [rax+2], r13w
 * 00000001C00190A1: mov     rax, [rbp+arg_8]
 * 00000001C00190A5: mov     [rax+8], r13b
 * 00000001C00190A9: mov     rax, [rbp+arg_8]
 * 00000001C00190AD: mov     [rax+9], r13b
 * 00000001C00190B1: mov     rax, [rbp+arg_8]
 * 00000001C00190B5: mov     [rax+0Ah], cl
 * 00000001C00190B8: lea     ecx, [r14-1]
 * 00000001C00190BC: mov     rax, [rbp+arg_8]
 * 00000001C00190C0: mov     [rax+10h], r14d
 * 00000001C00190C4: mov     rax, [rbp+arg_8]
 * 00000001C00190C8: mov     [rdi+rcx*8+6B8h], rax
 * 00000001C00190D0: movzx   eax, r14w
 * 00000001C00190D4: mov     [rdi+0C8h], eax
 * 00000001C00190DA: cmp     [rdi+10h], r13b
 * 00000001C00190DE: jnz     short loc_1C00190F0
 * 00000001C00190E0: add     r14d, ebx
 * 00000001C00190E3: lea     eax, [r14-1]
 * 00000001C00190E7: cmp     eax, r15d
 * 00000001C00190EA: jb      loc_1C0018E16
 * 00000001C00190F0: mov     rbx, [rsp+30h+arg_10]
 * 00000001C00190F8: mov     [rdi+0BCh], r12d
 * 00000001C00190FF: add     rsp, 30h
 * 00000001C0019103: pop     r15
 * 00000001C0019105: pop     r14
 * 00000001C0019107: pop     r13
 * 00000001C0019109: pop     r12
 * 00000001C001910B: pop     rdi
 * 00000001C001910C: pop     rsi
 * 00000001C001910D: pop     rbp
 * 00000001C001910E: retn
 */
