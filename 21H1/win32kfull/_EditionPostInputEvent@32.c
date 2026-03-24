/*
 * XREFs of _EditionPostInputEvent@32 @ 0xF15F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _EditionPostInputEvent@32 @ 0xF15F0
 * Reason: Hex-Rays returned no pseudocode for 0xF15F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000F15F0: mov     edi, edi
 * 00000000000F15F2: push    ebp; int
 * 00000000000F15F3: mov     ebp, esp
 * 00000000000F15F5: cmp     [ebp+arg_0], 1Eh
 * 00000000000F15F9: jz      short loc_F1627
 * 00000000000F15FB: mov     ecx, [ebp+arg_4]
 * 00000000000F15FE: call    ds:__imp_@ValidateHwnd@4; ValidateHwnd(x)
 * 00000000000F1604: test    eax, eax
 * 00000000000F1606: jz      short loc_F1627
 * 00000000000F1608: mov     ecx, [eax+8]
 * 00000000000F160B: push    0; unsigned int
 * 00000000000F160D: push    [ebp+arg_18]; unsigned int
 * 00000000000F1610: push    [ebp+arg_14]; struct tagWND *
 * 00000000000F1613: mov     edx, [ecx+0ECh]
 * 00000000000F1619: push    [ebp+arg_10]; unsigned int
 * 00000000000F161C: push    eax; struct tagQ *
 * 00000000000F161D: push    [ebp+arg_0]; struct tagTHREADINFO *
 * 00000000000F1620: call    ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z; PostEventMessageEx(tagTHREADINFO *,tagQ *,ulong,tagWND *,uint,uint,long,tagINPUT_MESSAGE_SOURCE *)
 * 00000000000F1625: jmp     short loc_F1629
 * 00000000000F1627: xor     eax, eax
 * 00000000000F1629: pop     ebp
 * 00000000000F162A: retn    20h ; ' '
 */
