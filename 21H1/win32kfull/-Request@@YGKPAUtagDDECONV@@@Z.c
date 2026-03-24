/*
 * XREFs of ?Request@@YGKPAUtagDDECONV@@@Z @ 0x17EBEA
 * Callers:
 *     ?xxxUnexpectedClientPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FDC3 (-xxxUnexpectedClientPost@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     ?AnticipatePost@@YGPAXPAUtagDDECONV@@P6GKPAKPAJ0@ZPAX4PAUtagINTDDEINFO@@K@Z @ 0x17E911 (-AnticipatePost@@YGPAXPAUtagDDECONV@@P6GKPAKPAJ0@ZPAX4PAUtagINTDDEINFO@@K@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?Request@@YGKPAUtagDDECONV@@@Z @ 0x17EBEA
 * Reason: Hex-Rays returned no pseudocode for 0x17EBEA
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000017EBEA: mov     edi, edi
 * 000000000017EBEC: push    esi; struct tagINTDDEINFO *
 * 000000000017EBED: mov     esi, ecx
 * 000000000017EBEF: cmp     _WPP_RECORDER_INITIALIZED, offset _WPP_RECORDER_INITIALIZED
 * 000000000017EBF9: jz      short loc_17EC0B
 * 000000000017EBFB: push    offset _WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids
 * 000000000017EC00: push    27h ; '''
 * 000000000017EC02: push    0Eh
 * 000000000017EC04: mov     dl, 4
 * 000000000017EC06: call    _WPP_RECORDER_SF_@20; WPP_RECORDER_SF_(x,x,x,x,x)
 * 000000000017EC0B: mov     ecx, [esi+10h]
 * 000000000017EC0E: xor     eax, eax
 * 000000000017EC10: push    eax; void *
 * 000000000017EC11: push    eax; void *
 * 000000000017EC12: push    eax; unsigned int (__stdcall *)(unsigned int *, int *, struct tagDDECONV *)
 * 000000000017EC13: push    eax; struct tagDDECONV *
 * 000000000017EC14: mov     edx, offset ?xxxRequestAck@@YGKPAKPAJPAUtagDDECONV@@@Z; xxxRequestAck(ulong *,long *,tagDDECONV *)
 * 000000000017EC19: call    ?AnticipatePost@@YGPAXPAUtagDDECONV@@P6GKPAKPAJ0@ZPAX4PAUtagINTDDEINFO@@K@Z; AnticipatePost(tagDDECONV *,ulong (*)(ulong *,long *,tagDDECONV *),void *,void *,tagINTDDEINFO *,ulong)
 * 000000000017EC1E: neg     eax
 * 000000000017EC20: pop     esi
 * 000000000017EC21: sbb     eax, eax
 * 000000000017EC23: and     eax, 2
 * 000000000017EC26: retn
 */
