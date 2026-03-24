/*
 * XREFs of KiDebugServiceTrap @ 0x14040E5C0
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x140A17E40 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x14040E5C0 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x14040FD40 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x14040E5C0
 * Reason: Hex-Rays returned no pseudocode for 0x14040E5C0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040E5C0: inc     qword ptr [rsp+0]
 * 000000014040E5C4: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014040E5CA: jnz     short loc_14040E5D1
 * 000000014040E5CC: and     dword ptr [rsp+4], 0
 * 000000014040E5D1: sub     rsp, 8
 * 000000014040E5D5: push    rbp
 * 000000014040E5D6: sub     rsp, 158h
 * 000000014040E5DD: lea     rbp, [rsp+168h+var_E8]
 * 000000014040E5E5: mov     byte ptr [rbp-55h], 1
 * 000000014040E5E9: mov     [rbp-50h], rax
 * 000000014040E5ED: mov     [rbp-48h], rcx
 * 000000014040E5F1: mov     [rbp-40h], rdx
 * 000000014040E5F5: mov     [rbp-38h], r8
 * 000000014040E5F9: mov     [rbp-30h], r9
 * 000000014040E5FD: mov     [rbp-28h], r10
 * 000000014040E601: mov     [rbp-20h], r11
 * 000000014040E605: test    byte ptr [rbp+0F0h], 1
 * 000000014040E60C: jnz     short loc_14040E63B
 * 000000014040E60E: lfence
 * 000000014040E611: test    byte ptr gs:278h, 1
 * 000000014040E61A: jnz     short loc_14040E624
 * 000000014040E61C: lfence
 * 000000014040E61F: jmp     loc_14040E87A
 * 000000014040E624: movzx   eax, byte ptr gs:27Ah
 * 000000014040E62D: mov     ecx, 48h ; 'H'
 * 000000014040E632: xor     edx, edx
 * 000000014040E634: wrmsr
 * 000000014040E636: jmp     loc_14040E87A
 * 000000014040E63B: test    cs:KiKvaShadow, 1
 * 000000014040E642: jnz     short loc_14040E647
 * 000000014040E644: swapgs
 * 000000014040E647: lfence
 * 000000014040E64A: mov     r10, gs:188h
 * 000000014040E653: mov     rcx, gs:188h
 * 000000014040E65C: mov     rcx, [rcx+220h]
 * 000000014040E663: mov     rcx, [rcx+9E0h]
 * 000000014040E66A: mov     gs:270h, rcx
 * 000000014040E673: mov     cl, gs:850h
 * 000000014040E67B: mov     gs:851h, cl
 * 000000014040E683: mov     cl, gs:278h
 * 000000014040E68B: mov     gs:852h, cl
 * 000000014040E693: movzx   eax, byte ptr gs:27Bh
 * 000000014040E69C: cmp     gs:27Ah, al
 * 000000014040E6A4: jz      short loc_14040E6B7
 * 000000014040E6A6: mov     gs:27Ah, al
 * 000000014040E6AE: mov     ecx, 48h ; 'H'
 * 000000014040E6B3: xor     edx, edx
 * 000000014040E6B5: wrmsr
 * 000000014040E6B7: movzx   edx, byte ptr gs:278h
 * 000000014040E6C0: test    edx, 8
 * 000000014040E6C6: jz      short loc_14040E6DF
 * 000000014040E6C8: mov     eax, 1
 * 000000014040E6CD: xor     edx, edx
 * 000000014040E6CF: mov     ecx, 49h ; 'I'
 * 000000014040E6D4: wrmsr
 * 000000014040E6D6: movzx   edx, byte ptr gs:278h
 * 000000014040E6DF: test    edx, 2
 * 000000014040E6E5: jz      loc_14040E810
 * 000000014040E6EB: call    loc_14040E7FE
 * 000000014040E6F0: add     rsp, 8
 * 000000014040E6F4: call    loc_14040E807
 * 000000014040E6F9: add     rsp, 8
 * 000000014040E6FD: call    loc_14040E6F0
 * 000000014040E702: add     rsp, 8
 * 000000014040E706: call    loc_14040E6F9
 * 000000014040E70B: add     rsp, 8
 * 000000014040E70F: call    loc_14040E702
 * 000000014040E714: add     rsp, 8
 * 000000014040E718: call    loc_14040E70B
 * 000000014040E71D: add     rsp, 8
 * 000000014040E721: call    loc_14040E714
 * 000000014040E726: add     rsp, 8
 * 000000014040E72A: call    loc_14040E71D
 * 000000014040E72F: add     rsp, 8
 * 000000014040E733: call    loc_14040E726
 * 000000014040E738: add     rsp, 8
 * 000000014040E73C: call    loc_14040E72F
 * 000000014040E741: add     rsp, 8
 * 000000014040E745: call    loc_14040E738
 * 000000014040E74A: add     rsp, 8
 * 000000014040E74E: call    loc_14040E741
 * 000000014040E753: add     rsp, 8
 * 000000014040E757: call    loc_14040E74A
 * 000000014040E75C: add     rsp, 8
 * 000000014040E760: call    loc_14040E753
 * 000000014040E765: add     rsp, 8
 * 000000014040E769: call    loc_14040E75C
 * 000000014040E76E: add     rsp, 8
 * 000000014040E772: call    loc_14040E765
 * 000000014040E777: add     rsp, 8
 * 000000014040E77B: call    loc_14040E76E
 * 000000014040E780: add     rsp, 8
 * 000000014040E784: call    loc_14040E777
 * 000000014040E789: add     rsp, 8
 * 000000014040E78D: call    loc_14040E780
 * 000000014040E792: add     rsp, 8
 * 000000014040E796: call    loc_14040E789
 * 000000014040E79B: add     rsp, 8
 * 000000014040E79F: call    loc_14040E792
 * 000000014040E7A4: add     rsp, 8
 * 000000014040E7A8: call    loc_14040E79B
 * 000000014040E7AD: add     rsp, 8
 * 000000014040E7B1: call    loc_14040E7A4
 * 000000014040E7B6: add     rsp, 8
 * 000000014040E7BA: call    loc_14040E7AD
 * 000000014040E7BF: add     rsp, 8
 * 000000014040E7C3: call    loc_14040E7B6
 * 000000014040E7C8: add     rsp, 8
 * 000000014040E7CC: call    loc_14040E7BF
 * 000000014040E7D1: add     rsp, 8
 * 000000014040E7D5: call    loc_14040E7C8
 * 000000014040E7DA: add     rsp, 8
 * 000000014040E7DE: call    loc_14040E7D1
 * 000000014040E7E3: add     rsp, 8
 * 000000014040E7E7: call    loc_14040E7DA
 * 000000014040E7EC: add     rsp, 8
 * 000000014040E7F0: call    loc_14040E7E3
 * 000000014040E7F5: add     rsp, 8
 * 000000014040E7F9: call    loc_14040E7EC
 * 000000014040E7FE: add     rsp, 8
 * 000000014040E802: call    loc_14040E7F5
 * 000000014040E807: add     rsp, 8
 * 000000014040E80B: mov     eax, 0DADAh
 * 000000014040E810: lfence
 * 000000014040E813: mov     byte ptr gs:853h, 0
 * 000000014040E81C: test    byte ptr [r10+3], 80h
 * 000000014040E821: jz      short loc_14040E865
 * 000000014040E823: mov     ecx, 0C0000102h
 * 000000014040E828: rdmsr
 * 000000014040E82A: shl     rdx, 20h
 * 000000014040E82E: or      rax, rdx
 * 000000014040E831: cmp     rax, cs:MmUserProbeAddress
 * 000000014040E838: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040E840: cmp     [r10+0F0h], rax
 * 000000014040E847: jz      short loc_14040E865
 * 000000014040E849: mov     rdx, [r10+1F0h]
 * 000000014040E850: bts     dword ptr [r10+74h], 8
 * 000000014040E856: dec     word ptr [r10+1E6h]
 * 000000014040E85E: mov     [rdx+80h], rax
 * 000000014040E865: test    byte ptr [r10+3], 3
 * 000000014040E86A: mov     word ptr [rbp+80h], 0
 * 000000014040E873: jz      short loc_14040E87A
 * 000000014040E875: call    KiSaveDebugRegisterState
 * 000000014040E87A: cld
 * 000000014040E87B: stmxcsr dword ptr [rbp-54h]
 * 000000014040E87F: ldmxcsr dword ptr gs:180h
 * 000000014040E888: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014040E88C: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014040E890: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014040E894: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014040E898: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014040E89C: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014040E8A0: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040E8A7: jz      short loc_14040E8B5
 * 000000014040E8A9: test    byte ptr [rbp+0F0h], 1
 * 000000014040E8B0: jz      short loc_14040E8B5
 * 000000014040E8B2: stac
 * 000000014040E8B5: test    dword ptr [rbp+0F8h], 200h
 * 000000014040E8BF: jz      short loc_14040E8C2
 * 000000014040E8C1: sti
 * 000000014040E8C2: mov     ecx, 80000003h
 * 000000014040E8C7: mov     edx, 1
 * 000000014040E8CC: mov     r9, [rbp-50h]
 * 000000014040E8D0: mov     r8, [rbp+0E8h]
 * 000000014040E8D7: call    KiExceptionDispatch
 * 000000014040E8DC: nop
 * 000000014040E8DD: retn
 */
