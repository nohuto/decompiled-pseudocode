/*
 * XREFs of McGenEventRegister_EtwEventRegister @ 0x1800628A0
 * Callers:
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x1800625D0 (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister_EtwEventRegister @ 0x1800628A0
 * Reason: Hex-Rays returned no pseudocode for 0x1800628A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800628A0: sub     rsp, 28h
 * 00000001800628A4: xor     eax, eax
 * 00000001800628A6: cmp     cs:AUDIO_EVENT_PROVIDER_Context, rax
 * 00000001800628AD: jnz     short loc_1800628D3
 * 00000001800628AF: lea     r8, AUDIO_EVENT_PROVIDER_Context
 * 00000001800628B6: mov     r9, r8
 * 00000001800628B9: lea     rdx, McGenControlCallbackV2
 * 00000001800628C0: lea     rcx, AUDIO_EVENT_PROVIDER
 * 00000001800628C7: call    cs:__imp_EtwEventRegister
 * 00000001800628CE: nop     dword ptr [rax+rax+00h]
 * 00000001800628D3: add     rsp, 28h
 * 00000001800628D7: retn
 */
