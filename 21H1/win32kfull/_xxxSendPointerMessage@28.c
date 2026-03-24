/*
 * XREFs of _xxxSendPointerMessage@28 @ 0x15AB89
 * Callers:
 *     _NtUserfnPOINTERINPUT@28 @ 0x16D2EA (_NtUserfnPOINTERINPUT@28.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxSendPointerMessageWorker@24 @ 0x15ABD3 (_xxxSendPointerMessageWorker@24.c)
 *     ?GetThreadPointerData@@YGKPAUtagTHREADINPUTPOINTERLIST@@GPAKPAHPAPAUHWND__@@@Z @ 0x15ADC8 (-GetThreadPointerData@@YGKPAUtagTHREADINPUTPOINTERLIST@@GPAKPAHPAPAUHWND__@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _xxxSendPointerMessage@28 @ 0x15AB89
 * Reason: Hex-Rays returned no pseudocode for 0x15AB89
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000015AB89: mov     edi, edi
 * 000000000015AB8B: push    ebp; int *
 * 000000000015AB8C: mov     ebp, esp
 * 000000000015AB8E: xor     eax, eax
 * 000000000015AB90: cmp     [ecx+270h], eax
 * 000000000015AB96: jz      short loc_15ABA4
 * 000000000015AB98: push    5
 * 000000000015AB9A: pop     ecx
 * 000000000015AB9B: call    _UserSetLastError@4; UserSetLastError(x)
 * 000000000015ABA0: xor     eax, eax
 * 000000000015ABA2: jmp     short loc_15ABCF
 * 000000000015ABA4: push    ecx; unsigned int *
 * 000000000015ABA5: push    eax; unsigned __int16
 * 000000000015ABA6: push    eax; struct tagTHREADINPUTPOINTERLIST *
 * 000000000015ABA7: add     ecx, 264h
 * 000000000015ABAD: call    ?GetThreadPointerData@@YGKPAUtagTHREADINPUTPOINTERLIST@@GPAKPAHPAPAUHWND__@@@Z; GetThreadPointerData(tagTHREADINPUTPOINTERLIST *,ushort,ulong *,int *,HWND__ * *)
 * 000000000015ABB2: test    eax, eax
 * 000000000015ABB4: jnz     short loc_15ABBA
 * 000000000015ABB6: push    57h ; 'W'
 * 000000000015ABB8: jmp     short loc_15AB9A
 * 000000000015ABBA: push    [ebp+arg_10]
 * 000000000015ABBD: mov     edx, [ebp+arg_4]
 * 000000000015ABC0: push    [ebp+arg_C]
 * 000000000015ABC3: mov     ecx, [ebp+arg_0]
 * 000000000015ABC6: push    [ebp+arg_8]
 * 000000000015ABC9: push    eax
 * 000000000015ABCA: call    _xxxSendPointerMessageWorker@24; xxxSendPointerMessageWorker(x,x,x,x,x,x)
 * 000000000015ABCF: pop     ebp
 * 000000000015ABD0: retn    14h
 */
