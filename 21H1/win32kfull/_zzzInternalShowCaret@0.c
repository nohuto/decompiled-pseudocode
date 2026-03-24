/*
 * XREFs of _zzzInternalShowCaret@0 @ 0xBA734
 * Callers:
 *     _xxxEndPaint@8 @ 0x12580 (_xxxEndPaint@8.c)
 *     _xxxScrollWindowEx@32 @ 0x2B61E (_xxxScrollWindowEx@32.c)
 *     _NtUserShowCaret@4 @ 0xBA6EC (_NtUserShowCaret@4.c)
 *     _zzzShowCaret@4 @ 0x19FB39 (_zzzShowCaret@4.c)
 * Callees:
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     ?CreateCaretTimer@@YGXPAUtagWND@@PAUtagQ@@@Z @ 0xBA7AE (-CreateCaretTimer@@YGXPAUtagWND@@PAUtagQ@@@Z.c)
 *     ?UT_InvertCaret@@YGXXZ @ 0xBA85A (-UT_InvertCaret@@YGXXZ.c)
 */

/*
 * Hex-Rays decompilation failed for _zzzInternalShowCaret@0 @ 0xBA734
 * Reason: Hex-Rays returned no pseudocode for 0xBA734
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000BA734: mov     eax, ds:__imp__gptiCurrent
 * 00000000000BA739: push    esi; struct tagWND *
 * 00000000000BA73A: mov     eax, [eax]
 * 00000000000BA73C: mov     esi, [eax+0ECh]
 * 00000000000BA742: mov     eax, [esi+0E0h]
 * 00000000000BA748: test    eax, eax
 * 00000000000BA74A: jz      loc_12A5DE
 * 00000000000BA750: sub     eax, 1
 * 00000000000BA753: mov     [esi+0E0h], eax
 * 00000000000BA759: jnz     short loc_BA7AB
 * 00000000000BA75B: mov     eax, [esi+0DCh]
 * 00000000000BA761: mov     ecx, eax
 * 00000000000BA763: shr     ecx, 1
 * 00000000000BA765: xor     ecx, eax
 * 00000000000BA767: and     ecx, 1
 * 00000000000BA76A: xor     ecx, eax
 * 00000000000BA76C: mov     [esi+0DCh], ecx
 * 00000000000BA772: test    cl, 1
 * 00000000000BA775: jz      short loc_BA77C
 * 00000000000BA777: call    ?UT_InvertCaret@@YGXXZ; UT_InvertCaret(void)
 * 00000000000BA77C: mov     ecx, [esi+0D8h]
 * 00000000000BA782: mov     edx, esi
 * 00000000000BA784: call    ?CreateCaretTimer@@YGXPAUtagWND@@PAUtagQ@@@Z; CreateCaretTimer(tagWND *,tagQ *)
 * 00000000000BA789: mov     eax, ds:__imp__gdwDeferWinEvent
 * 00000000000BA78E: xor     ecx, ecx
 * 00000000000BA790: cmp     ecx, [eax]
 * 00000000000BA792: sbb     eax, eax
 * 00000000000BA794: and     eax, 2
 * 00000000000BA797: push    eax
 * 00000000000BA798: push    ecx
 * 00000000000BA799: push    0FFFFFFF8h
 * 00000000000BA79B: push    dword ptr [esi+0D8h]
 * 00000000000BA7A1: push    8002h
 * 00000000000BA7A6: call    _xxxWindowEvent@20; xxxWindowEvent(x,x,x,x,x)
 * 00000000000BA7AB: pop     esi
 * 00000000000BA7AC: retn
 * 000000000012A5DE: mov     ecx, [esi+0DCh]
 * 000000000012A5E4: test    cl, 1
 * 000000000012A5E7: jnz     loc_BA7AB
 * 000000000012A5ED: mov     eax, ecx
 * 000000000012A5EF: shr     eax, 1
 * 000000000012A5F1: xor     eax, ecx
 * 000000000012A5F3: and     eax, 1
 * 000000000012A5F6: xor     eax, ecx
 * 000000000012A5F8: mov     [esi+0DCh], eax
 * 000000000012A5FE: test    al, 1
 * 000000000012A600: jz      loc_BA7AB
 * 000000000012A606: pop     esi
 * 000000000012A607: jmp     ?UT_InvertCaret@@YGXXZ; UT_InvertCaret(void)
 */
