/*
 * XREFs of _EditionPostAccessibility@4 @ 0x178273
 * Callers:
 *     <none>
 * Callees:
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _EditionPostAccessibility@4 @ 0x178273
 * Reason: Hex-Rays returned no pseudocode for 0x178273
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000000178273: mov     edi, edi
 * 0000000000178275: push    ebp; int
 * 0000000000178276: mov     ebp, esp
 * 0000000000178278: mov     eax, ds:__imp__grpdeskRitInput
 * 000000000017827D: mov     eax, [eax]
 * 000000000017827F: mov     eax, [eax+14h]
 * 0000000000178282: mov     eax, [eax+1Ch]
 * 0000000000178285: mov     ecx, [eax+8]
 * 0000000000178288: xor     eax, eax
 * 000000000017828A: push    eax; unsigned int
 * 000000000017828B: push    [ebp+arg_0]; unsigned int
 * 000000000017828E: mov     edx, [ecx+0ECh]
 * 0000000000178294: push    0Bh; struct tagWND *
 * 0000000000178296: push    eax; unsigned int
 * 0000000000178297: push    eax; struct tagQ *
 * 0000000000178298: push    0Dh; struct tagTHREADINFO *
 * 000000000017829A: call    ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z; PostEventMessageEx(tagTHREADINFO *,tagQ *,ulong,tagWND *,uint,uint,long,tagINPUT_MESSAGE_SOURCE *)
 * 000000000017829F: pop     ebp
 * 00000000001782A0: retn    4
 */
