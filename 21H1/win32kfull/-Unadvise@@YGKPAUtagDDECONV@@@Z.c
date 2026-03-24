/*
 * XREFs of ?Unadvise@@YGKPAUtagDDECONV@@@Z @ 0x17EC69
 * Callers:
 *     ?xxxUnexpectedClientPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FDC3 (-xxxUnexpectedClientPost@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     ?AnticipatePost@@YGPAXPAUtagDDECONV@@P6GKPAKPAJ0@ZPAX4PAUtagINTDDEINFO@@K@Z @ 0x17E911 (-AnticipatePost@@YGPAXPAUtagDDECONV@@P6GKPAKPAJ0@ZPAX4PAUtagINTDDEINFO@@K@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?Unadvise@@YGKPAUtagDDECONV@@@Z @ 0x17EC69
 * Reason: Hex-Rays returned no pseudocode for 0x17EC69
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000017EC69: mov     edi, edi
 * 000000000017EC6B: push    esi; struct tagINTDDEINFO *
 * 000000000017EC6C: mov     esi, ecx
 * 000000000017EC6E: cmp     _WPP_RECORDER_INITIALIZED, offset _WPP_RECORDER_INITIALIZED
 * 000000000017EC78: jz      short loc_17EC8A
 * 000000000017EC7A: push    offset _WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids
 * 000000000017EC7F: push    25h ; '%'
 * 000000000017EC81: push    0Eh
 * 000000000017EC83: mov     dl, 4
 * 000000000017EC85: call    _WPP_RECORDER_SF_@20; WPP_RECORDER_SF_(x,x,x,x,x)
 * 000000000017EC8A: mov     ecx, [esi+10h]
 * 000000000017EC8D: xor     eax, eax
 * 000000000017EC8F: push    eax; void *
 * 000000000017EC90: push    eax; void *
 * 000000000017EC91: push    eax; unsigned int (__stdcall *)(unsigned int *, int *, struct tagDDECONV *)
 * 000000000017EC92: push    eax; struct tagDDECONV *
 * 000000000017EC93: mov     edx, offset ?xxxUnadviseAck@@YGKPAKPAJPAUtagDDECONV@@@Z; xxxUnadviseAck(ulong *,long *,tagDDECONV *)
 * 000000000017EC98: call    ?AnticipatePost@@YGPAXPAUtagDDECONV@@P6GKPAKPAJ0@ZPAX4PAUtagINTDDEINFO@@K@Z; AnticipatePost(tagDDECONV *,ulong (*)(ulong *,long *,tagDDECONV *),void *,void *,tagINTDDEINFO *,ulong)
 * 000000000017EC9D: neg     eax
 * 000000000017EC9F: pop     esi
 * 000000000017ECA0: sbb     eax, eax
 * 000000000017ECA2: and     eax, 2
 * 000000000017ECA5: retn
 */
