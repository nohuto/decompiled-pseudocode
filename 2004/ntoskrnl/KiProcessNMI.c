/*
 * XREFs of KiProcessNMI @ 0x14050D600
 * Callers:
 *     KxNmiInterrupt @ 0x140402700 (KxNmiInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x14035E098 (KxTryToAcquireSpinLock.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     HalHandleNMI @ 0x1404B8860 (HalHandleNMI.c)
 *     KiCheckForFreezeExecution @ 0x14050D1B0 (KiCheckForFreezeExecution.c)
 *     KiFlushCurrentRsb @ 0x140A14600 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiProcessNMI @ 0x14050D600
 * Reason: Hex-Rays returned no pseudocode for 0x14050D600
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014050D600: mov     [rsp+arg_0], rbx
 * 000000014050D605: mov     [rsp+arg_8], rbp
 * 000000014050D60A: mov     [rsp+arg_18], rsi
 * 000000014050D60F: push    rdi
 * 000000014050D610: push    r12
 * 000000014050D612: push    r13
 * 000000014050D614: push    r14
 * 000000014050D616: push    r15
 * 000000014050D618: sub     rsp, 20h
 * 000000014050D61C: mov     rax, cs:off_140C00978
 * 000000014050D623: mov     r14, rcx
 * 000000014050D626: xor     ecx, ecx
 * 000000014050D628: mov     rbp, rdx
 * 000000014050D62B: call    _guard_dispatch_icall
 * 000000014050D630: mov     eax, dword ptr cs:KiSpeculationFeatures
 * 000000014050D636: mov     ebx, 1
 * 000000014050D63B: shr     eax, 19h
 * 000000014050D63E: and     al, bl
 * 000000014050D640: jz      short loc_14050D647
 * 000000014050D642: call    KiFlushCurrentRsb
 * 000000014050D647: lfence
 * 000000014050D64A: mov     rdx, rbp
 * 000000014050D64D: mov     rcx, r14
 * 000000014050D650: call    KiCheckForFreezeExecution
 * 000000014050D655: xor     r12d, r12d
 * 000000014050D658: test    al, al
 * 000000014050D65A: jnz     loc_14050D76B
 * 000000014050D660: mov     rax, gs:20h
 * 000000014050D669: lea     r13, cs:140000000h
 * 000000014050D670: mov     r8, rbx
 * 000000014050D673: mov     ecx, [rax+24h]
 * 000000014050D676: mov     r15d, ecx
 * 000000014050D679: mov     eax, ds:rva KiProcessorIndexToNumberMappingTable[r13+rcx*4]
 * 000000014050D681: mov     ecx, eax
 * 000000014050D683: mov     edx, eax
 * 000000014050D685: and     ecx, 3Fh
 * 000000014050D688: shr     rdx, 6
 * 000000014050D68C: shl     r8, cl
 * 000000014050D68F: prefetchw byte ptr ds:rva qword_140C12658[r13+rdx*8]
 * 000000014050D698: mov     rax, ds:rva qword_140C12658[r13+rdx*8]
 * 000000014050D6A0: mov     rcx, rax
 * 000000014050D6A3: or      rcx, r8
 * 000000014050D6A6: lock cmpxchg ds:rva qword_140C12658[r13+rdx*8], rcx
 * 000000014050D6B0: jnz     short loc_14050D6A0
 * 000000014050D6B2: test    rax, r8
 * 000000014050D6B5: jnz     loc_14050D76B
 * 000000014050D6BB: mov     rax, cs:off_140C00978
 * 000000014050D6C2: mov     ecx, ebx
 * 000000014050D6C4: call    _guard_dispatch_icall
 * 000000014050D6C9: mov     rdi, cs:KiNmiCallbackListHead
 * 000000014050D6D0: mov     sil, r12b
 * 000000014050D6D3: test    rdi, rdi
 * 000000014050D6D6: jz      short loc_14050D6F8
 * 000000014050D6D8: mov     rax, [rdi+8]
 * 000000014050D6DC: mov     dl, sil
 * 000000014050D6DF: mov     rcx, [rdi+10h]
 * 000000014050D6E3: call    _guard_dispatch_icall
 * 000000014050D6E8: mov     rdi, [rdi]
 * 000000014050D6EB: or      sil, al
 * 000000014050D6EE: test    rdi, rdi
 * 000000014050D6F1: jnz     short loc_14050D6D8
 * 000000014050D6F3: test    sil, sil
 * 000000014050D6F6: jnz     short loc_14050D749
 * 000000014050D6F8: lea     rcx, KiNMILock
 * 000000014050D6FF: call    KxTryToAcquireSpinLock
 * 000000014050D704: test    al, al
 * 000000014050D706: jnz     short loc_14050D721
 * 000000014050D708: mov     rdx, rbp
 * 000000014050D70B: mov     rcx, r14
 * 000000014050D70E: call    KiCheckForFreezeExecution
 * 000000014050D713: mov     rax, cs:KiNMILock
 * 000000014050D71A: test    rax, rax
 * 000000014050D71D: jnz     short loc_14050D708
 * 000000014050D71F: jmp     short loc_14050D6F8
 * 000000014050D721: xor     eax, eax
 * 000000014050D723: lock cmpxchg cs:KiBugCheckActive, ebx
 * 000000014050D72B: xor     ecx, ecx
 * 000000014050D72D: call    HalHandleNMI
 * 000000014050D732: mov     eax, ebx
 * 000000014050D734: lock cmpxchg cs:KiBugCheckActive, r12d
 * 000000014050D73D: lea     rcx, KiNMILock; SpinLock
 * 000000014050D744: call    KxReleaseSpinLock
 * 000000014050D749: mov     edx, ds:rva KiProcessorIndexToNumberMappingTable[r13+r15*4]
 * 000000014050D751: mov     ecx, edx
 * 000000014050D753: mov     eax, edx
 * 000000014050D755: and     ecx, 3Fh
 * 000000014050D758: shl     rbx, cl
 * 000000014050D75B: not     rbx
 * 000000014050D75E: shr     rax, 6
 * 000000014050D762: lock and ds:rva qword_140C12658[r13+rax*8], rbx
 * 000000014050D76B: mov     rbx, [rsp+48h+arg_0]
 * 000000014050D770: mov     rbp, [rsp+48h+arg_8]
 * 000000014050D775: mov     rsi, [rsp+48h+arg_18]
 * 000000014050D77A: add     rsp, 20h
 * 000000014050D77E: pop     r15
 * 000000014050D780: pop     r14
 * 000000014050D782: pop     r13
 * 000000014050D784: pop     r12
 * 000000014050D786: pop     rdi
 * 000000014050D787: retn
 */
