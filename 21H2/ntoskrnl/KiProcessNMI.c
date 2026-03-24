/*
 * XREFs of KiProcessNMI @ 0x140512A70
 * Callers:
 *     KxNmiInterrupt @ 0x14040B240 (KxNmiInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x1402D0788 (KxTryToAcquireSpinLock.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     KiFlushCurrentRsb @ 0x140413D80 (KiFlushCurrentRsb.c)
 *     HalHandleNMI @ 0x1404BD740 (HalHandleNMI.c)
 *     KiCheckForFreezeExecution @ 0x140512610 (KiCheckForFreezeExecution.c)
 */

/*
 * Hex-Rays decompilation failed for KiProcessNMI @ 0x140512A70
 * Reason: Hex-Rays returned no pseudocode for 0x140512A70
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140512A70: mov     [rsp+arg_0], rbx
 * 0000000140512A75: mov     [rsp+arg_8], rbp
 * 0000000140512A7A: mov     [rsp+arg_18], rsi
 * 0000000140512A7F: push    rdi
 * 0000000140512A80: push    r12
 * 0000000140512A82: push    r13
 * 0000000140512A84: push    r14
 * 0000000140512A86: push    r15
 * 0000000140512A88: sub     rsp, 20h
 * 0000000140512A8C: mov     rax, cs:off_140C00978
 * 0000000140512A93: mov     r14, rcx
 * 0000000140512A96: xor     ecx, ecx
 * 0000000140512A98: mov     rbp, rdx
 * 0000000140512A9B: call    _guard_dispatch_icall
 * 0000000140512AA0: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 0000000140512AA7: mov     ebx, 1
 * 0000000140512AAC: shr     rax, 29h
 * 0000000140512AB0: and     al, bl
 * 0000000140512AB2: jz      short loc_140512AB9
 * 0000000140512AB4: call    KiFlushCurrentRsb
 * 0000000140512AB9: lfence
 * 0000000140512ABC: mov     rdx, rbp
 * 0000000140512ABF: mov     rcx, r14
 * 0000000140512AC2: call    KiCheckForFreezeExecution
 * 0000000140512AC7: xor     r12d, r12d
 * 0000000140512ACA: test    al, al
 * 0000000140512ACC: jnz     loc_140512BDD
 * 0000000140512AD2: mov     rax, gs:20h
 * 0000000140512ADB: lea     r13, cs:140000000h
 * 0000000140512AE2: mov     r8, rbx
 * 0000000140512AE5: mov     ecx, [rax+24h]
 * 0000000140512AE8: mov     r15d, ecx
 * 0000000140512AEB: mov     eax, ds:rva KiProcessorIndexToNumberMappingTable[r13+rcx*4]
 * 0000000140512AF3: mov     ecx, eax
 * 0000000140512AF5: mov     edx, eax
 * 0000000140512AF7: and     ecx, 3Fh
 * 0000000140512AFA: shr     rdx, 6
 * 0000000140512AFE: shl     r8, cl
 * 0000000140512B01: prefetchw byte ptr ds:rva qword_140C12838[r13+rdx*8]
 * 0000000140512B0A: mov     rax, ds:rva qword_140C12838[r13+rdx*8]
 * 0000000140512B12: mov     rcx, rax
 * 0000000140512B15: or      rcx, r8
 * 0000000140512B18: lock cmpxchg ds:rva qword_140C12838[r13+rdx*8], rcx
 * 0000000140512B22: jnz     short loc_140512B12
 * 0000000140512B24: test    rax, r8
 * 0000000140512B27: jnz     loc_140512BDD
 * 0000000140512B2D: mov     rax, cs:off_140C00978
 * 0000000140512B34: mov     ecx, ebx
 * 0000000140512B36: call    _guard_dispatch_icall
 * 0000000140512B3B: mov     rdi, cs:KiNmiCallbackListHead
 * 0000000140512B42: mov     sil, r12b
 * 0000000140512B45: test    rdi, rdi
 * 0000000140512B48: jz      short loc_140512B6A
 * 0000000140512B4A: mov     rax, [rdi+8]
 * 0000000140512B4E: mov     dl, sil
 * 0000000140512B51: mov     rcx, [rdi+10h]
 * 0000000140512B55: call    _guard_dispatch_icall
 * 0000000140512B5A: mov     rdi, [rdi]
 * 0000000140512B5D: or      sil, al
 * 0000000140512B60: test    rdi, rdi
 * 0000000140512B63: jnz     short loc_140512B4A
 * 0000000140512B65: test    sil, sil
 * 0000000140512B68: jnz     short loc_140512BBB
 * 0000000140512B6A: lea     rcx, KiNMILock
 * 0000000140512B71: call    KxTryToAcquireSpinLock
 * 0000000140512B76: test    al, al
 * 0000000140512B78: jnz     short loc_140512B93
 * 0000000140512B7A: mov     rdx, rbp
 * 0000000140512B7D: mov     rcx, r14
 * 0000000140512B80: call    KiCheckForFreezeExecution
 * 0000000140512B85: mov     rax, cs:KiNMILock
 * 0000000140512B8C: test    rax, rax
 * 0000000140512B8F: jnz     short loc_140512B7A
 * 0000000140512B91: jmp     short loc_140512B6A
 * 0000000140512B93: xor     eax, eax
 * 0000000140512B95: lock cmpxchg cs:KiBugCheckActive, ebx
 * 0000000140512B9D: xor     ecx, ecx
 * 0000000140512B9F: call    HalHandleNMI
 * 0000000140512BA4: mov     eax, ebx
 * 0000000140512BA6: lock cmpxchg cs:KiBugCheckActive, r12d
 * 0000000140512BAF: lea     rcx, KiNMILock; SpinLock
 * 0000000140512BB6: call    KxReleaseSpinLock
 * 0000000140512BBB: mov     edx, ds:rva KiProcessorIndexToNumberMappingTable[r13+r15*4]
 * 0000000140512BC3: mov     ecx, edx
 * 0000000140512BC5: mov     eax, edx
 * 0000000140512BC7: and     ecx, 3Fh
 * 0000000140512BCA: shl     rbx, cl
 * 0000000140512BCD: not     rbx
 * 0000000140512BD0: shr     rax, 6
 * 0000000140512BD4: lock and ds:rva qword_140C12838[r13+rax*8], rbx
 * 0000000140512BDD: mov     rbx, [rsp+48h+arg_0]
 * 0000000140512BE2: mov     rbp, [rsp+48h+arg_8]
 * 0000000140512BE7: mov     rsi, [rsp+48h+arg_18]
 * 0000000140512BEC: add     rsp, 20h
 * 0000000140512BF0: pop     r15
 * 0000000140512BF2: pop     r14
 * 0000000140512BF4: pop     r13
 * 0000000140512BF6: pop     r12
 * 0000000140512BF8: pop     rdi
 * 0000000140512BF9: retn
 */
