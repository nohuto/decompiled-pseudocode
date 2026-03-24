/*
 * XREFs of KiRaiseAssertion @ 0x14040E280
 * Callers:
 *     KiRaiseAssertionShadow @ 0x140A17DC0 (KiRaiseAssertionShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiRaiseAssertion @ 0x14040E280 (KiRaiseAssertion.c)
 *     KiExceptionDispatch @ 0x14040FD40 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseAssertion @ 0x14040E280
 * Reason: Hex-Rays returned no pseudocode for 0x14040E280
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040E280: sub     qword ptr [rsp+0], 2
 * 000000014040E285: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014040E28B: jnz     short loc_14040E292
 * 000000014040E28D: and     dword ptr [rsp+4], 0
 * 000000014040E292: sub     rsp, 8
 * 000000014040E296: push    rbp
 * 000000014040E297: sub     rsp, 158h
 * 000000014040E29E: lea     rbp, [rsp+168h+var_E8]
 * 000000014040E2A6: mov     byte ptr [rbp-55h], 1
 * 000000014040E2AA: mov     [rbp-50h], rax
 * 000000014040E2AE: mov     [rbp-48h], rcx
 * 000000014040E2B2: mov     [rbp-40h], rdx
 * 000000014040E2B6: mov     [rbp-38h], r8
 * 000000014040E2BA: mov     [rbp-30h], r9
 * 000000014040E2BE: mov     [rbp-28h], r10
 * 000000014040E2C2: mov     [rbp-20h], r11
 * 000000014040E2C6: test    byte ptr [rbp+0F0h], 1
 * 000000014040E2CD: jnz     short loc_14040E2FC
 * 000000014040E2CF: lfence
 * 000000014040E2D2: test    byte ptr gs:278h, 1
 * 000000014040E2DB: jnz     short loc_14040E2E5
 * 000000014040E2DD: lfence
 * 000000014040E2E0: jmp     loc_14040E53B
 * 000000014040E2E5: movzx   eax, byte ptr gs:27Ah
 * 000000014040E2EE: mov     ecx, 48h ; 'H'
 * 000000014040E2F3: xor     edx, edx
 * 000000014040E2F5: wrmsr
 * 000000014040E2F7: jmp     loc_14040E53B
 * 000000014040E2FC: test    cs:KiKvaShadow, 1
 * 000000014040E303: jnz     short loc_14040E308
 * 000000014040E305: swapgs
 * 000000014040E308: lfence
 * 000000014040E30B: mov     r10, gs:188h
 * 000000014040E314: mov     rcx, gs:188h
 * 000000014040E31D: mov     rcx, [rcx+220h]
 * 000000014040E324: mov     rcx, [rcx+9E0h]
 * 000000014040E32B: mov     gs:270h, rcx
 * 000000014040E334: mov     cl, gs:850h
 * 000000014040E33C: mov     gs:851h, cl
 * 000000014040E344: mov     cl, gs:278h
 * 000000014040E34C: mov     gs:852h, cl
 * 000000014040E354: movzx   eax, byte ptr gs:27Bh
 * 000000014040E35D: cmp     gs:27Ah, al
 * 000000014040E365: jz      short loc_14040E378
 * 000000014040E367: mov     gs:27Ah, al
 * 000000014040E36F: mov     ecx, 48h ; 'H'
 * 000000014040E374: xor     edx, edx
 * 000000014040E376: wrmsr
 * 000000014040E378: movzx   edx, byte ptr gs:278h
 * 000000014040E381: test    edx, 8
 * 000000014040E387: jz      short loc_14040E3A0
 * 000000014040E389: mov     eax, 1
 * 000000014040E38E: xor     edx, edx
 * 000000014040E390: mov     ecx, 49h ; 'I'
 * 000000014040E395: wrmsr
 * 000000014040E397: movzx   edx, byte ptr gs:278h
 * 000000014040E3A0: test    edx, 2
 * 000000014040E3A6: jz      loc_14040E4D1
 * 000000014040E3AC: call    loc_14040E4BF
 * 000000014040E3B1: add     rsp, 8
 * 000000014040E3B5: call    loc_14040E4C8
 * 000000014040E3BA: add     rsp, 8
 * 000000014040E3BE: call    loc_14040E3B1
 * 000000014040E3C3: add     rsp, 8
 * 000000014040E3C7: call    loc_14040E3BA
 * 000000014040E3CC: add     rsp, 8
 * 000000014040E3D0: call    loc_14040E3C3
 * 000000014040E3D5: add     rsp, 8
 * 000000014040E3D9: call    loc_14040E3CC
 * 000000014040E3DE: add     rsp, 8
 * 000000014040E3E2: call    loc_14040E3D5
 * 000000014040E3E7: add     rsp, 8
 * 000000014040E3EB: call    loc_14040E3DE
 * 000000014040E3F0: add     rsp, 8
 * 000000014040E3F4: call    loc_14040E3E7
 * 000000014040E3F9: add     rsp, 8
 * 000000014040E3FD: call    loc_14040E3F0
 * 000000014040E402: add     rsp, 8
 * 000000014040E406: call    loc_14040E3F9
 * 000000014040E40B: add     rsp, 8
 * 000000014040E40F: call    loc_14040E402
 * 000000014040E414: add     rsp, 8
 * 000000014040E418: call    loc_14040E40B
 * 000000014040E41D: add     rsp, 8
 * 000000014040E421: call    loc_14040E414
 * 000000014040E426: add     rsp, 8
 * 000000014040E42A: call    loc_14040E41D
 * 000000014040E42F: add     rsp, 8
 * 000000014040E433: call    loc_14040E426
 * 000000014040E438: add     rsp, 8
 * 000000014040E43C: call    loc_14040E42F
 * 000000014040E441: add     rsp, 8
 * 000000014040E445: call    loc_14040E438
 * 000000014040E44A: add     rsp, 8
 * 000000014040E44E: call    loc_14040E441
 * 000000014040E453: add     rsp, 8
 * 000000014040E457: call    loc_14040E44A
 * 000000014040E45C: add     rsp, 8
 * 000000014040E460: call    loc_14040E453
 * 000000014040E465: add     rsp, 8
 * 000000014040E469: call    loc_14040E45C
 * 000000014040E46E: add     rsp, 8
 * 000000014040E472: call    loc_14040E465
 * 000000014040E477: add     rsp, 8
 * 000000014040E47B: call    loc_14040E46E
 * 000000014040E480: add     rsp, 8
 * 000000014040E484: call    loc_14040E477
 * 000000014040E489: add     rsp, 8
 * 000000014040E48D: call    loc_14040E480
 * 000000014040E492: add     rsp, 8
 * 000000014040E496: call    loc_14040E489
 * 000000014040E49B: add     rsp, 8
 * 000000014040E49F: call    loc_14040E492
 * 000000014040E4A4: add     rsp, 8
 * 000000014040E4A8: call    loc_14040E49B
 * 000000014040E4AD: add     rsp, 8
 * 000000014040E4B1: call    loc_14040E4A4
 * 000000014040E4B6: add     rsp, 8
 * 000000014040E4BA: call    loc_14040E4AD
 * 000000014040E4BF: add     rsp, 8
 * 000000014040E4C3: call    loc_14040E4B6
 * 000000014040E4C8: add     rsp, 8
 * 000000014040E4CC: mov     eax, 0DADAh
 * 000000014040E4D1: lfence
 * 000000014040E4D4: mov     byte ptr gs:853h, 0
 * 000000014040E4DD: test    byte ptr [r10+3], 80h
 * 000000014040E4E2: jz      short loc_14040E526
 * 000000014040E4E4: mov     ecx, 0C0000102h
 * 000000014040E4E9: rdmsr
 * 000000014040E4EB: shl     rdx, 20h
 * 000000014040E4EF: or      rax, rdx
 * 000000014040E4F2: cmp     rax, cs:MmUserProbeAddress
 * 000000014040E4F9: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040E501: cmp     [r10+0F0h], rax
 * 000000014040E508: jz      short loc_14040E526
 * 000000014040E50A: mov     rdx, [r10+1F0h]
 * 000000014040E511: bts     dword ptr [r10+74h], 8
 * 000000014040E517: dec     word ptr [r10+1E6h]
 * 000000014040E51F: mov     [rdx+80h], rax
 * 000000014040E526: test    byte ptr [r10+3], 3
 * 000000014040E52B: mov     word ptr [rbp+80h], 0
 * 000000014040E534: jz      short loc_14040E53B
 * 000000014040E536: call    KiSaveDebugRegisterState
 * 000000014040E53B: cld
 * 000000014040E53C: stmxcsr dword ptr [rbp-54h]
 * 000000014040E540: ldmxcsr dword ptr gs:180h
 * 000000014040E549: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014040E54D: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014040E551: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014040E555: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014040E559: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014040E55D: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014040E561: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040E568: jz      short loc_14040E576
 * 000000014040E56A: test    byte ptr [rbp+0F0h], 1
 * 000000014040E571: jz      short loc_14040E576
 * 000000014040E573: stac
 * 000000014040E576: test    dword ptr [rbp+0F8h], 200h
 * 000000014040E580: jz      short loc_14040E583
 * 000000014040E582: sti
 * 000000014040E583: mov     ecx, 0C0000420h
 * 000000014040E588: xor     edx, edx
 * 000000014040E58A: mov     r8, [rbp+0E8h]
 * 000000014040E591: call    KiExceptionDispatch
 * 000000014040E596: nop
 * 000000014040E597: retn
 */
