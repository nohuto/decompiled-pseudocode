/*
 * XREFs of _xxxDWP_ProcessVirtKey@4 @ 0xC5870
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     ?xxxCloseApplication@WindowManagementExtended@@YGXPAUtagTHREADINFO@@@Z @ 0x19F8FE (-xxxCloseApplication@WindowManagementExtended@@YGXPAUtagTHREADINFO@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _xxxDWP_ProcessVirtKey@4 @ 0xC5870
 * Reason: Hex-Rays returned no pseudocode for 0xC5870
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000C5870: mov     edx, ecx
 * 00000000000C5872: push    ecx; this
 * 00000000000C5873: mov     eax, ds:__imp__gptiCurrent
 * 00000000000C5878: mov     ecx, [eax]
 * 00000000000C587A: mov     eax, [ecx+0ECh]
 * 00000000000C5880: cmp     edx, 73h ; 's'
 * 00000000000C5883: jz      loc_12FBC1
 * 00000000000C5889: pop     ecx
 * 00000000000C588A: retn
 * 000000000012FBC1: cmp     dword ptr [eax+40h], 0
 * 000000000012FBC5: jz      loc_C5889
 * 000000000012FBCB: call    ?xxxCloseApplication@WindowManagementExtended@@YGXPAUtagTHREADINFO@@@Z; WindowManagementExtended::xxxCloseApplication(tagTHREADINFO *)
 * 000000000012FBD0: pop     ecx
 * 000000000012FBD1: retn
 */
