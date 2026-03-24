/*
 * XREFs of _zzzInternalHideCaret@0 @ 0x7DB46
 * Callers:
 *     _xxxScrollWindowEx@32 @ 0x2B61E (_xxxScrollWindowEx@32.c)
 *     _xxxBeginPaint@8 @ 0x7140C (_xxxBeginPaint@8.c)
 *     _zzzInternalDestroyCaret@0 @ 0x7DAB2 (_zzzInternalDestroyCaret@0.c)
 *     _NtUserHideCaret@4 @ 0xBA8F6 (_NtUserHideCaret@4.c)
 *     _zzzHideCaret@4 @ 0x19FB1F (_zzzHideCaret@4.c)
 * Callees:
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     ?RemoveCaretTimer@@YGXPAUtagWND@@PAUtagQ@@@Z @ 0x7DBAC (-RemoveCaretTimer@@YGXPAUtagWND@@PAUtagQ@@@Z.c)
 *     ?UT_InvertCaret@@YGXXZ @ 0xBA85A (-UT_InvertCaret@@YGXXZ.c)
 */

/*
 * Hex-Rays decompilation failed for _zzzInternalHideCaret@0 @ 0x7DB46
 * Reason: Hex-Rays returned no pseudocode for 0x7DB46
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000007DB46: mov     eax, ds:__imp__gptiCurrent
 * 000000000007DB4B: push    esi; struct tagWND *
 * 000000000007DB4C: mov     eax, [eax]
 * 000000000007DB4E: mov     esi, [eax+0ECh]
 * 000000000007DB54: mov     eax, [esi+0DCh]
 * 000000000007DB5A: test    al, 1
 * 000000000007DB5C: jnz     loc_119018
 * 000000000007DB62: and     eax, 0FFFFFFFEh
 * 000000000007DB65: inc     dword ptr [esi+0E0h]
 * 000000000007DB6B: cmp     dword ptr [esi+0E0h], 1
 * 000000000007DB72: mov     [esi+0DCh], eax
 * 000000000007DB78: jnz     short loc_7DBA9
 * 000000000007DB7A: mov     ecx, [esi+0D8h]
 * 000000000007DB80: mov     edx, esi
 * 000000000007DB82: call    ?RemoveCaretTimer@@YGXPAUtagWND@@PAUtagQ@@@Z; RemoveCaretTimer(tagWND *,tagQ *)
 * 000000000007DB87: mov     eax, ds:__imp__gdwDeferWinEvent
 * 000000000007DB8C: xor     ecx, ecx
 * 000000000007DB8E: cmp     ecx, [eax]
 * 000000000007DB90: sbb     eax, eax
 * 000000000007DB92: and     eax, 2
 * 000000000007DB95: push    eax
 * 000000000007DB96: push    ecx
 * 000000000007DB97: push    0FFFFFFF8h
 * 000000000007DB99: push    dword ptr [esi+0D8h]
 * 000000000007DB9F: push    8003h
 * 000000000007DBA4: call    _xxxWindowEvent@20; xxxWindowEvent(x,x,x,x,x)
 * 000000000007DBA9: pop     esi
 * 000000000007DBAA: retn
 * 0000000000119018: call    ?UT_InvertCaret@@YGXXZ; UT_InvertCaret(void)
 * 000000000011901D: mov     eax, [esi+0DCh]
 * 0000000000119023: jmp     loc_7DB62
 */
