/*
 * XREFs of KiSystemCall64Shadow @ 0x140A19180
 * Callers:
 *     <none>
 * Callees:
 *     KiSystemCall64Shadow @ 0x140A19180 (KiSystemCall64Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64Shadow @ 0x140A19180
 * Reason: Hex-Rays returned no pseudocode for 0x140A19180
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140A19180: swapgs
 * 0000000140A19183: mov     gs:9010h, rsp
 * 0000000140A1918C: mov     rsp, gs:9000h
 * 0000000140A19195: bt      dword ptr gs:9018h, 1
 * 0000000140A1919F: jb      short loc_140A191A4
 * 0000000140A191A1: mov     cr3, rsp
 * 0000000140A191A4: mov     rsp, gs:9008h
 * 0000000140A191AD: push    2Bh ; '+'
 * 0000000140A191AF: push    qword ptr gs:9010h
 * 0000000140A191B7: push    r11
 * 0000000140A191B9: push    33h ; '3'
 * 0000000140A191BB: push    rcx
 * 0000000140A191BC: mov     rcx, r10
 * 0000000140A191BF: sub     rsp, 8
 * 0000000140A191C3: push    rbp
 * 0000000140A191C4: sub     rsp, 158h
 * 0000000140A191CB: lea     rbp, [rsp+190h+var_110]
 * 0000000140A191D3: mov     [rbp+0C0h], rbx
 * 0000000140A191DA: mov     [rbp+0C8h], rdi
 * 0000000140A191E1: mov     [rbp+0D0h], rsi
 * 0000000140A191E8: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140A191EF: jz      short loc_140A191FD
 * 0000000140A191F1: test    byte ptr [rbp+0F0h], 1
 * 0000000140A191F8: jz      short loc_140A191FD
 * 0000000140A191FA: stac
 * 0000000140A191FD: mov     [rbp-50h], rax
 * 0000000140A19201: mov     [rbp-48h], rcx
 * 0000000140A19205: mov     [rbp-40h], rdx
 * 0000000140A19209: mov     rcx, gs:188h
 * 0000000140A19212: mov     rcx, [rcx+220h]
 * 0000000140A19219: mov     rcx, [rcx+9E0h]
 * 0000000140A19220: mov     gs:270h, rcx
 * 0000000140A19229: mov     cl, gs:850h
 * 0000000140A19231: mov     gs:851h, cl
 * 0000000140A19239: mov     cl, gs:278h
 * 0000000140A19241: mov     gs:852h, cl
 * 0000000140A19249: movzx   eax, byte ptr gs:27Bh
 * 0000000140A19252: cmp     gs:27Ah, al
 * 0000000140A1925A: jz      short loc_140A1926D
 * 0000000140A1925C: mov     gs:27Ah, al
 * 0000000140A19264: mov     ecx, 48h ; 'H'
 * 0000000140A19269: xor     edx, edx
 * 0000000140A1926B: wrmsr
 * 0000000140A1926D: movzx   edx, byte ptr gs:278h
 * 0000000140A19276: test    edx, 8
 * 0000000140A1927C: jz      short loc_140A19295
 * 0000000140A1927E: mov     eax, 1
 * 0000000140A19283: xor     edx, edx
 * 0000000140A19285: mov     ecx, 49h ; 'I'
 * 0000000140A1928A: wrmsr
 * 0000000140A1928C: movzx   edx, byte ptr gs:278h
 * 0000000140A19295: test    edx, 2
 * 0000000140A1929B: jz      loc_140A193C6
 * 0000000140A192A1: call    loc_140A193B4
 * 0000000140A192A6: add     rsp, 8
 * 0000000140A192AA: call    loc_140A193BD
 * 0000000140A192AF: add     rsp, 8
 * 0000000140A192B3: call    loc_140A192A6
 * 0000000140A192B8: add     rsp, 8
 * 0000000140A192BC: call    loc_140A192AF
 * 0000000140A192C1: add     rsp, 8
 * 0000000140A192C5: call    loc_140A192B8
 * 0000000140A192CA: add     rsp, 8
 * 0000000140A192CE: call    loc_140A192C1
 * 0000000140A192D3: add     rsp, 8
 * 0000000140A192D7: call    loc_140A192CA
 * 0000000140A192DC: add     rsp, 8
 * 0000000140A192E0: call    loc_140A192D3
 * 0000000140A192E5: add     rsp, 8
 * 0000000140A192E9: call    loc_140A192DC
 * 0000000140A192EE: add     rsp, 8
 * 0000000140A192F2: call    loc_140A192E5
 * 0000000140A192F7: add     rsp, 8
 * 0000000140A192FB: call    loc_140A192EE
 * 0000000140A19300: add     rsp, 8
 * 0000000140A19304: call    loc_140A192F7
 * 0000000140A19309: add     rsp, 8
 * 0000000140A1930D: call    loc_140A19300
 * 0000000140A19312: add     rsp, 8
 * 0000000140A19316: call    loc_140A19309
 * 0000000140A1931B: add     rsp, 8
 * 0000000140A1931F: call    loc_140A19312
 * 0000000140A19324: add     rsp, 8
 * 0000000140A19328: call    loc_140A1931B
 * 0000000140A1932D: add     rsp, 8
 * 0000000140A19331: call    loc_140A19324
 * 0000000140A19336: add     rsp, 8
 * 0000000140A1933A: call    loc_140A1932D
 * 0000000140A1933F: add     rsp, 8
 * 0000000140A19343: call    loc_140A19336
 * 0000000140A19348: add     rsp, 8
 * 0000000140A1934C: call    loc_140A1933F
 * 0000000140A19351: add     rsp, 8
 * 0000000140A19355: call    loc_140A19348
 * 0000000140A1935A: add     rsp, 8
 * 0000000140A1935E: call    loc_140A19351
 * 0000000140A19363: add     rsp, 8
 * 0000000140A19367: call    loc_140A1935A
 * 0000000140A1936C: add     rsp, 8
 * 0000000140A19370: call    loc_140A19363
 * 0000000140A19375: add     rsp, 8
 * 0000000140A19379: call    loc_140A1936C
 * 0000000140A1937E: add     rsp, 8
 * 0000000140A19382: call    loc_140A19375
 * 0000000140A19387: add     rsp, 8
 * 0000000140A1938B: call    loc_140A1937E
 * 0000000140A19390: add     rsp, 8
 * 0000000140A19394: call    loc_140A19387
 * 0000000140A19399: add     rsp, 8
 * 0000000140A1939D: call    loc_140A19390
 * 0000000140A193A2: add     rsp, 8
 * 0000000140A193A6: call    loc_140A19399
 * 0000000140A193AB: add     rsp, 8
 * 0000000140A193AF: call    loc_140A193A2
 * 0000000140A193B4: add     rsp, 8
 * 0000000140A193B8: call    loc_140A193AB
 * 0000000140A193BD: add     rsp, 8
 * 0000000140A193C1: mov     eax, 0DADAh
 * 0000000140A193C6: lfence
 * 0000000140A193C9: mov     byte ptr gs:853h, 0
 * 0000000140A193D2: jmp     KiSystemServiceUser
 * 0000000140A193D7: retn
 */
