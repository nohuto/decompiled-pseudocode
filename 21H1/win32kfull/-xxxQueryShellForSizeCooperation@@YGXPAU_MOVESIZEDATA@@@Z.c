/*
 * XREFs of ?xxxQueryShellForSizeCooperation@@YGXPAU_MOVESIZEDATA@@@Z @ 0x1751C3
 * Callers:
 *     _xxxMoveSize@12 @ 0x177959 (_xxxMoveSize@12.c)
 * Callees:
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     ?IsWindowSubjectToShellSizingPolicy@@YG_NPAUtagWND@@@Z @ 0x17198D (-IsWindowSubjectToShellSizingPolicy@@YG_NPAUtagWND@@@Z.c)
 *     ?xxxWindowSizeStartingHandler@CallShell@@YG_NPAUtagWND@@H@Z @ 0x19C48F (-xxxWindowSizeStartingHandler@CallShell@@YG_NPAUtagWND@@H@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?xxxQueryShellForSizeCooperation@@YGXPAU_MOVESIZEDATA@@@Z @ 0x1751C3
 * Reason: Hex-Rays returned no pseudocode for 0x1751C3
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000001751C3: mov     edi, edi
 * 00000000001751C5: push    esi; this
 * 00000000001751C6: mov     esi, ecx
 * 00000000001751C8: mov     eax, [esi+0A4h]
 * 00000000001751CE: cmp     eax, 1
 * 00000000001751D1: jz      short loc_1751D8
 * 00000000001751D3: cmp     eax, 2
 * 00000000001751D6: jnz     short loc_175228
 * 00000000001751D8: test    byte ptr [esi+0B8h], 2
 * 00000000001751DF: jnz     short loc_175228
 * 00000000001751E1: mov     ecx, [esi+8]
 * 00000000001751E4: call    ?IsWindowSubjectToShellSizingPolicy@@YG_NPAUtagWND@@@Z; IsWindowSubjectToShellSizingPolicy(tagWND *)
 * 00000000001751E9: test    al, al
 * 00000000001751EB: jz      short loc_175228
 * 00000000001751ED: mov     edx, [esi+0A4h]
 * 00000000001751F3: mov     ecx, [esi+8]
 * 00000000001751F6: add     edx, 9
 * 00000000001751F9: call    ?xxxWindowSizeStartingHandler@CallShell@@YG_NPAUtagWND@@H@Z; CallShell::xxxWindowSizeStartingHandler(tagWND *,int)
 * 00000000001751FE: test    al, al
 * 0000000000175200: jz      short loc_175228
 * 0000000000175202: or      dword ptr [esi+0F8h], 4
 * 0000000000175209: cmp     _WPP_RECORDER_INITIALIZED, offset _WPP_RECORDER_INITIALIZED
 * 0000000000175213: jz      short loc_175228
 * 0000000000175215: push    dword ptr [esi+8]
 * 0000000000175218: mov     dl, 4
 * 000000000017521A: push    offset _WPP_44fe173a72dc32ad3264e41cf6895406_Traceguids
 * 000000000017521F: push    0Ah
 * 0000000000175221: push    1
 * 0000000000175223: call    _WPP_RECORDER_SF_q@24; WPP_RECORDER_SF_q(x,x,x,x,x,x)
 * 0000000000175228: pop     esi
 * 0000000000175229: retn
 */
