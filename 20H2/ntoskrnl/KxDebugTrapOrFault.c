/*
 * XREFs of KxDebugTrapOrFault @ 0x140408300
 * Callers:
 *     KiDebugTrapOrFault @ 0x140408240 (KiDebugTrapOrFault.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KxDebugTrapOrFault @ 0x140408300 (KxDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x14040FD40 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KxDebugTrapOrFault @ 0x140408300
 * Reason: Hex-Rays returned no pseudocode for 0x140408300
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140408300: sub     rsp, 8
 * 0000000140408304: push    rbp
 * 0000000140408305: sub     rsp, 158h
 * 000000014040830C: lea     rbp, [rsp+80h]
 * 0000000140408314: mov     [rbp+0E8h+var_13D], 1
 * 0000000140408318: mov     [rbp+0E8h+var_138], rax
 * 000000014040831C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140408320: mov     [rbp+0E8h+var_128], rdx
 * 0000000140408324: mov     [rbp+0E8h+var_120], r8
 * 0000000140408328: mov     [rbp+0E8h+var_118], r9
 * 000000014040832C: mov     [rbp+0E8h+var_110], r10
 * 0000000140408330: mov     [rbp+0E8h+var_108], r11
 * 0000000140408334: test    [rbp+0E8h+arg_0], 1
 * 000000014040833B: jnz     short loc_14040836A
 * 000000014040833D: lfence
 * 0000000140408340: test    byte ptr gs:278h, 1
 * 0000000140408349: jnz     short loc_140408353
 * 000000014040834B: lfence
 * 000000014040834E: jmp     loc_1404085A9
 * 0000000140408353: movzx   eax, byte ptr gs:27Ah
 * 000000014040835C: mov     ecx, 48h ; 'H'
 * 0000000140408361: xor     edx, edx
 * 0000000140408363: wrmsr
 * 0000000140408365: jmp     loc_1404085A9
 * 000000014040836A: test    cs:KiKvaShadow, 1
 * 0000000140408371: jnz     short loc_140408376
 * 0000000140408373: swapgs
 * 0000000140408376: lfence
 * 0000000140408379: mov     r10, gs:188h
 * 0000000140408382: mov     rcx, gs:188h
 * 000000014040838B: mov     rcx, [rcx+220h]
 * 0000000140408392: mov     rcx, [rcx+9E0h]
 * 0000000140408399: mov     gs:270h, rcx
 * 00000001404083A2: mov     cl, gs:850h
 * 00000001404083AA: mov     gs:851h, cl
 * 00000001404083B2: mov     cl, gs:278h
 * 00000001404083BA: mov     gs:852h, cl
 * 00000001404083C2: movzx   eax, byte ptr gs:27Bh
 * 00000001404083CB: cmp     gs:27Ah, al
 * 00000001404083D3: jz      short loc_1404083E6
 * 00000001404083D5: mov     gs:27Ah, al
 * 00000001404083DD: mov     ecx, 48h ; 'H'
 * 00000001404083E2: xor     edx, edx
 * 00000001404083E4: wrmsr
 * 00000001404083E6: movzx   edx, byte ptr gs:278h
 * 00000001404083EF: test    edx, 8
 * 00000001404083F5: jz      short loc_14040840E
 * 00000001404083F7: mov     eax, 1
 * 00000001404083FC: xor     edx, edx
 * 00000001404083FE: mov     ecx, 49h ; 'I'
 * 0000000140408403: wrmsr
 * 0000000140408405: movzx   edx, byte ptr gs:278h
 * 000000014040840E: test    edx, 2
 * 0000000140408414: jz      loc_14040853F
 * 000000014040841A: call    loc_14040852D
 * 000000014040841F: add     rsp, 8
 * 0000000140408423: call    loc_140408536
 * 0000000140408428: add     rsp, 8
 * 000000014040842C: call    loc_14040841F
 * 0000000140408431: add     rsp, 8
 * 0000000140408435: call    loc_140408428
 * 000000014040843A: add     rsp, 8
 * 000000014040843E: call    loc_140408431
 * 0000000140408443: add     rsp, 8
 * 0000000140408447: call    loc_14040843A
 * 000000014040844C: add     rsp, 8
 * 0000000140408450: call    loc_140408443
 * 0000000140408455: add     rsp, 8
 * 0000000140408459: call    loc_14040844C
 * 000000014040845E: add     rsp, 8
 * 0000000140408462: call    loc_140408455
 * 0000000140408467: add     rsp, 8
 * 000000014040846B: call    loc_14040845E
 * 0000000140408470: add     rsp, 8
 * 0000000140408474: call    loc_140408467
 * 0000000140408479: add     rsp, 8
 * 000000014040847D: call    loc_140408470
 * 0000000140408482: add     rsp, 8
 * 0000000140408486: call    loc_140408479
 * 000000014040848B: add     rsp, 8
 * 000000014040848F: call    loc_140408482
 * 0000000140408494: add     rsp, 8
 * 0000000140408498: call    loc_14040848B
 * 000000014040849D: add     rsp, 8
 * 00000001404084A1: call    loc_140408494
 * 00000001404084A6: add     rsp, 8
 * 00000001404084AA: call    loc_14040849D
 * 00000001404084AF: add     rsp, 8
 * 00000001404084B3: call    loc_1404084A6
 * 00000001404084B8: add     rsp, 8
 * 00000001404084BC: call    loc_1404084AF
 * 00000001404084C1: add     rsp, 8
 * 00000001404084C5: call    loc_1404084B8
 * 00000001404084CA: add     rsp, 8
 * 00000001404084CE: call    loc_1404084C1
 * 00000001404084D3: add     rsp, 8
 * 00000001404084D7: call    loc_1404084CA
 * 00000001404084DC: add     rsp, 8
 * 00000001404084E0: call    loc_1404084D3
 * 00000001404084E5: add     rsp, 8
 * 00000001404084E9: call    loc_1404084DC
 * 00000001404084EE: add     rsp, 8
 * 00000001404084F2: call    loc_1404084E5
 * 00000001404084F7: add     rsp, 8
 * 00000001404084FB: call    loc_1404084EE
 * 0000000140408500: add     rsp, 8
 * 0000000140408504: call    loc_1404084F7
 * 0000000140408509: add     rsp, 8
 * 000000014040850D: call    loc_140408500
 * 0000000140408512: add     rsp, 8
 * 0000000140408516: call    loc_140408509
 * 000000014040851B: add     rsp, 8
 * 000000014040851F: call    loc_140408512
 * 0000000140408524: add     rsp, 8
 * 0000000140408528: call    loc_14040851B
 * 000000014040852D: add     rsp, 8
 * 0000000140408531: call    loc_140408524
 * 0000000140408536: add     rsp, 8
 * 000000014040853A: mov     eax, 0DADAh
 * 000000014040853F: lfence
 * 0000000140408542: mov     byte ptr gs:853h, 0
 * 000000014040854B: test    byte ptr [r10+3], 80h
 * 0000000140408550: jz      short loc_140408594
 * 0000000140408552: mov     ecx, 0C0000102h
 * 0000000140408557: rdmsr
 * 0000000140408559: shl     rdx, 20h
 * 000000014040855D: or      rax, rdx
 * 0000000140408560: cmp     rax, cs:MmUserProbeAddress
 * 0000000140408567: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040856F: cmp     [r10+0F0h], rax
 * 0000000140408576: jz      short loc_140408594
 * 0000000140408578: mov     rdx, [r10+1F0h]
 * 000000014040857F: bts     dword ptr [r10+74h], 8
 * 0000000140408585: dec     word ptr [r10+1E6h]
 * 000000014040858D: mov     [rdx+80h], rax
 * 0000000140408594: test    byte ptr [r10+3], 3
 * 0000000140408599: mov     [rbp+0E8h+var_68], 0
 * 00000001404085A2: jz      short loc_1404085A9
 * 00000001404085A4: call    KiSaveDebugRegisterState
 * 00000001404085A9: cld
 * 00000001404085AA: stmxcsr [rbp+0E8h+var_13C]
 * 00000001404085AE: ldmxcsr dword ptr gs:180h
 * 00000001404085B7: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001404085BB: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001404085BF: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001404085C3: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001404085C7: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001404085CB: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001404085CF: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404085D6: jz      short loc_1404085E4
 * 00000001404085D8: test    [rbp+0E8h+arg_0], 1
 * 00000001404085DF: jz      short loc_1404085E4
 * 00000001404085E1: stac
 * 00000001404085E4: test    [rbp+0E8h+arg_8], 200h
 * 00000001404085EE: jz      short loc_1404085F1
 * 00000001404085F0: sti
 * 00000001404085F1: test    cs:KiCpuTracingFlags, 2
 * 00000001404085FB: jz      short loc_140408610
 * 00000001404085FD: mov     ecx, 1D9h
 * 0000000140408602: rdmsr
 * 0000000140408604: or      eax, 1
 * 0000000140408607: wrmsr
 * 0000000140408609: xor     edx, edx
 * 000000014040860B: jmp     loc_1404086DF
 * 0000000140408610: xor     edx, edx
 * 0000000140408612: test    [rbp+0E8h+arg_8], 100h
 * 000000014040861C: jz      loc_1404086DF
 * 0000000140408622: test    byte ptr gs:8722h, 2
 * 000000014040862B: jz      loc_1404086DF
 * 0000000140408631: test    [rbp+0E8h+arg_0], 1
 * 0000000140408638: jnz     short loc_140408691
 * 000000014040863A: mov     rax, dr7
 * 000000014040863D: test    ax, 200h
 * 0000000140408641: jz      loc_1404086DF
 * 0000000140408647: test    ax, 100h
 * 000000014040864B: jz      loc_1404086DF
 * 0000000140408651: mov     r8d, cs:KiLastBranchTOSMSR
 * 0000000140408658: or      r8d, r8d
 * 000000014040865B: jz      short loc_140408665
 * 000000014040865D: mov     ecx, r8d
 * 0000000140408660: rdmsr
 * 0000000140408662: mov     r8d, eax
 * 0000000140408665: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 000000014040866B: add     ecx, r8d
 * 000000014040866E: rdmsr
 * 0000000140408670: mov     r9d, eax
 * 0000000140408673: shl     rdx, 20h
 * 0000000140408677: mov     ecx, cs:KiLastBranchToBaseMSR
 * 000000014040867D: or      r9, rdx
 * 0000000140408680: add     ecx, r8d
 * 0000000140408683: rdmsr
 * 0000000140408685: mov     r10d, eax
 * 0000000140408688: shl     rdx, 20h
 * 000000014040868C: or      r10, rdx
 * 000000014040868F: jmp     short loc_1404086DA
 * 0000000140408691: test    [rbp+0E8h+var_68], 200h
 * 000000014040869A: jz      short loc_1404086DF
 * 000000014040869C: test    [rbp+0E8h+var_68], 100h
 * 00000001404086A5: jz      short loc_1404086DF
 * 00000001404086A7: and     [rbp+0E8h+var_40], 0
 * 00000001404086AF: and     [rbp+0E8h+var_48], 0
 * 00000001404086B7: mov     rcx, cs:MmUserProbeAddress
 * 00000001404086BE: mov     r9, [rbp+0E8h+var_50]
 * 00000001404086C5: cmp     r9, rcx
 * 00000001404086C8: cmovnb  r9, rcx
 * 00000001404086CC: mov     r10, [rbp+0E8h+var_58]
 * 00000001404086D3: cmp     r10, rcx
 * 00000001404086D6: cmovnb  r10, rcx
 * 00000001404086DA: mov     edx, 2
 * 00000001404086DF: mov     ecx, 80000004h
 * 00000001404086E4: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 00000001404086EE: mov     r8, [rbp+0E8h]
 * 00000001404086F5: call    KiExceptionDispatch
 * 00000001404086FA: nop
 * 00000001404086FB: retn
 */
