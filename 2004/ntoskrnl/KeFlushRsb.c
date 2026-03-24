/*
 * XREFs of KeFlushRsb @ 0x140515DA8
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 * Callees:
 *     KiIpiSendPacket @ 0x1402FD120 (KiIpiSendPacket.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiFlushCurrentRsb @ 0x140A14600 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KeFlushRsb @ 0x140515DA8
 * Reason: Hex-Rays returned no pseudocode for 0x140515DA8
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140515DA8: mov     [rsp+arg_0], rbx
 * 0000000140515DAD: push    rdi
 * 0000000140515DAE: sub     rsp, 30h
 * 0000000140515DB2: mov     rbx, cr8
 * 0000000140515DB6: mov     eax, 0Ch
 * 0000000140515DBB: mov     cr8, rax
 * 0000000140515DBF: mov     eax, cs:KiIrqlFlags
 * 0000000140515DC5: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 0000000140515DC9: test    eax, eax
 * 0000000140515DCB: jz      short loc_140515E02
 * 0000000140515DCD: test    al, 1
 * 0000000140515DCF: jz      short loc_140515E02
 * 0000000140515DD1: cmp     bl, 0Fh
 * 0000000140515DD4: ja      short loc_140515E02
 * 0000000140515DD6: mov     rax, gs:20h
 * 0000000140515DDF: mov     rdx, rdi
 * 0000000140515DE2: movzx   ecx, bl
 * 0000000140515DE5: inc     ecx
 * 0000000140515DE7: shl     rdx, cl
 * 0000000140515DEA: mov     r9, [rax+84B8h]
 * 0000000140515DF1: and     edx, 1FFCh
 * 0000000140515DF7: mov     r8d, [r9+14h]
 * 0000000140515DFB: or      r8d, edx
 * 0000000140515DFE: mov     [r9+14h], r8d
 * 0000000140515E02: and     [rsp+38h+var_10], 0
 * 0000000140515E08: lea     r8, KiFlushRsbTarget
 * 0000000140515E0F: and     [rsp+38h+var_18], 0
 * 0000000140515E15: xor     edx, edx
 * 0000000140515E17: xor     r9d, r9d
 * 0000000140515E1A: lea     ecx, [rdx+1]
 * 0000000140515E1D: call    KiIpiSendPacket
 * 0000000140515E22: mov     rcx, gs:20h
 * 0000000140515E2B: mov     eax, [rcx+2D80h]
 * 0000000140515E31: test    eax, eax
 * 0000000140515E33: jz      short loc_140515E39
 * 0000000140515E35: pause
 * 0000000140515E37: jmp     short loc_140515E2B
 * 0000000140515E39: call    KiFlushCurrentRsb
 * 0000000140515E3E: mov     eax, cs:KiIrqlFlags
 * 0000000140515E44: test    eax, eax
 * 0000000140515E46: jz      short loc_140515E8E
 * 0000000140515E48: test    al, 1
 * 0000000140515E4A: jz      short loc_140515E8E
 * 0000000140515E4C: mov     rax, cr8
 * 0000000140515E50: cmp     al, 0Fh
 * 0000000140515E52: ja      short loc_140515E8E
 * 0000000140515E54: cmp     bl, 0Fh
 * 0000000140515E57: ja      short loc_140515E8E
 * 0000000140515E59: cmp     al, 2
 * 0000000140515E5B: jb      short loc_140515E8E
 * 0000000140515E5D: mov     r9, gs:20h
 * 0000000140515E66: movzx   ecx, bl
 * 0000000140515E69: inc     ecx
 * 0000000140515E6B: shl     rdi, cl
 * 0000000140515E6E: mov     r8, [r9+84B8h]
 * 0000000140515E75: movzx   eax, di
 * 0000000140515E78: not     eax
 * 0000000140515E7A: mov     edx, [r8+14h]
 * 0000000140515E7E: and     edx, eax
 * 0000000140515E80: mov     [r8+14h], edx
 * 0000000140515E84: jnz     short loc_140515E8E
 * 0000000140515E86: mov     rcx, r9
 * 0000000140515E89: call    KiRemoveSystemWorkPriorityKick
 * 0000000140515E8E: movzx   eax, bl
 * 0000000140515E91: mov     cr8, rax
 * 0000000140515E95: mov     rbx, [rsp+38h+arg_0]
 * 0000000140515E9A: add     rsp, 30h
 * 0000000140515E9E: pop     rdi
 * 0000000140515E9F: retn
 */
