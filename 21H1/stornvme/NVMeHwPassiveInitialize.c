/*
 * XREFs of NVMeHwPassiveInitialize @ 0x1C00098D0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C00091A4 (NVMeControllerStartFailureEventLog.c)
 *     NVMeControllerInitPart2 @ 0x1C000C7F0 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart3 @ 0x1C000CA34 (NVMeControllerInitPart3.c)
 *     NVMePowerInitialize @ 0x1C000E86C (NVMePowerInitialize.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeHwPassiveInitialize @ 0x1C00098D0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00098D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00098D0: mov     [rsp+arg_8], rbx
 * 00000001C00098D5: push    rdi
 * 00000001C00098D6: sub     rsp, 30h
 * 00000001C00098DA: mov     rdi, [rcx+648h]
 * 00000001C00098E1: lea     rax, [rsp+38h+arg_0]
 * 00000001C00098E6: and     [rsp+38h+arg_0], 0
 * 00000001C00098EB: lea     r9, unk_1C001E578
 * 00000001C00098F2: xor     r8d, r8d
 * 00000001C00098F5: mov     [rsp+38h+var_18], rax
 * 00000001C00098FA: mov     rbx, rcx
 * 00000001C00098FD: mov     rdx, rcx
 * 00000001C0009900: lea     ecx, [r8+37h]
 * 00000001C0009904: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000990B: nop     dword ptr [rax+rax+00h]
 * 00000001C0009910: test    eax, eax
 * 00000001C0009912: jnz     short loc_1C0009920
 * 00000001C0009914: cmp     [rsp+38h+arg_0], 1
 * 00000001C0009919: jnz     short loc_1C0009920
 * 00000001C000991B: bts     dword ptr [rbx+18h], 7
 * 00000001C0009920: cmp     dword ptr [rdi+204h], 0
 * 00000001C0009927: jbe     short loc_1C0009964
 * 00000001C0009929: xor     r8d, r8d
 * 00000001C000992C: mov     dl, 1
 * 00000001C000992E: mov     rcx, rbx; int
 * 00000001C0009931: call    NVMeControllerInitPart2
 * 00000001C0009936: test    al, al
 * 00000001C0009938: jz      short loc_1C0009972
 * 00000001C000993A: movzx   r8d, word ptr [rbx+118h]
 * 00000001C0009942: mov     rdx, rbx
 * 00000001C0009945: movzx   eax, word ptr [rbx+116h]
 * 00000001C000994C: mov     ecx, 54h ; 'T'
 * 00000001C0009951: imul    r8d, eax
 * 00000001C0009955: mov     r9d, r8d
 * 00000001C0009958: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000995F: nop     dword ptr [rax+rax+00h]
 * 00000001C0009964: xor     edx, edx
 * 00000001C0009966: mov     rcx, rbx; int
 * 00000001C0009969: call    NVMeControllerInitPart3
 * 00000001C000996E: test    al, al
 * 00000001C0009970: jnz     short loc_1C000997E
 * 00000001C0009972: mov     rcx, rbx
 * 00000001C0009975: call    NVMeControllerStartFailureEventLog
 * 00000001C000997A: xor     al, al
 * 00000001C000997C: jmp     short loc_1C0009988
 * 00000001C000997E: mov     rcx, rbx; int
 * 00000001C0009981: call    NVMePowerInitialize
 * 00000001C0009986: mov     al, 1
 * 00000001C0009988: mov     rbx, [rsp+38h+arg_8]
 * 00000001C000998D: add     rsp, 30h
 * 00000001C0009991: pop     rdi
 * 00000001C0009992: retn
 */
