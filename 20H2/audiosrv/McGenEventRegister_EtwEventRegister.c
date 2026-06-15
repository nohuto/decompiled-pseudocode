/*
 * XREFs of McGenEventRegister_EtwEventRegister @ 0x180062200
 * Callers:
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x180061F30 (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister_EtwEventRegister @ 0x180062200
 * Reason: Hex-Rays returned no pseudocode for 0x180062200
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180062200: sub     rsp, 28h
 * 0000000180062204: xor     eax, eax
 * 0000000180062206: cmp     cs:AUDIO_EVENT_PROVIDER_Context, rax
 * 000000018006220D: jnz     short loc_180062233
 * 000000018006220F: lea     r8, AUDIO_EVENT_PROVIDER_Context
 * 0000000180062216: mov     r9, r8
 * 0000000180062219: lea     rdx, McGenControlCallbackV2
 * 0000000180062220: lea     rcx, AUDIO_EVENT_PROVIDER
 * 0000000180062227: call    cs:__imp_EtwEventRegister
 * 000000018006222E: nop     dword ptr [rax+rax+00h]
 * 0000000180062233: add     rsp, 28h
 * 0000000180062237: retn
 */
