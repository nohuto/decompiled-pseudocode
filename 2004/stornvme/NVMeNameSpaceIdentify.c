/*
 * XREFs of NVMeNameSpaceIdentify @ 0x1C0018E64
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000C62C (NVMeControllerInitPart1.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     memset @ 0x1C0005500 (memset.c)
 *     IsIntelChatham @ 0x1C000912C (IsIntelChatham.c)
 *     NVMeVersionCheck @ 0x1C001B264 (NVMeVersionCheck.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BBDC (WaitForCommandCompleteWithCustomTimeout.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeNameSpaceIdentify @ 0x1C0018E64
 * Reason: Hex-Rays returned no pseudocode for 0x1C0018E64
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0018E64: mov     [rsp-38h+arg_10], rbx
 * 00000001C0018E69: push    rbp
 * 00000001C0018E6A: push    rsi
 * 00000001C0018E6B: push    rdi
 * 00000001C0018E6C: push    r12
 * 00000001C0018E6E: push    r13
 * 00000001C0018E70: push    r14
 * 00000001C0018E72: push    r15
 * 00000001C0018E74: mov     rbp, rsp
 * 00000001C0018E77: sub     rsp, 30h
 * 00000001C0018E7B: mov     rax, [rcx+648h]
 * 00000001C0018E82: xor     r13d, r13d
 * 00000001C0018E85: mov     rsi, [rcx+6A8h]
 * 00000001C0018E8C: mov     rdi, rcx
 * 00000001C0018E8F: mov     r15d, 0FFh
 * 00000001C0018E95: mov     r12d, r13d
 * 00000001C0018E98: mov     ecx, [rax+204h]
 * 00000001C0018E9E: cmp     ecx, r15d
 * 00000001C0018EA1: ja      short loc_1C0018EAE
 * 00000001C0018EA3: mov     r15d, ecx
 * 00000001C0018EA6: test    ecx, ecx
 * 00000001C0018EA8: jz      loc_1C0019190
 * 00000001C0018EAE: mov     ebx, 1
 * 00000001C0018EB3: mov     r14d, ebx
 * 00000001C0018EB6: cmp     [rdi+10h], r13b
 * 00000001C0018EBA: jz      short loc_1C0018EC9
 * 00000001C0018EBC: cmp     [rdi+0C0h], r14d
 * 00000001C0018EC3: jnz     loc_1C0019180
 * 00000001C0018EC9: mov     rcx, [rdi+398h]; void *
 * 00000001C0018ED0: xor     edx, edx; Val
 * 00000001C0018ED2: mov     r8d, 10A0h; Size
 * 00000001C0018ED8: mov     [rdi+343h], r13b
 * 00000001C0018EDF: call    memset
 * 00000001C0018EE4: mov     rax, [rdi+398h]
 * 00000001C0018EEB: mov     edx, r13d
 * 00000001C0018EEE: mov     [rax+1088h], r13
 * 00000001C0018EF5: mov     rax, [rdi+398h]
 * 00000001C0018EFC: mov     [rdi+378h], rax
 * 00000001C0018F03: mov     [rdi+338h], ebx
 * 00000001C0018F09: mov     rcx, [rdi+398h]
 * 00000001C0018F10: lea     eax, [rbx+rdx]
 * 00000001C0018F13: add     edx, ebx
 * 00000001C0018F15: or      [rcx+109Dh], al
 * 00000001C0018F1B: cmp     edx, 2
 * 00000001C0018F1E: jl      short loc_1C0018F09
 * 00000001C0018F20: mov     rax, [rdi+398h]
 * 00000001C0018F27: lea     rbx, [rdi+340h]
 * 00000001C0018F2E: test    r14d, r14d
 * 00000001C0018F31: mov     rdx, rbx
 * 00000001C0018F34: mov     [rax+1094h], r13w
 * 00000001C0018F3C: mov     rcx, [rdi+398h]
 * 00000001C0018F43: mov     rax, [rdi+6B0h]
 * 00000001C0018F4A: mov     [rcx+1018h], rax
 * 00000001C0018F51: setz    al
 * 00000001C0018F54: mov     [rcx+1028h], al
 * 00000001C0018F5A: mov     byte ptr [rcx+1000h], 6
 * 00000001C0018F61: mov     [rcx+1004h], r14d
 * 00000001C0018F68: mov     rcx, rdi
 * 00000001C0018F6B: call    ProcessCommand
 * 00000001C0018F70: mov     r9d, 2710h
 * 00000001C0018F76: mov     r8b, 1
 * 00000001C0018F79: mov     rdx, rbx
 * 00000001C0018F7C: mov     rcx, rdi; int
 * 00000001C0018F7F: call    WaitForCommandCompleteWithCustomTimeout
 * 00000001C0018F84: mov     rcx, rdi
 * 00000001C0018F87: call    IsIntelChatham
 * 00000001C0018F8C: mov     ebx, 1
 * 00000001C0018F91: test    al, al
 * 00000001C0018F93: jz      short loc_1C0018FEE
 * 00000001C0018F95: mov     al, [rsi+180h]
 * 00000001C0018F9B: mov     byte ptr [rbp+arg_0+3], al
 * 00000001C0018F9E: mov     al, [rsi+181h]
 * 00000001C0018FA4: mov     byte ptr [rbp+arg_0+2], al
 * 00000001C0018FA7: mov     al, [rsi+182h]
 * 00000001C0018FAD: mov     byte ptr [rbp+arg_0+1], al
 * 00000001C0018FB0: mov     al, [rsi+183h]
 * 00000001C0018FB6: mov     byte ptr [rbp+arg_0], al
 * 00000001C0018FB9: cmp     [rbp+arg_0], 0DEADBEEFh
 * 00000001C0018FC0: jz      short loc_1C0018FEE
 * 00000001C0018FC2: cmp     r14d, ebx
 * 00000001C0018FC5: jnz     short loc_1C0018FEE
 * 00000001C0018FC7: xor     edx, edx; Val
 * 00000001C0018FC9: mov     r8d, 1000h; Size
 * 00000001C0018FCF: mov     rcx, rsi; void *
 * 00000001C0018FD2: call    memset
 * 00000001C0018FD7: mov     eax, 3FFFDF0h
 * 00000001C0018FDC: mov     [rsi], rax
 * 00000001C0018FDF: mov     byte ptr [rsi+82h], 9
 * 00000001C0018FE6: mov     [rsi+8], rax
 * 00000001C0018FEA: mov     [rsi+10h], rax
 * 00000001C0018FEE: cmp     [rdi+343h], bl
 * 00000001C0018FF4: jnz     loc_1C001917A
 * 00000001C0018FFA: mov     r8b, [rdi+10h]
 * 00000001C0018FFE: test    r8b, r8b
 * 00000001C0019001: jnz     short loc_1C001902E
 * 00000001C0019003: cmp     r15d, ebx
 * 00000001C0019006: jbe     short loc_1C001902E
 * 00000001C0019008: mov     rcx, rdi
 * 00000001C001900B: call    NVMeVersionCheck
 * 00000001C0019010: test    al, al
 * 00000001C0019012: jz      short loc_1C001902E
 * 00000001C0019014: movzx   eax, byte ptr [rsi+1Ah]
 * 00000001C0019018: and     eax, 0Fh
 * 00000001C001901B: cmp     [rsi+rax*4+82h], r13b
 * 00000001C0019023: jnz     short loc_1C001902E
 * 00000001C0019025: cmp     [rsi], r13
 * 00000001C0019028: jz      loc_1C001917A
 * 00000001C001902E: mov     [rbp+arg_8], r13
 * 00000001C0019032: test    r8b, r8b
 * 00000001C0019035: jz      short loc_1C001904F
 * 00000001C0019037: mov     rcx, [rdi+658h]
 * 00000001C001903E: mov     [rbp+arg_8], rcx
 * 00000001C0019042: lea     rax, [rcx+68h]
 * 00000001C0019046: mov     [rdi+658h], rax
 * 00000001C001904D: jmp     short loc_1C0019082
 * 00000001C001904F: lea     rax, [rbp+arg_8]
 * 00000001C0019053: mov     r9d, 656D764Eh
 * 00000001C0019059: mov     r8d, 68h ; 'h'
 * 00000001C001905F: mov     [rsp+30h+var_10], rax
 * 00000001C0019064: mov     rdx, rdi
 * 00000001C0019067: xor     ecx, ecx
 * 00000001C0019069: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0019070: nop     dword ptr [rax+rax+00h]
 * 00000001C0019075: mov     rcx, [rbp+arg_8]; void *
 * 00000001C0019079: test    rcx, rcx
 * 00000001C001907C: jz      loc_1C0019190
 * 00000001C0019082: xor     edx, edx; Val
 * 00000001C0019084: lea     r8d, [rdx+68h]; Size
 * 00000001C0019088: call    memset
 * 00000001C001908D: mov     cl, [rsi+1Ah]
 * 00000001C0019090: mov     rax, [rbp+arg_8]
 * 00000001C0019094: and     cl, 0Fh
 * 00000001C0019097: mov     [rax+40h], cl
 * 00000001C001909A: movzx   eax, byte ptr [rsi+1Ah]
 * 00000001C001909E: and     eax, 0Fh
 * 00000001C00190A1: mov     ecx, [rsi+rax*4+80h]
 * 00000001C00190A8: mov     rax, [rbp+arg_8]
 * 00000001C00190AC: mov     [rax+30h], ecx
 * 00000001C00190AF: mov     eax, ebx
 * 00000001C00190B1: mov     rdx, [rbp+arg_8]
 * 00000001C00190B5: mov     cl, [rdx+32h]
 * 00000001C00190B8: shl     eax, cl
 * 00000001C00190BA: mov     [rdx+34h], eax
 * 00000001C00190BD: mov     rcx, [rsi]
 * 00000001C00190C0: mov     rax, [rbp+arg_8]
 * 00000001C00190C4: mov     [rax+38h], rcx
 * 00000001C00190C8: mov     cl, [rsi+18h]
 * 00000001C00190CB: mov     rax, [rbp+arg_8]
 * 00000001C00190CF: and     cl, bl
 * 00000001C00190D1: mov     [rax+41h], cl
 * 00000001C00190D4: mov     cl, [rsi+1Dh]
 * 00000001C00190D7: mov     rax, [rbp+arg_8]
 * 00000001C00190DB: and     cl, 7
 * 00000001C00190DE: mov     [rax+42h], cl
 * 00000001C00190E1: movzx   ecx, word ptr [rsi+2Eh]
 * 00000001C00190E5: mov     rax, [rbp+arg_8]
 * 00000001C00190E9: mov     [rax+5Ch], cx
 * 00000001C00190ED: movzx   ecx, word ptr [rsi+64h]
 * 00000001C00190F1: mov     rax, [rbp+arg_8]
 * 00000001C00190F5: mov     [rax+5Eh], cx
 * 00000001C00190F9: movzx   ecx, word ptr [rsi+66h]
 * 00000001C00190FD: mov     rax, [rbp+arg_8]
 * 00000001C0019101: mov     [rax+60h], cx
 * 00000001C0019105: mov     rcx, [rsi+78h]
 * 00000001C0019109: mov     rax, [rbp+arg_8]
 * 00000001C001910D: mov     [rax+54h], rcx
 * 00000001C0019111: mov     cl, r14b
 * 00000001C0019114: movups  xmm0, xmmword ptr [rsi+68h]
 * 00000001C0019118: mov     rax, [rbp+arg_8]
 * 00000001C001911C: sub     cl, bl
 * 00000001C001911E: add     r12d, ebx
 * 00000001C0019121: movdqu  xmmword ptr [rax+44h], xmm0
 * 00000001C0019126: mov     rax, [rbp+arg_8]
 * 00000001C001912A: mov     [rax], bx
 * 00000001C001912D: mov     rax, [rbp+arg_8]
 * 00000001C0019131: mov     dword ptr [rax+4], 4
 * 00000001C0019138: mov     rax, [rbp+arg_8]
 * 00000001C001913C: mov     [rax+2], r13w
 * 00000001C0019141: mov     rax, [rbp+arg_8]
 * 00000001C0019145: mov     [rax+8], r13b
 * 00000001C0019149: mov     rax, [rbp+arg_8]
 * 00000001C001914D: mov     [rax+9], r13b
 * 00000001C0019151: mov     rax, [rbp+arg_8]
 * 00000001C0019155: mov     [rax+0Ah], cl
 * 00000001C0019158: lea     ecx, [r14-1]
 * 00000001C001915C: mov     rax, [rbp+arg_8]
 * 00000001C0019160: mov     [rax+10h], r14d
 * 00000001C0019164: mov     rax, [rbp+arg_8]
 * 00000001C0019168: mov     [rdi+rcx*8+6B8h], rax
 * 00000001C0019170: movzx   eax, r14w
 * 00000001C0019174: mov     [rdi+0C8h], eax
 * 00000001C001917A: cmp     [rdi+10h], r13b
 * 00000001C001917E: jnz     short loc_1C0019190
 * 00000001C0019180: add     r14d, ebx
 * 00000001C0019183: lea     eax, [r14-1]
 * 00000001C0019187: cmp     eax, r15d
 * 00000001C001918A: jb      loc_1C0018EB6
 * 00000001C0019190: mov     rbx, [rsp+30h+arg_10]
 * 00000001C0019198: mov     [rdi+0BCh], r12d
 * 00000001C001919F: add     rsp, 30h
 * 00000001C00191A3: pop     r15
 * 00000001C00191A5: pop     r14
 * 00000001C00191A7: pop     r13
 * 00000001C00191A9: pop     r12
 * 00000001C00191AB: pop     rdi
 * 00000001C00191AC: pop     rsi
 * 00000001C00191AD: pop     rbp
 * 00000001C00191AE: retn
 */
