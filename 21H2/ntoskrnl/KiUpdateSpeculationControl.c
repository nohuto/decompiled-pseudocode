/*
 * XREFs of KiUpdateSpeculationControl @ 0x1402C3600
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1403C79E0 (KeOptimizeSpecCtrlSettings.c)
 *     SwapContext @ 0x1404069A0 (SwapContext.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiIsBranchConfusionMitigationEnabled @ 0x1403F3180 (KiIsBranchConfusionMitigationEnabled.c)
 *     KiIsSrsoMitigationEnabled @ 0x1403F33BC (KiIsSrsoMitigationEnabled.c)
 *     KiFlushCurrentRsb @ 0x140413E80 (KiFlushCurrentRsb.c)
 *     KiSynchronizeStibpPairing @ 0x14051B918 (KiSynchronizeStibpPairing.c)
 *     KiUpdateSpecCtrlEnhancedIBRS @ 0x14051BB50 (KiUpdateSpecCtrlEnhancedIBRS.c)
 *     PsGetProcessSecurityDomain @ 0x140581BCC (PsGetProcessSecurityDomain.c)
 */

/*
 * Hex-Rays decompilation failed for KiUpdateSpeculationControl @ 0x1402C3600
 * Reason: Hex-Rays returned no pseudocode for 0x1402C3600
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402C3600: push    rbx
 * 00000001402C3602: push    r13
 * 00000001402C3604: sub     rsp, 88h
 * 00000001402C360B: movups  xmm0, cs:KiSpeculationFeatures
 * 00000001402C3612: mov     rax, 1000000000h
 * 00000001402C361C: mov     rbx, gs:20h
 * 00000001402C3625: movsd   xmm1, cs:qword_140CFC4B0
 * 00000001402C362D: mov     r13, rcx
 * 00000001402C3630: movups  [rsp+98h+var_50], xmm0
 * 00000001402C3635: movsd   [rsp+98h+var_40], xmm1
 * 00000001402C363B: test    qword ptr [rsp+98h+var_50], rax
 * 00000001402C3640: jz      loc_1402C3E95
 * 00000001402C3646: mov     [rsp+98h+var_20], rdi
 * 00000001402C364B: cli
 * 00000001402C364C: movzx   eax, word ptr [rbx+6E0h]
 * 00000001402C3653: mov     ecx, 0FFEFh
 * 00000001402C3658: and     ax, cx
 * 00000001402C365B: mov     ecx, 0FFBFh
 * 00000001402C3660: and     ax, cx
 * 00000001402C3663: mov     ecx, 0FFFDh
 * 00000001402C3668: and     ax, cx
 * 00000001402C366B: mov     ecx, 0FFFBh
 * 00000001402C3670: and     ax, cx
 * 00000001402C3673: mov     ecx, 0FFF7h
 * 00000001402C3678: and     ax, cx
 * 00000001402C367B: mov     ecx, 0FDFFh
 * 00000001402C3680: and     ax, cx
 * 00000001402C3683: mov     ecx, 0FFDFh
 * 00000001402C3688: and     ax, cx
 * 00000001402C368B: mov     rcx, r13
 * 00000001402C368E: mov     [rbx+6E0h], ax
 * 00000001402C3695: call    PsGetProcessSecurityDomain
 * 00000001402C369A: mov     rdi, rax
 * 00000001402C369D: mov     rcx, 8000000000000h
 * 00000001402C36A7: mov     eax, [r13+87Ch]
 * 00000001402C36AE: mov     edx, 100h
 * 00000001402C36B3: and     eax, 400000h
 * 00000001402C36B8: mov     [rsp+98h+arg_18], eax
 * 00000001402C36BF: mov     eax, 1
 * 00000001402C36C4: cmovz   rdi, rax
 * 00000001402C36C8: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001402C36CF: mov     [rsp+98h+var_58], rdi
 * 00000001402C36D4: test    rcx, rax
 * 00000001402C36D7: jz      short loc_1402C36F9
 * 00000001402C36D9: movzx   eax, word ptr [rbx+6E0h]
 * 00000001402C36E0: test    rdi, rdi
 * 00000001402C36E3: jnz     short loc_1402C36EF
 * 00000001402C36E5: mov     ecx, 0FEFFh
 * 00000001402C36EA: and     ax, cx
 * 00000001402C36ED: jmp     short loc_1402C36F2
 * 00000001402C36EF: or      ax, dx
 * 00000001402C36F2: mov     [rbx+6E0h], ax
 * 00000001402C36F9: test    byte ptr [rsp+98h+var_50], 1
 * 00000001402C36FE: jz      short loc_1402C371D
 * 00000001402C3700: mov     rdx, r13
 * 00000001402C3703: mov     rcx, rbx
 * 00000001402C3706: call    KiUpdateSpecCtrlEnhancedIBRS
 * 00000001402C370B: sti
 * 00000001402C370C: mov     rdi, [rsp+98h+var_20]
 * 00000001402C3711: add     rsp, 88h
 * 00000001402C3718: pop     r13
 * 00000001402C371A: pop     rbx
 * 00000001402C371B: retn
 * 00000001402C371D: movzx   r9d, word ptr [rbx+6E4h]
 * 00000001402C3725: mov     rax, 20000000000h
 * 00000001402C372F: mov     [rsp+98h+arg_0], rbp
 * 00000001402C3737: mov     [rsp+98h+var_18], rsi
 * 00000001402C373F: mov     [rsp+98h+var_28], r12
 * 00000001402C3744: mov     r12, qword ptr [rsp+98h+var_50]
 * 00000001402C3749: mov     [rsp+98h+var_30], r14
 * 00000001402C374E: mov     r14, r12
 * 00000001402C3751: mov     [rsp+98h+var_38], r15
 * 00000001402C3756: mov     [rsp+98h+arg_8], 0
 * 00000001402C375E: mov     [rsp+98h+arg_10], 0
 * 00000001402C3766: and     r14, rax
 * 00000001402C3769: jz      short loc_1402C379D
 * 00000001402C376B: movzx   eax, byte ptr [rbx+6D6h]
 * 00000001402C3772: test    al, 2
 * 00000001402C3774: jnz     short loc_1402C379D
 * 00000001402C3776: test    al, 1
 * 00000001402C3778: jz      short loc_1402C379D
 * 00000001402C377A: movzx   eax, byte ptr [rbx+6D4h]
 * 00000001402C3781: movzx   r9d, word ptr [rbx+6D2h]
 * 00000001402C3789: shr     al, 4
 * 00000001402C378C: and     al, 1
 * 00000001402C378E: mov     [rsp+98h+arg_10], 1
 * 00000001402C3796: mov     [rsp+98h+arg_8], al
 * 00000001402C379D: mov     rcx, 4000000000h
 * 00000001402C37A7: xor     eax, eax
 * 00000001402C37A9: test    rcx, r12
 * 00000001402C37AC: jz      short loc_1402C37C1
 * 00000001402C37AE: cmp     cs:KiSsbdMsr, 48h ; 'H'
 * 00000001402C37B5: jnz     short loc_1402C37C1
 * 00000001402C37B7: or      r9w, 4
 * 00000001402C37BC: mov     eax, 4
 * 00000001402C37C1: mov     [rbx+6E6h], ax
 * 00000001402C37C8: mov     rsi, rbx
 * 00000001402C37CB: mov     [rbx+6EAh], ax
 * 00000001402C37D2: mov     r15, rbx
 * 00000001402C37D5: mov     [rbx+6D0h], ax
 * 00000001402C37DC: mov     rbp, rbx
 * 00000001402C37DF: mov     rax, r12
 * 00000001402C37E2: mov     ecx, 80h
 * 00000001402C37E7: and     eax, 2000h
 * 00000001402C37EC: mov     [rsp+98h+var_60], rax
 * 00000001402C37F1: jz      short loc_1402C3801
 * 00000001402C37F3: or      [rbx+6E6h], cx
 * 00000001402C37FA: or      [rbx+6D0h], cx
 * 00000001402C3801: mov     rax, 80000000000h
 * 00000001402C380B: mov     rdx, r12
 * 00000001402C380E: and     rdx, rax
 * 00000001402C3811: mov     [rsp+98h+var_70], rdx
 * 00000001402C3816: jz      short loc_1402C3828
 * 00000001402C3818: or      word ptr [rsi+6E6h], 2
 * 00000001402C3820: or      word ptr [rbp+6D0h], 2
 * 00000001402C3828: mov     rax, 40000000000000h
 * 00000001402C3832: mov     ecx, 400h
 * 00000001402C3837: and     r12, rax
 * 00000001402C383A: jz      short loc_1402C384A
 * 00000001402C383C: or      [rsi+6E6h], cx
 * 00000001402C3843: or      [rbp+6D0h], cx
 * 00000001402C384A: mov     eax, [r13+87Ch]
 * 00000001402C3851: mov     r10, qword ptr [rsp+98h+var_50]
 * 00000001402C3856: mov     rcx, [rbx+6D8h]
 * 00000001402C385D: mov     r11, r10
 * 00000001402C3860: shr     eax, 17h
 * 00000001402C3863: movzx   r8d, r10b
 * 00000001402C3867: and     eax, 1
 * 00000001402C386A: mov     [rsp+98h+var_68], rcx
 * 00000001402C386F: mov     [rsp+98h+var_78], eax
 * 00000001402C3873: mov     rax, 2000000000h
 * 00000001402C387D: and     r11, rax
 * 00000001402C3880: jnz     loc_1402C3B07
 * 00000001402C3886: test    rdi, rdi
 * 00000001402C3889: jnz     loc_1402C39B0
 * 00000001402C388F: test    r10b, 2
 * 00000001402C3893: jz      short loc_1402C38B4
 * 00000001402C3895: test    r10b, 40h
 * 00000001402C3899: jz      loc_1402C3988
 * 00000001402C389F: or      word ptr [rbp+6D0h], 2
 * 00000001402C38A7: test    r14, r14
 * 00000001402C38AA: jnz     short loc_1402C38B4
 * 00000001402C38AC: or      word ptr [rsi+6E6h], 2
 * 00000001402C38B4: mov     eax, 0FFFBh
 * 00000001402C38B9: and     [rbx+6D2h], ax
 * 00000001402C38C0: movzx   eax, r8b
 * 00000001402C38C4: and     al, 42h
 * 00000001402C38C6: cmp     al, 42h ; 'B'
 * 00000001402C38C8: jnz     short loc_1402C3905
 * 00000001402C38CA: mov     rax, 100000000h
 * 00000001402C38D4: test    rax, r10
 * 00000001402C38D7: jnz     short loc_1402C38E6
 * 00000001402C38D9: test    dword ptr [r13+9D0h], 40000000h
 * 00000001402C38E4: jz      short loc_1402C3905
 * 00000001402C38E6: or      word ptr [r15+6EAh], 2
 * 00000001402C38EF: test    r14, r14
 * 00000001402C38F2: jz      short loc_1402C3905
 * 00000001402C38F4: cmp     r13, cs:PsInitialSystemProcess
 * 00000001402C38FB: jz      short loc_1402C3905
 * 00000001402C38FD: or      word ptr [rsi+6E6h], 2
 * 00000001402C3905: test    rdx, rdx
 * 00000001402C3908: jz      short loc_1402C3913
 * 00000001402C390A: or      word ptr [r15+6EAh], 2
 * 00000001402C3913: mov     rax, 8000000000h
 * 00000001402C391D: test    rax, r10
 * 00000001402C3920: jz      short loc_1402C3938
 * 00000001402C3922: test    dword ptr [r13+9D4h], 2000h
 * 00000001402C392D: jz      short loc_1402C3938
 * 00000001402C392F: or      word ptr [r15+6EAh], 4
 * 00000001402C3938: mov     r10d, 400h
 * 00000001402C393E: test    r12, r12
 * 00000001402C3941: jz      short loc_1402C394B
 * 00000001402C3943: or      [r15+6EAh], r10w
 * 00000001402C394B: test    rcx, rcx
 * 00000001402C394E: jz      loc_1402C3BCE
 * 00000001402C3954: cmp     rcx, rdi
 * 00000001402C3957: jz      loc_1402C3BCE
 * 00000001402C395D: cmp     rcx, [r13+9E8h]
 * 00000001402C3964: jz      loc_1402C3BCE
 * 00000001402C396A: test    r9b, 1
 * 00000001402C396E: jz      loc_1402C3B92
 * 00000001402C3974: test    r8b, 2
 * 00000001402C3978: jnz     loc_1402C3B45
 * 00000001402C397E: and     r9w, 4
 * 00000001402C3983: jmp     loc_1402C3B69
 * 00000001402C3988: test    r8b, 10h
 * 00000001402C398C: jz      loc_1402C38B4
 * 00000001402C3992: or      word ptr [rbp+6D0h], 1
 * 00000001402C399A: test    r14, r14
 * 00000001402C399D: jnz     loc_1402C38B4
 * 00000001402C39A3: or      word ptr [rsi+6E6h], 1
 * 00000001402C39AB: jmp     loc_1402C38B4
 * 00000001402C39B0: lea     rcx, [rsp+98h+var_50]
 * 00000001402C39B5: call    KiIsBranchConfusionMitigationEnabled
 * 00000001402C39BA: test    eax, eax
 * 00000001402C39BC: jnz     loc_1402C3A87
 * 00000001402C39C2: lea     rcx, [rsp+98h+var_50]
 * 00000001402C39C7: call    KiIsSrsoMitigationEnabled
 * 00000001402C39CC: test    eax, eax
 * 00000001402C39CE: jnz     loc_1402C3A87
 * 00000001402C39D4: test    r8b, 10h
 * 00000001402C39D8: jz      short loc_1402C3A06
 * 00000001402C39DA: or      word ptr [rbp+6D0h], 1
 * 00000001402C39E2: test    r14, r14
 * 00000001402C39E5: jnz     short loc_1402C39EF
 * 00000001402C39E7: or      word ptr [rsi+6E6h], 1
 * 00000001402C39EF: test    r8b, 20h
 * 00000001402C39F3: jnz     loc_1402C3AE8
 * 00000001402C39F9: or      word ptr [rbx+6E0h], 2
 * 00000001402C3A01: jmp     loc_1402C3AE8
 * 00000001402C3A06: movzx   eax, r8b
 * 00000001402C3A0A: and     al, 42h
 * 00000001402C3A0C: cmp     al, 42h ; 'B'
 * 00000001402C3A0E: jnz     short loc_1402C3A25
 * 00000001402C3A10: or      word ptr [rbp+6D0h], 2
 * 00000001402C3A18: test    r14, r14
 * 00000001402C3A1B: jnz     short loc_1402C3A25
 * 00000001402C3A1D: or      word ptr [rsi+6E6h], 2
 * 00000001402C3A25: movzx   eax, word ptr [rbx+6E0h]
 * 00000001402C3A2C: test    r14, r14
 * 00000001402C3A2F: jz      short loc_1402C3A69
 * 00000001402C3A31: or      ax, 10h
 * 00000001402C3A35: mov     [rbx+6E0h], ax
 * 00000001402C3A3C: test    r8b, 20h
 * 00000001402C3A40: jnz     short loc_1402C3A52
 * 00000001402C3A42: or      ax, 2
 * 00000001402C3A46: mov     [rbx+6E0h], ax
 * 00000001402C3A4D: jmp     loc_1402C3AE8
 * 00000001402C3A52: test    r8b, 8
 * 00000001402C3A56: jnz     loc_1402C3AE8
 * 00000001402C3A5C: or      ax, 40h
 * 00000001402C3A60: mov     [rbx+6E0h], ax
 * 00000001402C3A67: jmp     short loc_1402C3AE8
 * 00000001402C3A69: or      ax, 8
 * 00000001402C3A6D: mov     [rbx+6E0h], ax
 * 00000001402C3A74: test    r8b, 8
 * 00000001402C3A78: jnz     short loc_1402C3AE8
 * 00000001402C3A7A: or      ax, 2
 * 00000001402C3A7E: mov     [rbx+6E0h], ax
 * 00000001402C3A85: jmp     short loc_1402C3AE8
 * 00000001402C3A87: movzx   eax, word ptr [rbx+6E0h]
 * 00000001402C3A8E: or      ax, 8
 * 00000001402C3A92: mov     [rbx+6E0h], ax
 * 00000001402C3A99: test    r8b, 8
 * 00000001402C3A9D: jnz     short loc_1402C3AAA
 * 00000001402C3A9F: or      ax, 2
 * 00000001402C3AA3: mov     [rbx+6E0h], ax
 * 00000001402C3AAA: test    r8b, 2
 * 00000001402C3AAE: jz      short loc_1402C3AE8
 * 00000001402C3AB0: test    r8b, 40h
 * 00000001402C3AB4: jz      short loc_1402C3ACD
 * 00000001402C3AB6: or      word ptr [rbp+6D0h], 2
 * 00000001402C3ABE: test    r14, r14
 * 00000001402C3AC1: jnz     short loc_1402C3AE8
 * 00000001402C3AC3: or      word ptr [rsi+6E6h], 2
 * 00000001402C3ACB: jmp     short loc_1402C3AE8
 * 00000001402C3ACD: test    r8b, 10h
 * 00000001402C3AD1: jz      short loc_1402C3AE8
 * 00000001402C3AD3: or      word ptr [rbp+6D0h], 1
 * 00000001402C3ADB: test    r14, r14
 * 00000001402C3ADE: jnz     short loc_1402C3AE8
 * 00000001402C3AE0: or      word ptr [rsi+6E6h], 1
 * 00000001402C3AE8: test    byte ptr [rbx+6E2h], 30h
 * 00000001402C3AEF: mov     rcx, [rsp+98h+var_68]
 * 00000001402C3AF4: mov     rdx, [rsp+98h+var_70]
 * 00000001402C3AF9: jz      short loc_1402C3B07
 * 00000001402C3AFB: mov     eax, 200h
 * 00000001402C3B00: or      [rbx+6E0h], ax
 * 00000001402C3B07: test    rdi, rdi
 * 00000001402C3B0A: jz      loc_1402C38B4
 * 00000001402C3B10: mov     rax, 8000000000h
 * 00000001402C3B1A: test    rax, r10
 * 00000001402C3B1D: jz      loc_1402C38B4
 * 00000001402C3B23: or      word ptr [rbp+6D0h], 4
 * 00000001402C3B2B: or      word ptr [rbx+6D2h], 4
 * 00000001402C3B33: or      word ptr [rsi+6E6h], 4
 * 00000001402C3B3B: or      r9w, 4
 * 00000001402C3B40: jmp     loc_1402C38C0
 * 00000001402C3B45: movzx   eax, word ptr [rbx+6ECh]
 * 00000001402C3B4C: test    al, 4
 * 00000001402C3B4E: jnz     short loc_1402C3B63
 * 00000001402C3B50: test    r14, r14
 * 00000001402C3B53: jz      short loc_1402C3B7A
 * 00000001402C3B55: test    byte ptr [rbx+6D6h], 1
 * 00000001402C3B5C: jnz     short loc_1402C3B7A
 * 00000001402C3B5E: and     r9w, 4
 * 00000001402C3B63: movzx   r8d, byte ptr [rsp+98h+var_50]
 * 00000001402C3B69: test    r9b, 1
 * 00000001402C3B6D: jnz     short loc_1402C3BAB
 * 00000001402C3B6F: mov     al, 1
 * 00000001402C3B71: mov     [rsp+98h+arg_10], al
 * 00000001402C3B78: jmp     short loc_1402C3BD6
 * 00000001402C3B7A: movzx   r8d, byte ptr [rsp+98h+var_50]
 * 00000001402C3B80: test    r8b, 40h
 * 00000001402C3B84: jz      short loc_1402C3B69
 * 00000001402C3B86: and     r9w, 4
 * 00000001402C3B8B: or      r9w, 2
 * 00000001402C3B90: jmp     short loc_1402C3B69
 * 00000001402C3B92: test    r11, r11
 * 00000001402C3B95: jnz     short loc_1402C3BAB
 * 00000001402C3B97: test    r8b, 10h
 * 00000001402C3B9B: jnz     short loc_1402C3BAB
 * 00000001402C3B9D: test    r14, r14
 * 00000001402C3BA0: jz      short loc_1402C3BCE
 * 00000001402C3BA2: test    byte ptr [rbx+6D6h], 2
 * 00000001402C3BA9: jnz     short loc_1402C3BCE
 * 00000001402C3BAB: movzx   eax, word ptr [rbx+6E0h]
 * 00000001402C3BB2: or      ax, 4
 * 00000001402C3BB6: mov     [rbx+6E0h], ax
 * 00000001402C3BBD: test    r8b, 8
 * 00000001402C3BC1: jnz     short loc_1402C3BCE
 * 00000001402C3BC3: or      ax, 20h
 * 00000001402C3BC7: mov     [rbx+6E0h], ax
 * 00000001402C3BCE: movzx   eax, [rsp+98h+arg_8]
 * 00000001402C3BD6: mov     edx, 80h
 * 00000001402C3BDB: movzx   ecx, r9w
 * 00000001402C3BDF: or      cx, dx
 * 00000001402C3BE2: cmp     [rsp+98h+var_60], 0
 * 00000001402C3BE8: cmovz   cx, r9w
 * 00000001402C3BED: movzx   edx, cx
 * 00000001402C3BF0: or      dx, 2
 * 00000001402C3BF4: cmp     [rsp+98h+var_70], 0
 * 00000001402C3BFA: cmovz   dx, cx
 * 00000001402C3BFE: movzx   edi, dx
 * 00000001402C3C01: or      di, r10w
 * 00000001402C3C05: test    r12, r12
 * 00000001402C3C08: cmovz   di, dx
 * 00000001402C3C0C: test    al, al
 * 00000001402C3C0E: jz      short loc_1402C3C65
 * 00000001402C3C10: mov     eax, 1
 * 00000001402C3C15: xor     edx, edx
 * 00000001402C3C17: mov     ecx, 49h ; 'I'
 * 00000001402C3C1C: wrmsr
 * 00000001402C3C1E: test    r8b, 8
 * 00000001402C3C22: jnz     short loc_1402C3C29
 * 00000001402C3C24: call    KiFlushCurrentRsb
 * 00000001402C3C29: movzx   eax, word ptr [rbx+6E0h]
 * 00000001402C3C30: mov     ecx, 0FFFBh
 * 00000001402C3C35: and     ax, cx
 * 00000001402C3C38: mov     qword ptr [rbx+6D8h], 0
 * 00000001402C3C43: mov     ecx, 0FFDFh
 * 00000001402C3C48: mov     [rbx+6D2h], di
 * 00000001402C3C4F: and     ax, cx
 * 00000001402C3C52: mov     [rbx+6E0h], ax
 * 00000001402C3C59: mov     eax, 0FFAFh
 * 00000001402C3C5E: and     [rbx+6D4h], ax
 * 00000001402C3C65: movzx   eax, word ptr [rbx+6ECh]
 * 00000001402C3C6C: movzx   edx, di
 * 00000001402C3C6F: test    al, 4
 * 00000001402C3C71: jz      loc_1402C3E28
 * 00000001402C3C77: mov     rdx, [rsp+98h+var_58]
 * 00000001402C3C7C: mov     r12d, 2
 * 00000001402C3C82: mov     rax, [rbx+2DB0h]
 * 00000001402C3C89: cmp     [rsp+98h+var_68], rdx
 * 00000001402C3C8E: jz      short loc_1402C3C9B
 * 00000001402C3C90: lock or [rbx+6ECh], r12w
 * 00000001402C3C99: jmp     short loc_1402C3CE5
 * 00000001402C3C9B: movzx   eax, word ptr [rax+6ECh]
 * 00000001402C3CA2: movzx   ecx, word ptr [r15+6EAh]
 * 00000001402C3CAA: test    al, 1
 * 00000001402C3CAC: jnz     short loc_1402C3CC9
 * 00000001402C3CAE: or      cx, r12w
 * 00000001402C3CB2: mov     [r15+6EAh], cx
 * 00000001402C3CBA: test    r14, r14
 * 00000001402C3CBD: jz      short loc_1402C3CE5
 * 00000001402C3CBF: or      [rsi+6E6h], r12w
 * 00000001402C3CC7: jmp     short loc_1402C3CE5
 * 00000001402C3CC9: mov     eax, 0FFFDh
 * 00000001402C3CCE: and     cx, ax
 * 00000001402C3CD1: mov     [r15+6EAh], cx
 * 00000001402C3CD9: test    r14, r14
 * 00000001402C3CDC: jz      short loc_1402C3CE5
 * 00000001402C3CDE: and     [rsi+6E6h], ax
 * 00000001402C3CE5: test    rdx, rdx
 * 00000001402C3CE8: jnz     loc_1402C3D6E
 * 00000001402C3CEE: mov     rcx, r13
 * 00000001402C3CF1: call    KiUpdateStibpPairing
 * 00000001402C3CF6: movzx   ecx, word ptr [rbx+6D2h]
 * 00000001402C3CFD: mov     r9d, eax
 * 00000001402C3D00: movzx   r8d, word ptr [rbp+6D0h]
 * 00000001402C3D08: mov     eax, 0FFFCh
 * 00000001402C3D0D: and     cx, ax
 * 00000001402C3D10: and     r8w, 3
 * 00000001402C3D15: or      cx, r8w
 * 00000001402C3D19: movzx   edx, di
 * 00000001402C3D1C: and     dx, ax
 * 00000001402C3D1F: mov     [rbx+6D2h], cx
 * 00000001402C3D26: test    r14, r14
 * 00000001402C3D29: jz      short loc_1402C3D3A
 * 00000001402C3D2B: test    byte ptr [rbx+6D6h], 1
 * 00000001402C3D32: jz      short loc_1402C3D3A
 * 00000001402C3D34: neg     r8w
 * 00000001402C3D38: jmp     short loc_1402C3D45
 * 00000001402C3D3A: movzx   eax, byte ptr [rsi+6E6h]
 * 00000001402C3D41: and     al, 3
 * 00000001402C3D43: neg     al
 * 00000001402C3D45: sbb     ax, ax
 * 00000001402C3D48: mov     r8b, 1
 * 00000001402C3D4B: and     ax, r12w
 * 00000001402C3D4F: or      dx, ax
 * 00000001402C3D52: cmp     [rsp+98h+arg_18], 0
 * 00000001402C3D5A: jnz     loc_1402C3E34
 * 00000001402C3D60: lock or [rbx+6ECh], r12w
 * 00000001402C3D69: jmp     loc_1402C3E34
 * 00000001402C3D6E: cmp     [rsp+98h+var_78], 0
 * 00000001402C3D73: movzx   edx, di
 * 00000001402C3D76: jz      loc_1402C3E28
 * 00000001402C3D7C: prefetchw byte ptr [rbx+6ECh]
 * 00000001402C3D83: movzx   eax, word ptr [rbx+6ECh]
 * 00000001402C3D8A: mov     edx, 100h
 * 00000001402C3D8F: nop
 * 00000001402C3D90: movzx   ecx, ax
 * 00000001402C3D93: or      cx, dx
 * 00000001402C3D96: lock cmpxchg [rbx+6ECh], cx
 * 00000001402C3D9F: jnz     short loc_1402C3D90
 * 00000001402C3DA1: movzx   ecx, ax
 * 00000001402C3DA4: mov     rdx, 20000000000h
 * 00000001402C3DAE: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001402C3DB5: and     ecx, 1
 * 00000001402C3DB8: test    rdx, rax
 * 00000001402C3DBB: jz      short loc_1402C3DF7
 * 00000001402C3DBD: movzx   eax, word ptr [rbp+6D0h]
 * 00000001402C3DC4: test    al, 3
 * 00000001402C3DC6: jnz     short loc_1402C3DD3
 * 00000001402C3DC8: or      ax, r12w
 * 00000001402C3DCC: mov     [rbp+6D0h], ax
 * 00000001402C3DD3: movzx   eax, word ptr [rbx+6D2h]
 * 00000001402C3DDA: test    al, 3
 * 00000001402C3DDC: jnz     short loc_1402C3DE9
 * 00000001402C3DDE: or      ax, r12w
 * 00000001402C3DE2: mov     [rbx+6D2h], ax
 * 00000001402C3DE9: test    byte ptr [rbx+6D6h], 1
 * 00000001402C3DF0: movzx   edx, di
 * 00000001402C3DF3: jz      short loc_1402C3E1A
 * 00000001402C3DF5: jmp     short loc_1402C3E10
 * 00000001402C3DF7: movzx   eax, word ptr [rsi+6E6h]
 * 00000001402C3DFE: test    al, 3
 * 00000001402C3E00: jnz     short loc_1402C3E0D
 * 00000001402C3E02: or      ax, r12w
 * 00000001402C3E06: mov     [rsi+6E6h], ax
 * 00000001402C3E0D: movzx   edx, di
 * 00000001402C3E10: test    dil, 3
 * 00000001402C3E14: jnz     short loc_1402C3E1A
 * 00000001402C3E16: or      dx, r12w
 * 00000001402C3E1A: lock or [rbx+6ECh], r12w
 * 00000001402C3E23: mov     r9d, ecx
 * 00000001402C3E26: jmp     short loc_1402C3E2B
 * 00000001402C3E28: xor     r9d, r9d
 * 00000001402C3E2B: movzx   r8d, [rsp+98h+arg_10]
 * 00000001402C3E34: mov     r15, [rsp+98h+var_38]
 * 00000001402C3E39: mov     r14, [rsp+98h+var_30]
 * 00000001402C3E3E: mov     r12, [rsp+98h+var_28]
 * 00000001402C3E43: mov     rsi, [rsp+98h+var_18]
 * 00000001402C3E4B: mov     rbp, [rsp+98h+arg_0]
 * 00000001402C3E53: cmp     dx, [rbx+6E4h]
 * 00000001402C3E5A: jz      short loc_1402C3E73
 * 00000001402C3E5C: mov     [rbx+6E4h], dx
 * 00000001402C3E63: mov     ecx, 48h ; 'H'
 * 00000001402C3E68: movzx   edx, dx
 * 00000001402C3E6B: mov     eax, edx
 * 00000001402C3E6D: shr     rdx, 20h
 * 00000001402C3E71: wrmsr
 * 00000001402C3E73: test    r8b, r8b
 * 00000001402C3E76: jz      short loc_1402C3E7F
 * 00000001402C3E78: or      byte ptr [rbx+6D6h], 2
 * 00000001402C3E7F: lfence
 * 00000001402C3E82: sti
 * 00000001402C3E83: test    r9d, r9d
 * 00000001402C3E86: jz      short loc_1402C3E90
 * 00000001402C3E88: mov     rcx, rbx
 * 00000001402C3E8B: call    KiSynchronizeStibpPairing
 * 00000001402C3E90: mov     rdi, [rsp+98h+var_20]
 * 00000001402C3E95: add     rsp, 88h
 * 00000001402C3E9C: pop     r13
 * 00000001402C3E9E: pop     rbx
 * 00000001402C3E9F: retn
 */
