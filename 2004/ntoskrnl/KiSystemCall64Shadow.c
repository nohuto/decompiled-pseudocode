/*
 * XREFs of KiSystemCall64Shadow @ 0x140A13180
 * Callers:
 *     <none>
 * Callees:
 *     KiSystemCall64Shadow @ 0x140A13180 (KiSystemCall64Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64Shadow @ 0x140A13180
 * Reason: Hex-Rays returned no pseudocode for 0x140A13180
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140A13180: swapgs
 * 0000000140A13183: mov     gs:9010h, rsp
 * 0000000140A1318C: mov     rsp, gs:9000h
 * 0000000140A13195: bt      dword ptr gs:9018h, 1
 * 0000000140A1319F: jb      short loc_140A131A4
 * 0000000140A131A1: mov     cr3, rsp
 * 0000000140A131A4: mov     rsp, gs:9008h
 * 0000000140A131AD: push    2Bh ; '+'
 * 0000000140A131AF: push    qword ptr gs:9010h
 * 0000000140A131B7: push    r11
 * 0000000140A131B9: push    33h ; '3'
 * 0000000140A131BB: push    rcx
 * 0000000140A131BC: mov     rcx, r10
 * 0000000140A131BF: sub     rsp, 8
 * 0000000140A131C3: push    rbp
 * 0000000140A131C4: sub     rsp, 158h
 * 0000000140A131CB: lea     rbp, [rsp+190h+var_110]
 * 0000000140A131D3: mov     [rbp+0C0h], rbx
 * 0000000140A131DA: mov     [rbp+0C8h], rdi
 * 0000000140A131E1: mov     [rbp+0D0h], rsi
 * 0000000140A131E8: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140A131EF: jz      short loc_140A131FD
 * 0000000140A131F1: test    byte ptr [rbp+0F0h], 1
 * 0000000140A131F8: jz      short loc_140A131FD
 * 0000000140A131FA: stac
 * 0000000140A131FD: mov     [rbp-50h], rax
 * 0000000140A13201: mov     [rbp-48h], rcx
 * 0000000140A13205: mov     [rbp-40h], rdx
 * 0000000140A13209: mov     rcx, gs:188h
 * 0000000140A13212: mov     rcx, [rcx+220h]
 * 0000000140A13219: mov     rcx, [rcx+9E0h]
 * 0000000140A13220: mov     gs:270h, rcx
 * 0000000140A13229: mov     cl, gs:850h
 * 0000000140A13231: mov     gs:851h, cl
 * 0000000140A13239: mov     cl, gs:278h
 * 0000000140A13241: mov     gs:852h, cl
 * 0000000140A13249: movzx   eax, byte ptr gs:27Bh
 * 0000000140A13252: cmp     gs:27Ah, al
 * 0000000140A1325A: jz      short loc_140A1326D
 * 0000000140A1325C: mov     gs:27Ah, al
 * 0000000140A13264: mov     ecx, 48h ; 'H'
 * 0000000140A13269: xor     edx, edx
 * 0000000140A1326B: wrmsr
 * 0000000140A1326D: movzx   edx, byte ptr gs:278h
 * 0000000140A13276: test    edx, 8
 * 0000000140A1327C: jz      short loc_140A13291
 * 0000000140A1327E: mov     eax, 1
 * 0000000140A13283: xor     edx, edx
 * 0000000140A13285: mov     ecx, 49h ; 'I'
 * 0000000140A1328A: wrmsr
 * 0000000140A1328C: jmp     loc_140A133CF
 * 0000000140A13291: test    edx, 2
 * 0000000140A13297: jz      loc_140A133CC
 * 0000000140A1329D: test    byte ptr gs:279h, 4
 * 0000000140A132A6: jnz     loc_140A133CC
 * 0000000140A132AC: call    loc_140A133BF
 * 0000000140A132B1: add     rsp, 8
 * 0000000140A132B5: call    loc_140A133C8
 * 0000000140A132BA: add     rsp, 8
 * 0000000140A132BE: call    loc_140A132B1
 * 0000000140A132C3: add     rsp, 8
 * 0000000140A132C7: call    loc_140A132BA
 * 0000000140A132CC: add     rsp, 8
 * 0000000140A132D0: call    loc_140A132C3
 * 0000000140A132D5: add     rsp, 8
 * 0000000140A132D9: call    loc_140A132CC
 * 0000000140A132DE: add     rsp, 8
 * 0000000140A132E2: call    loc_140A132D5
 * 0000000140A132E7: add     rsp, 8
 * 0000000140A132EB: call    loc_140A132DE
 * 0000000140A132F0: add     rsp, 8
 * 0000000140A132F4: call    loc_140A132E7
 * 0000000140A132F9: add     rsp, 8
 * 0000000140A132FD: call    loc_140A132F0
 * 0000000140A13302: add     rsp, 8
 * 0000000140A13306: call    loc_140A132F9
 * 0000000140A1330B: add     rsp, 8
 * 0000000140A1330F: call    loc_140A13302
 * 0000000140A13314: add     rsp, 8
 * 0000000140A13318: call    loc_140A1330B
 * 0000000140A1331D: add     rsp, 8
 * 0000000140A13321: call    loc_140A13314
 * 0000000140A13326: add     rsp, 8
 * 0000000140A1332A: call    loc_140A1331D
 * 0000000140A1332F: add     rsp, 8
 * 0000000140A13333: call    loc_140A13326
 * 0000000140A13338: add     rsp, 8
 * 0000000140A1333C: call    loc_140A1332F
 * 0000000140A13341: add     rsp, 8
 * 0000000140A13345: call    loc_140A13338
 * 0000000140A1334A: add     rsp, 8
 * 0000000140A1334E: call    loc_140A13341
 * 0000000140A13353: add     rsp, 8
 * 0000000140A13357: call    loc_140A1334A
 * 0000000140A1335C: add     rsp, 8
 * 0000000140A13360: call    loc_140A13353
 * 0000000140A13365: add     rsp, 8
 * 0000000140A13369: call    loc_140A1335C
 * 0000000140A1336E: add     rsp, 8
 * 0000000140A13372: call    loc_140A13365
 * 0000000140A13377: add     rsp, 8
 * 0000000140A1337B: call    loc_140A1336E
 * 0000000140A13380: add     rsp, 8
 * 0000000140A13384: call    loc_140A13377
 * 0000000140A13389: add     rsp, 8
 * 0000000140A1338D: call    loc_140A13380
 * 0000000140A13392: add     rsp, 8
 * 0000000140A13396: call    loc_140A13389
 * 0000000140A1339B: add     rsp, 8
 * 0000000140A1339F: call    loc_140A13392
 * 0000000140A133A4: add     rsp, 8
 * 0000000140A133A8: call    loc_140A1339B
 * 0000000140A133AD: add     rsp, 8
 * 0000000140A133B1: call    loc_140A133A4
 * 0000000140A133B6: add     rsp, 8
 * 0000000140A133BA: call    loc_140A133AD
 * 0000000140A133BF: add     rsp, 8
 * 0000000140A133C3: call    loc_140A133B6
 * 0000000140A133C8: add     rsp, 8
 * 0000000140A133CC: lfence
 * 0000000140A133CF: mov     byte ptr gs:853h, 0
 * 0000000140A133D8: jmp     KiSystemServiceUser
 * 0000000140A133DD: retn
 */
