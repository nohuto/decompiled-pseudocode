/*
 * XREFs of _DestroyClassSmIcon@4 @ 0x47A0C
 * Callers:
 *     _DestroyClass@8 @ 0x472A4 (_DestroyClass@8.c)
 *     _xxxSetClassIcon@16 @ 0x19C737 (_xxxSetClassIcon@16.c)
 *     _xxxRecreateSmallIcons@4 @ 0x1A12BF (_xxxRecreateSmallIcons@4.c)
 * Callees:
 *     ?_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z @ 0x785EE (-_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _DestroyClassSmIcon@4 @ 0x47A0C
 * Reason: Hex-Rays returned no pseudocode for 0x47A0C
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000000047A0C: mov     edi, edi
 * 0000000000047A0E: push    esi; struct tagCURSOR *
 * 0000000000047A0F: mov     esi, ecx
 * 0000000000047A11: mov     eax, [esi]
 * 0000000000047A13: mov     eax, [eax]
 * 0000000000047A15: mov     eax, [eax+4]
 * 0000000000047A18: test    byte ptr [eax+6], 20h
 * 0000000000047A1C: jnz     short loc_47A22
 * 0000000000047A1E: xor     eax, eax
 * 0000000000047A20: pop     esi
 * 0000000000047A21: retn
 * 0000000000047A22: mov     eax, [esi]
 * 0000000000047A24: mov     ecx, [eax]
 * 0000000000047A26: mov     eax, [ecx+4]
 * 0000000000047A29: add     ecx, 40h ; '@'
 * 0000000000047A2C: and     dword ptr [eax+24h], 0
 * 0000000000047A30: call    ds:__imp_@HMAssignmentUnlock@4; HMAssignmentUnlock(x)
 * 0000000000047A36: test    eax, eax
 * 0000000000047A38: jz      short loc_47A43
 * 0000000000047A3A: xor     edx, edx
 * 0000000000047A3C: mov     ecx, eax
 * 0000000000047A3E: call    ?_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z; _DestroyCursor(tagCURSOR *,ulong)
 * 0000000000047A43: mov     eax, [esi]
 * 0000000000047A45: mov     ecx, 0FFDFh
 * 0000000000047A4A: pop     esi
 * 0000000000047A4B: mov     eax, [eax]
 * 0000000000047A4D: mov     eax, [eax+4]
 * 0000000000047A50: and     [eax+6], cx
 * 0000000000047A54: xor     eax, eax
 * 0000000000047A56: inc     eax
 * 0000000000047A57: retn
 */
