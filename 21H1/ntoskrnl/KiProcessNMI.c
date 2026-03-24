/*
 * XREFs of KiProcessNMI @ 0x14050CFB0
 * Callers:
 *     KxNmiInterrupt @ 0x140401400 (KxNmiInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x140320478 (KxTryToAcquireSpinLock.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     HalHandleNMI @ 0x1404B8180 (HalHandleNMI.c)
 *     KiCheckForFreezeExecution @ 0x14050CB60 (KiCheckForFreezeExecution.c)
 *     KiFlushCurrentRsb @ 0x140A14600 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiProcessNMI @ 0x14050CFB0
 * Reason: Hex-Rays returned no pseudocode for 0x14050CFB0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014050CFB0: mov     [rsp+arg_0], rbx
 * 000000014050CFB5: mov     [rsp+arg_8], rbp
 * 000000014050CFBA: mov     [rsp+arg_18], rsi
 * 000000014050CFBF: push    rdi
 * 000000014050CFC0: push    r12
 * 000000014050CFC2: push    r13
 * 000000014050CFC4: push    r14
 * 000000014050CFC6: push    r15
 * 000000014050CFC8: sub     rsp, 20h
 * 000000014050CFCC: mov     rax, cs:off_140C00978
 * 000000014050CFD3: mov     r14, rcx
 * 000000014050CFD6: xor     ecx, ecx
 * 000000014050CFD8: mov     rbp, rdx
 * 000000014050CFDB: call    _guard_dispatch_icall
 * 000000014050CFE0: mov     eax, dword ptr cs:KiSpeculationFeatures
 * 000000014050CFE6: mov     ebx, 1
 * 000000014050CFEB: shr     eax, 19h
 * 000000014050CFEE: and     al, bl
 * 000000014050CFF0: jz      short loc_14050CFF7
 * 000000014050CFF2: call    KiFlushCurrentRsb
 * 000000014050CFF7: lfence
 * 000000014050CFFA: mov     rdx, rbp
 * 000000014050CFFD: mov     rcx, r14
 * 000000014050D000: call    KiCheckForFreezeExecution
 * 000000014050D005: xor     r12d, r12d
 * 000000014050D008: test    al, al
 * 000000014050D00A: jnz     loc_14050D11B
 * 000000014050D010: mov     rax, gs:20h
 * 000000014050D019: lea     r13, cs:140000000h
 * 000000014050D020: mov     r8, rbx
 * 000000014050D023: mov     ecx, [rax+24h]
 * 000000014050D026: mov     r15d, ecx
 * 000000014050D029: mov     eax, ds:rva KiProcessorIndexToNumberMappingTable[r13+rcx*4]
 * 000000014050D031: mov     ecx, eax
 * 000000014050D033: mov     edx, eax
 * 000000014050D035: and     ecx, 3Fh
 * 000000014050D038: shr     rdx, 6
 * 000000014050D03C: shl     r8, cl
 * 000000014050D03F: prefetchw byte ptr ds:rva qword_140C12638[r13+rdx*8]
 * 000000014050D048: mov     rax, ds:rva qword_140C12638[r13+rdx*8]
 * 000000014050D050: mov     rcx, rax
 * 000000014050D053: or      rcx, r8
 * 000000014050D056: lock cmpxchg ds:rva qword_140C12638[r13+rdx*8], rcx
 * 000000014050D060: jnz     short loc_14050D050
 * 000000014050D062: test    rax, r8
 * 000000014050D065: jnz     loc_14050D11B
 * 000000014050D06B: mov     rax, cs:off_140C00978
 * 000000014050D072: mov     ecx, ebx
 * 000000014050D074: call    _guard_dispatch_icall
 * 000000014050D079: mov     rdi, cs:KiNmiCallbackListHead
 * 000000014050D080: mov     sil, r12b
 * 000000014050D083: test    rdi, rdi
 * 000000014050D086: jz      short loc_14050D0A8
 * 000000014050D088: mov     rax, [rdi+8]
 * 000000014050D08C: mov     dl, sil
 * 000000014050D08F: mov     rcx, [rdi+10h]
 * 000000014050D093: call    _guard_dispatch_icall
 * 000000014050D098: mov     rdi, [rdi]
 * 000000014050D09B: or      sil, al
 * 000000014050D09E: test    rdi, rdi
 * 000000014050D0A1: jnz     short loc_14050D088
 * 000000014050D0A3: test    sil, sil
 * 000000014050D0A6: jnz     short loc_14050D0F9
 * 000000014050D0A8: lea     rcx, KiNMILock
 * 000000014050D0AF: call    KxTryToAcquireSpinLock
 * 000000014050D0B4: test    al, al
 * 000000014050D0B6: jnz     short loc_14050D0D1
 * 000000014050D0B8: mov     rdx, rbp
 * 000000014050D0BB: mov     rcx, r14
 * 000000014050D0BE: call    KiCheckForFreezeExecution
 * 000000014050D0C3: mov     rax, cs:KiNMILock
 * 000000014050D0CA: test    rax, rax
 * 000000014050D0CD: jnz     short loc_14050D0B8
 * 000000014050D0CF: jmp     short loc_14050D0A8
 * 000000014050D0D1: xor     eax, eax
 * 000000014050D0D3: lock cmpxchg cs:KiBugCheckActive, ebx
 * 000000014050D0DB: xor     ecx, ecx
 * 000000014050D0DD: call    HalHandleNMI
 * 000000014050D0E2: mov     eax, ebx
 * 000000014050D0E4: lock cmpxchg cs:KiBugCheckActive, r12d
 * 000000014050D0ED: lea     rcx, KiNMILock; SpinLock
 * 000000014050D0F4: call    KxReleaseSpinLock
 * 000000014050D0F9: mov     edx, ds:rva KiProcessorIndexToNumberMappingTable[r13+r15*4]
 * 000000014050D101: mov     ecx, edx
 * 000000014050D103: mov     eax, edx
 * 000000014050D105: and     ecx, 3Fh
 * 000000014050D108: shl     rbx, cl
 * 000000014050D10B: not     rbx
 * 000000014050D10E: shr     rax, 6
 * 000000014050D112: lock and ds:rva qword_140C12638[r13+rax*8], rbx
 * 000000014050D11B: mov     rbx, [rsp+48h+arg_0]
 * 000000014050D120: mov     rbp, [rsp+48h+arg_8]
 * 000000014050D125: mov     rsi, [rsp+48h+arg_18]
 * 000000014050D12A: add     rsp, 20h
 * 000000014050D12E: pop     r15
 * 000000014050D130: pop     r14
 * 000000014050D132: pop     r13
 * 000000014050D134: pop     r12
 * 000000014050D136: pop     rdi
 * 000000014050D137: retn
 */
