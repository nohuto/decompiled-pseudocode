/*
 * XREFs of NVMeControllerValidateFirmwareActivateCapability @ 0x1C0012B50
 * Callers:
 *     <none>
 * Callees:
 *     GetRegistrySettingsForSpecificKey @ 0x1C001CD00 (GetRegistrySettingsForSpecificKey.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeControllerValidateFirmwareActivateCapability @ 0x1C0012B50
 * Reason: Hex-Rays returned no pseudocode for 0x1C0012B50
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0012B50: mov     [rsp+arg_0], rbx
 * 00000001C0012B55: push    rdi
 * 00000001C0012B56: sub     rsp, 20h
 * 00000001C0012B5A: mov     rdi, r8
 * 00000001C0012B5D: mov     rbx, rcx
 * 00000001C0012B60: call    GetRegistrySettingsForSpecificKey
 * 00000001C0012B65: mov     r8, rdi
 * 00000001C0012B68: mov     [rbx+8Ch], eax
 * 00000001C0012B6E: mov     rdx, rbx
 * 00000001C0012B71: mov     ecx, 1Fh
 * 00000001C0012B76: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0012B7D: nop     dword ptr [rax+rax+00h]
 * 00000001C0012B82: mov     rbx, [rsp+28h+arg_0]
 * 00000001C0012B87: add     rsp, 20h
 * 00000001C0012B8B: pop     rdi
 * 00000001C0012B8C: retn
 */
