/*
 * XREFs of NtSetInformationWorkerFactory @ 0x1402661E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x140266BC0 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCreateThread @ 0x140266C58 (ExpWorkerFactoryCreateThread.c)
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     KeSetTimer2 @ 0x14027EDC0 (KeSetTimer2.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402826A0 (ExpWorkerFactoryCheckCreate.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1402D59F0 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KiValidateCpuSetMasks @ 0x14032B988 (KiValidateCpuSetMasks.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x14034C3EC (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     ExSystemExceptionFilter @ 0x1407C22E0 (ExSystemExceptionFilter.c)
 */

/*
 * Hex-Rays decompilation failed for NtSetInformationWorkerFactory @ 0x1402661E0
 * Reason: Hex-Rays returned no pseudocode for 0x1402661E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402661E0: push    rbx
 * 00000001402661E2: push    rsi
 * 00000001402661E3: push    rdi
 * 00000001402661E4: push    r12
 * 00000001402661E6: push    r13
 * 00000001402661E8: push    r14
 * 00000001402661EA: push    r15
 * 00000001402661EC: sub     rsp, 130h
 * 00000001402661F3: mov     rax, cs:__security_cookie
 * 00000001402661FA: xor     rax, rsp
 * 00000001402661FD: mov     [rsp+168h+var_48], rax
 * 0000000140266205: mov     ebx, r9d
 * 0000000140266208: mov     rdi, r8
 * 000000014026620B: mov     esi, edx
 * 000000014026620D: mov     r15, rcx
 * 0000000140266210: xorps   xmm0, xmm0
 * 0000000140266213: xor     eax, eax
 * 0000000140266215: movups  xmmword ptr [rsp+168h+LockHandle.LockQueue.Next], xmm0
 * 000000014026621A: mov     qword ptr [rsp+168h+LockHandle.OldIrql], rax
 * 000000014026621F: movups  [rsp+168h+var_F8], xmm0
 * 0000000140266224: mov     rax, gs:188h
 * 000000014026622D: movzx   r14d, byte ptr [rax+232h]
 * 0000000140266235: xor     edx, edx; Val
 * 0000000140266237: mov     r8d, 0A0h; Size
 * 000000014026623D: lea     rcx, [rsp+168h+Src]; void *
 * 0000000140266245: call    memset
 * 000000014026624A: cmp     esi, 9
 * 000000014026624D: jnz     loc_1402665F7
 * 0000000140266253: lea     rdx, cs:140000000h
 * 000000014026625A: mov     eax, 4; jumptable 0000000140266616 cases 3-5,8,11-14
 * 000000014026625F: mov     dword ptr [rsp+168h+Size], eax
 * 0000000140266263: cmp     ebx, eax
 * 0000000140266265: jnz     loc_14043194A
 * 000000014026626B: cmp     esi, 9
 * 000000014026626E: jnz     short loc_1402662AD
 * 0000000140266270: test    r14b, r14b
 * 0000000140266273: jz      short loc_14026629F
 * 0000000140266275: test    dil, 3
 * 0000000140266279: jnz     loc_140266408
 * 000000014026627F: lea     rax, [rdi+4]
 * 0000000140266283: mov     rcx, 7FFFFFFF0000h
 * 000000014026628D: cmp     rax, rcx
 * 0000000140266290: ja      loc_14026640D
 * 0000000140266296: cmp     rax, rdi
 * 0000000140266299: jb      loc_14026640D
 * 000000014026629F: mov     eax, [rdi]
 * 00000001402662A1: mov     dword ptr [rsp+168h+Src], eax
 * 00000001402662A8: jmp     loc_14026641D
 * 00000001402662AD: lea     eax, [rsi-2]; switch 4 cases
 * 00000001402662B0: cmp     eax, 0Dh
 * 00000001402662B3: ja      def_1402662C5; jumptable 00000001402662C5 default case
 * 00000001402662B9: cdqe
 * 00000001402662BB: mov     ecx, ds:(jpt_1402662C5 - 140000000h)[rdx+rax*4]
 * 00000001402662C2: add     rcx, rdx
 * 00000001402662C5: jmp     rcx; switch jump
 * 00000001402662CB: test    r14b, r14b; jumptable 00000001402662C5 cases 3-5
 * 00000001402662CE: jz      short loc_14026629F
 * 00000001402662D0: mov     rax, rdi
 * 00000001402662D3: mov     rcx, 7FFFFFFF0000h
 * 00000001402662DD: cmp     rdi, rcx
 * 00000001402662E0: jnb     loc_1402663EA
 * 00000001402662E6: mov     eax, [rax]
 * 00000001402662E8: mov     dword ptr [rsp+168h+Src], eax
 * 00000001402662EF: jmp     loc_14026641D
 * 00000001402662F4: test    r14b, r14b; jumptable 00000001402662C5 case 2
 * 00000001402662F7: jz      short loc_140266318
 * 00000001402662F9: mov     rax, rdi
 * 00000001402662FC: test    dil, 3
 * 0000000140266300: jnz     loc_1402663FA
 * 0000000140266306: mov     rcx, 7FFFFFFF0000h
 * 0000000140266310: cmp     rdi, rcx
 * 0000000140266313: jnb     short loc_14026638F
 * 0000000140266315: movzx   eax, byte ptr [rax]
 * 0000000140266318: mov     rax, [rdi]
 * 000000014026631B: mov     qword ptr [rsp+168h+Src], rax
 * 0000000140266323: jmp     loc_14026641D
 * 0000000140266328: test    r14b, r14b
 * 000000014026632B: jz      loc_14026641D
 * 0000000140266331: mov     rdx, rdi
 * 0000000140266334: mov     rcx, 7FFFFFFF0000h
 * 000000014026633E: cmp     rdi, rcx
 * 0000000140266341: jnb     loc_1402663F2
 * 0000000140266347: mov     eax, [rdx]
 * 0000000140266349: mov     [rdx], eax
 * 000000014026634B: jmp     loc_14026641D
 * 0000000140266350: test    r14b, r14b
 * 0000000140266353: jz      short loc_140266378
 * 0000000140266355: mov     rax, rdi
 * 0000000140266358: test    dil, 3
 * 000000014026635C: jnz     loc_1402663FA
 * 0000000140266362: mov     rcx, 7FFFFFFF0000h
 * 000000014026636C: cmp     rdi, rcx
 * 000000014026636F: jnb     loc_140266400
 * 0000000140266375: movzx   eax, byte ptr [rax]
 * 0000000140266378: movups  xmm0, xmmword ptr [rdi]
 * 000000014026637B: movaps  [rsp+168h+Src], xmm0
 * 0000000140266383: jmp     loc_14026641D
 * 0000000140266388: mov     ecx, 25h ; '%'; jumptable 00000001402662C5 default case
 * 000000014026638D: int     29h; Win8: RtlFailFast(ecx)
 * 000000014026638F: mov     rax, rcx
 * 0000000140266392: jmp     short loc_140266315
 * 0000000140266394: test    r14b, r14b
 * 0000000140266397: jz      short loc_1402663D1
 * 0000000140266399: mov     ebx, dword ptr [rsp+168h+Size]
 * 000000014026639D: test    ebx, ebx
 * 000000014026639F: jz      short loc_1402663D5
 * 00000001402663A1: test    dil, 3
 * 00000001402663A5: jz      short loc_1402663AC
 * 00000001402663A7: call    ExRaiseDatatypeMisalignment
 * 00000001402663AC: lea     rdx, [rdi+rbx]
 * 00000001402663B0: mov     rcx, 7FFFFFFF0000h
 * 00000001402663BA: cmp     rdx, rcx
 * 00000001402663BD: ja      short loc_1402663C4
 * 00000001402663BF: cmp     rdx, rdi
 * 00000001402663C2: jnb     short loc_1402663D5
 * 00000001402663C4: xor     eax, eax
 * 00000001402663C6: mov     ds:7FFFFFFF0000h, al
 * 00000001402663CF: jmp     short loc_1402663D5
 * 00000001402663D1: mov     ebx, dword ptr [rsp+168h+Size]
 * 00000001402663D5: mov     r8d, ebx; Size
 * 00000001402663D8: mov     rdx, rdi; Src
 * 00000001402663DB: lea     rcx, [rsp+168h+Src]; void *
 * 00000001402663E3: call    memmove
 * 00000001402663E8: jmp     short loc_14026641D
 * 00000001402663EA: mov     rax, rcx
 * 00000001402663ED: jmp     loc_1402662E6
 * 00000001402663F2: mov     rdx, rcx
 * 00000001402663F5: jmp     loc_140266347
 * 00000001402663FA: call    ExRaiseDatatypeMisalignment
 * 0000000140266400: mov     rax, rcx
 * 0000000140266403: jmp     loc_140266375
 * 0000000140266408: call    ExRaiseDatatypeMisalignment
 * 000000014026640D: xor     eax, eax
 * 000000014026640F: mov     ds:7FFFFFFF0000h, al
 * 0000000140266418: jmp     loc_14026629F
 * 000000014026641D: jmp     short loc_140266424
 * 000000014026641F: jmp     loc_1402665D3
 * 0000000140266424: mov     r8, cs:ExpWorkerFactoryObjectType; ObjectType
 * 000000014026642B: xor     ebx, ebx
 * 000000014026642D: mov     [rsp+168h+var_138], rbx
 * 0000000140266432: mov     [rsp+168h+HandleInformation], rbx; HandleInformation
 * 0000000140266437: lea     rax, [rsp+168h+var_138]
 * 000000014026643C: mov     [rsp+168h+Object], rax; Object
 * 0000000140266441: movzx   r9d, r14b; AccessMode
 * 0000000140266445: lea     edx, [rbx+4]; DesiredAccess
 * 0000000140266448: mov     rcx, r15; Handle
 * 000000014026644B: call    ObReferenceObjectByHandle
 * 0000000140266450: test    eax, eax
 * 0000000140266452: js      loc_1402665D3
 * 0000000140266458: cmp     esi, 8
 * 000000014026645B: jz      loc_140431954
 * 0000000140266461: mov     r12d, ebx
 * 0000000140266464: xor     r15b, r15b
 * 0000000140266467: mov     r13b, 1
 * 000000014026646A: mov     rax, [rsp+168h+var_138]
 * 000000014026646F: mov     [rsp+168h+var_128], rax
 * 0000000140266474: mov     r14, [rax+10h]
 * 0000000140266478: mov     [rsp+168h+LockHandle.LockQueue.Lock], r14
 * 000000014026647D: mov     [rsp+168h+LockHandle.LockQueue.Next], rbx
 * 0000000140266482: mov     r10, cr8
 * 0000000140266486: mov     eax, 2
 * 000000014026648B: mov     cr8, rax
 * 000000014026648F: mov     eax, cs:KiIrqlFlags
 * 0000000140266495: test    eax, eax
 * 0000000140266497: jnz     loc_14043198B
 * 000000014026649D: mov     r8, 0FFFFFFFFFFFFFFFFh
 * 00000001402664A4: mov     [rsp+168h+LockHandle.OldIrql], r10b
 * 00000001402664A9: mov     rcx, gs:20h
 * 00000001402664B2: mov     rdx, [rcx+84B8h]
 * 00000001402664B9: test    rdx, rdx
 * 00000001402664BC: jnz     loc_1404319D1
 * 00000001402664C2: test    byte ptr cs:PerfGlobalGroupMask+6, 21h
 * 00000001402664C9: jnz     loc_1404319FB
 * 00000001402664CF: lea     rdx, [rsp+168h+LockHandle]
 * 00000001402664D4: xchg    rdx, [r14]
 * 00000001402664D7: test    rdx, rdx
 * 00000001402664DA: jnz     loc_14026688F
 * 00000001402664E0: cmp     esi, 9
 * 00000001402664E3: jnz     loc_140266626
 * 00000001402664E9: mov     ecx, dword ptr [rsp+168h+Src]
 * 00000001402664F0: mov     rsi, [rsp+168h+var_138]
 * 00000001402664F5: test    ecx, ecx
 * 00000001402664F7: jz      short loc_140266526
 * 00000001402664F9: sub     ecx, 1
 * 00000001402664FC: jz      short loc_140266520
 * 00000001402664FE: sub     ecx, 1
 * 0000000140266501: jnz     loc_140431C47
 * 0000000140266507: mov     eax, [rsi+120h]
 * 000000014026650D: test    eax, eax
 * 000000014026650F: jz      loc_140266ADC
 * 0000000140266515: sub     eax, 1
 * 0000000140266518: mov     [rsi+120h], eax
 * 000000014026651E: jnz     short loc_140266540
 * 0000000140266520: movzx   r15d, r13b
 * 0000000140266524: jmp     short loc_140266540
 * 0000000140266526: mov     eax, [rsi+120h]
 * 000000014026652C: cmp     eax, [rsi+124h]
 * 0000000140266532: jz      loc_140266AE7
 * 0000000140266538: inc     eax
 * 000000014026653A: mov     [rsi+120h], eax
 * 0000000140266540: xor     dil, dil
 * 0000000140266543: test    r15b, r15b
 * 0000000140266546: jnz     loc_1402666AF
 * 000000014026654C: test    r13b, r13b
 * 000000014026654F: jz      short loc_1402665C3
 * 0000000140266551: test    byte ptr cs:PerfGlobalGroupMask+6, 1
 * 0000000140266558: jnz     loc_140431D46
 * 000000014026655E: prefetchw byte ptr [rsp+168h+LockHandle.LockQueue.Next]
 * 0000000140266563: mov     rax, [rsp+168h+LockHandle.LockQueue.Next]
 * 0000000140266568: test    rax, rax
 * 000000014026656B: jnz     loc_1402668AF
 * 0000000140266571: mov     rcx, [rsp+168h+LockHandle.LockQueue.Lock]
 * 0000000140266576: lea     rax, [rsp+168h+LockHandle]
 * 000000014026657B: lock cmpxchg [rcx], rbx
 * 0000000140266580: lea     rcx, [rsp+168h+LockHandle]
 * 0000000140266585: cmp     rax, rcx
 * 0000000140266588: jnz     loc_1402668A5
 * 000000014026658E: mov     rcx, gs:20h
 * 0000000140266597: mov     rdx, [rcx+84B8h]
 * 000000014026659E: test    rdx, rdx
 * 00000001402665A1: jnz     loc_140431D5E
 * 00000001402665A7: movzx   ebx, [rsp+168h+LockHandle.OldIrql]
 * 00000001402665AC: mov     eax, cs:KiIrqlFlags
 * 00000001402665B2: test    eax, eax
 * 00000001402665B4: jnz     loc_140431D82
 * 00000001402665BA: mov     cr8, rbx
 * 00000001402665BE: mov     rsi, [rsp+168h+var_138]
 * 00000001402665C3: mov     edx, 746C6644h; Tag
 * 00000001402665C8: mov     rcx, rsi; Object
 * 00000001402665CB: call    ObfDereferenceObjectWithTag
 * 00000001402665D0: mov     eax, r12d
 * 00000001402665D3: mov     rcx, [rsp+168h+var_48]
 * 00000001402665DB: xor     rcx, rsp; StackCookie
 * 00000001402665DE: call    __security_check_cookie
 * 00000001402665E3: add     rsp, 130h
 * 00000001402665EA: pop     r15
 * 00000001402665EC: pop     r14
 * 00000001402665EE: pop     r13
 * 00000001402665F0: pop     r12
 * 00000001402665F2: pop     rdi
 * 00000001402665F3: pop     rsi
 * 00000001402665F4: pop     rbx
 * 00000001402665F5: retn
 * 00000001402665F7: lea     eax, [rsi-2]; switch 14 cases
 * 00000001402665FA: cmp     eax, 0Dh
 * 00000001402665FD: ja      def_140266616; jumptable 0000000140266616 default case, cases 7,9
 * 0000000140266603: cdqe
 * 0000000140266605: lea     rdx, cs:140000000h
 * 000000014026660C: mov     eax, ds:(jpt_140266616 - 140000000h)[rdx+rax*4]
 * 0000000140266613: add     rax, rdx
 * 0000000140266616: jmp     rax; switch jump
 * 000000014026661C: mov     eax, 8; jumptable 0000000140266616 case 2
 * 0000000140266621: jmp     loc_14026625F
 * 0000000140266626: add     esi, 0FFFFFFFEh; switch 4 cases
 * 0000000140266629: cmp     esi, 0Dh
 * 000000014026662C: ja      def_140266646; jumptable 0000000140266646 default case
 * 0000000140266632: movsxd  rax, esi
 * 0000000140266635: lea     rdx, cs:140000000h
 * 000000014026663C: mov     ecx, ds:(jpt_140266646 - 140000000h)[rdx+rax*4]
 * 0000000140266643: add     rcx, rdx
 * 0000000140266646: jmp     rcx; switch jump
 * 000000014026664C: mov     rsi, [rsp+168h+var_138]; jumptable 0000000140266646 case 3
 * 0000000140266651: mov     ecx, [rsi+134h]
 * 0000000140266657: mov     edx, dword ptr [rsp+168h+Src]
 * 000000014026665E: test    edx, edx
 * 0000000140266660: js      loc_140266A38
 * 0000000140266666: lea     eax, [rcx+rdx]
 * 0000000140266669: cmp     ecx, eax
 * 000000014026666B: jnb     loc_140431AAD
 * 0000000140266671: mov     [rsi+134h], eax
 * 0000000140266677: test    ecx, ecx
 * 0000000140266679: jnz     loc_140266A51
 * 000000014026667F: test    eax, eax
 * 0000000140266681: jz      loc_140431AC5
 * 0000000140266687: mov     rcx, rsi; Object
 * 000000014026668A: call    ExpTryEnterWorkerFactoryAwayMode
 * 000000014026668F: test    al, al
 * 0000000140266691: jz      loc_140266540
 * 0000000140266697: xor     r8d, r8d
 * 000000014026669A: lea     rdx, [rsp+168h+LockHandle]; LockHandle
 * 000000014026669F: mov     rcx, rsi; ListEntry
 * 00000001402666A2: call    ExpWorkerFactoryCheckCreate
 * 00000001402666A7: xor     r13b, r13b
 * 00000001402666AA: jmp     loc_140266540
 * 00000001402666AF: mov     ecx, [rsi+120h]
 * 00000001402666B5: mov     edx, [rsi+128h]
 * 00000001402666BB: add     edx, ecx
 * 00000001402666BD: lea     rax, [rsi+10h]
 * 00000001402666C1: mov     [rsp+168h+var_128], rax
 * 00000001402666C6: mov     rax, [rax]
 * 00000001402666C9: cmp     byte ptr [rax+21h], 0
 * 00000001402666CD: jnz     loc_140431C96
 * 00000001402666D3: mov     eax, [rsi+11Ch]
 * 00000001402666D9: cmp     ecx, eax
 * 00000001402666DB: jnb     loc_140431CA1
 * 00000001402666E1: lea     r14, [rsi+130h]
 * 00000001402666E8: mov     ecx, [r14]
 * 00000001402666EB: test    ecx, ecx
 * 00000001402666ED: jnz     loc_1402667AD
 * 00000001402666F3: cmp     edx, eax
 * 00000001402666F5: jnb     loc_1402667AD
 * 00000001402666FB: test    dword ptr [rsi+138h], 200h
 * 0000000140266705: jz      short loc_140266712
 * 0000000140266707: mov     rcx, rsi; Object
 * 000000014026670A: call    ExpLeaveWorkerFactoryAwayMode
 * 000000014026670F: mov     ecx, [r14]
 * 0000000140266712: lea     eax, [rcx+1]
 * 0000000140266715: mov     [r14], eax
 * 0000000140266718: lea     rcx, [rsp+168h+LockHandle]; LockHandle
 * 000000014026671D: call    KeReleaseInStackQueuedSpinLockFromDpcLevel
 * 0000000140266722: movzx   r15d, [rsp+168h+LockHandle.OldIrql]
 * 0000000140266728: mov     eax, cs:KiIrqlFlags
 * 000000014026672E: test    eax, eax
 * 0000000140266730: jnz     loc_140431CB5
 * 0000000140266736: mov     cr8, r15
 * 000000014026673A: xor     r13b, r13b
 * 000000014026673D: mov     rcx, rsi
 * 0000000140266740: call    ExpWorkerFactoryCreateThread
 * 0000000140266745: mov     r12d, eax
 * 0000000140266748: test    eax, eax
 * 000000014026674A: jns     loc_14026654C
 * 0000000140266750: jmp     loc_140431D20
 * 0000000140266755: mov     r14, [rsp+168h+var_128]; jumptable 0000000140266646 case 5
 * 000000014026675A: mov     rax, [r14+10h]
 * 000000014026675E: mov     rsi, [rsp+168h+var_138]
 * 0000000140266763: cmp     [rax+21h], bl
 * 0000000140266766: jnz     loc_140431B60
 * 000000014026676C: movzx   edi, r13b
 * 0000000140266770: mov     edx, dword ptr [rsp+168h+Src]
 * 0000000140266777: test    edx, edx
 * 0000000140266779: jz      short loc_140266796
 * 000000014026677B: cmp     [rsi+11Ch], ebx
 * 0000000140266781: jz      loc_140431B6B
 * 0000000140266787: mov     rax, [rax+8]
 * 000000014026678B: mov     ecx, [rax+4]
 * 000000014026678E: test    ecx, ecx
 * 0000000140266790: jg      loc_140431B74
 * 0000000140266796: mov     [rsi+11Ch], edx
 * 000000014026679C: cmp     edx, [rsi+118h]
 * 00000001402667A2: jnb     loc_140266543
 * 00000001402667A8: jmp     loc_140431B7D
 * 00000001402667AD: mov     r12d, ebx
 * 00000001402667B0: jmp     loc_14026654C
 * 00000001402667B5: mov     rdx, qword ptr [rsp+168h+Src]; jumptable 0000000140266646 case 2
 * 00000001402667BD: test    rdx, rdx
 * 00000001402667C0: jns     loc_140431A9D
 * 00000001402667C6: cmp     rdx, 0FFFFFFFFFF676980h
 * 00000001402667CD: jg      loc_140431A79
 * 00000001402667D3: mov     rax, 0FFFFFFFE9A5F4400h
 * 00000001402667DD: cmp     rdx, rax
 * 00000001402667E0: jl      loc_140431A8D
 * 00000001402667E6: mov     rsi, [rsp+168h+var_138]
 * 00000001402667EB: mov     [rsi+70h], rdx
 * 00000001402667EF: mov     qword ptr [rsp+168h+var_F8+8], r8
 * 00000001402667F4: mov     r8, rdx
 * 00000001402667F7: neg     r8
 * 00000001402667FA: lea     rcx, [rsi+148h]
 * 0000000140266801: lea     r9, [rsp+168h+var_F8]
 * 0000000140266806: call    KeSetTimer2
 * 000000014026680B: jmp     loc_140266540
 * 0000000140266810: mov     r14, [rsp+168h+var_128]
 * 0000000140266815: mov     rax, [r14+10h]
 * 0000000140266819: mov     rsi, [rsp+168h+var_138]
 * 000000014026681E: cmp     [rax+21h], bl
 * 0000000140266821: jnz     loc_140431B88
 * 0000000140266827: mov     eax, dword ptr [rsp+168h+Src]
 * 000000014026682E: mov     [rsi+12Ch], eax
 * 0000000140266834: test    eax, eax
 * 0000000140266836: jz      loc_140266540
 * 000000014026683C: mov     ecx, [rsi+118h]
 * 0000000140266842: cmp     eax, ecx
 * 0000000140266844: jb      loc_140431B93
 * 000000014026684A: mov     ecx, [rsi+11Ch]
 * 0000000140266850: xor     dil, dil
 * 0000000140266853: cmp     eax, ecx
 * 0000000140266855: jbe     loc_140266543
 * 000000014026685B: jmp     loc_140431B9E
 * 0000000140266860: test    byte ptr [rsp+168h+Src], r13b
 * 0000000140266868: jz      loc_140431C40
 * 000000014026686E: mov     ecx, 800h
 * 0000000140266873: mov     rsi, [rsp+168h+var_138]
 * 0000000140266878: mov     eax, [rsi+138h]
 * 000000014026687E: btr     eax, 0Bh
 * 0000000140266882: or      eax, ecx
 * 0000000140266884: mov     [rsi+138h], eax
 * 000000014026688A: jmp     loc_140266540
 * 000000014026688F: lea     rcx, [rsp+168h+LockHandle]
 * 0000000140266894: call    KxWaitForLockOwnerShip
 * 0000000140266899: mov     r8, 0FFFFFFFFFFFFFFFFh
 * 00000001402668A0: jmp     loc_1402664E0
 * 00000001402668A5: lea     rcx, [rsp+168h+LockHandle]
 * 00000001402668AA: call    KxWaitForLockChainValid
 * 00000001402668AF: mov     [rsp+168h+LockHandle.LockQueue.Next], rbx
 * 00000001402668B4: lock xor qword ptr [rax+8], 1
 * 00000001402668BA: jmp     loc_14026658E
 * 0000000140266900: mov     cr0, rbp
 * 0000000140266903: xor     r13b, r13b
 * 0000000140266906: mov     [rdi], r14d
 * 0000000140266909: xor     dil, dil
 * 000000014026690C: jmp     loc_140266543
 * 0000000140266911: xor     ebx, ebx
 * 0000000140266913: movzx   edi, bl
 * 0000000140266916: movzx   r13d, bl
 * 000000014026691A: mov     r12d, ebx
 * 000000014026691D: movzx   r15d, bl
 * 0000000140266921: mov     rsi, [rsp+168h+var_138]
 * 0000000140266926: jmp     loc_140266543
 * 0000000140266947: mov     r14, [rsp+168h+var_128]; jumptable 0000000140266646 case 4
 * 000000014026694C: mov     rax, [r14+10h]
 * 0000000140266950: mov     rsi, [rsp+168h+var_138]
 * 0000000140266955: cmp     [rax+21h], bl
 * 0000000140266958: jnz     loc_140431AD2
 * 000000014026695E: lea     rdi, [rsi+118h]
 * 0000000140266965: movzx   r15d, r15b
 * 0000000140266969: mov     ecx, 1
 * 000000014026696E: mov     eax, dword ptr [rsp+168h+Src]
 * 0000000140266975: cmp     eax, [rdi]
 * 0000000140266977: cmova   r15d, ecx
 * 000000014026697B: mov     [rdi], eax
 * 000000014026697D: cmp     [rsi+11Ch], eax
 * 0000000140266983: jb      loc_140431ADD
 * 0000000140266989: test    r15b, r15b
 * 000000014026698C: jz      loc_140266540
 * 0000000140266992: xor     r15b, r15b
 * 0000000140266995: test    dword ptr [rsi+138h], 200h
 * 000000014026699F: jnz     loc_140266AF2
 * 00000001402669A5: lea     rcx, [rsi+128h]
 * 00000001402669AC: mov     [rsp+168h+Size], rcx
 * 00000001402669B1: lea     rax, [rsi+120h]
 * 00000001402669B8: mov     [rsp+168h+var_100], rax
 * 00000001402669BD: mov     eax, [rax]
 * 00000001402669BF: add     eax, [rcx]
 * 00000001402669C1: cmp     eax, [rdi]
 * 00000001402669C3: jnb     loc_140266540
 * 00000001402669C9: lea     rax, [rsi+130h]
 * 00000001402669D0: mov     [rsp+168h+var_128], rax
 * 00000001402669D5: inc     dword ptr [rax]
 * 00000001402669D7: lea     rcx, [rsp+168h+LockHandle]; LockHandle
 * 00000001402669DC: call    KeReleaseInStackQueuedSpinLockFromDpcLevel
 * 00000001402669E1: movzx   r12d, [rsp+168h+LockHandle.OldIrql]
 * 00000001402669E7: mov     eax, cs:KiIrqlFlags
 * 00000001402669ED: test    eax, eax
 * 00000001402669EF: jnz     loc_140431AE8
 * 00000001402669F5: mov     cr8, r12
 * 00000001402669F9: mov     rcx, rsi
 * 00000001402669FC: call    ExpWorkerFactoryCreateThread
 * 0000000140266A01: mov     r12d, eax
 * 0000000140266A04: lea     rdx, [rsp+168h+LockHandle]; LockHandle
 * 0000000140266A09: mov     rcx, [r14+10h]; SpinLock
 * 0000000140266A0D: call    KeAcquireInStackQueuedSpinLock
 * 0000000140266A12: test    r12d, r12d
 * 0000000140266A15: js      loc_140431B54
 * 0000000140266A1B: mov     rax, [rsp+168h+var_100]
 * 0000000140266A20: mov     ecx, [rax]
 * 0000000140266A22: mov     rax, [rsp+168h+Size]
 * 0000000140266A27: add     ecx, [rax]
 * 0000000140266A29: cmp     ecx, [rdi]
 * 0000000140266A2B: mov     rax, [rsp+168h+var_128]
 * 0000000140266A30: jnb     loc_140266540
 * 0000000140266A36: jmp     short loc_1402669D5
 * 0000000140266A38: mov     eax, edx
 * 0000000140266A3A: neg     eax
 * 0000000140266A3C: cmp     ecx, eax
 * 0000000140266A3E: ja      loc_140431AB7
 * 0000000140266A44: mov     [rsi+134h], ebx
 * 0000000140266A4A: mov     eax, ebx
 * 0000000140266A4C: jmp     loc_140266677
 * 0000000140266A51: test    eax, eax
 * 0000000140266A53: jnz     loc_140266540
 * 0000000140266A59: test    dword ptr [rsi+138h], 200h
 * 0000000140266A63: jz      loc_140266540
 * 0000000140266A69: mov     rcx, rsi; Object
 * 0000000140266A6C: call    ExpLeaveWorkerFactoryAwayMode
 * 0000000140266A71: jmp     loc_140266540
 * 0000000140266A76: mov     eax, 10h; jumptable 0000000140266616 case 10
 * 0000000140266A7B: jmp     loc_14026625F
 * 0000000140266A80: mov     r14, [rsp+168h+var_128]
 * 0000000140266A85: mov     rax, [r14+10h]
 * 0000000140266A89: mov     rsi, [rsp+168h+var_138]
 * 0000000140266A8E: xor     dil, dil
 * 0000000140266A91: cmp     [rax+21h], bl
 * 0000000140266A94: jnz     loc_140431BA9
 * 0000000140266A9A: mov     rax, qword ptr [rsp+168h+Src+8]
 * 0000000140266AA2: mov     [rsi+40h], rax
 * 0000000140266AA6: mov     rax, qword ptr [rsp+168h+Src]
 * 0000000140266AAE: mov     [rsi+38h], rax
 * 0000000140266AB2: jmp     loc_140266543
 * 0000000140266AB7: mov     r14, [rsp+168h+var_128]
 * 0000000140266ABC: mov     rax, [r14+10h]
 * 0000000140266AC0: cmp     [rax+21h], bl
 * 0000000140266AC3: jnz     short loc_140266B06
 * 0000000140266AC5: mov     rsi, [rsp+168h+var_138]
 * 0000000140266ACA: mov     eax, dword ptr [rsp+168h+Src]
 * 0000000140266AD1: mov     [rsi+13Ch], eax
 * 0000000140266AD7: jmp     loc_140266540
 * 0000000140266ADC: mov     r12d, 0C0000001h
 * 0000000140266AE2: jmp     loc_140266540
 * 0000000140266AE7: mov     r12d, 0C0000001h
 * 0000000140266AED: jmp     loc_140266540
 * 0000000140266AF2: mov     rcx, rsi; Object
 * 0000000140266AF5: call    ExpLeaveWorkerFactoryAwayMode
 * 0000000140266AFA: jmp     loc_1402669A5
 * 0000000140266AFF: mov     ecx, 25h ; '%'; jumptable 0000000140266646 default case
 * 0000000140266B04: int     29h; Win8: RtlFailFast(ecx)
 * 0000000140266B06: mov     r12d, 80h
 * 0000000140266B0C: jmp     short loc_140266AC5
 * 0000000140266B28: retf
 * 0000000140410200: push    rbp
 * 0000000140410202: sub     rsp, 30h
 * 0000000140410206: mov     rbp, rdx
 * 0000000140410209: call    ExSystemExceptionFilter
 * 000000014041020E: nop
 * 000000014041020F: add     rsp, 30h
 * 0000000140410213: pop     rbp
 * 0000000140410214: retn
 * 0000000140410216: push    rbp
 * 0000000140410218: sub     rsp, 30h
 * 000000014041021C: mov     rbp, rdx
 * 000000014041021F: call    ExSystemExceptionFilter
 * 0000000140410224: nop
 * 0000000140410225: add     rsp, 30h
 * 0000000140410229: pop     rbp
 * 000000014041022A: retn
 * 0000000140431918: cmp     ebx, 0A0h; jumptable 0000000140266616 case 15
 * 000000014043191E: jnb     short loc_14043192C
 * 0000000140431920: mov     eax, ebx
 * 0000000140431922: and     eax, 7
 * 0000000140431925: add     eax, ebx
 * 0000000140431927: jmp     loc_14026625F
 * 000000014043192C: mov     eax, 0A0h
 * 0000000140431931: jmp     loc_14026625F
 * 0000000140431936: mov     eax, 0C0000002h; jumptable 0000000140266616 case 6
 * 000000014043193B: jmp     loc_1402665D3
 * 0000000140431940: mov     eax, 0C0000003h; jumptable 0000000140266616 default case, cases 7,9
 * 0000000140431945: jmp     loc_1402665D3
 * 000000014043194A: mov     eax, 0C0000004h
 * 000000014043194F: jmp     loc_1402665D3
 * 0000000140431954: mov     rcx, [rsp+168h+var_138]
 * 0000000140431959: mov     rax, [rcx+10h]
 * 000000014043195D: mov     rdx, [rax+8]
 * 0000000140431961: mov     eax, dword ptr [rsp+168h+Src]
 * 0000000140431968: test    eax, eax
 * 000000014043196A: jnz     short loc_140431977
 * 000000014043196C: mov     eax, cs:KeNumberProcessors_0
 * 0000000140431972: mov     rcx, [rsp+168h+var_138]; Object
 * 0000000140431977: mov     [rdx+2Ch], eax
 * 000000014043197A: mov     edx, 746C6644h; Tag
 * 000000014043197F: call    ObfDereferenceObjectWithTag
 * 0000000140431984: xor     eax, eax
 * 0000000140431986: jmp     loc_1402665D3
 * 000000014043198B: test    r13b, al
 * 000000014043198E: jz      loc_14026649D
 * 0000000140431994: cmp     r10b, 0Fh
 * 0000000140431998: ja      loc_14026649D
 * 000000014043199E: mov     rax, gs:20h
 * 00000001404319A7: mov     r9, [rax+84B8h]
 * 00000001404319AE: mov     r8d, [r9+14h]
 * 00000001404319B2: movzx   ecx, r10b
 * 00000001404319B6: inc     ecx
 * 00000001404319B8: mov     rdx, 0FFFFFFFFFFFFFFFFh
 * 00000001404319BF: shl     rdx, cl
 * 00000001404319C2: and     edx, 4
 * 00000001404319C5: or      r8d, edx
 * 00000001404319C8: mov     [r9+14h], r8d
 * 00000001404319CC: jmp     loc_14026649D
 * 00000001404319D1: cmp     [rcx+20h], r13b
 * 00000001404319D5: ja      loc_1402664C2
 * 00000001404319DB: mov     eax, [rdx+18h]
 * 00000001404319DE: add     eax, 1
 * 00000001404319E1: mov     [rdx+18h], eax
 * 00000001404319E4: jnz     loc_1402664C2
 * 00000001404319EA: call    KiRemoveSystemWorkPriorityKick
 * 00000001404319EF: mov     r8, 0FFFFFFFFFFFFFFFFh
 * 00000001404319F6: jmp     loc_1402664C2
 * 00000001404319FB: mov     rdx, r14
 * 00000001404319FE: lea     rcx, [rsp+168h+LockHandle]
 * 0000000140431A03: call    KiAcquireQueuedSpinLockInstrumented
 * 0000000140431A08: nop
 * 0000000140431A09: jmp     loc_140266899
 * 0000000140431A79: mov     rdx, 0FFFFFFFFFF676980h
 * 0000000140431A80: mov     qword ptr [rsp+168h+Src], rdx
 * 0000000140431A88: jmp     loc_1402667E6
 * 0000000140431A8D: mov     rdx, rax
 * 0000000140431A90: mov     qword ptr [rsp+168h+Src], rax
 * 0000000140431A98: jmp     loc_1402667E6
 * 0000000140431A9D: mov     r12d, 0C000000Dh
 * 0000000140431AA3: mov     rsi, [rsp+168h+var_138]
 * 0000000140431AA8: jmp     loc_140266540
 * 0000000140431AAD: mov     eax, 0FFFFFFFFh
 * 0000000140431AB2: jmp     loc_140266671
 * 0000000140431AB7: lea     eax, [rcx+rdx]
 * 0000000140431ABA: mov     [rsi+134h], eax
 * 0000000140431AC0: jmp     loc_140266677
 * 0000000140431AC5: test    ecx, ecx
 * 0000000140431AC7: jz      loc_140266540
 * 0000000140431ACD: jmp     loc_140266A51
 * 0000000140431AD2: mov     r12d, 80h
 * 0000000140431AD8: jmp     loc_140266540
 * 0000000140431ADD: mov     [rsi+11Ch], eax
 * 0000000140431AE3: jmp     loc_140266989
 * 0000000140431AE8: test    r13b, al
 * 0000000140431AEB: jz      loc_1402669F5
 * 0000000140431AF1: mov     rax, cr8
 * 0000000140431AF5: cmp     al, 0Fh
 * 0000000140431AF7: ja      loc_1402669F5
 * 0000000140431AFD: cmp     r12b, 0Fh
 * 0000000140431B01: ja      loc_1402669F5
 * 0000000140431B07: cmp     al, 2
 * 0000000140431B09: jb      loc_1402669F5
 * 0000000140431B0F: mov     r10, gs:20h
 * 0000000140431B18: mov     r9, [r10+84B8h]
 * 0000000140431B1F: mov     r8d, [r9+14h]
 * 0000000140431B23: movzx   ecx, [rsp+168h+LockHandle.OldIrql]
 * 0000000140431B28: inc     ecx
 * 0000000140431B2A: mov     rdx, 0FFFFFFFFFFFFFFFFh
 * 0000000140431B31: shl     rdx, cl
 * 0000000140431B34: movzx   eax, dx
 * 0000000140431B37: not     eax
 * 0000000140431B39: and     r8d, eax
 * 0000000140431B3C: mov     [r9+14h], r8d
 * 0000000140431B40: jnz     short loc_140431B4A
 * 0000000140431B42: mov     rcx, r10
 * 0000000140431B45: call    KiRemoveSystemWorkPriorityKick
 * 0000000140431B4A: mov     rsi, [rsp+168h+var_138]
 * 0000000140431B4F: jmp     loc_1402669F5
 * 0000000140431B54: mov     rax, [rsp+168h+var_128]
 * 0000000140431B59: dec     dword ptr [rax]
 * 0000000140431B5B: jmp     loc_140266540
 * 0000000140431B60: mov     r12d, 80h
 * 0000000140431B66: jmp     loc_140266540
 * 0000000140431B6B: cmp     [rax+18h], ebx
 * 0000000140431B6E: jz      loc_140266787
 * 0000000140431B74: movzx   r15d, r13b
 * 0000000140431B78: jmp     loc_140266796
 * 0000000140431B7D: mov     [rsi+118h], edx
 * 0000000140431B83: jmp     loc_140266543
 * 0000000140431B88: mov     r12d, 80h
 * 0000000140431B8E: jmp     loc_140266540
 * 0000000140431B93: mov     [rsi+12Ch], ecx
 * 0000000140431B99: jmp     loc_140266540
 * 0000000140431B9E: mov     [rsi+12Ch], ecx
 * 0000000140431BA4: jmp     loc_140266543
 * 0000000140431BA9: mov     r12d, 80h
 * 0000000140431BAF: jmp     loc_140266543
 * 0000000140431BB4: mov     r14, [rsp+168h+var_128]
 * 0000000140431BB9: mov     rax, [r14+10h]
 * 0000000140431BBD: mov     rsi, [rsp+168h+var_138]
 * 0000000140431BC2: cmp     [rax+21h], bl
 * 0000000140431BC5: jz      short loc_140431BD2
 * 0000000140431BC7: mov     r12d, 80h
 * 0000000140431BCD: jmp     loc_140266540
 * 0000000140431BD2: test    dword ptr [rsi+138h], 8000h
 * 0000000140431BDC: jz      short loc_140431BE9
 * 0000000140431BDE: mov     r12d, 0C000A003h
 * 0000000140431BE4: jmp     loc_140266540
 * 0000000140431BE9: mov     r14d, dword ptr [rsp+168h+Size]
 * 0000000140431BEE: mov     edx, r14d
 * 0000000140431BF1: shr     edx, 3
 * 0000000140431BF4: lea     rcx, [rsp+168h+Src]
 * 0000000140431BFC: call    KiValidateCpuSetMasks
 * 0000000140431C01: mov     r12d, eax
 * 0000000140431C04: test    eax, eax
 * 0000000140431C06: js      loc_140266540
 * 0000000140431C0C: xor     edx, edx; Val
 * 0000000140431C0E: mov     r8d, 0A0h; Size
 * 0000000140431C14: lea     rcx, [rsi+78h]; void *
 * 0000000140431C18: call    memset
 * 0000000140431C1D: mov     r8d, r14d; Size
 * 0000000140431C20: lea     rdx, [rsp+168h+Src]; Src
 * 0000000140431C28: lea     rcx, [rsi+78h]; void *
 * 0000000140431C2C: call    memmove
 * 0000000140431C31: or      dword ptr [rsi+138h], 4000h
 * 0000000140431C3B: jmp     loc_140266540
 * 0000000140431C40: mov     ecx, ebx
 * 0000000140431C42: jmp     loc_140266873
 * 0000000140431C47: cmp     ecx, 1
 * 0000000140431C4A: jz      short loc_140431C57
 * 0000000140431C4C: mov     r12d, 0C000000Dh
 * 0000000140431C52: jmp     loc_140266540
 * 0000000140431C57: cmp     [rsi+120h], ebx
 * 0000000140431C5D: jnz     short loc_140431C6A
 * 0000000140431C5F: mov     r12d, 0C0000001h
 * 0000000140431C65: jmp     loc_140266540
 * 0000000140431C6A: mov     rcx, rsi
 * 0000000140431C6D: call    ExpRemoveCurrentThreadFromThreadHistory
 * 0000000140431C72: dec     dword ptr [rsi+120h]
 * 0000000140431C78: dec     dword ptr [rsi+124h]
 * 0000000140431C7E: movzx   r15d, r15b
 * 0000000140431C82: mov     ecx, 1
 * 0000000140431C87: cmp     [rsi+120h], ebx
 * 0000000140431C8D: cmovz   r15d, ecx
 * 0000000140431C91: jmp     loc_140266540
 * 0000000140431C96: mov     r12d, 80h
 * 0000000140431C9C: jmp     loc_14026654C
 * 0000000140431CA1: test    dil, dil
 * 0000000140431CA4: jnz     loc_14026654C
 * 0000000140431CAA: mov     r12d, 0C0000129h
 * 0000000140431CB0: jmp     loc_14026654C
 * 0000000140431CB5: test    al, 1
 * 0000000140431CB7: jz      loc_140266736
 * 0000000140431CBD: mov     rax, cr8
 * 0000000140431CC1: cmp     al, 0Fh
 * 0000000140431CC3: ja      loc_140266736
 * 0000000140431CC9: cmp     r15b, 0Fh
 * 0000000140431CCD: ja      loc_140266736
 * 0000000140431CD3: cmp     al, 2
 * 0000000140431CD5: jb      loc_140266736
 * 0000000140431CDB: mov     r10, gs:20h
 * 0000000140431CE4: mov     r9, [r10+84B8h]
 * 0000000140431CEB: mov     r8d, [r9+14h]
 * 0000000140431CEF: movzx   ecx, [rsp+168h+LockHandle.OldIrql]
 * 0000000140431CF4: inc     ecx
 * 0000000140431CF6: mov     rdx, 0FFFFFFFFFFFFFFFFh
 * 0000000140431CFD: shl     rdx, cl
 * 0000000140431D00: movzx   eax, dx
 * 0000000140431D03: not     eax
 * 0000000140431D05: and     r8d, eax
 * 0000000140431D08: mov     [r9+14h], r8d
 * 0000000140431D0C: jnz     short loc_140431D16
 * 0000000140431D0E: mov     rcx, r10
 * 0000000140431D11: call    KiRemoveSystemWorkPriorityKick
 * 0000000140431D16: mov     rsi, [rsp+168h+var_138]
 * 0000000140431D1B: jmp     loc_140266736
 * 0000000140431D20: mov     r13b, 1
 * 0000000140431D23: lea     rdx, [rsp+168h+LockHandle]; LockHandle
 * 0000000140431D28: mov     rcx, [rsp+168h+var_128]
 * 0000000140431D2D: mov     rcx, [rcx]; SpinLock
 * 0000000140431D30: call    KeAcquireInStackQueuedSpinLock
 * 0000000140431D35: dec     dword ptr [r14]
 * 0000000140431D38: test    dil, dil
 * 0000000140431D3B: jz      loc_14026654C
 * 0000000140431D41: jmp     loc_1402667AD
 * 0000000140431D46: mov     rdx, [rsp+168h]
 * 0000000140431D4E: lea     rcx, [rsp+168h+LockHandle]
 * 0000000140431D53: call    KiReleaseQueuedSpinLockInstrumented
 * 0000000140431D58: nop
 * 0000000140431D59: jmp     loc_14026658E
 * 0000000140431D5E: cmp     byte ptr [rcx+20h], 1
 * 0000000140431D62: ja      loc_1402665A7
 * 0000000140431D68: mov     eax, [rdx+18h]
 * 0000000140431D6B: sub     eax, 1
 * 0000000140431D6E: mov     [rdx+18h], eax
 * 0000000140431D71: jnz     loc_1402665A7
 * 0000000140431D77: call    KiRemoveSystemWorkPriorityKick
 * 0000000140431D7C: nop
 * 0000000140431D7D: jmp     loc_1402665A7
 * 0000000140431D82: test    al, 1
 * 0000000140431D84: jz      loc_1402665BA
 * 0000000140431D8A: mov     rax, cr8
 * 0000000140431D8E: cmp     al, 0Fh
 * 0000000140431D90: ja      loc_1402665BA
 * 0000000140431D96: cmp     bl, 0Fh
 * 0000000140431D99: ja      loc_1402665BA
 * 0000000140431D9F: cmp     al, 2
 * 0000000140431DA1: jb      loc_1402665BA
 * 0000000140431DA7: mov     r9, gs:20h
 * 0000000140431DB0: mov     r8, [r9+84B8h]
 * 0000000140431DB7: mov     edx, [r8+14h]
 * 0000000140431DBB: movzx   ecx, [rsp+168h+LockHandle.OldIrql]
 * 0000000140431DC0: inc     ecx
 * 0000000140431DC2: mov     rax, 0FFFFFFFFFFFFFFFFh
 * 0000000140431DC9: shl     rax, cl
 * 0000000140431DCC: movzx   eax, ax
 * 0000000140431DCF: not     eax
 * 0000000140431DD1: and     edx, eax
 * 0000000140431DD3: mov     [r8+14h], edx
 * 0000000140431DD7: jnz     loc_1402665BA
 * 0000000140431DDD: mov     rcx, r9
 * 0000000140431DE0: call    KiRemoveSystemWorkPriorityKick
 * 0000000140431DE5: nop
 * 0000000140431DE6: jmp     loc_1402665BA
 */
