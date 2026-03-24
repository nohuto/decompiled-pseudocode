/*
 * XREFs of _EditionPostUpdateKeyStateEvent@8 @ 0xF20D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _EditionPostUpdateKeyStateEvent@8 @ 0xF20D0
 * Reason: Hex-Rays returned no pseudocode for 0xF20D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000F20D0: mov     edi, edi
 * 00000000000F20D2: push    ebp; int
 * 00000000000F20D3: mov     ebp, esp
 * 00000000000F20D5: mov     edx, [ebp+arg_0]
 * 00000000000F20D8: xor     eax, eax
 * 00000000000F20DA: push    eax; unsigned int
 * 00000000000F20DB: push    eax; unsigned int
 * 00000000000F20DC: push    [ebp+arg_4]; struct tagWND *
 * 00000000000F20DF: mov     ecx, [edx+34h]
 * 00000000000F20E2: push    eax; unsigned int
 * 00000000000F20E3: push    eax; struct tagQ *
 * 00000000000F20E4: push    4; struct tagTHREADINFO *
 * 00000000000F20E6: call    ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z; PostEventMessageEx(tagTHREADINFO *,tagQ *,ulong,tagWND *,uint,uint,long,tagINPUT_MESSAGE_SOURCE *)
 * 00000000000F20EB: pop     ebp
 * 00000000000F20EC: retn    8
 */
