/*
 * XREFs of KePrepareToDispatchVirtualProcessor @ 0x140519930
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiFlushCurrentRsb @ 0x140A1A740 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KePrepareToDispatchVirtualProcessor @ 0x140519930
 * Reason: Hex-Rays returned no pseudocode for 0x140519930
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140519930: mov     rax, rsp
 * 0000000140519933: mov     [rax+8], rbx
 * 0000000140519937: mov     [rax+10h], rsi
 * 000000014051993B: mov     [rax+18h], rdi
 * 000000014051993F: push    r14
 * 0000000140519941: sub     rsp, 30h
 * 0000000140519945: mov     rbx, gs:20h
 * 000000014051994E: mov     r10, rdx
 * 0000000140519951: movups  xmm0, cs:KiSpeculationFeatures
 * 0000000140519958: mov     rsi, [rsp+38h+arg_20]
 * 000000014051995D: xor     edx, edx
 * 000000014051995F: mov     r14, [rsp+38h+arg_28]
 * 0000000140519964: mov     [r10], dl
 * 0000000140519967: mov     [r8], dl
 * 000000014051996A: mov     [r9], dl
 * 000000014051996D: mov     [rsi], dl
 * 000000014051996F: mov     [r14], rdx
 * 0000000140519972: movdqu  xmmword ptr [rax-18h], xmm0
 * 0000000140519977: cli
 * 0000000140519978: test    cl, cl
 * 000000014051997A: jz      loc_140519A85
 * 0000000140519980: test    dword ptr [rax-18h], 100000h
 * 0000000140519987: jnz     short loc_140519992
 * 0000000140519989: mov     byte ptr [r8], 1
 * 000000014051998D: jmp     loc_140519AB9
 * 0000000140519992: mov     rax, [rbx+8]
 * 0000000140519996: mov     rcx, [rax+220h]
 * 000000014051999D: mov     rdi, [rcx+9E0h]
 * 00000001405199A4: test    rdi, rdi
 * 00000001405199A7: jnz     short loc_1405199AF
 * 00000001405199A9: mov     byte ptr [r8], 1
 * 00000001405199AD: jmp     short loc_1405199E9
 * 00000001405199AF: mov     cl, [rbx+0F8h]
 * 00000001405199B5: test    cl, 8
 * 00000001405199B8: jnz     loc_140519A85
 * 00000001405199BE: test    byte ptr [rbx+6D3h], 1
 * 00000001405199C5: jz      short loc_1405199D0
 * 00000001405199C7: test    cl, 10h
 * 00000001405199CA: jnz     loc_140519A85
 * 00000001405199D0: test    byte ptr [rsp+38h+var_18], 10h
 * 00000001405199D5: jz      short loc_1405199E5
 * 00000001405199D7: test    [rsp+38h+var_18], 1000h
 * 00000001405199DF: jz      loc_140519A85
 * 00000001405199E5: mov     byte ptr [r9], 1
 * 00000001405199E9: movzx   eax, word ptr [rbx+0FEh]
 * 00000001405199F0: test    al, 2
 * 00000001405199F2: jz      short loc_1405199FD
 * 00000001405199F4: xor     ecx, ecx
 * 00000001405199F6: call    KiUpdateStibpPairing
 * 00000001405199FB: jmp     short loc_140519A38
 * 00000001405199FD: mov     al, [rbx+0F8h]
 * 0000000140519A03: test    al, 4
 * 0000000140519A05: jz      short loc_140519A21
 * 0000000140519A07: mov     eax, 1
 * 0000000140519A0C: lea     ecx, [rax+48h]
 * 0000000140519A0F: wrmsr
 * 0000000140519A11: and     byte ptr [rbx+0F8h], 0FBh
 * 0000000140519A18: mov     [r10], al
 * 0000000140519A1B: mov     al, [rbx+0F8h]
 * 0000000140519A21: test    al, 20h
 * 0000000140519A23: jz      short loc_140519A31
 * 0000000140519A25: call    KiFlushCurrentRsb
 * 0000000140519A2A: and     byte ptr [rbx+0F8h], 0DFh
 * 0000000140519A31: mov     [rbx+0F0h], rdi
 * 0000000140519A38: test    [rsp+38h+var_18], 2000000h
 * 0000000140519A40: movzx   edx, byte ptr [rbx+6D0h]
 * 0000000140519A47: mov     al, [rbx+0F8h]
 * 0000000140519A4D: movzx   ecx, byte ptr [rbx+0FBh]
 * 0000000140519A54: mov     [rbx+6D1h], dl
 * 0000000140519A5A: mov     [rbx+6D2h], al
 * 0000000140519A60: jz      short loc_140519A6C
 * 0000000140519A62: test    byte ptr [rbx+6D3h], 1
 * 0000000140519A69: cmovnz  ecx, edx
 * 0000000140519A6C: cmp     [rbx+0FAh], cl
 * 0000000140519A72: jz      short loc_140519AB9
 * 0000000140519A74: movzx   eax, cl
 * 0000000140519A77: mov     [r14], rax
 * 0000000140519A7A: mov     byte ptr [rsi], 1
 * 0000000140519A7D: mov     [rbx+0FAh], cl
 * 0000000140519A83: jmp     short loc_140519AB9
 * 0000000140519A85: mov     al, [rbx+0F8h]
 * 0000000140519A8B: test    al, 4
 * 0000000140519A8D: jz      short loc_140519AA9
 * 0000000140519A8F: mov     eax, 1
 * 0000000140519A94: lea     ecx, [rax+48h]
 * 0000000140519A97: wrmsr
 * 0000000140519A99: and     byte ptr [rbx+0F8h], 0FBh
 * 0000000140519AA0: mov     [r10], al
 * 0000000140519AA3: mov     al, [rbx+0F8h]
 * 0000000140519AA9: test    al, 20h
 * 0000000140519AAB: jz      short loc_140519AB9
 * 0000000140519AAD: call    KiFlushCurrentRsb
 * 0000000140519AB2: and     byte ptr [rbx+0F8h], 0FBh
 * 0000000140519AB9: mov     rbx, [rsp+38h+arg_0]
 * 0000000140519ABE: mov     rsi, [rsp+38h+arg_8]
 * 0000000140519AC3: mov     rdi, [rsp+38h+arg_10]
 * 0000000140519AC8: add     rsp, 30h
 * 0000000140519ACC: pop     r14
 * 0000000140519ACE: retn
 */
