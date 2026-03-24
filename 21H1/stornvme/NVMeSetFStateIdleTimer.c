/*
 * XREFs of NVMeSetFStateIdleTimer @ 0x1C000F510
 * Callers:
 *     NVMePowerSetFState @ 0x1C000EF60 (NVMePowerSetFState.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMeSetFStateIdleTimer @ 0x1C000F510
 * Reason: Hex-Rays returned no pseudocode for 0x1C000F510
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000F510: mov     [rsp+arg_0], rbx
 * 00000001C000F515: push    rdi
 * 00000001C000F516: sub     rsp, 40h
 * 00000001C000F51A: mov     rbx, rcx
 * 00000001C000F51D: xor     ecx, ecx
 * 00000001C000F51F: cmp     dword ptr [rbx+67Ch], 1
 * 00000001C000F526: jnz     short loc_1C000F52D
 * 00000001C000F528: mov     eax, [rbx+58h]
 * 00000001C000F52B: jmp     short loc_1C000F554
 * 00000001C000F52D: mov     eax, [rbx+54h]
 * 00000001C000F530: cmp     eax, 0FFFFFFFFh
 * 00000001C000F533: jnz     short loc_1C000F554
 * 00000001C000F535: cmp     [rbx+67Ah], cl
 * 00000001C000F53B: jnz     short loc_1C000F545
 * 00000001C000F53D: mov     eax, [rbx+68Ch]
 * 00000001C000F543: jmp     short loc_1C000F554
 * 00000001C000F545: cmp     byte ptr [rbx+679h], 2
 * 00000001C000F54C: jbe     short loc_1C000F5BA
 * 00000001C000F54E: mov     eax, [rbx+694h]
 * 00000001C000F554: mov     edi, eax
 * 00000001C000F556: test    eax, eax
 * 00000001C000F558: jz      short loc_1C000F5BA
 * 00000001C000F55A: mov     r8d, edi
 * 00000001C000F55D: lea     rdx, aStornvmePowerS_3; "StorNVMe - POWER: Setting F-state idle "...
 * 00000001C000F564: mov     ecx, 3
 * 00000001C000F569: call    cs:__imp_StorPortDebugPrint
 * 00000001C000F570: nop     dword ptr [rax+rax+00h]
 * 00000001C000F575: or      dword ptr [rbx+670h], 20h
 * 00000001C000F57C: lea     r9, NVMeFStateIdleTimerCallback
 * 00000001C000F583: mov     r8, [rbx+698h]
 * 00000001C000F58A: mov     rdx, rbx
 * 00000001C000F58D: imul    rax, rdi, 3E8h
 * 00000001C000F594: mov     [rsp+48h+var_18], 2710h
 * 00000001C000F59D: mov     ecx, 21h ; '!'
 * 00000001C000F5A2: mov     [rsp+48h+var_20], rax
 * 00000001C000F5A7: mov     [rsp+48h+var_28], rbx
 * 00000001C000F5AC: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000F5B3: nop     dword ptr [rax+rax+00h]
 * 00000001C000F5B8: mov     ecx, eax
 * 00000001C000F5BA: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000F5BF: mov     eax, ecx
 * 00000001C000F5C1: add     rsp, 40h
 * 00000001C000F5C5: pop     rdi
 * 00000001C000F5C6: retn
 */
