/*
 * XREFs of KiRaiseSecurityCheckFailure @ 0x140407500
 * Callers:
 *     KiRaiseSecurityCheckFailureShadow @ 0x140A11D40 (KiRaiseSecurityCheckFailureShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403F7620 (KiSaveDebugRegisterState.c)
 *     KiRaiseSecurityCheckFailure @ 0x140407500 (KiRaiseSecurityCheckFailure.c)
 *     KiFastFailDispatch @ 0x1404093C0 (KiFastFailDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseSecurityCheckFailure @ 0x140407500
 * Reason: Hex-Rays returned no pseudocode for 0x140407500
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140407500: sub     qword ptr [rsp+0], 2
 * 0000000140407505: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014040750B: jnz     short loc_140407512
 * 000000014040750D: and     dword ptr [rsp+4], 0
 * 0000000140407512: sub     rsp, 8
 * 0000000140407516: push    rbp
 * 0000000140407517: sub     rsp, 158h
 * 000000014040751E: lea     rbp, [rsp+168h+var_E8]
 * 0000000140407526: mov     byte ptr [rbp-55h], 1
 * 000000014040752A: mov     [rbp-50h], rax
 * 000000014040752E: mov     [rbp-48h], rcx
 * 0000000140407532: mov     [rbp-40h], rdx
 * 0000000140407536: mov     [rbp-38h], r8
 * 000000014040753A: mov     [rbp-30h], r9
 * 000000014040753E: mov     [rbp-28h], r10
 * 0000000140407542: mov     [rbp-20h], r11
 * 0000000140407546: test    byte ptr [rbp+0F0h], 1
 * 000000014040754D: jnz     short loc_14040757C
 * 000000014040754F: lfence
 * 0000000140407552: test    byte ptr gs:278h, 1
 * 000000014040755B: jnz     short loc_140407565
 * 000000014040755D: lfence
 * 0000000140407560: jmp     loc_1404077C1
 * 0000000140407565: movzx   eax, byte ptr gs:27Ah
 * 000000014040756E: mov     ecx, 48h ; 'H'
 * 0000000140407573: xor     edx, edx
 * 0000000140407575: wrmsr
 * 0000000140407577: jmp     loc_1404077C1
 * 000000014040757C: test    cs:KiKvaShadow, 1
 * 0000000140407583: jnz     short loc_140407588
 * 0000000140407585: swapgs
 * 0000000140407588: lfence
 * 000000014040758B: mov     r10, gs:188h
 * 0000000140407594: mov     rcx, gs:188h
 * 000000014040759D: mov     rcx, [rcx+220h]
 * 00000001404075A4: mov     rcx, [rcx+9E0h]
 * 00000001404075AB: mov     gs:270h, rcx
 * 00000001404075B4: mov     cl, gs:850h
 * 00000001404075BC: mov     gs:851h, cl
 * 00000001404075C4: mov     cl, gs:278h
 * 00000001404075CC: mov     gs:852h, cl
 * 00000001404075D4: movzx   eax, byte ptr gs:27Bh
 * 00000001404075DD: cmp     gs:27Ah, al
 * 00000001404075E5: jz      short loc_1404075F8
 * 00000001404075E7: mov     gs:27Ah, al
 * 00000001404075EF: mov     ecx, 48h ; 'H'
 * 00000001404075F4: xor     edx, edx
 * 00000001404075F6: wrmsr
 * 00000001404075F8: movzx   edx, byte ptr gs:278h
 * 0000000140407601: test    edx, 8
 * 0000000140407607: jz      short loc_14040761C
 * 0000000140407609: mov     eax, 1
 * 000000014040760E: xor     edx, edx
 * 0000000140407610: mov     ecx, 49h ; 'I'
 * 0000000140407615: wrmsr
 * 0000000140407617: jmp     loc_14040775A
 * 000000014040761C: test    edx, 2
 * 0000000140407622: jz      loc_140407757
 * 0000000140407628: test    byte ptr gs:279h, 4
 * 0000000140407631: jnz     loc_140407757
 * 0000000140407637: call    loc_14040774A
 * 000000014040763C: add     rsp, 8
 * 0000000140407640: call    loc_140407753
 * 0000000140407645: add     rsp, 8
 * 0000000140407649: call    loc_14040763C
 * 000000014040764E: add     rsp, 8
 * 0000000140407652: call    loc_140407645
 * 0000000140407657: add     rsp, 8
 * 000000014040765B: call    loc_14040764E
 * 0000000140407660: add     rsp, 8
 * 0000000140407664: call    loc_140407657
 * 0000000140407669: add     rsp, 8
 * 000000014040766D: call    loc_140407660
 * 0000000140407672: add     rsp, 8
 * 0000000140407676: call    loc_140407669
 * 000000014040767B: add     rsp, 8
 * 000000014040767F: call    loc_140407672
 * 0000000140407684: add     rsp, 8
 * 0000000140407688: call    loc_14040767B
 * 000000014040768D: add     rsp, 8
 * 0000000140407691: call    loc_140407684
 * 0000000140407696: add     rsp, 8
 * 000000014040769A: call    loc_14040768D
 * 000000014040769F: add     rsp, 8
 * 00000001404076A3: call    loc_140407696
 * 00000001404076A8: add     rsp, 8
 * 00000001404076AC: call    loc_14040769F
 * 00000001404076B1: add     rsp, 8
 * 00000001404076B5: call    loc_1404076A8
 * 00000001404076BA: add     rsp, 8
 * 00000001404076BE: call    loc_1404076B1
 * 00000001404076C3: add     rsp, 8
 * 00000001404076C7: call    loc_1404076BA
 * 00000001404076CC: add     rsp, 8
 * 00000001404076D0: call    loc_1404076C3
 * 00000001404076D5: add     rsp, 8
 * 00000001404076D9: call    loc_1404076CC
 * 00000001404076DE: add     rsp, 8
 * 00000001404076E2: call    loc_1404076D5
 * 00000001404076E7: add     rsp, 8
 * 00000001404076EB: call    loc_1404076DE
 * 00000001404076F0: add     rsp, 8
 * 00000001404076F4: call    loc_1404076E7
 * 00000001404076F9: add     rsp, 8
 * 00000001404076FD: call    loc_1404076F0
 * 0000000140407702: add     rsp, 8
 * 0000000140407706: call    loc_1404076F9
 * 000000014040770B: add     rsp, 8
 * 000000014040770F: call    loc_140407702
 * 0000000140407714: add     rsp, 8
 * 0000000140407718: call    loc_14040770B
 * 000000014040771D: add     rsp, 8
 * 0000000140407721: call    loc_140407714
 * 0000000140407726: add     rsp, 8
 * 000000014040772A: call    loc_14040771D
 * 000000014040772F: add     rsp, 8
 * 0000000140407733: call    loc_140407726
 * 0000000140407738: add     rsp, 8
 * 000000014040773C: call    loc_14040772F
 * 0000000140407741: add     rsp, 8
 * 0000000140407745: call    loc_140407738
 * 000000014040774A: add     rsp, 8
 * 000000014040774E: call    loc_140407741
 * 0000000140407753: add     rsp, 8
 * 0000000140407757: lfence
 * 000000014040775A: mov     byte ptr gs:853h, 0
 * 0000000140407763: test    byte ptr [r10+3], 80h
 * 0000000140407768: jz      short loc_1404077AC
 * 000000014040776A: mov     ecx, 0C0000102h
 * 000000014040776F: rdmsr
 * 0000000140407771: shl     rdx, 20h
 * 0000000140407775: or      rax, rdx
 * 0000000140407778: cmp     rax, cs:MmUserProbeAddress
 * 000000014040777F: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140407787: cmp     [r10+0F0h], rax
 * 000000014040778E: jz      short loc_1404077AC
 * 0000000140407790: mov     rdx, [r10+1F0h]
 * 0000000140407797: bts     dword ptr [r10+74h], 8
 * 000000014040779D: dec     word ptr [r10+1E6h]
 * 00000001404077A5: mov     [rdx+80h], rax
 * 00000001404077AC: test    byte ptr [r10+3], 3
 * 00000001404077B1: mov     word ptr [rbp+80h], 0
 * 00000001404077BA: jz      short loc_1404077C1
 * 00000001404077BC: call    KiSaveDebugRegisterState
 * 00000001404077C1: cld
 * 00000001404077C2: stmxcsr dword ptr [rbp-54h]
 * 00000001404077C6: ldmxcsr dword ptr gs:180h
 * 00000001404077CF: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404077D3: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001404077D7: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001404077DB: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001404077DF: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001404077E3: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001404077E7: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404077EE: jz      short loc_1404077FC
 * 00000001404077F0: test    byte ptr [rbp+0F0h], 1
 * 00000001404077F7: jz      short loc_1404077FC
 * 00000001404077F9: stac
 * 00000001404077FC: test    dword ptr [rbp+0F8h], 200h
 * 0000000140407806: jz      short loc_140407809
 * 0000000140407808: sti
 * 0000000140407809: mov     r9, [rbp-48h]
 * 000000014040780D: mov     ecx, 0C0000409h
 * 0000000140407812: mov     edx, 1
 * 0000000140407817: mov     r8, [rbp+0E8h]
 * 000000014040781E: call    KiFastFailDispatch
 * 0000000140407823: nop
 * 0000000140407824: retn
 */
