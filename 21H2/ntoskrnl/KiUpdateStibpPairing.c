/*
 * XREFs of KiUpdateStibpPairing @ 0x14021F5B0
 * Callers:
 *     KiUpdateSpeculationControl @ 0x14021ED00 (KiUpdateSpeculationControl.c)
 *     NtContinueEx @ 0x1403FE630 (NtContinueEx.c)
 *     NtRaiseException @ 0x1403FEA60 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1403FF5C0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1403FFF40 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140400330 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140400720 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140400B10 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140400F00 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140401B40 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140402EF0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1404044B0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1404048B0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140404F60 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140405690 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140405CF0 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1404071F0 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x140408680 (NtCallEnclave.c)
 *     KiBoundFault @ 0x14040B9C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14040C040 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14040DD00 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x14040F200 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x14040FC00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140410280 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140411A00 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1404127C0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140412C80 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140413100 (KiUmsFastReturnToUser.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x14051B320 (KePrepareToDispatchVirtualProcessor.c)
 *     KiCopyCounters @ 0x14051BE60 (KiCopyCounters.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140413D80 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiUpdateStibpPairing @ 0x14021F5B0
 * Reason: Hex-Rays returned no pseudocode for 0x14021F5B0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014021F5B0: mov     [rsp+arg_10], rbx
 * 000000014021F5B5: push    rbp
 * 000000014021F5B6: push    rsi
 * 000000014021F5B7: push    rdi
 * 000000014021F5B8: push    r12
 * 000000014021F5BA: push    r13
 * 000000014021F5BC: push    r14
 * 000000014021F5BE: push    r15
 * 000000014021F5C0: sub     rsp, 20h
 * 000000014021F5C4: mov     rbx, gs:20h
 * 000000014021F5CD: xor     ebp, ebp
 * 000000014021F5CF: mov     r11d, 1
 * 000000014021F5D5: mov     r15d, ebp
 * 000000014021F5D8: mov     r12d, r11d
 * 000000014021F5DB: test    rcx, rcx
 * 000000014021F5DE: jnz     short loc_14021F5F3
 * 000000014021F5E0: mov     rax, gs:188h
 * 000000014021F5E9: mov     r12d, ebp
 * 000000014021F5EC: mov     rcx, [rax+220h]
 * 000000014021F5F3: mov     esi, [rcx+87Ch]
 * 000000014021F5F9: mov     r13d, ebp
 * 000000014021F5FC: mov     r14, [rcx+9E0h]
 * 000000014021F603: mov     eax, esi
 * 000000014021F605: mov     rdi, [rbx+2DB0h]
 * 000000014021F60C: shr     eax, 16h
 * 000000014021F60F: and     eax, r11d
 * 000000014021F612: mov     [rsp+58h+arg_8], eax
 * 000000014021F616: mov     eax, esi
 * 000000014021F618: shr     eax, 17h
 * 000000014021F61B: and     esi, 0C00000h
 * 000000014021F621: and     eax, r11d
 * 000000014021F624: mov     [rsp+58h+arg_0], eax
 * 000000014021F628: test    r12d, r12d
 * 000000014021F62B: jnz     loc_14021F6BD
 * 000000014021F631: mov     rax, [rbx+6D8h]
 * 000000014021F638: cmp     r14, rax
 * 000000014021F63B: jz      short loc_14021F66F
 * 000000014021F63D: mov     eax, 20h ; ' '
 * 000000014021F642: lock or [rdi+6ECh], ax
 * 000000014021F64A: mov     [rbx+6D8h], r14
 * 000000014021F651: mov     r15d, r11d
 * 000000014021F654: or      word ptr [rbx+6E0h], 4
 * 000000014021F65C: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014021F663: test    al, 8
 * 000000014021F665: jnz     short loc_14021F66F
 * 000000014021F667: or      word ptr [rbx+6E0h], 20h
 * 000000014021F66F: movzx   eax, word ptr [rbx+6E0h]
 * 000000014021F676: test    al, 4
 * 000000014021F678: jz      short loc_14021F699
 * 000000014021F67A: mov     eax, r11d
 * 000000014021F67D: xor     edx, edx
 * 000000014021F67F: mov     ecx, 49h ; 'I'
 * 000000014021F684: wrmsr
 * 000000014021F686: mov     ecx, 0FFFBh
 * 000000014021F68B: and     [rbx+6E0h], cx
 * 000000014021F692: movzx   eax, word ptr [rbx+6E0h]
 * 000000014021F699: test    al, 20h
 * 000000014021F69B: jz      loc_14021F759
 * 000000014021F6A1: call    KiFlushCurrentRsb
 * 000000014021F6A6: mov     ecx, 0FFDFh
 * 000000014021F6AB: mov     r11d, 1
 * 000000014021F6B1: and     [rbx+6E0h], cx
 * 000000014021F6B8: jmp     loc_14021F759
 * 000000014021F6BD: cmp     [rsp+58h+arg_8], ebp
 * 000000014021F6C1: jz      loc_14021F759
 * 000000014021F6C7: mov     rax, [rbx+6D8h]
 * 000000014021F6CE: test    rax, rax
 * 000000014021F6D1: jz      loc_14021F759
 * 000000014021F6D7: mov     eax, r11d
 * 000000014021F6DA: xor     edx, edx
 * 000000014021F6DC: mov     ecx, 49h ; 'I'
 * 000000014021F6E1: wrmsr
 * 000000014021F6E3: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014021F6EA: test    al, 8
 * 000000014021F6EC: jz      short loc_14021F6F7
 * 000000014021F6EE: movzx   eax, word ptr [rbx+6E0h]
 * 000000014021F6F5: jmp     short loc_14021F71D
 * 000000014021F6F7: call    KiFlushCurrentRsb
 * 000000014021F6FC: mov     eax, 0FFBFh
 * 000000014021F701: mov     ecx, 0FFDFh
 * 000000014021F706: and     [rbx+6D4h], ax
 * 000000014021F70D: mov     r11d, 1
 * 000000014021F713: movzx   eax, word ptr [rbx+6E0h]
 * 000000014021F71A: and     ax, cx
 * 000000014021F71D: mov     ecx, 0FFFBh
 * 000000014021F722: and     ax, cx
 * 000000014021F725: mov     [rbx+6E0h], ax
 * 000000014021F72C: mov     eax, 20h ; ' '
 * 000000014021F731: lock or [rdi+6ECh], ax
 * 000000014021F739: or      byte ptr [rbx+6D6h], 2
 * 000000014021F740: mov     eax, 0FFEFh
 * 000000014021F745: mov     [rbx+6D8h], r14
 * 000000014021F74C: mov     r15d, r11d
 * 000000014021F74F: and     [rbx+6D4h], ax
 * 000000014021F756: mov     r13d, r11d
 * 000000014021F759: mov     edx, 2
 * 000000014021F75E: cmp     esi, 400000h
 * 000000014021F764: jz      short loc_14021F7A2
 * 000000014021F766: cmp     [rsp+58h+arg_0], ebp
 * 000000014021F76A: jnz     short loc_14021F795
 * 000000014021F76C: mov     ecx, 0FFFFFEFFh
 * 000000014021F771: movzx   eax, word ptr [rbx+6ECh]
 * 000000014021F778: movzx   r8d, ax
 * 000000014021F77C: and     r8w, cx
 * 000000014021F780: or      r8w, dx
 * 000000014021F784: lock cmpxchg [rbx+6ECh], r8w
 * 000000014021F78E: jnz     short loc_14021F771
 * 000000014021F790: mov     r14, rdx
 * 000000014021F793: jmp     short loc_14021F7FA
 * 000000014021F795: movzx   r8d, word ptr [rbx+6ECh]
 * 000000014021F79D: mov     r14, rdx
 * 000000014021F7A0: jmp     short loc_14021F7FA
 * 000000014021F7A2: mov     edx, 0FFFFFEFDh
 * 000000014021F7A7: prefetchw byte ptr [rbx+6ECh]
 * 000000014021F7AE: movzx   eax, word ptr [rbx+6ECh]
 * 000000014021F7B5: test    r12d, r12d
 * 000000014021F7B8: jz      short loc_14021F7E0
 * 000000014021F7BA: nop     word ptr [rax+rax+00h]
 * 000000014021F7C0: movzx   ecx, ax
 * 000000014021F7C3: and     cx, dx
 * 000000014021F7C6: lock cmpxchg [rbx+6ECh], cx
 * 000000014021F7CF: jnz     short loc_14021F7C0
 * 000000014021F7D1: jmp     short loc_14021F7F1
 * 000000014021F7E0: movzx   ecx, ax
 * 000000014021F7E3: and     cx, dx
 * 000000014021F7E6: lock cmpxchg [rbx+6ECh], cx
 * 000000014021F7EF: jnz     short loc_14021F7E0
 * 000000014021F7F1: mov     edx, 2
 * 000000014021F7F6: movzx   r8d, ax
 * 000000014021F7FA: mov     rax, [rdi+6D8h]
 * 000000014021F801: mov     r10d, ebp
 * 000000014021F804: test    rax, rax
 * 000000014021F807: jnz     short loc_14021F81A
 * 000000014021F809: test    r8b, 10h
 * 000000014021F80D: jz      short loc_14021F81A
 * 000000014021F80F: mov     rax, r11
 * 000000014021F812: lock or [rbx+6ECh], dx
 * 000000014021F81A: mov     esi, 100h
 * 000000014021F81F: cmp     r14, rax
 * 000000014021F822: jz      short loc_14021F82E
 * 000000014021F824: test    r8b, 8
 * 000000014021F828: jz      loc_14021F8AF
 * 000000014021F82E: movzx   r9d, r8w
 * 000000014021F832: and     r9w, 1
 * 000000014021F837: nop     word ptr [rax+rax+00000000h]
 * 000000014021F840: movzx   edx, word ptr [rdi+6ECh]
 * 000000014021F847: movzx   ecx, dx
 * 000000014021F84A: and     cx, 0FFEFh
 * 000000014021F84E: movzx   eax, cx
 * 000000014021F851: or      ax, 1
 * 000000014021F855: test    r14, r14
 * 000000014021F858: jz      short loc_14021F861
 * 000000014021F85A: movzx   eax, cx
 * 000000014021F85D: or      ax, 11h
 * 000000014021F861: movzx   ecx, ax
 * 000000014021F864: or      cx, 2
 * 000000014021F868: test    r9w, r9w
 * 000000014021F86C: cmovnz  cx, ax
 * 000000014021F870: test    si, cx
 * 000000014021F873: jnz     short loc_14021F888
 * 000000014021F875: cmp     cx, dx
 * 000000014021F878: jz      short loc_14021F888
 * 000000014021F87A: movzx   eax, dx
 * 000000014021F87D: lock cmpxchg [rdi+6ECh], cx
 * 000000014021F886: jnz     short loc_14021F840
 * 000000014021F888: test    si, dx
 * 000000014021F88B: jnz     short loc_14021F8AC
 * 000000014021F88D: mov     rax, [rdi+6D8h]
 * 000000014021F894: test    rax, rax
 * 000000014021F897: jnz     short loc_14021F8AF
 * 000000014021F899: test    r8b, 10h
 * 000000014021F89D: jz      short loc_14021F8AF
 * 000000014021F89F: mov     ecx, 2
 * 000000014021F8A4: lock or [rbx+6ECh], cx
 * 000000014021F8AC: mov     rax, r11
 * 000000014021F8AF: mov     r11d, 0FFFDh
 * 000000014021F8B5: cmp     rax, r14
 * 000000014021F8B8: jz      short loc_14021F8C0
 * 000000014021F8BA: test    r8b, 8
 * 000000014021F8BE: jz      short loc_14021F900
 * 000000014021F8C0: cmp     [rsp+58h+arg_0], ebp
 * 000000014021F8C4: jnz     short loc_14021F900
 * 000000014021F8C6: cmp     rax, 1
 * 000000014021F8CA: jz      short loc_14021F900
 * 000000014021F8CC: and     [rbx+6EAh], r11w
 * 000000014021F8D4: mov     r9, 20000000000h
 * 000000014021F8DE: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014021F8E5: test    r9, rax
 * 000000014021F8E8: jz      short loc_14021F8F2
 * 000000014021F8EA: and     [rbx+6E6h], r11w
 * 000000014021F8F2: mov     edx, 1
 * 000000014021F8F7: mov     r10d, edx
 * 000000014021F8FA: jmp     short loc_14021F953
 * 000000014021F900: movzx   eax, word ptr [rdi+6ECh]
 * 000000014021F907: movzx   ecx, r8b
 * 000000014021F90B: or      cl, al
 * 000000014021F90D: test    cl, 1
 * 000000014021F910: jz      short loc_14021F928
 * 000000014021F912: movzx   ecx, ax
 * 000000014021F915: and     cx, 0FFEEh
 * 000000014021F919: or      cx, 2
 * 000000014021F91D: lock cmpxchg [rdi+6ECh], cx
 * 000000014021F926: jnz     short loc_14021F900
 * 000000014021F928: or      word ptr [rbx+6EAh], 2
 * 000000014021F930: mov     r9, 20000000000h
 * 000000014021F93A: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014021F941: mov     edx, 1
 * 000000014021F946: test    r9, rax
 * 000000014021F949: jz      short loc_14021F953
 * 000000014021F94B: or      word ptr [rbx+6E6h], 2
 * 000000014021F953: test    r15d, r15d
 * 000000014021F956: jz      short loc_14021F97D
 * 000000014021F958: nop     dword ptr [rax+rax+00000000h]
 * 000000014021F960: movzx   eax, word ptr [rdi+6ECh]
 * 000000014021F967: movzx   ecx, ax
 * 000000014021F96A: and     cx, 0FFDFh
 * 000000014021F96E: or      cx, 2
 * 000000014021F972: lock cmpxchg [rdi+6ECh], cx
 * 000000014021F97B: jnz     short loc_14021F960
 * 000000014021F97D: test    r10d, r10d
 * 000000014021F980: jnz     short loc_14021F9BB
 * 000000014021F982: cmp     [rsp+58h+arg_0], ebp
 * 000000014021F986: jz      short loc_14021F9BB
 * 000000014021F988: prefetchw byte ptr [rbx+6ECh]
 * 000000014021F98F: movzx   eax, word ptr [rbx+6ECh]
 * 000000014021F996: nop     word ptr [rax+rax+00000000h]
 * 000000014021F9A0: movzx   ecx, ax
 * 000000014021F9A3: or      cx, si
 * 000000014021F9A6: lock cmpxchg [rbx+6ECh], cx
 * 000000014021F9AF: jnz     short loc_14021F9A0
 * 000000014021F9B1: test    al, 1
 * 000000014021F9B3: jz      short loc_14021F9BB
 * 000000014021F9B5: test    r12d, r12d
 * 000000014021F9B8: cmovnz  ebp, edx
 * 000000014021F9BB: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014021F9C2: movzx   edx, word ptr [rbx+6E6h]
 * 000000014021F9C9: test    r9, rax
 * 000000014021F9CC: jz      short loc_14021F9D5
 * 000000014021F9CE: movzx   edx, word ptr [rbx+6D0h]
 * 000000014021F9D5: test    r14, r14
 * 000000014021F9D8: jnz     short loc_14021FA3A
 * 000000014021F9DA: test    r8b, 10h
 * 000000014021F9DE: jnz     short loc_14021FA2C
 * 000000014021F9E0: mov     eax, 0FFFCh
 * 000000014021F9E5: and     dx, ax
 * 000000014021F9E8: mov     [rbx+6D0h], dx
 * 000000014021F9EF: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014021F9F6: test    r9, rax
 * 000000014021F9F9: jz      short loc_14021FA14
 * 000000014021F9FB: and     [rbx+6E6h], r11w
 * 000000014021FA03: and     [rbx+6EAh], r11w
 * 000000014021FA0B: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014021FA12: jmp     short loc_14021FA61
 * 000000014021FA14: and     [rbx+6EAh], r11w
 * 000000014021FA1C: mov     [rbx+6E6h], dx
 * 000000014021FA23: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014021FA2A: jmp     short loc_14021FA61
 * 000000014021FA2C: mov     eax, 0FFFEh
 * 000000014021FA31: and     dx, ax
 * 000000014021FA34: or      dx, 2
 * 000000014021FA38: jmp     short loc_14021FA5A
 * 000000014021FA3A: test    dl, 3
 * 000000014021FA3D: jnz     short loc_14021FA61
 * 000000014021FA3F: and     dx, r11w
 * 000000014021FA43: or      dx, 1
 * 000000014021FA47: mov     [rbx+6D0h], dx
 * 000000014021FA4E: mov     rcx, qword ptr cs:KiSpeculationFeatures
 * 000000014021FA55: test    r9, rcx
 * 000000014021FA58: jnz     short loc_14021FA61
 * 000000014021FA5A: mov     [rbx+6E6h], dx
 * 000000014021FA61: test    r13d, r13d
 * 000000014021FA64: jz      short loc_14021FA79
 * 000000014021FA66: mov     eax, 0FFEFh
 * 000000014021FA6B: mov     [rbx+6D2h], dx
 * 000000014021FA72: and     [rbx+6D4h], ax
 * 000000014021FA79: mov     rbx, [rsp+58h+arg_10]
 * 000000014021FA7E: mov     eax, ebp
 * 000000014021FA80: add     rsp, 20h
 * 000000014021FA84: pop     r15
 * 000000014021FA86: pop     r14
 * 000000014021FA88: pop     r13
 * 000000014021FA8A: pop     r12
 * 000000014021FA8C: pop     rdi
 * 000000014021FA8D: pop     rsi
 * 000000014021FA8E: pop     rbp
 * 000000014021FA8F: retn
 */
