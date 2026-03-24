/*
 * XREFs of _EditionWakeSomeone@16 @ 0xF17C0
 * Callers:
 *     <none>
 * Callees:
 *     ?WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z @ 0xF1100 (-WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _EditionWakeSomeone@16 @ 0xF17C0
 * Reason: Hex-Rays returned no pseudocode for 0xF17C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000F17C0: mov     edi, edi
 * 00000000000F17C2: push    ebp; unsigned int
 * 00000000000F17C3: mov     ebp, esp
 * 00000000000F17C5: push    [ebp+arg_C]; struct tagTHREADINFO *
 * 00000000000F17C8: mov     edx, [ebp+arg_4]
 * 00000000000F17CB: push    [ebp+arg_8]; struct tagQ *
 * 00000000000F17CE: mov     ecx, [ebp+arg_0]
 * 00000000000F17D1: call    ?WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z; WakeSomeone(tagQ *,tagTHREADINFO *,uint,tagQMSG *)
 * 00000000000F17D6: pop     ebp
 * 00000000000F17D7: retn    10h
 */
