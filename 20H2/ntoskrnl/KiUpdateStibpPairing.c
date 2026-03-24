/*
 * XREFs of KiUpdateStibpPairing @ 0x1402DFA00
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1402DF350 (KiUpdateSpeculationControl.c)
 *     NtContinueEx @ 0x1403FC3E0 (NtContinueEx.c)
 *     NtRaiseException @ 0x1403FC7E0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1403FD300 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1403FDC50 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1403FE010 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403FE3D0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1403FE790 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1403FEB50 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1403FF760 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140400A90 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140401FC0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140402390 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140402A10 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140403100 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140403720 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x140404BB0 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x140406010 (NtCallEnclave.c)
 *     KiBoundFault @ 0x140409240 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x140409880 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14040B480 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x14040C940 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x14040D300 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x14040D940 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x14040F000 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x14040FD40 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1404101C0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140410600 (KiUmsFastReturnToUser.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x140519930 (KePrepareToDispatchVirtualProcessor.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140A1A740 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiUpdateStibpPairing @ 0x1402DFA00
 * Reason: Hex-Rays returned no pseudocode for 0x1402DFA00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402DFA00: mov     [rsp+arg_10], rbx
 * 00000001402DFA05: push    rbp
 * 00000001402DFA06: push    rsi
 * 00000001402DFA07: push    rdi
 * 00000001402DFA08: push    r12
 * 00000001402DFA0A: push    r13
 * 00000001402DFA0C: push    r14
 * 00000001402DFA0E: push    r15
 * 00000001402DFA10: sub     rsp, 20h
 * 00000001402DFA14: mov     rbx, gs:20h
 * 00000001402DFA1D: xor     ebp, ebp
 * 00000001402DFA1F: mov     r9d, 1
 * 00000001402DFA25: mov     r15d, ebp
 * 00000001402DFA28: mov     r12d, r9d
 * 00000001402DFA2B: test    rcx, rcx
 * 00000001402DFA2E: jnz     short loc_1402DFA43
 * 00000001402DFA30: mov     rax, gs:188h
 * 00000001402DFA39: mov     r12d, ebp
 * 00000001402DFA3C: mov     rcx, [rax+220h]
 * 00000001402DFA43: mov     esi, [rcx+87Ch]
 * 00000001402DFA49: mov     r13d, ebp
 * 00000001402DFA4C: mov     r14, [rcx+9E0h]
 * 00000001402DFA53: mov     eax, esi
 * 00000001402DFA55: mov     rdi, [rbx+2DB0h]
 * 00000001402DFA5C: shr     eax, 16h
 * 00000001402DFA5F: and     eax, r9d
 * 00000001402DFA62: mov     [rsp+58h+arg_8], eax
 * 00000001402DFA66: mov     eax, esi
 * 00000001402DFA68: shr     eax, 17h
 * 00000001402DFA6B: and     esi, 0C00000h
 * 00000001402DFA71: and     eax, r9d
 * 00000001402DFA74: mov     [rsp+58h+arg_0], eax
 * 00000001402DFA78: test    r12d, r12d
 * 00000001402DFA7B: jnz     short loc_1402DFAF9
 * 00000001402DFA7D: mov     rax, [rbx+0F0h]
 * 00000001402DFA84: cmp     r14, rax
 * 00000001402DFA87: jz      short loc_1402DFAB8
 * 00000001402DFA89: mov     eax, 20h ; ' '
 * 00000001402DFA8E: lock or [rdi+0FEh], ax
 * 00000001402DFA96: mov     [rbx+0F0h], r14
 * 00000001402DFA9D: mov     r15d, r9d
 * 00000001402DFAA0: or      byte ptr [rbx+0F8h], 4
 * 00000001402DFAA7: mov     eax, dword ptr cs:KiSpeculationFeatures
 * 00000001402DFAAD: test    al, 8
 * 00000001402DFAAF: jnz     short loc_1402DFAB8
 * 00000001402DFAB1: or      byte ptr [rbx+0F8h], 20h
 * 00000001402DFAB8: movzx   eax, byte ptr [rbx+0F8h]
 * 00000001402DFABF: test    al, 4
 * 00000001402DFAC1: jz      short loc_1402DFADD
 * 00000001402DFAC3: mov     eax, r9d
 * 00000001402DFAC6: xor     edx, edx
 * 00000001402DFAC8: mov     ecx, 49h ; 'I'
 * 00000001402DFACD: wrmsr
 * 00000001402DFACF: and     byte ptr [rbx+0F8h], 0FBh
 * 00000001402DFAD6: movzx   eax, byte ptr [rbx+0F8h]
 * 00000001402DFADD: test    al, 20h
 * 00000001402DFADF: jz      loc_1402DFB75
 * 00000001402DFAE5: call    KiFlushCurrentRsb
 * 00000001402DFAEA: and     byte ptr [rbx+0F8h], 0DFh
 * 00000001402DFAF1: mov     r9d, 1
 * 00000001402DFAF7: jmp     short loc_1402DFB75
 * 00000001402DFAF9: cmp     [rsp+58h+arg_8], ebp
 * 00000001402DFAFD: jz      short loc_1402DFB75
 * 00000001402DFAFF: mov     rax, [rbx+0F0h]
 * 00000001402DFB06: test    rax, rax
 * 00000001402DFB09: jz      short loc_1402DFB75
 * 00000001402DFB0B: mov     eax, r9d
 * 00000001402DFB0E: xor     edx, edx
 * 00000001402DFB10: mov     ecx, 49h ; 'I'
 * 00000001402DFB15: wrmsr
 * 00000001402DFB17: mov     eax, dword ptr cs:KiSpeculationFeatures
 * 00000001402DFB1D: test    al, 8
 * 00000001402DFB1F: jz      short loc_1402DFB2A
 * 00000001402DFB21: movzx   eax, byte ptr [rbx+0F8h]
 * 00000001402DFB28: jmp     short loc_1402DFB45
 * 00000001402DFB2A: call    KiFlushCurrentRsb
 * 00000001402DFB2F: movzx   eax, byte ptr [rbx+0F8h]
 * 00000001402DFB36: mov     r9d, 1
 * 00000001402DFB3C: and     byte ptr [rbx+6D2h], 0BFh
 * 00000001402DFB43: and     al, 0DFh
 * 00000001402DFB45: and     al, 0FBh
 * 00000001402DFB47: mov     [rbx+0F8h], al
 * 00000001402DFB4D: mov     eax, 20h ; ' '
 * 00000001402DFB52: lock or [rdi+0FEh], ax
 * 00000001402DFB5A: or      byte ptr [rbx+6D3h], 2
 * 00000001402DFB61: mov     r15d, r9d
 * 00000001402DFB64: mov     [rbx+0F0h], r14
 * 00000001402DFB6B: mov     r13d, r9d
 * 00000001402DFB6E: and     byte ptr [rbx+6D2h], 0EFh
 * 00000001402DFB75: mov     edx, 2
 * 00000001402DFB7A: cmp     esi, 400000h
 * 00000001402DFB80: jz      short loc_1402DFBC1
 * 00000001402DFB82: cmp     [rsp+58h+arg_0], ebp
 * 00000001402DFB86: jnz     short loc_1402DFBB4
 * 00000001402DFB88: mov     ecx, 0FFFFFEFFh
 * 00000001402DFB8D: nop     dword ptr [rax]
 * 00000001402DFB90: movzx   eax, word ptr [rbx+0FEh]
 * 00000001402DFB97: movzx   r8d, ax
 * 00000001402DFB9B: and     r8w, cx
 * 00000001402DFB9F: or      r8w, dx
 * 00000001402DFBA3: lock cmpxchg [rbx+0FEh], r8w
 * 00000001402DFBAD: jnz     short loc_1402DFB90
 * 00000001402DFBAF: mov     r14, rdx
 * 00000001402DFBB2: jmp     short loc_1402DFC1A
 * 00000001402DFBB4: movzx   r8d, word ptr [rbx+0FEh]
 * 00000001402DFBBC: mov     r14, rdx
 * 00000001402DFBBF: jmp     short loc_1402DFC1A
 * 00000001402DFBC1: mov     edx, 0FFFFFEFDh
 * 00000001402DFBC6: prefetchw byte ptr [rbx+0FEh]
 * 00000001402DFBCD: movzx   eax, word ptr [rbx+0FEh]
 * 00000001402DFBD4: test    r12d, r12d
 * 00000001402DFBD7: jz      short loc_1402DFC00
 * 00000001402DFBD9: nop     dword ptr [rax+00000000h]
 * 00000001402DFBE0: movzx   ecx, ax
 * 00000001402DFBE3: and     cx, dx
 * 00000001402DFBE6: lock cmpxchg [rbx+0FEh], cx
 * 00000001402DFBEF: jnz     short loc_1402DFBE0
 * 00000001402DFBF1: jmp     short loc_1402DFC11
 * 00000001402DFC00: movzx   ecx, ax
 * 00000001402DFC03: and     cx, dx
 * 00000001402DFC06: lock cmpxchg [rbx+0FEh], cx
 * 00000001402DFC0F: jnz     short loc_1402DFC00
 * 00000001402DFC11: mov     edx, 2
 * 00000001402DFC16: movzx   r8d, ax
 * 00000001402DFC1A: mov     rax, [rdi+0F0h]
 * 00000001402DFC21: mov     r10d, ebp
 * 00000001402DFC24: test    rax, rax
 * 00000001402DFC27: jnz     short loc_1402DFC3A
 * 00000001402DFC29: test    r8b, 10h
 * 00000001402DFC2D: jz      short loc_1402DFC3A
 * 00000001402DFC2F: mov     rax, r9
 * 00000001402DFC32: lock or [rbx+0FEh], dx
 * 00000001402DFC3A: mov     r11d, 100h
 * 00000001402DFC40: cmp     r14, rax
 * 00000001402DFC43: jz      short loc_1402DFC4F
 * 00000001402DFC45: test    r8b, 8
 * 00000001402DFC49: jz      loc_1402DFCDC
 * 00000001402DFC4F: movzx   r9d, r8w
 * 00000001402DFC53: and     r9w, 1
 * 00000001402DFC58: nop     dword ptr [rax+rax+00000000h]
 * 00000001402DFC60: movzx   edx, word ptr [rdi+0FEh]
 * 00000001402DFC67: movzx   ecx, dx
 * 00000001402DFC6A: and     cx, 0FFEFh
 * 00000001402DFC6E: movzx   eax, cx
 * 00000001402DFC71: or      ax, 1
 * 00000001402DFC75: test    r14, r14
 * 00000001402DFC78: jz      short loc_1402DFC81
 * 00000001402DFC7A: movzx   eax, cx
 * 00000001402DFC7D: or      ax, 11h
 * 00000001402DFC81: movzx   ecx, ax
 * 00000001402DFC84: or      cx, 2
 * 00000001402DFC88: test    r9w, r9w
 * 00000001402DFC8C: cmovnz  cx, ax
 * 00000001402DFC90: test    r11w, cx
 * 00000001402DFC94: jnz     short loc_1402DFCA9
 * 00000001402DFC96: cmp     cx, dx
 * 00000001402DFC99: jz      short loc_1402DFCA9
 * 00000001402DFC9B: movzx   eax, dx
 * 00000001402DFC9E: lock cmpxchg [rdi+0FEh], cx
 * 00000001402DFCA7: jnz     short loc_1402DFC60
 * 00000001402DFCA9: test    r11w, dx
 * 00000001402DFCAD: mov     edx, 1
 * 00000001402DFCB2: jz      short loc_1402DFCB8
 * 00000001402DFCB4: mov     eax, edx
 * 00000001402DFCB6: jmp     short loc_1402DFCE1
 * 00000001402DFCB8: mov     rax, [rdi+0F0h]
 * 00000001402DFCBF: test    rax, rax
 * 00000001402DFCC2: jnz     short loc_1402DFCE1
 * 00000001402DFCC4: test    r8b, 10h
 * 00000001402DFCC8: jz      short loc_1402DFCE1
 * 00000001402DFCCA: mov     rax, rdx
 * 00000001402DFCCD: mov     ecx, 2
 * 00000001402DFCD2: lock or [rbx+0FEh], cx
 * 00000001402DFCDA: jmp     short loc_1402DFCE1
 * 00000001402DFCDC: mov     edx, 1
 * 00000001402DFCE1: cmp     rax, r14
 * 00000001402DFCE4: jz      short loc_1402DFCEC
 * 00000001402DFCE6: test    r8b, 8
 * 00000001402DFCEA: jz      short loc_1402DFD20
 * 00000001402DFCEC: cmp     [rsp+58h+arg_0], ebp
 * 00000001402DFCF0: jnz     short loc_1402DFD20
 * 00000001402DFCF2: cmp     rax, 1
 * 00000001402DFCF6: jz      short loc_1402DFD20
 * 00000001402DFCF8: and     byte ptr [rbx+0FDh], 0FDh
 * 00000001402DFCFF: mov     eax, dword ptr cs:KiSpeculationFeatures
 * 00000001402DFD05: bt      eax, 19h
 * 00000001402DFD09: jnb     short loc_1402DFD12
 * 00000001402DFD0B: and     byte ptr [rbx+0FBh], 0FDh
 * 00000001402DFD12: mov     r10d, edx
 * 00000001402DFD15: jmp     short loc_1402DFD62
 * 00000001402DFD20: movzx   eax, word ptr [rdi+0FEh]
 * 00000001402DFD27: movzx   ecx, r8b
 * 00000001402DFD2B: or      cl, al
 * 00000001402DFD2D: test    cl, 1
 * 00000001402DFD30: jz      short loc_1402DFD48
 * 00000001402DFD32: movzx   ecx, ax
 * 00000001402DFD35: and     cx, 0FFEEh
 * 00000001402DFD39: or      cx, 2
 * 00000001402DFD3D: lock cmpxchg [rdi+0FEh], cx
 * 00000001402DFD46: jnz     short loc_1402DFD20
 * 00000001402DFD48: or      byte ptr [rbx+0FDh], 2
 * 00000001402DFD4F: mov     eax, dword ptr cs:KiSpeculationFeatures
 * 00000001402DFD55: bt      eax, 19h
 * 00000001402DFD59: jnb     short loc_1402DFD62
 * 00000001402DFD5B: or      byte ptr [rbx+0FBh], 2
 * 00000001402DFD62: test    r15d, r15d
 * 00000001402DFD65: jz      short loc_1402DFD8D
 * 00000001402DFD67: nop     word ptr [rax+rax+00000000h]
 * 00000001402DFD70: movzx   eax, word ptr [rdi+0FEh]
 * 00000001402DFD77: movzx   ecx, ax
 * 00000001402DFD7A: and     cx, 0FFDFh
 * 00000001402DFD7E: or      cx, 2
 * 00000001402DFD82: lock cmpxchg [rdi+0FEh], cx
 * 00000001402DFD8B: jnz     short loc_1402DFD70
 * 00000001402DFD8D: test    r10d, r10d
 * 00000001402DFD90: jnz     short loc_1402DFDCC
 * 00000001402DFD92: cmp     [rsp+58h+arg_0], ebp
 * 00000001402DFD96: jz      short loc_1402DFDCC
 * 00000001402DFD98: prefetchw byte ptr [rbx+0FEh]
 * 00000001402DFD9F: movzx   eax, word ptr [rbx+0FEh]
 * 00000001402DFDA6: nop     word ptr [rax+rax+00000000h]
 * 00000001402DFDB0: movzx   ecx, ax
 * 00000001402DFDB3: or      cx, r11w
 * 00000001402DFDB7: lock cmpxchg [rbx+0FEh], cx
 * 00000001402DFDC0: jnz     short loc_1402DFDB0
 * 00000001402DFDC2: test    al, 1
 * 00000001402DFDC4: jz      short loc_1402DFDCC
 * 00000001402DFDC6: test    r12d, r12d
 * 00000001402DFDC9: cmovnz  ebp, edx
 * 00000001402DFDCC: mov     eax, dword ptr cs:KiSpeculationFeatures
 * 00000001402DFDD2: movzx   edx, byte ptr [rbx+0FBh]
 * 00000001402DFDD9: bt      eax, 19h
 * 00000001402DFDDD: jnb     short loc_1402DFDE6
 * 00000001402DFDDF: movzx   edx, byte ptr [rbx+6D0h]
 * 00000001402DFDE6: test    r14, r14
 * 00000001402DFDE9: jnz     short loc_1402DFE39
 * 00000001402DFDEB: test    r8b, 10h
 * 00000001402DFDEF: jnz     short loc_1402DFE31
 * 00000001402DFDF1: and     dl, 0FCh
 * 00000001402DFDF4: mov     [rbx+6D0h], dl
 * 00000001402DFDFA: mov     eax, dword ptr cs:KiSpeculationFeatures
 * 00000001402DFE00: bt      eax, 19h
 * 00000001402DFE04: jnb     short loc_1402DFE1C
 * 00000001402DFE06: and     byte ptr [rbx+0FBh], 0FDh
 * 00000001402DFE0D: and     byte ptr [rbx+0FDh], 0FDh
 * 00000001402DFE14: mov     eax, dword ptr cs:KiSpeculationFeatures
 * 00000001402DFE1A: jmp     short loc_1402DFE5C
 * 00000001402DFE1C: and     byte ptr [rbx+0FDh], 0FDh
 * 00000001402DFE23: mov     [rbx+0FBh], dl
 * 00000001402DFE29: mov     eax, dword ptr cs:KiSpeculationFeatures
 * 00000001402DFE2F: jmp     short loc_1402DFE5C
 * 00000001402DFE31: and     dl, 0FEh
 * 00000001402DFE34: or      dl, 2
 * 00000001402DFE37: jmp     short loc_1402DFE56
 * 00000001402DFE39: test    dl, 3
 * 00000001402DFE3C: jnz     short loc_1402DFE5C
 * 00000001402DFE3E: and     dl, 0FDh
 * 00000001402DFE41: or      dl, 1
 * 00000001402DFE44: mov     [rbx+6D0h], dl
 * 00000001402DFE4A: mov     ecx, dword ptr cs:KiSpeculationFeatures
 * 00000001402DFE50: bt      ecx, 19h
 * 00000001402DFE54: jb      short loc_1402DFE5C
 * 00000001402DFE56: mov     [rbx+0FBh], dl
 * 00000001402DFE5C: mov     eax, ebp
 * 00000001402DFE5E: test    r13d, r13d
 * 00000001402DFE61: jz      short loc_1402DFE70
 * 00000001402DFE63: and     byte ptr [rbx+6D2h], 0EFh
 * 00000001402DFE6A: mov     [rbx+6D1h], dl
 * 00000001402DFE70: mov     rbx, [rsp+58h+arg_10]
 * 00000001402DFE75: add     rsp, 20h
 * 00000001402DFE79: pop     r15
 * 00000001402DFE7B: pop     r14
 * 00000001402DFE7D: pop     r13
 * 00000001402DFE7F: pop     r12
 * 00000001402DFE81: pop     rdi
 * 00000001402DFE82: pop     rsi
 * 00000001402DFE83: pop     rbp
 * 00000001402DFE84: retn
 */
