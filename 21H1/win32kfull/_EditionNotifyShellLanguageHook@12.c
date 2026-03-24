/*
 * XREFs of _EditionNotifyShellLanguageHook@12 @ 0xAE9B6
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _EditionNotifyShellLanguageHook@12 @ 0xAE9B6
 * Reason: Hex-Rays returned no pseudocode for 0xAE9B6
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000AE9B6: mov     edi, edi
 * 00000000000AE9B8: push    ebp; int
 * 00000000000AE9B9: mov     ebp, esp
 * 00000000000AE9BB: cmp     [ebp+arg_8], 0
 * 00000000000AE9BF: mov     ecx, [ebp+arg_4]
 * 00000000000AE9C2: mov     edx, [ebp+arg_0]
 * 00000000000AE9C5: jnz     loc_1286B0
 * 00000000000AE9CB: mov     eax, [edx+0FCh]
 * 00000000000AE9D1: mov     eax, [eax]
 * 00000000000AE9D3: mov     eax, [eax+8]
 * 00000000000AE9D6: or      eax, [edx+174h]
 * 00000000000AE9DC: test    eax, 800h
 * 00000000000AE9E1: jnz     loc_1286CE
 * 00000000000AE9E7: pop     ebp
 * 00000000000AE9E8: retn    0Ch
 * 00000000001286B0: cmp     _gLCIDSentToShell, ecx
 * 00000000001286B6: jz      loc_AE9E7
 * 00000000001286BC: mov     eax, ds:__imp__gptiRit
 * 00000000001286C1: cmp     edx, [eax]
 * 00000000001286C3: jz      loc_AE9E7
 * 00000000001286C9: jmp     loc_AE9CB
 * 00000000001286CE: push    0Ah; unsigned int
 * 00000000001286D0: push    ecx; int
 * 00000000001286D1: push    8
 * 00000000001286D3: mov     _gLCIDSentToShell, ecx
 * 00000000001286D9: xor     edx, edx
 * 00000000001286DB: pop     ecx
 * 00000000001286DC: call    ?xxxCallHook@@YGHHIJH@Z; xxxCallHook(int,uint,long,int)
 * 00000000001286E1: jmp     loc_AE9E7
 */
