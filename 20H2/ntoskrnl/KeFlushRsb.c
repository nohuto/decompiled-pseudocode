/*
 * XREFs of KeFlushRsb @ 0x1405196D8
 * Callers:
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
 * Callees:
 *     KiIpiSendPacket @ 0x1402EA750 (KiIpiSendPacket.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiFlushCurrentRsb @ 0x140A1A740 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KeFlushRsb @ 0x1405196D8
 * Reason: Hex-Rays returned no pseudocode for 0x1405196D8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001405196D8: mov     [rsp+arg_0], rbx
 * 00000001405196DD: push    rdi
 * 00000001405196DE: sub     rsp, 30h
 * 00000001405196E2: mov     rbx, cr8
 * 00000001405196E6: mov     eax, 0Ch
 * 00000001405196EB: mov     cr8, rax
 * 00000001405196EF: mov     eax, cs:KiIrqlFlags
 * 00000001405196F5: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001405196F9: test    eax, eax
 * 00000001405196FB: jz      short loc_140519732
 * 00000001405196FD: test    al, 1
 * 00000001405196FF: jz      short loc_140519732
 * 0000000140519701: cmp     bl, 0Fh
 * 0000000140519704: ja      short loc_140519732
 * 0000000140519706: mov     rax, gs:20h
 * 000000014051970F: mov     rdx, rdi
 * 0000000140519712: movzx   ecx, bl
 * 0000000140519715: inc     ecx
 * 0000000140519717: shl     rdx, cl
 * 000000014051971A: mov     r9, [rax+84B8h]
 * 0000000140519721: and     edx, 1FFCh
 * 0000000140519727: mov     r8d, [r9+14h]
 * 000000014051972B: or      r8d, edx
 * 000000014051972E: mov     [r9+14h], r8d
 * 0000000140519732: and     [rsp+38h+var_10], 0
 * 0000000140519738: lea     r8, KiFlushRsbTarget
 * 000000014051973F: and     [rsp+38h+var_18], 0
 * 0000000140519745: xor     edx, edx
 * 0000000140519747: xor     r9d, r9d
 * 000000014051974A: lea     ecx, [rdx+1]
 * 000000014051974D: call    KiIpiSendPacket
 * 0000000140519752: mov     rcx, gs:20h
 * 000000014051975B: mov     eax, [rcx+2D80h]
 * 0000000140519761: test    eax, eax
 * 0000000140519763: jz      short loc_140519769
 * 0000000140519765: pause
 * 0000000140519767: jmp     short loc_14051975B
 * 0000000140519769: call    KiFlushCurrentRsb
 * 000000014051976E: mov     eax, cs:KiIrqlFlags
 * 0000000140519774: test    eax, eax
 * 0000000140519776: jz      short loc_1405197BE
 * 0000000140519778: test    al, 1
 * 000000014051977A: jz      short loc_1405197BE
 * 000000014051977C: mov     rax, cr8
 * 0000000140519780: cmp     al, 0Fh
 * 0000000140519782: ja      short loc_1405197BE
 * 0000000140519784: cmp     bl, 0Fh
 * 0000000140519787: ja      short loc_1405197BE
 * 0000000140519789: cmp     al, 2
 * 000000014051978B: jb      short loc_1405197BE
 * 000000014051978D: mov     r9, gs:20h
 * 0000000140519796: movzx   ecx, bl
 * 0000000140519799: inc     ecx
 * 000000014051979B: shl     rdi, cl
 * 000000014051979E: mov     r8, [r9+84B8h]
 * 00000001405197A5: movzx   eax, di
 * 00000001405197A8: not     eax
 * 00000001405197AA: mov     edx, [r8+14h]
 * 00000001405197AE: and     edx, eax
 * 00000001405197B0: mov     [r8+14h], edx
 * 00000001405197B4: jnz     short loc_1405197BE
 * 00000001405197B6: mov     rcx, r9
 * 00000001405197B9: call    KiRemoveSystemWorkPriorityKick
 * 00000001405197BE: movzx   eax, bl
 * 00000001405197C1: mov     cr8, rax
 * 00000001405197C5: mov     rbx, [rsp+38h+arg_0]
 * 00000001405197CA: add     rsp, 30h
 * 00000001405197CE: pop     rdi
 * 00000001405197CF: retn
 */
