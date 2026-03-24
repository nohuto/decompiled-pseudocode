/*
 * XREFs of IoReservedQueuesInitialize @ 0x1C000B828
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000C7A0 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 */

/*
 * Hex-Rays decompilation failed for IoReservedQueuesInitialize @ 0x1C000B828
 * Reason: Hex-Rays returned no pseudocode for 0x1C000B828
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000B828: mov     r11, rsp
 * 00000001C000B82B: mov     [r11+8], rbx
 * 00000001C000B82F: mov     [r11+10h], rsi
 * 00000001C000B833: mov     [r11+18h], rdi
 * 00000001C000B837: push    r14
 * 00000001C000B839: sub     rsp, 30h
 * 00000001C000B83D: movzx   eax, word ptr [rcx+32Eh]
 * 00000001C000B844: xor     r14d, r14d
 * 00000001C000B847: mov     rdi, rcx
 * 00000001C000B84A: test    ax, ax
 * 00000001C000B84D: jz      loc_1C000B915
 * 00000001C000B853: lea     rbx, [rcx+320h]
 * 00000001C000B85A: mov     r8d, eax
 * 00000001C000B85D: mov     rdx, rcx
 * 00000001C000B860: shl     r8d, 5
 * 00000001C000B864: mov     r9d, 656D764Eh
 * 00000001C000B86A: mov     [r11-18h], rbx
 * 00000001C000B86E: xor     ecx, ecx
 * 00000001C000B870: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B877: nop     dword ptr [rax+rax+00h]
 * 00000001C000B87C: movzx   r8d, word ptr [rdi+32Eh]
 * 00000001C000B884: lea     rsi, [rdi+318h]
 * 00000001C000B88B: shl     r8d, 5
 * 00000001C000B88F: mov     r9d, 656D764Eh
 * 00000001C000B895: mov     rdx, rdi
 * 00000001C000B898: mov     [rsp+38h+var_18], rsi
 * 00000001C000B89D: xor     ecx, ecx
 * 00000001C000B89F: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B8A6: nop     dword ptr [rax+rax+00h]
 * 00000001C000B8AB: mov     r8, [rbx]
 * 00000001C000B8AE: test    r8, r8
 * 00000001C000B8B1: jz      short loc_1C000B8F9
 * 00000001C000B8B3: cmp     [rsi], r14
 * 00000001C000B8B6: jz      short loc_1C000B8E0
 * 00000001C000B8B8: movzx   edx, word ptr [rdi+32Eh]
 * 00000001C000B8BF: mov     rcx, r8
 * 00000001C000B8C2: shl     edx, 5
 * 00000001C000B8C5: call    NVMeZeroMemory
 * 00000001C000B8CA: movzx   edx, word ptr [rdi+32Eh]
 * 00000001C000B8D1: mov     rcx, [rsi]
 * 00000001C000B8D4: shl     edx, 5
 * 00000001C000B8D7: call    NVMeZeroMemory
 * 00000001C000B8DC: mov     al, 1
 * 00000001C000B8DE: jmp     short loc_1C000B917
 * 00000001C000B8E0: test    r8, r8
 * 00000001C000B8E3: jz      short loc_1C000B8F9
 * 00000001C000B8E5: mov     rdx, rdi
 * 00000001C000B8E8: mov     ecx, 1
 * 00000001C000B8ED: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B8F4: nop     dword ptr [rax+rax+00h]
 * 00000001C000B8F9: mov     r8, [rsi]
 * 00000001C000B8FC: test    r8, r8
 * 00000001C000B8FF: jz      short loc_1C000B915
 * 00000001C000B901: mov     rdx, rdi
 * 00000001C000B904: mov     ecx, 1
 * 00000001C000B909: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B910: nop     dword ptr [rax+rax+00h]
 * 00000001C000B915: xor     al, al
 * 00000001C000B917: mov     rbx, [rsp+38h+arg_0]
 * 00000001C000B91C: mov     rsi, [rsp+38h+arg_8]
 * 00000001C000B921: mov     rdi, [rsp+38h+arg_10]
 * 00000001C000B926: add     rsp, 30h
 * 00000001C000B92A: pop     r14
 * 00000001C000B92C: retn
 */
