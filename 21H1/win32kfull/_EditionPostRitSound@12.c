/*
 * XREFs of _EditionPostRitSound@12 @ 0xF3B2A
 * Callers:
 *     <none>
 * Callees:
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _EditionPostRitSound@12 @ 0xF3B2A
 * Reason: Hex-Rays returned no pseudocode for 0xF3B2A
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000F3B2A: mov     edi, edi
 * 00000000000F3B2C: push    ebp; int
 * 00000000000F3B2D: mov     ebp, esp
 * 00000000000F3B2F: mov     eax, ds:__imp__grpdeskRitInput
 * 00000000000F3B34: push    0; unsigned int
 * 00000000000F3B36: push    [ebp+arg_8]; unsigned int
 * 00000000000F3B39: mov     eax, [eax]
 * 00000000000F3B3B: push    [ebp+arg_4]; struct tagWND *
 * 00000000000F3B3E: push    [ebp+arg_0]; unsigned int
 * 00000000000F3B41: mov     eax, [eax+14h]
 * 00000000000F3B44: push    0; struct tagQ *
 * 00000000000F3B46: push    0Eh; struct tagTHREADINFO *
 * 00000000000F3B48: mov     eax, [eax+1Ch]
 * 00000000000F3B4B: mov     ecx, [eax+8]
 * 00000000000F3B4E: mov     edx, [ecx+0ECh]
 * 00000000000F3B54: call    ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z; PostEventMessageEx(tagTHREADINFO *,tagQ *,ulong,tagWND *,uint,uint,long,tagINPUT_MESSAGE_SOURCE *)
 * 00000000000F3B59: pop     ebp
 * 00000000000F3B5A: retn    0Ch
 */
