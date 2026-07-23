/*
 * XREFs of KiUpdateStibpPairing @ 0x1402C3EB0
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1402C3600 (KiUpdateSpeculationControl.c)
 *     NtContinueEx @ 0x1403FE810 (NtContinueEx.c)
 *     NtRaiseException @ 0x1403FEC40 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1403FF300 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1403FF7A0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140400120 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140400510 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140400900 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140400CF0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404010E0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140401D20 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1404030D0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x140404690 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140404A90 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140405140 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140405870 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140405ED0 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1404073D0 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x140408860 (NtCallEnclave.c)
 *     KiBoundFault @ 0x14040BAC0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14040C140 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14040DE00 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x14040F300 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x14040FD00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140410380 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140411B00 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1404128C0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140412D80 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140413200 (KiUmsFastReturnToUser.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x14051B560 (KePrepareToDispatchVirtualProcessor.c)
 *     KiCopyCounters @ 0x14051C0A0 (KiCopyCounters.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140413E80 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiUpdateStibpPairing @ 0x1402C3EB0
 * Reason: Hex-Rays returned no pseudocode for 0x1402C3EB0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402C3EB0: mov     [rsp+arg_10], rbx
 * 00000001402C3EB5: push    rbp
 * 00000001402C3EB6: push    rsi
 * 00000001402C3EB7: push    rdi
 * 00000001402C3EB8: push    r12
 * 00000001402C3EBA: push    r13
 * 00000001402C3EBC: push    r14
 * 00000001402C3EBE: push    r15
 * 00000001402C3EC0: sub     rsp, 20h
 * 00000001402C3EC4: mov     rbx, gs:20h
 * 00000001402C3ECD: xor     ebp, ebp
 * 00000001402C3ECF: mov     r11d, 1
 * 00000001402C3ED5: mov     r15d, ebp
 * 00000001402C3ED8: mov     r12d, r11d
 * 00000001402C3EDB: test    rcx, rcx
 * 00000001402C3EDE: jnz     short loc_1402C3EF3
 * 00000001402C3EE0: mov     rax, gs:188h
 * 00000001402C3EE9: mov     r12d, ebp
 * 00000001402C3EEC: mov     rcx, [rax+220h]
 * 00000001402C3EF3: mov     esi, [rcx+87Ch]
 * 00000001402C3EF9: mov     r13d, ebp
 * 00000001402C3EFC: mov     r14, [rcx+9E0h]
 * 00000001402C3F03: mov     eax, esi
 * 00000001402C3F05: mov     rdi, [rbx+2DB0h]
 * 00000001402C3F0C: shr     eax, 16h
 * 00000001402C3F0F: and     eax, r11d
 * 00000001402C3F12: mov     [rsp+58h+arg_8], eax
 * 00000001402C3F16: mov     eax, esi
 * 00000001402C3F18: shr     eax, 17h
 * 00000001402C3F1B: and     esi, 0C00000h
 * 00000001402C3F21: and     eax, r11d
 * 00000001402C3F24: mov     [rsp+58h+arg_0], eax
 * 00000001402C3F28: test    r12d, r12d
 * 00000001402C3F2B: jnz     loc_1402C3FBD
 * 00000001402C3F31: mov     rax, [rbx+6D8h]
 * 00000001402C3F38: cmp     r14, rax
 * 00000001402C3F3B: jz      short loc_1402C3F6F
 * 00000001402C3F3D: mov     eax, 20h ; ' '
 * 00000001402C3F42: lock or [rdi+6ECh], ax
 * 00000001402C3F4A: mov     [rbx+6D8h], r14
 * 00000001402C3F51: mov     r15d, r11d
 * 00000001402C3F54: or      word ptr [rbx+6E0h], 4
 * 00000001402C3F5C: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001402C3F63: test    al, 8
 * 00000001402C3F65: jnz     short loc_1402C3F6F
 * 00000001402C3F67: or      word ptr [rbx+6E0h], 20h
 * 00000001402C3F6F: movzx   eax, word ptr [rbx+6E0h]
 * 00000001402C3F76: test    al, 4
 * 00000001402C3F78: jz      short loc_1402C3F99
 * 00000001402C3F7A: mov     eax, r11d
 * 00000001402C3F7D: xor     edx, edx
 * 00000001402C3F7F: mov     ecx, 49h ; 'I'
 * 00000001402C3F84: wrmsr
 * 00000001402C3F86: mov     ecx, 0FFFBh
 * 00000001402C3F8B: and     [rbx+6E0h], cx
 * 00000001402C3F92: movzx   eax, word ptr [rbx+6E0h]
 * 00000001402C3F99: test    al, 20h
 * 00000001402C3F9B: jz      loc_1402C4059
 * 00000001402C3FA1: call    KiFlushCurrentRsb
 * 00000001402C3FA6: mov     ecx, 0FFDFh
 * 00000001402C3FAB: mov     r11d, 1
 * 00000001402C3FB1: and     [rbx+6E0h], cx
 * 00000001402C3FB8: jmp     loc_1402C4059
 * 00000001402C3FBD: cmp     [rsp+58h+arg_8], ebp
 * 00000001402C3FC1: jz      loc_1402C4059
 * 00000001402C3FC7: mov     rax, [rbx+6D8h]
 * 00000001402C3FCE: test    rax, rax
 * 00000001402C3FD1: jz      loc_1402C4059
 * 00000001402C3FD7: mov     eax, r11d
 * 00000001402C3FDA: xor     edx, edx
 * 00000001402C3FDC: mov     ecx, 49h ; 'I'
 * 00000001402C3FE1: wrmsr
 * 00000001402C3FE3: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001402C3FEA: test    al, 8
 * 00000001402C3FEC: jz      short loc_1402C3FF7
 * 00000001402C3FEE: movzx   eax, word ptr [rbx+6E0h]
 * 00000001402C3FF5: jmp     short loc_1402C401D
 * 00000001402C3FF7: call    KiFlushCurrentRsb
 * 00000001402C3FFC: mov     eax, 0FFBFh
 * 00000001402C4001: mov     ecx, 0FFDFh
 * 00000001402C4006: and     [rbx+6D4h], ax
 * 00000001402C400D: mov     r11d, 1
 * 00000001402C4013: movzx   eax, word ptr [rbx+6E0h]
 * 00000001402C401A: and     ax, cx
 * 00000001402C401D: mov     ecx, 0FFFBh
 * 00000001402C4022: and     ax, cx
 * 00000001402C4025: mov     [rbx+6E0h], ax
 * 00000001402C402C: mov     eax, 20h ; ' '
 * 00000001402C4031: lock or [rdi+6ECh], ax
 * 00000001402C4039: or      byte ptr [rbx+6D6h], 2
 * 00000001402C4040: mov     eax, 0FFEFh
 * 00000001402C4045: mov     [rbx+6D8h], r14
 * 00000001402C404C: mov     r15d, r11d
 * 00000001402C404F: and     [rbx+6D4h], ax
 * 00000001402C4056: mov     r13d, r11d
 * 00000001402C4059: mov     edx, 2
 * 00000001402C405E: cmp     esi, 400000h
 * 00000001402C4064: jz      short loc_1402C40A2
 * 00000001402C4066: cmp     [rsp+58h+arg_0], ebp
 * 00000001402C406A: jnz     short loc_1402C4095
 * 00000001402C406C: mov     ecx, 0FFFFFEFFh
 * 00000001402C4071: movzx   eax, word ptr [rbx+6ECh]
 * 00000001402C4078: movzx   r8d, ax
 * 00000001402C407C: and     r8w, cx
 * 00000001402C4080: or      r8w, dx
 * 00000001402C4084: lock cmpxchg [rbx+6ECh], r8w
 * 00000001402C408E: jnz     short loc_1402C4071
 * 00000001402C4090: mov     r14, rdx
 * 00000001402C4093: jmp     short loc_1402C40FA
 * 00000001402C4095: movzx   r8d, word ptr [rbx+6ECh]
 * 00000001402C409D: mov     r14, rdx
 * 00000001402C40A0: jmp     short loc_1402C40FA
 * 00000001402C40A2: mov     edx, 0FFFFFEFDh
 * 00000001402C40A7: prefetchw byte ptr [rbx+6ECh]
 * 00000001402C40AE: movzx   eax, word ptr [rbx+6ECh]
 * 00000001402C40B5: test    r12d, r12d
 * 00000001402C40B8: jz      short loc_1402C40E0
 * 00000001402C40BA: nop     word ptr [rax+rax+00h]
 * 00000001402C40C0: movzx   ecx, ax
 * 00000001402C40C3: and     cx, dx
 * 00000001402C40C6: lock cmpxchg [rbx+6ECh], cx
 * 00000001402C40CF: jnz     short loc_1402C40C0
 * 00000001402C40D1: jmp     short loc_1402C40F1
 * 00000001402C40E0: movzx   ecx, ax
 * 00000001402C40E3: and     cx, dx
 * 00000001402C40E6: lock cmpxchg [rbx+6ECh], cx
 * 00000001402C40EF: jnz     short loc_1402C40E0
 * 00000001402C40F1: mov     edx, 2
 * 00000001402C40F6: movzx   r8d, ax
 * 00000001402C40FA: mov     rax, [rdi+6D8h]
 * 00000001402C4101: mov     r10d, ebp
 * 00000001402C4104: test    rax, rax
 * 00000001402C4107: jnz     short loc_1402C411A
 * 00000001402C4109: test    r8b, 10h
 * 00000001402C410D: jz      short loc_1402C411A
 * 00000001402C410F: mov     rax, r11
 * 00000001402C4112: lock or [rbx+6ECh], dx
 * 00000001402C411A: mov     esi, 100h
 * 00000001402C411F: cmp     r14, rax
 * 00000001402C4122: jz      short loc_1402C412E
 * 00000001402C4124: test    r8b, 8
 * 00000001402C4128: jz      loc_1402C41AF
 * 00000001402C412E: movzx   r9d, r8w
 * 00000001402C4132: and     r9w, 1
 * 00000001402C4137: nop     word ptr [rax+rax+00000000h]
 * 00000001402C4140: movzx   edx, word ptr [rdi+6ECh]
 * 00000001402C4147: movzx   ecx, dx
 * 00000001402C414A: and     cx, 0FFEFh
 * 00000001402C414E: movzx   eax, cx
 * 00000001402C4151: or      ax, 1
 * 00000001402C4155: test    r14, r14
 * 00000001402C4158: jz      short loc_1402C4161
 * 00000001402C415A: movzx   eax, cx
 * 00000001402C415D: or      ax, 11h
 * 00000001402C4161: movzx   ecx, ax
 * 00000001402C4164: or      cx, 2
 * 00000001402C4168: test    r9w, r9w
 * 00000001402C416C: cmovnz  cx, ax
 * 00000001402C4170: test    si, cx
 * 00000001402C4173: jnz     short loc_1402C4188
 * 00000001402C4175: cmp     cx, dx
 * 00000001402C4178: jz      short loc_1402C4188
 * 00000001402C417A: movzx   eax, dx
 * 00000001402C417D: lock cmpxchg [rdi+6ECh], cx
 * 00000001402C4186: jnz     short loc_1402C4140
 * 00000001402C4188: test    si, dx
 * 00000001402C418B: jnz     short loc_1402C41AC
 * 00000001402C418D: mov     rax, [rdi+6D8h]
 * 00000001402C4194: test    rax, rax
 * 00000001402C4197: jnz     short loc_1402C41AF
 * 00000001402C4199: test    r8b, 10h
 * 00000001402C419D: jz      short loc_1402C41AF
 * 00000001402C419F: mov     ecx, 2
 * 00000001402C41A4: lock or [rbx+6ECh], cx
 * 00000001402C41AC: mov     rax, r11
 * 00000001402C41AF: mov     r11d, 0FFFDh
 * 00000001402C41B5: cmp     rax, r14
 * 00000001402C41B8: jz      short loc_1402C41C0
 * 00000001402C41BA: test    r8b, 8
 * 00000001402C41BE: jz      short loc_1402C4200
 * 00000001402C41C0: cmp     [rsp+58h+arg_0], ebp
 * 00000001402C41C4: jnz     short loc_1402C4200
 * 00000001402C41C6: cmp     rax, 1
 * 00000001402C41CA: jz      short loc_1402C4200
 * 00000001402C41CC: and     [rbx+6EAh], r11w
 * 00000001402C41D4: mov     r9, 20000000000h
 * 00000001402C41DE: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001402C41E5: test    r9, rax
 * 00000001402C41E8: jz      short loc_1402C41F2
 * 00000001402C41EA: and     [rbx+6E6h], r11w
 * 00000001402C41F2: mov     edx, 1
 * 00000001402C41F7: mov     r10d, edx
 * 00000001402C41FA: jmp     short loc_1402C4253
 * 00000001402C4200: movzx   eax, word ptr [rdi+6ECh]
 * 00000001402C4207: movzx   ecx, r8b
 * 00000001402C420B: or      cl, al
 * 00000001402C420D: test    cl, 1
 * 00000001402C4210: jz      short loc_1402C4228
 * 00000001402C4212: movzx   ecx, ax
 * 00000001402C4215: and     cx, 0FFEEh
 * 00000001402C4219: or      cx, 2
 * 00000001402C421D: lock cmpxchg [rdi+6ECh], cx
 * 00000001402C4226: jnz     short loc_1402C4200
 * 00000001402C4228: or      word ptr [rbx+6EAh], 2
 * 00000001402C4230: mov     r9, 20000000000h
 * 00000001402C423A: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001402C4241: mov     edx, 1
 * 00000001402C4246: test    r9, rax
 * 00000001402C4249: jz      short loc_1402C4253
 * 00000001402C424B: or      word ptr [rbx+6E6h], 2
 * 00000001402C4253: test    r15d, r15d
 * 00000001402C4256: jz      short loc_1402C427D
 * 00000001402C4258: nop     dword ptr [rax+rax+00000000h]
 * 00000001402C4260: movzx   eax, word ptr [rdi+6ECh]
 * 00000001402C4267: movzx   ecx, ax
 * 00000001402C426A: and     cx, 0FFDFh
 * 00000001402C426E: or      cx, 2
 * 00000001402C4272: lock cmpxchg [rdi+6ECh], cx
 * 00000001402C427B: jnz     short loc_1402C4260
 * 00000001402C427D: test    r10d, r10d
 * 00000001402C4280: jnz     short loc_1402C42BB
 * 00000001402C4282: cmp     [rsp+58h+arg_0], ebp
 * 00000001402C4286: jz      short loc_1402C42BB
 * 00000001402C4288: prefetchw byte ptr [rbx+6ECh]
 * 00000001402C428F: movzx   eax, word ptr [rbx+6ECh]
 * 00000001402C4296: nop     word ptr [rax+rax+00000000h]
 * 00000001402C42A0: movzx   ecx, ax
 * 00000001402C42A3: or      cx, si
 * 00000001402C42A6: lock cmpxchg [rbx+6ECh], cx
 * 00000001402C42AF: jnz     short loc_1402C42A0
 * 00000001402C42B1: test    al, 1
 * 00000001402C42B3: jz      short loc_1402C42BB
 * 00000001402C42B5: test    r12d, r12d
 * 00000001402C42B8: cmovnz  ebp, edx
 * 00000001402C42BB: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001402C42C2: movzx   edx, word ptr [rbx+6E6h]
 * 00000001402C42C9: test    r9, rax
 * 00000001402C42CC: jz      short loc_1402C42D5
 * 00000001402C42CE: movzx   edx, word ptr [rbx+6D0h]
 * 00000001402C42D5: test    r14, r14
 * 00000001402C42D8: jnz     short loc_1402C433A
 * 00000001402C42DA: test    r8b, 10h
 * 00000001402C42DE: jnz     short loc_1402C432C
 * 00000001402C42E0: mov     eax, 0FFFCh
 * 00000001402C42E5: and     dx, ax
 * 00000001402C42E8: mov     [rbx+6D0h], dx
 * 00000001402C42EF: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001402C42F6: test    r9, rax
 * 00000001402C42F9: jz      short loc_1402C4314
 * 00000001402C42FB: and     [rbx+6E6h], r11w
 * 00000001402C4303: and     [rbx+6EAh], r11w
 * 00000001402C430B: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001402C4312: jmp     short loc_1402C4361
 * 00000001402C4314: and     [rbx+6EAh], r11w
 * 00000001402C431C: mov     [rbx+6E6h], dx
 * 00000001402C4323: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 00000001402C432A: jmp     short loc_1402C4361
 * 00000001402C432C: mov     eax, 0FFFEh
 * 00000001402C4331: and     dx, ax
 * 00000001402C4334: or      dx, 2
 * 00000001402C4338: jmp     short loc_1402C435A
 * 00000001402C433A: test    dl, 3
 * 00000001402C433D: jnz     short loc_1402C4361
 * 00000001402C433F: and     dx, r11w
 * 00000001402C4343: or      dx, 1
 * 00000001402C4347: mov     [rbx+6D0h], dx
 * 00000001402C434E: mov     rcx, qword ptr cs:KiSpeculationFeatures
 * 00000001402C4355: test    r9, rcx
 * 00000001402C4358: jnz     short loc_1402C4361
 * 00000001402C435A: mov     [rbx+6E6h], dx
 * 00000001402C4361: test    r13d, r13d
 * 00000001402C4364: jz      short loc_1402C4379
 * 00000001402C4366: mov     eax, 0FFEFh
 * 00000001402C436B: mov     [rbx+6D2h], dx
 * 00000001402C4372: and     [rbx+6D4h], ax
 * 00000001402C4379: mov     rbx, [rsp+58h+arg_10]
 * 00000001402C437E: mov     eax, ebp
 * 00000001402C4380: add     rsp, 20h
 * 00000001402C4384: pop     r15
 * 00000001402C4386: pop     r14
 * 00000001402C4388: pop     r13
 * 00000001402C438A: pop     r12
 * 00000001402C438C: pop     rdi
 * 00000001402C438D: pop     rsi
 * 00000001402C438E: pop     rbp
 * 00000001402C438F: retn
 */
