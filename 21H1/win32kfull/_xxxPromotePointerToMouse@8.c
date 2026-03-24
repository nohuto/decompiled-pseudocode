/*
 * XREFs of _xxxPromotePointerToMouse@8 @ 0x15A76D
 * Callers:
 *     _NtUserPromotePointer@8 @ 0x167C88 (_NtUserPromotePointer@8.c)
 *     ?xxxValidateCapture@CMoveSizeRequest@@CG_NPAUtagWND@@KPAUtagPOINT@@@Z @ 0x19FE53 (-xxxValidateCapture@CMoveSizeRequest@@CG_NPAUtagWND@@KPAUtagPOINT@@@Z.c)
 *     _xxxDefPointerProc@16 @ 0x1A1EB4 (_xxxDefPointerProc@16.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?GetThreadPointerData@@YGKPAUtagTHREADINPUTPOINTERLIST@@GPAKPAHPAPAUHWND__@@@Z @ 0x15ADC8 (-GetThreadPointerData@@YGKPAUtagTHREADINPUTPOINTERLIST@@GPAKPAHPAPAUHWND__@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _xxxPromotePointerToMouse@8 @ 0x15A76D
 * Reason: Hex-Rays returned no pseudocode for 0x15A76D
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000015A76D: mov     eax, ds:__imp__gptiCurrent
 * 000000000015A772: push    esi; int *
 * 000000000015A773: push    ecx; unsigned int *
 * 000000000015A774: mov     esi, edx
 * 000000000015A776: mov     edx, ecx
 * 000000000015A778: mov     ecx, [eax]
 * 000000000015A77A: push    0; unsigned __int16
 * 000000000015A77C: push    0; struct tagTHREADINPUTPOINTERLIST *
 * 000000000015A77E: add     ecx, 264h
 * 000000000015A784: call    ?GetThreadPointerData@@YGKPAUtagTHREADINPUTPOINTERLIST@@GPAKPAHPAPAUHWND__@@@Z; GetThreadPointerData(tagTHREADINPUTPOINTERLIST *,ushort,ulong *,int *,HWND__ * *)
 * 000000000015A789: test    eax, eax
 * 000000000015A78B: jnz     short loc_15A799
 * 000000000015A78D: push    57h ; 'W'
 * 000000000015A78F: pop     ecx
 * 000000000015A790: call    _UserSetLastError@4; UserSetLastError(x)
 * 000000000015A795: xor     eax, eax
 * 000000000015A797: pop     esi
 * 000000000015A798: retn
 * 000000000015A799: mov     ecx, ds:__imp__gpTouchProcessor
 * 000000000015A79F: push    esi
 * 000000000015A7A0: push    eax
 * 000000000015A7A1: mov     ecx, [ecx]
 * 000000000015A7A3: call    ds:__imp_?PromotePointerDataToMouse@CTouchProcessor@@QAEHKK@Z; CTouchProcessor::PromotePointerDataToMouse(ulong,ulong)
 * 000000000015A7A9: pop     esi
 * 000000000015A7AA: retn
 */
