/*
 * XREFs of NVMeSetFStateIdleTimer @ 0x1C000F518
 * Callers:
 *     NVMePowerSetFState @ 0x1C000EF68 (NVMePowerSetFState.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMeSetFStateIdleTimer @ 0x1C000F518
 * Reason: Hex-Rays returned no pseudocode for 0x1C000F518
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000F518: mov     [rsp+arg_0], rbx
 * 00000001C000F51D: push    rdi
 * 00000001C000F51E: sub     rsp, 40h
 * 00000001C000F522: mov     rbx, rcx
 * 00000001C000F525: xor     ecx, ecx
 * 00000001C000F527: cmp     dword ptr [rbx+67Ch], 1
 * 00000001C000F52E: jnz     short loc_1C000F535
 * 00000001C000F530: mov     eax, [rbx+58h]
 * 00000001C000F533: jmp     short loc_1C000F55C
 * 00000001C000F535: mov     eax, [rbx+54h]
 * 00000001C000F538: cmp     eax, 0FFFFFFFFh
 * 00000001C000F53B: jnz     short loc_1C000F55C
 * 00000001C000F53D: cmp     [rbx+67Ah], cl
 * 00000001C000F543: jnz     short loc_1C000F54D
 * 00000001C000F545: mov     eax, [rbx+68Ch]
 * 00000001C000F54B: jmp     short loc_1C000F55C
 * 00000001C000F54D: cmp     byte ptr [rbx+679h], 2
 * 00000001C000F554: jbe     short loc_1C000F5C2
 * 00000001C000F556: mov     eax, [rbx+694h]
 * 00000001C000F55C: mov     edi, eax
 * 00000001C000F55E: test    eax, eax
 * 00000001C000F560: jz      short loc_1C000F5C2
 * 00000001C000F562: mov     r8d, edi
 * 00000001C000F565: lea     rdx, aStornvmePowerS_3; "StorNVMe - POWER: Setting F-state idle "...
 * 00000001C000F56C: mov     ecx, 3
 * 00000001C000F571: call    cs:__imp_StorPortDebugPrint
 * 00000001C000F578: nop     dword ptr [rax+rax+00h]
 * 00000001C000F57D: or      dword ptr [rbx+670h], 20h
 * 00000001C000F584: lea     r9, NVMeFStateIdleTimerCallback
 * 00000001C000F58B: mov     r8, [rbx+698h]
 * 00000001C000F592: mov     rdx, rbx
 * 00000001C000F595: imul    rax, rdi, 3E8h
 * 00000001C000F59C: mov     [rsp+48h+var_18], 2710h
 * 00000001C000F5A5: mov     ecx, 21h ; '!'
 * 00000001C000F5AA: mov     [rsp+48h+var_20], rax
 * 00000001C000F5AF: mov     [rsp+48h+var_28], rbx
 * 00000001C000F5B4: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000F5BB: nop     dword ptr [rax+rax+00h]
 * 00000001C000F5C0: mov     ecx, eax
 * 00000001C000F5C2: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000F5C7: mov     eax, ecx
 * 00000001C000F5C9: add     rsp, 40h
 * 00000001C000F5CD: pop     rdi
 * 00000001C000F5CE: retn
 */
