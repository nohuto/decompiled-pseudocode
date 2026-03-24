/*
 * XREFs of IoReservedQueuesInitialize @ 0x1C000B878
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000C7F0 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 */

/*
 * Hex-Rays decompilation failed for IoReservedQueuesInitialize @ 0x1C000B878
 * Reason: Hex-Rays returned no pseudocode for 0x1C000B878
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000B878: mov     r11, rsp
 * 00000001C000B87B: mov     [r11+8], rbx
 * 00000001C000B87F: mov     [r11+10h], rsi
 * 00000001C000B883: mov     [r11+18h], rdi
 * 00000001C000B887: push    r14
 * 00000001C000B889: sub     rsp, 30h
 * 00000001C000B88D: movzx   eax, word ptr [rcx+32Eh]
 * 00000001C000B894: xor     r14d, r14d
 * 00000001C000B897: mov     rdi, rcx
 * 00000001C000B89A: test    ax, ax
 * 00000001C000B89D: jz      loc_1C000B965
 * 00000001C000B8A3: lea     rbx, [rcx+320h]
 * 00000001C000B8AA: mov     r8d, eax
 * 00000001C000B8AD: mov     rdx, rcx
 * 00000001C000B8B0: shl     r8d, 5
 * 00000001C000B8B4: mov     r9d, 656D764Eh
 * 00000001C000B8BA: mov     [r11-18h], rbx
 * 00000001C000B8BE: xor     ecx, ecx
 * 00000001C000B8C0: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B8C7: nop     dword ptr [rax+rax+00h]
 * 00000001C000B8CC: movzx   r8d, word ptr [rdi+32Eh]
 * 00000001C000B8D4: lea     rsi, [rdi+318h]
 * 00000001C000B8DB: shl     r8d, 5
 * 00000001C000B8DF: mov     r9d, 656D764Eh
 * 00000001C000B8E5: mov     rdx, rdi
 * 00000001C000B8E8: mov     [rsp+38h+var_18], rsi
 * 00000001C000B8ED: xor     ecx, ecx
 * 00000001C000B8EF: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B8F6: nop     dword ptr [rax+rax+00h]
 * 00000001C000B8FB: mov     r8, [rbx]
 * 00000001C000B8FE: test    r8, r8
 * 00000001C000B901: jz      short loc_1C000B949
 * 00000001C000B903: cmp     [rsi], r14
 * 00000001C000B906: jz      short loc_1C000B930
 * 00000001C000B908: movzx   edx, word ptr [rdi+32Eh]
 * 00000001C000B90F: mov     rcx, r8
 * 00000001C000B912: shl     edx, 5
 * 00000001C000B915: call    NVMeZeroMemory
 * 00000001C000B91A: movzx   edx, word ptr [rdi+32Eh]
 * 00000001C000B921: mov     rcx, [rsi]
 * 00000001C000B924: shl     edx, 5
 * 00000001C000B927: call    NVMeZeroMemory
 * 00000001C000B92C: mov     al, 1
 * 00000001C000B92E: jmp     short loc_1C000B967
 * 00000001C000B930: test    r8, r8
 * 00000001C000B933: jz      short loc_1C000B949
 * 00000001C000B935: mov     rdx, rdi
 * 00000001C000B938: mov     ecx, 1
 * 00000001C000B93D: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B944: nop     dword ptr [rax+rax+00h]
 * 00000001C000B949: mov     r8, [rsi]
 * 00000001C000B94C: test    r8, r8
 * 00000001C000B94F: jz      short loc_1C000B965
 * 00000001C000B951: mov     rdx, rdi
 * 00000001C000B954: mov     ecx, 1
 * 00000001C000B959: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B960: nop     dword ptr [rax+rax+00h]
 * 00000001C000B965: xor     al, al
 * 00000001C000B967: mov     rbx, [rsp+38h+arg_0]
 * 00000001C000B96C: mov     rsi, [rsp+38h+arg_8]
 * 00000001C000B971: mov     rdi, [rsp+38h+arg_10]
 * 00000001C000B976: add     rsp, 30h
 * 00000001C000B97A: pop     r14
 * 00000001C000B97C: retn
 */
