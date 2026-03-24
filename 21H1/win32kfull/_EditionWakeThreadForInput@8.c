/*
 * XREFs of _EditionWakeThreadForInput@8 @ 0xA3CFA
 * Callers:
 *     <none>
 * Callees:
 *     ?WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z @ 0xF1100 (-WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _EditionWakeThreadForInput@8 @ 0xA3CFA
 * Reason: Hex-Rays returned no pseudocode for 0xA3CFA
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000A3CFA: mov     edi, edi
 * 00000000000A3CFC: push    ebp; unsigned int
 * 00000000000A3CFD: mov     ebp, esp
 * 00000000000A3CFF: mov     eax, [ebp+arg_0]
 * 00000000000A3D02: xor     edx, edx
 * 00000000000A3D04: push    0; struct tagTHREADINFO *
 * 00000000000A3D06: push    [ebp+arg_4]; struct tagQ *
 * 00000000000A3D09: mov     eax, [eax+50h]
 * 00000000000A3D0C: mov     ecx, [eax+8]
 * 00000000000A3D0F: mov     ecx, [ecx+0ECh]
 * 00000000000A3D15: call    ?WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z; WakeSomeone(tagQ *,tagTHREADINFO *,uint,tagQMSG *)
 * 00000000000A3D1A: pop     ebp
 * 00000000000A3D1B: retn    8
 */
