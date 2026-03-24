/*
 * XREFs of AdminQueuesFreeResources @ 0x1C0009CD8
 * Callers:
 *     NVMeControllerRemove @ 0x1C000CE54 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000D258 (NVMeControllerStop.c)
 * Callees:
 *     memset @ 0x1C0005500 (memset.c)
 */

/*
 * Hex-Rays decompilation failed for AdminQueuesFreeResources @ 0x1C0009CD8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0009CD8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0009CD8: mov     [rsp+arg_0], rbx
 * 00000001C0009CDD: push    rdi
 * 00000001C0009CDE: sub     rsp, 20h
 * 00000001C0009CE2: cmp     byte ptr [rcx+10h], 0
 * 00000001C0009CE6: mov     rbx, rcx
 * 00000001C0009CE9: jnz     loc_1C0009D8E
 * 00000001C0009CEF: mov     r8, [rcx+138h]
 * 00000001C0009CF6: test    r8, r8
 * 00000001C0009CF9: jz      short loc_1C0009D0F
 * 00000001C0009CFB: mov     rdx, rcx
 * 00000001C0009CFE: mov     ecx, 1
 * 00000001C0009D03: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0009D0A: nop     dword ptr [rax+rax+00h]
 * 00000001C0009D0F: and     qword ptr [rbx+138h], 0
 * 00000001C0009D17: mov     r8, [rbx+140h]
 * 00000001C0009D1E: test    r8, r8
 * 00000001C0009D21: jz      short loc_1C0009D37
 * 00000001C0009D23: mov     rdx, rbx
 * 00000001C0009D26: mov     ecx, 1
 * 00000001C0009D2B: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0009D32: nop     dword ptr [rax+rax+00h]
 * 00000001C0009D37: and     qword ptr [rbx+140h], 0
 * 00000001C0009D3F: and     dword ptr [rbx+338h], 0
 * 00000001C0009D46: mov     rcx, [rbx+398h]; void *
 * 00000001C0009D4D: test    rcx, rcx
 * 00000001C0009D50: jz      short loc_1C0009D5F
 * 00000001C0009D52: xor     edx, edx; Val
 * 00000001C0009D54: mov     r8d, 10A0h; Size
 * 00000001C0009D5A: call    memset
 * 00000001C0009D5F: add     rbx, 408h
 * 00000001C0009D66: mov     edi, 6
 * 00000001C0009D6B: and     dword ptr [rbx-60h], 0
 * 00000001C0009D6F: mov     rcx, [rbx]; void *
 * 00000001C0009D72: test    rcx, rcx
 * 00000001C0009D75: jz      short loc_1C0009D84
 * 00000001C0009D77: xor     edx, edx; Val
 * 00000001C0009D79: mov     r8d, 10A0h; Size
 * 00000001C0009D7F: call    memset
 * 00000001C0009D84: add     rbx, 70h ; 'p'
 * 00000001C0009D88: sub     rdi, 1
 * 00000001C0009D8C: jnz     short loc_1C0009D6B
 * 00000001C0009D8E: mov     rbx, [rsp+28h+arg_0]
 * 00000001C0009D93: add     rsp, 20h
 * 00000001C0009D97: pop     rdi
 * 00000001C0009D98: retn
 */
