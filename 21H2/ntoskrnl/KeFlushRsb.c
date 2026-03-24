/*
 * XREFs of KeFlushRsb @ 0x14051B218
 * Callers:
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 * Callees:
 *     KiIpiSendPacket @ 0x14027AE48 (KiIpiSendPacket.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiFlushCurrentRsb @ 0x140413D80 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KeFlushRsb @ 0x14051B218
 * Reason: Hex-Rays returned no pseudocode for 0x14051B218
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014051B218: mov     [rsp+arg_0], rbx
 * 000000014051B21D: push    rdi
 * 000000014051B21E: sub     rsp, 30h
 * 000000014051B222: mov     rbx, cr8
 * 000000014051B226: mov     eax, 0Ch
 * 000000014051B22B: mov     cr8, rax
 * 000000014051B22F: mov     eax, cs:KiIrqlFlags
 * 000000014051B235: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 000000014051B239: test    eax, eax
 * 000000014051B23B: jz      short loc_14051B272
 * 000000014051B23D: test    al, 1
 * 000000014051B23F: jz      short loc_14051B272
 * 000000014051B241: cmp     bl, 0Fh
 * 000000014051B244: ja      short loc_14051B272
 * 000000014051B246: mov     rax, gs:20h
 * 000000014051B24F: mov     rdx, rdi
 * 000000014051B252: movzx   ecx, bl
 * 000000014051B255: inc     ecx
 * 000000014051B257: shl     rdx, cl
 * 000000014051B25A: mov     r9, [rax+84B8h]
 * 000000014051B261: and     edx, 1FFCh
 * 000000014051B267: mov     r8d, [r9+14h]
 * 000000014051B26B: or      r8d, edx
 * 000000014051B26E: mov     [r9+14h], r8d
 * 000000014051B272: and     [rsp+38h+var_10], 0
 * 000000014051B278: lea     r8, KiFlushRsbTarget
 * 000000014051B27F: and     [rsp+38h+var_18], 0
 * 000000014051B285: xor     edx, edx
 * 000000014051B287: xor     r9d, r9d
 * 000000014051B28A: lea     ecx, [rdx+1]
 * 000000014051B28D: call    KiIpiSendPacket
 * 000000014051B292: mov     rcx, gs:20h
 * 000000014051B29B: mov     eax, [rcx+2D80h]
 * 000000014051B2A1: test    eax, eax
 * 000000014051B2A3: jz      short loc_14051B2A9
 * 000000014051B2A5: pause
 * 000000014051B2A7: jmp     short loc_14051B29B
 * 000000014051B2A9: call    KiFlushCurrentRsb
 * 000000014051B2AE: mov     eax, cs:KiIrqlFlags
 * 000000014051B2B4: test    eax, eax
 * 000000014051B2B6: jz      short loc_14051B2FE
 * 000000014051B2B8: test    al, 1
 * 000000014051B2BA: jz      short loc_14051B2FE
 * 000000014051B2BC: mov     rax, cr8
 * 000000014051B2C0: cmp     al, 0Fh
 * 000000014051B2C2: ja      short loc_14051B2FE
 * 000000014051B2C4: cmp     bl, 0Fh
 * 000000014051B2C7: ja      short loc_14051B2FE
 * 000000014051B2C9: cmp     al, 2
 * 000000014051B2CB: jb      short loc_14051B2FE
 * 000000014051B2CD: mov     r9, gs:20h
 * 000000014051B2D6: movzx   ecx, bl
 * 000000014051B2D9: inc     ecx
 * 000000014051B2DB: shl     rdi, cl
 * 000000014051B2DE: mov     r8, [r9+84B8h]
 * 000000014051B2E5: movzx   eax, di
 * 000000014051B2E8: not     eax
 * 000000014051B2EA: mov     edx, [r8+14h]
 * 000000014051B2EE: and     edx, eax
 * 000000014051B2F0: mov     [r8+14h], edx
 * 000000014051B2F4: jnz     short loc_14051B2FE
 * 000000014051B2F6: mov     rcx, r9
 * 000000014051B2F9: call    KiRemoveSystemWorkPriorityKick
 * 000000014051B2FE: movzx   eax, bl
 * 000000014051B301: mov     cr8, rax
 * 000000014051B305: mov     rbx, [rsp+38h+arg_0]
 * 000000014051B30A: add     rsp, 30h
 * 000000014051B30E: pop     rdi
 * 000000014051B30F: retn
 */
