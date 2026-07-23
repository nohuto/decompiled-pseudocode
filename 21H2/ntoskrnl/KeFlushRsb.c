/*
 * XREFs of KeFlushRsb @ 0x14051B458
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 * Callees:
 *     KiIpiSendPacket @ 0x140268DE8 (KiIpiSendPacket.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiFlushCurrentRsb @ 0x140413E80 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KeFlushRsb @ 0x14051B458
 * Reason: Hex-Rays returned no pseudocode for 0x14051B458
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014051B458: mov     [rsp+arg_0], rbx
 * 000000014051B45D: push    rdi
 * 000000014051B45E: sub     rsp, 30h
 * 000000014051B462: mov     rbx, cr8
 * 000000014051B466: mov     eax, 0Ch
 * 000000014051B46B: mov     cr8, rax
 * 000000014051B46F: mov     eax, cs:KiIrqlFlags
 * 000000014051B475: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 000000014051B479: test    eax, eax
 * 000000014051B47B: jz      short loc_14051B4B2
 * 000000014051B47D: test    al, 1
 * 000000014051B47F: jz      short loc_14051B4B2
 * 000000014051B481: cmp     bl, 0Fh
 * 000000014051B484: ja      short loc_14051B4B2
 * 000000014051B486: mov     rax, gs:20h
 * 000000014051B48F: mov     rdx, rdi
 * 000000014051B492: movzx   ecx, bl
 * 000000014051B495: inc     ecx
 * 000000014051B497: shl     rdx, cl
 * 000000014051B49A: mov     r9, [rax+84B8h]
 * 000000014051B4A1: and     edx, 1FFCh
 * 000000014051B4A7: mov     r8d, [r9+14h]
 * 000000014051B4AB: or      r8d, edx
 * 000000014051B4AE: mov     [r9+14h], r8d
 * 000000014051B4B2: and     [rsp+38h+var_10], 0
 * 000000014051B4B8: lea     r8, KiFlushRsbTarget
 * 000000014051B4BF: and     [rsp+38h+var_18], 0
 * 000000014051B4C5: xor     edx, edx
 * 000000014051B4C7: xor     r9d, r9d
 * 000000014051B4CA: lea     ecx, [rdx+1]
 * 000000014051B4CD: call    KiIpiSendPacket
 * 000000014051B4D2: mov     rcx, gs:20h
 * 000000014051B4DB: mov     eax, [rcx+2D80h]
 * 000000014051B4E1: test    eax, eax
 * 000000014051B4E3: jz      short loc_14051B4E9
 * 000000014051B4E5: pause
 * 000000014051B4E7: jmp     short loc_14051B4DB
 * 000000014051B4E9: call    KiFlushCurrentRsb
 * 000000014051B4EE: mov     eax, cs:KiIrqlFlags
 * 000000014051B4F4: test    eax, eax
 * 000000014051B4F6: jz      short loc_14051B53E
 * 000000014051B4F8: test    al, 1
 * 000000014051B4FA: jz      short loc_14051B53E
 * 000000014051B4FC: mov     rax, cr8
 * 000000014051B500: cmp     al, 0Fh
 * 000000014051B502: ja      short loc_14051B53E
 * 000000014051B504: cmp     bl, 0Fh
 * 000000014051B507: ja      short loc_14051B53E
 * 000000014051B509: cmp     al, 2
 * 000000014051B50B: jb      short loc_14051B53E
 * 000000014051B50D: mov     r9, gs:20h
 * 000000014051B516: movzx   ecx, bl
 * 000000014051B519: inc     ecx
 * 000000014051B51B: shl     rdi, cl
 * 000000014051B51E: mov     r8, [r9+84B8h]
 * 000000014051B525: movzx   eax, di
 * 000000014051B528: not     eax
 * 000000014051B52A: mov     edx, [r8+14h]
 * 000000014051B52E: and     edx, eax
 * 000000014051B530: mov     [r8+14h], edx
 * 000000014051B534: jnz     short loc_14051B53E
 * 000000014051B536: mov     rcx, r9
 * 000000014051B539: call    KiRemoveSystemWorkPriorityKick
 * 000000014051B53E: movzx   eax, bl
 * 000000014051B541: mov     cr8, rax
 * 000000014051B545: mov     rbx, [rsp+38h+arg_0]
 * 000000014051B54A: add     rsp, 30h
 * 000000014051B54E: pop     rdi
 * 000000014051B54F: retn
 */
