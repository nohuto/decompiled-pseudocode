/*
 * XREFs of NVMeSetFStateIdleTimer @ 0x1C000F498
 * Callers:
 *     NVMePowerSetFState @ 0x1C000EEE8 (NVMePowerSetFState.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMeSetFStateIdleTimer @ 0x1C000F498
 * Reason: Hex-Rays returned no pseudocode for 0x1C000F498
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000F498: mov     [rsp+arg_0], rbx
 * 00000001C000F49D: push    rdi
 * 00000001C000F49E: sub     rsp, 40h
 * 00000001C000F4A2: mov     rbx, rcx
 * 00000001C000F4A5: xor     ecx, ecx
 * 00000001C000F4A7: cmp     dword ptr [rbx+67Ch], 1
 * 00000001C000F4AE: jnz     short loc_1C000F4B5
 * 00000001C000F4B0: mov     eax, [rbx+58h]
 * 00000001C000F4B3: jmp     short loc_1C000F4DC
 * 00000001C000F4B5: mov     eax, [rbx+54h]
 * 00000001C000F4B8: cmp     eax, 0FFFFFFFFh
 * 00000001C000F4BB: jnz     short loc_1C000F4DC
 * 00000001C000F4BD: cmp     [rbx+67Ah], cl
 * 00000001C000F4C3: jnz     short loc_1C000F4CD
 * 00000001C000F4C5: mov     eax, [rbx+68Ch]
 * 00000001C000F4CB: jmp     short loc_1C000F4DC
 * 00000001C000F4CD: cmp     byte ptr [rbx+679h], 2
 * 00000001C000F4D4: jbe     short loc_1C000F542
 * 00000001C000F4D6: mov     eax, [rbx+694h]
 * 00000001C000F4DC: mov     edi, eax
 * 00000001C000F4DE: test    eax, eax
 * 00000001C000F4E0: jz      short loc_1C000F542
 * 00000001C000F4E2: mov     r8d, edi
 * 00000001C000F4E5: lea     rdx, aStornvmePowerS_3; "StorNVMe - POWER: Setting F-state idle "...
 * 00000001C000F4EC: mov     ecx, 3
 * 00000001C000F4F1: call    cs:__imp_StorPortDebugPrint
 * 00000001C000F4F8: nop     dword ptr [rax+rax+00h]
 * 00000001C000F4FD: or      dword ptr [rbx+670h], 20h
 * 00000001C000F504: lea     r9, NVMeFStateIdleTimerCallback
 * 00000001C000F50B: mov     r8, [rbx+698h]
 * 00000001C000F512: mov     rdx, rbx
 * 00000001C000F515: imul    rax, rdi, 3E8h
 * 00000001C000F51C: mov     [rsp+48h+var_18], 2710h
 * 00000001C000F525: mov     ecx, 21h ; '!'
 * 00000001C000F52A: mov     [rsp+48h+var_20], rax
 * 00000001C000F52F: mov     [rsp+48h+var_28], rbx
 * 00000001C000F534: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000F53B: nop     dword ptr [rax+rax+00h]
 * 00000001C000F540: mov     ecx, eax
 * 00000001C000F542: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000F547: mov     eax, ecx
 * 00000001C000F549: add     rsp, 40h
 * 00000001C000F54D: pop     rdi
 * 00000001C000F54E: retn
 */
