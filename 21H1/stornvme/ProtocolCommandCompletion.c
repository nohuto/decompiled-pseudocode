/*
 * XREFs of ProtocolCommandCompletion @ 0x1C0014880
 * Callers:
 *     <none>
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0001F64 (BuildGetLogPageCommand.c)
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     GetNamespaceId @ 0x1C0004344 (GetNamespaceId.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0004570 (NVMeAllocateDmaBuffer.c)
 */

/*
 * Hex-Rays decompilation failed for ProtocolCommandCompletion @ 0x1C0014880
 * Reason: Hex-Rays returned no pseudocode for 0x1C0014880
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0014880: mov     [rsp+arg_0], rbx
 * 00000001C0014885: mov     [rsp+arg_8], rbp
 * 00000001C001488A: push    rsi
 * 00000001C001488B: push    rdi
 * 00000001C001488C: push    r14
 * 00000001C001488E: sub     rsp, 40h
 * 00000001C0014892: mov     rbp, rcx
 * 00000001C0014895: mov     r14, r8
 * 00000001C0014898: mov     rcx, rdx
 * 00000001C001489B: mov     rbx, rdx
 * 00000001C001489E: call    GetSrbExtension
 * 00000001C00148A3: mov     rsi, rax
 * 00000001C00148A6: test    r8, r8
 * 00000001C00148A9: jz      loc_1C00149FF
 * 00000001C00148AF: cmp     byte ptr [rdx+2], 28h ; '('
 * 00000001C00148B3: jnz     short loc_1C00148BB
 * 00000001C00148B5: mov     rdi, [rdx+40h]
 * 00000001C00148B9: jmp     short loc_1C00148BF
 * 00000001C00148BB: mov     rdi, [rdx+18h]
 * 00000001C00148BF: mov     eax, [r8]
 * 00000001C00148C2: mov     [rdi+40h], eax
 * 00000001C00148C5: mov     eax, [rbp+38h]
 * 00000001C00148C8: test    al, 8
 * 00000001C00148CA: jnz     short loc_1C00148F6
 * 00000001C00148CC: mov     r8, [rsi+1078h]
 * 00000001C00148D3: test    r8, r8
 * 00000001C00148D6: jz      short loc_1C00148F6
 * 00000001C00148D8: mov     rdx, rbp
 * 00000001C00148DB: mov     ecx, 1
 * 00000001C00148E0: call    cs:__imp_StorPortExtendedFunction
 * 00000001C00148E7: nop     dword ptr [rax+rax+00h]
 * 00000001C00148EC: and     qword ptr [rsi+1078h], 0
 * 00000001C00148F4: jmp     short loc_1C00148FD
 * 00000001C00148F6: and     dword ptr [rsi+1078h], 0
 * 00000001C00148FD: cmp     byte ptr [rbx+3], 1
 * 00000001C0014901: jnz     short loc_1C0014913
 * 00000001C0014903: and     dword ptr [rdi+14h], 0
 * 00000001C0014907: mov     dword ptr [rdi+10h], 1
 * 00000001C001490E: jmp     loc_1C0014A03
 * 00000001C0014913: mov     dword ptr [rdi+10h], 2
 * 00000001C001491A: movzx   eax, word ptr [r14+0Eh]
 * 00000001C001491F: mov     [rdi+14h], eax
 * 00000001C0014922: mov     byte ptr [rbx+3], 1
 * 00000001C0014926: cmp     dword ptr [rdi+1Ch], 0
 * 00000001C001492A: jbe     loc_1C0014A03
 * 00000001C0014930: and     [rsp+58h+arg_10], 0
 * 00000001C0014936: lea     r9, [rsp+58h+arg_18]
 * 00000001C001493B: and     [rsp+58h+arg_18], 0
 * 00000001C0014941: lea     r8, [rsp+58h+arg_10]
 * 00000001C0014946: mov     edi, 40h ; '@'
 * 00000001C001494B: mov     rcx, rbp
 * 00000001C001494E: mov     edx, edi
 * 00000001C0014950: call    NVMeAllocateDmaBuffer
 * 00000001C0014955: cmp     [rsp+58h+arg_10], 0
 * 00000001C001495B: jz      loc_1C0014A03
 * 00000001C0014961: cmp     byte ptr [rbx+2], 28h ; '('
 * 00000001C0014965: jnz     short loc_1C0014970
 * 00000001C0014967: mov     eax, [rbx+34h]
 * 00000001C001496A: mov     cl, [rax+rbx+0Ah]
 * 00000001C001496E: jmp     short loc_1C0014973
 * 00000001C0014970: mov     cl, [rbx+7]
 * 00000001C0014973: movzx   edx, cl
 * 00000001C0014976: mov     rcx, rbp
 * 00000001C0014979: call    GetNamespaceId
 * 00000001C001497E: mov     rcx, [rsp+58h+arg_10]
 * 00000001C0014983: xorps   xmm0, xmm0
 * 00000001C0014986: and     [rsp+58h+var_20], 0
 * 00000001C001498B: mov     r9d, edi
 * 00000001C001498E: and     [rsp+58h+var_28], 0
 * 00000001C0014994: mov     r8b, 1
 * 00000001C0014997: mov     [rsp+58h+var_30], eax
 * 00000001C001499B: mov     rdx, rsi
 * 00000001C001499E: movups  xmmword ptr [rcx], xmm0
 * 00000001C00149A1: movups  xmmword ptr [rcx+10h], xmm0
 * 00000001C00149A5: movups  xmmword ptr [rcx+20h], xmm0
 * 00000001C00149A9: movups  xmmword ptr [rcx+30h], xmm0
 * 00000001C00149AD: mov     rax, [rsp+58h+arg_18]
 * 00000001C00149B2: mov     rcx, rbp
 * 00000001C00149B5: mov     [rsp+58h+var_38], rax
 * 00000001C00149BA: call    BuildGetLogPageCommand
 * 00000001C00149BF: or      byte ptr [rsi+109Dh], 4
 * 00000001C00149C6: lea     rax, NVMeGetErrorInfoLogPageCompletion
 * 00000001C00149CD: mov     [rsi+1080h], rax
 * 00000001C00149D4: mov     rdx, rbx
 * 00000001C00149D7: mov     rax, [rsp+58h+arg_10]
 * 00000001C00149DC: mov     rcx, rbp
 * 00000001C00149DF: mov     [rsi+1068h], rax
 * 00000001C00149E6: mov     rax, [rsp+58h+arg_18]
 * 00000001C00149EB: mov     [rsi+1070h], rax
 * 00000001C00149F2: mov     [rsi+1090h], edi
 * 00000001C00149F8: call    ProcessCommand
 * 00000001C00149FD: jmp     short loc_1C0014A0A
 * 00000001C00149FF: mov     byte ptr [rdx+3], 4
 * 00000001C0014A03: or      byte ptr [rsi+109Dh], 8
 * 00000001C0014A0A: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0014A0F: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0014A14: add     rsp, 40h
 * 00000001C0014A18: pop     r14
 * 00000001C0014A1A: pop     rdi
 * 00000001C0014A1B: pop     rsi
 * 00000001C0014A1C: retn
 */
