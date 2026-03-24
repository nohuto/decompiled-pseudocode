/*
 * XREFs of KeFlushRsb @ 0x140515758
 * Callers:
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 * Callees:
 *     KiIpiSendPacket @ 0x140359100 (KiIpiSendPacket.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiFlushCurrentRsb @ 0x140A14600 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KeFlushRsb @ 0x140515758
 * Reason: Hex-Rays returned no pseudocode for 0x140515758
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140515758: mov     [rsp+arg_0], rbx
 * 000000014051575D: push    rdi
 * 000000014051575E: sub     rsp, 30h
 * 0000000140515762: mov     rbx, cr8
 * 0000000140515766: mov     eax, 0Ch
 * 000000014051576B: mov     cr8, rax
 * 000000014051576F: mov     eax, cs:KiIrqlFlags
 * 0000000140515775: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 0000000140515779: test    eax, eax
 * 000000014051577B: jz      short loc_1405157B2
 * 000000014051577D: test    al, 1
 * 000000014051577F: jz      short loc_1405157B2
 * 0000000140515781: cmp     bl, 0Fh
 * 0000000140515784: ja      short loc_1405157B2
 * 0000000140515786: mov     rax, gs:20h
 * 000000014051578F: mov     rdx, rdi
 * 0000000140515792: movzx   ecx, bl
 * 0000000140515795: inc     ecx
 * 0000000140515797: shl     rdx, cl
 * 000000014051579A: mov     r9, [rax+84B8h]
 * 00000001405157A1: and     edx, 1FFCh
 * 00000001405157A7: mov     r8d, [r9+14h]
 * 00000001405157AB: or      r8d, edx
 * 00000001405157AE: mov     [r9+14h], r8d
 * 00000001405157B2: and     [rsp+38h+var_10], 0
 * 00000001405157B8: lea     r8, KiFlushRsbTarget
 * 00000001405157BF: and     [rsp+38h+var_18], 0
 * 00000001405157C5: xor     edx, edx
 * 00000001405157C7: xor     r9d, r9d
 * 00000001405157CA: lea     ecx, [rdx+1]
 * 00000001405157CD: call    KiIpiSendPacket
 * 00000001405157D2: mov     rcx, gs:20h
 * 00000001405157DB: mov     eax, [rcx+2D80h]
 * 00000001405157E1: test    eax, eax
 * 00000001405157E3: jz      short loc_1405157E9
 * 00000001405157E5: pause
 * 00000001405157E7: jmp     short loc_1405157DB
 * 00000001405157E9: call    KiFlushCurrentRsb
 * 00000001405157EE: mov     eax, cs:KiIrqlFlags
 * 00000001405157F4: test    eax, eax
 * 00000001405157F6: jz      short loc_14051583E
 * 00000001405157F8: test    al, 1
 * 00000001405157FA: jz      short loc_14051583E
 * 00000001405157FC: mov     rax, cr8
 * 0000000140515800: cmp     al, 0Fh
 * 0000000140515802: ja      short loc_14051583E
 * 0000000140515804: cmp     bl, 0Fh
 * 0000000140515807: ja      short loc_14051583E
 * 0000000140515809: cmp     al, 2
 * 000000014051580B: jb      short loc_14051583E
 * 000000014051580D: mov     r9, gs:20h
 * 0000000140515816: movzx   ecx, bl
 * 0000000140515819: inc     ecx
 * 000000014051581B: shl     rdi, cl
 * 000000014051581E: mov     r8, [r9+84B8h]
 * 0000000140515825: movzx   eax, di
 * 0000000140515828: not     eax
 * 000000014051582A: mov     edx, [r8+14h]
 * 000000014051582E: and     edx, eax
 * 0000000140515830: mov     [r8+14h], edx
 * 0000000140515834: jnz     short loc_14051583E
 * 0000000140515836: mov     rcx, r9
 * 0000000140515839: call    KiRemoveSystemWorkPriorityKick
 * 000000014051583E: movzx   eax, bl
 * 0000000140515841: mov     cr8, rax
 * 0000000140515845: mov     rbx, [rsp+38h+arg_0]
 * 000000014051584A: add     rsp, 30h
 * 000000014051584E: pop     rdi
 * 000000014051584F: retn
 */
