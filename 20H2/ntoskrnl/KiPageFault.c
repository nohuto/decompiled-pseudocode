/*
 * XREFs of KiPageFault @ 0x14040B480
 * Callers:
 *     KiPageFaultShadow @ 0x140A17840 (KiPageFaultShadow.c)
 * Callees:
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     KiCheckForSListAddress @ 0x1402DF2E0 (KiCheckForSListAddress.c)
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1403FC170 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1403FC1F0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FCE80 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140401080 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x14040B480 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x14040FCC0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x14040FD40 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x140410A40 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140410EC0 (KiUmsExit.c)
 *     KdSetOwedBreakpoints @ 0x1405103B0 (KdSetOwedBreakpoints.c)
 *     KiCopyCounters @ 0x14051A380 (KiCopyCounters.c)
 *     PsWatchWorkingSet @ 0x14057FB40 (PsWatchWorkingSet.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x14040B480
 * Reason: Hex-Rays returned no pseudocode for 0x14040B480
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040B480: push    rbp
 * 000000014040B481: sub     rsp, 158h
 * 000000014040B488: lea     rbp, [rsp+80h]
 * 000000014040B490: mov     [rbp+0D8h+var_12D], 1
 * 000000014040B494: mov     [rbp+0D8h+var_128], rax
 * 000000014040B498: mov     [rbp+0D8h+var_120], rcx
 * 000000014040B49C: mov     [rbp+0D8h+var_118], rdx
 * 000000014040B4A0: mov     [rbp+0D8h+var_110], r8
 * 000000014040B4A4: mov     [rbp+0D8h+var_108], r9
 * 000000014040B4A8: mov     [rbp+0D8h+var_100], r10
 * 000000014040B4AC: mov     [rbp+0D8h+var_F8], r11
 * 000000014040B4B0: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014040B4B7: jnz     short loc_14040B4E6
 * 000000014040B4B9: lfence
 * 000000014040B4BC: test    byte ptr gs:278h, 1
 * 000000014040B4C5: jnz     short loc_14040B4CF
 * 000000014040B4C7: lfence
 * 000000014040B4CA: jmp     loc_14040B735
 * 000000014040B4CF: movzx   eax, byte ptr gs:27Ah
 * 000000014040B4D8: mov     ecx, 48h ; 'H'
 * 000000014040B4DD: xor     edx, edx
 * 000000014040B4DF: wrmsr
 * 000000014040B4E1: jmp     loc_14040B735
 * 000000014040B4E6: test    cs:KiKvaShadow, 1
 * 000000014040B4ED: jnz     short loc_14040B4F2
 * 000000014040B4EF: swapgs
 * 000000014040B4F2: lfence
 * 000000014040B4F5: mov     r10, gs:188h
 * 000000014040B4FE: mov     rcx, gs:188h
 * 000000014040B507: mov     rcx, [rcx+220h]
 * 000000014040B50E: mov     rcx, [rcx+9E0h]
 * 000000014040B515: mov     gs:270h, rcx
 * 000000014040B51E: mov     cl, gs:850h
 * 000000014040B526: mov     gs:851h, cl
 * 000000014040B52E: mov     cl, gs:278h
 * 000000014040B536: mov     gs:852h, cl
 * 000000014040B53E: movzx   eax, byte ptr gs:27Bh
 * 000000014040B547: cmp     gs:27Ah, al
 * 000000014040B54F: jz      short loc_14040B562
 * 000000014040B551: mov     gs:27Ah, al
 * 000000014040B559: mov     ecx, 48h ; 'H'
 * 000000014040B55E: xor     edx, edx
 * 000000014040B560: wrmsr
 * 000000014040B562: movzx   edx, byte ptr gs:278h
 * 000000014040B56B: test    edx, 8
 * 000000014040B571: jz      short loc_14040B58A
 * 000000014040B573: mov     eax, 1
 * 000000014040B578: xor     edx, edx
 * 000000014040B57A: mov     ecx, 49h ; 'I'
 * 000000014040B57F: wrmsr
 * 000000014040B581: movzx   edx, byte ptr gs:278h
 * 000000014040B58A: test    edx, 2
 * 000000014040B590: jz      loc_14040B6BB
 * 000000014040B596: call    loc_14040B6A9
 * 000000014040B59B: add     rsp, 8
 * 000000014040B59F: call    loc_14040B6B2
 * 000000014040B5A4: add     rsp, 8
 * 000000014040B5A8: call    loc_14040B59B
 * 000000014040B5AD: add     rsp, 8
 * 000000014040B5B1: call    loc_14040B5A4
 * 000000014040B5B6: add     rsp, 8
 * 000000014040B5BA: call    loc_14040B5AD
 * 000000014040B5BF: add     rsp, 8
 * 000000014040B5C3: call    loc_14040B5B6
 * 000000014040B5C8: add     rsp, 8
 * 000000014040B5CC: call    loc_14040B5BF
 * 000000014040B5D1: add     rsp, 8
 * 000000014040B5D5: call    loc_14040B5C8
 * 000000014040B5DA: add     rsp, 8
 * 000000014040B5DE: call    loc_14040B5D1
 * 000000014040B5E3: add     rsp, 8
 * 000000014040B5E7: call    loc_14040B5DA
 * 000000014040B5EC: add     rsp, 8
 * 000000014040B5F0: call    loc_14040B5E3
 * 000000014040B5F5: add     rsp, 8
 * 000000014040B5F9: call    loc_14040B5EC
 * 000000014040B5FE: add     rsp, 8
 * 000000014040B602: call    loc_14040B5F5
 * 000000014040B607: add     rsp, 8
 * 000000014040B60B: call    loc_14040B5FE
 * 000000014040B610: add     rsp, 8
 * 000000014040B614: call    loc_14040B607
 * 000000014040B619: add     rsp, 8
 * 000000014040B61D: call    loc_14040B610
 * 000000014040B622: add     rsp, 8
 * 000000014040B626: call    loc_14040B619
 * 000000014040B62B: add     rsp, 8
 * 000000014040B62F: call    loc_14040B622
 * 000000014040B634: add     rsp, 8
 * 000000014040B638: call    loc_14040B62B
 * 000000014040B63D: add     rsp, 8
 * 000000014040B641: call    loc_14040B634
 * 000000014040B646: add     rsp, 8
 * 000000014040B64A: call    loc_14040B63D
 * 000000014040B64F: add     rsp, 8
 * 000000014040B653: call    loc_14040B646
 * 000000014040B658: add     rsp, 8
 * 000000014040B65C: call    loc_14040B64F
 * 000000014040B661: add     rsp, 8
 * 000000014040B665: call    loc_14040B658
 * 000000014040B66A: add     rsp, 8
 * 000000014040B66E: call    loc_14040B661
 * 000000014040B673: add     rsp, 8
 * 000000014040B677: call    loc_14040B66A
 * 000000014040B67C: add     rsp, 8
 * 000000014040B680: call    loc_14040B673
 * 000000014040B685: add     rsp, 8
 * 000000014040B689: call    loc_14040B67C
 * 000000014040B68E: add     rsp, 8
 * 000000014040B692: call    loc_14040B685
 * 000000014040B697: add     rsp, 8
 * 000000014040B69B: call    loc_14040B68E
 * 000000014040B6A0: add     rsp, 8
 * 000000014040B6A4: call    loc_14040B697
 * 000000014040B6A9: add     rsp, 8
 * 000000014040B6AD: call    loc_14040B6A0
 * 000000014040B6B2: add     rsp, 8
 * 000000014040B6B6: mov     eax, 0DADAh
 * 000000014040B6BB: lfence
 * 000000014040B6BE: mov     byte ptr gs:853h, 0
 * 000000014040B6C7: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014040B6CF: jnz     short loc_14040B720
 * 000000014040B6D1: mov     ecx, 0C0000102h
 * 000000014040B6D6: rdmsr
 * 000000014040B6D8: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 000000014040B6DB: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 000000014040B6DE: test    byte ptr [r10+3], 80h
 * 000000014040B6E3: jz      short loc_14040B720
 * 000000014040B6E5: shl     rdx, 20h
 * 000000014040B6E9: or      rax, rdx
 * 000000014040B6EC: cmp     rax, cs:MmUserProbeAddress
 * 000000014040B6F3: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014040B6FB: cmp     [r10+0F0h], rax
 * 000000014040B702: jz      short loc_14040B720
 * 000000014040B704: mov     rdx, [r10+1F0h]
 * 000000014040B70B: bts     dword ptr [r10+74h], 8
 * 000000014040B711: dec     word ptr [r10+1E6h]
 * 000000014040B719: mov     [rdx+80h], rax
 * 000000014040B720: test    byte ptr [r10+3], 3
 * 000000014040B725: mov     [rbp+0D8h+var_58], 0
 * 000000014040B72E: jz      short loc_14040B735
 * 000000014040B730: call    KiSaveDebugRegisterState
 * 000000014040B735: cld
 * 000000014040B736: stmxcsr [rbp+0D8h+var_12C]
 * 000000014040B73A: ldmxcsr dword ptr gs:180h
 * 000000014040B743: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014040B747: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014040B74B: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014040B74F: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014040B753: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014040B757: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014040B75B: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040B762: jz      short loc_14040B770
 * 000000014040B764: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014040B76B: jz      short loc_14040B770
 * 000000014040B76D: stac
 * 000000014040B770: mov     eax, [rbp+0E0h]
 * 000000014040B776: mov     rcx, cr2
 * 000000014040B779: test    [rbp+0D8h+arg_10], 200h
 * 000000014040B783: jz      short loc_14040B786
 * 000000014040B785: sti
 * 000000014040B786: mov     r9, gs:188h
 * 000000014040B78F: bt      dword ptr [r9+74h], 8
 * 000000014040B795: jnb     short loc_14040B7A5
 * 000000014040B797: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014040B79E: jz      short loc_14040B7A5
 * 000000014040B7A0: call    KiUmsTrapEntry
 * 000000014040B7A5: mov     [rbp+0D8h+var_88], rcx
 * 000000014040B7A9: bt      [rbp+0D8h+arg_10], 9
 * 000000014040B7B1: jnb     loc_14040B8E3
 * 000000014040B7B7: lea     r9, [rbp+0D8h+var_158]
 * 000000014040B7BB: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 000000014040B7C2: and     r8b, 1
 * 000000014040B7C6: mov     rdx, rcx; BugCheckParameter1
 * 000000014040B7C9: mov     ecx, eax; BugCheckParameter2
 * 000000014040B7CB: shr     eax, 1
 * 000000014040B7CD: and     eax, 9
 * 000000014040B7D0: mov     [rbp+0D8h+var_12E], al
 * 000000014040B7D3: call    MmAccessFault
 * 000000014040B7D8: test    eax, eax
 * 000000014040B7DA: jl      short loc_14040B812
 * 000000014040B7DC: cmp     cs:PsWatchEnabled, 0
 * 000000014040B7E3: jz      short loc_14040B7F7
 * 000000014040B7E5: mov     r8, [rbp+0D8h+var_88]
 * 000000014040B7E9: mov     rdx, [rbp+0D8h+arg_0]
 * 000000014040B7F0: mov     ecx, eax
 * 000000014040B7F2: call    PsWatchWorkingSet
 * 000000014040B7F7: cmp     cs:KdpOweBreakpoint, 0
 * 000000014040B7FE: jz      loc_14040B8E9
 * 000000014040B804: mov     rcx, [rbp+0D8h+var_88]
 * 000000014040B808: call    KdSetOwedBreakpoints
 * 000000014040B80D: jmp     loc_14040B8E9
 * 000000014040B812: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014040B819: jz      short loc_14040B86D
 * 000000014040B81B: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014040B823: jnz     short loc_14040B863
 * 000000014040B825: mov     r9, gs:188h
 * 000000014040B82E: test    byte ptr [r9+3], 4
 * 000000014040B833: jz      short loc_14040B83E
 * 000000014040B835: mov     r8, [r9+5F0h]
 * 000000014040B83C: jmp     short loc_14040B847
 * 000000014040B83E: mov     r8, gs:30h
 * 000000014040B847: cmp     r8, [rbp+0D8h+var_F0]
 * 000000014040B84B: jz      short loc_14040B86D
 * 000000014040B84D: mov     ecx, 0C0000102h
 * 000000014040B852: mov     eax, r8d
 * 000000014040B855: shr     r8, 20h
 * 000000014040B859: mov     edx, r8d
 * 000000014040B85C: wrmsr
 * 000000014040B85E: jmp     loc_14040B8E9
 * 000000014040B863: mov     rcx, [rbp+0D8h+var_88]
 * 000000014040B867: shr     rcx, 20h
 * 000000014040B86B: jnz     short loc_14040B8E9
 * 000000014040B86D: mov     ecx, eax
 * 000000014040B86F: mov     edx, 2
 * 000000014040B874: cmp     ecx, 0D0000006h
 * 000000014040B87A: jz      short loc_14040B8BD
 * 000000014040B87C: cmp     ecx, 0C0000005h
 * 000000014040B882: jz      short loc_14040B8A3
 * 000000014040B884: cmp     ecx, 80000001h
 * 000000014040B88A: jz      short loc_14040B8A8
 * 000000014040B88C: cmp     ecx, 0C00000FDh
 * 000000014040B892: jz      short loc_14040B8A8
 * 000000014040B894: mov     ecx, 0C0000006h
 * 000000014040B899: mov     edx, 3
 * 000000014040B89E: mov     r11d, eax
 * 000000014040B8A1: jmp     short loc_14040B8A8
 * 000000014040B8A3: mov     ecx, 10000004h
 * 000000014040B8A8: mov     r10, [rbp+0D8h+var_88]
 * 000000014040B8AC: movzx   r9, [rbp+0D8h+var_12E]
 * 000000014040B8B1: mov     r8, [rbp+0D8h+arg_0]
 * 000000014040B8B8: call    KiExceptionDispatch
 * 000000014040B8BD: mov     rax, cr8
 * 000000014040B8C1: mov     r10, [rbp+0D8h+arg_0]
 * 000000014040B8C8: movzx   r9, [rbp+0D8h+var_12E]
 * 000000014040B8CD: and     eax, 0FFh
 * 000000014040B8D2: mov     r8, rax
 * 000000014040B8D5: mov     rdx, [rbp+0D8h+var_88]
 * 000000014040B8D9: mov     ecx, 0Ah
 * 000000014040B8DE: call    KiBugCheckDispatch
 * 000000014040B8E3: xor     eax, eax
 * 000000014040B8E5: mov     al, 0FFh
 * 000000014040B8E7: jmp     short loc_14040B8C1
 * 000000014040B8E9: mov     rax, cr8
 * 000000014040B8ED: or      eax, eax
 * 000000014040B8EF: mov     [rbp+0D8h+var_138], eax
 * 000000014040B8F2: jnz     short loc_14040B8FD
 * 000000014040B8F4: mov     ecx, 1
 * 000000014040B8F9: mov     cr8, rcx
 * 000000014040B8FD: lea     rcx, [rbp+0D8h+var_158]
 * 000000014040B901: call    KiCheckForSListAddress
 * 000000014040B906: mov     ecx, [rbp+0D8h+var_138]
 * 000000014040B909: or      ecx, ecx
 * 000000014040B90B: jnz     short loc_14040B911
 * 000000014040B90D: mov     cr8, rcx
 * 000000014040B911: cli
 * 000000014040B912: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014040B919: jz      loc_14040BB9F
 * 000000014040B91F: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014040B926: jz      short loc_14040B92B
 * 000000014040B928: stac
 * 000000014040B92B: mov     rcx, gs:188h
 * 000000014040B934: test    byte ptr [rcx+0C2h], 3
 * 000000014040B93B: jz      short loc_14040B958
 * 000000014040B93D: mov     ecx, 1
 * 000000014040B942: mov     cr8, rcx
 * 000000014040B946: sti
 * 000000014040B947: call    KiInitiateUserApc
 * 000000014040B94C: cli
 * 000000014040B94D: mov     ecx, 0
 * 000000014040B952: mov     cr8, rcx
 * 000000014040B956: jmp     short loc_14040B92B
 * 000000014040B958: test    byte ptr gs:27Eh, 2
 * 000000014040B961: jz      short loc_14040B96A
 * 000000014040B963: xor     ecx, ecx
 * 000000014040B965: call    KiUpdateStibpPairing
 * 000000014040B96A: mov     rcx, gs:188h
 * 000000014040B973: test    dword ptr [rcx], 8000000h
 * 000000014040B979: jz      short loc_14040B980
 * 000000014040B97B: call    KiRestoreSetContextState
 * 000000014040B980: mov     rcx, gs:188h
 * 000000014040B989: test    dword ptr [rcx], 40010000h
 * 000000014040B98F: jz      short loc_14040B9B6
 * 000000014040B991: test    byte ptr [rcx+2], 1
 * 000000014040B995: jz      short loc_14040B9A5
 * 000000014040B997: call    KiCopyCounters
 * 000000014040B99C: mov     rcx, gs:188h
 * 000000014040B9A5: test    byte ptr [rcx+3], 40h
 * 000000014040B9A9: jz      short loc_14040B9B6
 * 000000014040B9AB: lea     rsp, [rbp-80h]
 * 000000014040B9AF: mov     cl, 1
 * 000000014040B9B1: call    KiUmsExit
 * 000000014040B9B6: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014040B9BA: cmp     [rbp+0D8h+var_58], 0
 * 000000014040B9C2: jz      short loc_14040B9C9
 * 000000014040B9C4: call    KiRestoreDebugRegisterState
 * 000000014040B9C9: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014040B9CD: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014040B9D1: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014040B9D5: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014040B9D9: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014040B9DD: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014040B9E1: mov     r11, [rbp+0D8h+var_F8]
 * 000000014040B9E5: mov     r10, [rbp+0D8h+var_100]
 * 000000014040B9E9: mov     r9, [rbp+0D8h+var_108]
 * 000000014040B9ED: mov     r8, [rbp+0D8h+var_110]
 * 000000014040B9F1: mov     byte ptr gs:853h, 0
 * 000000014040B9FA: movzx   eax, byte ptr gs:27Dh
 * 000000014040BA03: cmp     gs:27Ah, al
 * 000000014040BA0B: jz      short loc_14040BA1E
 * 000000014040BA0D: mov     gs:27Ah, al
 * 000000014040BA15: mov     ecx, 48h ; 'H'
 * 000000014040BA1A: xor     edx, edx
 * 000000014040BA1C: wrmsr
 * 000000014040BA1E: btr     word ptr gs:278h, 2
 * 000000014040BA29: jnb     short loc_14040BA39
 * 000000014040BA2B: mov     eax, 1
 * 000000014040BA30: xor     edx, edx
 * 000000014040BA32: mov     ecx, 49h ; 'I'
 * 000000014040BA37: wrmsr
 * 000000014040BA39: btr     word ptr gs:278h, 5
 * 000000014040BA44: jnb     loc_14040BB6F
 * 000000014040BA4A: call    loc_14040BB5D
 * 000000014040BA4F: add     rsp, 8
 * 000000014040BA53: call    loc_14040BB66
 * 000000014040BA58: add     rsp, 8
 * 000000014040BA5C: call    loc_14040BA4F
 * 000000014040BA61: add     rsp, 8
 * 000000014040BA65: call    loc_14040BA58
 * 000000014040BA6A: add     rsp, 8
 * 000000014040BA6E: call    loc_14040BA61
 * 000000014040BA73: add     rsp, 8
 * 000000014040BA77: call    loc_14040BA6A
 * 000000014040BA7C: add     rsp, 8
 * 000000014040BA80: call    loc_14040BA73
 * 000000014040BA85: add     rsp, 8
 * 000000014040BA89: call    loc_14040BA7C
 * 000000014040BA8E: add     rsp, 8
 * 000000014040BA92: call    loc_14040BA85
 * 000000014040BA97: add     rsp, 8
 * 000000014040BA9B: call    loc_14040BA8E
 * 000000014040BAA0: add     rsp, 8
 * 000000014040BAA4: call    loc_14040BA97
 * 000000014040BAA9: add     rsp, 8
 * 000000014040BAAD: call    loc_14040BAA0
 * 000000014040BAB2: add     rsp, 8
 * 000000014040BAB6: call    loc_14040BAA9
 * 000000014040BABB: add     rsp, 8
 * 000000014040BABF: call    loc_14040BAB2
 * 000000014040BAC4: add     rsp, 8
 * 000000014040BAC8: call    loc_14040BABB
 * 000000014040BACD: add     rsp, 8
 * 000000014040BAD1: call    loc_14040BAC4
 * 000000014040BAD6: add     rsp, 8
 * 000000014040BADA: call    loc_14040BACD
 * 000000014040BADF: add     rsp, 8
 * 000000014040BAE3: call    loc_14040BAD6
 * 000000014040BAE8: add     rsp, 8
 * 000000014040BAEC: call    loc_14040BADF
 * 000000014040BAF1: add     rsp, 8
 * 000000014040BAF5: call    loc_14040BAE8
 * 000000014040BAFA: add     rsp, 8
 * 000000014040BAFE: call    loc_14040BAF1
 * 000000014040BB03: add     rsp, 8
 * 000000014040BB07: call    loc_14040BAFA
 * 000000014040BB0C: add     rsp, 8
 * 000000014040BB10: call    loc_14040BB03
 * 000000014040BB15: add     rsp, 8
 * 000000014040BB19: call    loc_14040BB0C
 * 000000014040BB1E: add     rsp, 8
 * 000000014040BB22: call    loc_14040BB15
 * 000000014040BB27: add     rsp, 8
 * 000000014040BB2B: call    loc_14040BB1E
 * 000000014040BB30: add     rsp, 8
 * 000000014040BB34: call    loc_14040BB27
 * 000000014040BB39: add     rsp, 8
 * 000000014040BB3D: call    loc_14040BB30
 * 000000014040BB42: add     rsp, 8
 * 000000014040BB46: call    loc_14040BB39
 * 000000014040BB4B: add     rsp, 8
 * 000000014040BB4F: call    loc_14040BB42
 * 000000014040BB54: add     rsp, 8
 * 000000014040BB58: call    loc_14040BB4B
 * 000000014040BB5D: add     rsp, 8
 * 000000014040BB61: call    loc_14040BB54
 * 000000014040BB66: add     rsp, 8
 * 000000014040BB6A: mov     eax, 0DADAh
 * 000000014040BB6F: mov     rdx, [rbp+0D8h+var_118]
 * 000000014040BB73: mov     rcx, [rbp+0D8h+var_120]
 * 000000014040BB77: mov     rax, [rbp+0D8h+var_128]
 * 000000014040BB7B: mov     rsp, rbp
 * 000000014040BB7E: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014040BB85: add     rsp, 0E8h
 * 000000014040BB8C: test    cs:KiKvaShadow, 1
 * 000000014040BB93: jz      short loc_14040BB9A
 * 000000014040BB95: jmp     KiKernelExit
 * 000000014040BB9A: swapgs
 * 000000014040BB9D: iretq
 * 000000014040BB9F: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014040BBA3: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014040BBA7: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014040BBAB: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014040BBAF: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014040BBB3: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014040BBB7: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014040BBBB: mov     r11, [rbp+0D8h+var_F8]
 * 000000014040BBBF: mov     r10, [rbp+0D8h+var_100]
 * 000000014040BBC3: mov     r9, [rbp+0D8h+var_108]
 * 000000014040BBC7: mov     r8, [rbp+0D8h+var_110]
 * 000000014040BBCB: mov     rdx, [rbp+0D8h+var_118]
 * 000000014040BBCF: mov     rcx, [rbp+0D8h+var_120]
 * 000000014040BBD3: mov     rax, [rbp+0D8h+var_128]
 * 000000014040BBD7: mov     rsp, rbp
 * 000000014040BBDA: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014040BBE1: add     rsp, 0E8h
 * 000000014040BBE8: iretq
 */
