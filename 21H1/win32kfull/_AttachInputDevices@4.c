/*
 * XREFs of _AttachInputDevices@4 @ 0xD2544
 * Callers:
 *     _xxxRemoteReconnect@4 @ 0xD18BC (_xxxRemoteReconnect@4.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for _AttachInputDevices@4 @ 0xD2544
 * Reason: Hex-Rays returned no pseudocode for 0xD2544
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000D2544: test    ecx, ecx
 * 00000000000D2546: mov     ecx, ds:__imp__gpMouseSensor
 * 00000000000D254C: push    esi
 * 00000000000D254D: mov     esi, ds:__imp_?HandleTSRequest@CBaseInput@@QAEXW4InputTSRequest@@@Z; CBaseInput::HandleTSRequest(InputTSRequest)
 * 00000000000D2553: mov     ecx, [ecx]
 * 00000000000D2555: jz      loc_136767
 * 00000000000D255B: push    2
 * 00000000000D255D: call    esi ; CBaseInput::HandleTSRequest(InputTSRequest); CBaseInput::HandleTSRequest(InputTSRequest)
 * 00000000000D255F: mov     ecx, ds:__imp__gpKeyboardSensor
 * 00000000000D2565: push    2
 * 00000000000D2567: mov     ecx, [ecx]
 * 00000000000D2569: call    esi ; CBaseInput::HandleTSRequest(InputTSRequest); CBaseInput::HandleTSRequest(InputTSRequest)
 * 00000000000D256B: mov     ecx, ds:__imp__gpHidInput
 * 00000000000D2571: push    2
 * 00000000000D2573: mov     ecx, [ecx]
 * 00000000000D2575: call    esi ; CBaseInput::HandleTSRequest(InputTSRequest); CBaseInput::HandleTSRequest(InputTSRequest)
 * 00000000000D2577: pop     esi
 * 00000000000D2578: retn
 * 0000000000136767: push    0
 * 0000000000136769: mov     _gbPendRecreateTouchInjectionDevices, 1
 * 0000000000136773: call    esi ; CBaseInput::HandleTSRequest(InputTSRequest); CBaseInput::HandleTSRequest(InputTSRequest)
 * 0000000000136775: mov     ecx, ds:__imp__gpKeyboardSensor
 * 000000000013677B: push    0
 * 000000000013677D: jmp     loc_D2573
 */
