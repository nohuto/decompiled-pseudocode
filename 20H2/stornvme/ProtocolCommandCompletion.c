/*
 * XREFs of ProtocolCommandCompletion @ 0x1C0014800
 * Callers:
 *     <none>
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0001F64 (BuildGetLogPageCommand.c)
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     GetNamespaceId @ 0x1C0004344 (GetNamespaceId.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000456C (NVMeAllocateDmaBuffer.c)
 */

/*
 * Hex-Rays decompilation failed for ProtocolCommandCompletion @ 0x1C0014800
 * Reason: Hex-Rays returned no pseudocode for 0x1C0014800
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0014800: mov     [rsp+arg_0], rbx
 * 00000001C0014805: mov     [rsp+arg_8], rbp
 * 00000001C001480A: push    rsi
 * 00000001C001480B: push    rdi
 * 00000001C001480C: push    r14
 * 00000001C001480E: sub     rsp, 40h
 * 00000001C0014812: mov     rbp, rcx
 * 00000001C0014815: mov     r14, r8
 * 00000001C0014818: mov     rcx, rdx
 * 00000001C001481B: mov     rbx, rdx
 * 00000001C001481E: call    GetSrbExtension
 * 00000001C0014823: mov     rsi, rax
 * 00000001C0014826: test    r8, r8
 * 00000001C0014829: jz      loc_1C001497F
 * 00000001C001482F: cmp     byte ptr [rdx+2], 28h ; '('
 * 00000001C0014833: jnz     short loc_1C001483B
 * 00000001C0014835: mov     rdi, [rdx+40h]
 * 00000001C0014839: jmp     short loc_1C001483F
 * 00000001C001483B: mov     rdi, [rdx+18h]
 * 00000001C001483F: mov     eax, [r8]
 * 00000001C0014842: mov     [rdi+40h], eax
 * 00000001C0014845: mov     eax, [rbp+38h]
 * 00000001C0014848: test    al, 8
 * 00000001C001484A: jnz     short loc_1C0014876
 * 00000001C001484C: mov     r8, [rsi+1078h]
 * 00000001C0014853: test    r8, r8
 * 00000001C0014856: jz      short loc_1C0014876
 * 00000001C0014858: mov     rdx, rbp
 * 00000001C001485B: mov     ecx, 1
 * 00000001C0014860: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0014867: nop     dword ptr [rax+rax+00h]
 * 00000001C001486C: and     qword ptr [rsi+1078h], 0
 * 00000001C0014874: jmp     short loc_1C001487D
 * 00000001C0014876: and     dword ptr [rsi+1078h], 0
 * 00000001C001487D: cmp     byte ptr [rbx+3], 1
 * 00000001C0014881: jnz     short loc_1C0014893
 * 00000001C0014883: and     dword ptr [rdi+14h], 0
 * 00000001C0014887: mov     dword ptr [rdi+10h], 1
 * 00000001C001488E: jmp     loc_1C0014983
 * 00000001C0014893: mov     dword ptr [rdi+10h], 2
 * 00000001C001489A: movzx   eax, word ptr [r14+0Eh]
 * 00000001C001489F: mov     [rdi+14h], eax
 * 00000001C00148A2: mov     byte ptr [rbx+3], 1
 * 00000001C00148A6: cmp     dword ptr [rdi+1Ch], 0
 * 00000001C00148AA: jbe     loc_1C0014983
 * 00000001C00148B0: and     [rsp+58h+arg_10], 0
 * 00000001C00148B6: lea     r9, [rsp+58h+arg_18]
 * 00000001C00148BB: and     [rsp+58h+arg_18], 0
 * 00000001C00148C1: lea     r8, [rsp+58h+arg_10]
 * 00000001C00148C6: mov     edi, 40h ; '@'
 * 00000001C00148CB: mov     rcx, rbp
 * 00000001C00148CE: mov     edx, edi
 * 00000001C00148D0: call    NVMeAllocateDmaBuffer
 * 00000001C00148D5: cmp     [rsp+58h+arg_10], 0
 * 00000001C00148DB: jz      loc_1C0014983
 * 00000001C00148E1: cmp     byte ptr [rbx+2], 28h ; '('
 * 00000001C00148E5: jnz     short loc_1C00148F0
 * 00000001C00148E7: mov     eax, [rbx+34h]
 * 00000001C00148EA: mov     cl, [rax+rbx+0Ah]
 * 00000001C00148EE: jmp     short loc_1C00148F3
 * 00000001C00148F0: mov     cl, [rbx+7]
 * 00000001C00148F3: movzx   edx, cl
 * 00000001C00148F6: mov     rcx, rbp
 * 00000001C00148F9: call    GetNamespaceId
 * 00000001C00148FE: mov     rcx, [rsp+58h+arg_10]
 * 00000001C0014903: xorps   xmm0, xmm0
 * 00000001C0014906: and     [rsp+58h+var_20], 0
 * 00000001C001490B: mov     r9d, edi
 * 00000001C001490E: and     [rsp+58h+var_28], 0
 * 00000001C0014914: mov     r8b, 1
 * 00000001C0014917: mov     [rsp+58h+var_30], eax
 * 00000001C001491B: mov     rdx, rsi
 * 00000001C001491E: movups  xmmword ptr [rcx], xmm0
 * 00000001C0014921: movups  xmmword ptr [rcx+10h], xmm0
 * 00000001C0014925: movups  xmmword ptr [rcx+20h], xmm0
 * 00000001C0014929: movups  xmmword ptr [rcx+30h], xmm0
 * 00000001C001492D: mov     rax, [rsp+58h+arg_18]
 * 00000001C0014932: mov     rcx, rbp
 * 00000001C0014935: mov     [rsp+58h+var_38], rax
 * 00000001C001493A: call    BuildGetLogPageCommand
 * 00000001C001493F: or      byte ptr [rsi+109Dh], 4
 * 00000001C0014946: lea     rax, NVMeGetErrorInfoLogPageCompletion
 * 00000001C001494D: mov     [rsi+1080h], rax
 * 00000001C0014954: mov     rdx, rbx
 * 00000001C0014957: mov     rax, [rsp+58h+arg_10]
 * 00000001C001495C: mov     rcx, rbp
 * 00000001C001495F: mov     [rsi+1068h], rax
 * 00000001C0014966: mov     rax, [rsp+58h+arg_18]
 * 00000001C001496B: mov     [rsi+1070h], rax
 * 00000001C0014972: mov     [rsi+1090h], edi
 * 00000001C0014978: call    ProcessCommand
 * 00000001C001497D: jmp     short loc_1C001498A
 * 00000001C001497F: mov     byte ptr [rdx+3], 4
 * 00000001C0014983: or      byte ptr [rsi+109Dh], 8
 * 00000001C001498A: mov     rbx, [rsp+58h+arg_0]
 * 00000001C001498F: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0014994: add     rsp, 40h
 * 00000001C0014998: pop     r14
 * 00000001C001499A: pop     rdi
 * 00000001C001499B: pop     rsi
 * 00000001C001499C: retn
 */
