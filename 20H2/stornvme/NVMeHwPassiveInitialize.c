/*
 * XREFs of NVMeHwPassiveInitialize @ 0x1C0009880
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C0009154 (NVMeControllerStartFailureEventLog.c)
 *     NVMeControllerInitPart2 @ 0x1C000C7A0 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart3 @ 0x1C000C9E4 (NVMeControllerInitPart3.c)
 *     NVMePowerInitialize @ 0x1C000E7EC (NVMePowerInitialize.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeHwPassiveInitialize @ 0x1C0009880
 * Reason: Hex-Rays returned no pseudocode for 0x1C0009880
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0009880: mov     [rsp+arg_8], rbx
 * 00000001C0009885: push    rdi
 * 00000001C0009886: sub     rsp, 30h
 * 00000001C000988A: mov     rdi, [rcx+648h]
 * 00000001C0009891: lea     rax, [rsp+38h+arg_0]
 * 00000001C0009896: and     [rsp+38h+arg_0], 0
 * 00000001C000989B: lea     r9, unk_1C001E578
 * 00000001C00098A2: xor     r8d, r8d
 * 00000001C00098A5: mov     [rsp+38h+var_18], rax
 * 00000001C00098AA: mov     rbx, rcx
 * 00000001C00098AD: mov     rdx, rcx
 * 00000001C00098B0: lea     ecx, [r8+37h]
 * 00000001C00098B4: call    cs:__imp_StorPortExtendedFunction
 * 00000001C00098BB: nop     dword ptr [rax+rax+00h]
 * 00000001C00098C0: test    eax, eax
 * 00000001C00098C2: jnz     short loc_1C00098D0
 * 00000001C00098C4: cmp     [rsp+38h+arg_0], 1
 * 00000001C00098C9: jnz     short loc_1C00098D0
 * 00000001C00098CB: bts     dword ptr [rbx+18h], 7
 * 00000001C00098D0: cmp     dword ptr [rdi+204h], 0
 * 00000001C00098D7: jbe     short loc_1C0009914
 * 00000001C00098D9: xor     r8d, r8d
 * 00000001C00098DC: mov     dl, 1
 * 00000001C00098DE: mov     rcx, rbx; int
 * 00000001C00098E1: call    NVMeControllerInitPart2
 * 00000001C00098E6: test    al, al
 * 00000001C00098E8: jz      short loc_1C0009922
 * 00000001C00098EA: movzx   r8d, word ptr [rbx+118h]
 * 00000001C00098F2: mov     rdx, rbx
 * 00000001C00098F5: movzx   eax, word ptr [rbx+116h]
 * 00000001C00098FC: mov     ecx, 54h ; 'T'
 * 00000001C0009901: imul    r8d, eax
 * 00000001C0009905: mov     r9d, r8d
 * 00000001C0009908: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000990F: nop     dword ptr [rax+rax+00h]
 * 00000001C0009914: xor     edx, edx
 * 00000001C0009916: mov     rcx, rbx; int
 * 00000001C0009919: call    NVMeControllerInitPart3
 * 00000001C000991E: test    al, al
 * 00000001C0009920: jnz     short loc_1C000992E
 * 00000001C0009922: mov     rcx, rbx
 * 00000001C0009925: call    NVMeControllerStartFailureEventLog
 * 00000001C000992A: xor     al, al
 * 00000001C000992C: jmp     short loc_1C0009938
 * 00000001C000992E: mov     rcx, rbx; int
 * 00000001C0009931: call    NVMePowerInitialize
 * 00000001C0009936: mov     al, 1
 * 00000001C0009938: mov     rbx, [rsp+38h+arg_8]
 * 00000001C000993D: add     rsp, 30h
 * 00000001C0009941: pop     rdi
 * 00000001C0009942: retn
 */
