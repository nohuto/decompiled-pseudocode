/*
 * XREFs of NVMeControllerValidateFirmwareActivateCapability @ 0x1C0012BD0
 * Callers:
 *     <none>
 * Callees:
 *     GetRegistrySettingsForSpecificKey @ 0x1C001CDD0 (GetRegistrySettingsForSpecificKey.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeControllerValidateFirmwareActivateCapability @ 0x1C0012BD0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0012BD0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0012BD0: mov     [rsp+arg_0], rbx
 * 00000001C0012BD5: push    rdi
 * 00000001C0012BD6: sub     rsp, 20h
 * 00000001C0012BDA: mov     rdi, r8
 * 00000001C0012BDD: mov     rbx, rcx
 * 00000001C0012BE0: call    GetRegistrySettingsForSpecificKey
 * 00000001C0012BE5: mov     r8, rdi
 * 00000001C0012BE8: mov     [rbx+8Ch], eax
 * 00000001C0012BEE: mov     rdx, rbx
 * 00000001C0012BF1: mov     ecx, 1Fh
 * 00000001C0012BF6: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0012BFD: nop     dword ptr [rax+rax+00h]
 * 00000001C0012C02: mov     rbx, [rsp+28h+arg_0]
 * 00000001C0012C07: add     rsp, 20h
 * 00000001C0012C0B: pop     rdi
 * 00000001C0012C0C: retn
 */
