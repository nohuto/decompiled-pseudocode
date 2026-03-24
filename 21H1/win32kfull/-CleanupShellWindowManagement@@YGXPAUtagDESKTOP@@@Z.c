/*
 * XREFs of ?CleanupShellWindowManagement@@YGXPAUtagDESKTOP@@@Z @ 0xAC5A0
 * Callers:
 *     _CleanupIAMAccess@4 @ 0xAC54A (_CleanupIAMAccess@4.c)
 * Callees:
 *     ?CleanupActivationFiltersForDesktop@@YGXPAUtagDESKTOP@@@Z @ 0xD35E4 (-CleanupActivationFiltersForDesktop@@YGXPAUtagDESKTOP@@@Z.c)
 *     ?SetWindow@ShellWindowManagement@@YGPAUtagWND@@PAUtagDESKTOP@@PAU2@@Z @ 0xF4EA4 (-SetWindow@ShellWindowManagement@@YGPAUtagWND@@PAUtagDESKTOP@@PAU2@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?CleanupShellWindowManagement@@YGXPAUtagDESKTOP@@@Z @ 0xAC5A0
 * Reason: Hex-Rays returned no pseudocode for 0xAC5A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000AC5A0: mov     edi, edi
 * 00000000000AC5A2: push    edi; this
 * 00000000000AC5A3: mov     edi, ecx
 * 00000000000AC5A5: cmp     dword ptr [edi+0B0h], 0
 * 00000000000AC5AC: jnz     short loc_AC5B0
 * 00000000000AC5AE: pop     edi
 * 00000000000AC5AF: retn
 * 00000000000AC5B0: and     dword ptr [edi+0B0h], 0
 * 00000000000AC5B7: lea     ecx, [edi+0B8h]
 * 00000000000AC5BD: call    ds:__imp_@HMAssignmentUnlock@4; HMAssignmentUnlock(x)
 * 00000000000AC5C3: lea     ecx, [edi+0BCh]
 * 00000000000AC5C9: call    ds:__imp_@HMAssignmentUnlock@4; HMAssignmentUnlock(x)
 * 00000000000AC5CF: mov     ecx, edi
 * 00000000000AC5D1: call    ?CleanupActivationFiltersForDesktop@@YGXPAUtagDESKTOP@@@Z; CleanupActivationFiltersForDesktop(tagDESKTOP *)
 * 00000000000AC5D6: xor     edx, edx
 * 00000000000AC5D8: mov     ecx, edi
 * 00000000000AC5DA: call    ?SetWindow@ShellWindowManagement@@YGPAUtagWND@@PAUtagDESKTOP@@PAU2@@Z; ShellWindowManagement::SetWindow(tagDESKTOP *,tagWND *)
 * 00000000000AC5DF: mov     eax, [edi+4]
 * 00000000000AC5E2: pop     edi
 * 00000000000AC5E3: mov     ecx, [eax]
 * 00000000000AC5E5: mov     ecx, [ecx]
 * 00000000000AC5E7: jmp     ?FreeEmptyGroups@WindowGroupingManagement@@YGXK@Z; WindowGroupingManagement::FreeEmptyGroups(ulong)
 */
