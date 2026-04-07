/*
 * XREFs of McGenEventRegister_EtwEventRegister @ 0x1800425D0
 * Callers:
 *     DllMain @ 0x1800558E8 (DllMain.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister_EtwEventRegister @ 0x1800425D0
 * Reason: Hex-Rays returned no pseudocode for 0x1800425D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800425D0: sub     rsp, 28h
 * 00000001800425D4: xor     eax, eax
 * 00000001800425D6: cmp     cs:Microsoft_Windows_Dwm_Udwm_Provider_Context, rax
 * 00000001800425DD: jnz     short loc_180042603
 * 00000001800425DF: lea     r8, Microsoft_Windows_Dwm_Udwm_Provider_Context
 * 00000001800425E6: mov     r9, r8
 * 00000001800425E9: lea     rdx, McGenControlCallbackV2
 * 00000001800425F0: lea     rcx, Microsoft_Windows_Dwm_Udwm_Provider
 * 00000001800425F7: call    cs:__imp_EtwEventRegister
 * 00000001800425FE: nop     dword ptr [rax+rax+00h]
 * 0000000180042603: add     rsp, 28h
 * 0000000180042607: retn
 */
