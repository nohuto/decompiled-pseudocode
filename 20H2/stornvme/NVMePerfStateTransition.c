/*
 * XREFs of NVMePerfStateTransition @ 0x1C000E700
 * Callers:
 *     NVMeMaxOperationalPower @ 0x1C000E5F8 (NVMeMaxOperationalPower.c)
 *     NVMePowerSetPerfState @ 0x1C000F010 (NVMePowerSetPerfState.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMePerfStateTransition @ 0x1C000E700
 * Reason: Hex-Rays returned no pseudocode for 0x1C000E700
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000E700: mov     [rsp+arg_0], rbx
 * 00000001C000E705: push    rdi
 * 00000001C000E706: sub     rsp, 40h
 * 00000001C000E70A: mov     eax, [rcx+670h]
 * 00000001C000E710: mov     rdi, rcx
 * 00000001C000E713: test    al, 2
 * 00000001C000E715: jz      short loc_1C000E777
 * 00000001C000E717: movzx   eax, byte ptr [rcx+678h]
 * 00000001C000E71E: cmp     [rcx+677h], al
 * 00000001C000E724: jz      short loc_1C000E777
 * 00000001C000E726: mov     r8d, eax
 * 00000001C000E729: lea     rdx, aStornvmePowerR; "StorNVMe - POWER: Requesting transition"...
 * 00000001C000E730: mov     ecx, 3
 * 00000001C000E735: mov     ebx, eax
 * 00000001C000E737: call    cs:__imp_StorPortDebugPrint
 * 00000001C000E73E: nop     dword ptr [rax+rax+00h]
 * 00000001C000E743: mov     [rsp+48h+var_10], rbx
 * 00000001C000E748: xor     r9d, r9d
 * 00000001C000E74B: mov     [rsp+48h+var_18], ebx
 * 00000001C000E74F: xor     r8d, r8d
 * 00000001C000E752: and     [rsp+48h+var_20], 0
 * 00000001C000E757: mov     rdx, rdi
 * 00000001C000E75A: and     [rsp+48h+var_28], 0
 * 00000001C000E75F: lea     ecx, [r9+42h]
 * 00000001C000E763: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000E76A: nop     dword ptr [rax+rax+00h]
 * 00000001C000E76F: test    eax, eax
 * 00000001C000E771: jnz     short loc_1C000E777
 * 00000001C000E773: mov     al, 1
 * 00000001C000E775: jmp     short loc_1C000E779
 * 00000001C000E777: xor     al, al
 * 00000001C000E779: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000E77E: add     rsp, 40h
 * 00000001C000E782: pop     rdi
 * 00000001C000E783: retn
 */
