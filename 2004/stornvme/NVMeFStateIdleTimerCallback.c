/*
 * XREFs of NVMeFStateIdleTimerCallback @ 0x1C0005050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMeFStateIdleTimerCallback @ 0x1C0005050
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005050
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005050: push    rbx
 * 00000001C0005052: sub     rsp, 30h
 * 00000001C0005056: mov     r8d, [rcx+680h]
 * 00000001C000505D: lea     rdx, aStornvmePowerF; "StorNVMe - POWER: F-State Idle Timer Ex"...
 * 00000001C0005064: mov     rbx, rcx
 * 00000001C0005067: mov     ecx, 3
 * 00000001C000506C: call    cs:__imp_StorPortDebugPrint
 * 00000001C0005073: nop     dword ptr [rax+rax+00h]
 * 00000001C0005078: mov     eax, [rbx+680h]
 * 00000001C000507E: xor     r9d, r9d
 * 00000001C0005081: and     dword ptr [rbx+670h], 0FFFFFFDFh
 * 00000001C0005088: xor     r8d, r8d
 * 00000001C000508B: imul    rdx, rax, 2710h
 * 00000001C0005092: lea     ecx, [r9+33h]
 * 00000001C0005096: mov     [rsp+38h+var_18], rdx
 * 00000001C000509B: mov     rdx, rbx
 * 00000001C000509E: call    cs:__imp_StorPortExtendedFunction
 * 00000001C00050A5: nop     dword ptr [rax+rax+00h]
 * 00000001C00050AA: add     rsp, 30h
 * 00000001C00050AE: pop     rbx
 * 00000001C00050AF: retn
 */
