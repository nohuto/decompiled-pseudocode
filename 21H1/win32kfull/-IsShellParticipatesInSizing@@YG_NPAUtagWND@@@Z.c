/*
 * XREFs of ?IsShellParticipatesInSizing@@YG_NPAUtagWND@@@Z @ 0x26AC0
 * Callers:
 *     ?PositioningChanged@NotifyShell@@YGXPAUtagWND@@ABUtagCVR@@@Z @ 0x2624C (-PositioningChanged@NotifyShell@@YGXPAUtagWND@@ABUtagCVR@@@Z.c)
 *     _NtUserUpdateWindowTrackingInfo@12 @ 0x16AF00 (_NtUserUpdateWindowTrackingInfo@12.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YGXPAU_MOVESIZEDATA@@@Z @ 0x17522A (-xxxReportMoveSizeCompletionToShell@@YGXPAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@K@Z @ 0xF4E0E (-BehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@K@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?IsShellParticipatesInSizing@@YG_NPAUtagWND@@@Z @ 0x26AC0
 * Reason: Hex-Rays returned no pseudocode for 0x26AC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000000026AC0: mov     edi, edi
 * 0000000000026AC2: push    esi; struct tagDESKTOP *
 * 0000000000026AC3: mov     esi, ecx
 * 0000000000026AC5: push    edi; this
 * 0000000000026AC6: push    40h ; '@'
 * 0000000000026AC8: pop     edx
 * 0000000000026AC9: mov     edi, [esi+8]
 * 0000000000026ACC: mov     ecx, [edi+0F8h]
 * 0000000000026AD2: call    ?BehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@K@Z; ShellWindowManagement::BehaviorEnabled(tagDESKTOP const *,ulong)
 * 0000000000026AD7: test    al, al
 * 0000000000026AD9: jz      short loc_26AF5
 * 0000000000026ADB: push    8
 * 0000000000026ADD: pop     edx
 * 0000000000026ADE: call    ?BehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@K@Z; ShellWindowManagement::BehaviorEnabled(tagDESKTOP const *,ulong)
 * 0000000000026AE3: test    al, al
 * 0000000000026AE5: jnz     short loc_26AF5
 * 0000000000026AE7: mov     eax, [edi+170h]
 * 0000000000026AED: test    eax, eax
 * 0000000000026AEF: jnz     loc_10837B
 * 0000000000026AF5: xor     al, al
 * 0000000000026AF7: pop     edi
 * 0000000000026AF8: pop     esi
 * 0000000000026AF9: retn
 * 000000000010837B: cmp     [eax+8], esi
 * 000000000010837E: jnz     loc_26AF5
 * 0000000000108384: test    byte ptr [eax+0F8h], 4
 * 000000000010838B: jz      loc_26AF5
 * 0000000000108391: mov     al, 1
 * 0000000000108393: jmp     loc_26AF7
 */
