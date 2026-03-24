/*
 * XREFs of _xxxCheckImeShowStatusInThread@4 @ 0x92906
 * Callers:
 *     _NtUserCallHwndLock@8 @ 0x7D35A (_NtUserCallHwndLock@8.c)
 * Callees:
 *     ?xxxCheckImeShowStatus@@YGHPAUtagWND@@PAUtagTHREADINFO@@@Z @ 0x92932 (-xxxCheckImeShowStatus@@YGHPAUtagWND@@PAUtagTHREADINFO@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _xxxCheckImeShowStatusInThread@4 @ 0x92906
 * Reason: Hex-Rays returned no pseudocode for 0x92906
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000000092906: mov     edi, edi
 * 0000000000092908: push    ebp; struct tagWND *
 * 0000000000092909: mov     ebp, esp
 * 000000000009290B: mov     eax, ds:__imp__gpsi
 * 0000000000092910: mov     eax, [eax]
 * 0000000000092912: test    byte ptr [eax], 4
 * 0000000000092915: jz      short loc_9292B
 * 0000000000092917: mov     ecx, [ebp+arg_0]
 * 000000000009291A: mov     eax, [ecx+14h]
 * 000000000009291D: cmp     byte ptr [eax+0Ch], 0
 * 0000000000092921: jl      short loc_9292B
 * 0000000000092923: mov     edx, [ecx+8]
 * 0000000000092926: call    ?xxxCheckImeShowStatus@@YGHPAUtagWND@@PAUtagTHREADINFO@@@Z; xxxCheckImeShowStatus(tagWND *,tagTHREADINFO *)
 * 000000000009292B: xor     eax, eax
 * 000000000009292D: inc     eax
 * 000000000009292E: pop     ebp
 * 000000000009292F: retn    4
 */
