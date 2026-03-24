/*
 * XREFs of ?JournalTimer@@YGXPAUtagWND@@IIJ@Z @ 0x15610C
 * Callers:
 *     <none>
 * Callees:
 *     ?WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z @ 0xF1100 (-WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?JournalTimer@@YGXPAUtagWND@@IIJ@Z @ 0x15610C
 * Reason: Hex-Rays returned no pseudocode for 0x15610C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000015610C: mov     edi, edi
 * 000000000015610E: push    ebp; unsigned int
 * 000000000015610F: mov     ebp, esp
 * 0000000000156111: mov     eax, [ebp+arg_C]
 * 0000000000156114: mov     ecx, [eax+3Ch]
 * 0000000000156117: test    ecx, ecx
 * 0000000000156119: jz      short loc_156130
 * 000000000015611B: mov     ecx, [ecx+0ECh]
 * 0000000000156121: xor     edx, edx
 * 0000000000156123: push    0; struct tagTHREADINFO *
 * 0000000000156125: push    dword ptr [ecx+128h]; struct tagQ *
 * 000000000015612B: call    ?WakeSomeone@@YGXPAUtagQ@@PAUtagTHREADINFO@@IPAUtagQMSG@@@Z; WakeSomeone(tagQ *,tagTHREADINFO *,uint,tagQMSG *)
 * 0000000000156130: pop     ebp
 * 0000000000156131: retn    10h
 */
