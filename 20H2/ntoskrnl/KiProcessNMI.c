/*
 * XREFs of KiProcessNMI @ 0x140510F30
 * Callers:
 *     KxNmiInterrupt @ 0x140408AC0 (KxNmiInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x14032EA48 (KxTryToAcquireSpinLock.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     HalHandleNMI @ 0x1404BBD80 (HalHandleNMI.c)
 *     KiCheckForFreezeExecution @ 0x140510AE0 (KiCheckForFreezeExecution.c)
 *     KiFlushCurrentRsb @ 0x140A1A740 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiProcessNMI @ 0x140510F30
 * Reason: Hex-Rays returned no pseudocode for 0x140510F30
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140510F30: mov     [rsp+arg_0], rbx
 * 0000000140510F35: mov     [rsp+arg_8], rbp
 * 0000000140510F3A: mov     [rsp+arg_18], rsi
 * 0000000140510F3F: push    rdi
 * 0000000140510F40: push    r12
 * 0000000140510F42: push    r13
 * 0000000140510F44: push    r14
 * 0000000140510F46: push    r15
 * 0000000140510F48: sub     rsp, 20h
 * 0000000140510F4C: mov     rax, cs:off_140C00978
 * 0000000140510F53: mov     r14, rcx
 * 0000000140510F56: xor     ecx, ecx
 * 0000000140510F58: mov     rbp, rdx
 * 0000000140510F5B: call    _guard_dispatch_icall
 * 0000000140510F60: mov     eax, dword ptr cs:KiSpeculationFeatures
 * 0000000140510F66: mov     ebx, 1
 * 0000000140510F6B: shr     eax, 19h
 * 0000000140510F6E: and     al, bl
 * 0000000140510F70: jz      short loc_140510F77
 * 0000000140510F72: call    KiFlushCurrentRsb
 * 0000000140510F77: lfence
 * 0000000140510F7A: mov     rdx, rbp
 * 0000000140510F7D: mov     rcx, r14
 * 0000000140510F80: call    KiCheckForFreezeExecution
 * 0000000140510F85: xor     r12d, r12d
 * 0000000140510F88: test    al, al
 * 0000000140510F8A: jnz     loc_14051109B
 * 0000000140510F90: mov     rax, gs:20h
 * 0000000140510F99: lea     r13, cs:140000000h
 * 0000000140510FA0: mov     r8, rbx
 * 0000000140510FA3: mov     ecx, [rax+24h]
 * 0000000140510FA6: mov     r15d, ecx
 * 0000000140510FA9: mov     eax, ds:rva KiProcessorIndexToNumberMappingTable[r13+rcx*4]
 * 0000000140510FB1: mov     ecx, eax
 * 0000000140510FB3: mov     edx, eax
 * 0000000140510FB5: and     ecx, 3Fh
 * 0000000140510FB8: shr     rdx, 6
 * 0000000140510FBC: shl     r8, cl
 * 0000000140510FBF: prefetchw byte ptr ds:rva qword_140C12658[r13+rdx*8]
 * 0000000140510FC8: mov     rax, ds:rva qword_140C12658[r13+rdx*8]
 * 0000000140510FD0: mov     rcx, rax
 * 0000000140510FD3: or      rcx, r8
 * 0000000140510FD6: lock cmpxchg ds:rva qword_140C12658[r13+rdx*8], rcx
 * 0000000140510FE0: jnz     short loc_140510FD0
 * 0000000140510FE2: test    rax, r8
 * 0000000140510FE5: jnz     loc_14051109B
 * 0000000140510FEB: mov     rax, cs:off_140C00978
 * 0000000140510FF2: mov     ecx, ebx
 * 0000000140510FF4: call    _guard_dispatch_icall
 * 0000000140510FF9: mov     rdi, cs:KiNmiCallbackListHead
 * 0000000140511000: mov     sil, r12b
 * 0000000140511003: test    rdi, rdi
 * 0000000140511006: jz      short loc_140511028
 * 0000000140511008: mov     rax, [rdi+8]
 * 000000014051100C: mov     dl, sil
 * 000000014051100F: mov     rcx, [rdi+10h]
 * 0000000140511013: call    _guard_dispatch_icall
 * 0000000140511018: mov     rdi, [rdi]
 * 000000014051101B: or      sil, al
 * 000000014051101E: test    rdi, rdi
 * 0000000140511021: jnz     short loc_140511008
 * 0000000140511023: test    sil, sil
 * 0000000140511026: jnz     short loc_140511079
 * 0000000140511028: lea     rcx, KiNMILock
 * 000000014051102F: call    KxTryToAcquireSpinLock
 * 0000000140511034: test    al, al
 * 0000000140511036: jnz     short loc_140511051
 * 0000000140511038: mov     rdx, rbp
 * 000000014051103B: mov     rcx, r14
 * 000000014051103E: call    KiCheckForFreezeExecution
 * 0000000140511043: mov     rax, cs:KiNMILock
 * 000000014051104A: test    rax, rax
 * 000000014051104D: jnz     short loc_140511038
 * 000000014051104F: jmp     short loc_140511028
 * 0000000140511051: xor     eax, eax
 * 0000000140511053: lock cmpxchg cs:KiBugCheckActive, ebx
 * 000000014051105B: xor     ecx, ecx
 * 000000014051105D: call    HalHandleNMI
 * 0000000140511062: mov     eax, ebx
 * 0000000140511064: lock cmpxchg cs:KiBugCheckActive, r12d
 * 000000014051106D: lea     rcx, KiNMILock; SpinLock
 * 0000000140511074: call    KxReleaseSpinLock
 * 0000000140511079: mov     edx, ds:rva KiProcessorIndexToNumberMappingTable[r13+r15*4]
 * 0000000140511081: mov     ecx, edx
 * 0000000140511083: mov     eax, edx
 * 0000000140511085: and     ecx, 3Fh
 * 0000000140511088: shl     rbx, cl
 * 000000014051108B: not     rbx
 * 000000014051108E: shr     rax, 6
 * 0000000140511092: lock and ds:rva qword_140C12658[r13+rax*8], rbx
 * 000000014051109B: mov     rbx, [rsp+48h+arg_0]
 * 00000001405110A0: mov     rbp, [rsp+48h+arg_8]
 * 00000001405110A5: mov     rsi, [rsp+48h+arg_18]
 * 00000001405110AA: add     rsp, 20h
 * 00000001405110AE: pop     r15
 * 00000001405110B0: pop     r14
 * 00000001405110B2: pop     r13
 * 00000001405110B4: pop     r12
 * 00000001405110B6: pop     rdi
 * 00000001405110B7: retn
 */
