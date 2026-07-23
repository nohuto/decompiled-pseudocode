/*
 * XREFs of KiProcessNMI @ 0x140512CB0
 * Callers:
 *     KxNmiInterrupt @ 0x14040B340 (KxNmiInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x14024EC18 (KxTryToAcquireSpinLock.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KiFlushCurrentRsb @ 0x140413E80 (KiFlushCurrentRsb.c)
 *     HalHandleNMI @ 0x1404BD980 (HalHandleNMI.c)
 *     KiCheckForFreezeExecution @ 0x140512850 (KiCheckForFreezeExecution.c)
 */

/*
 * Hex-Rays decompilation failed for KiProcessNMI @ 0x140512CB0
 * Reason: Hex-Rays returned no pseudocode for 0x140512CB0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140512CB0: mov     [rsp+arg_0], rbx
 * 0000000140512CB5: mov     [rsp+arg_8], rbp
 * 0000000140512CBA: mov     [rsp+arg_18], rsi
 * 0000000140512CBF: push    rdi
 * 0000000140512CC0: push    r12
 * 0000000140512CC2: push    r13
 * 0000000140512CC4: push    r14
 * 0000000140512CC6: push    r15
 * 0000000140512CC8: sub     rsp, 20h
 * 0000000140512CCC: mov     rax, cs:off_140C00978
 * 0000000140512CD3: mov     r14, rcx
 * 0000000140512CD6: xor     ecx, ecx
 * 0000000140512CD8: mov     rbp, rdx
 * 0000000140512CDB: call    _guard_dispatch_icall
 * 0000000140512CE0: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140512CE7: mov     ebx, 1
 * 0000000140512CEC: shr     rax, 29h
 * 0000000140512CF0: and     al, bl
 * 0000000140512CF2: jz      short loc_140512CF9
 * 0000000140512CF4: call    KiFlushCurrentRsb
 * 0000000140512CF9: lfence
 * 0000000140512CFC: mov     rdx, rbp
 * 0000000140512CFF: mov     rcx, r14
 * 0000000140512D02: call    KiCheckForFreezeExecution
 * 0000000140512D07: xor     r12d, r12d
 * 0000000140512D0A: test    al, al
 * 0000000140512D0C: jnz     loc_140512E1D
 * 0000000140512D12: mov     rax, gs:20h
 * 0000000140512D1B: lea     r13, cs:140000000h
 * 0000000140512D22: mov     r8, rbx
 * 0000000140512D25: mov     ecx, [rax+24h]
 * 0000000140512D28: mov     r15d, ecx
 * 0000000140512D2B: mov     eax, ds:rva KiProcessorIndexToNumberMappingTable[r13+rcx*4]
 * 0000000140512D33: mov     ecx, eax
 * 0000000140512D35: mov     edx, eax
 * 0000000140512D37: and     ecx, 3Fh
 * 0000000140512D3A: shr     rdx, 6
 * 0000000140512D3E: shl     r8, cl
 * 0000000140512D41: prefetchw byte ptr ds:rva qword_140C12818[r13+rdx*8]
 * 0000000140512D4A: mov     rax, ds:rva qword_140C12818[r13+rdx*8]
 * 0000000140512D52: mov     rcx, rax
 * 0000000140512D55: or      rcx, r8
 * 0000000140512D58: lock cmpxchg ds:rva qword_140C12818[r13+rdx*8], rcx
 * 0000000140512D62: jnz     short loc_140512D52
 * 0000000140512D64: test    rax, r8
 * 0000000140512D67: jnz     loc_140512E1D
 * 0000000140512D6D: mov     rax, cs:off_140C00978
 * 0000000140512D74: mov     ecx, ebx
 * 0000000140512D76: call    _guard_dispatch_icall
 * 0000000140512D7B: mov     rdi, cs:KiNmiCallbackListHead
 * 0000000140512D82: mov     sil, r12b
 * 0000000140512D85: test    rdi, rdi
 * 0000000140512D88: jz      short loc_140512DAA
 * 0000000140512D8A: mov     rax, [rdi+8]
 * 0000000140512D8E: mov     dl, sil
 * 0000000140512D91: mov     rcx, [rdi+10h]
 * 0000000140512D95: call    _guard_dispatch_icall
 * 0000000140512D9A: mov     rdi, [rdi]
 * 0000000140512D9D: or      sil, al
 * 0000000140512DA0: test    rdi, rdi
 * 0000000140512DA3: jnz     short loc_140512D8A
 * 0000000140512DA5: test    sil, sil
 * 0000000140512DA8: jnz     short loc_140512DFB
 * 0000000140512DAA: lea     rcx, KiNMILock
 * 0000000140512DB1: call    KxTryToAcquireSpinLock
 * 0000000140512DB6: test    al, al
 * 0000000140512DB8: jnz     short loc_140512DD3
 * 0000000140512DBA: mov     rdx, rbp
 * 0000000140512DBD: mov     rcx, r14
 * 0000000140512DC0: call    KiCheckForFreezeExecution
 * 0000000140512DC5: mov     rax, cs:KiNMILock
 * 0000000140512DCC: test    rax, rax
 * 0000000140512DCF: jnz     short loc_140512DBA
 * 0000000140512DD1: jmp     short loc_140512DAA
 * 0000000140512DD3: xor     eax, eax
 * 0000000140512DD5: lock cmpxchg cs:KiBugCheckActive, ebx
 * 0000000140512DDD: xor     ecx, ecx
 * 0000000140512DDF: call    HalHandleNMI
 * 0000000140512DE4: mov     eax, ebx
 * 0000000140512DE6: lock cmpxchg cs:KiBugCheckActive, r12d
 * 0000000140512DEF: lea     rcx, KiNMILock; SpinLock
 * 0000000140512DF6: call    KxReleaseSpinLock
 * 0000000140512DFB: mov     edx, ds:rva KiProcessorIndexToNumberMappingTable[r13+r15*4]
 * 0000000140512E03: mov     ecx, edx
 * 0000000140512E05: mov     eax, edx
 * 0000000140512E07: and     ecx, 3Fh
 * 0000000140512E0A: shl     rbx, cl
 * 0000000140512E0D: not     rbx
 * 0000000140512E10: shr     rax, 6
 * 0000000140512E14: lock and ds:rva qword_140C12818[r13+rax*8], rbx
 * 0000000140512E1D: mov     rbx, [rsp+48h+arg_0]
 * 0000000140512E22: mov     rbp, [rsp+48h+arg_8]
 * 0000000140512E27: mov     rsi, [rsp+48h+arg_18]
 * 0000000140512E2C: add     rsp, 20h
 * 0000000140512E30: pop     r15
 * 0000000140512E32: pop     r14
 * 0000000140512E34: pop     r13
 * 0000000140512E36: pop     r12
 * 0000000140512E38: pop     rdi
 * 0000000140512E39: retn
 */
