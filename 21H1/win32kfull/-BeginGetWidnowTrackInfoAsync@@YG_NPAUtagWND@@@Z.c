/*
 * XREFs of ?BeginGetWidnowTrackInfoAsync@@YG_NPAUtagWND@@@Z @ 0x7D7DC
 * Callers:
 *     ?_GetWindowTrackInfoAsync@@YGJPAUtagWND@@@Z @ 0x7D75E (-_GetWindowTrackInfoAsync@@YGJPAUtagWND@@@Z.c)
 * Callees:
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?BeginGetWidnowTrackInfoAsync@@YG_NPAUtagWND@@@Z @ 0x7D7DC
 * Reason: Hex-Rays returned no pseudocode for 0x7D7DC
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000007D7DC: mov     eax, [ecx+8]
 * 000000000007D7DF: push    0; unsigned int
 * 000000000007D7E1: push    0; unsigned int
 * 000000000007D7E3: push    1; struct tagWND *
 * 000000000007D7E5: mov     edx, [eax+0ECh]
 * 000000000007D7EB: push    342h; unsigned int
 * 000000000007D7F0: push    ecx; struct tagQ *
 * 000000000007D7F1: push    9; struct tagTHREADINFO *
 * 000000000007D7F3: mov     ecx, eax
 * 000000000007D7F5: call    ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z; PostEventMessageEx(tagTHREADINFO *,tagQ *,ulong,tagWND *,uint,uint,long,tagINPUT_MESSAGE_SOURCE *)
 * 000000000007D7FA: test    eax, eax
 * 000000000007D7FC: setnz   al
 * 000000000007D7FF: retn
 */
