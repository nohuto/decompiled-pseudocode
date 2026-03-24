/*
 * XREFs of NVMePerfStateTransition @ 0x1C000E780
 * Callers:
 *     NVMeMaxOperationalPower @ 0x1C000E678 (NVMeMaxOperationalPower.c)
 *     NVMePowerSetPerfState @ 0x1C000F088 (NVMePowerSetPerfState.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMePerfStateTransition @ 0x1C000E780
 * Reason: Hex-Rays returned no pseudocode for 0x1C000E780
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000E780: mov     [rsp+arg_0], rbx
 * 00000001C000E785: push    rdi
 * 00000001C000E786: sub     rsp, 40h
 * 00000001C000E78A: mov     eax, [rcx+670h]
 * 00000001C000E790: mov     rdi, rcx
 * 00000001C000E793: test    al, 2
 * 00000001C000E795: jz      short loc_1C000E7F7
 * 00000001C000E797: movzx   eax, byte ptr [rcx+678h]
 * 00000001C000E79E: cmp     [rcx+677h], al
 * 00000001C000E7A4: jz      short loc_1C000E7F7
 * 00000001C000E7A6: mov     r8d, eax
 * 00000001C000E7A9: lea     rdx, aStornvmePowerR; "StorNVMe - POWER: Requesting transition"...
 * 00000001C000E7B0: mov     ecx, 3
 * 00000001C000E7B5: mov     ebx, eax
 * 00000001C000E7B7: call    cs:__imp_StorPortDebugPrint
 * 00000001C000E7BE: nop     dword ptr [rax+rax+00h]
 * 00000001C000E7C3: mov     [rsp+48h+var_10], rbx
 * 00000001C000E7C8: xor     r9d, r9d
 * 00000001C000E7CB: mov     [rsp+48h+var_18], ebx
 * 00000001C000E7CF: xor     r8d, r8d
 * 00000001C000E7D2: and     [rsp+48h+var_20], 0
 * 00000001C000E7D7: mov     rdx, rdi
 * 00000001C000E7DA: and     [rsp+48h+var_28], 0
 * 00000001C000E7DF: lea     ecx, [r9+42h]
 * 00000001C000E7E3: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000E7EA: nop     dword ptr [rax+rax+00h]
 * 00000001C000E7EF: test    eax, eax
 * 00000001C000E7F1: jnz     short loc_1C000E7F7
 * 00000001C000E7F3: mov     al, 1
 * 00000001C000E7F5: jmp     short loc_1C000E7F9
 * 00000001C000E7F7: xor     al, al
 * 00000001C000E7F9: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000E7FE: add     rsp, 40h
 * 00000001C000E802: pop     rdi
 * 00000001C000E803: retn
 */
