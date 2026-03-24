/*
 * XREFs of NVMeControllerStartFailureEventLog @ 0x1C0009154
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C00091E0 (NVMeHwFindAdapter.c)
 *     NVMeHwPassiveInitialize @ 0x1C0009880 (NVMeHwPassiveInitialize.c)
 *     NVMeControllerInitPart3 @ 0x1C000C9E4 (NVMeControllerInitPart3.c)
 *     NVMeControllerPowerUp @ 0x1C000CDD8 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000D0A0 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0016B90 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     memset @ 0x1C00054C0 (memset.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeControllerStartFailureEventLog @ 0x1C0009154
 * Reason: Hex-Rays returned no pseudocode for 0x1C0009154
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0009154: mov     [rsp-8+arg_8], rbx
 * 00000001C0009159: push    rbp
 * 00000001C000915A: mov     rbp, rsp
 * 00000001C000915D: sub     rsp, 70h
 * 00000001C0009161: xor     edx, edx; Val
 * 00000001C0009163: mov     rbx, rcx
 * 00000001C0009166: lea     rcx, [rbp+var_50]; void *
 * 00000001C000916A: lea     r8d, [rdx+48h]; Size
 * 00000001C000916E: call    memset
 * 00000001C0009173: and     [rbp+var_44], 0
 * 00000001C0009177: lea     rax, [rbx+1Ch]
 * 00000001C000917B: lea     r9, [rbp+arg_0]
 * 00000001C000917F: mov     [rbp+var_20], rax
 * 00000001C0009183: lea     r8, [rbp+var_50]
 * 00000001C0009187: mov     [rbp+arg_0], 48h ; 'H'
 * 00000001C000918E: mov     rdx, rbx
 * 00000001C0009191: mov     [rbp+var_50], 100h
 * 00000001C0009198: mov     ecx, 10h
 * 00000001C000919D: mov     [rbp+var_34], 1
 * 00000001C00091A1: mov     [rbp+var_30], 6
 * 00000001C00091A8: mov     [rbp+var_2C], 2
 * 00000001C00091AF: mov     [rbp+var_28], 4
 * 00000001C00091B6: mov     [rbp+var_4C], 48h ; 'H'
 * 00000001C00091BD: call    cs:__imp_StorPortExtendedFunction
 * 00000001C00091C4: nop     dword ptr [rax+rax+00h]
 * 00000001C00091C9: mov     rbx, [rsp+70h+arg_8]
 * 00000001C00091D1: add     rsp, 70h
 * 00000001C00091D5: pop     rbp
 * 00000001C00091D6: retn
 */
