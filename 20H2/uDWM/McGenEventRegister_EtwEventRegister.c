/*
 * XREFs of McGenEventRegister_EtwEventRegister @ 0x180042E38
 * Callers:
 *     DllMain @ 0x180055E2C (DllMain.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister_EtwEventRegister @ 0x180042E38
 * Reason: Hex-Rays returned no pseudocode for 0x180042E38
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180042E38: sub     rsp, 28h
 * 0000000180042E3C: xor     eax, eax
 * 0000000180042E3E: cmp     cs:Microsoft_Windows_Dwm_Udwm_Provider_Context, rax
 * 0000000180042E45: jnz     short loc_180042E6B
 * 0000000180042E47: lea     r8, Microsoft_Windows_Dwm_Udwm_Provider_Context
 * 0000000180042E4E: mov     r9, r8
 * 0000000180042E51: lea     rdx, McGenControlCallbackV2
 * 0000000180042E58: lea     rcx, Microsoft_Windows_Dwm_Udwm_Provider
 * 0000000180042E5F: call    cs:__imp_EtwEventRegister
 * 0000000180042E66: nop     dword ptr [rax+rax+00h]
 * 0000000180042E6B: add     rsp, 28h
 * 0000000180042E6F: retn
 */
