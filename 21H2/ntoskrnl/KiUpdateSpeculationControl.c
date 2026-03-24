/*
 * XREFs of KiUpdateSpeculationControl @ 0x14021ED00
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1403C7840 (KeOptimizeSpecCtrlSettings.c)
 *     SwapContext @ 0x1404067C0 (SwapContext.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KiIsBranchConfusionMitigationEnabled @ 0x1403F3130 (KiIsBranchConfusionMitigationEnabled.c)
 *     KiIsSrsoMitigationEnabled @ 0x1403F336C (KiIsSrsoMitigationEnabled.c)
 *     KiFlushCurrentRsb @ 0x140413D80 (KiFlushCurrentRsb.c)
 *     KiSynchronizeStibpPairing @ 0x14051B6D8 (KiSynchronizeStibpPairing.c)
 *     KiUpdateSpecCtrlEnhancedIBRS @ 0x14051B910 (KiUpdateSpecCtrlEnhancedIBRS.c)
 *     PsGetProcessSecurityDomain @ 0x140581944 (PsGetProcessSecurityDomain.c)
 */

/*
 * Hex-Rays decompilation failed for KiUpdateSpeculationControl @ 0x14021ED00
 * Reason: Hex-Rays returned no pseudocode for 0x14021ED00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014021ED00: push    rbx
 * 000000014021ED02: push    r13
 * 000000014021ED04: sub     rsp, 88h
 * 000000014021ED0B: movups  xmm0, cs:KiSpeculationFeatures
 * 000000014021ED12: mov     rax, 1000000000h
 * 000000014021ED1C: mov     rbx, gs:20h
 * 000000014021ED25: movsd   xmm1, cs:qword_140CFC4B0
 * 000000014021ED2D: mov     r13, rcx
 * 000000014021ED30: movups  [rsp+98h+var_50], xmm0
 * 000000014021ED35: movsd   [rsp+98h+var_40], xmm1
 * 000000014021ED3B: test    qword ptr [rsp+98h+var_50], rax
 * 000000014021ED40: jz      loc_14021F595
 * 000000014021ED46: mov     [rsp+98h+var_20], rdi
 * 000000014021ED4B: cli
 * 000000014021ED4C: movzx   eax, word ptr [rbx+6E0h]
 * 000000014021ED53: mov     ecx, 0FFEFh
 * 000000014021ED58: and     ax, cx
 * 000000014021ED5B: mov     ecx, 0FFBFh
 * 000000014021ED60: and     ax, cx
 * 000000014021ED63: mov     ecx, 0FFFDh
 * 000000014021ED68: and     ax, cx
 * 000000014021ED6B: mov     ecx, 0FFFBh
 * 000000014021ED70: and     ax, cx
 * 000000014021ED73: mov     ecx, 0FFF7h
 * 000000014021ED78: and     ax, cx
 * 000000014021ED7B: mov     ecx, 0FDFFh
 * 000000014021ED80: and     ax, cx
 * 000000014021ED83: mov     ecx, 0FFDFh
 * 000000014021ED88: and     ax, cx
 * 000000014021ED8B: mov     rcx, r13
 * 000000014021ED8E: mov     [rbx+6E0h], ax
 * 000000014021ED95: call    PsGetProcessSecurityDomain
 * 000000014021ED9A: mov     rdi, rax
 * 000000014021ED9D: mov     rcx, 8000000000000h
 * 000000014021EDA7: mov     eax, [r13+87Ch]
 * 000000014021EDAE: mov     edx, 100h
 * 000000014021EDB3: and     eax, 400000h
 * 000000014021EDB8: mov     [rsp+98h+arg_18], eax
 * 000000014021EDBF: mov     eax, 1
 * 000000014021EDC4: cmovz   rdi, rax
 * 000000014021EDC8: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014021EDCF: mov     [rsp+98h+var_58], rdi
 * 000000014021EDD4: test    rcx, rax
 * 000000014021EDD7: jz      short loc_14021EDF9
 * 000000014021EDD9: movzx   eax, word ptr [rbx+6E0h]
 * 000000014021EDE0: test    rdi, rdi
 * 000000014021EDE3: jnz     short loc_14021EDEF
 * 000000014021EDE5: mov     ecx, 0FEFFh
 * 000000014021EDEA: and     ax, cx
 * 000000014021EDED: jmp     short loc_14021EDF2
 * 000000014021EDEF: or      ax, dx
 * 000000014021EDF2: mov     [rbx+6E0h], ax
 * 000000014021EDF9: test    byte ptr [rsp+98h+var_50], 1
 * 000000014021EDFE: jz      short loc_14021EE1D
 * 000000014021EE00: mov     rdx, r13
 * 000000014021EE03: mov     rcx, rbx
 * 000000014021EE06: call    KiUpdateSpecCtrlEnhancedIBRS
 * 000000014021EE0B: sti
 * 000000014021EE0C: mov     rdi, [rsp+98h+var_20]
 * 000000014021EE11: add     rsp, 88h
 * 000000014021EE18: pop     r13
 * 000000014021EE1A: pop     rbx
 * 000000014021EE1B: retn
 * 000000014021EE1D: movzx   r9d, word ptr [rbx+6E4h]
 * 000000014021EE25: mov     rax, 20000000000h
 * 000000014021EE2F: mov     [rsp+98h+arg_0], rbp
 * 000000014021EE37: mov     [rsp+98h+var_18], rsi
 * 000000014021EE3F: mov     [rsp+98h+var_28], r12
 * 000000014021EE44: mov     r12, qword ptr [rsp+98h+var_50]
 * 000000014021EE49: mov     [rsp+98h+var_30], r14
 * 000000014021EE4E: mov     r14, r12
 * 000000014021EE51: mov     [rsp+98h+var_38], r15
 * 000000014021EE56: mov     [rsp+98h+arg_8], 0
 * 000000014021EE5E: mov     [rsp+98h+arg_10], 0
 * 000000014021EE66: and     r14, rax
 * 000000014021EE69: jz      short loc_14021EE9D
 * 000000014021EE6B: movzx   eax, byte ptr [rbx+6D6h]
 * 000000014021EE72: test    al, 2
 * 000000014021EE74: jnz     short loc_14021EE9D
 * 000000014021EE76: test    al, 1
 * 000000014021EE78: jz      short loc_14021EE9D
 * 000000014021EE7A: movzx   eax, byte ptr [rbx+6D4h]
 * 000000014021EE81: movzx   r9d, word ptr [rbx+6D2h]
 * 000000014021EE89: shr     al, 4
 * 000000014021EE8C: and     al, 1
 * 000000014021EE8E: mov     [rsp+98h+arg_10], 1
 * 000000014021EE96: mov     [rsp+98h+arg_8], al
 * 000000014021EE9D: mov     rcx, 4000000000h
 * 000000014021EEA7: xor     eax, eax
 * 000000014021EEA9: test    rcx, r12
 * 000000014021EEAC: jz      short loc_14021EEC1
 * 000000014021EEAE: cmp     cs:KiSsbdMsr, 48h ; 'H'
 * 000000014021EEB5: jnz     short loc_14021EEC1
 * 000000014021EEB7: or      r9w, 4
 * 000000014021EEBC: mov     eax, 4
 * 000000014021EEC1: mov     [rbx+6E6h], ax
 * 000000014021EEC8: mov     rsi, rbx
 * 000000014021EECB: mov     [rbx+6EAh], ax
 * 000000014021EED2: mov     r15, rbx
 * 000000014021EED5: mov     [rbx+6D0h], ax
 * 000000014021EEDC: mov     rbp, rbx
 * 000000014021EEDF: mov     rax, r12
 * 000000014021EEE2: mov     ecx, 80h
 * 000000014021EEE7: and     eax, 2000h
 * 000000014021EEEC: mov     [rsp+98h+var_60], rax
 * 000000014021EEF1: jz      short loc_14021EF01
 * 000000014021EEF3: or      [rbx+6E6h], cx
 * 000000014021EEFA: or      [rbx+6D0h], cx
 * 000000014021EF01: mov     rax, 80000000000h
 * 000000014021EF0B: mov     rdx, r12
 * 000000014021EF0E: and     rdx, rax
 * 000000014021EF11: mov     [rsp+98h+var_70], rdx
 * 000000014021EF16: jz      short loc_14021EF28
 * 000000014021EF18: or      word ptr [rsi+6E6h], 2
 * 000000014021EF20: or      word ptr [rbp+6D0h], 2
 * 000000014021EF28: mov     rax, 40000000000000h
 * 000000014021EF32: mov     ecx, 400h
 * 000000014021EF37: and     r12, rax
 * 000000014021EF3A: jz      short loc_14021EF4A
 * 000000014021EF3C: or      [rsi+6E6h], cx
 * 000000014021EF43: or      [rbp+6D0h], cx
 * 000000014021EF4A: mov     eax, [r13+87Ch]
 * 000000014021EF51: mov     r10, qword ptr [rsp+98h+var_50]
 * 000000014021EF56: mov     rcx, [rbx+6D8h]
 * 000000014021EF5D: mov     r11, r10
 * 000000014021EF60: shr     eax, 17h
 * 000000014021EF63: movzx   r8d, r10b
 * 000000014021EF67: and     eax, 1
 * 000000014021EF6A: mov     [rsp+98h+var_68], rcx
 * 000000014021EF6F: mov     [rsp+98h+var_78], eax
 * 000000014021EF73: mov     rax, 2000000000h
 * 000000014021EF7D: and     r11, rax
 * 000000014021EF80: jnz     loc_14021F207
 * 000000014021EF86: test    rdi, rdi
 * 000000014021EF89: jnz     loc_14021F0B0
 * 000000014021EF8F: test    r10b, 2
 * 000000014021EF93: jz      short loc_14021EFB4
 * 000000014021EF95: test    r10b, 40h
 * 000000014021EF99: jz      loc_14021F088
 * 000000014021EF9F: or      word ptr [rbp+6D0h], 2
 * 000000014021EFA7: test    r14, r14
 * 000000014021EFAA: jnz     short loc_14021EFB4
 * 000000014021EFAC: or      word ptr [rsi+6E6h], 2
 * 000000014021EFB4: mov     eax, 0FFFBh
 * 000000014021EFB9: and     [rbx+6D2h], ax
 * 000000014021EFC0: movzx   eax, r8b
 * 000000014021EFC4: and     al, 42h
 * 000000014021EFC6: cmp     al, 42h ; 'B'
 * 000000014021EFC8: jnz     short loc_14021F005
 * 000000014021EFCA: mov     rax, 100000000h
 * 000000014021EFD4: test    rax, r10
 * 000000014021EFD7: jnz     short loc_14021EFE6
 * 000000014021EFD9: test    dword ptr [r13+9D0h], 40000000h
 * 000000014021EFE4: jz      short loc_14021F005
 * 000000014021EFE6: or      word ptr [r15+6EAh], 2
 * 000000014021EFEF: test    r14, r14
 * 000000014021EFF2: jz      short loc_14021F005
 * 000000014021EFF4: cmp     r13, cs:PsInitialSystemProcess
 * 000000014021EFFB: jz      short loc_14021F005
 * 000000014021EFFD: or      word ptr [rsi+6E6h], 2
 * 000000014021F005: test    rdx, rdx
 * 000000014021F008: jz      short loc_14021F013
 * 000000014021F00A: or      word ptr [r15+6EAh], 2
 * 000000014021F013: mov     rax, 8000000000h
 * 000000014021F01D: test    rax, r10
 * 000000014021F020: jz      short loc_14021F038
 * 000000014021F022: test    dword ptr [r13+9D4h], 2000h
 * 000000014021F02D: jz      short loc_14021F038
 * 000000014021F02F: or      word ptr [r15+6EAh], 4
 * 000000014021F038: mov     r10d, 400h
 * 000000014021F03E: test    r12, r12
 * 000000014021F041: jz      short loc_14021F04B
 * 000000014021F043: or      [r15+6EAh], r10w
 * 000000014021F04B: test    rcx, rcx
 * 000000014021F04E: jz      loc_14021F2CE
 * 000000014021F054: cmp     rcx, rdi
 * 000000014021F057: jz      loc_14021F2CE
 * 000000014021F05D: cmp     rcx, [r13+9E8h]
 * 000000014021F064: jz      loc_14021F2CE
 * 000000014021F06A: test    r9b, 1
 * 000000014021F06E: jz      loc_14021F292
 * 000000014021F074: test    r8b, 2
 * 000000014021F078: jnz     loc_14021F245
 * 000000014021F07E: and     r9w, 4
 * 000000014021F083: jmp     loc_14021F269
 * 000000014021F088: test    r8b, 10h
 * 000000014021F08C: jz      loc_14021EFB4
 * 000000014021F092: or      word ptr [rbp+6D0h], 1
 * 000000014021F09A: test    r14, r14
 * 000000014021F09D: jnz     loc_14021EFB4
 * 000000014021F0A3: or      word ptr [rsi+6E6h], 1
 * 000000014021F0AB: jmp     loc_14021EFB4
 * 000000014021F0B0: lea     rcx, [rsp+98h+var_50]
 * 000000014021F0B5: call    KiIsBranchConfusionMitigationEnabled
 * 000000014021F0BA: test    eax, eax
 * 000000014021F0BC: jnz     loc_14021F187
 * 000000014021F0C2: lea     rcx, [rsp+98h+var_50]
 * 000000014021F0C7: call    KiIsSrsoMitigationEnabled
 * 000000014021F0CC: test    eax, eax
 * 000000014021F0CE: jnz     loc_14021F187
 * 000000014021F0D4: test    r8b, 10h
 * 000000014021F0D8: jz      short loc_14021F106
 * 000000014021F0DA: or      word ptr [rbp+6D0h], 1
 * 000000014021F0E2: test    r14, r14
 * 000000014021F0E5: jnz     short loc_14021F0EF
 * 000000014021F0E7: or      word ptr [rsi+6E6h], 1
 * 000000014021F0EF: test    r8b, 20h
 * 000000014021F0F3: jnz     loc_14021F1E8
 * 000000014021F0F9: or      word ptr [rbx+6E0h], 2
 * 000000014021F101: jmp     loc_14021F1E8
 * 000000014021F106: movzx   eax, r8b
 * 000000014021F10A: and     al, 42h
 * 000000014021F10C: cmp     al, 42h ; 'B'
 * 000000014021F10E: jnz     short loc_14021F125
 * 000000014021F110: or      word ptr [rbp+6D0h], 2
 * 000000014021F118: test    r14, r14
 * 000000014021F11B: jnz     short loc_14021F125
 * 000000014021F11D: or      word ptr [rsi+6E6h], 2
 * 000000014021F125: movzx   eax, word ptr [rbx+6E0h]
 * 000000014021F12C: test    r14, r14
 * 000000014021F12F: jz      short loc_14021F169
 * 000000014021F131: or      ax, 10h
 * 000000014021F135: mov     [rbx+6E0h], ax
 * 000000014021F13C: test    r8b, 20h
 * 000000014021F140: jnz     short loc_14021F152
 * 000000014021F142: or      ax, 2
 * 000000014021F146: mov     [rbx+6E0h], ax
 * 000000014021F14D: jmp     loc_14021F1E8
 * 000000014021F152: test    r8b, 8
 * 000000014021F156: jnz     loc_14021F1E8
 * 000000014021F15C: or      ax, 40h
 * 000000014021F160: mov     [rbx+6E0h], ax
 * 000000014021F167: jmp     short loc_14021F1E8
 * 000000014021F169: or      ax, 8
 * 000000014021F16D: mov     [rbx+6E0h], ax
 * 000000014021F174: test    r8b, 8
 * 000000014021F178: jnz     short loc_14021F1E8
 * 000000014021F17A: or      ax, 2
 * 000000014021F17E: mov     [rbx+6E0h], ax
 * 000000014021F185: jmp     short loc_14021F1E8
 * 000000014021F187: movzx   eax, word ptr [rbx+6E0h]
 * 000000014021F18E: or      ax, 8
 * 000000014021F192: mov     [rbx+6E0h], ax
 * 000000014021F199: test    r8b, 8
 * 000000014021F19D: jnz     short loc_14021F1AA
 * 000000014021F19F: or      ax, 2
 * 000000014021F1A3: mov     [rbx+6E0h], ax
 * 000000014021F1AA: test    r8b, 2
 * 000000014021F1AE: jz      short loc_14021F1E8
 * 000000014021F1B0: test    r8b, 40h
 * 000000014021F1B4: jz      short loc_14021F1CD
 * 000000014021F1B6: or      word ptr [rbp+6D0h], 2
 * 000000014021F1BE: test    r14, r14
 * 000000014021F1C1: jnz     short loc_14021F1E8
 * 000000014021F1C3: or      word ptr [rsi+6E6h], 2
 * 000000014021F1CB: jmp     short loc_14021F1E8
 * 000000014021F1CD: test    r8b, 10h
 * 000000014021F1D1: jz      short loc_14021F1E8
 * 000000014021F1D3: or      word ptr [rbp+6D0h], 1
 * 000000014021F1DB: test    r14, r14
 * 000000014021F1DE: jnz     short loc_14021F1E8
 * 000000014021F1E0: or      word ptr [rsi+6E6h], 1
 * 000000014021F1E8: test    byte ptr [rbx+6E2h], 30h
 * 000000014021F1EF: mov     rcx, [rsp+98h+var_68]
 * 000000014021F1F4: mov     rdx, [rsp+98h+var_70]
 * 000000014021F1F9: jz      short loc_14021F207
 * 000000014021F1FB: mov     eax, 200h
 * 000000014021F200: or      [rbx+6E0h], ax
 * 000000014021F207: test    rdi, rdi
 * 000000014021F20A: jz      loc_14021EFB4
 * 000000014021F210: mov     rax, 8000000000h
 * 000000014021F21A: test    rax, r10
 * 000000014021F21D: jz      loc_14021EFB4
 * 000000014021F223: or      word ptr [rbp+6D0h], 4
 * 000000014021F22B: or      word ptr [rbx+6D2h], 4
 * 000000014021F233: or      word ptr [rsi+6E6h], 4
 * 000000014021F23B: or      r9w, 4
 * 000000014021F240: jmp     loc_14021EFC0
 * 000000014021F245: movzx   eax, word ptr [rbx+6ECh]
 * 000000014021F24C: test    al, 4
 * 000000014021F24E: jnz     short loc_14021F263
 * 000000014021F250: test    r14, r14
 * 000000014021F253: jz      short loc_14021F27A
 * 000000014021F255: test    byte ptr [rbx+6D6h], 1
 * 000000014021F25C: jnz     short loc_14021F27A
 * 000000014021F25E: and     r9w, 4
 * 000000014021F263: movzx   r8d, byte ptr [rsp+98h+var_50]
 * 000000014021F269: test    r9b, 1
 * 000000014021F26D: jnz     short loc_14021F2AB
 * 000000014021F26F: mov     al, 1
 * 000000014021F271: mov     [rsp+98h+arg_10], al
 * 000000014021F278: jmp     short loc_14021F2D6
 * 000000014021F27A: movzx   r8d, byte ptr [rsp+98h+var_50]
 * 000000014021F280: test    r8b, 40h
 * 000000014021F284: jz      short loc_14021F269
 * 000000014021F286: and     r9w, 4
 * 000000014021F28B: or      r9w, 2
 * 000000014021F290: jmp     short loc_14021F269
 * 000000014021F292: test    r11, r11
 * 000000014021F295: jnz     short loc_14021F2AB
 * 000000014021F297: test    r8b, 10h
 * 000000014021F29B: jnz     short loc_14021F2AB
 * 000000014021F29D: test    r14, r14
 * 000000014021F2A0: jz      short loc_14021F2CE
 * 000000014021F2A2: test    byte ptr [rbx+6D6h], 2
 * 000000014021F2A9: jnz     short loc_14021F2CE
 * 000000014021F2AB: movzx   eax, word ptr [rbx+6E0h]
 * 000000014021F2B2: or      ax, 4
 * 000000014021F2B6: mov     [rbx+6E0h], ax
 * 000000014021F2BD: test    r8b, 8
 * 000000014021F2C1: jnz     short loc_14021F2CE
 * 000000014021F2C3: or      ax, 20h
 * 000000014021F2C7: mov     [rbx+6E0h], ax
 * 000000014021F2CE: movzx   eax, [rsp+98h+arg_8]
 * 000000014021F2D6: mov     edx, 80h
 * 000000014021F2DB: movzx   ecx, r9w
 * 000000014021F2DF: or      cx, dx
 * 000000014021F2E2: cmp     [rsp+98h+var_60], 0
 * 000000014021F2E8: cmovz   cx, r9w
 * 000000014021F2ED: movzx   edx, cx
 * 000000014021F2F0: or      dx, 2
 * 000000014021F2F4: cmp     [rsp+98h+var_70], 0
 * 000000014021F2FA: cmovz   dx, cx
 * 000000014021F2FE: movzx   edi, dx
 * 000000014021F301: or      di, r10w
 * 000000014021F305: test    r12, r12
 * 000000014021F308: cmovz   di, dx
 * 000000014021F30C: test    al, al
 * 000000014021F30E: jz      short loc_14021F365
 * 000000014021F310: mov     eax, 1
 * 000000014021F315: xor     edx, edx
 * 000000014021F317: mov     ecx, 49h ; 'I'
 * 000000014021F31C: wrmsr
 * 000000014021F31E: test    r8b, 8
 * 000000014021F322: jnz     short loc_14021F329
 * 000000014021F324: call    KiFlushCurrentRsb
 * 000000014021F329: movzx   eax, word ptr [rbx+6E0h]
 * 000000014021F330: mov     ecx, 0FFFBh
 * 000000014021F335: and     ax, cx
 * 000000014021F338: mov     qword ptr [rbx+6D8h], 0
 * 000000014021F343: mov     ecx, 0FFDFh
 * 000000014021F348: mov     [rbx+6D2h], di
 * 000000014021F34F: and     ax, cx
 * 000000014021F352: mov     [rbx+6E0h], ax
 * 000000014021F359: mov     eax, 0FFAFh
 * 000000014021F35E: and     [rbx+6D4h], ax
 * 000000014021F365: movzx   eax, word ptr [rbx+6ECh]
 * 000000014021F36C: movzx   edx, di
 * 000000014021F36F: test    al, 4
 * 000000014021F371: jz      loc_14021F528
 * 000000014021F377: mov     rdx, [rsp+98h+var_58]
 * 000000014021F37C: mov     r12d, 2
 * 000000014021F382: mov     rax, [rbx+2DB0h]
 * 000000014021F389: cmp     [rsp+98h+var_68], rdx
 * 000000014021F38E: jz      short loc_14021F39B
 * 000000014021F390: lock or [rbx+6ECh], r12w
 * 000000014021F399: jmp     short loc_14021F3E5
 * 000000014021F39B: movzx   eax, word ptr [rax+6ECh]
 * 000000014021F3A2: movzx   ecx, word ptr [r15+6EAh]
 * 000000014021F3AA: test    al, 1
 * 000000014021F3AC: jnz     short loc_14021F3C9
 * 000000014021F3AE: or      cx, r12w
 * 000000014021F3B2: mov     [r15+6EAh], cx
 * 000000014021F3BA: test    r14, r14
 * 000000014021F3BD: jz      short loc_14021F3E5
 * 000000014021F3BF: or      [rsi+6E6h], r12w
 * 000000014021F3C7: jmp     short loc_14021F3E5
 * 000000014021F3C9: mov     eax, 0FFFDh
 * 000000014021F3CE: and     cx, ax
 * 000000014021F3D1: mov     [r15+6EAh], cx
 * 000000014021F3D9: test    r14, r14
 * 000000014021F3DC: jz      short loc_14021F3E5
 * 000000014021F3DE: and     [rsi+6E6h], ax
 * 000000014021F3E5: test    rdx, rdx
 * 000000014021F3E8: jnz     loc_14021F46E
 * 000000014021F3EE: mov     rcx, r13
 * 000000014021F3F1: call    KiUpdateStibpPairing
 * 000000014021F3F6: movzx   ecx, word ptr [rbx+6D2h]
 * 000000014021F3FD: mov     r9d, eax
 * 000000014021F400: movzx   r8d, word ptr [rbp+6D0h]
 * 000000014021F408: mov     eax, 0FFFCh
 * 000000014021F40D: and     cx, ax
 * 000000014021F410: and     r8w, 3
 * 000000014021F415: or      cx, r8w
 * 000000014021F419: movzx   edx, di
 * 000000014021F41C: and     dx, ax
 * 000000014021F41F: mov     [rbx+6D2h], cx
 * 000000014021F426: test    r14, r14
 * 000000014021F429: jz      short loc_14021F43A
 * 000000014021F42B: test    byte ptr [rbx+6D6h], 1
 * 000000014021F432: jz      short loc_14021F43A
 * 000000014021F434: neg     r8w
 * 000000014021F438: jmp     short loc_14021F445
 * 000000014021F43A: movzx   eax, byte ptr [rsi+6E6h]
 * 000000014021F441: and     al, 3
 * 000000014021F443: neg     al
 * 000000014021F445: sbb     ax, ax
 * 000000014021F448: mov     r8b, 1
 * 000000014021F44B: and     ax, r12w
 * 000000014021F44F: or      dx, ax
 * 000000014021F452: cmp     [rsp+98h+arg_18], 0
 * 000000014021F45A: jnz     loc_14021F534
 * 000000014021F460: lock or [rbx+6ECh], r12w
 * 000000014021F469: jmp     loc_14021F534
 * 000000014021F46E: cmp     [rsp+98h+var_78], 0
 * 000000014021F473: movzx   edx, di
 * 000000014021F476: jz      loc_14021F528
 * 000000014021F47C: prefetchw byte ptr [rbx+6ECh]
 * 000000014021F483: movzx   eax, word ptr [rbx+6ECh]
 * 000000014021F48A: mov     edx, 100h
 * 000000014021F48F: nop
 * 000000014021F490: movzx   ecx, ax
 * 000000014021F493: or      cx, dx
 * 000000014021F496: lock cmpxchg [rbx+6ECh], cx
 * 000000014021F49F: jnz     short loc_14021F490
 * 000000014021F4A1: movzx   ecx, ax
 * 000000014021F4A4: mov     rdx, 20000000000h
 * 000000014021F4AE: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014021F4B5: and     ecx, 1
 * 000000014021F4B8: test    rdx, rax
 * 000000014021F4BB: jz      short loc_14021F4F7
 * 000000014021F4BD: movzx   eax, word ptr [rbp+6D0h]
 * 000000014021F4C4: test    al, 3
 * 000000014021F4C6: jnz     short loc_14021F4D3
 * 000000014021F4C8: or      ax, r12w
 * 000000014021F4CC: mov     [rbp+6D0h], ax
 * 000000014021F4D3: movzx   eax, word ptr [rbx+6D2h]
 * 000000014021F4DA: test    al, 3
 * 000000014021F4DC: jnz     short loc_14021F4E9
 * 000000014021F4DE: or      ax, r12w
 * 000000014021F4E2: mov     [rbx+6D2h], ax
 * 000000014021F4E9: test    byte ptr [rbx+6D6h], 1
 * 000000014021F4F0: movzx   edx, di
 * 000000014021F4F3: jz      short loc_14021F51A
 * 000000014021F4F5: jmp     short loc_14021F510
 * 000000014021F4F7: movzx   eax, word ptr [rsi+6E6h]
 * 000000014021F4FE: test    al, 3
 * 000000014021F500: jnz     short loc_14021F50D
 * 000000014021F502: or      ax, r12w
 * 000000014021F506: mov     [rsi+6E6h], ax
 * 000000014021F50D: movzx   edx, di
 * 000000014021F510: test    dil, 3
 * 000000014021F514: jnz     short loc_14021F51A
 * 000000014021F516: or      dx, r12w
 * 000000014021F51A: lock or [rbx+6ECh], r12w
 * 000000014021F523: mov     r9d, ecx
 * 000000014021F526: jmp     short loc_14021F52B
 * 000000014021F528: xor     r9d, r9d
 * 000000014021F52B: movzx   r8d, [rsp+98h+arg_10]
 * 000000014021F534: mov     r15, [rsp+98h+var_38]
 * 000000014021F539: mov     r14, [rsp+98h+var_30]
 * 000000014021F53E: mov     r12, [rsp+98h+var_28]
 * 000000014021F543: mov     rsi, [rsp+98h+var_18]
 * 000000014021F54B: mov     rbp, [rsp+98h+arg_0]
 * 000000014021F553: cmp     dx, [rbx+6E4h]
 * 000000014021F55A: jz      short loc_14021F573
 * 000000014021F55C: mov     [rbx+6E4h], dx
 * 000000014021F563: mov     ecx, 48h ; 'H'
 * 000000014021F568: movzx   edx, dx
 * 000000014021F56B: mov     eax, edx
 * 000000014021F56D: shr     rdx, 20h
 * 000000014021F571: wrmsr
 * 000000014021F573: test    r8b, r8b
 * 000000014021F576: jz      short loc_14021F57F
 * 000000014021F578: or      byte ptr [rbx+6D6h], 2
 * 000000014021F57F: lfence
 * 000000014021F582: sti
 * 000000014021F583: test    r9d, r9d
 * 000000014021F586: jz      short loc_14021F590
 * 000000014021F588: mov     rcx, rbx
 * 000000014021F58B: call    KiSynchronizeStibpPairing
 * 000000014021F590: mov     rdi, [rsp+98h+var_20]
 * 000000014021F595: add     rsp, 88h
 * 000000014021F59C: pop     r13
 * 000000014021F59E: pop     rbx
 * 000000014021F59F: retn
 */
