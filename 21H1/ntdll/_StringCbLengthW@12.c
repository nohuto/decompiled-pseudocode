/*
 * XREFs of _StringCbLengthW@12 @ 0x4B2DAA52
 * Callers:
 *     _WerEscalationReadImageVersionInfoForModuleBase@8 @ 0x4B2DA7E7 (_WerEscalationReadImageVersionInfoForModuleBase@8.c)
 * Callees:
 *     StringLengthWorkerW @ 0x4B2DAA90 (StringLengthWorkerW.c)
 */

/*
 * Hex-Rays decompilation failed for _StringCbLengthW@12 @ 0x4B2DAA52
 * Reason: Hex-Rays returned no pseudocode for 0x4B2DAA52
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B2DAA52: mov     edi, edi
 * 000000004B2DAA54: push    ebp
 * 000000004B2DAA55: mov     ebp, esp
 * 000000004B2DAA57: push    ecx; cchMax
 * 000000004B2DAA58: xor     eax, eax
 * 000000004B2DAA5A: mov     dword ptr [ebp+var_4], eax
 * 000000004B2DAA5D: test    ecx, ecx
 * 000000004B2DAA5F: jz      short loc_4B2DAA84
 * 000000004B2DAA61: lea     eax, [ebp+var_4]
 * 000000004B2DAA64: push    eax; psz
 * 000000004B2DAA65: call    StringLengthWorkerW
 * 000000004B2DAA6A: mov     edx, eax
 * 000000004B2DAA6C: mov     eax, dword ptr [ebp+var_4]
 * 000000004B2DAA6F: mov     ecx, [ebp+psz]
 * 000000004B2DAA72: test    ecx, ecx
 * 000000004B2DAA74: jz      short loc_4B2DAA7E
 * 000000004B2DAA76: test    edx, edx
 * 000000004B2DAA78: js      short loc_4B2DAA8B
 * 000000004B2DAA7A: add     eax, eax
 * 000000004B2DAA7C: mov     [ecx], eax
 * 000000004B2DAA7E: mov     eax, edx
 * 000000004B2DAA80: leave
 * 000000004B2DAA81: retn    4
 * 000000004B2DAA84: mov     edx, 80070057h
 * 000000004B2DAA89: jmp     short loc_4B2DAA6F
 * 000000004B2DAA8B: and     dword ptr [ecx], 0
 * 000000004B2DAA8E: jmp     short loc_4B2DAA7E
 */
