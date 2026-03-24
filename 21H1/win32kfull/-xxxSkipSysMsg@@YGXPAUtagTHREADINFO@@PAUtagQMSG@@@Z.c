/*
 * XREFs of ?xxxSkipSysMsg@@YGXPAUtagTHREADINFO@@PAUtagQMSG@@@Z @ 0x14E09D
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     ?xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z @ 0x6F108 (-xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?xxxSkipSysMsg@@YGXPAUtagTHREADINFO@@PAUtagQMSG@@@Z @ 0x14E09D
 * Reason: Hex-Rays returned no pseudocode for 0x14E09D
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000014E09D: mov     edi, edi
 * 000000000014E09F: push    ecx; struct tagQMSG *
 * 000000000014E0A0: push    1; struct tagTHREADINFO *
 * 000000000014E0A2: call    ?xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z; xxxSkipSysMsgEx(tagTHREADINFO *,tagQMSG *,int)
 * 000000000014E0A7: pop     ecx
 * 000000000014E0A8: retn
 */
