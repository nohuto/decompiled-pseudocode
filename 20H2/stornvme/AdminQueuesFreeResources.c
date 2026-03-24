/*
 * XREFs of AdminQueuesFreeResources @ 0x1C0009C88
 * Callers:
 *     NVMeControllerRemove @ 0x1C000CE6C (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000D270 (NVMeControllerStop.c)
 * Callees:
 *     memset @ 0x1C00054C0 (memset.c)
 */

/*
 * Hex-Rays decompilation failed for AdminQueuesFreeResources @ 0x1C0009C88
 * Reason: Hex-Rays returned no pseudocode for 0x1C0009C88
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0009C88: mov     [rsp+arg_0], rbx
 * 00000001C0009C8D: push    rdi
 * 00000001C0009C8E: sub     rsp, 20h
 * 00000001C0009C92: cmp     byte ptr [rcx+10h], 0
 * 00000001C0009C96: mov     rbx, rcx
 * 00000001C0009C99: jnz     loc_1C0009D3E
 * 00000001C0009C9F: mov     r8, [rcx+138h]
 * 00000001C0009CA6: test    r8, r8
 * 00000001C0009CA9: jz      short loc_1C0009CBF
 * 00000001C0009CAB: mov     rdx, rcx
 * 00000001C0009CAE: mov     ecx, 1
 * 00000001C0009CB3: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0009CBA: nop     dword ptr [rax+rax+00h]
 * 00000001C0009CBF: and     qword ptr [rbx+138h], 0
 * 00000001C0009CC7: mov     r8, [rbx+140h]
 * 00000001C0009CCE: test    r8, r8
 * 00000001C0009CD1: jz      short loc_1C0009CE7
 * 00000001C0009CD3: mov     rdx, rbx
 * 00000001C0009CD6: mov     ecx, 1
 * 00000001C0009CDB: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0009CE2: nop     dword ptr [rax+rax+00h]
 * 00000001C0009CE7: and     qword ptr [rbx+140h], 0
 * 00000001C0009CEF: and     dword ptr [rbx+338h], 0
 * 00000001C0009CF6: mov     rcx, [rbx+398h]; void *
 * 00000001C0009CFD: test    rcx, rcx
 * 00000001C0009D00: jz      short loc_1C0009D0F
 * 00000001C0009D02: xor     edx, edx; Val
 * 00000001C0009D04: mov     r8d, 10A0h; Size
 * 00000001C0009D0A: call    memset
 * 00000001C0009D0F: add     rbx, 408h
 * 00000001C0009D16: mov     edi, 6
 * 00000001C0009D1B: and     dword ptr [rbx-60h], 0
 * 00000001C0009D1F: mov     rcx, [rbx]; void *
 * 00000001C0009D22: test    rcx, rcx
 * 00000001C0009D25: jz      short loc_1C0009D34
 * 00000001C0009D27: xor     edx, edx; Val
 * 00000001C0009D29: mov     r8d, 10A0h; Size
 * 00000001C0009D2F: call    memset
 * 00000001C0009D34: add     rbx, 70h ; 'p'
 * 00000001C0009D38: sub     rdi, 1
 * 00000001C0009D3C: jnz     short loc_1C0009D1B
 * 00000001C0009D3E: mov     rbx, [rsp+28h+arg_0]
 * 00000001C0009D43: add     rsp, 20h
 * 00000001C0009D47: pop     rdi
 * 00000001C0009D48: retn
 */
