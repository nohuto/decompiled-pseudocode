/*
 * XREFs of ?xxxDupConvTerminate@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F516
 * Callers:
 *     <none>
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     ?PopState@@YGXPAUtagDDECONV@@@Z @ 0x17EB1A (-PopState@@YGXPAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17FE83 (-xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?xxxDupConvTerminate@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F516
 * Reason: Hex-Rays returned no pseudocode for 0x17F516
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000017F516: mov     edi, edi
 * 000000000017F518: push    ebp; struct tagDDECONV *
 * 000000000017F519: mov     ebp, esp
 * 000000000017F51B: cmp     _WPP_RECORDER_INITIALIZED, offset _WPP_RECORDER_INITIALIZED
 * 000000000017F525: jz      short loc_17F537
 * 000000000017F527: push    offset _WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids
 * 000000000017F52C: push    33h ; '3'
 * 000000000017F52E: push    0Eh
 * 000000000017F530: mov     dl, 4
 * 000000000017F532: call    _WPP_RECORDER_SF_@20; WPP_RECORDER_SF_(x,x,x,x,x)
 * 000000000017F537: mov     ecx, [ebp+arg_0]
 * 000000000017F53A: cmp     dword ptr [ecx], 3E1h
 * 000000000017F540: jz      short loc_17F54F
 * 000000000017F542: push    [ebp+arg_8]; unsigned int *
 * 000000000017F545: mov     edx, [ebp+arg_4]
 * 000000000017F548: call    ?xxxUnexpectedServerPost@@YGKPAKPAJPAUtagDDECONV@@@Z; xxxUnexpectedServerPost(ulong *,long *,tagDDECONV *)
 * 000000000017F54D: jmp     short loc_17F55A
 * 000000000017F54F: mov     ecx, [ebp+arg_8]
 * 000000000017F552: call    ?PopState@@YGXPAUtagDDECONV@@@Z; PopState(tagDDECONV *)
 * 000000000017F557: xor     eax, eax
 * 000000000017F559: inc     eax
 * 000000000017F55A: pop     ebp
 * 000000000017F55B: retn    0Ch
 */
