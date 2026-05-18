/*
 * XREFs of sub_180049844 @ 0x180049844
 * Callers:
 *     sub_180002F70 @ 0x180002F70 (sub_180002F70.c)
 *     sub_180003170 @ 0x180003170 (sub_180003170.c)
 *     sub_180003260 @ 0x180003260 (sub_180003260.c)
 *     sub_180003350 @ 0x180003350 (sub_180003350.c)
 *     sub_180003440 @ 0x180003440 (sub_180003440.c)
 *     sub_180003530 @ 0x180003530 (sub_180003530.c)
 *     sub_180003620 @ 0x180003620 (sub_180003620.c)
 *     sub_180003710 @ 0x180003710 (sub_180003710.c)
 *     sub_180003800 @ 0x180003800 (sub_180003800.c)
 *     sub_1800039B0 @ 0x1800039B0 (sub_1800039B0.c)
 *     sub_180003AA0 @ 0x180003AA0 (sub_180003AA0.c)
 *     sub_180003B90 @ 0x180003B90 (sub_180003B90.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180010020 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     sub_180031AE8 @ 0x180031AE8 (sub_180031AE8.c)
 *     sub_1800494AC @ 0x1800494AC (sub_1800494AC.c)
 *     sub_1800496A8 @ 0x1800496A8 (sub_1800496A8.c)
 *     sub_1800496BC @ 0x1800496BC (sub_1800496BC.c)
 *     sub_1800496D0 @ 0x1800496D0 (sub_1800496D0.c)
 *     sub_1800D4B98 @ 0x1800D4B98 (sub_1800D4B98.c)
 *     sub_1800D4C70 @ 0x1800D4C70 (sub_1800D4C70.c)
 *     _alloca_probe @ 0x180123F50 (_alloca_probe.c)
 *     _Init_thread_footer @ 0x180124618 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180124678 (_Init_thread_header.c)
 */

/*
 * Hex-Rays decompilation failed for sub_180049844 @ 0x180049844
 * Reason: Hex-Rays returned no pseudocode for 0x180049844
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180049844: mov     rax, rsp
 * 0000000180049847: mov     [rax+10h], rbx
 * 000000018004984B: mov     [rax+18h], rsi
 * 000000018004984F: mov     [rax+20h], rdi
 * 0000000180049853: push    rbp
 * 0000000180049854: push    r12
 * 0000000180049856: push    r13
 * 0000000180049858: push    r14
 * 000000018004985A: push    r15
 * 000000018004985C: lea     rbp, [rax-9E18h]
 * 0000000180049863: mov     eax, 9EF0h
 * 0000000180049868: call    _alloca_probe
 * 000000018004986D: sub     rsp, rax
 * 0000000180049870: mov     ebx, cs:TlsIndex
 * 0000000180049876: mov     rdi, gs:58h
 * 000000018004987F: mov     r15d, 2Ch ; ','
 * 0000000180049885: mov     rax, [rdi+rbx*8]
 * 0000000180049889: or      r14d, 0FFFFFFFFh
 * 000000018004988D: lea     esi, [r14+2]
 * 0000000180049891: lea     r12d, [r14+0Ah]
 * 0000000180049895: lea     r13, aStandardshader_0; "StandardShader/ShaderModel40/"
 * 000000018004989C: mov     eax, [r15+rax]
 * 00000001800498A0: cmp     cs:dword_18021FC10, eax
 * 00000001800498A6: jle     loc_180049986
 * 00000001800498AC: lea     rcx, dword_18021FC10
 * 00000001800498B3: call    _Init_thread_header
 * 00000001800498B8: cmp     cs:dword_18021FC10, r14d
 * 00000001800498BF: jnz     loc_180049986
 * 00000001800498C5: lea     rax, unk_180144C30
 * 00000001800498CC: mov     qword ptr [rsp+9F10h+var_9EC0], rax
 * 00000001800498D1: lea     rax, unk_18014B014
 * 00000001800498D8: mov     qword ptr [rsp+9F10h+var_9EC0+8], rax
 * 00000001800498DD: movups  xmm0, [rsp+9F10h+var_9EC0]
 * 00000001800498E2: movups  [rbp+9E10h+var_89F0], xmm0
 * 00000001800498E9: mov     dword ptr [rbp+9E10h+var_89E0], 5
 * 00000001800498F3: mov     dword ptr [rbp+9E10h+var_89E0+4], esi
 * 00000001800498F9: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800498FE: movups  xmm0, [rbp+9E10h+var_89E0]
 * 0000000180049905: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004990A: call    sub_1800496D0
 * 000000018004990F: mov     r8, rax
 * 0000000180049912: mov     r9d, r12d
 * 0000000180049915: xor     edx, edx
 * 0000000180049917: lea     rcx, [rbp+9E10h+Src]; Src
 * 000000018004991E: call    sub_1800D4B98
 * 0000000180049923: nop
 * 0000000180049924: mov     r8, rax
 * 0000000180049927: mov     rdx, r13
 * 000000018004992A: lea     rcx, [rbp+9E10h+var_7020]
 * 0000000180049931: call    sub_1800494AC
 * 0000000180049936: nop
 * 0000000180049937: lea     r8, aPixel; "/Pixel"
 * 000000018004993E: mov     rdx, rax
 * 0000000180049941: lea     rcx, [rbp+9E10h+var_7040]
 * 0000000180049948: call    sub_180031AE8
 * 000000018004994D: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180049952: mov     rcx, rax
 * 0000000180049955: call    sub_1800D4C70
 * 000000018004995A: mov     cs:byte_18021FC0C, al
 * 0000000180049960: lea     rcx, [rbp+9E10h+var_7020]; void *
 * 0000000180049967: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004996C: nop
 * 000000018004996D: lea     rcx, [rbp+9E10h+Src]; void *
 * 0000000180049974: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049979: nop
 * 000000018004997A: lea     rcx, dword_18021FC10
 * 0000000180049981: call    _Init_thread_footer
 * 0000000180049986: mov     rax, [rdi+rbx*8]
 * 000000018004998A: mov     eax, [r15+rax]
 * 000000018004998E: cmp     cs:dword_18021FC18, eax
 * 0000000180049994: jle     loc_180049A75
 * 000000018004999A: lea     rcx, dword_18021FC18
 * 00000001800499A1: call    _Init_thread_header
 * 00000001800499A6: cmp     cs:dword_18021FC18, r14d
 * 00000001800499AD: jnz     loc_180049A75
 * 00000001800499B3: lea     rax, unk_18014B020
 * 00000001800499BA: mov     qword ptr [rsp+9F10h+var_9EB0], rax
 * 00000001800499BF: lea     rax, unk_18014BA18
 * 00000001800499C6: mov     qword ptr [rsp+9F10h+var_9EB0+8], rax
 * 00000001800499CB: movups  xmm0, [rsp+9F10h+var_9EB0]
 * 00000001800499D0: movups  [rbp+9E10h+var_89D0], xmm0
 * 00000001800499D7: mov     dword ptr [rbp+9E10h+var_89C0], 5
 * 00000001800499E1: mov     dword ptr [rbp+9E10h+var_89C0+4], esi
 * 00000001800499E7: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800499EC: movups  xmm0, [rbp+9E10h+var_89C0]
 * 00000001800499F3: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800499F8: call    sub_1800496D0
 * 00000001800499FD: mov     r8, rax
 * 0000000180049A00: mov     r9d, r12d
 * 0000000180049A03: mov     rdx, rsi
 * 0000000180049A06: lea     rcx, [rbp+9E10h+var_6FA0]; Src
 * 0000000180049A0D: call    sub_1800D4B98
 * 0000000180049A12: nop
 * 0000000180049A13: mov     r8, rax
 * 0000000180049A16: mov     rdx, r13
 * 0000000180049A19: lea     rcx, [rbp+9E10h+var_6FC0]
 * 0000000180049A20: call    sub_1800494AC
 * 0000000180049A25: nop
 * 0000000180049A26: lea     r8, aPixel; "/Pixel"
 * 0000000180049A2D: mov     rdx, rax
 * 0000000180049A30: lea     rcx, [rbp+9E10h+var_6FE0]
 * 0000000180049A37: call    sub_180031AE8
 * 0000000180049A3C: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180049A41: mov     rcx, rax
 * 0000000180049A44: call    sub_1800D4C70
 * 0000000180049A49: mov     cs:byte_18021FC14, al
 * 0000000180049A4F: lea     rcx, [rbp+9E10h+var_6FC0]; void *
 * 0000000180049A56: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049A5B: nop
 * 0000000180049A5C: lea     rcx, [rbp+9E10h+var_6FA0]; void *
 * 0000000180049A63: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049A68: nop
 * 0000000180049A69: lea     rcx, dword_18021FC18
 * 0000000180049A70: call    _Init_thread_footer
 * 0000000180049A75: mov     rax, [rdi+rbx*8]
 * 0000000180049A79: mov     eax, [r15+rax]
 * 0000000180049A7D: cmp     cs:dword_18021FC20, eax
 * 0000000180049A83: jle     loc_180049B66
 * 0000000180049A89: lea     rcx, dword_18021FC20
 * 0000000180049A90: call    _Init_thread_header
 * 0000000180049A95: cmp     cs:dword_18021FC20, r14d
 * 0000000180049A9C: jnz     loc_180049B66
 * 0000000180049AA2: lea     rax, unk_180144C30
 * 0000000180049AA9: mov     qword ptr [rsp+9F10h+var_9EA0], rax
 * 0000000180049AAE: lea     rax, unk_18014B014
 * 0000000180049AB5: mov     qword ptr [rsp+9F10h+var_9EA0+8], rax
 * 0000000180049ABA: movups  xmm0, [rsp+9F10h+var_9EA0]
 * 0000000180049ABF: movups  [rbp+9E10h+var_89B0], xmm0
 * 0000000180049AC6: mov     dword ptr [rbp+9E10h+var_89A0], 5
 * 0000000180049AD0: mov     dword ptr [rbp+9E10h+var_89A0+4], esi
 * 0000000180049AD6: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180049ADB: movups  xmm0, [rbp+9E10h+var_89A0]
 * 0000000180049AE2: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180049AE7: call    sub_1800496D0
 * 0000000180049AEC: mov     r8, rax
 * 0000000180049AEF: mov     r9d, r12d
 * 0000000180049AF2: mov     edx, 2
 * 0000000180049AF7: lea     rcx, [rbp+9E10h+var_6F40]; Src
 * 0000000180049AFE: call    sub_1800D4B98
 * 0000000180049B03: nop
 * 0000000180049B04: mov     r8, rax
 * 0000000180049B07: mov     rdx, r13
 * 0000000180049B0A: lea     rcx, [rbp+9E10h+var_6F60]
 * 0000000180049B11: call    sub_1800494AC
 * 0000000180049B16: nop
 * 0000000180049B17: lea     r8, aPixel; "/Pixel"
 * 0000000180049B1E: mov     rdx, rax
 * 0000000180049B21: lea     rcx, [rbp+9E10h+var_6F80]
 * 0000000180049B28: call    sub_180031AE8
 * 0000000180049B2D: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180049B32: mov     rcx, rax
 * 0000000180049B35: call    sub_1800D4C70
 * 0000000180049B3A: mov     cs:byte_18021FC1C, al
 * 0000000180049B40: lea     rcx, [rbp+9E10h+var_6F60]; void *
 * 0000000180049B47: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049B4C: nop
 * 0000000180049B4D: lea     rcx, [rbp+9E10h+var_6F40]; void *
 * 0000000180049B54: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049B59: nop
 * 0000000180049B5A: lea     rcx, dword_18021FC20
 * 0000000180049B61: call    _Init_thread_footer
 * 0000000180049B66: mov     rax, [rdi+rbx*8]
 * 0000000180049B6A: mov     eax, [r15+rax]
 * 0000000180049B6E: cmp     cs:dword_18021FC28, eax
 * 0000000180049B74: jle     loc_180049C54
 * 0000000180049B7A: lea     rcx, dword_18021FC28
 * 0000000180049B81: call    _Init_thread_header
 * 0000000180049B86: cmp     cs:dword_18021FC28, r14d
 * 0000000180049B8D: jnz     loc_180049C54
 * 0000000180049B93: lea     rax, unk_18014BA20
 * 0000000180049B9A: mov     qword ptr [rbp+9E10h+var_9E90], rax
 * 0000000180049B9E: lea     rax, unk_18014EBC4
 * 0000000180049BA5: mov     qword ptr [rbp+9E10h+var_9E90+8], rax
 * 0000000180049BA9: movups  xmm0, [rbp+9E10h+var_9E90]
 * 0000000180049BAD: movups  [rbp+9E10h+var_8990], xmm0
 * 0000000180049BB4: mov     dword ptr [rbp+9E10h+var_8980], 5
 * 0000000180049BBE: mov     dword ptr [rbp+9E10h+var_8980+4], esi
 * 0000000180049BC4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180049BC9: movups  xmm0, [rbp+9E10h+var_8980]
 * 0000000180049BD0: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180049BD5: call    sub_1800496D0
 * 0000000180049BDA: mov     r8, rax
 * 0000000180049BDD: mov     r9d, r12d
 * 0000000180049BE0: mov     edx, 4
 * 0000000180049BE5: lea     rcx, [rbp+9E10h+var_6EE0]; Src
 * 0000000180049BEC: call    sub_1800D4B98
 * 0000000180049BF1: nop
 * 0000000180049BF2: mov     r8, rax
 * 0000000180049BF5: mov     rdx, r13
 * 0000000180049BF8: lea     rcx, [rbp+9E10h+var_6F00]
 * 0000000180049BFF: call    sub_1800494AC
 * 0000000180049C04: nop
 * 0000000180049C05: lea     r8, aPixel; "/Pixel"
 * 0000000180049C0C: mov     rdx, rax
 * 0000000180049C0F: lea     rcx, [rbp+9E10h+var_6F20]
 * 0000000180049C16: call    sub_180031AE8
 * 0000000180049C1B: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180049C20: mov     rcx, rax
 * 0000000180049C23: call    sub_1800D4C70
 * 0000000180049C28: mov     cs:byte_18021FC24, al
 * 0000000180049C2E: lea     rcx, [rbp+9E10h+var_6F00]; void *
 * 0000000180049C35: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049C3A: nop
 * 0000000180049C3B: lea     rcx, [rbp+9E10h+var_6EE0]; void *
 * 0000000180049C42: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049C47: nop
 * 0000000180049C48: lea     rcx, dword_18021FC28
 * 0000000180049C4F: call    _Init_thread_footer
 * 0000000180049C54: mov     rax, [rdi+rbx*8]
 * 0000000180049C58: mov     ecx, [r15+rax]
 * 0000000180049C5C: cmp     cs:dword_18021FC30, ecx
 * 0000000180049C62: jle     loc_180049D42
 * 0000000180049C68: lea     rcx, dword_18021FC30
 * 0000000180049C6F: call    _Init_thread_header
 * 0000000180049C74: cmp     cs:dword_18021FC30, r14d
 * 0000000180049C7B: jnz     loc_180049D42
 * 0000000180049C81: lea     rax, unk_18014EBD0
 * 0000000180049C88: mov     qword ptr [rbp+9E10h+var_9E80], rax
 * 0000000180049C8C: lea     rax, unk_18014F5C8
 * 0000000180049C93: mov     qword ptr [rbp+9E10h+var_9E80+8], rax
 * 0000000180049C97: movups  xmm0, [rbp+9E10h+var_9E80]
 * 0000000180049C9B: movups  [rbp+9E10h+var_8970], xmm0
 * 0000000180049CA2: mov     dword ptr [rbp+9E10h+var_8960], 5
 * 0000000180049CAC: mov     dword ptr [rbp+9E10h+var_8960+4], esi
 * 0000000180049CB2: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180049CB7: movups  xmm0, [rbp+9E10h+var_8960]
 * 0000000180049CBE: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180049CC3: call    sub_1800496D0
 * 0000000180049CC8: mov     r8, rax
 * 0000000180049CCB: mov     r9d, r12d
 * 0000000180049CCE: mov     edx, 5
 * 0000000180049CD3: lea     rcx, [rbp+9E10h+var_6E80]; Src
 * 0000000180049CDA: call    sub_1800D4B98
 * 0000000180049CDF: nop
 * 0000000180049CE0: mov     r8, rax
 * 0000000180049CE3: mov     rdx, r13
 * 0000000180049CE6: lea     rcx, [rbp+9E10h+var_6EA0]
 * 0000000180049CED: call    sub_1800494AC
 * 0000000180049CF2: nop
 * 0000000180049CF3: lea     r8, aPixel; "/Pixel"
 * 0000000180049CFA: mov     rdx, rax
 * 0000000180049CFD: lea     rcx, [rbp+9E10h+var_6EC0]
 * 0000000180049D04: call    sub_180031AE8
 * 0000000180049D09: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180049D0E: mov     rcx, rax
 * 0000000180049D11: call    sub_1800D4C70
 * 0000000180049D16: mov     cs:byte_18021FC2C, al
 * 0000000180049D1C: lea     rcx, [rbp+9E10h+var_6EA0]; void *
 * 0000000180049D23: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049D28: nop
 * 0000000180049D29: lea     rcx, [rbp+9E10h+var_6E80]; void *
 * 0000000180049D30: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049D35: nop
 * 0000000180049D36: lea     rcx, dword_18021FC30
 * 0000000180049D3D: call    _Init_thread_footer
 * 0000000180049D42: mov     rax, [rdi+rbx*8]
 * 0000000180049D46: mov     eax, [r15+rax]
 * 0000000180049D4A: cmp     cs:dword_18021FC38, eax
 * 0000000180049D50: jle     loc_180049E30
 * 0000000180049D56: lea     rcx, dword_18021FC38
 * 0000000180049D5D: call    _Init_thread_header
 * 0000000180049D62: cmp     cs:dword_18021FC38, r14d
 * 0000000180049D69: jnz     loc_180049E30
 * 0000000180049D6F: lea     rax, unk_18014BA20
 * 0000000180049D76: mov     qword ptr [rbp+9E10h+var_9E70], rax
 * 0000000180049D7A: lea     rax, unk_18014EBC4
 * 0000000180049D81: mov     qword ptr [rbp+9E10h+var_9E70+8], rax
 * 0000000180049D85: movups  xmm0, [rbp+9E10h+var_9E70]
 * 0000000180049D89: movups  [rbp+9E10h+var_8950], xmm0
 * 0000000180049D90: mov     dword ptr [rbp+9E10h+var_8940], 5
 * 0000000180049D9A: mov     dword ptr [rbp+9E10h+var_8940+4], esi
 * 0000000180049DA0: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180049DA5: movups  xmm0, [rbp+9E10h+var_8940]
 * 0000000180049DAC: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180049DB1: call    sub_1800496D0
 * 0000000180049DB6: mov     r8, rax
 * 0000000180049DB9: mov     r9d, r12d
 * 0000000180049DBC: mov     edx, 6
 * 0000000180049DC1: lea     rcx, [rbp+9E10h+var_6E20]; Src
 * 0000000180049DC8: call    sub_1800D4B98
 * 0000000180049DCD: nop
 * 0000000180049DCE: mov     r8, rax
 * 0000000180049DD1: mov     rdx, r13
 * 0000000180049DD4: lea     rcx, [rbp+9E10h+var_6E40]
 * 0000000180049DDB: call    sub_1800494AC
 * 0000000180049DE0: nop
 * 0000000180049DE1: lea     r8, aPixel; "/Pixel"
 * 0000000180049DE8: mov     rdx, rax
 * 0000000180049DEB: lea     rcx, [rbp+9E10h+var_6E60]
 * 0000000180049DF2: call    sub_180031AE8
 * 0000000180049DF7: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180049DFC: mov     rcx, rax
 * 0000000180049DFF: call    sub_1800D4C70
 * 0000000180049E04: mov     cs:byte_18021FC34, al
 * 0000000180049E0A: lea     rcx, [rbp+9E10h+var_6E40]; void *
 * 0000000180049E11: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049E16: nop
 * 0000000180049E17: lea     rcx, [rbp+9E10h+var_6E20]; void *
 * 0000000180049E1E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049E23: nop
 * 0000000180049E24: lea     rcx, dword_18021FC38
 * 0000000180049E2B: call    _Init_thread_footer
 * 0000000180049E30: mov     rax, [rdi+rbx*8]
 * 0000000180049E34: mov     eax, [r15+rax]
 * 0000000180049E38: cmp     cs:dword_18021FC40, eax
 * 0000000180049E3E: jle     loc_180049F1E
 * 0000000180049E44: lea     rcx, dword_18021FC40
 * 0000000180049E4B: call    _Init_thread_header
 * 0000000180049E50: cmp     cs:dword_18021FC40, r14d
 * 0000000180049E57: jnz     loc_180049F1E
 * 0000000180049E5D: lea     rax, unk_18014F5D0
 * 0000000180049E64: mov     qword ptr [rbp+9E10h+var_9E60], rax
 * 0000000180049E68: lea     rax, unk_180155B5C
 * 0000000180049E6F: mov     qword ptr [rbp+9E10h+var_9E60+8], rax
 * 0000000180049E73: movups  xmm0, [rbp+9E10h+var_9E60]
 * 0000000180049E77: movups  [rbp+9E10h+var_8930], xmm0
 * 0000000180049E7E: mov     dword ptr [rbp+9E10h+var_8920], 5
 * 0000000180049E88: mov     dword ptr [rbp+9E10h+var_8920+4], esi
 * 0000000180049E8E: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180049E93: movups  xmm0, [rbp+9E10h+var_8920]
 * 0000000180049E9A: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180049E9F: call    sub_1800496D0
 * 0000000180049EA4: mov     r8, rax
 * 0000000180049EA7: mov     r9d, r12d
 * 0000000180049EAA: mov     edx, 8
 * 0000000180049EAF: lea     rcx, [rbp+9E10h+var_6DC0]; Src
 * 0000000180049EB6: call    sub_1800D4B98
 * 0000000180049EBB: nop
 * 0000000180049EBC: mov     r8, rax
 * 0000000180049EBF: mov     rdx, r13
 * 0000000180049EC2: lea     rcx, [rbp+9E10h+var_6DE0]
 * 0000000180049EC9: call    sub_1800494AC
 * 0000000180049ECE: nop
 * 0000000180049ECF: lea     r8, aPixel; "/Pixel"
 * 0000000180049ED6: mov     rdx, rax
 * 0000000180049ED9: lea     rcx, [rbp+9E10h+var_6E00]
 * 0000000180049EE0: call    sub_180031AE8
 * 0000000180049EE5: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180049EEA: mov     rcx, rax
 * 0000000180049EED: call    sub_1800D4C70
 * 0000000180049EF2: mov     cs:byte_18021FC3C, al
 * 0000000180049EF8: lea     rcx, [rbp+9E10h+var_6DE0]; void *
 * 0000000180049EFF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049F04: nop
 * 0000000180049F05: lea     rcx, [rbp+9E10h+var_6DC0]; void *
 * 0000000180049F0C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049F11: nop
 * 0000000180049F12: lea     rcx, dword_18021FC40
 * 0000000180049F19: call    _Init_thread_footer
 * 0000000180049F1E: mov     rax, [rdi+rbx*8]
 * 0000000180049F22: mov     eax, [r15+rax]
 * 0000000180049F26: cmp     cs:dword_18021FC48, eax
 * 0000000180049F2C: jle     loc_18004A00A
 * 0000000180049F32: lea     rcx, dword_18021FC48
 * 0000000180049F39: call    _Init_thread_header
 * 0000000180049F3E: cmp     cs:dword_18021FC48, r14d
 * 0000000180049F45: jnz     loc_18004A00A
 * 0000000180049F4B: lea     rax, unk_180155B60
 * 0000000180049F52: mov     qword ptr [rbp+9E10h+var_9E50], rax
 * 0000000180049F56: lea     rax, unk_180156C28
 * 0000000180049F5D: mov     qword ptr [rbp+9E10h+var_9E50+8], rax
 * 0000000180049F61: movups  xmm0, [rbp+9E10h+var_9E50]
 * 0000000180049F65: movups  [rbp+9E10h+var_8910], xmm0
 * 0000000180049F6C: mov     dword ptr [rbp+9E10h+var_8900], 5
 * 0000000180049F76: mov     dword ptr [rbp+9E10h+var_8900+4], esi
 * 0000000180049F7C: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180049F81: movups  xmm0, [rbp+9E10h+var_8900]
 * 0000000180049F88: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180049F8D: call    sub_1800496D0
 * 0000000180049F92: mov     r8, rax
 * 0000000180049F95: mov     r9d, r12d
 * 0000000180049F98: mov     rdx, r12
 * 0000000180049F9B: lea     rcx, [rbp+9E10h+var_6D60]; Src
 * 0000000180049FA2: call    sub_1800D4B98
 * 0000000180049FA7: nop
 * 0000000180049FA8: mov     r8, rax
 * 0000000180049FAB: mov     rdx, r13
 * 0000000180049FAE: lea     rcx, [rbp+9E10h+var_6D80]
 * 0000000180049FB5: call    sub_1800494AC
 * 0000000180049FBA: nop
 * 0000000180049FBB: lea     r8, aPixel; "/Pixel"
 * 0000000180049FC2: mov     rdx, rax
 * 0000000180049FC5: lea     rcx, [rbp+9E10h+var_6DA0]
 * 0000000180049FCC: call    sub_180031AE8
 * 0000000180049FD1: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180049FD6: mov     rcx, rax
 * 0000000180049FD9: call    sub_1800D4C70
 * 0000000180049FDE: mov     cs:byte_18021FC44, al
 * 0000000180049FE4: lea     rcx, [rbp+9E10h+var_6D80]; void *
 * 0000000180049FEB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049FF0: nop
 * 0000000180049FF1: lea     rcx, [rbp+9E10h+var_6D60]; void *
 * 0000000180049FF8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180049FFD: nop
 * 0000000180049FFE: lea     rcx, dword_18021FC48
 * 000000018004A005: call    _Init_thread_footer
 * 000000018004A00A: mov     rax, [rdi+rbx*8]
 * 000000018004A00E: mov     eax, [r15+rax]
 * 000000018004A012: cmp     cs:dword_18021FC50, eax
 * 000000018004A018: jle     loc_18004A0F8
 * 000000018004A01E: lea     rcx, dword_18021FC50
 * 000000018004A025: call    _Init_thread_header
 * 000000018004A02A: cmp     cs:dword_18021FC50, r14d
 * 000000018004A031: jnz     loc_18004A0F8
 * 000000018004A037: lea     rax, unk_18014F5D0
 * 000000018004A03E: mov     qword ptr [rbp+9E10h+var_9E40], rax
 * 000000018004A042: lea     rax, unk_180155B5C
 * 000000018004A049: mov     qword ptr [rbp+9E10h+var_9E40+8], rax
 * 000000018004A04D: movups  xmm0, [rbp+9E10h+var_9E40]
 * 000000018004A051: movups  [rbp+9E10h+var_88F0], xmm0
 * 000000018004A058: mov     dword ptr [rbp+9E10h+var_88E0], 5
 * 000000018004A062: mov     dword ptr [rbp+9E10h+var_88E0+4], esi
 * 000000018004A068: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004A06D: movups  xmm0, [rbp+9E10h+var_88E0]
 * 000000018004A074: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004A079: call    sub_1800496D0
 * 000000018004A07E: mov     r8, rax
 * 000000018004A081: mov     r9d, r12d
 * 000000018004A084: mov     edx, 0Ah
 * 000000018004A089: lea     rcx, [rbp+9E10h+var_6D00]; Src
 * 000000018004A090: call    sub_1800D4B98
 * 000000018004A095: nop
 * 000000018004A096: mov     r8, rax
 * 000000018004A099: mov     rdx, r13
 * 000000018004A09C: lea     rcx, [rbp+9E10h+var_6D20]
 * 000000018004A0A3: call    sub_1800494AC
 * 000000018004A0A8: nop
 * 000000018004A0A9: lea     r8, aPixel; "/Pixel"
 * 000000018004A0B0: mov     rdx, rax
 * 000000018004A0B3: lea     rcx, [rbp+9E10h+var_6D40]
 * 000000018004A0BA: call    sub_180031AE8
 * 000000018004A0BF: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004A0C4: mov     rcx, rax
 * 000000018004A0C7: call    sub_1800D4C70
 * 000000018004A0CC: mov     cs:byte_18021FC4C, al
 * 000000018004A0D2: lea     rcx, [rbp+9E10h+var_6D20]; void *
 * 000000018004A0D9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A0DE: nop
 * 000000018004A0DF: lea     rcx, [rbp+9E10h+var_6D00]; void *
 * 000000018004A0E6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A0EB: nop
 * 000000018004A0EC: lea     rcx, dword_18021FC50
 * 000000018004A0F3: call    _Init_thread_footer
 * 000000018004A0F8: mov     rax, [rdi+rbx*8]
 * 000000018004A0FC: mov     eax, [r15+rax]
 * 000000018004A100: cmp     cs:dword_18021FC58, eax
 * 000000018004A106: jle     loc_18004A1E6
 * 000000018004A10C: lea     rcx, dword_18021FC58
 * 000000018004A113: call    _Init_thread_header
 * 000000018004A118: cmp     cs:dword_18021FC58, r14d
 * 000000018004A11F: jnz     loc_18004A1E6
 * 000000018004A125: lea     rax, unk_180156C30
 * 000000018004A12C: mov     qword ptr [rbp+9E10h+var_9E30], rax
 * 000000018004A130: lea     rax, unk_18015D1E8
 * 000000018004A137: mov     qword ptr [rbp+9E10h+var_9E30+8], rax
 * 000000018004A13B: movups  xmm0, [rbp+9E10h+var_9E30]
 * 000000018004A13F: movups  [rbp+9E10h+var_88D0], xmm0
 * 000000018004A146: mov     dword ptr [rbp+9E10h+var_88C0], 5
 * 000000018004A150: mov     dword ptr [rbp+9E10h+var_88C0+4], esi
 * 000000018004A156: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004A15B: movups  xmm0, [rbp+9E10h+var_88C0]
 * 000000018004A162: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004A167: call    sub_1800496D0
 * 000000018004A16C: mov     r8, rax
 * 000000018004A16F: mov     r9d, r12d
 * 000000018004A172: mov     edx, 10h
 * 000000018004A177: lea     rcx, [rbp+9E10h+var_6CA0]; Src
 * 000000018004A17E: call    sub_1800D4B98
 * 000000018004A183: nop
 * 000000018004A184: mov     r8, rax
 * 000000018004A187: mov     rdx, r13
 * 000000018004A18A: lea     rcx, [rbp+9E10h+var_6CC0]
 * 000000018004A191: call    sub_1800494AC
 * 000000018004A196: nop
 * 000000018004A197: lea     r8, aPixel; "/Pixel"
 * 000000018004A19E: mov     rdx, rax
 * 000000018004A1A1: lea     rcx, [rbp+9E10h+var_6CE0]
 * 000000018004A1A8: call    sub_180031AE8
 * 000000018004A1AD: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004A1B2: mov     rcx, rax
 * 000000018004A1B5: call    sub_1800D4C70
 * 000000018004A1BA: mov     cs:byte_18021FC54, al
 * 000000018004A1C0: lea     rcx, [rbp+9E10h+var_6CC0]; void *
 * 000000018004A1C7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A1CC: nop
 * 000000018004A1CD: lea     rcx, [rbp+9E10h+var_6CA0]; void *
 * 000000018004A1D4: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A1D9: nop
 * 000000018004A1DA: lea     rcx, dword_18021FC58
 * 000000018004A1E1: call    _Init_thread_footer
 * 000000018004A1E6: mov     rax, [rdi+rbx*8]
 * 000000018004A1EA: mov     eax, [r15+rax]
 * 000000018004A1EE: cmp     cs:dword_18021FC60, eax
 * 000000018004A1F4: jle     loc_18004A2D4
 * 000000018004A1FA: lea     rcx, dword_18021FC60
 * 000000018004A201: call    _Init_thread_header
 * 000000018004A206: cmp     cs:dword_18021FC60, r14d
 * 000000018004A20D: jnz     loc_18004A2D4
 * 000000018004A213: lea     rax, unk_180156C30
 * 000000018004A21A: mov     qword ptr [rbp+9E10h+var_9E20], rax
 * 000000018004A21E: lea     rax, unk_18015D1E8
 * 000000018004A225: mov     qword ptr [rbp+9E10h+var_9E20+8], rax
 * 000000018004A229: movups  xmm0, [rbp+9E10h+var_9E20]
 * 000000018004A22D: movups  [rbp+9E10h+var_88B0], xmm0
 * 000000018004A234: mov     dword ptr [rbp+9E10h+var_88A0], 5
 * 000000018004A23E: mov     dword ptr [rbp+9E10h+var_88A0+4], esi
 * 000000018004A244: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004A249: movups  xmm0, [rbp+9E10h+var_88A0]
 * 000000018004A250: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004A255: call    sub_1800496D0
 * 000000018004A25A: mov     r8, rax
 * 000000018004A25D: mov     r9d, r12d
 * 000000018004A260: mov     edx, 12h
 * 000000018004A265: lea     rcx, [rbp+9E10h+var_6C40]; Src
 * 000000018004A26C: call    sub_1800D4B98
 * 000000018004A271: nop
 * 000000018004A272: mov     r8, rax
 * 000000018004A275: mov     rdx, r13
 * 000000018004A278: lea     rcx, [rbp+9E10h+var_6C60]
 * 000000018004A27F: call    sub_1800494AC
 * 000000018004A284: nop
 * 000000018004A285: lea     r8, aPixel; "/Pixel"
 * 000000018004A28C: mov     rdx, rax
 * 000000018004A28F: lea     rcx, [rbp+9E10h+var_6C80]
 * 000000018004A296: call    sub_180031AE8
 * 000000018004A29B: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004A2A0: mov     rcx, rax
 * 000000018004A2A3: call    sub_1800D4C70
 * 000000018004A2A8: mov     cs:byte_18021FC5C, al
 * 000000018004A2AE: lea     rcx, [rbp+9E10h+var_6C60]; void *
 * 000000018004A2B5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A2BA: nop
 * 000000018004A2BB: lea     rcx, [rbp+9E10h+var_6C40]; void *
 * 000000018004A2C2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A2C7: nop
 * 000000018004A2C8: lea     rcx, dword_18021FC60
 * 000000018004A2CF: call    _Init_thread_footer
 * 000000018004A2D4: mov     rax, [rdi+rbx*8]
 * 000000018004A2D8: mov     eax, [r15+rax]
 * 000000018004A2DC: cmp     cs:dword_18021FC68, eax
 * 000000018004A2E2: jle     loc_18004A3C2
 * 000000018004A2E8: lea     rcx, dword_18021FC68
 * 000000018004A2EF: call    _Init_thread_header
 * 000000018004A2F4: cmp     cs:dword_18021FC68, r14d
 * 000000018004A2FB: jnz     loc_18004A3C2
 * 000000018004A301: lea     rax, unk_18015D1F0
 * 000000018004A308: mov     qword ptr [rbp+9E10h+var_9E10], rax
 * 000000018004A30C: lea     rax, unk_1801604E8
 * 000000018004A313: mov     qword ptr [rbp+9E10h+var_9E10+8], rax
 * 000000018004A317: movups  xmm0, [rbp+9E10h+var_9E10]
 * 000000018004A31B: movups  [rbp+9E10h+var_8890], xmm0
 * 000000018004A322: mov     dword ptr [rbp+9E10h+var_8880], 5
 * 000000018004A32C: mov     dword ptr [rbp+9E10h+var_8880+4], esi
 * 000000018004A332: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004A337: movups  xmm0, [rbp+9E10h+var_8880]
 * 000000018004A33E: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004A343: call    sub_1800496D0
 * 000000018004A348: mov     r8, rax
 * 000000018004A34B: mov     r9d, r12d
 * 000000018004A34E: mov     edx, 14h
 * 000000018004A353: lea     rcx, [rbp+9E10h+var_6BE0]; Src
 * 000000018004A35A: call    sub_1800D4B98
 * 000000018004A35F: nop
 * 000000018004A360: mov     r8, rax
 * 000000018004A363: mov     rdx, r13
 * 000000018004A366: lea     rcx, [rbp+9E10h+var_6C00]
 * 000000018004A36D: call    sub_1800494AC
 * 000000018004A372: nop
 * 000000018004A373: lea     r8, aPixel; "/Pixel"
 * 000000018004A37A: mov     rdx, rax
 * 000000018004A37D: lea     rcx, [rbp+9E10h+var_6C20]
 * 000000018004A384: call    sub_180031AE8
 * 000000018004A389: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004A38E: mov     rcx, rax
 * 000000018004A391: call    sub_1800D4C70
 * 000000018004A396: mov     cs:byte_18021FC64, al
 * 000000018004A39C: lea     rcx, [rbp+9E10h+var_6C00]; void *
 * 000000018004A3A3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A3A8: nop
 * 000000018004A3A9: lea     rcx, [rbp+9E10h+var_6BE0]; void *
 * 000000018004A3B0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A3B5: nop
 * 000000018004A3B6: lea     rcx, dword_18021FC68
 * 000000018004A3BD: call    _Init_thread_footer
 * 000000018004A3C2: mov     rax, [rdi+rbx*8]
 * 000000018004A3C6: mov     eax, [r15+rax]
 * 000000018004A3CA: cmp     cs:dword_18021FC70, eax
 * 000000018004A3D0: jle     loc_18004A4B0
 * 000000018004A3D6: lea     rcx, dword_18021FC70
 * 000000018004A3DD: call    _Init_thread_header
 * 000000018004A3E2: cmp     cs:dword_18021FC70, r14d
 * 000000018004A3E9: jnz     loc_18004A4B0
 * 000000018004A3EF: lea     rax, unk_18015D1F0
 * 000000018004A3F6: mov     qword ptr [rbp+9E10h+var_9E00], rax
 * 000000018004A3FA: lea     rax, unk_1801604E8
 * 000000018004A401: mov     qword ptr [rbp+9E10h+var_9E00+8], rax
 * 000000018004A405: movups  xmm0, [rbp+9E10h+var_9E00]
 * 000000018004A409: movups  [rbp+9E10h+var_8870], xmm0
 * 000000018004A410: mov     dword ptr [rbp+9E10h+var_8860], 5
 * 000000018004A41A: mov     dword ptr [rbp+9E10h+var_8860+4], esi
 * 000000018004A420: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004A425: movups  xmm0, [rbp+9E10h+var_8860]
 * 000000018004A42C: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004A431: call    sub_1800496D0
 * 000000018004A436: mov     r8, rax
 * 000000018004A439: mov     r9d, r12d
 * 000000018004A43C: mov     edx, 16h
 * 000000018004A441: lea     rcx, [rbp+9E10h+var_6B80]; Src
 * 000000018004A448: call    sub_1800D4B98
 * 000000018004A44D: nop
 * 000000018004A44E: mov     r8, rax
 * 000000018004A451: mov     rdx, r13
 * 000000018004A454: lea     rcx, [rbp+9E10h+var_6BA0]
 * 000000018004A45B: call    sub_1800494AC
 * 000000018004A460: nop
 * 000000018004A461: lea     r8, aPixel; "/Pixel"
 * 000000018004A468: mov     rdx, rax
 * 000000018004A46B: lea     rcx, [rbp+9E10h+var_6BC0]
 * 000000018004A472: call    sub_180031AE8
 * 000000018004A477: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004A47C: mov     rcx, rax
 * 000000018004A47F: call    sub_1800D4C70
 * 000000018004A484: mov     cs:byte_18021FC6C, al
 * 000000018004A48A: lea     rcx, [rbp+9E10h+var_6BA0]; void *
 * 000000018004A491: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A496: nop
 * 000000018004A497: lea     rcx, [rbp+9E10h+var_6B80]; void *
 * 000000018004A49E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A4A3: nop
 * 000000018004A4A4: lea     rcx, dword_18021FC70
 * 000000018004A4AB: call    _Init_thread_footer
 * 000000018004A4B0: mov     rax, [rdi+rbx*8]
 * 000000018004A4B4: mov     eax, [r15+rax]
 * 000000018004A4B8: cmp     cs:dword_18021FC78, eax
 * 000000018004A4BE: jle     loc_18004A59E
 * 000000018004A4C4: lea     rcx, dword_18021FC78
 * 000000018004A4CB: call    _Init_thread_header
 * 000000018004A4D0: cmp     cs:dword_18021FC78, r14d
 * 000000018004A4D7: jnz     loc_18004A59E
 * 000000018004A4DD: lea     rax, unk_1801604F0
 * 000000018004A4E4: mov     qword ptr [rbp+9E10h+var_9DF0], rax
 * 000000018004A4E8: lea     rax, unk_180166C7C
 * 000000018004A4EF: mov     qword ptr [rbp+9E10h+var_9DF0+8], rax
 * 000000018004A4F3: movups  xmm0, [rbp+9E10h+var_9DF0]
 * 000000018004A4F7: movups  [rbp+9E10h+var_8850], xmm0
 * 000000018004A4FE: mov     dword ptr [rbp+9E10h+var_8840], 5
 * 000000018004A508: mov     dword ptr [rbp+9E10h+var_8840+4], esi
 * 000000018004A50E: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004A513: movups  xmm0, [rbp+9E10h+var_8840]
 * 000000018004A51A: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004A51F: call    sub_1800496D0
 * 000000018004A524: mov     r8, rax
 * 000000018004A527: mov     r9d, r12d
 * 000000018004A52A: mov     edx, 18h
 * 000000018004A52F: lea     rcx, [rbp+9E10h+var_6B20]; Src
 * 000000018004A536: call    sub_1800D4B98
 * 000000018004A53B: nop
 * 000000018004A53C: mov     r8, rax
 * 000000018004A53F: mov     rdx, r13
 * 000000018004A542: lea     rcx, [rbp+9E10h+var_6B40]
 * 000000018004A549: call    sub_1800494AC
 * 000000018004A54E: nop
 * 000000018004A54F: lea     r8, aPixel; "/Pixel"
 * 000000018004A556: mov     rdx, rax
 * 000000018004A559: lea     rcx, [rbp+9E10h+var_6B60]
 * 000000018004A560: call    sub_180031AE8
 * 000000018004A565: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004A56A: mov     rcx, rax
 * 000000018004A56D: call    sub_1800D4C70
 * 000000018004A572: mov     cs:byte_18021FC74, al
 * 000000018004A578: lea     rcx, [rbp+9E10h+var_6B40]; void *
 * 000000018004A57F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A584: nop
 * 000000018004A585: lea     rcx, [rbp+9E10h+var_6B20]; void *
 * 000000018004A58C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A591: nop
 * 000000018004A592: lea     rcx, dword_18021FC78
 * 000000018004A599: call    _Init_thread_footer
 * 000000018004A59E: mov     rax, [rdi+rbx*8]
 * 000000018004A5A2: mov     eax, [r15+rax]
 * 000000018004A5A6: cmp     cs:dword_18021FC80, eax
 * 000000018004A5AC: jle     loc_18004A68C
 * 000000018004A5B2: lea     rcx, dword_18021FC80
 * 000000018004A5B9: call    _Init_thread_header
 * 000000018004A5BE: cmp     cs:dword_18021FC80, r14d
 * 000000018004A5C5: jnz     loc_18004A68C
 * 000000018004A5CB: lea     rax, unk_1801604F0
 * 000000018004A5D2: mov     qword ptr [rbp+9E10h+var_9DE0], rax
 * 000000018004A5D6: lea     rax, unk_180166C7C
 * 000000018004A5DD: mov     qword ptr [rbp+9E10h+var_9DE0+8], rax
 * 000000018004A5E1: movups  xmm0, [rbp+9E10h+var_9DE0]
 * 000000018004A5E5: movups  [rbp+9E10h+var_8830], xmm0
 * 000000018004A5EC: mov     dword ptr [rbp+9E10h+var_8820], 5
 * 000000018004A5F6: mov     dword ptr [rbp+9E10h+var_8820+4], esi
 * 000000018004A5FC: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004A601: movups  xmm0, [rbp+9E10h+var_8820]
 * 000000018004A608: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004A60D: call    sub_1800496D0
 * 000000018004A612: mov     r8, rax
 * 000000018004A615: mov     r9d, r12d
 * 000000018004A618: mov     edx, 1Ah
 * 000000018004A61D: lea     rcx, [rbp+9E10h+var_6AC0]; Src
 * 000000018004A624: call    sub_1800D4B98
 * 000000018004A629: nop
 * 000000018004A62A: mov     r8, rax
 * 000000018004A62D: mov     rdx, r13
 * 000000018004A630: lea     rcx, [rbp+9E10h+var_6AE0]
 * 000000018004A637: call    sub_1800494AC
 * 000000018004A63C: nop
 * 000000018004A63D: lea     r8, aPixel; "/Pixel"
 * 000000018004A644: mov     rdx, rax
 * 000000018004A647: lea     rcx, [rbp+9E10h+var_6B00]
 * 000000018004A64E: call    sub_180031AE8
 * 000000018004A653: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004A658: mov     rcx, rax
 * 000000018004A65B: call    sub_1800D4C70
 * 000000018004A660: mov     cs:byte_18021FC7C, al
 * 000000018004A666: lea     rcx, [rbp+9E10h+var_6AE0]; void *
 * 000000018004A66D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A672: nop
 * 000000018004A673: lea     rcx, [rbp+9E10h+var_6AC0]; void *
 * 000000018004A67A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A67F: nop
 * 000000018004A680: lea     rcx, dword_18021FC80
 * 000000018004A687: call    _Init_thread_footer
 * 000000018004A68C: mov     rax, [rdi+rbx*8]
 * 000000018004A690: mov     eax, [r15+rax]
 * 000000018004A694: cmp     cs:dword_18021FC88, eax
 * 000000018004A69A: jle     loc_18004A77A
 * 000000018004A6A0: lea     rcx, dword_18021FC88
 * 000000018004A6A7: call    _Init_thread_header
 * 000000018004A6AC: cmp     cs:dword_18021FC88, r14d
 * 000000018004A6B3: jnz     loc_18004A77A
 * 000000018004A6B9: lea     rax, unk_180144C30
 * 000000018004A6C0: mov     qword ptr [rbp+9E10h+var_9DD0], rax
 * 000000018004A6C4: lea     rax, unk_18014B014
 * 000000018004A6CB: mov     qword ptr [rbp+9E10h+var_9DD0+8], rax
 * 000000018004A6CF: movups  xmm0, [rbp+9E10h+var_9DD0]
 * 000000018004A6D3: movups  [rbp+9E10h+var_8810], xmm0
 * 000000018004A6DA: mov     dword ptr [rbp+9E10h+var_8800], 5
 * 000000018004A6E4: mov     dword ptr [rbp+9E10h+var_8800+4], esi
 * 000000018004A6EA: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004A6EF: movups  xmm0, [rbp+9E10h+var_8800]
 * 000000018004A6F6: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004A6FB: call    sub_1800496D0
 * 000000018004A700: mov     r8, rax
 * 000000018004A703: mov     r9d, r12d
 * 000000018004A706: mov     edx, 20h ; ' '
 * 000000018004A70B: lea     rcx, [rbp+9E10h+var_6A60]; Src
 * 000000018004A712: call    sub_1800D4B98
 * 000000018004A717: nop
 * 000000018004A718: mov     r8, rax
 * 000000018004A71B: mov     rdx, r13
 * 000000018004A71E: lea     rcx, [rbp+9E10h+var_6A80]
 * 000000018004A725: call    sub_1800494AC
 * 000000018004A72A: nop
 * 000000018004A72B: lea     r8, aPixel; "/Pixel"
 * 000000018004A732: mov     rdx, rax
 * 000000018004A735: lea     rcx, [rbp+9E10h+var_6AA0]
 * 000000018004A73C: call    sub_180031AE8
 * 000000018004A741: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004A746: mov     rcx, rax
 * 000000018004A749: call    sub_1800D4C70
 * 000000018004A74E: mov     cs:byte_18021FC84, al
 * 000000018004A754: lea     rcx, [rbp+9E10h+var_6A80]; void *
 * 000000018004A75B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A760: nop
 * 000000018004A761: lea     rcx, [rbp+9E10h+var_6A60]; void *
 * 000000018004A768: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A76D: nop
 * 000000018004A76E: lea     rcx, dword_18021FC88
 * 000000018004A775: call    _Init_thread_footer
 * 000000018004A77A: mov     rax, [rdi+rbx*8]
 * 000000018004A77E: mov     eax, [r15+rax]
 * 000000018004A782: cmp     cs:dword_18021FC90, eax
 * 000000018004A788: jle     loc_18004A868
 * 000000018004A78E: lea     rcx, dword_18021FC90
 * 000000018004A795: call    _Init_thread_header
 * 000000018004A79A: cmp     cs:dword_18021FC90, r14d
 * 000000018004A7A1: jnz     loc_18004A868
 * 000000018004A7A7: lea     rax, unk_18014B020
 * 000000018004A7AE: mov     qword ptr [rbp+9E10h+var_9DC0], rax
 * 000000018004A7B2: lea     rax, unk_18014BA18
 * 000000018004A7B9: mov     qword ptr [rbp+9E10h+var_9DC0+8], rax
 * 000000018004A7BD: movups  xmm0, [rbp+9E10h+var_9DC0]
 * 000000018004A7C1: movups  [rbp+9E10h+var_87F0], xmm0
 * 000000018004A7C8: mov     dword ptr [rbp+9E10h+var_87E0], 5
 * 000000018004A7D2: mov     dword ptr [rbp+9E10h+var_87E0+4], esi
 * 000000018004A7D8: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004A7DD: movups  xmm0, [rbp+9E10h+var_87E0]
 * 000000018004A7E4: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004A7E9: call    sub_1800496D0
 * 000000018004A7EE: mov     r8, rax
 * 000000018004A7F1: mov     r9d, r12d
 * 000000018004A7F4: mov     edx, 21h ; '!'
 * 000000018004A7F9: lea     rcx, [rbp+9E10h+var_6A00]; Src
 * 000000018004A800: call    sub_1800D4B98
 * 000000018004A805: nop
 * 000000018004A806: mov     r8, rax
 * 000000018004A809: mov     rdx, r13
 * 000000018004A80C: lea     rcx, [rbp+9E10h+var_6A20]
 * 000000018004A813: call    sub_1800494AC
 * 000000018004A818: nop
 * 000000018004A819: lea     r8, aPixel; "/Pixel"
 * 000000018004A820: mov     rdx, rax
 * 000000018004A823: lea     rcx, [rbp+9E10h+var_6A40]
 * 000000018004A82A: call    sub_180031AE8
 * 000000018004A82F: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004A834: mov     rcx, rax
 * 000000018004A837: call    sub_1800D4C70
 * 000000018004A83C: mov     cs:byte_18021FC8C, al
 * 000000018004A842: lea     rcx, [rbp+9E10h+var_6A20]; void *
 * 000000018004A849: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A84E: nop
 * 000000018004A84F: lea     rcx, [rbp+9E10h+var_6A00]; void *
 * 000000018004A856: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A85B: nop
 * 000000018004A85C: lea     rcx, dword_18021FC90
 * 000000018004A863: call    _Init_thread_footer
 * 000000018004A868: mov     rax, [rdi+rbx*8]
 * 000000018004A86C: mov     eax, [r15+rax]
 * 000000018004A870: cmp     cs:dword_18021FC98, eax
 * 000000018004A876: jle     loc_18004A956
 * 000000018004A87C: lea     rcx, dword_18021FC98
 * 000000018004A883: call    _Init_thread_header
 * 000000018004A888: cmp     cs:dword_18021FC98, r14d
 * 000000018004A88F: jnz     loc_18004A956
 * 000000018004A895: lea     rax, unk_180144C30
 * 000000018004A89C: mov     qword ptr [rbp+9E10h+var_9DB0], rax
 * 000000018004A8A0: lea     rax, unk_18014B014
 * 000000018004A8A7: mov     qword ptr [rbp+9E10h+var_9DB0+8], rax
 * 000000018004A8AB: movups  xmm0, [rbp+9E10h+var_9DB0]
 * 000000018004A8AF: movups  [rbp+9E10h+var_87D0], xmm0
 * 000000018004A8B6: mov     dword ptr [rbp+9E10h+var_87C0], 5
 * 000000018004A8C0: mov     dword ptr [rbp+9E10h+var_87C0+4], esi
 * 000000018004A8C6: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004A8CB: movups  xmm0, [rbp+9E10h+var_87C0]
 * 000000018004A8D2: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004A8D7: call    sub_1800496D0
 * 000000018004A8DC: mov     r8, rax
 * 000000018004A8DF: mov     r9d, r12d
 * 000000018004A8E2: mov     edx, 22h ; '"'
 * 000000018004A8E7: lea     rcx, [rbp+9E10h+var_69A0]; Src
 * 000000018004A8EE: call    sub_1800D4B98
 * 000000018004A8F3: nop
 * 000000018004A8F4: mov     r8, rax
 * 000000018004A8F7: mov     rdx, r13
 * 000000018004A8FA: lea     rcx, [rbp+9E10h+var_69C0]
 * 000000018004A901: call    sub_1800494AC
 * 000000018004A906: nop
 * 000000018004A907: lea     r8, aPixel; "/Pixel"
 * 000000018004A90E: mov     rdx, rax
 * 000000018004A911: lea     rcx, [rbp+9E10h+var_69E0]
 * 000000018004A918: call    sub_180031AE8
 * 000000018004A91D: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004A922: mov     rcx, rax
 * 000000018004A925: call    sub_1800D4C70
 * 000000018004A92A: mov     cs:byte_18021FC94, al
 * 000000018004A930: lea     rcx, [rbp+9E10h+var_69C0]; void *
 * 000000018004A937: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A93C: nop
 * 000000018004A93D: lea     rcx, [rbp+9E10h+var_69A0]; void *
 * 000000018004A944: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004A949: nop
 * 000000018004A94A: lea     rcx, dword_18021FC98
 * 000000018004A951: call    _Init_thread_footer
 * 000000018004A956: mov     rax, [rdi+rbx*8]
 * 000000018004A95A: mov     eax, [r15+rax]
 * 000000018004A95E: cmp     cs:dword_18021FCA0, eax
 * 000000018004A964: jle     loc_18004AA44
 * 000000018004A96A: lea     rcx, dword_18021FCA0
 * 000000018004A971: call    _Init_thread_header
 * 000000018004A976: cmp     cs:dword_18021FCA0, r14d
 * 000000018004A97D: jnz     loc_18004AA44
 * 000000018004A983: lea     rax, unk_18014F5D0
 * 000000018004A98A: mov     qword ptr [rbp+9E10h+var_9DA0], rax
 * 000000018004A98E: lea     rax, unk_180155B5C
 * 000000018004A995: mov     qword ptr [rbp+9E10h+var_9DA0+8], rax
 * 000000018004A999: movups  xmm0, [rbp+9E10h+var_9DA0]
 * 000000018004A99D: movups  [rbp+9E10h+var_87B0], xmm0
 * 000000018004A9A4: mov     dword ptr [rbp+9E10h+var_87A0], 5
 * 000000018004A9AE: mov     dword ptr [rbp+9E10h+var_87A0+4], esi
 * 000000018004A9B4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004A9B9: movups  xmm0, [rbp+9E10h+var_87A0]
 * 000000018004A9C0: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004A9C5: call    sub_1800496D0
 * 000000018004A9CA: mov     r8, rax
 * 000000018004A9CD: mov     r9d, r12d
 * 000000018004A9D0: mov     edx, 28h ; '('
 * 000000018004A9D5: lea     rcx, [rbp+9E10h+var_6940]; Src
 * 000000018004A9DC: call    sub_1800D4B98
 * 000000018004A9E1: nop
 * 000000018004A9E2: mov     r8, rax
 * 000000018004A9E5: mov     rdx, r13
 * 000000018004A9E8: lea     rcx, [rbp+9E10h+var_6960]
 * 000000018004A9EF: call    sub_1800494AC
 * 000000018004A9F4: nop
 * 000000018004A9F5: lea     r8, aPixel; "/Pixel"
 * 000000018004A9FC: mov     rdx, rax
 * 000000018004A9FF: lea     rcx, [rbp+9E10h+var_6980]
 * 000000018004AA06: call    sub_180031AE8
 * 000000018004AA0B: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004AA10: mov     rcx, rax
 * 000000018004AA13: call    sub_1800D4C70
 * 000000018004AA18: mov     cs:byte_18021FC9C, al
 * 000000018004AA1E: lea     rcx, [rbp+9E10h+var_6960]; void *
 * 000000018004AA25: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AA2A: nop
 * 000000018004AA2B: lea     rcx, [rbp+9E10h+var_6940]; void *
 * 000000018004AA32: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AA37: nop
 * 000000018004AA38: lea     rcx, dword_18021FCA0
 * 000000018004AA3F: call    _Init_thread_footer
 * 000000018004AA44: mov     rax, [rdi+rbx*8]
 * 000000018004AA48: mov     eax, [r15+rax]
 * 000000018004AA4C: cmp     cs:dword_18021FCA8, eax
 * 000000018004AA52: jle     loc_18004AB3B
 * 000000018004AA58: lea     rcx, dword_18021FCA8
 * 000000018004AA5F: call    _Init_thread_header
 * 000000018004AA64: cmp     cs:dword_18021FCA8, r14d
 * 000000018004AA6B: jnz     loc_18004AB3B
 * 000000018004AA71: lea     rax, unk_180155B60
 * 000000018004AA78: mov     qword ptr [rbp+9E10h+var_9D90], rax
 * 000000018004AA7F: lea     rax, unk_180156C28
 * 000000018004AA86: mov     qword ptr [rbp+9E10h+var_9D90+8], rax
 * 000000018004AA8D: movups  xmm0, [rbp+9E10h+var_9D90]
 * 000000018004AA94: movups  [rbp+9E10h+var_8790], xmm0
 * 000000018004AA9B: mov     dword ptr [rbp+9E10h+var_8780], 5
 * 000000018004AAA5: mov     dword ptr [rbp+9E10h+var_8780+4], esi
 * 000000018004AAAB: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004AAB0: movups  xmm0, [rbp+9E10h+var_8780]
 * 000000018004AAB7: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004AABC: call    sub_1800496D0
 * 000000018004AAC1: mov     r8, rax
 * 000000018004AAC4: mov     r9d, r12d
 * 000000018004AAC7: mov     edx, 29h ; ')'
 * 000000018004AACC: lea     rcx, [rbp+9E10h+var_68E0]; Src
 * 000000018004AAD3: call    sub_1800D4B98
 * 000000018004AAD8: nop
 * 000000018004AAD9: mov     r8, rax
 * 000000018004AADC: mov     rdx, r13
 * 000000018004AADF: lea     rcx, [rbp+9E10h+var_6900]
 * 000000018004AAE6: call    sub_1800494AC
 * 000000018004AAEB: nop
 * 000000018004AAEC: lea     r8, aPixel; "/Pixel"
 * 000000018004AAF3: mov     rdx, rax
 * 000000018004AAF6: lea     rcx, [rbp+9E10h+var_6920]
 * 000000018004AAFD: call    sub_180031AE8
 * 000000018004AB02: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004AB07: mov     rcx, rax
 * 000000018004AB0A: call    sub_1800D4C70
 * 000000018004AB0F: mov     cs:byte_18021FCA4, al
 * 000000018004AB15: lea     rcx, [rbp+9E10h+var_6900]; void *
 * 000000018004AB1C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AB21: nop
 * 000000018004AB22: lea     rcx, [rbp+9E10h+var_68E0]; void *
 * 000000018004AB29: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AB2E: nop
 * 000000018004AB2F: lea     rcx, dword_18021FCA8
 * 000000018004AB36: call    _Init_thread_footer
 * 000000018004AB3B: mov     rax, [rdi+rbx*8]
 * 000000018004AB3F: mov     eax, [r15+rax]
 * 000000018004AB43: cmp     cs:dword_18021FCB0, eax
 * 000000018004AB49: jle     loc_18004AC32
 * 000000018004AB4F: lea     rcx, dword_18021FCB0
 * 000000018004AB56: call    _Init_thread_header
 * 000000018004AB5B: cmp     cs:dword_18021FCB0, r14d
 * 000000018004AB62: jnz     loc_18004AC32
 * 000000018004AB68: lea     rax, unk_18014F5D0
 * 000000018004AB6F: mov     qword ptr [rbp+9E10h+var_9D80], rax
 * 000000018004AB76: lea     rax, unk_180155B5C
 * 000000018004AB7D: mov     qword ptr [rbp+9E10h+var_9D80+8], rax
 * 000000018004AB84: movups  xmm0, [rbp+9E10h+var_9D80]
 * 000000018004AB8B: movups  [rbp+9E10h+var_8770], xmm0
 * 000000018004AB92: mov     dword ptr [rbp+9E10h+var_8760], 5
 * 000000018004AB9C: mov     dword ptr [rbp+9E10h+var_8760+4], esi
 * 000000018004ABA2: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004ABA7: movups  xmm0, [rbp+9E10h+var_8760]
 * 000000018004ABAE: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004ABB3: call    sub_1800496D0
 * 000000018004ABB8: mov     r8, rax
 * 000000018004ABBB: mov     r9d, r12d
 * 000000018004ABBE: mov     edx, 2Ah ; '*'
 * 000000018004ABC3: lea     rcx, [rbp+9E10h+var_6880]; Src
 * 000000018004ABCA: call    sub_1800D4B98
 * 000000018004ABCF: nop
 * 000000018004ABD0: mov     r8, rax
 * 000000018004ABD3: mov     rdx, r13
 * 000000018004ABD6: lea     rcx, [rbp+9E10h+var_68A0]
 * 000000018004ABDD: call    sub_1800494AC
 * 000000018004ABE2: nop
 * 000000018004ABE3: lea     r8, aPixel; "/Pixel"
 * 000000018004ABEA: mov     rdx, rax
 * 000000018004ABED: lea     rcx, [rbp+9E10h+var_68C0]
 * 000000018004ABF4: call    sub_180031AE8
 * 000000018004ABF9: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004ABFE: mov     rcx, rax
 * 000000018004AC01: call    sub_1800D4C70
 * 000000018004AC06: mov     cs:byte_18021FCAC, al
 * 000000018004AC0C: lea     rcx, [rbp+9E10h+var_68A0]; void *
 * 000000018004AC13: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AC18: nop
 * 000000018004AC19: lea     rcx, [rbp+9E10h+var_6880]; void *
 * 000000018004AC20: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AC25: nop
 * 000000018004AC26: lea     rcx, dword_18021FCB0
 * 000000018004AC2D: call    _Init_thread_footer
 * 000000018004AC32: mov     rax, [rdi+rbx*8]
 * 000000018004AC36: mov     eax, [r15+rax]
 * 000000018004AC3A: cmp     cs:dword_18021FCB8, eax
 * 000000018004AC40: jle     loc_18004AD29
 * 000000018004AC46: lea     rcx, dword_18021FCB8
 * 000000018004AC4D: call    _Init_thread_header
 * 000000018004AC52: cmp     cs:dword_18021FCB8, r14d
 * 000000018004AC59: jnz     loc_18004AD29
 * 000000018004AC5F: lea     rax, unk_180156C30
 * 000000018004AC66: mov     qword ptr [rbp+9E10h+var_9D70], rax
 * 000000018004AC6D: lea     rax, unk_18015D1E8
 * 000000018004AC74: mov     qword ptr [rbp+9E10h+var_9D70+8], rax
 * 000000018004AC7B: movups  xmm0, [rbp+9E10h+var_9D70]
 * 000000018004AC82: movups  [rbp+9E10h+var_8750], xmm0
 * 000000018004AC89: mov     dword ptr [rbp+9E10h+var_8740], 5
 * 000000018004AC93: mov     dword ptr [rbp+9E10h+var_8740+4], esi
 * 000000018004AC99: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004AC9E: movups  xmm0, [rbp+9E10h+var_8740]
 * 000000018004ACA5: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004ACAA: call    sub_1800496D0
 * 000000018004ACAF: mov     r8, rax
 * 000000018004ACB2: mov     r9d, r12d
 * 000000018004ACB5: mov     edx, 30h ; '0'
 * 000000018004ACBA: lea     rcx, [rbp+9E10h+var_6820]; Src
 * 000000018004ACC1: call    sub_1800D4B98
 * 000000018004ACC6: nop
 * 000000018004ACC7: mov     r8, rax
 * 000000018004ACCA: mov     rdx, r13
 * 000000018004ACCD: lea     rcx, [rbp+9E10h+var_6840]
 * 000000018004ACD4: call    sub_1800494AC
 * 000000018004ACD9: nop
 * 000000018004ACDA: lea     r8, aPixel; "/Pixel"
 * 000000018004ACE1: mov     rdx, rax
 * 000000018004ACE4: lea     rcx, [rbp+9E10h+var_6860]
 * 000000018004ACEB: call    sub_180031AE8
 * 000000018004ACF0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004ACF5: mov     rcx, rax
 * 000000018004ACF8: call    sub_1800D4C70
 * 000000018004ACFD: mov     cs:byte_18021FCB4, al
 * 000000018004AD03: lea     rcx, [rbp+9E10h+var_6840]; void *
 * 000000018004AD0A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AD0F: nop
 * 000000018004AD10: lea     rcx, [rbp+9E10h+var_6820]; void *
 * 000000018004AD17: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AD1C: nop
 * 000000018004AD1D: lea     rcx, dword_18021FCB8
 * 000000018004AD24: call    _Init_thread_footer
 * 000000018004AD29: mov     rax, [rdi+rbx*8]
 * 000000018004AD2D: mov     eax, [r15+rax]
 * 000000018004AD31: cmp     cs:dword_18021FCC0, eax
 * 000000018004AD37: jle     loc_18004AE20
 * 000000018004AD3D: lea     rcx, dword_18021FCC0
 * 000000018004AD44: call    _Init_thread_header
 * 000000018004AD49: cmp     cs:dword_18021FCC0, r14d
 * 000000018004AD50: jnz     loc_18004AE20
 * 000000018004AD56: lea     rax, unk_180156C30
 * 000000018004AD5D: mov     qword ptr [rbp+9E10h+var_9D60], rax
 * 000000018004AD64: lea     rax, unk_18015D1E8
 * 000000018004AD6B: mov     qword ptr [rbp+9E10h+var_9D60+8], rax
 * 000000018004AD72: movups  xmm0, [rbp+9E10h+var_9D60]
 * 000000018004AD79: movups  [rbp+9E10h+var_8730], xmm0
 * 000000018004AD80: mov     dword ptr [rbp+9E10h+var_8720], 5
 * 000000018004AD8A: mov     dword ptr [rbp+9E10h+var_8720+4], esi
 * 000000018004AD90: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004AD95: movups  xmm0, [rbp+9E10h+var_8720]
 * 000000018004AD9C: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004ADA1: call    sub_1800496D0
 * 000000018004ADA6: mov     r8, rax
 * 000000018004ADA9: mov     r9d, r12d
 * 000000018004ADAC: mov     edx, 32h ; '2'
 * 000000018004ADB1: lea     rcx, [rbp+9E10h+var_67C0]; Src
 * 000000018004ADB8: call    sub_1800D4B98
 * 000000018004ADBD: nop
 * 000000018004ADBE: mov     r8, rax
 * 000000018004ADC1: mov     rdx, r13
 * 000000018004ADC4: lea     rcx, [rbp+9E10h+var_67E0]
 * 000000018004ADCB: call    sub_1800494AC
 * 000000018004ADD0: nop
 * 000000018004ADD1: lea     r8, aPixel; "/Pixel"
 * 000000018004ADD8: mov     rdx, rax
 * 000000018004ADDB: lea     rcx, [rbp+9E10h+var_6800]
 * 000000018004ADE2: call    sub_180031AE8
 * 000000018004ADE7: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004ADEC: mov     rcx, rax
 * 000000018004ADEF: call    sub_1800D4C70
 * 000000018004ADF4: mov     cs:byte_18021FCBC, al
 * 000000018004ADFA: lea     rcx, [rbp+9E10h+var_67E0]; void *
 * 000000018004AE01: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AE06: nop
 * 000000018004AE07: lea     rcx, [rbp+9E10h+var_67C0]; void *
 * 000000018004AE0E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AE13: nop
 * 000000018004AE14: lea     rcx, dword_18021FCC0
 * 000000018004AE1B: call    _Init_thread_footer
 * 000000018004AE20: mov     rax, [rdi+rbx*8]
 * 000000018004AE24: mov     eax, [r15+rax]
 * 000000018004AE28: cmp     cs:dword_18021FCC8, eax
 * 000000018004AE2E: jle     loc_18004AF17
 * 000000018004AE34: lea     rcx, dword_18021FCC8
 * 000000018004AE3B: call    _Init_thread_header
 * 000000018004AE40: cmp     cs:dword_18021FCC8, r14d
 * 000000018004AE47: jnz     loc_18004AF17
 * 000000018004AE4D: lea     rax, unk_1801604F0
 * 000000018004AE54: mov     qword ptr [rbp+9E10h+var_9D50], rax
 * 000000018004AE5B: lea     rax, unk_180166C7C
 * 000000018004AE62: mov     qword ptr [rbp+9E10h+var_9D50+8], rax
 * 000000018004AE69: movups  xmm0, [rbp+9E10h+var_9D50]
 * 000000018004AE70: movups  [rbp+9E10h+var_8710], xmm0
 * 000000018004AE77: mov     dword ptr [rbp+9E10h+var_8700], 5
 * 000000018004AE81: mov     dword ptr [rbp+9E10h+var_8700+4], esi
 * 000000018004AE87: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004AE8C: movups  xmm0, [rbp+9E10h+var_8700]
 * 000000018004AE93: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004AE98: call    sub_1800496D0
 * 000000018004AE9D: mov     r8, rax
 * 000000018004AEA0: mov     r9d, r12d
 * 000000018004AEA3: mov     edx, 38h ; '8'
 * 000000018004AEA8: lea     rcx, [rbp+9E10h+var_6760]; Src
 * 000000018004AEAF: call    sub_1800D4B98
 * 000000018004AEB4: nop
 * 000000018004AEB5: mov     r8, rax
 * 000000018004AEB8: mov     rdx, r13
 * 000000018004AEBB: lea     rcx, [rbp+9E10h+var_6780]
 * 000000018004AEC2: call    sub_1800494AC
 * 000000018004AEC7: nop
 * 000000018004AEC8: lea     r8, aPixel; "/Pixel"
 * 000000018004AECF: mov     rdx, rax
 * 000000018004AED2: lea     rcx, [rbp+9E10h+var_67A0]
 * 000000018004AED9: call    sub_180031AE8
 * 000000018004AEDE: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004AEE3: mov     rcx, rax
 * 000000018004AEE6: call    sub_1800D4C70
 * 000000018004AEEB: mov     cs:byte_18021FCC4, al
 * 000000018004AEF1: lea     rcx, [rbp+9E10h+var_6780]; void *
 * 000000018004AEF8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AEFD: nop
 * 000000018004AEFE: lea     rcx, [rbp+9E10h+var_6760]; void *
 * 000000018004AF05: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AF0A: nop
 * 000000018004AF0B: lea     rcx, dword_18021FCC8
 * 000000018004AF12: call    _Init_thread_footer
 * 000000018004AF17: mov     rax, [rdi+rbx*8]
 * 000000018004AF1B: mov     eax, [r15+rax]
 * 000000018004AF1F: cmp     cs:dword_18021FCD0, eax
 * 000000018004AF25: jle     loc_18004B00E
 * 000000018004AF2B: lea     rcx, dword_18021FCD0
 * 000000018004AF32: call    _Init_thread_header
 * 000000018004AF37: cmp     cs:dword_18021FCD0, r14d
 * 000000018004AF3E: jnz     loc_18004B00E
 * 000000018004AF44: lea     rax, unk_1801604F0
 * 000000018004AF4B: mov     qword ptr [rbp+9E10h+var_9D40], rax
 * 000000018004AF52: lea     rax, unk_180166C7C
 * 000000018004AF59: mov     qword ptr [rbp+9E10h+var_9D40+8], rax
 * 000000018004AF60: movups  xmm0, [rbp+9E10h+var_9D40]
 * 000000018004AF67: movups  [rbp+9E10h+var_86F0], xmm0
 * 000000018004AF6E: mov     dword ptr [rbp+9E10h+var_86E0], 5
 * 000000018004AF78: mov     dword ptr [rbp+9E10h+var_86E0+4], esi
 * 000000018004AF7E: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004AF83: movups  xmm0, [rbp+9E10h+var_86E0]
 * 000000018004AF8A: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004AF8F: call    sub_1800496D0
 * 000000018004AF94: mov     r8, rax
 * 000000018004AF97: mov     r9d, r12d
 * 000000018004AF9A: mov     edx, 3Ah ; ':'
 * 000000018004AF9F: lea     rcx, [rbp+9E10h+var_6700]; Src
 * 000000018004AFA6: call    sub_1800D4B98
 * 000000018004AFAB: nop
 * 000000018004AFAC: mov     r8, rax
 * 000000018004AFAF: mov     rdx, r13
 * 000000018004AFB2: lea     rcx, [rbp+9E10h+var_6720]
 * 000000018004AFB9: call    sub_1800494AC
 * 000000018004AFBE: nop
 * 000000018004AFBF: lea     r8, aPixel; "/Pixel"
 * 000000018004AFC6: mov     rdx, rax
 * 000000018004AFC9: lea     rcx, [rbp+9E10h+var_6740]
 * 000000018004AFD0: call    sub_180031AE8
 * 000000018004AFD5: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004AFDA: mov     rcx, rax
 * 000000018004AFDD: call    sub_1800D4C70
 * 000000018004AFE2: mov     cs:byte_18021FCCC, al
 * 000000018004AFE8: lea     rcx, [rbp+9E10h+var_6720]; void *
 * 000000018004AFEF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004AFF4: nop
 * 000000018004AFF5: lea     rcx, [rbp+9E10h+var_6700]; void *
 * 000000018004AFFC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B001: nop
 * 000000018004B002: lea     rcx, dword_18021FCD0
 * 000000018004B009: call    _Init_thread_footer
 * 000000018004B00E: mov     rax, [rdi+rbx*8]
 * 000000018004B012: mov     eax, [r15+rax]
 * 000000018004B016: cmp     cs:dword_18021FCD8, eax
 * 000000018004B01C: jle     loc_18004B105
 * 000000018004B022: lea     rcx, dword_18021FCD8
 * 000000018004B029: call    _Init_thread_header
 * 000000018004B02E: cmp     cs:dword_18021FCD8, r14d
 * 000000018004B035: jnz     loc_18004B105
 * 000000018004B03B: lea     rax, unk_180144C30
 * 000000018004B042: mov     qword ptr [rbp+9E10h+var_9D30], rax
 * 000000018004B049: lea     rax, unk_18014B014
 * 000000018004B050: mov     qword ptr [rbp+9E10h+var_9D30+8], rax
 * 000000018004B057: movups  xmm0, [rbp+9E10h+var_9D30]
 * 000000018004B05E: movups  [rbp+9E10h+var_86D0], xmm0
 * 000000018004B065: mov     dword ptr [rbp+9E10h+var_86C0], 5
 * 000000018004B06F: mov     dword ptr [rbp+9E10h+var_86C0+4], esi
 * 000000018004B075: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004B07A: movups  xmm0, [rbp+9E10h+var_86C0]
 * 000000018004B081: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004B086: call    sub_1800496D0
 * 000000018004B08B: mov     r8, rax
 * 000000018004B08E: mov     r9d, r12d
 * 000000018004B091: mov     edx, 40h ; '@'
 * 000000018004B096: lea     rcx, [rbp+9E10h+var_66A0]; Src
 * 000000018004B09D: call    sub_1800D4B98
 * 000000018004B0A2: nop
 * 000000018004B0A3: mov     r8, rax
 * 000000018004B0A6: mov     rdx, r13
 * 000000018004B0A9: lea     rcx, [rbp+9E10h+var_66C0]
 * 000000018004B0B0: call    sub_1800494AC
 * 000000018004B0B5: nop
 * 000000018004B0B6: lea     r8, aPixel; "/Pixel"
 * 000000018004B0BD: mov     rdx, rax
 * 000000018004B0C0: lea     rcx, [rbp+9E10h+var_66E0]
 * 000000018004B0C7: call    sub_180031AE8
 * 000000018004B0CC: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004B0D1: mov     rcx, rax
 * 000000018004B0D4: call    sub_1800D4C70
 * 000000018004B0D9: mov     cs:byte_18021FCD4, al
 * 000000018004B0DF: lea     rcx, [rbp+9E10h+var_66C0]; void *
 * 000000018004B0E6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B0EB: nop
 * 000000018004B0EC: lea     rcx, [rbp+9E10h+var_66A0]; void *
 * 000000018004B0F3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B0F8: nop
 * 000000018004B0F9: lea     rcx, dword_18021FCD8
 * 000000018004B100: call    _Init_thread_footer
 * 000000018004B105: mov     rax, [rdi+rbx*8]
 * 000000018004B109: mov     eax, [r15+rax]
 * 000000018004B10D: cmp     cs:dword_18021FCE0, eax
 * 000000018004B113: jle     loc_18004B1FC
 * 000000018004B119: lea     rcx, dword_18021FCE0
 * 000000018004B120: call    _Init_thread_header
 * 000000018004B125: cmp     cs:dword_18021FCE0, r14d
 * 000000018004B12C: jnz     loc_18004B1FC
 * 000000018004B132: lea     rax, unk_180144C30
 * 000000018004B139: mov     qword ptr [rbp+9E10h+var_9D20], rax
 * 000000018004B140: lea     rax, unk_18014B014
 * 000000018004B147: mov     qword ptr [rbp+9E10h+var_9D20+8], rax
 * 000000018004B14E: movups  xmm0, [rbp+9E10h+var_9D20]
 * 000000018004B155: movups  [rbp+9E10h+var_86B0], xmm0
 * 000000018004B15C: mov     dword ptr [rbp+9E10h+var_86A0], 5
 * 000000018004B166: mov     dword ptr [rbp+9E10h+var_86A0+4], esi
 * 000000018004B16C: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004B171: movups  xmm0, [rbp+9E10h+var_86A0]
 * 000000018004B178: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004B17D: call    sub_1800496D0
 * 000000018004B182: mov     r8, rax
 * 000000018004B185: mov     r9d, r12d
 * 000000018004B188: mov     edx, 42h ; 'B'
 * 000000018004B18D: lea     rcx, [rbp+9E10h+var_6640]; Src
 * 000000018004B194: call    sub_1800D4B98
 * 000000018004B199: nop
 * 000000018004B19A: mov     r8, rax
 * 000000018004B19D: mov     rdx, r13
 * 000000018004B1A0: lea     rcx, [rbp+9E10h+var_6660]
 * 000000018004B1A7: call    sub_1800494AC
 * 000000018004B1AC: nop
 * 000000018004B1AD: lea     r8, aPixel; "/Pixel"
 * 000000018004B1B4: mov     rdx, rax
 * 000000018004B1B7: lea     rcx, [rbp+9E10h+var_6680]
 * 000000018004B1BE: call    sub_180031AE8
 * 000000018004B1C3: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004B1C8: mov     rcx, rax
 * 000000018004B1CB: call    sub_1800D4C70
 * 000000018004B1D0: mov     cs:byte_18021FCDC, al
 * 000000018004B1D6: lea     rcx, [rbp+9E10h+var_6660]; void *
 * 000000018004B1DD: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B1E2: nop
 * 000000018004B1E3: lea     rcx, [rbp+9E10h+var_6640]; void *
 * 000000018004B1EA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B1EF: nop
 * 000000018004B1F0: lea     rcx, dword_18021FCE0
 * 000000018004B1F7: call    _Init_thread_footer
 * 000000018004B1FC: mov     rax, [rdi+rbx*8]
 * 000000018004B200: mov     eax, [r15+rax]
 * 000000018004B204: cmp     cs:dword_18021FCE8, eax
 * 000000018004B20A: jle     loc_18004B2F3
 * 000000018004B210: lea     rcx, dword_18021FCE8
 * 000000018004B217: call    _Init_thread_header
 * 000000018004B21C: cmp     cs:dword_18021FCE8, r14d
 * 000000018004B223: jnz     loc_18004B2F3
 * 000000018004B229: lea     rax, unk_18014F5D0
 * 000000018004B230: mov     qword ptr [rbp+9E10h+var_9D10], rax
 * 000000018004B237: lea     rax, unk_180155B5C
 * 000000018004B23E: mov     qword ptr [rbp+9E10h+var_9D10+8], rax
 * 000000018004B245: movups  xmm0, [rbp+9E10h+var_9D10]
 * 000000018004B24C: movups  [rbp+9E10h+var_8690], xmm0
 * 000000018004B253: mov     dword ptr [rbp+9E10h+var_8680], 5
 * 000000018004B25D: mov     dword ptr [rbp+9E10h+var_8680+4], esi
 * 000000018004B263: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004B268: movups  xmm0, [rbp+9E10h+var_8680]
 * 000000018004B26F: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004B274: call    sub_1800496D0
 * 000000018004B279: mov     r8, rax
 * 000000018004B27C: mov     r9d, r12d
 * 000000018004B27F: mov     edx, 48h ; 'H'
 * 000000018004B284: lea     rcx, [rbp+9E10h+var_65E0]; Src
 * 000000018004B28B: call    sub_1800D4B98
 * 000000018004B290: nop
 * 000000018004B291: mov     r8, rax
 * 000000018004B294: mov     rdx, r13
 * 000000018004B297: lea     rcx, [rbp+9E10h+var_6600]
 * 000000018004B29E: call    sub_1800494AC
 * 000000018004B2A3: nop
 * 000000018004B2A4: lea     r8, aPixel; "/Pixel"
 * 000000018004B2AB: mov     rdx, rax
 * 000000018004B2AE: lea     rcx, [rbp+9E10h+var_6620]
 * 000000018004B2B5: call    sub_180031AE8
 * 000000018004B2BA: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004B2BF: mov     rcx, rax
 * 000000018004B2C2: call    sub_1800D4C70
 * 000000018004B2C7: mov     cs:byte_18021FCE4, al
 * 000000018004B2CD: lea     rcx, [rbp+9E10h+var_6600]; void *
 * 000000018004B2D4: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B2D9: nop
 * 000000018004B2DA: lea     rcx, [rbp+9E10h+var_65E0]; void *
 * 000000018004B2E1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B2E6: nop
 * 000000018004B2E7: lea     rcx, dword_18021FCE8
 * 000000018004B2EE: call    _Init_thread_footer
 * 000000018004B2F3: mov     rax, [rdi+rbx*8]
 * 000000018004B2F7: mov     eax, [r15+rax]
 * 000000018004B2FB: cmp     cs:dword_18021FCF0, eax
 * 000000018004B301: jle     loc_18004B3EA
 * 000000018004B307: lea     rcx, dword_18021FCF0
 * 000000018004B30E: call    _Init_thread_header
 * 000000018004B313: cmp     cs:dword_18021FCF0, r14d
 * 000000018004B31A: jnz     loc_18004B3EA
 * 000000018004B320: lea     rax, unk_18014F5D0
 * 000000018004B327: mov     qword ptr [rbp+9E10h+var_9D00], rax
 * 000000018004B32E: lea     rax, unk_180155B5C
 * 000000018004B335: mov     qword ptr [rbp+9E10h+var_9D00+8], rax
 * 000000018004B33C: movups  xmm0, [rbp+9E10h+var_9D00]
 * 000000018004B343: movups  [rbp+9E10h+var_8670], xmm0
 * 000000018004B34A: mov     dword ptr [rbp+9E10h+var_8660], 5
 * 000000018004B354: mov     dword ptr [rbp+9E10h+var_8660+4], esi
 * 000000018004B35A: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004B35F: movups  xmm0, [rbp+9E10h+var_8660]
 * 000000018004B366: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004B36B: call    sub_1800496D0
 * 000000018004B370: mov     r8, rax
 * 000000018004B373: mov     r9d, r12d
 * 000000018004B376: mov     edx, 4Ah ; 'J'
 * 000000018004B37B: lea     rcx, [rbp+9E10h+var_6580]; Src
 * 000000018004B382: call    sub_1800D4B98
 * 000000018004B387: nop
 * 000000018004B388: mov     r8, rax
 * 000000018004B38B: mov     rdx, r13
 * 000000018004B38E: lea     rcx, [rbp+9E10h+var_65A0]
 * 000000018004B395: call    sub_1800494AC
 * 000000018004B39A: nop
 * 000000018004B39B: lea     r8, aPixel; "/Pixel"
 * 000000018004B3A2: mov     rdx, rax
 * 000000018004B3A5: lea     rcx, [rbp+9E10h+var_65C0]
 * 000000018004B3AC: call    sub_180031AE8
 * 000000018004B3B1: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004B3B6: mov     rcx, rax
 * 000000018004B3B9: call    sub_1800D4C70
 * 000000018004B3BE: mov     cs:byte_18021FCEC, al
 * 000000018004B3C4: lea     rcx, [rbp+9E10h+var_65A0]; void *
 * 000000018004B3CB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B3D0: nop
 * 000000018004B3D1: lea     rcx, [rbp+9E10h+var_6580]; void *
 * 000000018004B3D8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B3DD: nop
 * 000000018004B3DE: lea     rcx, dword_18021FCF0
 * 000000018004B3E5: call    _Init_thread_footer
 * 000000018004B3EA: mov     rax, [rdi+rbx*8]
 * 000000018004B3EE: mov     eax, [r15+rax]
 * 000000018004B3F2: cmp     cs:dword_18021FCF8, eax
 * 000000018004B3F8: jle     loc_18004B4E1
 * 000000018004B3FE: lea     rcx, dword_18021FCF8
 * 000000018004B405: call    _Init_thread_header
 * 000000018004B40A: cmp     cs:dword_18021FCF8, r14d
 * 000000018004B411: jnz     loc_18004B4E1
 * 000000018004B417: lea     rax, unk_180156C30
 * 000000018004B41E: mov     qword ptr [rbp+9E10h+var_9CF0], rax
 * 000000018004B425: lea     rax, unk_18015D1E8
 * 000000018004B42C: mov     qword ptr [rbp+9E10h+var_9CF0+8], rax
 * 000000018004B433: movups  xmm0, [rbp+9E10h+var_9CF0]
 * 000000018004B43A: movups  [rbp+9E10h+var_8650], xmm0
 * 000000018004B441: mov     dword ptr [rbp+9E10h+var_8640], 5
 * 000000018004B44B: mov     dword ptr [rbp+9E10h+var_8640+4], esi
 * 000000018004B451: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004B456: movups  xmm0, [rbp+9E10h+var_8640]
 * 000000018004B45D: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004B462: call    sub_1800496D0
 * 000000018004B467: mov     r8, rax
 * 000000018004B46A: mov     r9d, r12d
 * 000000018004B46D: mov     edx, 50h ; 'P'
 * 000000018004B472: lea     rcx, [rbp+9E10h+var_6520]; Src
 * 000000018004B479: call    sub_1800D4B98
 * 000000018004B47E: nop
 * 000000018004B47F: mov     r8, rax
 * 000000018004B482: mov     rdx, r13
 * 000000018004B485: lea     rcx, [rbp+9E10h+var_6540]
 * 000000018004B48C: call    sub_1800494AC
 * 000000018004B491: nop
 * 000000018004B492: lea     r8, aPixel; "/Pixel"
 * 000000018004B499: mov     rdx, rax
 * 000000018004B49C: lea     rcx, [rbp+9E10h+var_6560]
 * 000000018004B4A3: call    sub_180031AE8
 * 000000018004B4A8: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004B4AD: mov     rcx, rax
 * 000000018004B4B0: call    sub_1800D4C70
 * 000000018004B4B5: mov     cs:byte_18021FCF4, al
 * 000000018004B4BB: lea     rcx, [rbp+9E10h+var_6540]; void *
 * 000000018004B4C2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B4C7: nop
 * 000000018004B4C8: lea     rcx, [rbp+9E10h+var_6520]; void *
 * 000000018004B4CF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B4D4: nop
 * 000000018004B4D5: lea     rcx, dword_18021FCF8
 * 000000018004B4DC: call    _Init_thread_footer
 * 000000018004B4E1: mov     rax, [rdi+rbx*8]
 * 000000018004B4E5: mov     eax, [r15+rax]
 * 000000018004B4E9: cmp     cs:dword_18021FD00, eax
 * 000000018004B4EF: jle     loc_18004B5D8
 * 000000018004B4F5: lea     rcx, dword_18021FD00
 * 000000018004B4FC: call    _Init_thread_header
 * 000000018004B501: cmp     cs:dword_18021FD00, r14d
 * 000000018004B508: jnz     loc_18004B5D8
 * 000000018004B50E: lea     rax, unk_180156C30
 * 000000018004B515: mov     qword ptr [rbp+9E10h+var_9CE0], rax
 * 000000018004B51C: lea     rax, unk_18015D1E8
 * 000000018004B523: mov     qword ptr [rbp+9E10h+var_9CE0+8], rax
 * 000000018004B52A: movups  xmm0, [rbp+9E10h+var_9CE0]
 * 000000018004B531: movups  [rbp+9E10h+var_8630], xmm0
 * 000000018004B538: mov     dword ptr [rbp+9E10h+var_8620], 5
 * 000000018004B542: mov     dword ptr [rbp+9E10h+var_8620+4], esi
 * 000000018004B548: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004B54D: movups  xmm0, [rbp+9E10h+var_8620]
 * 000000018004B554: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004B559: call    sub_1800496D0
 * 000000018004B55E: mov     r8, rax
 * 000000018004B561: mov     r9d, r12d
 * 000000018004B564: mov     edx, 52h ; 'R'
 * 000000018004B569: lea     rcx, [rbp+9E10h+var_64C0]; Src
 * 000000018004B570: call    sub_1800D4B98
 * 000000018004B575: nop
 * 000000018004B576: mov     r8, rax
 * 000000018004B579: mov     rdx, r13
 * 000000018004B57C: lea     rcx, [rbp+9E10h+var_64E0]
 * 000000018004B583: call    sub_1800494AC
 * 000000018004B588: nop
 * 000000018004B589: lea     r8, aPixel; "/Pixel"
 * 000000018004B590: mov     rdx, rax
 * 000000018004B593: lea     rcx, [rbp+9E10h+var_6500]
 * 000000018004B59A: call    sub_180031AE8
 * 000000018004B59F: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004B5A4: mov     rcx, rax
 * 000000018004B5A7: call    sub_1800D4C70
 * 000000018004B5AC: mov     cs:byte_18021FCFC, al
 * 000000018004B5B2: lea     rcx, [rbp+9E10h+var_64E0]; void *
 * 000000018004B5B9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B5BE: nop
 * 000000018004B5BF: lea     rcx, [rbp+9E10h+var_64C0]; void *
 * 000000018004B5C6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B5CB: nop
 * 000000018004B5CC: lea     rcx, dword_18021FD00
 * 000000018004B5D3: call    _Init_thread_footer
 * 000000018004B5D8: mov     rax, [rdi+rbx*8]
 * 000000018004B5DC: mov     eax, [r15+rax]
 * 000000018004B5E0: cmp     cs:dword_18021FD08, eax
 * 000000018004B5E6: jle     loc_18004B6CF
 * 000000018004B5EC: lea     rcx, dword_18021FD08
 * 000000018004B5F3: call    _Init_thread_header
 * 000000018004B5F8: cmp     cs:dword_18021FD08, r14d
 * 000000018004B5FF: jnz     loc_18004B6CF
 * 000000018004B605: lea     rax, unk_1801604F0
 * 000000018004B60C: mov     qword ptr [rbp+9E10h+var_9CD0], rax
 * 000000018004B613: lea     rax, unk_180166C7C
 * 000000018004B61A: mov     qword ptr [rbp+9E10h+var_9CD0+8], rax
 * 000000018004B621: movups  xmm0, [rbp+9E10h+var_9CD0]
 * 000000018004B628: movups  [rbp+9E10h+var_8610], xmm0
 * 000000018004B62F: mov     dword ptr [rbp+9E10h+var_8600], 5
 * 000000018004B639: mov     dword ptr [rbp+9E10h+var_8600+4], esi
 * 000000018004B63F: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004B644: movups  xmm0, [rbp+9E10h+var_8600]
 * 000000018004B64B: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004B650: call    sub_1800496D0
 * 000000018004B655: mov     r8, rax
 * 000000018004B658: mov     r9d, r12d
 * 000000018004B65B: mov     edx, 58h ; 'X'
 * 000000018004B660: lea     rcx, [rbp+9E10h+var_6460]; Src
 * 000000018004B667: call    sub_1800D4B98
 * 000000018004B66C: nop
 * 000000018004B66D: mov     r8, rax
 * 000000018004B670: mov     rdx, r13
 * 000000018004B673: lea     rcx, [rbp+9E10h+var_6480]
 * 000000018004B67A: call    sub_1800494AC
 * 000000018004B67F: nop
 * 000000018004B680: lea     r8, aPixel; "/Pixel"
 * 000000018004B687: mov     rdx, rax
 * 000000018004B68A: lea     rcx, [rbp+9E10h+var_64A0]
 * 000000018004B691: call    sub_180031AE8
 * 000000018004B696: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004B69B: mov     rcx, rax
 * 000000018004B69E: call    sub_1800D4C70
 * 000000018004B6A3: mov     cs:byte_18021FD04, al
 * 000000018004B6A9: lea     rcx, [rbp+9E10h+var_6480]; void *
 * 000000018004B6B0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B6B5: nop
 * 000000018004B6B6: lea     rcx, [rbp+9E10h+var_6460]; void *
 * 000000018004B6BD: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B6C2: nop
 * 000000018004B6C3: lea     rcx, dword_18021FD08
 * 000000018004B6CA: call    _Init_thread_footer
 * 000000018004B6CF: mov     rax, [rdi+rbx*8]
 * 000000018004B6D3: mov     eax, [r15+rax]
 * 000000018004B6D7: cmp     cs:dword_18021FD10, eax
 * 000000018004B6DD: jle     loc_18004B7C6
 * 000000018004B6E3: lea     rcx, dword_18021FD10
 * 000000018004B6EA: call    _Init_thread_header
 * 000000018004B6EF: cmp     cs:dword_18021FD10, r14d
 * 000000018004B6F6: jnz     loc_18004B7C6
 * 000000018004B6FC: lea     rax, unk_1801604F0
 * 000000018004B703: mov     qword ptr [rbp+9E10h+var_9CC0], rax
 * 000000018004B70A: lea     rax, unk_180166C7C
 * 000000018004B711: mov     qword ptr [rbp+9E10h+var_9CC0+8], rax
 * 000000018004B718: movups  xmm0, [rbp+9E10h+var_9CC0]
 * 000000018004B71F: movups  [rbp+9E10h+var_85F0], xmm0
 * 000000018004B726: mov     dword ptr [rbp+9E10h+var_85E0], 5
 * 000000018004B730: mov     dword ptr [rbp+9E10h+var_85E0+4], esi
 * 000000018004B736: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004B73B: movups  xmm0, [rbp+9E10h+var_85E0]
 * 000000018004B742: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004B747: call    sub_1800496D0
 * 000000018004B74C: mov     r8, rax
 * 000000018004B74F: mov     r9d, r12d
 * 000000018004B752: mov     edx, 5Ah ; 'Z'
 * 000000018004B757: lea     rcx, [rbp+9E10h+var_6400]; Src
 * 000000018004B75E: call    sub_1800D4B98
 * 000000018004B763: nop
 * 000000018004B764: mov     r8, rax
 * 000000018004B767: mov     rdx, r13
 * 000000018004B76A: lea     rcx, [rbp+9E10h+var_6420]
 * 000000018004B771: call    sub_1800494AC
 * 000000018004B776: nop
 * 000000018004B777: lea     r8, aPixel; "/Pixel"
 * 000000018004B77E: mov     rdx, rax
 * 000000018004B781: lea     rcx, [rbp+9E10h+var_6440]
 * 000000018004B788: call    sub_180031AE8
 * 000000018004B78D: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004B792: mov     rcx, rax
 * 000000018004B795: call    sub_1800D4C70
 * 000000018004B79A: mov     cs:byte_18021FD0C, al
 * 000000018004B7A0: lea     rcx, [rbp+9E10h+var_6420]; void *
 * 000000018004B7A7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B7AC: nop
 * 000000018004B7AD: lea     rcx, [rbp+9E10h+var_6400]; void *
 * 000000018004B7B4: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B7B9: nop
 * 000000018004B7BA: lea     rcx, dword_18021FD10
 * 000000018004B7C1: call    _Init_thread_footer
 * 000000018004B7C6: mov     rax, [rdi+rbx*8]
 * 000000018004B7CA: mov     eax, [r15+rax]
 * 000000018004B7CE: cmp     cs:dword_18021FD18, eax
 * 000000018004B7D4: jle     loc_18004B8BD
 * 000000018004B7DA: lea     rcx, dword_18021FD18
 * 000000018004B7E1: call    _Init_thread_header
 * 000000018004B7E6: cmp     cs:dword_18021FD18, r14d
 * 000000018004B7ED: jnz     loc_18004B8BD
 * 000000018004B7F3: lea     rax, unk_180144C30
 * 000000018004B7FA: mov     qword ptr [rbp+9E10h+var_9CB0], rax
 * 000000018004B801: lea     rax, unk_18014B014
 * 000000018004B808: mov     qword ptr [rbp+9E10h+var_9CB0+8], rax
 * 000000018004B80F: movups  xmm0, [rbp+9E10h+var_9CB0]
 * 000000018004B816: movups  [rbp+9E10h+var_85D0], xmm0
 * 000000018004B81D: mov     dword ptr [rbp+9E10h+var_85C0], 5
 * 000000018004B827: mov     dword ptr [rbp+9E10h+var_85C0+4], esi
 * 000000018004B82D: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004B832: movups  xmm0, [rbp+9E10h+var_85C0]
 * 000000018004B839: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004B83E: call    sub_1800496D0
 * 000000018004B843: mov     r8, rax
 * 000000018004B846: mov     r9d, r12d
 * 000000018004B849: mov     edx, 60h ; '`'
 * 000000018004B84E: lea     rcx, [rbp+9E10h+var_63A0]; Src
 * 000000018004B855: call    sub_1800D4B98
 * 000000018004B85A: nop
 * 000000018004B85B: mov     r8, rax
 * 000000018004B85E: mov     rdx, r13
 * 000000018004B861: lea     rcx, [rbp+9E10h+var_63C0]
 * 000000018004B868: call    sub_1800494AC
 * 000000018004B86D: nop
 * 000000018004B86E: lea     r8, aPixel; "/Pixel"
 * 000000018004B875: mov     rdx, rax
 * 000000018004B878: lea     rcx, [rbp+9E10h+var_63E0]
 * 000000018004B87F: call    sub_180031AE8
 * 000000018004B884: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004B889: mov     rcx, rax
 * 000000018004B88C: call    sub_1800D4C70
 * 000000018004B891: mov     cs:byte_18021FD14, al
 * 000000018004B897: lea     rcx, [rbp+9E10h+var_63C0]; void *
 * 000000018004B89E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B8A3: nop
 * 000000018004B8A4: lea     rcx, [rbp+9E10h+var_63A0]; void *
 * 000000018004B8AB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B8B0: nop
 * 000000018004B8B1: lea     rcx, dword_18021FD18
 * 000000018004B8B8: call    _Init_thread_footer
 * 000000018004B8BD: mov     rax, [rdi+rbx*8]
 * 000000018004B8C1: mov     eax, [r15+rax]
 * 000000018004B8C5: cmp     cs:dword_18021FD20, eax
 * 000000018004B8CB: jle     loc_18004B9B4
 * 000000018004B8D1: lea     rcx, dword_18021FD20
 * 000000018004B8D8: call    _Init_thread_header
 * 000000018004B8DD: cmp     cs:dword_18021FD20, r14d
 * 000000018004B8E4: jnz     loc_18004B9B4
 * 000000018004B8EA: lea     rax, unk_180144C30
 * 000000018004B8F1: mov     qword ptr [rbp+9E10h+var_9CA0], rax
 * 000000018004B8F8: lea     rax, unk_18014B014
 * 000000018004B8FF: mov     qword ptr [rbp+9E10h+var_9CA0+8], rax
 * 000000018004B906: movups  xmm0, [rbp+9E10h+var_9CA0]
 * 000000018004B90D: movups  [rbp+9E10h+var_85B0], xmm0
 * 000000018004B914: mov     dword ptr [rbp+9E10h+var_85A0], 5
 * 000000018004B91E: mov     dword ptr [rbp+9E10h+var_85A0+4], esi
 * 000000018004B924: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004B929: movups  xmm0, [rbp+9E10h+var_85A0]
 * 000000018004B930: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004B935: call    sub_1800496D0
 * 000000018004B93A: mov     r8, rax
 * 000000018004B93D: mov     r9d, r12d
 * 000000018004B940: mov     edx, 62h ; 'b'
 * 000000018004B945: lea     rcx, [rbp+9E10h+var_6340]; Src
 * 000000018004B94C: call    sub_1800D4B98
 * 000000018004B951: nop
 * 000000018004B952: mov     r8, rax
 * 000000018004B955: mov     rdx, r13
 * 000000018004B958: lea     rcx, [rbp+9E10h+var_6360]
 * 000000018004B95F: call    sub_1800494AC
 * 000000018004B964: nop
 * 000000018004B965: lea     r8, aPixel; "/Pixel"
 * 000000018004B96C: mov     rdx, rax
 * 000000018004B96F: lea     rcx, [rbp+9E10h+var_6380]
 * 000000018004B976: call    sub_180031AE8
 * 000000018004B97B: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004B980: mov     rcx, rax
 * 000000018004B983: call    sub_1800D4C70
 * 000000018004B988: mov     cs:byte_18021FD1C, al
 * 000000018004B98E: lea     rcx, [rbp+9E10h+var_6360]; void *
 * 000000018004B995: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B99A: nop
 * 000000018004B99B: lea     rcx, [rbp+9E10h+var_6340]; void *
 * 000000018004B9A2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004B9A7: nop
 * 000000018004B9A8: lea     rcx, dword_18021FD20
 * 000000018004B9AF: call    _Init_thread_footer
 * 000000018004B9B4: mov     rax, [rdi+rbx*8]
 * 000000018004B9B8: mov     eax, [r15+rax]
 * 000000018004B9BC: cmp     cs:dword_18021FD28, eax
 * 000000018004B9C2: jle     loc_18004BAAB
 * 000000018004B9C8: lea     rcx, dword_18021FD28
 * 000000018004B9CF: call    _Init_thread_header
 * 000000018004B9D4: cmp     cs:dword_18021FD28, r14d
 * 000000018004B9DB: jnz     loc_18004BAAB
 * 000000018004B9E1: lea     rax, unk_18014F5D0
 * 000000018004B9E8: mov     qword ptr [rbp+9E10h+var_9C90], rax
 * 000000018004B9EF: lea     rax, unk_180155B5C
 * 000000018004B9F6: mov     qword ptr [rbp+9E10h+var_9C90+8], rax
 * 000000018004B9FD: movups  xmm0, [rbp+9E10h+var_9C90]
 * 000000018004BA04: movups  [rbp+9E10h+var_8590], xmm0
 * 000000018004BA0B: mov     dword ptr [rbp+9E10h+var_8580], 5
 * 000000018004BA15: mov     dword ptr [rbp+9E10h+var_8580+4], esi
 * 000000018004BA1B: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004BA20: movups  xmm0, [rbp+9E10h+var_8580]
 * 000000018004BA27: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004BA2C: call    sub_1800496D0
 * 000000018004BA31: mov     r8, rax
 * 000000018004BA34: mov     r9d, r12d
 * 000000018004BA37: mov     edx, 68h ; 'h'
 * 000000018004BA3C: lea     rcx, [rbp+9E10h+var_62E0]; Src
 * 000000018004BA43: call    sub_1800D4B98
 * 000000018004BA48: nop
 * 000000018004BA49: mov     r8, rax
 * 000000018004BA4C: mov     rdx, r13
 * 000000018004BA4F: lea     rcx, [rbp+9E10h+var_6300]
 * 000000018004BA56: call    sub_1800494AC
 * 000000018004BA5B: nop
 * 000000018004BA5C: lea     r8, aPixel; "/Pixel"
 * 000000018004BA63: mov     rdx, rax
 * 000000018004BA66: lea     rcx, [rbp+9E10h+var_6320]
 * 000000018004BA6D: call    sub_180031AE8
 * 000000018004BA72: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004BA77: mov     rcx, rax
 * 000000018004BA7A: call    sub_1800D4C70
 * 000000018004BA7F: mov     cs:byte_18021FD24, al
 * 000000018004BA85: lea     rcx, [rbp+9E10h+var_6300]; void *
 * 000000018004BA8C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BA91: nop
 * 000000018004BA92: lea     rcx, [rbp+9E10h+var_62E0]; void *
 * 000000018004BA99: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BA9E: nop
 * 000000018004BA9F: lea     rcx, dword_18021FD28
 * 000000018004BAA6: call    _Init_thread_footer
 * 000000018004BAAB: mov     rax, [rdi+rbx*8]
 * 000000018004BAAF: mov     eax, [r15+rax]
 * 000000018004BAB3: cmp     cs:dword_18021FD30, eax
 * 000000018004BAB9: jle     loc_18004BBA2
 * 000000018004BABF: lea     rcx, dword_18021FD30
 * 000000018004BAC6: call    _Init_thread_header
 * 000000018004BACB: cmp     cs:dword_18021FD30, r14d
 * 000000018004BAD2: jnz     loc_18004BBA2
 * 000000018004BAD8: lea     rax, unk_18014F5D0
 * 000000018004BADF: mov     qword ptr [rbp+9E10h+var_9C80], rax
 * 000000018004BAE6: lea     rax, unk_180155B5C
 * 000000018004BAED: mov     qword ptr [rbp+9E10h+var_9C80+8], rax
 * 000000018004BAF4: movups  xmm0, [rbp+9E10h+var_9C80]
 * 000000018004BAFB: movups  [rbp+9E10h+var_8570], xmm0
 * 000000018004BB02: mov     dword ptr [rbp+9E10h+var_8560], 5
 * 000000018004BB0C: mov     dword ptr [rbp+9E10h+var_8560+4], esi
 * 000000018004BB12: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004BB17: movups  xmm0, [rbp+9E10h+var_8560]
 * 000000018004BB1E: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004BB23: call    sub_1800496D0
 * 000000018004BB28: mov     r8, rax
 * 000000018004BB2B: mov     r9d, r12d
 * 000000018004BB2E: mov     edx, 6Ah ; 'j'
 * 000000018004BB33: lea     rcx, [rbp+9E10h+var_6280]; Src
 * 000000018004BB3A: call    sub_1800D4B98
 * 000000018004BB3F: nop
 * 000000018004BB40: mov     r8, rax
 * 000000018004BB43: mov     rdx, r13
 * 000000018004BB46: lea     rcx, [rbp+9E10h+var_62A0]
 * 000000018004BB4D: call    sub_1800494AC
 * 000000018004BB52: nop
 * 000000018004BB53: lea     r8, aPixel; "/Pixel"
 * 000000018004BB5A: mov     rdx, rax
 * 000000018004BB5D: lea     rcx, [rbp+9E10h+var_62C0]
 * 000000018004BB64: call    sub_180031AE8
 * 000000018004BB69: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004BB6E: mov     rcx, rax
 * 000000018004BB71: call    sub_1800D4C70
 * 000000018004BB76: mov     cs:byte_18021FD2C, al
 * 000000018004BB7C: lea     rcx, [rbp+9E10h+var_62A0]; void *
 * 000000018004BB83: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BB88: nop
 * 000000018004BB89: lea     rcx, [rbp+9E10h+var_6280]; void *
 * 000000018004BB90: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BB95: nop
 * 000000018004BB96: lea     rcx, dword_18021FD30
 * 000000018004BB9D: call    _Init_thread_footer
 * 000000018004BBA2: mov     rax, [rdi+rbx*8]
 * 000000018004BBA6: mov     eax, [r15+rax]
 * 000000018004BBAA: cmp     cs:dword_18021FD38, eax
 * 000000018004BBB0: jle     loc_18004BC99
 * 000000018004BBB6: lea     rcx, dword_18021FD38
 * 000000018004BBBD: call    _Init_thread_header
 * 000000018004BBC2: cmp     cs:dword_18021FD38, r14d
 * 000000018004BBC9: jnz     loc_18004BC99
 * 000000018004BBCF: lea     rax, unk_180156C30
 * 000000018004BBD6: mov     qword ptr [rbp+9E10h+var_9C70], rax
 * 000000018004BBDD: lea     rax, unk_18015D1E8
 * 000000018004BBE4: mov     qword ptr [rbp+9E10h+var_9C70+8], rax
 * 000000018004BBEB: movups  xmm0, [rbp+9E10h+var_9C70]
 * 000000018004BBF2: movups  [rbp+9E10h+var_8550], xmm0
 * 000000018004BBF9: mov     dword ptr [rbp+9E10h+var_8540], 5
 * 000000018004BC03: mov     dword ptr [rbp+9E10h+var_8540+4], esi
 * 000000018004BC09: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004BC0E: movups  xmm0, [rbp+9E10h+var_8540]
 * 000000018004BC15: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004BC1A: call    sub_1800496D0
 * 000000018004BC1F: mov     r8, rax
 * 000000018004BC22: mov     r9d, r12d
 * 000000018004BC25: mov     edx, 70h ; 'p'
 * 000000018004BC2A: lea     rcx, [rbp+9E10h+var_6220]; Src
 * 000000018004BC31: call    sub_1800D4B98
 * 000000018004BC36: nop
 * 000000018004BC37: mov     r8, rax
 * 000000018004BC3A: mov     rdx, r13
 * 000000018004BC3D: lea     rcx, [rbp+9E10h+var_6240]
 * 000000018004BC44: call    sub_1800494AC
 * 000000018004BC49: nop
 * 000000018004BC4A: lea     r8, aPixel; "/Pixel"
 * 000000018004BC51: mov     rdx, rax
 * 000000018004BC54: lea     rcx, [rbp+9E10h+var_6260]
 * 000000018004BC5B: call    sub_180031AE8
 * 000000018004BC60: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004BC65: mov     rcx, rax
 * 000000018004BC68: call    sub_1800D4C70
 * 000000018004BC6D: mov     cs:byte_18021FD34, al
 * 000000018004BC73: lea     rcx, [rbp+9E10h+var_6240]; void *
 * 000000018004BC7A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BC7F: nop
 * 000000018004BC80: lea     rcx, [rbp+9E10h+var_6220]; void *
 * 000000018004BC87: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BC8C: nop
 * 000000018004BC8D: lea     rcx, dword_18021FD38
 * 000000018004BC94: call    _Init_thread_footer
 * 000000018004BC99: mov     rax, [rdi+rbx*8]
 * 000000018004BC9D: mov     eax, [r15+rax]
 * 000000018004BCA1: cmp     cs:dword_18021FD40, eax
 * 000000018004BCA7: jle     loc_18004BD90
 * 000000018004BCAD: lea     rcx, dword_18021FD40
 * 000000018004BCB4: call    _Init_thread_header
 * 000000018004BCB9: cmp     cs:dword_18021FD40, r14d
 * 000000018004BCC0: jnz     loc_18004BD90
 * 000000018004BCC6: lea     rax, unk_180156C30
 * 000000018004BCCD: mov     qword ptr [rbp+9E10h+var_9C60], rax
 * 000000018004BCD4: lea     rax, unk_18015D1E8
 * 000000018004BCDB: mov     qword ptr [rbp+9E10h+var_9C60+8], rax
 * 000000018004BCE2: movups  xmm0, [rbp+9E10h+var_9C60]
 * 000000018004BCE9: movups  [rbp+9E10h+var_8530], xmm0
 * 000000018004BCF0: mov     dword ptr [rbp+9E10h+var_8520], 5
 * 000000018004BCFA: mov     dword ptr [rbp+9E10h+var_8520+4], esi
 * 000000018004BD00: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004BD05: movups  xmm0, [rbp+9E10h+var_8520]
 * 000000018004BD0C: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004BD11: call    sub_1800496D0
 * 000000018004BD16: mov     r8, rax
 * 000000018004BD19: mov     r9d, r12d
 * 000000018004BD1C: mov     edx, 72h ; 'r'
 * 000000018004BD21: lea     rcx, [rbp+9E10h+var_61C0]; Src
 * 000000018004BD28: call    sub_1800D4B98
 * 000000018004BD2D: nop
 * 000000018004BD2E: mov     r8, rax
 * 000000018004BD31: mov     rdx, r13
 * 000000018004BD34: lea     rcx, [rbp+9E10h+var_61E0]
 * 000000018004BD3B: call    sub_1800494AC
 * 000000018004BD40: nop
 * 000000018004BD41: lea     r8, aPixel; "/Pixel"
 * 000000018004BD48: mov     rdx, rax
 * 000000018004BD4B: lea     rcx, [rbp+9E10h+var_6200]
 * 000000018004BD52: call    sub_180031AE8
 * 000000018004BD57: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004BD5C: mov     rcx, rax
 * 000000018004BD5F: call    sub_1800D4C70
 * 000000018004BD64: mov     cs:byte_18021FD3C, al
 * 000000018004BD6A: lea     rcx, [rbp+9E10h+var_61E0]; void *
 * 000000018004BD71: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BD76: nop
 * 000000018004BD77: lea     rcx, [rbp+9E10h+var_61C0]; void *
 * 000000018004BD7E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BD83: nop
 * 000000018004BD84: lea     rcx, dword_18021FD40
 * 000000018004BD8B: call    _Init_thread_footer
 * 000000018004BD90: mov     rax, [rdi+rbx*8]
 * 000000018004BD94: mov     eax, [r15+rax]
 * 000000018004BD98: cmp     cs:dword_18021FD48, eax
 * 000000018004BD9E: jle     loc_18004BE87
 * 000000018004BDA4: lea     rcx, dword_18021FD48
 * 000000018004BDAB: call    _Init_thread_header
 * 000000018004BDB0: cmp     cs:dword_18021FD48, r14d
 * 000000018004BDB7: jnz     loc_18004BE87
 * 000000018004BDBD: lea     rax, unk_1801604F0
 * 000000018004BDC4: mov     qword ptr [rbp+9E10h+var_9C50], rax
 * 000000018004BDCB: lea     rax, unk_180166C7C
 * 000000018004BDD2: mov     qword ptr [rbp+9E10h+var_9C50+8], rax
 * 000000018004BDD9: movups  xmm0, [rbp+9E10h+var_9C50]
 * 000000018004BDE0: movups  [rbp+9E10h+var_8510], xmm0
 * 000000018004BDE7: mov     dword ptr [rbp+9E10h+var_8500], 5
 * 000000018004BDF1: mov     dword ptr [rbp+9E10h+var_8500+4], esi
 * 000000018004BDF7: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004BDFC: movups  xmm0, [rbp+9E10h+var_8500]
 * 000000018004BE03: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004BE08: call    sub_1800496D0
 * 000000018004BE0D: mov     r8, rax
 * 000000018004BE10: mov     r9d, r12d
 * 000000018004BE13: mov     edx, 78h ; 'x'
 * 000000018004BE18: lea     rcx, [rbp+9E10h+var_6160]; Src
 * 000000018004BE1F: call    sub_1800D4B98
 * 000000018004BE24: nop
 * 000000018004BE25: mov     r8, rax
 * 000000018004BE28: mov     rdx, r13
 * 000000018004BE2B: lea     rcx, [rbp+9E10h+var_6180]
 * 000000018004BE32: call    sub_1800494AC
 * 000000018004BE37: nop
 * 000000018004BE38: lea     r8, aPixel; "/Pixel"
 * 000000018004BE3F: mov     rdx, rax
 * 000000018004BE42: lea     rcx, [rbp+9E10h+var_61A0]
 * 000000018004BE49: call    sub_180031AE8
 * 000000018004BE4E: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004BE53: mov     rcx, rax
 * 000000018004BE56: call    sub_1800D4C70
 * 000000018004BE5B: mov     cs:byte_18021FD44, al
 * 000000018004BE61: lea     rcx, [rbp+9E10h+var_6180]; void *
 * 000000018004BE68: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BE6D: nop
 * 000000018004BE6E: lea     rcx, [rbp+9E10h+var_6160]; void *
 * 000000018004BE75: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BE7A: nop
 * 000000018004BE7B: lea     rcx, dword_18021FD48
 * 000000018004BE82: call    _Init_thread_footer
 * 000000018004BE87: mov     rax, [rdi+rbx*8]
 * 000000018004BE8B: mov     eax, [r15+rax]
 * 000000018004BE8F: cmp     cs:dword_18021FD50, eax
 * 000000018004BE95: jle     loc_18004BF7E
 * 000000018004BE9B: lea     rcx, dword_18021FD50
 * 000000018004BEA2: call    _Init_thread_header
 * 000000018004BEA7: cmp     cs:dword_18021FD50, r14d
 * 000000018004BEAE: jnz     loc_18004BF7E
 * 000000018004BEB4: lea     rax, unk_1801604F0
 * 000000018004BEBB: mov     qword ptr [rbp+9E10h+var_9C40], rax
 * 000000018004BEC2: lea     rax, unk_180166C7C
 * 000000018004BEC9: mov     qword ptr [rbp+9E10h+var_9C40+8], rax
 * 000000018004BED0: movups  xmm0, [rbp+9E10h+var_9C40]
 * 000000018004BED7: movups  [rbp+9E10h+var_84F0], xmm0
 * 000000018004BEDE: mov     dword ptr [rbp+9E10h+var_84E0], 5
 * 000000018004BEE8: mov     dword ptr [rbp+9E10h+var_84E0+4], esi
 * 000000018004BEEE: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004BEF3: movups  xmm0, [rbp+9E10h+var_84E0]
 * 000000018004BEFA: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004BEFF: call    sub_1800496D0
 * 000000018004BF04: mov     r8, rax
 * 000000018004BF07: mov     r9d, r12d
 * 000000018004BF0A: mov     edx, 7Ah ; 'z'
 * 000000018004BF0F: lea     rcx, [rbp+9E10h+var_6100]; Src
 * 000000018004BF16: call    sub_1800D4B98
 * 000000018004BF1B: nop
 * 000000018004BF1C: mov     r8, rax
 * 000000018004BF1F: mov     rdx, r13
 * 000000018004BF22: lea     rcx, [rbp+9E10h+var_6120]
 * 000000018004BF29: call    sub_1800494AC
 * 000000018004BF2E: nop
 * 000000018004BF2F: lea     r8, aPixel; "/Pixel"
 * 000000018004BF36: mov     rdx, rax
 * 000000018004BF39: lea     rcx, [rbp+9E10h+var_6140]
 * 000000018004BF40: call    sub_180031AE8
 * 000000018004BF45: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004BF4A: mov     rcx, rax
 * 000000018004BF4D: call    sub_1800D4C70
 * 000000018004BF52: mov     cs:byte_18021FD4C, al
 * 000000018004BF58: lea     rcx, [rbp+9E10h+var_6120]; void *
 * 000000018004BF5F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BF64: nop
 * 000000018004BF65: lea     rcx, [rbp+9E10h+var_6100]; void *
 * 000000018004BF6C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004BF71: nop
 * 000000018004BF72: lea     rcx, dword_18021FD50
 * 000000018004BF79: call    _Init_thread_footer
 * 000000018004BF7E: mov     rax, [rdi+rbx*8]
 * 000000018004BF82: mov     eax, [r15+rax]
 * 000000018004BF86: cmp     cs:dword_18021FD58, eax
 * 000000018004BF8C: jle     loc_18004C075
 * 000000018004BF92: lea     rcx, dword_18021FD58
 * 000000018004BF99: call    _Init_thread_header
 * 000000018004BF9E: cmp     cs:dword_18021FD58, r14d
 * 000000018004BFA5: jnz     loc_18004C075
 * 000000018004BFAB: lea     rax, unk_180144C30
 * 000000018004BFB2: mov     qword ptr [rbp+9E10h+var_9C30], rax
 * 000000018004BFB9: lea     rax, unk_18014B014
 * 000000018004BFC0: mov     qword ptr [rbp+9E10h+var_9C30+8], rax
 * 000000018004BFC7: movups  xmm0, [rbp+9E10h+var_9C30]
 * 000000018004BFCE: movups  [rbp+9E10h+var_84D0], xmm0
 * 000000018004BFD5: mov     dword ptr [rbp+9E10h+var_84C0], 5
 * 000000018004BFDF: mov     dword ptr [rbp+9E10h+var_84C0+4], esi
 * 000000018004BFE5: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004BFEA: movups  xmm0, [rbp+9E10h+var_84C0]
 * 000000018004BFF1: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004BFF6: call    sub_1800496D0
 * 000000018004BFFB: mov     r8, rax
 * 000000018004BFFE: mov     r9d, r12d
 * 000000018004C001: mov     edx, 80h
 * 000000018004C006: lea     rcx, [rbp+9E10h+var_60A0]; Src
 * 000000018004C00D: call    sub_1800D4B98
 * 000000018004C012: nop
 * 000000018004C013: mov     r8, rax
 * 000000018004C016: mov     rdx, r13
 * 000000018004C019: lea     rcx, [rbp+9E10h+var_60C0]
 * 000000018004C020: call    sub_1800494AC
 * 000000018004C025: nop
 * 000000018004C026: lea     r8, aPixel; "/Pixel"
 * 000000018004C02D: mov     rdx, rax
 * 000000018004C030: lea     rcx, [rbp+9E10h+var_60E0]
 * 000000018004C037: call    sub_180031AE8
 * 000000018004C03C: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004C041: mov     rcx, rax
 * 000000018004C044: call    sub_1800D4C70
 * 000000018004C049: mov     cs:byte_18021FD54, al
 * 000000018004C04F: lea     rcx, [rbp+9E10h+var_60C0]; void *
 * 000000018004C056: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C05B: nop
 * 000000018004C05C: lea     rcx, [rbp+9E10h+var_60A0]; void *
 * 000000018004C063: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C068: nop
 * 000000018004C069: lea     rcx, dword_18021FD58
 * 000000018004C070: call    _Init_thread_footer
 * 000000018004C075: mov     rax, [rdi+rbx*8]
 * 000000018004C079: mov     eax, [r15+rax]
 * 000000018004C07D: cmp     cs:dword_18021FD60, eax
 * 000000018004C083: jle     loc_18004C16C
 * 000000018004C089: lea     rcx, dword_18021FD60
 * 000000018004C090: call    _Init_thread_header
 * 000000018004C095: cmp     cs:dword_18021FD60, r14d
 * 000000018004C09C: jnz     loc_18004C16C
 * 000000018004C0A2: lea     rax, unk_180144C30
 * 000000018004C0A9: mov     qword ptr [rbp+9E10h+var_9C20], rax
 * 000000018004C0B0: lea     rax, unk_18014B014
 * 000000018004C0B7: mov     qword ptr [rbp+9E10h+var_9C20+8], rax
 * 000000018004C0BE: movups  xmm0, [rbp+9E10h+var_9C20]
 * 000000018004C0C5: movups  [rbp+9E10h+var_84B0], xmm0
 * 000000018004C0CC: mov     dword ptr [rbp+9E10h+var_84A0], 5
 * 000000018004C0D6: mov     dword ptr [rbp+9E10h+var_84A0+4], esi
 * 000000018004C0DC: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004C0E1: movups  xmm0, [rbp+9E10h+var_84A0]
 * 000000018004C0E8: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004C0ED: call    sub_1800496D0
 * 000000018004C0F2: mov     r8, rax
 * 000000018004C0F5: mov     r9d, r12d
 * 000000018004C0F8: mov     edx, 82h
 * 000000018004C0FD: lea     rcx, [rbp+9E10h+var_6040]; Src
 * 000000018004C104: call    sub_1800D4B98
 * 000000018004C109: nop
 * 000000018004C10A: mov     r8, rax
 * 000000018004C10D: mov     rdx, r13
 * 000000018004C110: lea     rcx, [rbp+9E10h+var_6060]
 * 000000018004C117: call    sub_1800494AC
 * 000000018004C11C: nop
 * 000000018004C11D: lea     r8, aPixel; "/Pixel"
 * 000000018004C124: mov     rdx, rax
 * 000000018004C127: lea     rcx, [rbp+9E10h+var_6080]
 * 000000018004C12E: call    sub_180031AE8
 * 000000018004C133: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004C138: mov     rcx, rax
 * 000000018004C13B: call    sub_1800D4C70
 * 000000018004C140: mov     cs:byte_18021FD5C, al
 * 000000018004C146: lea     rcx, [rbp+9E10h+var_6060]; void *
 * 000000018004C14D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C152: nop
 * 000000018004C153: lea     rcx, [rbp+9E10h+var_6040]; void *
 * 000000018004C15A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C15F: nop
 * 000000018004C160: lea     rcx, dword_18021FD60
 * 000000018004C167: call    _Init_thread_footer
 * 000000018004C16C: mov     rax, [rdi+rbx*8]
 * 000000018004C170: mov     eax, [r15+rax]
 * 000000018004C174: cmp     cs:dword_18021FD68, eax
 * 000000018004C17A: jle     loc_18004C263
 * 000000018004C180: lea     rcx, dword_18021FD68
 * 000000018004C187: call    _Init_thread_header
 * 000000018004C18C: cmp     cs:dword_18021FD68, r14d
 * 000000018004C193: jnz     loc_18004C263
 * 000000018004C199: lea     rax, unk_18014F5D0
 * 000000018004C1A0: mov     qword ptr [rbp+9E10h+var_9C10], rax
 * 000000018004C1A7: lea     rax, unk_180155B5C
 * 000000018004C1AE: mov     qword ptr [rbp+9E10h+var_9C10+8], rax
 * 000000018004C1B5: movups  xmm0, [rbp+9E10h+var_9C10]
 * 000000018004C1BC: movups  [rbp+9E10h+var_8490], xmm0
 * 000000018004C1C3: mov     dword ptr [rbp+9E10h+var_8480], 5
 * 000000018004C1CD: mov     dword ptr [rbp+9E10h+var_8480+4], esi
 * 000000018004C1D3: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004C1D8: movups  xmm0, [rbp+9E10h+var_8480]
 * 000000018004C1DF: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004C1E4: call    sub_1800496D0
 * 000000018004C1E9: mov     r8, rax
 * 000000018004C1EC: mov     r9d, r12d
 * 000000018004C1EF: mov     edx, 88h
 * 000000018004C1F4: lea     rcx, [rbp+9E10h+var_5FE0]; Src
 * 000000018004C1FB: call    sub_1800D4B98
 * 000000018004C200: nop
 * 000000018004C201: mov     r8, rax
 * 000000018004C204: mov     rdx, r13
 * 000000018004C207: lea     rcx, [rbp+9E10h+var_6000]
 * 000000018004C20E: call    sub_1800494AC
 * 000000018004C213: nop
 * 000000018004C214: lea     r8, aPixel; "/Pixel"
 * 000000018004C21B: mov     rdx, rax
 * 000000018004C21E: lea     rcx, [rbp+9E10h+var_6020]
 * 000000018004C225: call    sub_180031AE8
 * 000000018004C22A: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004C22F: mov     rcx, rax
 * 000000018004C232: call    sub_1800D4C70
 * 000000018004C237: mov     cs:byte_18021FD64, al
 * 000000018004C23D: lea     rcx, [rbp+9E10h+var_6000]; void *
 * 000000018004C244: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C249: nop
 * 000000018004C24A: lea     rcx, [rbp+9E10h+var_5FE0]; void *
 * 000000018004C251: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C256: nop
 * 000000018004C257: lea     rcx, dword_18021FD68
 * 000000018004C25E: call    _Init_thread_footer
 * 000000018004C263: mov     rax, [rdi+rbx*8]
 * 000000018004C267: mov     eax, [r15+rax]
 * 000000018004C26B: cmp     cs:dword_18021FD70, eax
 * 000000018004C271: jle     loc_18004C35A
 * 000000018004C277: lea     rcx, dword_18021FD70
 * 000000018004C27E: call    _Init_thread_header
 * 000000018004C283: cmp     cs:dword_18021FD70, r14d
 * 000000018004C28A: jnz     loc_18004C35A
 * 000000018004C290: lea     rax, unk_18014F5D0
 * 000000018004C297: mov     qword ptr [rbp+9E10h+var_9C00], rax
 * 000000018004C29E: lea     rax, unk_180155B5C
 * 000000018004C2A5: mov     qword ptr [rbp+9E10h+var_9C00+8], rax
 * 000000018004C2AC: movups  xmm0, [rbp+9E10h+var_9C00]
 * 000000018004C2B3: movups  [rbp+9E10h+var_8470], xmm0
 * 000000018004C2BA: mov     dword ptr [rbp+9E10h+var_8460], 5
 * 000000018004C2C4: mov     dword ptr [rbp+9E10h+var_8460+4], esi
 * 000000018004C2CA: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004C2CF: movups  xmm0, [rbp+9E10h+var_8460]
 * 000000018004C2D6: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004C2DB: call    sub_1800496D0
 * 000000018004C2E0: mov     r8, rax
 * 000000018004C2E3: mov     r9d, r12d
 * 000000018004C2E6: mov     edx, 8Ah
 * 000000018004C2EB: lea     rcx, [rbp+9E10h+var_5F80]; Src
 * 000000018004C2F2: call    sub_1800D4B98
 * 000000018004C2F7: nop
 * 000000018004C2F8: mov     r8, rax
 * 000000018004C2FB: mov     rdx, r13
 * 000000018004C2FE: lea     rcx, [rbp+9E10h+var_5FA0]
 * 000000018004C305: call    sub_1800494AC
 * 000000018004C30A: nop
 * 000000018004C30B: lea     r8, aPixel; "/Pixel"
 * 000000018004C312: mov     rdx, rax
 * 000000018004C315: lea     rcx, [rbp+9E10h+var_5FC0]
 * 000000018004C31C: call    sub_180031AE8
 * 000000018004C321: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004C326: mov     rcx, rax
 * 000000018004C329: call    sub_1800D4C70
 * 000000018004C32E: mov     cs:byte_18021FD6C, al
 * 000000018004C334: lea     rcx, [rbp+9E10h+var_5FA0]; void *
 * 000000018004C33B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C340: nop
 * 000000018004C341: lea     rcx, [rbp+9E10h+var_5F80]; void *
 * 000000018004C348: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C34D: nop
 * 000000018004C34E: lea     rcx, dword_18021FD70
 * 000000018004C355: call    _Init_thread_footer
 * 000000018004C35A: mov     rax, [rdi+rbx*8]
 * 000000018004C35E: mov     eax, [r15+rax]
 * 000000018004C362: cmp     cs:dword_18021FD78, eax
 * 000000018004C368: jle     loc_18004C451
 * 000000018004C36E: lea     rcx, dword_18021FD78
 * 000000018004C375: call    _Init_thread_header
 * 000000018004C37A: cmp     cs:dword_18021FD78, r14d
 * 000000018004C381: jnz     loc_18004C451
 * 000000018004C387: lea     rax, unk_180156C30
 * 000000018004C38E: mov     qword ptr [rbp+9E10h+var_9BF0], rax
 * 000000018004C395: lea     rax, unk_18015D1E8
 * 000000018004C39C: mov     qword ptr [rbp+9E10h+var_9BF0+8], rax
 * 000000018004C3A3: movups  xmm0, [rbp+9E10h+var_9BF0]
 * 000000018004C3AA: movups  [rbp+9E10h+var_8450], xmm0
 * 000000018004C3B1: mov     dword ptr [rbp+9E10h+var_8440], 5
 * 000000018004C3BB: mov     dword ptr [rbp+9E10h+var_8440+4], esi
 * 000000018004C3C1: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004C3C6: movups  xmm0, [rbp+9E10h+var_8440]
 * 000000018004C3CD: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004C3D2: call    sub_1800496D0
 * 000000018004C3D7: mov     r8, rax
 * 000000018004C3DA: mov     r9d, r12d
 * 000000018004C3DD: mov     edx, 90h
 * 000000018004C3E2: lea     rcx, [rbp+9E10h+var_5F20]; Src
 * 000000018004C3E9: call    sub_1800D4B98
 * 000000018004C3EE: nop
 * 000000018004C3EF: mov     r8, rax
 * 000000018004C3F2: mov     rdx, r13
 * 000000018004C3F5: lea     rcx, [rbp+9E10h+var_5F40]
 * 000000018004C3FC: call    sub_1800494AC
 * 000000018004C401: nop
 * 000000018004C402: lea     r8, aPixel; "/Pixel"
 * 000000018004C409: mov     rdx, rax
 * 000000018004C40C: lea     rcx, [rbp+9E10h+var_5F60]
 * 000000018004C413: call    sub_180031AE8
 * 000000018004C418: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004C41D: mov     rcx, rax
 * 000000018004C420: call    sub_1800D4C70
 * 000000018004C425: mov     cs:byte_18021FD74, al
 * 000000018004C42B: lea     rcx, [rbp+9E10h+var_5F40]; void *
 * 000000018004C432: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C437: nop
 * 000000018004C438: lea     rcx, [rbp+9E10h+var_5F20]; void *
 * 000000018004C43F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C444: nop
 * 000000018004C445: lea     rcx, dword_18021FD78
 * 000000018004C44C: call    _Init_thread_footer
 * 000000018004C451: mov     rax, [rdi+rbx*8]
 * 000000018004C455: mov     eax, [r15+rax]
 * 000000018004C459: cmp     cs:dword_18021FD80, eax
 * 000000018004C45F: jle     loc_18004C548
 * 000000018004C465: lea     rcx, dword_18021FD80
 * 000000018004C46C: call    _Init_thread_header
 * 000000018004C471: cmp     cs:dword_18021FD80, r14d
 * 000000018004C478: jnz     loc_18004C548
 * 000000018004C47E: lea     rax, unk_180156C30
 * 000000018004C485: mov     qword ptr [rbp+9E10h+var_9BE0], rax
 * 000000018004C48C: lea     rax, unk_18015D1E8
 * 000000018004C493: mov     qword ptr [rbp+9E10h+var_9BE0+8], rax
 * 000000018004C49A: movups  xmm0, [rbp+9E10h+var_9BE0]
 * 000000018004C4A1: movups  [rbp+9E10h+var_8430], xmm0
 * 000000018004C4A8: mov     dword ptr [rbp+9E10h+var_8420], 5
 * 000000018004C4B2: mov     dword ptr [rbp+9E10h+var_8420+4], esi
 * 000000018004C4B8: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004C4BD: movups  xmm0, [rbp+9E10h+var_8420]
 * 000000018004C4C4: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004C4C9: call    sub_1800496D0
 * 000000018004C4CE: mov     r8, rax
 * 000000018004C4D1: mov     r9d, r12d
 * 000000018004C4D4: mov     edx, 92h
 * 000000018004C4D9: lea     rcx, [rbp+9E10h+var_5EC0]; Src
 * 000000018004C4E0: call    sub_1800D4B98
 * 000000018004C4E5: nop
 * 000000018004C4E6: mov     r8, rax
 * 000000018004C4E9: mov     rdx, r13
 * 000000018004C4EC: lea     rcx, [rbp+9E10h+var_5EE0]
 * 000000018004C4F3: call    sub_1800494AC
 * 000000018004C4F8: nop
 * 000000018004C4F9: lea     r8, aPixel; "/Pixel"
 * 000000018004C500: mov     rdx, rax
 * 000000018004C503: lea     rcx, [rbp+9E10h+var_5F00]
 * 000000018004C50A: call    sub_180031AE8
 * 000000018004C50F: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004C514: mov     rcx, rax
 * 000000018004C517: call    sub_1800D4C70
 * 000000018004C51C: mov     cs:byte_18021FD7C, al
 * 000000018004C522: lea     rcx, [rbp+9E10h+var_5EE0]; void *
 * 000000018004C529: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C52E: nop
 * 000000018004C52F: lea     rcx, [rbp+9E10h+var_5EC0]; void *
 * 000000018004C536: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C53B: nop
 * 000000018004C53C: lea     rcx, dword_18021FD80
 * 000000018004C543: call    _Init_thread_footer
 * 000000018004C548: mov     rax, [rdi+rbx*8]
 * 000000018004C54C: mov     eax, [r15+rax]
 * 000000018004C550: cmp     cs:dword_18021FD88, eax
 * 000000018004C556: jle     loc_18004C63F
 * 000000018004C55C: lea     rcx, dword_18021FD88
 * 000000018004C563: call    _Init_thread_header
 * 000000018004C568: cmp     cs:dword_18021FD88, r14d
 * 000000018004C56F: jnz     loc_18004C63F
 * 000000018004C575: lea     rax, unk_1801604F0
 * 000000018004C57C: mov     qword ptr [rbp+9E10h+var_9BD0], rax
 * 000000018004C583: lea     rax, unk_180166C7C
 * 000000018004C58A: mov     qword ptr [rbp+9E10h+var_9BD0+8], rax
 * 000000018004C591: movups  xmm0, [rbp+9E10h+var_9BD0]
 * 000000018004C598: movups  [rbp+9E10h+var_8410], xmm0
 * 000000018004C59F: mov     dword ptr [rbp+9E10h+var_8400], 5
 * 000000018004C5A9: mov     dword ptr [rbp+9E10h+var_8400+4], esi
 * 000000018004C5AF: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004C5B4: movups  xmm0, [rbp+9E10h+var_8400]
 * 000000018004C5BB: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004C5C0: call    sub_1800496D0
 * 000000018004C5C5: mov     r8, rax
 * 000000018004C5C8: mov     r9d, r12d
 * 000000018004C5CB: mov     edx, 98h
 * 000000018004C5D0: lea     rcx, [rbp+9E10h+var_5E60]; Src
 * 000000018004C5D7: call    sub_1800D4B98
 * 000000018004C5DC: nop
 * 000000018004C5DD: mov     r8, rax
 * 000000018004C5E0: mov     rdx, r13
 * 000000018004C5E3: lea     rcx, [rbp+9E10h+var_5E80]
 * 000000018004C5EA: call    sub_1800494AC
 * 000000018004C5EF: nop
 * 000000018004C5F0: lea     r8, aPixel; "/Pixel"
 * 000000018004C5F7: mov     rdx, rax
 * 000000018004C5FA: lea     rcx, [rbp+9E10h+var_5EA0]
 * 000000018004C601: call    sub_180031AE8
 * 000000018004C606: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004C60B: mov     rcx, rax
 * 000000018004C60E: call    sub_1800D4C70
 * 000000018004C613: mov     cs:byte_18021FD84, al
 * 000000018004C619: lea     rcx, [rbp+9E10h+var_5E80]; void *
 * 000000018004C620: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C625: nop
 * 000000018004C626: lea     rcx, [rbp+9E10h+var_5E60]; void *
 * 000000018004C62D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C632: nop
 * 000000018004C633: lea     rcx, dword_18021FD88
 * 000000018004C63A: call    _Init_thread_footer
 * 000000018004C63F: mov     rax, [rdi+rbx*8]
 * 000000018004C643: mov     eax, [r15+rax]
 * 000000018004C647: cmp     cs:dword_18021FD90, eax
 * 000000018004C64D: jle     loc_18004C736
 * 000000018004C653: lea     rcx, dword_18021FD90
 * 000000018004C65A: call    _Init_thread_header
 * 000000018004C65F: cmp     cs:dword_18021FD90, r14d
 * 000000018004C666: jnz     loc_18004C736
 * 000000018004C66C: lea     rax, unk_1801604F0
 * 000000018004C673: mov     qword ptr [rbp+9E10h+var_9BC0], rax
 * 000000018004C67A: lea     rax, unk_180166C7C
 * 000000018004C681: mov     qword ptr [rbp+9E10h+var_9BC0+8], rax
 * 000000018004C688: movups  xmm0, [rbp+9E10h+var_9BC0]
 * 000000018004C68F: movups  [rbp+9E10h+var_83F0], xmm0
 * 000000018004C696: mov     dword ptr [rbp+9E10h+var_83E0], 5
 * 000000018004C6A0: mov     dword ptr [rbp+9E10h+var_83E0+4], esi
 * 000000018004C6A6: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004C6AB: movups  xmm0, [rbp+9E10h+var_83E0]
 * 000000018004C6B2: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004C6B7: call    sub_1800496D0
 * 000000018004C6BC: mov     r8, rax
 * 000000018004C6BF: mov     r9d, r12d
 * 000000018004C6C2: mov     edx, 9Ah
 * 000000018004C6C7: lea     rcx, [rbp+9E10h+var_5E00]; Src
 * 000000018004C6CE: call    sub_1800D4B98
 * 000000018004C6D3: nop
 * 000000018004C6D4: mov     r8, rax
 * 000000018004C6D7: mov     rdx, r13
 * 000000018004C6DA: lea     rcx, [rbp+9E10h+var_5E20]
 * 000000018004C6E1: call    sub_1800494AC
 * 000000018004C6E6: nop
 * 000000018004C6E7: lea     r8, aPixel; "/Pixel"
 * 000000018004C6EE: mov     rdx, rax
 * 000000018004C6F1: lea     rcx, [rbp+9E10h+var_5E40]
 * 000000018004C6F8: call    sub_180031AE8
 * 000000018004C6FD: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004C702: mov     rcx, rax
 * 000000018004C705: call    sub_1800D4C70
 * 000000018004C70A: mov     cs:byte_18021FD8C, al
 * 000000018004C710: lea     rcx, [rbp+9E10h+var_5E20]; void *
 * 000000018004C717: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C71C: nop
 * 000000018004C71D: lea     rcx, [rbp+9E10h+var_5E00]; void *
 * 000000018004C724: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C729: nop
 * 000000018004C72A: lea     rcx, dword_18021FD90
 * 000000018004C731: call    _Init_thread_footer
 * 000000018004C736: mov     rax, [rdi+rbx*8]
 * 000000018004C73A: mov     eax, [r15+rax]
 * 000000018004C73E: cmp     cs:dword_18021FD98, eax
 * 000000018004C744: jle     loc_18004C82D
 * 000000018004C74A: lea     rcx, dword_18021FD98
 * 000000018004C751: call    _Init_thread_header
 * 000000018004C756: cmp     cs:dword_18021FD98, r14d
 * 000000018004C75D: jnz     loc_18004C82D
 * 000000018004C763: lea     rax, unk_180144C30
 * 000000018004C76A: mov     qword ptr [rbp+9E10h+var_9BB0], rax
 * 000000018004C771: lea     rax, unk_18014B014
 * 000000018004C778: mov     qword ptr [rbp+9E10h+var_9BB0+8], rax
 * 000000018004C77F: movups  xmm0, [rbp+9E10h+var_9BB0]
 * 000000018004C786: movups  [rbp+9E10h+var_83D0], xmm0
 * 000000018004C78D: mov     dword ptr [rbp+9E10h+var_83C0], 5
 * 000000018004C797: mov     dword ptr [rbp+9E10h+var_83C0+4], esi
 * 000000018004C79D: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004C7A2: movups  xmm0, [rbp+9E10h+var_83C0]
 * 000000018004C7A9: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004C7AE: call    sub_1800496D0
 * 000000018004C7B3: mov     r8, rax
 * 000000018004C7B6: mov     r9d, r12d
 * 000000018004C7B9: mov     edx, 0A0h
 * 000000018004C7BE: lea     rcx, [rbp+9E10h+var_5DA0]; Src
 * 000000018004C7C5: call    sub_1800D4B98
 * 000000018004C7CA: nop
 * 000000018004C7CB: mov     r8, rax
 * 000000018004C7CE: mov     rdx, r13
 * 000000018004C7D1: lea     rcx, [rbp+9E10h+var_5DC0]
 * 000000018004C7D8: call    sub_1800494AC
 * 000000018004C7DD: nop
 * 000000018004C7DE: lea     r8, aPixel; "/Pixel"
 * 000000018004C7E5: mov     rdx, rax
 * 000000018004C7E8: lea     rcx, [rbp+9E10h+var_5DE0]
 * 000000018004C7EF: call    sub_180031AE8
 * 000000018004C7F4: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004C7F9: mov     rcx, rax
 * 000000018004C7FC: call    sub_1800D4C70
 * 000000018004C801: mov     cs:byte_18021FD94, al
 * 000000018004C807: lea     rcx, [rbp+9E10h+var_5DC0]; void *
 * 000000018004C80E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C813: nop
 * 000000018004C814: lea     rcx, [rbp+9E10h+var_5DA0]; void *
 * 000000018004C81B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C820: nop
 * 000000018004C821: lea     rcx, dword_18021FD98
 * 000000018004C828: call    _Init_thread_footer
 * 000000018004C82D: mov     rax, [rdi+rbx*8]
 * 000000018004C831: mov     eax, [r15+rax]
 * 000000018004C835: cmp     cs:dword_18021FDA0, eax
 * 000000018004C83B: jle     loc_18004C924
 * 000000018004C841: lea     rcx, dword_18021FDA0
 * 000000018004C848: call    _Init_thread_header
 * 000000018004C84D: cmp     cs:dword_18021FDA0, r14d
 * 000000018004C854: jnz     loc_18004C924
 * 000000018004C85A: lea     rax, unk_180144C30
 * 000000018004C861: mov     qword ptr [rbp+9E10h+var_9BA0], rax
 * 000000018004C868: lea     rax, unk_18014B014
 * 000000018004C86F: mov     qword ptr [rbp+9E10h+var_9BA0+8], rax
 * 000000018004C876: movups  xmm0, [rbp+9E10h+var_9BA0]
 * 000000018004C87D: movups  [rbp+9E10h+var_83B0], xmm0
 * 000000018004C884: mov     dword ptr [rbp+9E10h+var_83A0], 5
 * 000000018004C88E: mov     dword ptr [rbp+9E10h+var_83A0+4], esi
 * 000000018004C894: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004C899: movups  xmm0, [rbp+9E10h+var_83A0]
 * 000000018004C8A0: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004C8A5: call    sub_1800496D0
 * 000000018004C8AA: mov     r8, rax
 * 000000018004C8AD: mov     r9d, r12d
 * 000000018004C8B0: mov     edx, 0A2h
 * 000000018004C8B5: lea     rcx, [rbp+9E10h+var_5D40]; Src
 * 000000018004C8BC: call    sub_1800D4B98
 * 000000018004C8C1: nop
 * 000000018004C8C2: mov     r8, rax
 * 000000018004C8C5: mov     rdx, r13
 * 000000018004C8C8: lea     rcx, [rbp+9E10h+var_5D60]
 * 000000018004C8CF: call    sub_1800494AC
 * 000000018004C8D4: nop
 * 000000018004C8D5: lea     r8, aPixel; "/Pixel"
 * 000000018004C8DC: mov     rdx, rax
 * 000000018004C8DF: lea     rcx, [rbp+9E10h+var_5D80]
 * 000000018004C8E6: call    sub_180031AE8
 * 000000018004C8EB: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004C8F0: mov     rcx, rax
 * 000000018004C8F3: call    sub_1800D4C70
 * 000000018004C8F8: mov     cs:byte_18021FD9C, al
 * 000000018004C8FE: lea     rcx, [rbp+9E10h+var_5D60]; void *
 * 000000018004C905: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C90A: nop
 * 000000018004C90B: lea     rcx, [rbp+9E10h+var_5D40]; void *
 * 000000018004C912: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004C917: nop
 * 000000018004C918: lea     rcx, dword_18021FDA0
 * 000000018004C91F: call    _Init_thread_footer
 * 000000018004C924: mov     rax, [rdi+rbx*8]
 * 000000018004C928: mov     eax, [r15+rax]
 * 000000018004C92C: cmp     cs:dword_18021FDA8, eax
 * 000000018004C932: jle     loc_18004CA1B
 * 000000018004C938: lea     rcx, dword_18021FDA8
 * 000000018004C93F: call    _Init_thread_header
 * 000000018004C944: cmp     cs:dword_18021FDA8, r14d
 * 000000018004C94B: jnz     loc_18004CA1B
 * 000000018004C951: lea     rax, unk_18014F5D0
 * 000000018004C958: mov     qword ptr [rbp+9E10h+var_9B90], rax
 * 000000018004C95F: lea     rax, unk_180155B5C
 * 000000018004C966: mov     qword ptr [rbp+9E10h+var_9B90+8], rax
 * 000000018004C96D: movups  xmm0, [rbp+9E10h+var_9B90]
 * 000000018004C974: movups  [rbp+9E10h+var_8390], xmm0
 * 000000018004C97B: mov     dword ptr [rbp+9E10h+var_8380], 5
 * 000000018004C985: mov     dword ptr [rbp+9E10h+var_8380+4], esi
 * 000000018004C98B: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004C990: movups  xmm0, [rbp+9E10h+var_8380]
 * 000000018004C997: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004C99C: call    sub_1800496D0
 * 000000018004C9A1: mov     r8, rax
 * 000000018004C9A4: mov     r9d, r12d
 * 000000018004C9A7: mov     edx, 0A8h
 * 000000018004C9AC: lea     rcx, [rbp+9E10h+var_5CE0]; Src
 * 000000018004C9B3: call    sub_1800D4B98
 * 000000018004C9B8: nop
 * 000000018004C9B9: mov     r8, rax
 * 000000018004C9BC: mov     rdx, r13
 * 000000018004C9BF: lea     rcx, [rbp+9E10h+var_5D00]
 * 000000018004C9C6: call    sub_1800494AC
 * 000000018004C9CB: nop
 * 000000018004C9CC: lea     r8, aPixel; "/Pixel"
 * 000000018004C9D3: mov     rdx, rax
 * 000000018004C9D6: lea     rcx, [rbp+9E10h+var_5D20]
 * 000000018004C9DD: call    sub_180031AE8
 * 000000018004C9E2: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004C9E7: mov     rcx, rax
 * 000000018004C9EA: call    sub_1800D4C70
 * 000000018004C9EF: mov     cs:byte_18021FDA4, al
 * 000000018004C9F5: lea     rcx, [rbp+9E10h+var_5D00]; void *
 * 000000018004C9FC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CA01: nop
 * 000000018004CA02: lea     rcx, [rbp+9E10h+var_5CE0]; void *
 * 000000018004CA09: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CA0E: nop
 * 000000018004CA0F: lea     rcx, dword_18021FDA8
 * 000000018004CA16: call    _Init_thread_footer
 * 000000018004CA1B: mov     rax, [rdi+rbx*8]
 * 000000018004CA1F: mov     eax, [r15+rax]
 * 000000018004CA23: cmp     cs:dword_18021FDB0, eax
 * 000000018004CA29: jle     loc_18004CB12
 * 000000018004CA2F: lea     rcx, dword_18021FDB0
 * 000000018004CA36: call    _Init_thread_header
 * 000000018004CA3B: cmp     cs:dword_18021FDB0, r14d
 * 000000018004CA42: jnz     loc_18004CB12
 * 000000018004CA48: lea     rax, unk_18014F5D0
 * 000000018004CA4F: mov     qword ptr [rbp+9E10h+var_9B80], rax
 * 000000018004CA56: lea     rax, unk_180155B5C
 * 000000018004CA5D: mov     qword ptr [rbp+9E10h+var_9B80+8], rax
 * 000000018004CA64: movups  xmm0, [rbp+9E10h+var_9B80]
 * 000000018004CA6B: movups  [rbp+9E10h+var_8370], xmm0
 * 000000018004CA72: mov     dword ptr [rbp+9E10h+var_8360], 5
 * 000000018004CA7C: mov     dword ptr [rbp+9E10h+var_8360+4], esi
 * 000000018004CA82: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004CA87: movups  xmm0, [rbp+9E10h+var_8360]
 * 000000018004CA8E: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004CA93: call    sub_1800496D0
 * 000000018004CA98: mov     r8, rax
 * 000000018004CA9B: mov     r9d, r12d
 * 000000018004CA9E: mov     edx, 0AAh
 * 000000018004CAA3: lea     rcx, [rbp+9E10h+var_5C80]; Src
 * 000000018004CAAA: call    sub_1800D4B98
 * 000000018004CAAF: nop
 * 000000018004CAB0: mov     r8, rax
 * 000000018004CAB3: mov     rdx, r13
 * 000000018004CAB6: lea     rcx, [rbp+9E10h+var_5CA0]
 * 000000018004CABD: call    sub_1800494AC
 * 000000018004CAC2: nop
 * 000000018004CAC3: lea     r8, aPixel; "/Pixel"
 * 000000018004CACA: mov     rdx, rax
 * 000000018004CACD: lea     rcx, [rbp+9E10h+var_5CC0]
 * 000000018004CAD4: call    sub_180031AE8
 * 000000018004CAD9: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004CADE: mov     rcx, rax
 * 000000018004CAE1: call    sub_1800D4C70
 * 000000018004CAE6: mov     cs:byte_18021FDAC, al
 * 000000018004CAEC: lea     rcx, [rbp+9E10h+var_5CA0]; void *
 * 000000018004CAF3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CAF8: nop
 * 000000018004CAF9: lea     rcx, [rbp+9E10h+var_5C80]; void *
 * 000000018004CB00: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CB05: nop
 * 000000018004CB06: lea     rcx, dword_18021FDB0
 * 000000018004CB0D: call    _Init_thread_footer
 * 000000018004CB12: mov     rax, [rdi+rbx*8]
 * 000000018004CB16: mov     eax, [r15+rax]
 * 000000018004CB1A: cmp     cs:dword_18021FDB8, eax
 * 000000018004CB20: jle     loc_18004CC09
 * 000000018004CB26: lea     rcx, dword_18021FDB8
 * 000000018004CB2D: call    _Init_thread_header
 * 000000018004CB32: cmp     cs:dword_18021FDB8, r14d
 * 000000018004CB39: jnz     loc_18004CC09
 * 000000018004CB3F: lea     rax, unk_180156C30
 * 000000018004CB46: mov     qword ptr [rbp+9E10h+var_9B70], rax
 * 000000018004CB4D: lea     rax, unk_18015D1E8
 * 000000018004CB54: mov     qword ptr [rbp+9E10h+var_9B70+8], rax
 * 000000018004CB5B: movups  xmm0, [rbp+9E10h+var_9B70]
 * 000000018004CB62: movups  [rbp+9E10h+var_8350], xmm0
 * 000000018004CB69: mov     dword ptr [rbp+9E10h+var_8340], 5
 * 000000018004CB73: mov     dword ptr [rbp+9E10h+var_8340+4], esi
 * 000000018004CB79: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004CB7E: movups  xmm0, [rbp+9E10h+var_8340]
 * 000000018004CB85: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004CB8A: call    sub_1800496D0
 * 000000018004CB8F: mov     r8, rax
 * 000000018004CB92: mov     r9d, r12d
 * 000000018004CB95: mov     edx, 0B0h
 * 000000018004CB9A: lea     rcx, [rbp+9E10h+var_5C20]; Src
 * 000000018004CBA1: call    sub_1800D4B98
 * 000000018004CBA6: nop
 * 000000018004CBA7: mov     r8, rax
 * 000000018004CBAA: mov     rdx, r13
 * 000000018004CBAD: lea     rcx, [rbp+9E10h+var_5C40]
 * 000000018004CBB4: call    sub_1800494AC
 * 000000018004CBB9: nop
 * 000000018004CBBA: lea     r8, aPixel; "/Pixel"
 * 000000018004CBC1: mov     rdx, rax
 * 000000018004CBC4: lea     rcx, [rbp+9E10h+var_5C60]
 * 000000018004CBCB: call    sub_180031AE8
 * 000000018004CBD0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004CBD5: mov     rcx, rax
 * 000000018004CBD8: call    sub_1800D4C70
 * 000000018004CBDD: mov     cs:byte_18021FDB4, al
 * 000000018004CBE3: lea     rcx, [rbp+9E10h+var_5C40]; void *
 * 000000018004CBEA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CBEF: nop
 * 000000018004CBF0: lea     rcx, [rbp+9E10h+var_5C20]; void *
 * 000000018004CBF7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CBFC: nop
 * 000000018004CBFD: lea     rcx, dword_18021FDB8
 * 000000018004CC04: call    _Init_thread_footer
 * 000000018004CC09: mov     rax, [rdi+rbx*8]
 * 000000018004CC0D: mov     eax, [r15+rax]
 * 000000018004CC11: cmp     cs:dword_18021FDC0, eax
 * 000000018004CC17: jle     loc_18004CD00
 * 000000018004CC1D: lea     rcx, dword_18021FDC0
 * 000000018004CC24: call    _Init_thread_header
 * 000000018004CC29: cmp     cs:dword_18021FDC0, r14d
 * 000000018004CC30: jnz     loc_18004CD00
 * 000000018004CC36: lea     rax, unk_180156C30
 * 000000018004CC3D: mov     qword ptr [rbp+9E10h+var_9B60], rax
 * 000000018004CC44: lea     rax, unk_18015D1E8
 * 000000018004CC4B: mov     qword ptr [rbp+9E10h+var_9B60+8], rax
 * 000000018004CC52: movups  xmm0, [rbp+9E10h+var_9B60]
 * 000000018004CC59: movups  [rbp+9E10h+var_8330], xmm0
 * 000000018004CC60: mov     dword ptr [rbp+9E10h+var_8320], 5
 * 000000018004CC6A: mov     dword ptr [rbp+9E10h+var_8320+4], esi
 * 000000018004CC70: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004CC75: movups  xmm0, [rbp+9E10h+var_8320]
 * 000000018004CC7C: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004CC81: call    sub_1800496D0
 * 000000018004CC86: mov     r8, rax
 * 000000018004CC89: mov     r9d, r12d
 * 000000018004CC8C: mov     edx, 0B2h
 * 000000018004CC91: lea     rcx, [rbp+9E10h+var_5BC0]; Src
 * 000000018004CC98: call    sub_1800D4B98
 * 000000018004CC9D: nop
 * 000000018004CC9E: mov     r8, rax
 * 000000018004CCA1: mov     rdx, r13
 * 000000018004CCA4: lea     rcx, [rbp+9E10h+var_5BE0]
 * 000000018004CCAB: call    sub_1800494AC
 * 000000018004CCB0: nop
 * 000000018004CCB1: lea     r8, aPixel; "/Pixel"
 * 000000018004CCB8: mov     rdx, rax
 * 000000018004CCBB: lea     rcx, [rbp+9E10h+var_5C00]
 * 000000018004CCC2: call    sub_180031AE8
 * 000000018004CCC7: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004CCCC: mov     rcx, rax
 * 000000018004CCCF: call    sub_1800D4C70
 * 000000018004CCD4: mov     cs:byte_18021FDBC, al
 * 000000018004CCDA: lea     rcx, [rbp+9E10h+var_5BE0]; void *
 * 000000018004CCE1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CCE6: nop
 * 000000018004CCE7: lea     rcx, [rbp+9E10h+var_5BC0]; void *
 * 000000018004CCEE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CCF3: nop
 * 000000018004CCF4: lea     rcx, dword_18021FDC0
 * 000000018004CCFB: call    _Init_thread_footer
 * 000000018004CD00: mov     rax, [rdi+rbx*8]
 * 000000018004CD04: mov     eax, [r15+rax]
 * 000000018004CD08: cmp     cs:dword_18021FDC8, eax
 * 000000018004CD0E: jle     loc_18004CDF7
 * 000000018004CD14: lea     rcx, dword_18021FDC8
 * 000000018004CD1B: call    _Init_thread_header
 * 000000018004CD20: cmp     cs:dword_18021FDC8, r14d
 * 000000018004CD27: jnz     loc_18004CDF7
 * 000000018004CD2D: lea     rax, unk_1801604F0
 * 000000018004CD34: mov     qword ptr [rbp+9E10h+var_9B50], rax
 * 000000018004CD3B: lea     rax, unk_180166C7C
 * 000000018004CD42: mov     qword ptr [rbp+9E10h+var_9B50+8], rax
 * 000000018004CD49: movups  xmm0, [rbp+9E10h+var_9B50]
 * 000000018004CD50: movups  [rbp+9E10h+var_8310], xmm0
 * 000000018004CD57: mov     dword ptr [rbp+9E10h+var_8300], 5
 * 000000018004CD61: mov     dword ptr [rbp+9E10h+var_8300+4], esi
 * 000000018004CD67: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004CD6C: movups  xmm0, [rbp+9E10h+var_8300]
 * 000000018004CD73: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004CD78: call    sub_1800496D0
 * 000000018004CD7D: mov     r8, rax
 * 000000018004CD80: mov     r9d, r12d
 * 000000018004CD83: mov     edx, 0B8h
 * 000000018004CD88: lea     rcx, [rbp+9E10h+var_5B60]; Src
 * 000000018004CD8F: call    sub_1800D4B98
 * 000000018004CD94: nop
 * 000000018004CD95: mov     r8, rax
 * 000000018004CD98: mov     rdx, r13
 * 000000018004CD9B: lea     rcx, [rbp+9E10h+var_5B80]
 * 000000018004CDA2: call    sub_1800494AC
 * 000000018004CDA7: nop
 * 000000018004CDA8: lea     r8, aPixel; "/Pixel"
 * 000000018004CDAF: mov     rdx, rax
 * 000000018004CDB2: lea     rcx, [rbp+9E10h+var_5BA0]
 * 000000018004CDB9: call    sub_180031AE8
 * 000000018004CDBE: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004CDC3: mov     rcx, rax
 * 000000018004CDC6: call    sub_1800D4C70
 * 000000018004CDCB: mov     cs:byte_18021FDC4, al
 * 000000018004CDD1: lea     rcx, [rbp+9E10h+var_5B80]; void *
 * 000000018004CDD8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CDDD: nop
 * 000000018004CDDE: lea     rcx, [rbp+9E10h+var_5B60]; void *
 * 000000018004CDE5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CDEA: nop
 * 000000018004CDEB: lea     rcx, dword_18021FDC8
 * 000000018004CDF2: call    _Init_thread_footer
 * 000000018004CDF7: mov     rax, [rdi+rbx*8]
 * 000000018004CDFB: mov     eax, [r15+rax]
 * 000000018004CDFF: cmp     cs:dword_18021FDD0, eax
 * 000000018004CE05: jle     loc_18004CEEE
 * 000000018004CE0B: lea     rcx, dword_18021FDD0
 * 000000018004CE12: call    _Init_thread_header
 * 000000018004CE17: cmp     cs:dword_18021FDD0, r14d
 * 000000018004CE1E: jnz     loc_18004CEEE
 * 000000018004CE24: lea     rax, unk_1801604F0
 * 000000018004CE2B: mov     qword ptr [rbp+9E10h+var_9B40], rax
 * 000000018004CE32: lea     rax, unk_180166C7C
 * 000000018004CE39: mov     qword ptr [rbp+9E10h+var_9B40+8], rax
 * 000000018004CE40: movups  xmm0, [rbp+9E10h+var_9B40]
 * 000000018004CE47: movups  [rbp+9E10h+var_82F0], xmm0
 * 000000018004CE4E: mov     dword ptr [rbp+9E10h+var_82E0], 5
 * 000000018004CE58: mov     dword ptr [rbp+9E10h+var_82E0+4], esi
 * 000000018004CE5E: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004CE63: movups  xmm0, [rbp+9E10h+var_82E0]
 * 000000018004CE6A: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004CE6F: call    sub_1800496D0
 * 000000018004CE74: mov     r8, rax
 * 000000018004CE77: mov     r9d, r12d
 * 000000018004CE7A: mov     edx, 0BAh
 * 000000018004CE7F: lea     rcx, [rbp+9E10h+var_5B00]; Src
 * 000000018004CE86: call    sub_1800D4B98
 * 000000018004CE8B: nop
 * 000000018004CE8C: mov     r8, rax
 * 000000018004CE8F: mov     rdx, r13
 * 000000018004CE92: lea     rcx, [rbp+9E10h+var_5B20]
 * 000000018004CE99: call    sub_1800494AC
 * 000000018004CE9E: nop
 * 000000018004CE9F: lea     r8, aPixel; "/Pixel"
 * 000000018004CEA6: mov     rdx, rax
 * 000000018004CEA9: lea     rcx, [rbp+9E10h+var_5B40]
 * 000000018004CEB0: call    sub_180031AE8
 * 000000018004CEB5: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004CEBA: mov     rcx, rax
 * 000000018004CEBD: call    sub_1800D4C70
 * 000000018004CEC2: mov     cs:byte_18021FDCC, al
 * 000000018004CEC8: lea     rcx, [rbp+9E10h+var_5B20]; void *
 * 000000018004CECF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CED4: nop
 * 000000018004CED5: lea     rcx, [rbp+9E10h+var_5B00]; void *
 * 000000018004CEDC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CEE1: nop
 * 000000018004CEE2: lea     rcx, dword_18021FDD0
 * 000000018004CEE9: call    _Init_thread_footer
 * 000000018004CEEE: mov     rax, [rdi+rbx*8]
 * 000000018004CEF2: mov     eax, [r15+rax]
 * 000000018004CEF6: cmp     cs:dword_18021FDD8, eax
 * 000000018004CEFC: jle     loc_18004CFE5
 * 000000018004CF02: lea     rcx, dword_18021FDD8
 * 000000018004CF09: call    _Init_thread_header
 * 000000018004CF0E: cmp     cs:dword_18021FDD8, r14d
 * 000000018004CF15: jnz     loc_18004CFE5
 * 000000018004CF1B: lea     rax, unk_180144C30
 * 000000018004CF22: mov     qword ptr [rbp+9E10h+var_9B30], rax
 * 000000018004CF29: lea     rax, unk_18014B014
 * 000000018004CF30: mov     qword ptr [rbp+9E10h+var_9B30+8], rax
 * 000000018004CF37: movups  xmm0, [rbp+9E10h+var_9B30]
 * 000000018004CF3E: movups  [rbp+9E10h+var_82D0], xmm0
 * 000000018004CF45: mov     dword ptr [rbp+9E10h+var_82C0], 5
 * 000000018004CF4F: mov     dword ptr [rbp+9E10h+var_82C0+4], esi
 * 000000018004CF55: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004CF5A: movups  xmm0, [rbp+9E10h+var_82C0]
 * 000000018004CF61: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004CF66: call    sub_1800496D0
 * 000000018004CF6B: mov     r8, rax
 * 000000018004CF6E: mov     r9d, r12d
 * 000000018004CF71: mov     edx, 0C0h
 * 000000018004CF76: lea     rcx, [rbp+9E10h+var_5AA0]; Src
 * 000000018004CF7D: call    sub_1800D4B98
 * 000000018004CF82: nop
 * 000000018004CF83: mov     r8, rax
 * 000000018004CF86: mov     rdx, r13
 * 000000018004CF89: lea     rcx, [rbp+9E10h+var_5AC0]
 * 000000018004CF90: call    sub_1800494AC
 * 000000018004CF95: nop
 * 000000018004CF96: lea     r8, aPixel; "/Pixel"
 * 000000018004CF9D: mov     rdx, rax
 * 000000018004CFA0: lea     rcx, [rbp+9E10h+var_5AE0]
 * 000000018004CFA7: call    sub_180031AE8
 * 000000018004CFAC: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004CFB1: mov     rcx, rax
 * 000000018004CFB4: call    sub_1800D4C70
 * 000000018004CFB9: mov     cs:byte_18021FDD4, al
 * 000000018004CFBF: lea     rcx, [rbp+9E10h+var_5AC0]; void *
 * 000000018004CFC6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CFCB: nop
 * 000000018004CFCC: lea     rcx, [rbp+9E10h+var_5AA0]; void *
 * 000000018004CFD3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004CFD8: nop
 * 000000018004CFD9: lea     rcx, dword_18021FDD8
 * 000000018004CFE0: call    _Init_thread_footer
 * 000000018004CFE5: mov     rax, [rdi+rbx*8]
 * 000000018004CFE9: mov     eax, [r15+rax]
 * 000000018004CFED: cmp     cs:dword_18021FDE0, eax
 * 000000018004CFF3: jle     loc_18004D0DC
 * 000000018004CFF9: lea     rcx, dword_18021FDE0
 * 000000018004D000: call    _Init_thread_header
 * 000000018004D005: cmp     cs:dword_18021FDE0, r14d
 * 000000018004D00C: jnz     loc_18004D0DC
 * 000000018004D012: lea     rax, unk_180144C30
 * 000000018004D019: mov     qword ptr [rbp+9E10h+var_9B20], rax
 * 000000018004D020: lea     rax, unk_18014B014
 * 000000018004D027: mov     qword ptr [rbp+9E10h+var_9B20+8], rax
 * 000000018004D02E: movups  xmm0, [rbp+9E10h+var_9B20]
 * 000000018004D035: movups  [rbp+9E10h+var_82B0], xmm0
 * 000000018004D03C: mov     dword ptr [rbp+9E10h+var_82A0], 5
 * 000000018004D046: mov     dword ptr [rbp+9E10h+var_82A0+4], esi
 * 000000018004D04C: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004D051: movups  xmm0, [rbp+9E10h+var_82A0]
 * 000000018004D058: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004D05D: call    sub_1800496D0
 * 000000018004D062: mov     r8, rax
 * 000000018004D065: mov     r9d, r12d
 * 000000018004D068: mov     edx, 0C2h
 * 000000018004D06D: lea     rcx, [rbp+9E10h+var_5A40]; Src
 * 000000018004D074: call    sub_1800D4B98
 * 000000018004D079: nop
 * 000000018004D07A: mov     r8, rax
 * 000000018004D07D: mov     rdx, r13
 * 000000018004D080: lea     rcx, [rbp+9E10h+var_5A60]
 * 000000018004D087: call    sub_1800494AC
 * 000000018004D08C: nop
 * 000000018004D08D: lea     r8, aPixel; "/Pixel"
 * 000000018004D094: mov     rdx, rax
 * 000000018004D097: lea     rcx, [rbp+9E10h+var_5A80]
 * 000000018004D09E: call    sub_180031AE8
 * 000000018004D0A3: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004D0A8: mov     rcx, rax
 * 000000018004D0AB: call    sub_1800D4C70
 * 000000018004D0B0: mov     cs:byte_18021FDDC, al
 * 000000018004D0B6: lea     rcx, [rbp+9E10h+var_5A60]; void *
 * 000000018004D0BD: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D0C2: nop
 * 000000018004D0C3: lea     rcx, [rbp+9E10h+var_5A40]; void *
 * 000000018004D0CA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D0CF: nop
 * 000000018004D0D0: lea     rcx, dword_18021FDE0
 * 000000018004D0D7: call    _Init_thread_footer
 * 000000018004D0DC: mov     rax, [rdi+rbx*8]
 * 000000018004D0E0: mov     eax, [r15+rax]
 * 000000018004D0E4: cmp     cs:dword_18021FDE8, eax
 * 000000018004D0EA: jle     loc_18004D1D3
 * 000000018004D0F0: lea     rcx, dword_18021FDE8
 * 000000018004D0F7: call    _Init_thread_header
 * 000000018004D0FC: cmp     cs:dword_18021FDE8, r14d
 * 000000018004D103: jnz     loc_18004D1D3
 * 000000018004D109: lea     rax, unk_18014F5D0
 * 000000018004D110: mov     qword ptr [rbp+9E10h+var_9B10], rax
 * 000000018004D117: lea     rax, unk_180155B5C
 * 000000018004D11E: mov     qword ptr [rbp+9E10h+var_9B10+8], rax
 * 000000018004D125: movups  xmm0, [rbp+9E10h+var_9B10]
 * 000000018004D12C: movups  [rbp+9E10h+var_8290], xmm0
 * 000000018004D133: mov     dword ptr [rbp+9E10h+var_8280], 5
 * 000000018004D13D: mov     dword ptr [rbp+9E10h+var_8280+4], esi
 * 000000018004D143: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004D148: movups  xmm0, [rbp+9E10h+var_8280]
 * 000000018004D14F: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004D154: call    sub_1800496D0
 * 000000018004D159: mov     r8, rax
 * 000000018004D15C: mov     r9d, r12d
 * 000000018004D15F: mov     edx, 0C8h
 * 000000018004D164: lea     rcx, [rbp+9E10h+var_59E0]; Src
 * 000000018004D16B: call    sub_1800D4B98
 * 000000018004D170: nop
 * 000000018004D171: mov     r8, rax
 * 000000018004D174: mov     rdx, r13
 * 000000018004D177: lea     rcx, [rbp+9E10h+var_5A00]
 * 000000018004D17E: call    sub_1800494AC
 * 000000018004D183: nop
 * 000000018004D184: lea     r8, aPixel; "/Pixel"
 * 000000018004D18B: mov     rdx, rax
 * 000000018004D18E: lea     rcx, [rbp+9E10h+var_5A20]
 * 000000018004D195: call    sub_180031AE8
 * 000000018004D19A: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004D19F: mov     rcx, rax
 * 000000018004D1A2: call    sub_1800D4C70
 * 000000018004D1A7: mov     cs:byte_18021FDE4, al
 * 000000018004D1AD: lea     rcx, [rbp+9E10h+var_5A00]; void *
 * 000000018004D1B4: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D1B9: nop
 * 000000018004D1BA: lea     rcx, [rbp+9E10h+var_59E0]; void *
 * 000000018004D1C1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D1C6: nop
 * 000000018004D1C7: lea     rcx, dword_18021FDE8
 * 000000018004D1CE: call    _Init_thread_footer
 * 000000018004D1D3: mov     rax, [rdi+rbx*8]
 * 000000018004D1D7: mov     eax, [r15+rax]
 * 000000018004D1DB: cmp     cs:dword_18021FDF0, eax
 * 000000018004D1E1: jle     loc_18004D2CA
 * 000000018004D1E7: lea     rcx, dword_18021FDF0
 * 000000018004D1EE: call    _Init_thread_header
 * 000000018004D1F3: cmp     cs:dword_18021FDF0, r14d
 * 000000018004D1FA: jnz     loc_18004D2CA
 * 000000018004D200: lea     rax, unk_18014F5D0
 * 000000018004D207: mov     qword ptr [rbp+9E10h+var_9B00], rax
 * 000000018004D20E: lea     rax, unk_180155B5C
 * 000000018004D215: mov     qword ptr [rbp+9E10h+var_9B00+8], rax
 * 000000018004D21C: movups  xmm0, [rbp+9E10h+var_9B00]
 * 000000018004D223: movups  [rbp+9E10h+var_8270], xmm0
 * 000000018004D22A: mov     dword ptr [rbp+9E10h+var_8260], 5
 * 000000018004D234: mov     dword ptr [rbp+9E10h+var_8260+4], esi
 * 000000018004D23A: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004D23F: movups  xmm0, [rbp+9E10h+var_8260]
 * 000000018004D246: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004D24B: call    sub_1800496D0
 * 000000018004D250: mov     r8, rax
 * 000000018004D253: mov     r9d, r12d
 * 000000018004D256: mov     edx, 0CAh
 * 000000018004D25B: lea     rcx, [rbp+9E10h+var_5980]; Src
 * 000000018004D262: call    sub_1800D4B98
 * 000000018004D267: nop
 * 000000018004D268: mov     r8, rax
 * 000000018004D26B: mov     rdx, r13
 * 000000018004D26E: lea     rcx, [rbp+9E10h+var_59A0]
 * 000000018004D275: call    sub_1800494AC
 * 000000018004D27A: nop
 * 000000018004D27B: lea     r8, aPixel; "/Pixel"
 * 000000018004D282: mov     rdx, rax
 * 000000018004D285: lea     rcx, [rbp+9E10h+var_59C0]
 * 000000018004D28C: call    sub_180031AE8
 * 000000018004D291: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004D296: mov     rcx, rax
 * 000000018004D299: call    sub_1800D4C70
 * 000000018004D29E: mov     cs:byte_18021FDEC, al
 * 000000018004D2A4: lea     rcx, [rbp+9E10h+var_59A0]; void *
 * 000000018004D2AB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D2B0: nop
 * 000000018004D2B1: lea     rcx, [rbp+9E10h+var_5980]; void *
 * 000000018004D2B8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D2BD: nop
 * 000000018004D2BE: lea     rcx, dword_18021FDF0
 * 000000018004D2C5: call    _Init_thread_footer
 * 000000018004D2CA: mov     rax, [rdi+rbx*8]
 * 000000018004D2CE: mov     eax, [r15+rax]
 * 000000018004D2D2: cmp     cs:dword_18021FDF8, eax
 * 000000018004D2D8: jle     loc_18004D3C1
 * 000000018004D2DE: lea     rcx, dword_18021FDF8
 * 000000018004D2E5: call    _Init_thread_header
 * 000000018004D2EA: cmp     cs:dword_18021FDF8, r14d
 * 000000018004D2F1: jnz     loc_18004D3C1
 * 000000018004D2F7: lea     rax, unk_180156C30
 * 000000018004D2FE: mov     qword ptr [rbp+9E10h+var_9AF0], rax
 * 000000018004D305: lea     rax, unk_18015D1E8
 * 000000018004D30C: mov     qword ptr [rbp+9E10h+var_9AF0+8], rax
 * 000000018004D313: movups  xmm0, [rbp+9E10h+var_9AF0]
 * 000000018004D31A: movups  [rbp+9E10h+var_8250], xmm0
 * 000000018004D321: mov     dword ptr [rbp+9E10h+var_8240], 5
 * 000000018004D32B: mov     dword ptr [rbp+9E10h+var_8240+4], esi
 * 000000018004D331: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004D336: movups  xmm0, [rbp+9E10h+var_8240]
 * 000000018004D33D: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004D342: call    sub_1800496D0
 * 000000018004D347: mov     r8, rax
 * 000000018004D34A: mov     r9d, r12d
 * 000000018004D34D: mov     edx, 0D0h
 * 000000018004D352: lea     rcx, [rbp+9E10h+var_5920]; Src
 * 000000018004D359: call    sub_1800D4B98
 * 000000018004D35E: nop
 * 000000018004D35F: mov     r8, rax
 * 000000018004D362: mov     rdx, r13
 * 000000018004D365: lea     rcx, [rbp+9E10h+var_5940]
 * 000000018004D36C: call    sub_1800494AC
 * 000000018004D371: nop
 * 000000018004D372: lea     r8, aPixel; "/Pixel"
 * 000000018004D379: mov     rdx, rax
 * 000000018004D37C: lea     rcx, [rbp+9E10h+var_5960]
 * 000000018004D383: call    sub_180031AE8
 * 000000018004D388: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004D38D: mov     rcx, rax
 * 000000018004D390: call    sub_1800D4C70
 * 000000018004D395: mov     cs:byte_18021FDF4, al
 * 000000018004D39B: lea     rcx, [rbp+9E10h+var_5940]; void *
 * 000000018004D3A2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D3A7: nop
 * 000000018004D3A8: lea     rcx, [rbp+9E10h+var_5920]; void *
 * 000000018004D3AF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D3B4: nop
 * 000000018004D3B5: lea     rcx, dword_18021FDF8
 * 000000018004D3BC: call    _Init_thread_footer
 * 000000018004D3C1: mov     rax, [rdi+rbx*8]
 * 000000018004D3C5: mov     eax, [r15+rax]
 * 000000018004D3C9: cmp     cs:dword_18021FE00, eax
 * 000000018004D3CF: jle     loc_18004D4B8
 * 000000018004D3D5: lea     rcx, dword_18021FE00
 * 000000018004D3DC: call    _Init_thread_header
 * 000000018004D3E1: cmp     cs:dword_18021FE00, r14d
 * 000000018004D3E8: jnz     loc_18004D4B8
 * 000000018004D3EE: lea     rax, unk_180156C30
 * 000000018004D3F5: mov     qword ptr [rbp+9E10h+var_9AE0], rax
 * 000000018004D3FC: lea     rax, unk_18015D1E8
 * 000000018004D403: mov     qword ptr [rbp+9E10h+var_9AE0+8], rax
 * 000000018004D40A: movups  xmm0, [rbp+9E10h+var_9AE0]
 * 000000018004D411: movups  [rbp+9E10h+var_8230], xmm0
 * 000000018004D418: mov     dword ptr [rbp+9E10h+var_8220], 5
 * 000000018004D422: mov     dword ptr [rbp+9E10h+var_8220+4], esi
 * 000000018004D428: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004D42D: movups  xmm0, [rbp+9E10h+var_8220]
 * 000000018004D434: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004D439: call    sub_1800496D0
 * 000000018004D43E: mov     r8, rax
 * 000000018004D441: mov     r9d, r12d
 * 000000018004D444: mov     edx, 0D2h
 * 000000018004D449: lea     rcx, [rbp+9E10h+var_58C0]; Src
 * 000000018004D450: call    sub_1800D4B98
 * 000000018004D455: nop
 * 000000018004D456: mov     r8, rax
 * 000000018004D459: mov     rdx, r13
 * 000000018004D45C: lea     rcx, [rbp+9E10h+var_58E0]
 * 000000018004D463: call    sub_1800494AC
 * 000000018004D468: nop
 * 000000018004D469: lea     r8, aPixel; "/Pixel"
 * 000000018004D470: mov     rdx, rax
 * 000000018004D473: lea     rcx, [rbp+9E10h+var_5900]
 * 000000018004D47A: call    sub_180031AE8
 * 000000018004D47F: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004D484: mov     rcx, rax
 * 000000018004D487: call    sub_1800D4C70
 * 000000018004D48C: mov     cs:byte_18021FDFC, al
 * 000000018004D492: lea     rcx, [rbp+9E10h+var_58E0]; void *
 * 000000018004D499: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D49E: nop
 * 000000018004D49F: lea     rcx, [rbp+9E10h+var_58C0]; void *
 * 000000018004D4A6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D4AB: nop
 * 000000018004D4AC: lea     rcx, dword_18021FE00
 * 000000018004D4B3: call    _Init_thread_footer
 * 000000018004D4B8: mov     rax, [rdi+rbx*8]
 * 000000018004D4BC: mov     eax, [r15+rax]
 * 000000018004D4C0: cmp     cs:dword_18021FE08, eax
 * 000000018004D4C6: jle     loc_18004D5AF
 * 000000018004D4CC: lea     rcx, dword_18021FE08
 * 000000018004D4D3: call    _Init_thread_header
 * 000000018004D4D8: cmp     cs:dword_18021FE08, r14d
 * 000000018004D4DF: jnz     loc_18004D5AF
 * 000000018004D4E5: lea     rax, unk_1801604F0
 * 000000018004D4EC: mov     qword ptr [rbp+9E10h+var_9AD0], rax
 * 000000018004D4F3: lea     rax, unk_180166C7C
 * 000000018004D4FA: mov     qword ptr [rbp+9E10h+var_9AD0+8], rax
 * 000000018004D501: movups  xmm0, [rbp+9E10h+var_9AD0]
 * 000000018004D508: movups  [rbp+9E10h+var_8210], xmm0
 * 000000018004D50F: mov     dword ptr [rbp+9E10h+var_8200], 5
 * 000000018004D519: mov     dword ptr [rbp+9E10h+var_8200+4], esi
 * 000000018004D51F: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004D524: movups  xmm0, [rbp+9E10h+var_8200]
 * 000000018004D52B: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004D530: call    sub_1800496D0
 * 000000018004D535: mov     r8, rax
 * 000000018004D538: mov     r9d, r12d
 * 000000018004D53B: mov     edx, 0D8h
 * 000000018004D540: lea     rcx, [rbp+9E10h+var_5860]; Src
 * 000000018004D547: call    sub_1800D4B98
 * 000000018004D54C: nop
 * 000000018004D54D: mov     r8, rax
 * 000000018004D550: mov     rdx, r13
 * 000000018004D553: lea     rcx, [rbp+9E10h+var_5880]
 * 000000018004D55A: call    sub_1800494AC
 * 000000018004D55F: nop
 * 000000018004D560: lea     r8, aPixel; "/Pixel"
 * 000000018004D567: mov     rdx, rax
 * 000000018004D56A: lea     rcx, [rbp+9E10h+var_58A0]
 * 000000018004D571: call    sub_180031AE8
 * 000000018004D576: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004D57B: mov     rcx, rax
 * 000000018004D57E: call    sub_1800D4C70
 * 000000018004D583: mov     cs:byte_18021FE04, al
 * 000000018004D589: lea     rcx, [rbp+9E10h+var_5880]; void *
 * 000000018004D590: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D595: nop
 * 000000018004D596: lea     rcx, [rbp+9E10h+var_5860]; void *
 * 000000018004D59D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D5A2: nop
 * 000000018004D5A3: lea     rcx, dword_18021FE08
 * 000000018004D5AA: call    _Init_thread_footer
 * 000000018004D5AF: mov     rax, [rdi+rbx*8]
 * 000000018004D5B3: mov     eax, [r15+rax]
 * 000000018004D5B7: cmp     cs:dword_18021FE10, eax
 * 000000018004D5BD: jle     loc_18004D6A6
 * 000000018004D5C3: lea     rcx, dword_18021FE10
 * 000000018004D5CA: call    _Init_thread_header
 * 000000018004D5CF: cmp     cs:dword_18021FE10, r14d
 * 000000018004D5D6: jnz     loc_18004D6A6
 * 000000018004D5DC: lea     rax, unk_1801604F0
 * 000000018004D5E3: mov     qword ptr [rbp+9E10h+var_9AC0], rax
 * 000000018004D5EA: lea     rax, unk_180166C7C
 * 000000018004D5F1: mov     qword ptr [rbp+9E10h+var_9AC0+8], rax
 * 000000018004D5F8: movups  xmm0, [rbp+9E10h+var_9AC0]
 * 000000018004D5FF: movups  [rbp+9E10h+var_81F0], xmm0
 * 000000018004D606: mov     dword ptr [rbp+9E10h+var_81E0], 5
 * 000000018004D610: mov     dword ptr [rbp+9E10h+var_81E0+4], esi
 * 000000018004D616: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004D61B: movups  xmm0, [rbp+9E10h+var_81E0]
 * 000000018004D622: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004D627: call    sub_1800496D0
 * 000000018004D62C: mov     r8, rax
 * 000000018004D62F: mov     r9d, r12d
 * 000000018004D632: mov     edx, 0DAh
 * 000000018004D637: lea     rcx, [rbp+9E10h+var_5800]; Src
 * 000000018004D63E: call    sub_1800D4B98
 * 000000018004D643: nop
 * 000000018004D644: mov     r8, rax
 * 000000018004D647: mov     rdx, r13
 * 000000018004D64A: lea     rcx, [rbp+9E10h+var_5820]
 * 000000018004D651: call    sub_1800494AC
 * 000000018004D656: nop
 * 000000018004D657: lea     r8, aPixel; "/Pixel"
 * 000000018004D65E: mov     rdx, rax
 * 000000018004D661: lea     rcx, [rbp+9E10h+var_5840]
 * 000000018004D668: call    sub_180031AE8
 * 000000018004D66D: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004D672: mov     rcx, rax
 * 000000018004D675: call    sub_1800D4C70
 * 000000018004D67A: mov     cs:byte_18021FE0C, al
 * 000000018004D680: lea     rcx, [rbp+9E10h+var_5820]; void *
 * 000000018004D687: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D68C: nop
 * 000000018004D68D: lea     rcx, [rbp+9E10h+var_5800]; void *
 * 000000018004D694: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D699: nop
 * 000000018004D69A: lea     rcx, dword_18021FE10
 * 000000018004D6A1: call    _Init_thread_footer
 * 000000018004D6A6: mov     rax, [rdi+rbx*8]
 * 000000018004D6AA: mov     eax, [r15+rax]
 * 000000018004D6AE: cmp     cs:dword_18021FE18, eax
 * 000000018004D6B4: jle     loc_18004D79D
 * 000000018004D6BA: lea     rcx, dword_18021FE18
 * 000000018004D6C1: call    _Init_thread_header
 * 000000018004D6C6: cmp     cs:dword_18021FE18, r14d
 * 000000018004D6CD: jnz     loc_18004D79D
 * 000000018004D6D3: lea     rax, unk_180144C30
 * 000000018004D6DA: mov     qword ptr [rbp+9E10h+var_9AB0], rax
 * 000000018004D6E1: lea     rax, unk_18014B014
 * 000000018004D6E8: mov     qword ptr [rbp+9E10h+var_9AB0+8], rax
 * 000000018004D6EF: movups  xmm0, [rbp+9E10h+var_9AB0]
 * 000000018004D6F6: movups  [rbp+9E10h+var_81D0], xmm0
 * 000000018004D6FD: mov     dword ptr [rbp+9E10h+var_81C0], 5
 * 000000018004D707: mov     dword ptr [rbp+9E10h+var_81C0+4], esi
 * 000000018004D70D: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004D712: movups  xmm0, [rbp+9E10h+var_81C0]
 * 000000018004D719: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004D71E: call    sub_1800496D0
 * 000000018004D723: mov     r8, rax
 * 000000018004D726: mov     r9d, r12d
 * 000000018004D729: mov     edx, 0E0h
 * 000000018004D72E: lea     rcx, [rbp+9E10h+var_57A0]; Src
 * 000000018004D735: call    sub_1800D4B98
 * 000000018004D73A: nop
 * 000000018004D73B: mov     r8, rax
 * 000000018004D73E: mov     rdx, r13
 * 000000018004D741: lea     rcx, [rbp+9E10h+var_57C0]
 * 000000018004D748: call    sub_1800494AC
 * 000000018004D74D: nop
 * 000000018004D74E: lea     r8, aPixel; "/Pixel"
 * 000000018004D755: mov     rdx, rax
 * 000000018004D758: lea     rcx, [rbp+9E10h+var_57E0]
 * 000000018004D75F: call    sub_180031AE8
 * 000000018004D764: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004D769: mov     rcx, rax
 * 000000018004D76C: call    sub_1800D4C70
 * 000000018004D771: mov     cs:byte_18021FE14, al
 * 000000018004D777: lea     rcx, [rbp+9E10h+var_57C0]; void *
 * 000000018004D77E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D783: nop
 * 000000018004D784: lea     rcx, [rbp+9E10h+var_57A0]; void *
 * 000000018004D78B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D790: nop
 * 000000018004D791: lea     rcx, dword_18021FE18
 * 000000018004D798: call    _Init_thread_footer
 * 000000018004D79D: mov     rax, [rdi+rbx*8]
 * 000000018004D7A1: mov     eax, [r15+rax]
 * 000000018004D7A5: cmp     cs:dword_18021FE20, eax
 * 000000018004D7AB: jle     loc_18004D894
 * 000000018004D7B1: lea     rcx, dword_18021FE20
 * 000000018004D7B8: call    _Init_thread_header
 * 000000018004D7BD: cmp     cs:dword_18021FE20, r14d
 * 000000018004D7C4: jnz     loc_18004D894
 * 000000018004D7CA: lea     rax, unk_180144C30
 * 000000018004D7D1: mov     qword ptr [rbp+9E10h+var_9AA0], rax
 * 000000018004D7D8: lea     rax, unk_18014B014
 * 000000018004D7DF: mov     qword ptr [rbp+9E10h+var_9AA0+8], rax
 * 000000018004D7E6: movups  xmm0, [rbp+9E10h+var_9AA0]
 * 000000018004D7ED: movups  [rbp+9E10h+var_81B0], xmm0
 * 000000018004D7F4: mov     dword ptr [rbp+9E10h+var_81A0], 5
 * 000000018004D7FE: mov     dword ptr [rbp+9E10h+var_81A0+4], esi
 * 000000018004D804: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004D809: movups  xmm0, [rbp+9E10h+var_81A0]
 * 000000018004D810: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004D815: call    sub_1800496D0
 * 000000018004D81A: mov     r8, rax
 * 000000018004D81D: mov     r9d, r12d
 * 000000018004D820: mov     edx, 0E2h
 * 000000018004D825: lea     rcx, [rbp+9E10h+var_5740]; Src
 * 000000018004D82C: call    sub_1800D4B98
 * 000000018004D831: nop
 * 000000018004D832: mov     r8, rax
 * 000000018004D835: mov     rdx, r13
 * 000000018004D838: lea     rcx, [rbp+9E10h+var_5760]
 * 000000018004D83F: call    sub_1800494AC
 * 000000018004D844: nop
 * 000000018004D845: lea     r8, aPixel; "/Pixel"
 * 000000018004D84C: mov     rdx, rax
 * 000000018004D84F: lea     rcx, [rbp+9E10h+var_5780]
 * 000000018004D856: call    sub_180031AE8
 * 000000018004D85B: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004D860: mov     rcx, rax
 * 000000018004D863: call    sub_1800D4C70
 * 000000018004D868: mov     cs:byte_18021FE1C, al
 * 000000018004D86E: lea     rcx, [rbp+9E10h+var_5760]; void *
 * 000000018004D875: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D87A: nop
 * 000000018004D87B: lea     rcx, [rbp+9E10h+var_5740]; void *
 * 000000018004D882: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D887: nop
 * 000000018004D888: lea     rcx, dword_18021FE20
 * 000000018004D88F: call    _Init_thread_footer
 * 000000018004D894: mov     rax, [rdi+rbx*8]
 * 000000018004D898: mov     eax, [r15+rax]
 * 000000018004D89C: cmp     cs:dword_18021FE28, eax
 * 000000018004D8A2: jle     loc_18004D98B
 * 000000018004D8A8: lea     rcx, dword_18021FE28
 * 000000018004D8AF: call    _Init_thread_header
 * 000000018004D8B4: cmp     cs:dword_18021FE28, r14d
 * 000000018004D8BB: jnz     loc_18004D98B
 * 000000018004D8C1: lea     rax, unk_18014F5D0
 * 000000018004D8C8: mov     qword ptr [rbp+9E10h+var_9A90], rax
 * 000000018004D8CF: lea     rax, unk_180155B5C
 * 000000018004D8D6: mov     qword ptr [rbp+9E10h+var_9A90+8], rax
 * 000000018004D8DD: movups  xmm0, [rbp+9E10h+var_9A90]
 * 000000018004D8E4: movups  [rbp+9E10h+var_8190], xmm0
 * 000000018004D8EB: mov     dword ptr [rbp+9E10h+var_8180], 5
 * 000000018004D8F5: mov     dword ptr [rbp+9E10h+var_8180+4], esi
 * 000000018004D8FB: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004D900: movups  xmm0, [rbp+9E10h+var_8180]
 * 000000018004D907: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004D90C: call    sub_1800496D0
 * 000000018004D911: mov     r8, rax
 * 000000018004D914: mov     r9d, r12d
 * 000000018004D917: mov     edx, 0E8h
 * 000000018004D91C: lea     rcx, [rbp+9E10h+var_56E0]; Src
 * 000000018004D923: call    sub_1800D4B98
 * 000000018004D928: nop
 * 000000018004D929: mov     r8, rax
 * 000000018004D92C: mov     rdx, r13
 * 000000018004D92F: lea     rcx, [rbp+9E10h+var_5700]
 * 000000018004D936: call    sub_1800494AC
 * 000000018004D93B: nop
 * 000000018004D93C: lea     r8, aPixel; "/Pixel"
 * 000000018004D943: mov     rdx, rax
 * 000000018004D946: lea     rcx, [rbp+9E10h+var_5720]
 * 000000018004D94D: call    sub_180031AE8
 * 000000018004D952: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004D957: mov     rcx, rax
 * 000000018004D95A: call    sub_1800D4C70
 * 000000018004D95F: mov     cs:byte_18021FE24, al
 * 000000018004D965: lea     rcx, [rbp+9E10h+var_5700]; void *
 * 000000018004D96C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D971: nop
 * 000000018004D972: lea     rcx, [rbp+9E10h+var_56E0]; void *
 * 000000018004D979: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004D97E: nop
 * 000000018004D97F: lea     rcx, dword_18021FE28
 * 000000018004D986: call    _Init_thread_footer
 * 000000018004D98B: mov     rax, [rdi+rbx*8]
 * 000000018004D98F: mov     eax, [r15+rax]
 * 000000018004D993: cmp     cs:dword_18021FE30, eax
 * 000000018004D999: jle     loc_18004DA82
 * 000000018004D99F: lea     rcx, dword_18021FE30
 * 000000018004D9A6: call    _Init_thread_header
 * 000000018004D9AB: cmp     cs:dword_18021FE30, r14d
 * 000000018004D9B2: jnz     loc_18004DA82
 * 000000018004D9B8: lea     rax, unk_18014F5D0
 * 000000018004D9BF: mov     qword ptr [rbp+9E10h+var_9A80], rax
 * 000000018004D9C6: lea     rax, unk_180155B5C
 * 000000018004D9CD: mov     qword ptr [rbp+9E10h+var_9A80+8], rax
 * 000000018004D9D4: movups  xmm0, [rbp+9E10h+var_9A80]
 * 000000018004D9DB: movups  [rbp+9E10h+var_8170], xmm0
 * 000000018004D9E2: mov     dword ptr [rbp+9E10h+var_8160], 5
 * 000000018004D9EC: mov     dword ptr [rbp+9E10h+var_8160+4], esi
 * 000000018004D9F2: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004D9F7: movups  xmm0, [rbp+9E10h+var_8160]
 * 000000018004D9FE: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004DA03: call    sub_1800496D0
 * 000000018004DA08: mov     r8, rax
 * 000000018004DA0B: mov     r9d, r12d
 * 000000018004DA0E: mov     edx, 0EAh
 * 000000018004DA13: lea     rcx, [rbp+9E10h+var_5680]; Src
 * 000000018004DA1A: call    sub_1800D4B98
 * 000000018004DA1F: nop
 * 000000018004DA20: mov     r8, rax
 * 000000018004DA23: mov     rdx, r13
 * 000000018004DA26: lea     rcx, [rbp+9E10h+var_56A0]
 * 000000018004DA2D: call    sub_1800494AC
 * 000000018004DA32: nop
 * 000000018004DA33: lea     r8, aPixel; "/Pixel"
 * 000000018004DA3A: mov     rdx, rax
 * 000000018004DA3D: lea     rcx, [rbp+9E10h+var_56C0]
 * 000000018004DA44: call    sub_180031AE8
 * 000000018004DA49: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004DA4E: mov     rcx, rax
 * 000000018004DA51: call    sub_1800D4C70
 * 000000018004DA56: mov     cs:byte_18021FE2C, al
 * 000000018004DA5C: lea     rcx, [rbp+9E10h+var_56A0]; void *
 * 000000018004DA63: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DA68: nop
 * 000000018004DA69: lea     rcx, [rbp+9E10h+var_5680]; void *
 * 000000018004DA70: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DA75: nop
 * 000000018004DA76: lea     rcx, dword_18021FE30
 * 000000018004DA7D: call    _Init_thread_footer
 * 000000018004DA82: mov     rax, [rdi+rbx*8]
 * 000000018004DA86: mov     eax, [r15+rax]
 * 000000018004DA8A: cmp     cs:dword_18021FE38, eax
 * 000000018004DA90: jle     loc_18004DB79
 * 000000018004DA96: lea     rcx, dword_18021FE38
 * 000000018004DA9D: call    _Init_thread_header
 * 000000018004DAA2: cmp     cs:dword_18021FE38, r14d
 * 000000018004DAA9: jnz     loc_18004DB79
 * 000000018004DAAF: lea     rax, unk_180156C30
 * 000000018004DAB6: mov     qword ptr [rbp+9E10h+var_9A70], rax
 * 000000018004DABD: lea     rax, unk_18015D1E8
 * 000000018004DAC4: mov     qword ptr [rbp+9E10h+var_9A70+8], rax
 * 000000018004DACB: movups  xmm0, [rbp+9E10h+var_9A70]
 * 000000018004DAD2: movups  [rbp+9E10h+var_8150], xmm0
 * 000000018004DAD9: mov     dword ptr [rbp+9E10h+var_8140], 5
 * 000000018004DAE3: mov     dword ptr [rbp+9E10h+var_8140+4], esi
 * 000000018004DAE9: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004DAEE: movups  xmm0, [rbp+9E10h+var_8140]
 * 000000018004DAF5: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004DAFA: call    sub_1800496D0
 * 000000018004DAFF: mov     r8, rax
 * 000000018004DB02: mov     r9d, r12d
 * 000000018004DB05: mov     edx, 0F0h
 * 000000018004DB0A: lea     rcx, [rbp+9E10h+var_5620]; Src
 * 000000018004DB11: call    sub_1800D4B98
 * 000000018004DB16: nop
 * 000000018004DB17: mov     r8, rax
 * 000000018004DB1A: mov     rdx, r13
 * 000000018004DB1D: lea     rcx, [rbp+9E10h+var_5640]
 * 000000018004DB24: call    sub_1800494AC
 * 000000018004DB29: nop
 * 000000018004DB2A: lea     r8, aPixel; "/Pixel"
 * 000000018004DB31: mov     rdx, rax
 * 000000018004DB34: lea     rcx, [rbp+9E10h+var_5660]
 * 000000018004DB3B: call    sub_180031AE8
 * 000000018004DB40: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004DB45: mov     rcx, rax
 * 000000018004DB48: call    sub_1800D4C70
 * 000000018004DB4D: mov     cs:byte_18021FE34, al
 * 000000018004DB53: lea     rcx, [rbp+9E10h+var_5640]; void *
 * 000000018004DB5A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DB5F: nop
 * 000000018004DB60: lea     rcx, [rbp+9E10h+var_5620]; void *
 * 000000018004DB67: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DB6C: nop
 * 000000018004DB6D: lea     rcx, dword_18021FE38
 * 000000018004DB74: call    _Init_thread_footer
 * 000000018004DB79: mov     rax, [rdi+rbx*8]
 * 000000018004DB7D: mov     eax, [r15+rax]
 * 000000018004DB81: cmp     cs:dword_18021FE40, eax
 * 000000018004DB87: jle     loc_18004DC70
 * 000000018004DB8D: lea     rcx, dword_18021FE40
 * 000000018004DB94: call    _Init_thread_header
 * 000000018004DB99: cmp     cs:dword_18021FE40, r14d
 * 000000018004DBA0: jnz     loc_18004DC70
 * 000000018004DBA6: lea     rax, unk_180156C30
 * 000000018004DBAD: mov     qword ptr [rbp+9E10h+var_9A60], rax
 * 000000018004DBB4: lea     rax, unk_18015D1E8
 * 000000018004DBBB: mov     qword ptr [rbp+9E10h+var_9A60+8], rax
 * 000000018004DBC2: movups  xmm0, [rbp+9E10h+var_9A60]
 * 000000018004DBC9: movups  [rbp+9E10h+var_8130], xmm0
 * 000000018004DBD0: mov     dword ptr [rbp+9E10h+var_8120], 5
 * 000000018004DBDA: mov     dword ptr [rbp+9E10h+var_8120+4], esi
 * 000000018004DBE0: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004DBE5: movups  xmm0, [rbp+9E10h+var_8120]
 * 000000018004DBEC: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004DBF1: call    sub_1800496D0
 * 000000018004DBF6: mov     r8, rax
 * 000000018004DBF9: mov     r9d, r12d
 * 000000018004DBFC: mov     edx, 0F2h
 * 000000018004DC01: lea     rcx, [rbp+9E10h+var_55C0]; Src
 * 000000018004DC08: call    sub_1800D4B98
 * 000000018004DC0D: nop
 * 000000018004DC0E: mov     r8, rax
 * 000000018004DC11: mov     rdx, r13
 * 000000018004DC14: lea     rcx, [rbp+9E10h+var_55E0]
 * 000000018004DC1B: call    sub_1800494AC
 * 000000018004DC20: nop
 * 000000018004DC21: lea     r8, aPixel; "/Pixel"
 * 000000018004DC28: mov     rdx, rax
 * 000000018004DC2B: lea     rcx, [rbp+9E10h+var_5600]
 * 000000018004DC32: call    sub_180031AE8
 * 000000018004DC37: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004DC3C: mov     rcx, rax
 * 000000018004DC3F: call    sub_1800D4C70
 * 000000018004DC44: mov     cs:byte_18021FE3C, al
 * 000000018004DC4A: lea     rcx, [rbp+9E10h+var_55E0]; void *
 * 000000018004DC51: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DC56: nop
 * 000000018004DC57: lea     rcx, [rbp+9E10h+var_55C0]; void *
 * 000000018004DC5E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DC63: nop
 * 000000018004DC64: lea     rcx, dword_18021FE40
 * 000000018004DC6B: call    _Init_thread_footer
 * 000000018004DC70: mov     rax, [rdi+rbx*8]
 * 000000018004DC74: mov     eax, [r15+rax]
 * 000000018004DC78: cmp     cs:dword_18021FE48, eax
 * 000000018004DC7E: jle     loc_18004DD67
 * 000000018004DC84: lea     rcx, dword_18021FE48
 * 000000018004DC8B: call    _Init_thread_header
 * 000000018004DC90: cmp     cs:dword_18021FE48, r14d
 * 000000018004DC97: jnz     loc_18004DD67
 * 000000018004DC9D: lea     rax, unk_1801604F0
 * 000000018004DCA4: mov     qword ptr [rbp+9E10h+var_9A50], rax
 * 000000018004DCAB: lea     rax, unk_180166C7C
 * 000000018004DCB2: mov     qword ptr [rbp+9E10h+var_9A50+8], rax
 * 000000018004DCB9: movups  xmm0, [rbp+9E10h+var_9A50]
 * 000000018004DCC0: movups  [rbp+9E10h+var_8110], xmm0
 * 000000018004DCC7: mov     dword ptr [rbp+9E10h+var_8100], 5
 * 000000018004DCD1: mov     dword ptr [rbp+9E10h+var_8100+4], esi
 * 000000018004DCD7: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004DCDC: movups  xmm0, [rbp+9E10h+var_8100]
 * 000000018004DCE3: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004DCE8: call    sub_1800496D0
 * 000000018004DCED: mov     r8, rax
 * 000000018004DCF0: mov     r9d, r12d
 * 000000018004DCF3: mov     edx, 0F8h
 * 000000018004DCF8: lea     rcx, [rbp+9E10h+var_5560]; Src
 * 000000018004DCFF: call    sub_1800D4B98
 * 000000018004DD04: nop
 * 000000018004DD05: mov     r8, rax
 * 000000018004DD08: mov     rdx, r13
 * 000000018004DD0B: lea     rcx, [rbp+9E10h+var_5580]
 * 000000018004DD12: call    sub_1800494AC
 * 000000018004DD17: nop
 * 000000018004DD18: lea     r8, aPixel; "/Pixel"
 * 000000018004DD1F: mov     rdx, rax
 * 000000018004DD22: lea     rcx, [rbp+9E10h+var_55A0]
 * 000000018004DD29: call    sub_180031AE8
 * 000000018004DD2E: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004DD33: mov     rcx, rax
 * 000000018004DD36: call    sub_1800D4C70
 * 000000018004DD3B: mov     cs:byte_18021FE44, al
 * 000000018004DD41: lea     rcx, [rbp+9E10h+var_5580]; void *
 * 000000018004DD48: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DD4D: nop
 * 000000018004DD4E: lea     rcx, [rbp+9E10h+var_5560]; void *
 * 000000018004DD55: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DD5A: nop
 * 000000018004DD5B: lea     rcx, dword_18021FE48
 * 000000018004DD62: call    _Init_thread_footer
 * 000000018004DD67: mov     rax, [rdi+rbx*8]
 * 000000018004DD6B: mov     eax, [r15+rax]
 * 000000018004DD6F: cmp     cs:dword_18021FE50, eax
 * 000000018004DD75: jle     loc_18004DE5E
 * 000000018004DD7B: lea     rcx, dword_18021FE50
 * 000000018004DD82: call    _Init_thread_header
 * 000000018004DD87: cmp     cs:dword_18021FE50, r14d
 * 000000018004DD8E: jnz     loc_18004DE5E
 * 000000018004DD94: lea     rax, unk_1801604F0
 * 000000018004DD9B: mov     qword ptr [rbp+9E10h+var_9A40], rax
 * 000000018004DDA2: lea     rax, unk_180166C7C
 * 000000018004DDA9: mov     qword ptr [rbp+9E10h+var_9A40+8], rax
 * 000000018004DDB0: movups  xmm0, [rbp+9E10h+var_9A40]
 * 000000018004DDB7: movups  [rbp+9E10h+var_80F0], xmm0
 * 000000018004DDBE: mov     dword ptr [rbp+9E10h+var_80E0], 5
 * 000000018004DDC8: mov     dword ptr [rbp+9E10h+var_80E0+4], esi
 * 000000018004DDCE: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004DDD3: movups  xmm0, [rbp+9E10h+var_80E0]
 * 000000018004DDDA: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004DDDF: call    sub_1800496D0
 * 000000018004DDE4: mov     r8, rax
 * 000000018004DDE7: mov     r9d, r12d
 * 000000018004DDEA: mov     edx, 0FAh
 * 000000018004DDEF: lea     rcx, [rbp+9E10h+var_5500]; Src
 * 000000018004DDF6: call    sub_1800D4B98
 * 000000018004DDFB: nop
 * 000000018004DDFC: mov     r8, rax
 * 000000018004DDFF: mov     rdx, r13
 * 000000018004DE02: lea     rcx, [rbp+9E10h+var_5520]
 * 000000018004DE09: call    sub_1800494AC
 * 000000018004DE0E: nop
 * 000000018004DE0F: lea     r8, aPixel; "/Pixel"
 * 000000018004DE16: mov     rdx, rax
 * 000000018004DE19: lea     rcx, [rbp+9E10h+var_5540]
 * 000000018004DE20: call    sub_180031AE8
 * 000000018004DE25: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004DE2A: mov     rcx, rax
 * 000000018004DE2D: call    sub_1800D4C70
 * 000000018004DE32: mov     cs:byte_18021FE4C, al
 * 000000018004DE38: lea     rcx, [rbp+9E10h+var_5520]; void *
 * 000000018004DE3F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DE44: nop
 * 000000018004DE45: lea     rcx, [rbp+9E10h+var_5500]; void *
 * 000000018004DE4C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DE51: nop
 * 000000018004DE52: lea     rcx, dword_18021FE50
 * 000000018004DE59: call    _Init_thread_footer
 * 000000018004DE5E: mov     rax, [rdi+rbx*8]
 * 000000018004DE62: mov     eax, [r15+rax]
 * 000000018004DE66: cmp     cs:dword_18021FE58, eax
 * 000000018004DE6C: jle     loc_18004DF55
 * 000000018004DE72: lea     rcx, dword_18021FE58
 * 000000018004DE79: call    _Init_thread_header
 * 000000018004DE7E: cmp     cs:dword_18021FE58, r14d
 * 000000018004DE85: jnz     loc_18004DF55
 * 000000018004DE8B: lea     rax, unk_180166C80
 * 000000018004DE92: mov     qword ptr [rbp+9E10h+var_9A30], rax
 * 000000018004DE99: lea     rax, unk_18016D3AC
 * 000000018004DEA0: mov     qword ptr [rbp+9E10h+var_9A30+8], rax
 * 000000018004DEA7: movups  xmm0, [rbp+9E10h+var_9A30]
 * 000000018004DEAE: movups  [rbp+9E10h+var_80D0], xmm0
 * 000000018004DEB5: mov     dword ptr [rbp+9E10h+var_80C0], 5
 * 000000018004DEBF: mov     dword ptr [rbp+9E10h+var_80C0+4], esi
 * 000000018004DEC5: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004DECA: movups  xmm0, [rbp+9E10h+var_80C0]
 * 000000018004DED1: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004DED6: call    sub_1800496D0
 * 000000018004DEDB: mov     r8, rax
 * 000000018004DEDE: mov     r9d, r12d
 * 000000018004DEE1: mov     edx, 100h
 * 000000018004DEE6: lea     rcx, [rbp+9E10h+var_54A0]; Src
 * 000000018004DEED: call    sub_1800D4B98
 * 000000018004DEF2: nop
 * 000000018004DEF3: mov     r8, rax
 * 000000018004DEF6: mov     rdx, r13
 * 000000018004DEF9: lea     rcx, [rbp+9E10h+var_54C0]
 * 000000018004DF00: call    sub_1800494AC
 * 000000018004DF05: nop
 * 000000018004DF06: lea     r8, aPixel; "/Pixel"
 * 000000018004DF0D: mov     rdx, rax
 * 000000018004DF10: lea     rcx, [rbp+9E10h+var_54E0]
 * 000000018004DF17: call    sub_180031AE8
 * 000000018004DF1C: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004DF21: mov     rcx, rax
 * 000000018004DF24: call    sub_1800D4C70
 * 000000018004DF29: mov     cs:byte_18021FE54, al
 * 000000018004DF2F: lea     rcx, [rbp+9E10h+var_54C0]; void *
 * 000000018004DF36: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DF3B: nop
 * 000000018004DF3C: lea     rcx, [rbp+9E10h+var_54A0]; void *
 * 000000018004DF43: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004DF48: nop
 * 000000018004DF49: lea     rcx, dword_18021FE58
 * 000000018004DF50: call    _Init_thread_footer
 * 000000018004DF55: mov     rax, [rdi+rbx*8]
 * 000000018004DF59: mov     eax, [r15+rax]
 * 000000018004DF5D: cmp     cs:dword_18021FE60, eax
 * 000000018004DF63: jle     loc_18004E04C
 * 000000018004DF69: lea     rcx, dword_18021FE60
 * 000000018004DF70: call    _Init_thread_header
 * 000000018004DF75: cmp     cs:dword_18021FE60, r14d
 * 000000018004DF7C: jnz     loc_18004E04C
 * 000000018004DF82: lea     rax, unk_180166C80
 * 000000018004DF89: mov     qword ptr [rbp+9E10h+var_9A20], rax
 * 000000018004DF90: lea     rax, unk_18016D3AC
 * 000000018004DF97: mov     qword ptr [rbp+9E10h+var_9A20+8], rax
 * 000000018004DF9E: movups  xmm0, [rbp+9E10h+var_9A20]
 * 000000018004DFA5: movups  [rbp+9E10h+var_80B0], xmm0
 * 000000018004DFAC: mov     dword ptr [rbp+9E10h+var_80A0], 5
 * 000000018004DFB6: mov     dword ptr [rbp+9E10h+var_80A0+4], esi
 * 000000018004DFBC: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004DFC1: movups  xmm0, [rbp+9E10h+var_80A0]
 * 000000018004DFC8: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004DFCD: call    sub_1800496D0
 * 000000018004DFD2: mov     r8, rax
 * 000000018004DFD5: mov     r9d, r12d
 * 000000018004DFD8: mov     edx, 102h
 * 000000018004DFDD: lea     rcx, [rbp+9E10h+var_5440]; Src
 * 000000018004DFE4: call    sub_1800D4B98
 * 000000018004DFE9: nop
 * 000000018004DFEA: mov     r8, rax
 * 000000018004DFED: mov     rdx, r13
 * 000000018004DFF0: lea     rcx, [rbp+9E10h+var_5460]
 * 000000018004DFF7: call    sub_1800494AC
 * 000000018004DFFC: nop
 * 000000018004DFFD: lea     r8, aPixel; "/Pixel"
 * 000000018004E004: mov     rdx, rax
 * 000000018004E007: lea     rcx, [rbp+9E10h+var_5480]
 * 000000018004E00E: call    sub_180031AE8
 * 000000018004E013: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004E018: mov     rcx, rax
 * 000000018004E01B: call    sub_1800D4C70
 * 000000018004E020: mov     cs:byte_18021FE5C, al
 * 000000018004E026: lea     rcx, [rbp+9E10h+var_5460]; void *
 * 000000018004E02D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E032: nop
 * 000000018004E033: lea     rcx, [rbp+9E10h+var_5440]; void *
 * 000000018004E03A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E03F: nop
 * 000000018004E040: lea     rcx, dword_18021FE60
 * 000000018004E047: call    _Init_thread_footer
 * 000000018004E04C: mov     rax, [rdi+rbx*8]
 * 000000018004E050: mov     eax, [r15+rax]
 * 000000018004E054: cmp     cs:dword_18021FE68, eax
 * 000000018004E05A: jle     loc_18004E143
 * 000000018004E060: lea     rcx, dword_18021FE68
 * 000000018004E067: call    _Init_thread_header
 * 000000018004E06C: cmp     cs:dword_18021FE68, r14d
 * 000000018004E073: jnz     loc_18004E143
 * 000000018004E079: lea     rax, unk_18016D3B0
 * 000000018004E080: mov     qword ptr [rbp+9E10h+var_9A10], rax
 * 000000018004E087: lea     rax, unk_180170890
 * 000000018004E08E: mov     qword ptr [rbp+9E10h+var_9A10+8], rax
 * 000000018004E095: movups  xmm0, [rbp+9E10h+var_9A10]
 * 000000018004E09C: movups  [rbp+9E10h+var_8090], xmm0
 * 000000018004E0A3: mov     dword ptr [rbp+9E10h+var_8080], 5
 * 000000018004E0AD: mov     dword ptr [rbp+9E10h+var_8080+4], esi
 * 000000018004E0B3: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004E0B8: movups  xmm0, [rbp+9E10h+var_8080]
 * 000000018004E0BF: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004E0C4: call    sub_1800496D0
 * 000000018004E0C9: mov     r8, rax
 * 000000018004E0CC: mov     r9d, r12d
 * 000000018004E0CF: mov     edx, 104h
 * 000000018004E0D4: lea     rcx, [rbp+9E10h+var_53E0]; Src
 * 000000018004E0DB: call    sub_1800D4B98
 * 000000018004E0E0: nop
 * 000000018004E0E1: mov     r8, rax
 * 000000018004E0E4: mov     rdx, r13
 * 000000018004E0E7: lea     rcx, [rbp+9E10h+var_5400]
 * 000000018004E0EE: call    sub_1800494AC
 * 000000018004E0F3: nop
 * 000000018004E0F4: lea     r8, aPixel; "/Pixel"
 * 000000018004E0FB: mov     rdx, rax
 * 000000018004E0FE: lea     rcx, [rbp+9E10h+var_5420]
 * 000000018004E105: call    sub_180031AE8
 * 000000018004E10A: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004E10F: mov     rcx, rax
 * 000000018004E112: call    sub_1800D4C70
 * 000000018004E117: mov     cs:byte_18021FE64, al
 * 000000018004E11D: lea     rcx, [rbp+9E10h+var_5400]; void *
 * 000000018004E124: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E129: nop
 * 000000018004E12A: lea     rcx, [rbp+9E10h+var_53E0]; void *
 * 000000018004E131: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E136: nop
 * 000000018004E137: lea     rcx, dword_18021FE68
 * 000000018004E13E: call    _Init_thread_footer
 * 000000018004E143: mov     rax, [rdi+rbx*8]
 * 000000018004E147: mov     eax, [r15+rax]
 * 000000018004E14B: cmp     cs:dword_18021FE70, eax
 * 000000018004E151: jle     loc_18004E23A
 * 000000018004E157: lea     rcx, dword_18021FE70
 * 000000018004E15E: call    _Init_thread_header
 * 000000018004E163: cmp     cs:dword_18021FE70, r14d
 * 000000018004E16A: jnz     loc_18004E23A
 * 000000018004E170: lea     rax, unk_18016D3B0
 * 000000018004E177: mov     qword ptr [rbp+9E10h+var_9A00], rax
 * 000000018004E17E: lea     rax, unk_180170890
 * 000000018004E185: mov     qword ptr [rbp+9E10h+var_9A00+8], rax
 * 000000018004E18C: movups  xmm0, [rbp+9E10h+var_9A00]
 * 000000018004E193: movups  [rbp+9E10h+var_8070], xmm0
 * 000000018004E19A: mov     dword ptr [rbp+9E10h+var_8060], 5
 * 000000018004E1A4: mov     dword ptr [rbp+9E10h+var_8060+4], esi
 * 000000018004E1AA: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004E1AF: movups  xmm0, [rbp+9E10h+var_8060]
 * 000000018004E1B6: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004E1BB: call    sub_1800496D0
 * 000000018004E1C0: mov     r8, rax
 * 000000018004E1C3: mov     r9d, r12d
 * 000000018004E1C6: mov     edx, 106h
 * 000000018004E1CB: lea     rcx, [rbp+9E10h+var_5380]; Src
 * 000000018004E1D2: call    sub_1800D4B98
 * 000000018004E1D7: nop
 * 000000018004E1D8: mov     r8, rax
 * 000000018004E1DB: mov     rdx, r13
 * 000000018004E1DE: lea     rcx, [rbp+9E10h+var_53A0]
 * 000000018004E1E5: call    sub_1800494AC
 * 000000018004E1EA: nop
 * 000000018004E1EB: lea     r8, aPixel; "/Pixel"
 * 000000018004E1F2: mov     rdx, rax
 * 000000018004E1F5: lea     rcx, [rbp+9E10h+var_53C0]
 * 000000018004E1FC: call    sub_180031AE8
 * 000000018004E201: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004E206: mov     rcx, rax
 * 000000018004E209: call    sub_1800D4C70
 * 000000018004E20E: mov     cs:byte_18021FE6C, al
 * 000000018004E214: lea     rcx, [rbp+9E10h+var_53A0]; void *
 * 000000018004E21B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E220: nop
 * 000000018004E221: lea     rcx, [rbp+9E10h+var_5380]; void *
 * 000000018004E228: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E22D: nop
 * 000000018004E22E: lea     rcx, dword_18021FE70
 * 000000018004E235: call    _Init_thread_footer
 * 000000018004E23A: mov     rax, [rdi+rbx*8]
 * 000000018004E23E: mov     eax, [r15+rax]
 * 000000018004E242: cmp     cs:dword_18021FE78, eax
 * 000000018004E248: jle     loc_18004E331
 * 000000018004E24E: lea     rcx, dword_18021FE78
 * 000000018004E255: call    _Init_thread_header
 * 000000018004E25A: cmp     cs:dword_18021FE78, r14d
 * 000000018004E261: jnz     loc_18004E331
 * 000000018004E267: lea     rax, unk_180170890
 * 000000018004E26E: mov     qword ptr [rbp+9E10h+var_99F0], rax
 * 000000018004E275: lea     rax, unk_18017714C
 * 000000018004E27C: mov     qword ptr [rbp+9E10h+var_99F0+8], rax
 * 000000018004E283: movups  xmm0, [rbp+9E10h+var_99F0]
 * 000000018004E28A: movups  [rbp+9E10h+var_8050], xmm0
 * 000000018004E291: mov     dword ptr [rbp+9E10h+var_8040], 5
 * 000000018004E29B: mov     dword ptr [rbp+9E10h+var_8040+4], esi
 * 000000018004E2A1: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004E2A6: movups  xmm0, [rbp+9E10h+var_8040]
 * 000000018004E2AD: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004E2B2: call    sub_1800496D0
 * 000000018004E2B7: mov     r8, rax
 * 000000018004E2BA: mov     r9d, r12d
 * 000000018004E2BD: mov     edx, 108h
 * 000000018004E2C2: lea     rcx, [rbp+9E10h+var_5320]; Src
 * 000000018004E2C9: call    sub_1800D4B98
 * 000000018004E2CE: nop
 * 000000018004E2CF: mov     r8, rax
 * 000000018004E2D2: mov     rdx, r13
 * 000000018004E2D5: lea     rcx, [rbp+9E10h+var_5340]
 * 000000018004E2DC: call    sub_1800494AC
 * 000000018004E2E1: nop
 * 000000018004E2E2: lea     r8, aPixel; "/Pixel"
 * 000000018004E2E9: mov     rdx, rax
 * 000000018004E2EC: lea     rcx, [rbp+9E10h+var_5360]
 * 000000018004E2F3: call    sub_180031AE8
 * 000000018004E2F8: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004E2FD: mov     rcx, rax
 * 000000018004E300: call    sub_1800D4C70
 * 000000018004E305: mov     cs:byte_18021FE74, al
 * 000000018004E30B: lea     rcx, [rbp+9E10h+var_5340]; void *
 * 000000018004E312: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E317: nop
 * 000000018004E318: lea     rcx, [rbp+9E10h+var_5320]; void *
 * 000000018004E31F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E324: nop
 * 000000018004E325: lea     rcx, dword_18021FE78
 * 000000018004E32C: call    _Init_thread_footer
 * 000000018004E331: mov     rax, [rdi+rbx*8]
 * 000000018004E335: mov     eax, [r15+rax]
 * 000000018004E339: cmp     cs:dword_18021FE80, eax
 * 000000018004E33F: jle     loc_18004E428
 * 000000018004E345: lea     rcx, dword_18021FE80
 * 000000018004E34C: call    _Init_thread_header
 * 000000018004E351: cmp     cs:dword_18021FE80, r14d
 * 000000018004E358: jnz     loc_18004E428
 * 000000018004E35E: lea     rax, unk_180170890
 * 000000018004E365: mov     qword ptr [rbp+9E10h+var_99E0], rax
 * 000000018004E36C: lea     rax, unk_18017714C
 * 000000018004E373: mov     qword ptr [rbp+9E10h+var_99E0+8], rax
 * 000000018004E37A: movups  xmm0, [rbp+9E10h+var_99E0]
 * 000000018004E381: movups  [rbp+9E10h+var_8030], xmm0
 * 000000018004E388: mov     dword ptr [rbp+9E10h+var_8020], 5
 * 000000018004E392: mov     dword ptr [rbp+9E10h+var_8020+4], esi
 * 000000018004E398: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004E39D: movups  xmm0, [rbp+9E10h+var_8020]
 * 000000018004E3A4: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004E3A9: call    sub_1800496D0
 * 000000018004E3AE: mov     r8, rax
 * 000000018004E3B1: mov     r9d, r12d
 * 000000018004E3B4: mov     edx, 10Ah
 * 000000018004E3B9: lea     rcx, [rbp+9E10h+var_52C0]; Src
 * 000000018004E3C0: call    sub_1800D4B98
 * 000000018004E3C5: nop
 * 000000018004E3C6: mov     r8, rax
 * 000000018004E3C9: mov     rdx, r13
 * 000000018004E3CC: lea     rcx, [rbp+9E10h+var_52E0]
 * 000000018004E3D3: call    sub_1800494AC
 * 000000018004E3D8: nop
 * 000000018004E3D9: lea     r8, aPixel; "/Pixel"
 * 000000018004E3E0: mov     rdx, rax
 * 000000018004E3E3: lea     rcx, [rbp+9E10h+var_5300]
 * 000000018004E3EA: call    sub_180031AE8
 * 000000018004E3EF: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004E3F4: mov     rcx, rax
 * 000000018004E3F7: call    sub_1800D4C70
 * 000000018004E3FC: mov     cs:byte_18021FE7C, al
 * 000000018004E402: lea     rcx, [rbp+9E10h+var_52E0]; void *
 * 000000018004E409: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E40E: nop
 * 000000018004E40F: lea     rcx, [rbp+9E10h+var_52C0]; void *
 * 000000018004E416: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E41B: nop
 * 000000018004E41C: lea     rcx, dword_18021FE80
 * 000000018004E423: call    _Init_thread_footer
 * 000000018004E428: mov     rax, [rdi+rbx*8]
 * 000000018004E42C: mov     eax, [r15+rax]
 * 000000018004E430: cmp     cs:dword_18021FE88, eax
 * 000000018004E436: jle     loc_18004E51F
 * 000000018004E43C: lea     rcx, dword_18021FE88
 * 000000018004E443: call    _Init_thread_header
 * 000000018004E448: cmp     cs:dword_18021FE88, r14d
 * 000000018004E44F: jnz     loc_18004E51F
 * 000000018004E455: lea     rax, unk_180177150
 * 000000018004E45C: mov     qword ptr [rbp+9E10h+var_99D0], rax
 * 000000018004E463: lea     rax, unk_18017DA58
 * 000000018004E46A: mov     qword ptr [rbp+9E10h+var_99D0+8], rax
 * 000000018004E471: movups  xmm0, [rbp+9E10h+var_99D0]
 * 000000018004E478: movups  [rbp+9E10h+var_8010], xmm0
 * 000000018004E47F: mov     dword ptr [rbp+9E10h+var_8000], 5
 * 000000018004E489: mov     dword ptr [rbp+9E10h+var_8000+4], esi
 * 000000018004E48F: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004E494: movups  xmm0, [rbp+9E10h+var_8000]
 * 000000018004E49B: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004E4A0: call    sub_1800496D0
 * 000000018004E4A5: mov     r8, rax
 * 000000018004E4A8: mov     r9d, r12d
 * 000000018004E4AB: mov     edx, 110h
 * 000000018004E4B0: lea     rcx, [rbp+9E10h+var_5260]; Src
 * 000000018004E4B7: call    sub_1800D4B98
 * 000000018004E4BC: nop
 * 000000018004E4BD: mov     r8, rax
 * 000000018004E4C0: mov     rdx, r13
 * 000000018004E4C3: lea     rcx, [rbp+9E10h+var_5280]
 * 000000018004E4CA: call    sub_1800494AC
 * 000000018004E4CF: nop
 * 000000018004E4D0: lea     r8, aPixel; "/Pixel"
 * 000000018004E4D7: mov     rdx, rax
 * 000000018004E4DA: lea     rcx, [rbp+9E10h+var_52A0]
 * 000000018004E4E1: call    sub_180031AE8
 * 000000018004E4E6: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004E4EB: mov     rcx, rax
 * 000000018004E4EE: call    sub_1800D4C70
 * 000000018004E4F3: mov     cs:byte_18021FE84, al
 * 000000018004E4F9: lea     rcx, [rbp+9E10h+var_5280]; void *
 * 000000018004E500: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E505: nop
 * 000000018004E506: lea     rcx, [rbp+9E10h+var_5260]; void *
 * 000000018004E50D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E512: nop
 * 000000018004E513: lea     rcx, dword_18021FE88
 * 000000018004E51A: call    _Init_thread_footer
 * 000000018004E51F: mov     rax, [rdi+rbx*8]
 * 000000018004E523: mov     eax, [r15+rax]
 * 000000018004E527: cmp     cs:dword_18021FE90, eax
 * 000000018004E52D: jle     loc_18004E616
 * 000000018004E533: lea     rcx, dword_18021FE90
 * 000000018004E53A: call    _Init_thread_header
 * 000000018004E53F: cmp     cs:dword_18021FE90, r14d
 * 000000018004E546: jnz     loc_18004E616
 * 000000018004E54C: lea     rax, unk_180177150
 * 000000018004E553: mov     qword ptr [rbp+9E10h+var_99C0], rax
 * 000000018004E55A: lea     rax, unk_18017DA58
 * 000000018004E561: mov     qword ptr [rbp+9E10h+var_99C0+8], rax
 * 000000018004E568: movups  xmm0, [rbp+9E10h+var_99C0]
 * 000000018004E56F: movups  [rbp+9E10h+var_7FF0], xmm0
 * 000000018004E576: mov     dword ptr [rbp+9E10h+var_7FE0], 5
 * 000000018004E580: mov     dword ptr [rbp+9E10h+var_7FE0+4], esi
 * 000000018004E586: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004E58B: movups  xmm0, [rbp+9E10h+var_7FE0]
 * 000000018004E592: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004E597: call    sub_1800496D0
 * 000000018004E59C: mov     r8, rax
 * 000000018004E59F: mov     r9d, r12d
 * 000000018004E5A2: mov     edx, 112h
 * 000000018004E5A7: lea     rcx, [rbp+9E10h+var_5200]; Src
 * 000000018004E5AE: call    sub_1800D4B98
 * 000000018004E5B3: nop
 * 000000018004E5B4: mov     r8, rax
 * 000000018004E5B7: mov     rdx, r13
 * 000000018004E5BA: lea     rcx, [rbp+9E10h+var_5220]
 * 000000018004E5C1: call    sub_1800494AC
 * 000000018004E5C6: nop
 * 000000018004E5C7: lea     r8, aPixel; "/Pixel"
 * 000000018004E5CE: mov     rdx, rax
 * 000000018004E5D1: lea     rcx, [rbp+9E10h+var_5240]
 * 000000018004E5D8: call    sub_180031AE8
 * 000000018004E5DD: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004E5E2: mov     rcx, rax
 * 000000018004E5E5: call    sub_1800D4C70
 * 000000018004E5EA: mov     cs:byte_18021FE8C, al
 * 000000018004E5F0: lea     rcx, [rbp+9E10h+var_5220]; void *
 * 000000018004E5F7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E5FC: nop
 * 000000018004E5FD: lea     rcx, [rbp+9E10h+var_5200]; void *
 * 000000018004E604: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E609: nop
 * 000000018004E60A: lea     rcx, dword_18021FE90
 * 000000018004E611: call    _Init_thread_footer
 * 000000018004E616: mov     rax, [rdi+rbx*8]
 * 000000018004E61A: mov     eax, [r15+rax]
 * 000000018004E61E: cmp     cs:dword_18021FE98, eax
 * 000000018004E624: jle     loc_18004E70D
 * 000000018004E62A: lea     rcx, dword_18021FE98
 * 000000018004E631: call    _Init_thread_header
 * 000000018004E636: cmp     cs:dword_18021FE98, r14d
 * 000000018004E63D: jnz     loc_18004E70D
 * 000000018004E643: lea     rax, unk_18017DA60
 * 000000018004E64A: mov     qword ptr [rbp+9E10h+var_99B0], rax
 * 000000018004E651: lea     rax, unk_18018107C
 * 000000018004E658: mov     qword ptr [rbp+9E10h+var_99B0+8], rax
 * 000000018004E65F: movups  xmm0, [rbp+9E10h+var_99B0]
 * 000000018004E666: movups  [rbp+9E10h+var_7FD0], xmm0
 * 000000018004E66D: mov     dword ptr [rbp+9E10h+var_7FC0], 5
 * 000000018004E677: mov     dword ptr [rbp+9E10h+var_7FC0+4], esi
 * 000000018004E67D: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004E682: movups  xmm0, [rbp+9E10h+var_7FC0]
 * 000000018004E689: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004E68E: call    sub_1800496D0
 * 000000018004E693: mov     r8, rax
 * 000000018004E696: mov     r9d, r12d
 * 000000018004E699: mov     edx, 114h
 * 000000018004E69E: lea     rcx, [rbp+9E10h+var_51A0]; Src
 * 000000018004E6A5: call    sub_1800D4B98
 * 000000018004E6AA: nop
 * 000000018004E6AB: mov     r8, rax
 * 000000018004E6AE: mov     rdx, r13
 * 000000018004E6B1: lea     rcx, [rbp+9E10h+var_51C0]
 * 000000018004E6B8: call    sub_1800494AC
 * 000000018004E6BD: nop
 * 000000018004E6BE: lea     r8, aPixel; "/Pixel"
 * 000000018004E6C5: mov     rdx, rax
 * 000000018004E6C8: lea     rcx, [rbp+9E10h+var_51E0]
 * 000000018004E6CF: call    sub_180031AE8
 * 000000018004E6D4: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004E6D9: mov     rcx, rax
 * 000000018004E6DC: call    sub_1800D4C70
 * 000000018004E6E1: mov     cs:byte_18021FE94, al
 * 000000018004E6E7: lea     rcx, [rbp+9E10h+var_51C0]; void *
 * 000000018004E6EE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E6F3: nop
 * 000000018004E6F4: lea     rcx, [rbp+9E10h+var_51A0]; void *
 * 000000018004E6FB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E700: nop
 * 000000018004E701: lea     rcx, dword_18021FE98
 * 000000018004E708: call    _Init_thread_footer
 * 000000018004E70D: mov     rax, [rdi+rbx*8]
 * 000000018004E711: mov     eax, [r15+rax]
 * 000000018004E715: cmp     cs:dword_18021FEA0, eax
 * 000000018004E71B: jle     loc_18004E804
 * 000000018004E721: lea     rcx, dword_18021FEA0
 * 000000018004E728: call    _Init_thread_header
 * 000000018004E72D: cmp     cs:dword_18021FEA0, r14d
 * 000000018004E734: jnz     loc_18004E804
 * 000000018004E73A: lea     rax, unk_18017DA60
 * 000000018004E741: mov     qword ptr [rbp+9E10h+var_99A0], rax
 * 000000018004E748: lea     rax, unk_18018107C
 * 000000018004E74F: mov     qword ptr [rbp+9E10h+var_99A0+8], rax
 * 000000018004E756: movups  xmm0, [rbp+9E10h+var_99A0]
 * 000000018004E75D: movups  [rbp+9E10h+var_7FB0], xmm0
 * 000000018004E764: mov     dword ptr [rbp+9E10h+var_7FA0], 5
 * 000000018004E76E: mov     dword ptr [rbp+9E10h+var_7FA0+4], esi
 * 000000018004E774: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004E779: movups  xmm0, [rbp+9E10h+var_7FA0]
 * 000000018004E780: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004E785: call    sub_1800496D0
 * 000000018004E78A: mov     r8, rax
 * 000000018004E78D: mov     r9d, r12d
 * 000000018004E790: mov     edx, 116h
 * 000000018004E795: lea     rcx, [rbp+9E10h+var_5140]; Src
 * 000000018004E79C: call    sub_1800D4B98
 * 000000018004E7A1: nop
 * 000000018004E7A2: mov     r8, rax
 * 000000018004E7A5: mov     rdx, r13
 * 000000018004E7A8: lea     rcx, [rbp+9E10h+var_5160]
 * 000000018004E7AF: call    sub_1800494AC
 * 000000018004E7B4: nop
 * 000000018004E7B5: lea     r8, aPixel; "/Pixel"
 * 000000018004E7BC: mov     rdx, rax
 * 000000018004E7BF: lea     rcx, [rbp+9E10h+var_5180]
 * 000000018004E7C6: call    sub_180031AE8
 * 000000018004E7CB: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004E7D0: mov     rcx, rax
 * 000000018004E7D3: call    sub_1800D4C70
 * 000000018004E7D8: mov     cs:byte_18021FE9C, al
 * 000000018004E7DE: lea     rcx, [rbp+9E10h+var_5160]; void *
 * 000000018004E7E5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E7EA: nop
 * 000000018004E7EB: lea     rcx, [rbp+9E10h+var_5140]; void *
 * 000000018004E7F2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E7F7: nop
 * 000000018004E7F8: lea     rcx, dword_18021FEA0
 * 000000018004E7FF: call    _Init_thread_footer
 * 000000018004E804: mov     rax, [rdi+rbx*8]
 * 000000018004E808: mov     eax, [r15+rax]
 * 000000018004E80C: cmp     cs:dword_18021FEA8, eax
 * 000000018004E812: jle     loc_18004E8FB
 * 000000018004E818: lea     rcx, dword_18021FEA8
 * 000000018004E81F: call    _Init_thread_header
 * 000000018004E824: cmp     cs:dword_18021FEA8, r14d
 * 000000018004E82B: jnz     loc_18004E8FB
 * 000000018004E831: lea     rax, unk_180181080
 * 000000018004E838: mov     qword ptr [rbp+9E10h+var_9990], rax
 * 000000018004E83F: lea     rax, unk_180187B3C
 * 000000018004E846: mov     qword ptr [rbp+9E10h+var_9990+8], rax
 * 000000018004E84D: movups  xmm0, [rbp+9E10h+var_9990]
 * 000000018004E854: movups  [rbp+9E10h+var_7F90], xmm0
 * 000000018004E85B: mov     dword ptr [rbp+9E10h+var_7F80], 5
 * 000000018004E865: mov     dword ptr [rbp+9E10h+var_7F80+4], esi
 * 000000018004E86B: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004E870: movups  xmm0, [rbp+9E10h+var_7F80]
 * 000000018004E877: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004E87C: call    sub_1800496D0
 * 000000018004E881: mov     r8, rax
 * 000000018004E884: mov     r9d, r12d
 * 000000018004E887: mov     edx, 118h
 * 000000018004E88C: lea     rcx, [rbp+9E10h+var_50E0]; Src
 * 000000018004E893: call    sub_1800D4B98
 * 000000018004E898: nop
 * 000000018004E899: mov     r8, rax
 * 000000018004E89C: mov     rdx, r13
 * 000000018004E89F: lea     rcx, [rbp+9E10h+var_5100]
 * 000000018004E8A6: call    sub_1800494AC
 * 000000018004E8AB: nop
 * 000000018004E8AC: lea     r8, aPixel; "/Pixel"
 * 000000018004E8B3: mov     rdx, rax
 * 000000018004E8B6: lea     rcx, [rbp+9E10h+var_5120]
 * 000000018004E8BD: call    sub_180031AE8
 * 000000018004E8C2: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004E8C7: mov     rcx, rax
 * 000000018004E8CA: call    sub_1800D4C70
 * 000000018004E8CF: mov     cs:byte_18021FEA4, al
 * 000000018004E8D5: lea     rcx, [rbp+9E10h+var_5100]; void *
 * 000000018004E8DC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E8E1: nop
 * 000000018004E8E2: lea     rcx, [rbp+9E10h+var_50E0]; void *
 * 000000018004E8E9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E8EE: nop
 * 000000018004E8EF: lea     rcx, dword_18021FEA8
 * 000000018004E8F6: call    _Init_thread_footer
 * 000000018004E8FB: mov     rax, [rdi+rbx*8]
 * 000000018004E8FF: mov     eax, [r15+rax]
 * 000000018004E903: cmp     cs:dword_18021FEB0, eax
 * 000000018004E909: jle     loc_18004E9F2
 * 000000018004E90F: lea     rcx, dword_18021FEB0
 * 000000018004E916: call    _Init_thread_header
 * 000000018004E91B: cmp     cs:dword_18021FEB0, r14d
 * 000000018004E922: jnz     loc_18004E9F2
 * 000000018004E928: lea     rax, unk_180181080
 * 000000018004E92F: mov     qword ptr [rbp+9E10h+var_9980], rax
 * 000000018004E936: lea     rax, unk_180187B3C
 * 000000018004E93D: mov     qword ptr [rbp+9E10h+var_9980+8], rax
 * 000000018004E944: movups  xmm0, [rbp+9E10h+var_9980]
 * 000000018004E94B: movups  [rbp+9E10h+var_7F70], xmm0
 * 000000018004E952: mov     dword ptr [rbp+9E10h+var_7F60], 5
 * 000000018004E95C: mov     dword ptr [rbp+9E10h+var_7F60+4], esi
 * 000000018004E962: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004E967: movups  xmm0, [rbp+9E10h+var_7F60]
 * 000000018004E96E: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004E973: call    sub_1800496D0
 * 000000018004E978: mov     r8, rax
 * 000000018004E97B: mov     r9d, r12d
 * 000000018004E97E: mov     edx, 11Ah
 * 000000018004E983: lea     rcx, [rbp+9E10h+var_5080]; Src
 * 000000018004E98A: call    sub_1800D4B98
 * 000000018004E98F: nop
 * 000000018004E990: mov     r8, rax
 * 000000018004E993: mov     rdx, r13
 * 000000018004E996: lea     rcx, [rbp+9E10h+var_50A0]
 * 000000018004E99D: call    sub_1800494AC
 * 000000018004E9A2: nop
 * 000000018004E9A3: lea     r8, aPixel; "/Pixel"
 * 000000018004E9AA: mov     rdx, rax
 * 000000018004E9AD: lea     rcx, [rbp+9E10h+var_50C0]
 * 000000018004E9B4: call    sub_180031AE8
 * 000000018004E9B9: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004E9BE: mov     rcx, rax
 * 000000018004E9C1: call    sub_1800D4C70
 * 000000018004E9C6: mov     cs:byte_18021FEAC, al
 * 000000018004E9CC: lea     rcx, [rbp+9E10h+var_50A0]; void *
 * 000000018004E9D3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E9D8: nop
 * 000000018004E9D9: lea     rcx, [rbp+9E10h+var_5080]; void *
 * 000000018004E9E0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004E9E5: nop
 * 000000018004E9E6: lea     rcx, dword_18021FEB0
 * 000000018004E9ED: call    _Init_thread_footer
 * 000000018004E9F2: mov     rax, [rdi+rbx*8]
 * 000000018004E9F6: mov     eax, [r15+rax]
 * 000000018004E9FA: cmp     cs:dword_18021FEB8, eax
 * 000000018004EA00: jle     loc_18004EAE9
 * 000000018004EA06: lea     rcx, dword_18021FEB8
 * 000000018004EA0D: call    _Init_thread_header
 * 000000018004EA12: cmp     cs:dword_18021FEB8, r14d
 * 000000018004EA19: jnz     loc_18004EAE9
 * 000000018004EA1F: lea     rax, unk_180166C80
 * 000000018004EA26: mov     qword ptr [rbp+9E10h+var_9970], rax
 * 000000018004EA2D: lea     rax, unk_18016D3AC
 * 000000018004EA34: mov     qword ptr [rbp+9E10h+var_9970+8], rax
 * 000000018004EA3B: movups  xmm0, [rbp+9E10h+var_9970]
 * 000000018004EA42: movups  [rbp+9E10h+var_7F50], xmm0
 * 000000018004EA49: mov     dword ptr [rbp+9E10h+var_7F40], 5
 * 000000018004EA53: mov     dword ptr [rbp+9E10h+var_7F40+4], esi
 * 000000018004EA59: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004EA5E: movups  xmm0, [rbp+9E10h+var_7F40]
 * 000000018004EA65: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004EA6A: call    sub_1800496D0
 * 000000018004EA6F: mov     r8, rax
 * 000000018004EA72: mov     r9d, r12d
 * 000000018004EA75: mov     edx, 120h
 * 000000018004EA7A: lea     rcx, [rbp+9E10h+var_5020]; Src
 * 000000018004EA81: call    sub_1800D4B98
 * 000000018004EA86: nop
 * 000000018004EA87: mov     r8, rax
 * 000000018004EA8A: mov     rdx, r13
 * 000000018004EA8D: lea     rcx, [rbp+9E10h+var_5040]
 * 000000018004EA94: call    sub_1800494AC
 * 000000018004EA99: nop
 * 000000018004EA9A: lea     r8, aPixel; "/Pixel"
 * 000000018004EAA1: mov     rdx, rax
 * 000000018004EAA4: lea     rcx, [rbp+9E10h+var_5060]
 * 000000018004EAAB: call    sub_180031AE8
 * 000000018004EAB0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004EAB5: mov     rcx, rax
 * 000000018004EAB8: call    sub_1800D4C70
 * 000000018004EABD: mov     cs:byte_18021FEB4, al
 * 000000018004EAC3: lea     rcx, [rbp+9E10h+var_5040]; void *
 * 000000018004EACA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EACF: nop
 * 000000018004EAD0: lea     rcx, [rbp+9E10h+var_5020]; void *
 * 000000018004EAD7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EADC: nop
 * 000000018004EADD: lea     rcx, dword_18021FEB8
 * 000000018004EAE4: call    _Init_thread_footer
 * 000000018004EAE9: mov     rax, [rdi+rbx*8]
 * 000000018004EAED: mov     eax, [r15+rax]
 * 000000018004EAF1: cmp     cs:dword_18021FEC0, eax
 * 000000018004EAF7: jle     loc_18004EBE0
 * 000000018004EAFD: lea     rcx, dword_18021FEC0
 * 000000018004EB04: call    _Init_thread_header
 * 000000018004EB09: cmp     cs:dword_18021FEC0, r14d
 * 000000018004EB10: jnz     loc_18004EBE0
 * 000000018004EB16: lea     rax, unk_180166C80
 * 000000018004EB1D: mov     qword ptr [rbp+9E10h+var_9960], rax
 * 000000018004EB24: lea     rax, unk_18016D3AC
 * 000000018004EB2B: mov     qword ptr [rbp+9E10h+var_9960+8], rax
 * 000000018004EB32: movups  xmm0, [rbp+9E10h+var_9960]
 * 000000018004EB39: movups  [rbp+9E10h+var_7F30], xmm0
 * 000000018004EB40: mov     dword ptr [rbp+9E10h+var_7F20], 5
 * 000000018004EB4A: mov     dword ptr [rbp+9E10h+var_7F20+4], esi
 * 000000018004EB50: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004EB55: movups  xmm0, [rbp+9E10h+var_7F20]
 * 000000018004EB5C: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004EB61: call    sub_1800496D0
 * 000000018004EB66: mov     r8, rax
 * 000000018004EB69: mov     r9d, r12d
 * 000000018004EB6C: mov     edx, 122h
 * 000000018004EB71: lea     rcx, [rbp+9E10h+var_4FC0]; Src
 * 000000018004EB78: call    sub_1800D4B98
 * 000000018004EB7D: nop
 * 000000018004EB7E: mov     r8, rax
 * 000000018004EB81: mov     rdx, r13
 * 000000018004EB84: lea     rcx, [rbp+9E10h+var_4FE0]
 * 000000018004EB8B: call    sub_1800494AC
 * 000000018004EB90: nop
 * 000000018004EB91: lea     r8, aPixel; "/Pixel"
 * 000000018004EB98: mov     rdx, rax
 * 000000018004EB9B: lea     rcx, [rbp+9E10h+var_5000]
 * 000000018004EBA2: call    sub_180031AE8
 * 000000018004EBA7: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004EBAC: mov     rcx, rax
 * 000000018004EBAF: call    sub_1800D4C70
 * 000000018004EBB4: mov     cs:byte_18021FEBC, al
 * 000000018004EBBA: lea     rcx, [rbp+9E10h+var_4FE0]; void *
 * 000000018004EBC1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EBC6: nop
 * 000000018004EBC7: lea     rcx, [rbp+9E10h+var_4FC0]; void *
 * 000000018004EBCE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EBD3: nop
 * 000000018004EBD4: lea     rcx, dword_18021FEC0
 * 000000018004EBDB: call    _Init_thread_footer
 * 000000018004EBE0: mov     rax, [rdi+rbx*8]
 * 000000018004EBE4: mov     eax, [r15+rax]
 * 000000018004EBE8: cmp     cs:dword_18021FEC8, eax
 * 000000018004EBEE: jle     loc_18004ECD7
 * 000000018004EBF4: lea     rcx, dword_18021FEC8
 * 000000018004EBFB: call    _Init_thread_header
 * 000000018004EC00: cmp     cs:dword_18021FEC8, r14d
 * 000000018004EC07: jnz     loc_18004ECD7
 * 000000018004EC0D: lea     rax, unk_180170890
 * 000000018004EC14: mov     qword ptr [rbp+9E10h+var_9950], rax
 * 000000018004EC1B: lea     rax, unk_18017714C
 * 000000018004EC22: mov     qword ptr [rbp+9E10h+var_9950+8], rax
 * 000000018004EC29: movups  xmm0, [rbp+9E10h+var_9950]
 * 000000018004EC30: movups  [rbp+9E10h+var_7F10], xmm0
 * 000000018004EC37: mov     dword ptr [rbp+9E10h+var_7F00], 5
 * 000000018004EC41: mov     dword ptr [rbp+9E10h+var_7F00+4], esi
 * 000000018004EC47: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004EC4C: movups  xmm0, [rbp+9E10h+var_7F00]
 * 000000018004EC53: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004EC58: call    sub_1800496D0
 * 000000018004EC5D: mov     r8, rax
 * 000000018004EC60: mov     r9d, r12d
 * 000000018004EC63: mov     edx, 128h
 * 000000018004EC68: lea     rcx, [rbp+9E10h+var_4F60]; Src
 * 000000018004EC6F: call    sub_1800D4B98
 * 000000018004EC74: nop
 * 000000018004EC75: mov     r8, rax
 * 000000018004EC78: mov     rdx, r13
 * 000000018004EC7B: lea     rcx, [rbp+9E10h+var_4F80]
 * 000000018004EC82: call    sub_1800494AC
 * 000000018004EC87: nop
 * 000000018004EC88: lea     r8, aPixel; "/Pixel"
 * 000000018004EC8F: mov     rdx, rax
 * 000000018004EC92: lea     rcx, [rbp+9E10h+var_4FA0]
 * 000000018004EC99: call    sub_180031AE8
 * 000000018004EC9E: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004ECA3: mov     rcx, rax
 * 000000018004ECA6: call    sub_1800D4C70
 * 000000018004ECAB: mov     cs:byte_18021FEC4, al
 * 000000018004ECB1: lea     rcx, [rbp+9E10h+var_4F80]; void *
 * 000000018004ECB8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004ECBD: nop
 * 000000018004ECBE: lea     rcx, [rbp+9E10h+var_4F60]; void *
 * 000000018004ECC5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004ECCA: nop
 * 000000018004ECCB: lea     rcx, dword_18021FEC8
 * 000000018004ECD2: call    _Init_thread_footer
 * 000000018004ECD7: mov     rax, [rdi+rbx*8]
 * 000000018004ECDB: mov     eax, [r15+rax]
 * 000000018004ECDF: cmp     cs:dword_18021FED0, eax
 * 000000018004ECE5: jle     loc_18004EDCE
 * 000000018004ECEB: lea     rcx, dword_18021FED0
 * 000000018004ECF2: call    _Init_thread_header
 * 000000018004ECF7: cmp     cs:dword_18021FED0, r14d
 * 000000018004ECFE: jnz     loc_18004EDCE
 * 000000018004ED04: lea     rax, unk_180170890
 * 000000018004ED0B: mov     qword ptr [rbp+9E10h+var_9940], rax
 * 000000018004ED12: lea     rax, unk_18017714C
 * 000000018004ED19: mov     qword ptr [rbp+9E10h+var_9940+8], rax
 * 000000018004ED20: movups  xmm0, [rbp+9E10h+var_9940]
 * 000000018004ED27: movups  [rbp+9E10h+var_7EF0], xmm0
 * 000000018004ED2E: mov     dword ptr [rbp+9E10h+var_7EE0], 5
 * 000000018004ED38: mov     dword ptr [rbp+9E10h+var_7EE0+4], esi
 * 000000018004ED3E: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004ED43: movups  xmm0, [rbp+9E10h+var_7EE0]
 * 000000018004ED4A: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004ED4F: call    sub_1800496D0
 * 000000018004ED54: mov     r8, rax
 * 000000018004ED57: mov     r9d, r12d
 * 000000018004ED5A: mov     edx, 12Ah
 * 000000018004ED5F: lea     rcx, [rbp+9E10h+var_4F00]; Src
 * 000000018004ED66: call    sub_1800D4B98
 * 000000018004ED6B: nop
 * 000000018004ED6C: mov     r8, rax
 * 000000018004ED6F: mov     rdx, r13
 * 000000018004ED72: lea     rcx, [rbp+9E10h+var_4F20]
 * 000000018004ED79: call    sub_1800494AC
 * 000000018004ED7E: nop
 * 000000018004ED7F: lea     r8, aPixel; "/Pixel"
 * 000000018004ED86: mov     rdx, rax
 * 000000018004ED89: lea     rcx, [rbp+9E10h+var_4F40]
 * 000000018004ED90: call    sub_180031AE8
 * 000000018004ED95: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004ED9A: mov     rcx, rax
 * 000000018004ED9D: call    sub_1800D4C70
 * 000000018004EDA2: mov     cs:byte_18021FECC, al
 * 000000018004EDA8: lea     rcx, [rbp+9E10h+var_4F20]; void *
 * 000000018004EDAF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EDB4: nop
 * 000000018004EDB5: lea     rcx, [rbp+9E10h+var_4F00]; void *
 * 000000018004EDBC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EDC1: nop
 * 000000018004EDC2: lea     rcx, dword_18021FED0
 * 000000018004EDC9: call    _Init_thread_footer
 * 000000018004EDCE: mov     rax, [rdi+rbx*8]
 * 000000018004EDD2: mov     eax, [r15+rax]
 * 000000018004EDD6: cmp     cs:dword_18021FED8, eax
 * 000000018004EDDC: jle     loc_18004EEC5
 * 000000018004EDE2: lea     rcx, dword_18021FED8
 * 000000018004EDE9: call    _Init_thread_header
 * 000000018004EDEE: cmp     cs:dword_18021FED8, r14d
 * 000000018004EDF5: jnz     loc_18004EEC5
 * 000000018004EDFB: lea     rax, unk_180177150
 * 000000018004EE02: mov     qword ptr [rbp+9E10h+var_9930], rax
 * 000000018004EE09: lea     rax, unk_18017DA58
 * 000000018004EE10: mov     qword ptr [rbp+9E10h+var_9930+8], rax
 * 000000018004EE17: movups  xmm0, [rbp+9E10h+var_9930]
 * 000000018004EE1E: movups  [rbp+9E10h+var_7ED0], xmm0
 * 000000018004EE25: mov     dword ptr [rbp+9E10h+var_7EC0], 5
 * 000000018004EE2F: mov     dword ptr [rbp+9E10h+var_7EC0+4], esi
 * 000000018004EE35: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004EE3A: movups  xmm0, [rbp+9E10h+var_7EC0]
 * 000000018004EE41: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004EE46: call    sub_1800496D0
 * 000000018004EE4B: mov     r8, rax
 * 000000018004EE4E: mov     r9d, r12d
 * 000000018004EE51: mov     edx, 130h
 * 000000018004EE56: lea     rcx, [rbp+9E10h+var_4EA0]; Src
 * 000000018004EE5D: call    sub_1800D4B98
 * 000000018004EE62: nop
 * 000000018004EE63: mov     r8, rax
 * 000000018004EE66: mov     rdx, r13
 * 000000018004EE69: lea     rcx, [rbp+9E10h+var_4EC0]
 * 000000018004EE70: call    sub_1800494AC
 * 000000018004EE75: nop
 * 000000018004EE76: lea     r8, aPixel; "/Pixel"
 * 000000018004EE7D: mov     rdx, rax
 * 000000018004EE80: lea     rcx, [rbp+9E10h+var_4EE0]
 * 000000018004EE87: call    sub_180031AE8
 * 000000018004EE8C: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004EE91: mov     rcx, rax
 * 000000018004EE94: call    sub_1800D4C70
 * 000000018004EE99: mov     cs:byte_18021FED4, al
 * 000000018004EE9F: lea     rcx, [rbp+9E10h+var_4EC0]; void *
 * 000000018004EEA6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EEAB: nop
 * 000000018004EEAC: lea     rcx, [rbp+9E10h+var_4EA0]; void *
 * 000000018004EEB3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EEB8: nop
 * 000000018004EEB9: lea     rcx, dword_18021FED8
 * 000000018004EEC0: call    _Init_thread_footer
 * 000000018004EEC5: mov     rax, [rdi+rbx*8]
 * 000000018004EEC9: mov     eax, [r15+rax]
 * 000000018004EECD: cmp     cs:dword_18021FEE0, eax
 * 000000018004EED3: jle     loc_18004EFBC
 * 000000018004EED9: lea     rcx, dword_18021FEE0
 * 000000018004EEE0: call    _Init_thread_header
 * 000000018004EEE5: cmp     cs:dword_18021FEE0, r14d
 * 000000018004EEEC: jnz     loc_18004EFBC
 * 000000018004EEF2: lea     rax, unk_180177150
 * 000000018004EEF9: mov     qword ptr [rbp+9E10h+var_9920], rax
 * 000000018004EF00: lea     rax, unk_18017DA58
 * 000000018004EF07: mov     qword ptr [rbp+9E10h+var_9920+8], rax
 * 000000018004EF0E: movups  xmm0, [rbp+9E10h+var_9920]
 * 000000018004EF15: movups  [rbp+9E10h+var_7EB0], xmm0
 * 000000018004EF1C: mov     dword ptr [rbp+9E10h+var_7EA0], 5
 * 000000018004EF26: mov     dword ptr [rbp+9E10h+var_7EA0+4], esi
 * 000000018004EF2C: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004EF31: movups  xmm0, [rbp+9E10h+var_7EA0]
 * 000000018004EF38: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004EF3D: call    sub_1800496D0
 * 000000018004EF42: mov     r8, rax
 * 000000018004EF45: mov     r9d, r12d
 * 000000018004EF48: mov     edx, 132h
 * 000000018004EF4D: lea     rcx, [rbp+9E10h+var_4E40]; Src
 * 000000018004EF54: call    sub_1800D4B98
 * 000000018004EF59: nop
 * 000000018004EF5A: mov     r8, rax
 * 000000018004EF5D: mov     rdx, r13
 * 000000018004EF60: lea     rcx, [rbp+9E10h+var_4E60]
 * 000000018004EF67: call    sub_1800494AC
 * 000000018004EF6C: nop
 * 000000018004EF6D: lea     r8, aPixel; "/Pixel"
 * 000000018004EF74: mov     rdx, rax
 * 000000018004EF77: lea     rcx, [rbp+9E10h+var_4E80]
 * 000000018004EF7E: call    sub_180031AE8
 * 000000018004EF83: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004EF88: mov     rcx, rax
 * 000000018004EF8B: call    sub_1800D4C70
 * 000000018004EF90: mov     cs:byte_18021FEDC, al
 * 000000018004EF96: lea     rcx, [rbp+9E10h+var_4E60]; void *
 * 000000018004EF9D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EFA2: nop
 * 000000018004EFA3: lea     rcx, [rbp+9E10h+var_4E40]; void *
 * 000000018004EFAA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004EFAF: nop
 * 000000018004EFB0: lea     rcx, dword_18021FEE0
 * 000000018004EFB7: call    _Init_thread_footer
 * 000000018004EFBC: mov     rax, [rdi+rbx*8]
 * 000000018004EFC0: mov     eax, [r15+rax]
 * 000000018004EFC4: cmp     cs:dword_18021FEE8, eax
 * 000000018004EFCA: jle     loc_18004F0B3
 * 000000018004EFD0: lea     rcx, dword_18021FEE8
 * 000000018004EFD7: call    _Init_thread_header
 * 000000018004EFDC: cmp     cs:dword_18021FEE8, r14d
 * 000000018004EFE3: jnz     loc_18004F0B3
 * 000000018004EFE9: lea     rax, unk_180181080
 * 000000018004EFF0: mov     qword ptr [rbp+9E10h+var_9910], rax
 * 000000018004EFF7: lea     rax, unk_180187B3C
 * 000000018004EFFE: mov     qword ptr [rbp+9E10h+var_9910+8], rax
 * 000000018004F005: movups  xmm0, [rbp+9E10h+var_9910]
 * 000000018004F00C: movups  [rbp+9E10h+var_7E90], xmm0
 * 000000018004F013: mov     dword ptr [rbp+9E10h+var_7E80], 5
 * 000000018004F01D: mov     dword ptr [rbp+9E10h+var_7E80+4], esi
 * 000000018004F023: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004F028: movups  xmm0, [rbp+9E10h+var_7E80]
 * 000000018004F02F: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004F034: call    sub_1800496D0
 * 000000018004F039: mov     r8, rax
 * 000000018004F03C: mov     r9d, r12d
 * 000000018004F03F: mov     edx, 138h
 * 000000018004F044: lea     rcx, [rbp+9E10h+var_4DE0]; Src
 * 000000018004F04B: call    sub_1800D4B98
 * 000000018004F050: nop
 * 000000018004F051: mov     r8, rax
 * 000000018004F054: mov     rdx, r13
 * 000000018004F057: lea     rcx, [rbp+9E10h+var_4E00]
 * 000000018004F05E: call    sub_1800494AC
 * 000000018004F063: nop
 * 000000018004F064: lea     r8, aPixel; "/Pixel"
 * 000000018004F06B: mov     rdx, rax
 * 000000018004F06E: lea     rcx, [rbp+9E10h+var_4E20]
 * 000000018004F075: call    sub_180031AE8
 * 000000018004F07A: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004F07F: mov     rcx, rax
 * 000000018004F082: call    sub_1800D4C70
 * 000000018004F087: mov     cs:byte_18021FEE4, al
 * 000000018004F08D: lea     rcx, [rbp+9E10h+var_4E00]; void *
 * 000000018004F094: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F099: nop
 * 000000018004F09A: lea     rcx, [rbp+9E10h+var_4DE0]; void *
 * 000000018004F0A1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F0A6: nop
 * 000000018004F0A7: lea     rcx, dword_18021FEE8
 * 000000018004F0AE: call    _Init_thread_footer
 * 000000018004F0B3: mov     rax, [rdi+rbx*8]
 * 000000018004F0B7: mov     eax, [r15+rax]
 * 000000018004F0BB: cmp     cs:dword_18021FEF0, eax
 * 000000018004F0C1: jle     loc_18004F1AA
 * 000000018004F0C7: lea     rcx, dword_18021FEF0
 * 000000018004F0CE: call    _Init_thread_header
 * 000000018004F0D3: cmp     cs:dword_18021FEF0, r14d
 * 000000018004F0DA: jnz     loc_18004F1AA
 * 000000018004F0E0: lea     rax, unk_180181080
 * 000000018004F0E7: mov     qword ptr [rbp+9E10h+var_9900], rax
 * 000000018004F0EE: lea     rax, unk_180187B3C
 * 000000018004F0F5: mov     qword ptr [rbp+9E10h+var_9900+8], rax
 * 000000018004F0FC: movups  xmm0, [rbp+9E10h+var_9900]
 * 000000018004F103: movups  [rbp+9E10h+var_7E70], xmm0
 * 000000018004F10A: mov     dword ptr [rbp+9E10h+var_7E60], 5
 * 000000018004F114: mov     dword ptr [rbp+9E10h+var_7E60+4], esi
 * 000000018004F11A: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004F11F: movups  xmm0, [rbp+9E10h+var_7E60]
 * 000000018004F126: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004F12B: call    sub_1800496D0
 * 000000018004F130: mov     r8, rax
 * 000000018004F133: mov     r9d, r12d
 * 000000018004F136: mov     edx, 13Ah
 * 000000018004F13B: lea     rcx, [rbp+9E10h+var_4D80]; Src
 * 000000018004F142: call    sub_1800D4B98
 * 000000018004F147: nop
 * 000000018004F148: mov     r8, rax
 * 000000018004F14B: mov     rdx, r13
 * 000000018004F14E: lea     rcx, [rbp+9E10h+var_4DA0]
 * 000000018004F155: call    sub_1800494AC
 * 000000018004F15A: nop
 * 000000018004F15B: lea     r8, aPixel; "/Pixel"
 * 000000018004F162: mov     rdx, rax
 * 000000018004F165: lea     rcx, [rbp+9E10h+var_4DC0]
 * 000000018004F16C: call    sub_180031AE8
 * 000000018004F171: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004F176: mov     rcx, rax
 * 000000018004F179: call    sub_1800D4C70
 * 000000018004F17E: mov     cs:byte_18021FEEC, al
 * 000000018004F184: lea     rcx, [rbp+9E10h+var_4DA0]; void *
 * 000000018004F18B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F190: nop
 * 000000018004F191: lea     rcx, [rbp+9E10h+var_4D80]; void *
 * 000000018004F198: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F19D: nop
 * 000000018004F19E: lea     rcx, dword_18021FEF0
 * 000000018004F1A5: call    _Init_thread_footer
 * 000000018004F1AA: mov     rax, [rdi+rbx*8]
 * 000000018004F1AE: mov     eax, [r15+rax]
 * 000000018004F1B2: cmp     cs:dword_18021FEF8, eax
 * 000000018004F1B8: jle     loc_18004F2A1
 * 000000018004F1BE: lea     rcx, dword_18021FEF8
 * 000000018004F1C5: call    _Init_thread_header
 * 000000018004F1CA: cmp     cs:dword_18021FEF8, r14d
 * 000000018004F1D1: jnz     loc_18004F2A1
 * 000000018004F1D7: lea     rax, unk_180166C80
 * 000000018004F1DE: mov     qword ptr [rbp+9E10h+var_98F0], rax
 * 000000018004F1E5: lea     rax, unk_18016D3AC
 * 000000018004F1EC: mov     qword ptr [rbp+9E10h+var_98F0+8], rax
 * 000000018004F1F3: movups  xmm0, [rbp+9E10h+var_98F0]
 * 000000018004F1FA: movups  [rbp+9E10h+var_7E50], xmm0
 * 000000018004F201: mov     dword ptr [rbp+9E10h+var_7E40], 5
 * 000000018004F20B: mov     dword ptr [rbp+9E10h+var_7E40+4], esi
 * 000000018004F211: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004F216: movups  xmm0, [rbp+9E10h+var_7E40]
 * 000000018004F21D: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004F222: call    sub_1800496D0
 * 000000018004F227: mov     r8, rax
 * 000000018004F22A: mov     r9d, r12d
 * 000000018004F22D: mov     edx, 140h
 * 000000018004F232: lea     rcx, [rbp+9E10h+var_4D20]; Src
 * 000000018004F239: call    sub_1800D4B98
 * 000000018004F23E: nop
 * 000000018004F23F: mov     r8, rax
 * 000000018004F242: mov     rdx, r13
 * 000000018004F245: lea     rcx, [rbp+9E10h+var_4D40]
 * 000000018004F24C: call    sub_1800494AC
 * 000000018004F251: nop
 * 000000018004F252: lea     r8, aPixel; "/Pixel"
 * 000000018004F259: mov     rdx, rax
 * 000000018004F25C: lea     rcx, [rbp+9E10h+var_4D60]
 * 000000018004F263: call    sub_180031AE8
 * 000000018004F268: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004F26D: mov     rcx, rax
 * 000000018004F270: call    sub_1800D4C70
 * 000000018004F275: mov     cs:byte_18021FEF4, al
 * 000000018004F27B: lea     rcx, [rbp+9E10h+var_4D40]; void *
 * 000000018004F282: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F287: nop
 * 000000018004F288: lea     rcx, [rbp+9E10h+var_4D20]; void *
 * 000000018004F28F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F294: nop
 * 000000018004F295: lea     rcx, dword_18021FEF8
 * 000000018004F29C: call    _Init_thread_footer
 * 000000018004F2A1: mov     rax, [rdi+rbx*8]
 * 000000018004F2A5: mov     eax, [r15+rax]
 * 000000018004F2A9: cmp     cs:dword_18021FF00, eax
 * 000000018004F2AF: jle     loc_18004F398
 * 000000018004F2B5: lea     rcx, dword_18021FF00
 * 000000018004F2BC: call    _Init_thread_header
 * 000000018004F2C1: cmp     cs:dword_18021FF00, r14d
 * 000000018004F2C8: jnz     loc_18004F398
 * 000000018004F2CE: lea     rax, unk_180166C80
 * 000000018004F2D5: mov     qword ptr [rbp+9E10h+var_98E0], rax
 * 000000018004F2DC: lea     rax, unk_18016D3AC
 * 000000018004F2E3: mov     qword ptr [rbp+9E10h+var_98E0+8], rax
 * 000000018004F2EA: movups  xmm0, [rbp+9E10h+var_98E0]
 * 000000018004F2F1: movups  [rbp+9E10h+var_7E30], xmm0
 * 000000018004F2F8: mov     dword ptr [rbp+9E10h+var_7E20], 5
 * 000000018004F302: mov     dword ptr [rbp+9E10h+var_7E20+4], esi
 * 000000018004F308: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004F30D: movups  xmm0, [rbp+9E10h+var_7E20]
 * 000000018004F314: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004F319: call    sub_1800496D0
 * 000000018004F31E: mov     r8, rax
 * 000000018004F321: mov     r9d, r12d
 * 000000018004F324: mov     edx, 142h
 * 000000018004F329: lea     rcx, [rbp+9E10h+var_4CC0]; Src
 * 000000018004F330: call    sub_1800D4B98
 * 000000018004F335: nop
 * 000000018004F336: mov     r8, rax
 * 000000018004F339: mov     rdx, r13
 * 000000018004F33C: lea     rcx, [rbp+9E10h+var_4CE0]
 * 000000018004F343: call    sub_1800494AC
 * 000000018004F348: nop
 * 000000018004F349: lea     r8, aPixel; "/Pixel"
 * 000000018004F350: mov     rdx, rax
 * 000000018004F353: lea     rcx, [rbp+9E10h+var_4D00]
 * 000000018004F35A: call    sub_180031AE8
 * 000000018004F35F: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004F364: mov     rcx, rax
 * 000000018004F367: call    sub_1800D4C70
 * 000000018004F36C: mov     cs:byte_18021FEFC, al
 * 000000018004F372: lea     rcx, [rbp+9E10h+var_4CE0]; void *
 * 000000018004F379: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F37E: nop
 * 000000018004F37F: lea     rcx, [rbp+9E10h+var_4CC0]; void *
 * 000000018004F386: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F38B: nop
 * 000000018004F38C: lea     rcx, dword_18021FF00
 * 000000018004F393: call    _Init_thread_footer
 * 000000018004F398: mov     rax, [rdi+rbx*8]
 * 000000018004F39C: mov     eax, [r15+rax]
 * 000000018004F3A0: cmp     cs:dword_18021FF08, eax
 * 000000018004F3A6: jle     loc_18004F48F
 * 000000018004F3AC: lea     rcx, dword_18021FF08
 * 000000018004F3B3: call    _Init_thread_header
 * 000000018004F3B8: cmp     cs:dword_18021FF08, r14d
 * 000000018004F3BF: jnz     loc_18004F48F
 * 000000018004F3C5: lea     rax, unk_180170890
 * 000000018004F3CC: mov     qword ptr [rbp+9E10h+var_98D0], rax
 * 000000018004F3D3: lea     rax, unk_18017714C
 * 000000018004F3DA: mov     qword ptr [rbp+9E10h+var_98D0+8], rax
 * 000000018004F3E1: movups  xmm0, [rbp+9E10h+var_98D0]
 * 000000018004F3E8: movups  [rbp+9E10h+var_7E10], xmm0
 * 000000018004F3EF: mov     dword ptr [rbp+9E10h+var_7E00], 5
 * 000000018004F3F9: mov     dword ptr [rbp+9E10h+var_7E00+4], esi
 * 000000018004F3FF: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004F404: movups  xmm0, [rbp+9E10h+var_7E00]
 * 000000018004F40B: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004F410: call    sub_1800496D0
 * 000000018004F415: mov     r8, rax
 * 000000018004F418: mov     r9d, r12d
 * 000000018004F41B: mov     edx, 148h
 * 000000018004F420: lea     rcx, [rbp+9E10h+var_4C60]; Src
 * 000000018004F427: call    sub_1800D4B98
 * 000000018004F42C: nop
 * 000000018004F42D: mov     r8, rax
 * 000000018004F430: mov     rdx, r13
 * 000000018004F433: lea     rcx, [rbp+9E10h+var_4C80]
 * 000000018004F43A: call    sub_1800494AC
 * 000000018004F43F: nop
 * 000000018004F440: lea     r8, aPixel; "/Pixel"
 * 000000018004F447: mov     rdx, rax
 * 000000018004F44A: lea     rcx, [rbp+9E10h+var_4CA0]
 * 000000018004F451: call    sub_180031AE8
 * 000000018004F456: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004F45B: mov     rcx, rax
 * 000000018004F45E: call    sub_1800D4C70
 * 000000018004F463: mov     cs:byte_18021FF04, al
 * 000000018004F469: lea     rcx, [rbp+9E10h+var_4C80]; void *
 * 000000018004F470: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F475: nop
 * 000000018004F476: lea     rcx, [rbp+9E10h+var_4C60]; void *
 * 000000018004F47D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F482: nop
 * 000000018004F483: lea     rcx, dword_18021FF08
 * 000000018004F48A: call    _Init_thread_footer
 * 000000018004F48F: mov     rax, [rdi+rbx*8]
 * 000000018004F493: mov     eax, [r15+rax]
 * 000000018004F497: cmp     cs:dword_18021FF10, eax
 * 000000018004F49D: jle     loc_18004F586
 * 000000018004F4A3: lea     rcx, dword_18021FF10
 * 000000018004F4AA: call    _Init_thread_header
 * 000000018004F4AF: cmp     cs:dword_18021FF10, r14d
 * 000000018004F4B6: jnz     loc_18004F586
 * 000000018004F4BC: lea     rax, unk_180170890
 * 000000018004F4C3: mov     qword ptr [rbp+9E10h+var_98C0], rax
 * 000000018004F4CA: lea     rax, unk_18017714C
 * 000000018004F4D1: mov     qword ptr [rbp+9E10h+var_98C0+8], rax
 * 000000018004F4D8: movups  xmm0, [rbp+9E10h+var_98C0]
 * 000000018004F4DF: movups  [rbp+9E10h+var_7DF0], xmm0
 * 000000018004F4E6: mov     dword ptr [rbp+9E10h+var_7DE0], 5
 * 000000018004F4F0: mov     dword ptr [rbp+9E10h+var_7DE0+4], esi
 * 000000018004F4F6: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004F4FB: movups  xmm0, [rbp+9E10h+var_7DE0]
 * 000000018004F502: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004F507: call    sub_1800496D0
 * 000000018004F50C: mov     r8, rax
 * 000000018004F50F: mov     r9d, r12d
 * 000000018004F512: mov     edx, 14Ah
 * 000000018004F517: lea     rcx, [rbp+9E10h+var_4C00]; Src
 * 000000018004F51E: call    sub_1800D4B98
 * 000000018004F523: nop
 * 000000018004F524: mov     r8, rax
 * 000000018004F527: mov     rdx, r13
 * 000000018004F52A: lea     rcx, [rbp+9E10h+var_4C20]
 * 000000018004F531: call    sub_1800494AC
 * 000000018004F536: nop
 * 000000018004F537: lea     r8, aPixel; "/Pixel"
 * 000000018004F53E: mov     rdx, rax
 * 000000018004F541: lea     rcx, [rbp+9E10h+var_4C40]
 * 000000018004F548: call    sub_180031AE8
 * 000000018004F54D: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004F552: mov     rcx, rax
 * 000000018004F555: call    sub_1800D4C70
 * 000000018004F55A: mov     cs:byte_18021FF0C, al
 * 000000018004F560: lea     rcx, [rbp+9E10h+var_4C20]; void *
 * 000000018004F567: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F56C: nop
 * 000000018004F56D: lea     rcx, [rbp+9E10h+var_4C00]; void *
 * 000000018004F574: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F579: nop
 * 000000018004F57A: lea     rcx, dword_18021FF10
 * 000000018004F581: call    _Init_thread_footer
 * 000000018004F586: mov     rax, [rdi+rbx*8]
 * 000000018004F58A: mov     eax, [r15+rax]
 * 000000018004F58E: cmp     cs:dword_18021FF18, eax
 * 000000018004F594: jle     loc_18004F67D
 * 000000018004F59A: lea     rcx, dword_18021FF18
 * 000000018004F5A1: call    _Init_thread_header
 * 000000018004F5A6: cmp     cs:dword_18021FF18, r14d
 * 000000018004F5AD: jnz     loc_18004F67D
 * 000000018004F5B3: lea     rax, unk_180177150
 * 000000018004F5BA: mov     qword ptr [rbp+9E10h+var_98B0], rax
 * 000000018004F5C1: lea     rax, unk_18017DA58
 * 000000018004F5C8: mov     qword ptr [rbp+9E10h+var_98B0+8], rax
 * 000000018004F5CF: movups  xmm0, [rbp+9E10h+var_98B0]
 * 000000018004F5D6: movups  [rbp+9E10h+var_7DD0], xmm0
 * 000000018004F5DD: mov     dword ptr [rbp+9E10h+var_7DC0], 5
 * 000000018004F5E7: mov     dword ptr [rbp+9E10h+var_7DC0+4], esi
 * 000000018004F5ED: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004F5F2: movups  xmm0, [rbp+9E10h+var_7DC0]
 * 000000018004F5F9: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004F5FE: call    sub_1800496D0
 * 000000018004F603: mov     r8, rax
 * 000000018004F606: mov     r9d, r12d
 * 000000018004F609: mov     edx, 150h
 * 000000018004F60E: lea     rcx, [rbp+9E10h+var_4BA0]; Src
 * 000000018004F615: call    sub_1800D4B98
 * 000000018004F61A: nop
 * 000000018004F61B: mov     r8, rax
 * 000000018004F61E: mov     rdx, r13
 * 000000018004F621: lea     rcx, [rbp+9E10h+var_4BC0]
 * 000000018004F628: call    sub_1800494AC
 * 000000018004F62D: nop
 * 000000018004F62E: lea     r8, aPixel; "/Pixel"
 * 000000018004F635: mov     rdx, rax
 * 000000018004F638: lea     rcx, [rbp+9E10h+var_4BE0]
 * 000000018004F63F: call    sub_180031AE8
 * 000000018004F644: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004F649: mov     rcx, rax
 * 000000018004F64C: call    sub_1800D4C70
 * 000000018004F651: mov     cs:byte_18021FF14, al
 * 000000018004F657: lea     rcx, [rbp+9E10h+var_4BC0]; void *
 * 000000018004F65E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F663: nop
 * 000000018004F664: lea     rcx, [rbp+9E10h+var_4BA0]; void *
 * 000000018004F66B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F670: nop
 * 000000018004F671: lea     rcx, dword_18021FF18
 * 000000018004F678: call    _Init_thread_footer
 * 000000018004F67D: mov     rax, [rdi+rbx*8]
 * 000000018004F681: mov     eax, [r15+rax]
 * 000000018004F685: cmp     cs:dword_18021FF20, eax
 * 000000018004F68B: jle     loc_18004F774
 * 000000018004F691: lea     rcx, dword_18021FF20
 * 000000018004F698: call    _Init_thread_header
 * 000000018004F69D: cmp     cs:dword_18021FF20, r14d
 * 000000018004F6A4: jnz     loc_18004F774
 * 000000018004F6AA: lea     rax, unk_180177150
 * 000000018004F6B1: mov     qword ptr [rbp+9E10h+var_98A0], rax
 * 000000018004F6B8: lea     rax, unk_18017DA58
 * 000000018004F6BF: mov     qword ptr [rbp+9E10h+var_98A0+8], rax
 * 000000018004F6C6: movups  xmm0, [rbp+9E10h+var_98A0]
 * 000000018004F6CD: movups  [rbp+9E10h+var_7DB0], xmm0
 * 000000018004F6D4: mov     dword ptr [rbp+9E10h+var_7DA0], 5
 * 000000018004F6DE: mov     dword ptr [rbp+9E10h+var_7DA0+4], esi
 * 000000018004F6E4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004F6E9: movups  xmm0, [rbp+9E10h+var_7DA0]
 * 000000018004F6F0: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004F6F5: call    sub_1800496D0
 * 000000018004F6FA: mov     r8, rax
 * 000000018004F6FD: mov     r9d, r12d
 * 000000018004F700: mov     edx, 152h
 * 000000018004F705: lea     rcx, [rbp+9E10h+var_4B40]; Src
 * 000000018004F70C: call    sub_1800D4B98
 * 000000018004F711: nop
 * 000000018004F712: mov     r8, rax
 * 000000018004F715: mov     rdx, r13
 * 000000018004F718: lea     rcx, [rbp+9E10h+var_4B60]
 * 000000018004F71F: call    sub_1800494AC
 * 000000018004F724: nop
 * 000000018004F725: lea     r8, aPixel; "/Pixel"
 * 000000018004F72C: mov     rdx, rax
 * 000000018004F72F: lea     rcx, [rbp+9E10h+var_4B80]
 * 000000018004F736: call    sub_180031AE8
 * 000000018004F73B: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004F740: mov     rcx, rax
 * 000000018004F743: call    sub_1800D4C70
 * 000000018004F748: mov     cs:byte_18021FF1C, al
 * 000000018004F74E: lea     rcx, [rbp+9E10h+var_4B60]; void *
 * 000000018004F755: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F75A: nop
 * 000000018004F75B: lea     rcx, [rbp+9E10h+var_4B40]; void *
 * 000000018004F762: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F767: nop
 * 000000018004F768: lea     rcx, dword_18021FF20
 * 000000018004F76F: call    _Init_thread_footer
 * 000000018004F774: mov     rax, [rdi+rbx*8]
 * 000000018004F778: mov     eax, [r15+rax]
 * 000000018004F77C: cmp     cs:dword_18021FF28, eax
 * 000000018004F782: jle     loc_18004F86B
 * 000000018004F788: lea     rcx, dword_18021FF28
 * 000000018004F78F: call    _Init_thread_header
 * 000000018004F794: cmp     cs:dword_18021FF28, r14d
 * 000000018004F79B: jnz     loc_18004F86B
 * 000000018004F7A1: lea     rax, unk_180181080
 * 000000018004F7A8: mov     qword ptr [rbp+9E10h+var_9890], rax
 * 000000018004F7AF: lea     rax, unk_180187B3C
 * 000000018004F7B6: mov     qword ptr [rbp+9E10h+var_9890+8], rax
 * 000000018004F7BD: movups  xmm0, [rbp+9E10h+var_9890]
 * 000000018004F7C4: movups  [rbp+9E10h+var_7D90], xmm0
 * 000000018004F7CB: mov     dword ptr [rbp+9E10h+var_7D80], 5
 * 000000018004F7D5: mov     dword ptr [rbp+9E10h+var_7D80+4], esi
 * 000000018004F7DB: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004F7E0: movups  xmm0, [rbp+9E10h+var_7D80]
 * 000000018004F7E7: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004F7EC: call    sub_1800496D0
 * 000000018004F7F1: mov     r8, rax
 * 000000018004F7F4: mov     r9d, r12d
 * 000000018004F7F7: mov     edx, 158h
 * 000000018004F7FC: lea     rcx, [rbp+9E10h+var_4AE0]; Src
 * 000000018004F803: call    sub_1800D4B98
 * 000000018004F808: nop
 * 000000018004F809: mov     r8, rax
 * 000000018004F80C: mov     rdx, r13
 * 000000018004F80F: lea     rcx, [rbp+9E10h+var_4B00]
 * 000000018004F816: call    sub_1800494AC
 * 000000018004F81B: nop
 * 000000018004F81C: lea     r8, aPixel; "/Pixel"
 * 000000018004F823: mov     rdx, rax
 * 000000018004F826: lea     rcx, [rbp+9E10h+var_4B20]
 * 000000018004F82D: call    sub_180031AE8
 * 000000018004F832: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004F837: mov     rcx, rax
 * 000000018004F83A: call    sub_1800D4C70
 * 000000018004F83F: mov     cs:byte_18021FF24, al
 * 000000018004F845: lea     rcx, [rbp+9E10h+var_4B00]; void *
 * 000000018004F84C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F851: nop
 * 000000018004F852: lea     rcx, [rbp+9E10h+var_4AE0]; void *
 * 000000018004F859: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F85E: nop
 * 000000018004F85F: lea     rcx, dword_18021FF28
 * 000000018004F866: call    _Init_thread_footer
 * 000000018004F86B: mov     rax, [rdi+rbx*8]
 * 000000018004F86F: mov     eax, [r15+rax]
 * 000000018004F873: cmp     cs:dword_18021FF30, eax
 * 000000018004F879: jle     loc_18004F962
 * 000000018004F87F: lea     rcx, dword_18021FF30
 * 000000018004F886: call    _Init_thread_header
 * 000000018004F88B: cmp     cs:dword_18021FF30, r14d
 * 000000018004F892: jnz     loc_18004F962
 * 000000018004F898: lea     rax, unk_180181080
 * 000000018004F89F: mov     qword ptr [rbp+9E10h+var_9880], rax
 * 000000018004F8A6: lea     rax, unk_180187B3C
 * 000000018004F8AD: mov     qword ptr [rbp+9E10h+var_9880+8], rax
 * 000000018004F8B4: movups  xmm0, [rbp+9E10h+var_9880]
 * 000000018004F8BB: movups  [rbp+9E10h+var_7D70], xmm0
 * 000000018004F8C2: mov     dword ptr [rbp+9E10h+var_7D60], 5
 * 000000018004F8CC: mov     dword ptr [rbp+9E10h+var_7D60+4], esi
 * 000000018004F8D2: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004F8D7: movups  xmm0, [rbp+9E10h+var_7D60]
 * 000000018004F8DE: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004F8E3: call    sub_1800496D0
 * 000000018004F8E8: mov     r8, rax
 * 000000018004F8EB: mov     r9d, r12d
 * 000000018004F8EE: mov     edx, 15Ah
 * 000000018004F8F3: lea     rcx, [rbp+9E10h+var_4A80]; Src
 * 000000018004F8FA: call    sub_1800D4B98
 * 000000018004F8FF: nop
 * 000000018004F900: mov     r8, rax
 * 000000018004F903: mov     rdx, r13
 * 000000018004F906: lea     rcx, [rbp+9E10h+var_4AA0]
 * 000000018004F90D: call    sub_1800494AC
 * 000000018004F912: nop
 * 000000018004F913: lea     r8, aPixel; "/Pixel"
 * 000000018004F91A: mov     rdx, rax
 * 000000018004F91D: lea     rcx, [rbp+9E10h+var_4AC0]
 * 000000018004F924: call    sub_180031AE8
 * 000000018004F929: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004F92E: mov     rcx, rax
 * 000000018004F931: call    sub_1800D4C70
 * 000000018004F936: mov     cs:byte_18021FF2C, al
 * 000000018004F93C: lea     rcx, [rbp+9E10h+var_4AA0]; void *
 * 000000018004F943: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F948: nop
 * 000000018004F949: lea     rcx, [rbp+9E10h+var_4A80]; void *
 * 000000018004F950: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004F955: nop
 * 000000018004F956: lea     rcx, dword_18021FF30
 * 000000018004F95D: call    _Init_thread_footer
 * 000000018004F962: mov     rax, [rdi+rbx*8]
 * 000000018004F966: mov     eax, [r15+rax]
 * 000000018004F96A: cmp     cs:dword_18021FF38, eax
 * 000000018004F970: jle     loc_18004FA59
 * 000000018004F976: lea     rcx, dword_18021FF38
 * 000000018004F97D: call    _Init_thread_header
 * 000000018004F982: cmp     cs:dword_18021FF38, r14d
 * 000000018004F989: jnz     loc_18004FA59
 * 000000018004F98F: lea     rax, unk_180166C80
 * 000000018004F996: mov     qword ptr [rbp+9E10h+var_9870], rax
 * 000000018004F99D: lea     rax, unk_18016D3AC
 * 000000018004F9A4: mov     qword ptr [rbp+9E10h+var_9870+8], rax
 * 000000018004F9AB: movups  xmm0, [rbp+9E10h+var_9870]
 * 000000018004F9B2: movups  [rbp+9E10h+var_7D50], xmm0
 * 000000018004F9B9: mov     dword ptr [rbp+9E10h+var_7D40], 5
 * 000000018004F9C3: mov     dword ptr [rbp+9E10h+var_7D40+4], esi
 * 000000018004F9C9: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004F9CE: movups  xmm0, [rbp+9E10h+var_7D40]
 * 000000018004F9D5: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004F9DA: call    sub_1800496D0
 * 000000018004F9DF: mov     r8, rax
 * 000000018004F9E2: mov     r9d, r12d
 * 000000018004F9E5: mov     edx, 160h
 * 000000018004F9EA: lea     rcx, [rbp+9E10h+var_4A20]; Src
 * 000000018004F9F1: call    sub_1800D4B98
 * 000000018004F9F6: nop
 * 000000018004F9F7: mov     r8, rax
 * 000000018004F9FA: mov     rdx, r13
 * 000000018004F9FD: lea     rcx, [rbp+9E10h+var_4A40]
 * 000000018004FA04: call    sub_1800494AC
 * 000000018004FA09: nop
 * 000000018004FA0A: lea     r8, aPixel; "/Pixel"
 * 000000018004FA11: mov     rdx, rax
 * 000000018004FA14: lea     rcx, [rbp+9E10h+var_4A60]
 * 000000018004FA1B: call    sub_180031AE8
 * 000000018004FA20: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004FA25: mov     rcx, rax
 * 000000018004FA28: call    sub_1800D4C70
 * 000000018004FA2D: mov     cs:byte_18021FF34, al
 * 000000018004FA33: lea     rcx, [rbp+9E10h+var_4A40]; void *
 * 000000018004FA3A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FA3F: nop
 * 000000018004FA40: lea     rcx, [rbp+9E10h+var_4A20]; void *
 * 000000018004FA47: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FA4C: nop
 * 000000018004FA4D: lea     rcx, dword_18021FF38
 * 000000018004FA54: call    _Init_thread_footer
 * 000000018004FA59: mov     rax, [rdi+rbx*8]
 * 000000018004FA5D: mov     eax, [r15+rax]
 * 000000018004FA61: cmp     cs:dword_18021FF40, eax
 * 000000018004FA67: jle     loc_18004FB50
 * 000000018004FA6D: lea     rcx, dword_18021FF40
 * 000000018004FA74: call    _Init_thread_header
 * 000000018004FA79: cmp     cs:dword_18021FF40, r14d
 * 000000018004FA80: jnz     loc_18004FB50
 * 000000018004FA86: lea     rax, unk_180166C80
 * 000000018004FA8D: mov     qword ptr [rbp+9E10h+var_9860], rax
 * 000000018004FA94: lea     rax, unk_18016D3AC
 * 000000018004FA9B: mov     qword ptr [rbp+9E10h+var_9860+8], rax
 * 000000018004FAA2: movups  xmm0, [rbp+9E10h+var_9860]
 * 000000018004FAA9: movups  [rbp+9E10h+var_7D30], xmm0
 * 000000018004FAB0: mov     dword ptr [rbp+9E10h+var_7D20], 5
 * 000000018004FABA: mov     dword ptr [rbp+9E10h+var_7D20+4], esi
 * 000000018004FAC0: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004FAC5: movups  xmm0, [rbp+9E10h+var_7D20]
 * 000000018004FACC: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004FAD1: call    sub_1800496D0
 * 000000018004FAD6: mov     r8, rax
 * 000000018004FAD9: mov     r9d, r12d
 * 000000018004FADC: mov     edx, 162h
 * 000000018004FAE1: lea     rcx, [rbp+9E10h+var_49C0]; Src
 * 000000018004FAE8: call    sub_1800D4B98
 * 000000018004FAED: nop
 * 000000018004FAEE: mov     r8, rax
 * 000000018004FAF1: mov     rdx, r13
 * 000000018004FAF4: lea     rcx, [rbp+9E10h+var_49E0]
 * 000000018004FAFB: call    sub_1800494AC
 * 000000018004FB00: nop
 * 000000018004FB01: lea     r8, aPixel; "/Pixel"
 * 000000018004FB08: mov     rdx, rax
 * 000000018004FB0B: lea     rcx, [rbp+9E10h+var_4A00]
 * 000000018004FB12: call    sub_180031AE8
 * 000000018004FB17: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004FB1C: mov     rcx, rax
 * 000000018004FB1F: call    sub_1800D4C70
 * 000000018004FB24: mov     cs:byte_18021FF3C, al
 * 000000018004FB2A: lea     rcx, [rbp+9E10h+var_49E0]; void *
 * 000000018004FB31: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FB36: nop
 * 000000018004FB37: lea     rcx, [rbp+9E10h+var_49C0]; void *
 * 000000018004FB3E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FB43: nop
 * 000000018004FB44: lea     rcx, dword_18021FF40
 * 000000018004FB4B: call    _Init_thread_footer
 * 000000018004FB50: mov     rax, [rdi+rbx*8]
 * 000000018004FB54: mov     eax, [r15+rax]
 * 000000018004FB58: cmp     cs:dword_18021FF48, eax
 * 000000018004FB5E: jle     loc_18004FC47
 * 000000018004FB64: lea     rcx, dword_18021FF48
 * 000000018004FB6B: call    _Init_thread_header
 * 000000018004FB70: cmp     cs:dword_18021FF48, r14d
 * 000000018004FB77: jnz     loc_18004FC47
 * 000000018004FB7D: lea     rax, unk_180170890
 * 000000018004FB84: mov     qword ptr [rbp+9E10h+var_9850], rax
 * 000000018004FB8B: lea     rax, unk_18017714C
 * 000000018004FB92: mov     qword ptr [rbp+9E10h+var_9850+8], rax
 * 000000018004FB99: movups  xmm0, [rbp+9E10h+var_9850]
 * 000000018004FBA0: movups  [rbp+9E10h+var_7D10], xmm0
 * 000000018004FBA7: mov     dword ptr [rbp+9E10h+var_7D00], 5
 * 000000018004FBB1: mov     dword ptr [rbp+9E10h+var_7D00+4], esi
 * 000000018004FBB7: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004FBBC: movups  xmm0, [rbp+9E10h+var_7D00]
 * 000000018004FBC3: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004FBC8: call    sub_1800496D0
 * 000000018004FBCD: mov     r8, rax
 * 000000018004FBD0: mov     r9d, r12d
 * 000000018004FBD3: mov     edx, 168h
 * 000000018004FBD8: lea     rcx, [rbp+9E10h+var_4960]; Src
 * 000000018004FBDF: call    sub_1800D4B98
 * 000000018004FBE4: nop
 * 000000018004FBE5: mov     r8, rax
 * 000000018004FBE8: mov     rdx, r13
 * 000000018004FBEB: lea     rcx, [rbp+9E10h+var_4980]
 * 000000018004FBF2: call    sub_1800494AC
 * 000000018004FBF7: nop
 * 000000018004FBF8: lea     r8, aPixel; "/Pixel"
 * 000000018004FBFF: mov     rdx, rax
 * 000000018004FC02: lea     rcx, [rbp+9E10h+var_49A0]
 * 000000018004FC09: call    sub_180031AE8
 * 000000018004FC0E: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004FC13: mov     rcx, rax
 * 000000018004FC16: call    sub_1800D4C70
 * 000000018004FC1B: mov     cs:byte_18021FF44, al
 * 000000018004FC21: lea     rcx, [rbp+9E10h+var_4980]; void *
 * 000000018004FC28: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FC2D: nop
 * 000000018004FC2E: lea     rcx, [rbp+9E10h+var_4960]; void *
 * 000000018004FC35: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FC3A: nop
 * 000000018004FC3B: lea     rcx, dword_18021FF48
 * 000000018004FC42: call    _Init_thread_footer
 * 000000018004FC47: mov     rax, [rdi+rbx*8]
 * 000000018004FC4B: mov     eax, [r15+rax]
 * 000000018004FC4F: cmp     cs:dword_18021FF50, eax
 * 000000018004FC55: jle     loc_18004FD3E
 * 000000018004FC5B: lea     rcx, dword_18021FF50
 * 000000018004FC62: call    _Init_thread_header
 * 000000018004FC67: cmp     cs:dword_18021FF50, r14d
 * 000000018004FC6E: jnz     loc_18004FD3E
 * 000000018004FC74: lea     rax, unk_180170890
 * 000000018004FC7B: mov     qword ptr [rbp+9E10h+var_9840], rax
 * 000000018004FC82: lea     rax, unk_18017714C
 * 000000018004FC89: mov     qword ptr [rbp+9E10h+var_9840+8], rax
 * 000000018004FC90: movups  xmm0, [rbp+9E10h+var_9840]
 * 000000018004FC97: movups  [rbp+9E10h+var_7CF0], xmm0
 * 000000018004FC9E: mov     dword ptr [rbp+9E10h+var_7CE0], 5
 * 000000018004FCA8: mov     dword ptr [rbp+9E10h+var_7CE0+4], esi
 * 000000018004FCAE: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004FCB3: movups  xmm0, [rbp+9E10h+var_7CE0]
 * 000000018004FCBA: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004FCBF: call    sub_1800496D0
 * 000000018004FCC4: mov     r8, rax
 * 000000018004FCC7: mov     r9d, r12d
 * 000000018004FCCA: mov     edx, 16Ah
 * 000000018004FCCF: lea     rcx, [rbp+9E10h+var_4900]; Src
 * 000000018004FCD6: call    sub_1800D4B98
 * 000000018004FCDB: nop
 * 000000018004FCDC: mov     r8, rax
 * 000000018004FCDF: mov     rdx, r13
 * 000000018004FCE2: lea     rcx, [rbp+9E10h+var_4920]
 * 000000018004FCE9: call    sub_1800494AC
 * 000000018004FCEE: nop
 * 000000018004FCEF: lea     r8, aPixel; "/Pixel"
 * 000000018004FCF6: mov     rdx, rax
 * 000000018004FCF9: lea     rcx, [rbp+9E10h+var_4940]
 * 000000018004FD00: call    sub_180031AE8
 * 000000018004FD05: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004FD0A: mov     rcx, rax
 * 000000018004FD0D: call    sub_1800D4C70
 * 000000018004FD12: mov     cs:byte_18021FF4C, al
 * 000000018004FD18: lea     rcx, [rbp+9E10h+var_4920]; void *
 * 000000018004FD1F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FD24: nop
 * 000000018004FD25: lea     rcx, [rbp+9E10h+var_4900]; void *
 * 000000018004FD2C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FD31: nop
 * 000000018004FD32: lea     rcx, dword_18021FF50
 * 000000018004FD39: call    _Init_thread_footer
 * 000000018004FD3E: mov     rax, [rdi+rbx*8]
 * 000000018004FD42: mov     eax, [r15+rax]
 * 000000018004FD46: cmp     cs:dword_18021FF58, eax
 * 000000018004FD4C: jle     loc_18004FE35
 * 000000018004FD52: lea     rcx, dword_18021FF58
 * 000000018004FD59: call    _Init_thread_header
 * 000000018004FD5E: cmp     cs:dword_18021FF58, r14d
 * 000000018004FD65: jnz     loc_18004FE35
 * 000000018004FD6B: lea     rax, unk_180177150
 * 000000018004FD72: mov     qword ptr [rbp+9E10h+var_9830], rax
 * 000000018004FD79: lea     rax, unk_18017DA58
 * 000000018004FD80: mov     qword ptr [rbp+9E10h+var_9830+8], rax
 * 000000018004FD87: movups  xmm0, [rbp+9E10h+var_9830]
 * 000000018004FD8E: movups  [rbp+9E10h+var_7CD0], xmm0
 * 000000018004FD95: mov     dword ptr [rbp+9E10h+var_7CC0], 5
 * 000000018004FD9F: mov     dword ptr [rbp+9E10h+var_7CC0+4], esi
 * 000000018004FDA5: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004FDAA: movups  xmm0, [rbp+9E10h+var_7CC0]
 * 000000018004FDB1: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004FDB6: call    sub_1800496D0
 * 000000018004FDBB: mov     r8, rax
 * 000000018004FDBE: mov     r9d, r12d
 * 000000018004FDC1: mov     edx, 170h
 * 000000018004FDC6: lea     rcx, [rbp+9E10h+var_48A0]; Src
 * 000000018004FDCD: call    sub_1800D4B98
 * 000000018004FDD2: nop
 * 000000018004FDD3: mov     r8, rax
 * 000000018004FDD6: mov     rdx, r13
 * 000000018004FDD9: lea     rcx, [rbp+9E10h+var_48C0]
 * 000000018004FDE0: call    sub_1800494AC
 * 000000018004FDE5: nop
 * 000000018004FDE6: lea     r8, aPixel; "/Pixel"
 * 000000018004FDED: mov     rdx, rax
 * 000000018004FDF0: lea     rcx, [rbp+9E10h+var_48E0]
 * 000000018004FDF7: call    sub_180031AE8
 * 000000018004FDFC: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004FE01: mov     rcx, rax
 * 000000018004FE04: call    sub_1800D4C70
 * 000000018004FE09: mov     cs:byte_18021FF54, al
 * 000000018004FE0F: lea     rcx, [rbp+9E10h+var_48C0]; void *
 * 000000018004FE16: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FE1B: nop
 * 000000018004FE1C: lea     rcx, [rbp+9E10h+var_48A0]; void *
 * 000000018004FE23: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FE28: nop
 * 000000018004FE29: lea     rcx, dword_18021FF58
 * 000000018004FE30: call    _Init_thread_footer
 * 000000018004FE35: mov     rax, [rdi+rbx*8]
 * 000000018004FE39: mov     eax, [r15+rax]
 * 000000018004FE3D: cmp     cs:dword_18021FF60, eax
 * 000000018004FE43: jle     loc_18004FF2C
 * 000000018004FE49: lea     rcx, dword_18021FF60
 * 000000018004FE50: call    _Init_thread_header
 * 000000018004FE55: cmp     cs:dword_18021FF60, r14d
 * 000000018004FE5C: jnz     loc_18004FF2C
 * 000000018004FE62: lea     rax, unk_180177150
 * 000000018004FE69: mov     qword ptr [rbp+9E10h+var_9820], rax
 * 000000018004FE70: lea     rax, unk_18017DA58
 * 000000018004FE77: mov     qword ptr [rbp+9E10h+var_9820+8], rax
 * 000000018004FE7E: movups  xmm0, [rbp+9E10h+var_9820]
 * 000000018004FE85: movups  [rbp+9E10h+var_7CB0], xmm0
 * 000000018004FE8C: mov     dword ptr [rbp+9E10h+var_7CA0], 5
 * 000000018004FE96: mov     dword ptr [rbp+9E10h+var_7CA0+4], esi
 * 000000018004FE9C: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004FEA1: movups  xmm0, [rbp+9E10h+var_7CA0]
 * 000000018004FEA8: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004FEAD: call    sub_1800496D0
 * 000000018004FEB2: mov     r8, rax
 * 000000018004FEB5: mov     r9d, r12d
 * 000000018004FEB8: mov     edx, 172h
 * 000000018004FEBD: lea     rcx, [rbp+9E10h+var_4840]; Src
 * 000000018004FEC4: call    sub_1800D4B98
 * 000000018004FEC9: nop
 * 000000018004FECA: mov     r8, rax
 * 000000018004FECD: mov     rdx, r13
 * 000000018004FED0: lea     rcx, [rbp+9E10h+var_4860]
 * 000000018004FED7: call    sub_1800494AC
 * 000000018004FEDC: nop
 * 000000018004FEDD: lea     r8, aPixel; "/Pixel"
 * 000000018004FEE4: mov     rdx, rax
 * 000000018004FEE7: lea     rcx, [rbp+9E10h+var_4880]
 * 000000018004FEEE: call    sub_180031AE8
 * 000000018004FEF3: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004FEF8: mov     rcx, rax
 * 000000018004FEFB: call    sub_1800D4C70
 * 000000018004FF00: mov     cs:byte_18021FF5C, al
 * 000000018004FF06: lea     rcx, [rbp+9E10h+var_4860]; void *
 * 000000018004FF0D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FF12: nop
 * 000000018004FF13: lea     rcx, [rbp+9E10h+var_4840]; void *
 * 000000018004FF1A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018004FF1F: nop
 * 000000018004FF20: lea     rcx, dword_18021FF60
 * 000000018004FF27: call    _Init_thread_footer
 * 000000018004FF2C: mov     rax, [rdi+rbx*8]
 * 000000018004FF30: mov     eax, [r15+rax]
 * 000000018004FF34: cmp     cs:dword_18021FF68, eax
 * 000000018004FF3A: jle     loc_180050023
 * 000000018004FF40: lea     rcx, dword_18021FF68
 * 000000018004FF47: call    _Init_thread_header
 * 000000018004FF4C: cmp     cs:dword_18021FF68, r14d
 * 000000018004FF53: jnz     loc_180050023
 * 000000018004FF59: lea     rax, unk_180181080
 * 000000018004FF60: mov     qword ptr [rbp+9E10h+var_9810], rax
 * 000000018004FF67: lea     rax, unk_180187B3C
 * 000000018004FF6E: mov     qword ptr [rbp+9E10h+var_9810+8], rax
 * 000000018004FF75: movups  xmm0, [rbp+9E10h+var_9810]
 * 000000018004FF7C: movups  [rbp+9E10h+var_7C90], xmm0
 * 000000018004FF83: mov     dword ptr [rbp+9E10h+var_7C80], 5
 * 000000018004FF8D: mov     dword ptr [rbp+9E10h+var_7C80+4], esi
 * 000000018004FF93: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018004FF98: movups  xmm0, [rbp+9E10h+var_7C80]
 * 000000018004FF9F: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018004FFA4: call    sub_1800496D0
 * 000000018004FFA9: mov     r8, rax
 * 000000018004FFAC: mov     r9d, r12d
 * 000000018004FFAF: mov     edx, 178h
 * 000000018004FFB4: lea     rcx, [rbp+9E10h+var_47E0]; Src
 * 000000018004FFBB: call    sub_1800D4B98
 * 000000018004FFC0: nop
 * 000000018004FFC1: mov     r8, rax
 * 000000018004FFC4: mov     rdx, r13
 * 000000018004FFC7: lea     rcx, [rbp+9E10h+var_4800]
 * 000000018004FFCE: call    sub_1800494AC
 * 000000018004FFD3: nop
 * 000000018004FFD4: lea     r8, aPixel; "/Pixel"
 * 000000018004FFDB: mov     rdx, rax
 * 000000018004FFDE: lea     rcx, [rbp+9E10h+var_4820]
 * 000000018004FFE5: call    sub_180031AE8
 * 000000018004FFEA: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018004FFEF: mov     rcx, rax
 * 000000018004FFF2: call    sub_1800D4C70
 * 000000018004FFF7: mov     cs:byte_18021FF64, al
 * 000000018004FFFD: lea     rcx, [rbp+9E10h+var_4800]; void *
 * 0000000180050004: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050009: nop
 * 000000018005000A: lea     rcx, [rbp+9E10h+var_47E0]; void *
 * 0000000180050011: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050016: nop
 * 0000000180050017: lea     rcx, dword_18021FF68
 * 000000018005001E: call    _Init_thread_footer
 * 0000000180050023: mov     rax, [rdi+rbx*8]
 * 0000000180050027: mov     eax, [r15+rax]
 * 000000018005002B: cmp     cs:dword_18021FF70, eax
 * 0000000180050031: jle     loc_18005011A
 * 0000000180050037: lea     rcx, dword_18021FF70
 * 000000018005003E: call    _Init_thread_header
 * 0000000180050043: cmp     cs:dword_18021FF70, r14d
 * 000000018005004A: jnz     loc_18005011A
 * 0000000180050050: lea     rax, unk_180181080
 * 0000000180050057: mov     qword ptr [rbp+9E10h+var_9800], rax
 * 000000018005005E: lea     rax, unk_180187B3C
 * 0000000180050065: mov     qword ptr [rbp+9E10h+var_9800+8], rax
 * 000000018005006C: movups  xmm0, [rbp+9E10h+var_9800]
 * 0000000180050073: movups  [rbp+9E10h+var_7C70], xmm0
 * 000000018005007A: mov     dword ptr [rbp+9E10h+var_7C60], 5
 * 0000000180050084: mov     dword ptr [rbp+9E10h+var_7C60+4], esi
 * 000000018005008A: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005008F: movups  xmm0, [rbp+9E10h+var_7C60]
 * 0000000180050096: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005009B: call    sub_1800496D0
 * 00000001800500A0: mov     r8, rax
 * 00000001800500A3: mov     r9d, r12d
 * 00000001800500A6: mov     edx, 17Ah
 * 00000001800500AB: lea     rcx, [rbp+9E10h+var_4780]; Src
 * 00000001800500B2: call    sub_1800D4B98
 * 00000001800500B7: nop
 * 00000001800500B8: mov     r8, rax
 * 00000001800500BB: mov     rdx, r13
 * 00000001800500BE: lea     rcx, [rbp+9E10h+var_47A0]
 * 00000001800500C5: call    sub_1800494AC
 * 00000001800500CA: nop
 * 00000001800500CB: lea     r8, aPixel; "/Pixel"
 * 00000001800500D2: mov     rdx, rax
 * 00000001800500D5: lea     rcx, [rbp+9E10h+var_47C0]
 * 00000001800500DC: call    sub_180031AE8
 * 00000001800500E1: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800500E6: mov     rcx, rax
 * 00000001800500E9: call    sub_1800D4C70
 * 00000001800500EE: mov     cs:byte_18021FF6C, al
 * 00000001800500F4: lea     rcx, [rbp+9E10h+var_47A0]; void *
 * 00000001800500FB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050100: nop
 * 0000000180050101: lea     rcx, [rbp+9E10h+var_4780]; void *
 * 0000000180050108: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005010D: nop
 * 000000018005010E: lea     rcx, dword_18021FF70
 * 0000000180050115: call    _Init_thread_footer
 * 000000018005011A: mov     rax, [rdi+rbx*8]
 * 000000018005011E: mov     eax, [r15+rax]
 * 0000000180050122: cmp     cs:dword_18021FF78, eax
 * 0000000180050128: jle     loc_180050211
 * 000000018005012E: lea     rcx, dword_18021FF78
 * 0000000180050135: call    _Init_thread_header
 * 000000018005013A: cmp     cs:dword_18021FF78, r14d
 * 0000000180050141: jnz     loc_180050211
 * 0000000180050147: lea     rax, unk_180166C80
 * 000000018005014E: mov     qword ptr [rbp+9E10h+var_97F0], rax
 * 0000000180050155: lea     rax, unk_18016D3AC
 * 000000018005015C: mov     qword ptr [rbp+9E10h+var_97F0+8], rax
 * 0000000180050163: movups  xmm0, [rbp+9E10h+var_97F0]
 * 000000018005016A: movups  [rbp+9E10h+var_7C50], xmm0
 * 0000000180050171: mov     dword ptr [rbp+9E10h+var_7C40], 5
 * 000000018005017B: mov     dword ptr [rbp+9E10h+var_7C40+4], esi
 * 0000000180050181: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050186: movups  xmm0, [rbp+9E10h+var_7C40]
 * 000000018005018D: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050192: call    sub_1800496D0
 * 0000000180050197: mov     r8, rax
 * 000000018005019A: mov     r9d, r12d
 * 000000018005019D: mov     edx, 180h
 * 00000001800501A2: lea     rcx, [rbp+9E10h+var_4720]; Src
 * 00000001800501A9: call    sub_1800D4B98
 * 00000001800501AE: nop
 * 00000001800501AF: mov     r8, rax
 * 00000001800501B2: mov     rdx, r13
 * 00000001800501B5: lea     rcx, [rbp+9E10h+var_4740]
 * 00000001800501BC: call    sub_1800494AC
 * 00000001800501C1: nop
 * 00000001800501C2: lea     r8, aPixel; "/Pixel"
 * 00000001800501C9: mov     rdx, rax
 * 00000001800501CC: lea     rcx, [rbp+9E10h+var_4760]
 * 00000001800501D3: call    sub_180031AE8
 * 00000001800501D8: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800501DD: mov     rcx, rax
 * 00000001800501E0: call    sub_1800D4C70
 * 00000001800501E5: mov     cs:byte_18021FF74, al
 * 00000001800501EB: lea     rcx, [rbp+9E10h+var_4740]; void *
 * 00000001800501F2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800501F7: nop
 * 00000001800501F8: lea     rcx, [rbp+9E10h+var_4720]; void *
 * 00000001800501FF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050204: nop
 * 0000000180050205: lea     rcx, dword_18021FF78
 * 000000018005020C: call    _Init_thread_footer
 * 0000000180050211: mov     rax, [rdi+rbx*8]
 * 0000000180050215: mov     eax, [r15+rax]
 * 0000000180050219: cmp     cs:dword_18021FF80, eax
 * 000000018005021F: jle     loc_180050308
 * 0000000180050225: lea     rcx, dword_18021FF80
 * 000000018005022C: call    _Init_thread_header
 * 0000000180050231: cmp     cs:dword_18021FF80, r14d
 * 0000000180050238: jnz     loc_180050308
 * 000000018005023E: lea     rax, unk_180166C80
 * 0000000180050245: mov     qword ptr [rbp+9E10h+var_97E0], rax
 * 000000018005024C: lea     rax, unk_18016D3AC
 * 0000000180050253: mov     qword ptr [rbp+9E10h+var_97E0+8], rax
 * 000000018005025A: movups  xmm0, [rbp+9E10h+var_97E0]
 * 0000000180050261: movups  [rbp+9E10h+var_7C30], xmm0
 * 0000000180050268: mov     dword ptr [rbp+9E10h+var_7C20], 5
 * 0000000180050272: mov     dword ptr [rbp+9E10h+var_7C20+4], esi
 * 0000000180050278: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005027D: movups  xmm0, [rbp+9E10h+var_7C20]
 * 0000000180050284: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050289: call    sub_1800496D0
 * 000000018005028E: mov     r8, rax
 * 0000000180050291: mov     r9d, r12d
 * 0000000180050294: mov     edx, 182h
 * 0000000180050299: lea     rcx, [rbp+9E10h+var_46C0]; Src
 * 00000001800502A0: call    sub_1800D4B98
 * 00000001800502A5: nop
 * 00000001800502A6: mov     r8, rax
 * 00000001800502A9: mov     rdx, r13
 * 00000001800502AC: lea     rcx, [rbp+9E10h+var_46E0]
 * 00000001800502B3: call    sub_1800494AC
 * 00000001800502B8: nop
 * 00000001800502B9: lea     r8, aPixel; "/Pixel"
 * 00000001800502C0: mov     rdx, rax
 * 00000001800502C3: lea     rcx, [rbp+9E10h+var_4700]
 * 00000001800502CA: call    sub_180031AE8
 * 00000001800502CF: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800502D4: mov     rcx, rax
 * 00000001800502D7: call    sub_1800D4C70
 * 00000001800502DC: mov     cs:byte_18021FF7C, al
 * 00000001800502E2: lea     rcx, [rbp+9E10h+var_46E0]; void *
 * 00000001800502E9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800502EE: nop
 * 00000001800502EF: lea     rcx, [rbp+9E10h+var_46C0]; void *
 * 00000001800502F6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800502FB: nop
 * 00000001800502FC: lea     rcx, dword_18021FF80
 * 0000000180050303: call    _Init_thread_footer
 * 0000000180050308: mov     rax, [rdi+rbx*8]
 * 000000018005030C: mov     eax, [r15+rax]
 * 0000000180050310: cmp     cs:dword_18021FF88, eax
 * 0000000180050316: jle     loc_1800503FF
 * 000000018005031C: lea     rcx, dword_18021FF88
 * 0000000180050323: call    _Init_thread_header
 * 0000000180050328: cmp     cs:dword_18021FF88, r14d
 * 000000018005032F: jnz     loc_1800503FF
 * 0000000180050335: lea     rax, unk_180170890
 * 000000018005033C: mov     qword ptr [rbp+9E10h+var_97D0], rax
 * 0000000180050343: lea     rax, unk_18017714C
 * 000000018005034A: mov     qword ptr [rbp+9E10h+var_97D0+8], rax
 * 0000000180050351: movups  xmm0, [rbp+9E10h+var_97D0]
 * 0000000180050358: movups  [rbp+9E10h+var_7C10], xmm0
 * 000000018005035F: mov     dword ptr [rbp+9E10h+var_7C00], 5
 * 0000000180050369: mov     dword ptr [rbp+9E10h+var_7C00+4], esi
 * 000000018005036F: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050374: movups  xmm0, [rbp+9E10h+var_7C00]
 * 000000018005037B: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050380: call    sub_1800496D0
 * 0000000180050385: mov     r8, rax
 * 0000000180050388: mov     r9d, r12d
 * 000000018005038B: mov     edx, 188h
 * 0000000180050390: lea     rcx, [rbp+9E10h+var_4660]; Src
 * 0000000180050397: call    sub_1800D4B98
 * 000000018005039C: nop
 * 000000018005039D: mov     r8, rax
 * 00000001800503A0: mov     rdx, r13
 * 00000001800503A3: lea     rcx, [rbp+9E10h+var_4680]
 * 00000001800503AA: call    sub_1800494AC
 * 00000001800503AF: nop
 * 00000001800503B0: lea     r8, aPixel; "/Pixel"
 * 00000001800503B7: mov     rdx, rax
 * 00000001800503BA: lea     rcx, [rbp+9E10h+var_46A0]
 * 00000001800503C1: call    sub_180031AE8
 * 00000001800503C6: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800503CB: mov     rcx, rax
 * 00000001800503CE: call    sub_1800D4C70
 * 00000001800503D3: mov     cs:byte_18021FF84, al
 * 00000001800503D9: lea     rcx, [rbp+9E10h+var_4680]; void *
 * 00000001800503E0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800503E5: nop
 * 00000001800503E6: lea     rcx, [rbp+9E10h+var_4660]; void *
 * 00000001800503ED: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800503F2: nop
 * 00000001800503F3: lea     rcx, dword_18021FF88
 * 00000001800503FA: call    _Init_thread_footer
 * 00000001800503FF: mov     rax, [rdi+rbx*8]
 * 0000000180050403: mov     eax, [r15+rax]
 * 0000000180050407: cmp     cs:dword_18021FF90, eax
 * 000000018005040D: jle     loc_1800504F6
 * 0000000180050413: lea     rcx, dword_18021FF90
 * 000000018005041A: call    _Init_thread_header
 * 000000018005041F: cmp     cs:dword_18021FF90, r14d
 * 0000000180050426: jnz     loc_1800504F6
 * 000000018005042C: lea     rax, unk_180170890
 * 0000000180050433: mov     qword ptr [rbp+9E10h+var_97C0], rax
 * 000000018005043A: lea     rax, unk_18017714C
 * 0000000180050441: mov     qword ptr [rbp+9E10h+var_97C0+8], rax
 * 0000000180050448: movups  xmm0, [rbp+9E10h+var_97C0]
 * 000000018005044F: movups  [rbp+9E10h+var_7BF0], xmm0
 * 0000000180050456: mov     dword ptr [rbp+9E10h+var_7BE0], 5
 * 0000000180050460: mov     dword ptr [rbp+9E10h+var_7BE0+4], esi
 * 0000000180050466: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005046B: movups  xmm0, [rbp+9E10h+var_7BE0]
 * 0000000180050472: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050477: call    sub_1800496D0
 * 000000018005047C: mov     r8, rax
 * 000000018005047F: mov     r9d, r12d
 * 0000000180050482: mov     edx, 18Ah
 * 0000000180050487: lea     rcx, [rbp+9E10h+var_4600]; Src
 * 000000018005048E: call    sub_1800D4B98
 * 0000000180050493: nop
 * 0000000180050494: mov     r8, rax
 * 0000000180050497: mov     rdx, r13
 * 000000018005049A: lea     rcx, [rbp+9E10h+var_4620]
 * 00000001800504A1: call    sub_1800494AC
 * 00000001800504A6: nop
 * 00000001800504A7: lea     r8, aPixel; "/Pixel"
 * 00000001800504AE: mov     rdx, rax
 * 00000001800504B1: lea     rcx, [rbp+9E10h+var_4640]
 * 00000001800504B8: call    sub_180031AE8
 * 00000001800504BD: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800504C2: mov     rcx, rax
 * 00000001800504C5: call    sub_1800D4C70
 * 00000001800504CA: mov     cs:byte_18021FF8C, al
 * 00000001800504D0: lea     rcx, [rbp+9E10h+var_4620]; void *
 * 00000001800504D7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800504DC: nop
 * 00000001800504DD: lea     rcx, [rbp+9E10h+var_4600]; void *
 * 00000001800504E4: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800504E9: nop
 * 00000001800504EA: lea     rcx, dword_18021FF90
 * 00000001800504F1: call    _Init_thread_footer
 * 00000001800504F6: mov     rax, [rdi+rbx*8]
 * 00000001800504FA: mov     eax, [r15+rax]
 * 00000001800504FE: cmp     cs:dword_18021FF98, eax
 * 0000000180050504: jle     loc_1800505ED
 * 000000018005050A: lea     rcx, dword_18021FF98
 * 0000000180050511: call    _Init_thread_header
 * 0000000180050516: cmp     cs:dword_18021FF98, r14d
 * 000000018005051D: jnz     loc_1800505ED
 * 0000000180050523: lea     rax, unk_180177150
 * 000000018005052A: mov     qword ptr [rbp+9E10h+var_97B0], rax
 * 0000000180050531: lea     rax, unk_18017DA58
 * 0000000180050538: mov     qword ptr [rbp+9E10h+var_97B0+8], rax
 * 000000018005053F: movups  xmm0, [rbp+9E10h+var_97B0]
 * 0000000180050546: movups  [rbp+9E10h+var_7BD0], xmm0
 * 000000018005054D: mov     dword ptr [rbp+9E10h+var_7BC0], 5
 * 0000000180050557: mov     dword ptr [rbp+9E10h+var_7BC0+4], esi
 * 000000018005055D: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050562: movups  xmm0, [rbp+9E10h+var_7BC0]
 * 0000000180050569: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005056E: call    sub_1800496D0
 * 0000000180050573: mov     r8, rax
 * 0000000180050576: mov     r9d, r12d
 * 0000000180050579: mov     edx, 190h
 * 000000018005057E: lea     rcx, [rbp+9E10h+var_45A0]; Src
 * 0000000180050585: call    sub_1800D4B98
 * 000000018005058A: nop
 * 000000018005058B: mov     r8, rax
 * 000000018005058E: mov     rdx, r13
 * 0000000180050591: lea     rcx, [rbp+9E10h+var_45C0]
 * 0000000180050598: call    sub_1800494AC
 * 000000018005059D: nop
 * 000000018005059E: lea     r8, aPixel; "/Pixel"
 * 00000001800505A5: mov     rdx, rax
 * 00000001800505A8: lea     rcx, [rbp+9E10h+var_45E0]
 * 00000001800505AF: call    sub_180031AE8
 * 00000001800505B4: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800505B9: mov     rcx, rax
 * 00000001800505BC: call    sub_1800D4C70
 * 00000001800505C1: mov     cs:byte_18021FF94, al
 * 00000001800505C7: lea     rcx, [rbp+9E10h+var_45C0]; void *
 * 00000001800505CE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800505D3: nop
 * 00000001800505D4: lea     rcx, [rbp+9E10h+var_45A0]; void *
 * 00000001800505DB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800505E0: nop
 * 00000001800505E1: lea     rcx, dword_18021FF98
 * 00000001800505E8: call    _Init_thread_footer
 * 00000001800505ED: mov     rax, [rdi+rbx*8]
 * 00000001800505F1: mov     eax, [r15+rax]
 * 00000001800505F5: cmp     cs:dword_18021FFA0, eax
 * 00000001800505FB: jle     loc_1800506E4
 * 0000000180050601: lea     rcx, dword_18021FFA0
 * 0000000180050608: call    _Init_thread_header
 * 000000018005060D: cmp     cs:dword_18021FFA0, r14d
 * 0000000180050614: jnz     loc_1800506E4
 * 000000018005061A: lea     rax, unk_180177150
 * 0000000180050621: mov     qword ptr [rbp+9E10h+var_97A0], rax
 * 0000000180050628: lea     rax, unk_18017DA58
 * 000000018005062F: mov     qword ptr [rbp+9E10h+var_97A0+8], rax
 * 0000000180050636: movups  xmm0, [rbp+9E10h+var_97A0]
 * 000000018005063D: movups  [rbp+9E10h+var_7BB0], xmm0
 * 0000000180050644: mov     dword ptr [rbp+9E10h+var_7BA0], 5
 * 000000018005064E: mov     dword ptr [rbp+9E10h+var_7BA0+4], esi
 * 0000000180050654: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050659: movups  xmm0, [rbp+9E10h+var_7BA0]
 * 0000000180050660: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050665: call    sub_1800496D0
 * 000000018005066A: mov     r8, rax
 * 000000018005066D: mov     r9d, r12d
 * 0000000180050670: mov     edx, 192h
 * 0000000180050675: lea     rcx, [rbp+9E10h+var_4540]; Src
 * 000000018005067C: call    sub_1800D4B98
 * 0000000180050681: nop
 * 0000000180050682: mov     r8, rax
 * 0000000180050685: mov     rdx, r13
 * 0000000180050688: lea     rcx, [rbp+9E10h+var_4560]
 * 000000018005068F: call    sub_1800494AC
 * 0000000180050694: nop
 * 0000000180050695: lea     r8, aPixel; "/Pixel"
 * 000000018005069C: mov     rdx, rax
 * 000000018005069F: lea     rcx, [rbp+9E10h+var_4580]
 * 00000001800506A6: call    sub_180031AE8
 * 00000001800506AB: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800506B0: mov     rcx, rax
 * 00000001800506B3: call    sub_1800D4C70
 * 00000001800506B8: mov     cs:byte_18021FF9C, al
 * 00000001800506BE: lea     rcx, [rbp+9E10h+var_4560]; void *
 * 00000001800506C5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800506CA: nop
 * 00000001800506CB: lea     rcx, [rbp+9E10h+var_4540]; void *
 * 00000001800506D2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800506D7: nop
 * 00000001800506D8: lea     rcx, dword_18021FFA0
 * 00000001800506DF: call    _Init_thread_footer
 * 00000001800506E4: mov     rax, [rdi+rbx*8]
 * 00000001800506E8: mov     eax, [r15+rax]
 * 00000001800506EC: cmp     cs:dword_18021FFA8, eax
 * 00000001800506F2: jle     loc_1800507DB
 * 00000001800506F8: lea     rcx, dword_18021FFA8
 * 00000001800506FF: call    _Init_thread_header
 * 0000000180050704: cmp     cs:dword_18021FFA8, r14d
 * 000000018005070B: jnz     loc_1800507DB
 * 0000000180050711: lea     rax, unk_180181080
 * 0000000180050718: mov     qword ptr [rbp+9E10h+var_9790], rax
 * 000000018005071F: lea     rax, unk_180187B3C
 * 0000000180050726: mov     qword ptr [rbp+9E10h+var_9790+8], rax
 * 000000018005072D: movups  xmm0, [rbp+9E10h+var_9790]
 * 0000000180050734: movups  [rbp+9E10h+var_7B90], xmm0
 * 000000018005073B: mov     dword ptr [rbp+9E10h+var_7B80], 5
 * 0000000180050745: mov     dword ptr [rbp+9E10h+var_7B80+4], esi
 * 000000018005074B: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050750: movups  xmm0, [rbp+9E10h+var_7B80]
 * 0000000180050757: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005075C: call    sub_1800496D0
 * 0000000180050761: mov     r8, rax
 * 0000000180050764: mov     r9d, r12d
 * 0000000180050767: mov     edx, 198h
 * 000000018005076C: lea     rcx, [rbp+9E10h+var_44E0]; Src
 * 0000000180050773: call    sub_1800D4B98
 * 0000000180050778: nop
 * 0000000180050779: mov     r8, rax
 * 000000018005077C: mov     rdx, r13
 * 000000018005077F: lea     rcx, [rbp+9E10h+var_4500]
 * 0000000180050786: call    sub_1800494AC
 * 000000018005078B: nop
 * 000000018005078C: lea     r8, aPixel; "/Pixel"
 * 0000000180050793: mov     rdx, rax
 * 0000000180050796: lea     rcx, [rbp+9E10h+var_4520]
 * 000000018005079D: call    sub_180031AE8
 * 00000001800507A2: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800507A7: mov     rcx, rax
 * 00000001800507AA: call    sub_1800D4C70
 * 00000001800507AF: mov     cs:byte_18021FFA4, al
 * 00000001800507B5: lea     rcx, [rbp+9E10h+var_4500]; void *
 * 00000001800507BC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800507C1: nop
 * 00000001800507C2: lea     rcx, [rbp+9E10h+var_44E0]; void *
 * 00000001800507C9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800507CE: nop
 * 00000001800507CF: lea     rcx, dword_18021FFA8
 * 00000001800507D6: call    _Init_thread_footer
 * 00000001800507DB: mov     rax, [rdi+rbx*8]
 * 00000001800507DF: mov     eax, [r15+rax]
 * 00000001800507E3: cmp     cs:dword_18021FFB0, eax
 * 00000001800507E9: jle     loc_1800508D2
 * 00000001800507EF: lea     rcx, dword_18021FFB0
 * 00000001800507F6: call    _Init_thread_header
 * 00000001800507FB: cmp     cs:dword_18021FFB0, r14d
 * 0000000180050802: jnz     loc_1800508D2
 * 0000000180050808: lea     rax, unk_180181080
 * 000000018005080F: mov     qword ptr [rbp+9E10h+var_9780], rax
 * 0000000180050816: lea     rax, unk_180187B3C
 * 000000018005081D: mov     qword ptr [rbp+9E10h+var_9780+8], rax
 * 0000000180050824: movups  xmm0, [rbp+9E10h+var_9780]
 * 000000018005082B: movups  [rbp+9E10h+var_7B70], xmm0
 * 0000000180050832: mov     dword ptr [rbp+9E10h+var_7B60], 5
 * 000000018005083C: mov     dword ptr [rbp+9E10h+var_7B60+4], esi
 * 0000000180050842: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050847: movups  xmm0, [rbp+9E10h+var_7B60]
 * 000000018005084E: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050853: call    sub_1800496D0
 * 0000000180050858: mov     r8, rax
 * 000000018005085B: mov     r9d, r12d
 * 000000018005085E: mov     edx, 19Ah
 * 0000000180050863: lea     rcx, [rbp+9E10h+var_4480]; Src
 * 000000018005086A: call    sub_1800D4B98
 * 000000018005086F: nop
 * 0000000180050870: mov     r8, rax
 * 0000000180050873: mov     rdx, r13
 * 0000000180050876: lea     rcx, [rbp+9E10h+var_44A0]
 * 000000018005087D: call    sub_1800494AC
 * 0000000180050882: nop
 * 0000000180050883: lea     r8, aPixel; "/Pixel"
 * 000000018005088A: mov     rdx, rax
 * 000000018005088D: lea     rcx, [rbp+9E10h+var_44C0]
 * 0000000180050894: call    sub_180031AE8
 * 0000000180050899: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005089E: mov     rcx, rax
 * 00000001800508A1: call    sub_1800D4C70
 * 00000001800508A6: mov     cs:byte_18021FFAC, al
 * 00000001800508AC: lea     rcx, [rbp+9E10h+var_44A0]; void *
 * 00000001800508B3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800508B8: nop
 * 00000001800508B9: lea     rcx, [rbp+9E10h+var_4480]; void *
 * 00000001800508C0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800508C5: nop
 * 00000001800508C6: lea     rcx, dword_18021FFB0
 * 00000001800508CD: call    _Init_thread_footer
 * 00000001800508D2: mov     rax, [rdi+rbx*8]
 * 00000001800508D6: mov     eax, [r15+rax]
 * 00000001800508DA: cmp     cs:dword_18021FFB8, eax
 * 00000001800508E0: jle     loc_1800509C9
 * 00000001800508E6: lea     rcx, dword_18021FFB8
 * 00000001800508ED: call    _Init_thread_header
 * 00000001800508F2: cmp     cs:dword_18021FFB8, r14d
 * 00000001800508F9: jnz     loc_1800509C9
 * 00000001800508FF: lea     rax, unk_180166C80
 * 0000000180050906: mov     qword ptr [rbp+9E10h+var_9770], rax
 * 000000018005090D: lea     rax, unk_18016D3AC
 * 0000000180050914: mov     qword ptr [rbp+9E10h+var_9770+8], rax
 * 000000018005091B: movups  xmm0, [rbp+9E10h+var_9770]
 * 0000000180050922: movups  [rbp+9E10h+var_7B50], xmm0
 * 0000000180050929: mov     dword ptr [rbp+9E10h+var_7B40], 5
 * 0000000180050933: mov     dword ptr [rbp+9E10h+var_7B40+4], esi
 * 0000000180050939: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005093E: movups  xmm0, [rbp+9E10h+var_7B40]
 * 0000000180050945: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005094A: call    sub_1800496D0
 * 000000018005094F: mov     r8, rax
 * 0000000180050952: mov     r9d, r12d
 * 0000000180050955: mov     edx, 1A0h
 * 000000018005095A: lea     rcx, [rbp+9E10h+var_4420]; Src
 * 0000000180050961: call    sub_1800D4B98
 * 0000000180050966: nop
 * 0000000180050967: mov     r8, rax
 * 000000018005096A: mov     rdx, r13
 * 000000018005096D: lea     rcx, [rbp+9E10h+var_4440]
 * 0000000180050974: call    sub_1800494AC
 * 0000000180050979: nop
 * 000000018005097A: lea     r8, aPixel; "/Pixel"
 * 0000000180050981: mov     rdx, rax
 * 0000000180050984: lea     rcx, [rbp+9E10h+var_4460]
 * 000000018005098B: call    sub_180031AE8
 * 0000000180050990: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180050995: mov     rcx, rax
 * 0000000180050998: call    sub_1800D4C70
 * 000000018005099D: mov     cs:byte_18021FFB4, al
 * 00000001800509A3: lea     rcx, [rbp+9E10h+var_4440]; void *
 * 00000001800509AA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800509AF: nop
 * 00000001800509B0: lea     rcx, [rbp+9E10h+var_4420]; void *
 * 00000001800509B7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800509BC: nop
 * 00000001800509BD: lea     rcx, dword_18021FFB8
 * 00000001800509C4: call    _Init_thread_footer
 * 00000001800509C9: mov     rax, [rdi+rbx*8]
 * 00000001800509CD: mov     eax, [r15+rax]
 * 00000001800509D1: cmp     cs:dword_18021FFC0, eax
 * 00000001800509D7: jle     loc_180050AC0
 * 00000001800509DD: lea     rcx, dword_18021FFC0
 * 00000001800509E4: call    _Init_thread_header
 * 00000001800509E9: cmp     cs:dword_18021FFC0, r14d
 * 00000001800509F0: jnz     loc_180050AC0
 * 00000001800509F6: lea     rax, unk_180166C80
 * 00000001800509FD: mov     qword ptr [rbp+9E10h+var_9760], rax
 * 0000000180050A04: lea     rax, unk_18016D3AC
 * 0000000180050A0B: mov     qword ptr [rbp+9E10h+var_9760+8], rax
 * 0000000180050A12: movups  xmm0, [rbp+9E10h+var_9760]
 * 0000000180050A19: movups  [rbp+9E10h+var_7B30], xmm0
 * 0000000180050A20: mov     dword ptr [rbp+9E10h+var_7B20], 5
 * 0000000180050A2A: mov     dword ptr [rbp+9E10h+var_7B20+4], esi
 * 0000000180050A30: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050A35: movups  xmm0, [rbp+9E10h+var_7B20]
 * 0000000180050A3C: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050A41: call    sub_1800496D0
 * 0000000180050A46: mov     r8, rax
 * 0000000180050A49: mov     r9d, r12d
 * 0000000180050A4C: mov     edx, 1A2h
 * 0000000180050A51: lea     rcx, [rbp+9E10h+var_43C0]; Src
 * 0000000180050A58: call    sub_1800D4B98
 * 0000000180050A5D: nop
 * 0000000180050A5E: mov     r8, rax
 * 0000000180050A61: mov     rdx, r13
 * 0000000180050A64: lea     rcx, [rbp+9E10h+var_43E0]
 * 0000000180050A6B: call    sub_1800494AC
 * 0000000180050A70: nop
 * 0000000180050A71: lea     r8, aPixel; "/Pixel"
 * 0000000180050A78: mov     rdx, rax
 * 0000000180050A7B: lea     rcx, [rbp+9E10h+var_4400]
 * 0000000180050A82: call    sub_180031AE8
 * 0000000180050A87: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180050A8C: mov     rcx, rax
 * 0000000180050A8F: call    sub_1800D4C70
 * 0000000180050A94: mov     cs:byte_18021FFBC, al
 * 0000000180050A9A: lea     rcx, [rbp+9E10h+var_43E0]; void *
 * 0000000180050AA1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050AA6: nop
 * 0000000180050AA7: lea     rcx, [rbp+9E10h+var_43C0]; void *
 * 0000000180050AAE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050AB3: nop
 * 0000000180050AB4: lea     rcx, dword_18021FFC0
 * 0000000180050ABB: call    _Init_thread_footer
 * 0000000180050AC0: mov     rax, [rdi+rbx*8]
 * 0000000180050AC4: mov     eax, [r15+rax]
 * 0000000180050AC8: cmp     cs:dword_18021FFC8, eax
 * 0000000180050ACE: jle     loc_180050BB7
 * 0000000180050AD4: lea     rcx, dword_18021FFC8
 * 0000000180050ADB: call    _Init_thread_header
 * 0000000180050AE0: cmp     cs:dword_18021FFC8, r14d
 * 0000000180050AE7: jnz     loc_180050BB7
 * 0000000180050AED: lea     rax, unk_180170890
 * 0000000180050AF4: mov     qword ptr [rbp+9E10h+var_9750], rax
 * 0000000180050AFB: lea     rax, unk_18017714C
 * 0000000180050B02: mov     qword ptr [rbp+9E10h+var_9750+8], rax
 * 0000000180050B09: movups  xmm0, [rbp+9E10h+var_9750]
 * 0000000180050B10: movups  [rbp+9E10h+var_7B10], xmm0
 * 0000000180050B17: mov     dword ptr [rbp+9E10h+var_7B00], 5
 * 0000000180050B21: mov     dword ptr [rbp+9E10h+var_7B00+4], esi
 * 0000000180050B27: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050B2C: movups  xmm0, [rbp+9E10h+var_7B00]
 * 0000000180050B33: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050B38: call    sub_1800496D0
 * 0000000180050B3D: mov     r8, rax
 * 0000000180050B40: mov     r9d, r12d
 * 0000000180050B43: mov     edx, 1A8h
 * 0000000180050B48: lea     rcx, [rbp+9E10h+var_4360]; Src
 * 0000000180050B4F: call    sub_1800D4B98
 * 0000000180050B54: nop
 * 0000000180050B55: mov     r8, rax
 * 0000000180050B58: mov     rdx, r13
 * 0000000180050B5B: lea     rcx, [rbp+9E10h+var_4380]
 * 0000000180050B62: call    sub_1800494AC
 * 0000000180050B67: nop
 * 0000000180050B68: lea     r8, aPixel; "/Pixel"
 * 0000000180050B6F: mov     rdx, rax
 * 0000000180050B72: lea     rcx, [rbp+9E10h+var_43A0]
 * 0000000180050B79: call    sub_180031AE8
 * 0000000180050B7E: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180050B83: mov     rcx, rax
 * 0000000180050B86: call    sub_1800D4C70
 * 0000000180050B8B: mov     cs:byte_18021FFC4, al
 * 0000000180050B91: lea     rcx, [rbp+9E10h+var_4380]; void *
 * 0000000180050B98: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050B9D: nop
 * 0000000180050B9E: lea     rcx, [rbp+9E10h+var_4360]; void *
 * 0000000180050BA5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050BAA: nop
 * 0000000180050BAB: lea     rcx, dword_18021FFC8
 * 0000000180050BB2: call    _Init_thread_footer
 * 0000000180050BB7: mov     rax, [rdi+rbx*8]
 * 0000000180050BBB: mov     eax, [r15+rax]
 * 0000000180050BBF: cmp     cs:dword_18021FFD0, eax
 * 0000000180050BC5: jle     loc_180050CAE
 * 0000000180050BCB: lea     rcx, dword_18021FFD0
 * 0000000180050BD2: call    _Init_thread_header
 * 0000000180050BD7: cmp     cs:dword_18021FFD0, r14d
 * 0000000180050BDE: jnz     loc_180050CAE
 * 0000000180050BE4: lea     rax, unk_180170890
 * 0000000180050BEB: mov     qword ptr [rbp+9E10h+var_9740], rax
 * 0000000180050BF2: lea     rax, unk_18017714C
 * 0000000180050BF9: mov     qword ptr [rbp+9E10h+var_9740+8], rax
 * 0000000180050C00: movups  xmm0, [rbp+9E10h+var_9740]
 * 0000000180050C07: movups  [rbp+9E10h+var_7AF0], xmm0
 * 0000000180050C0E: mov     dword ptr [rbp+9E10h+var_7AE0], 5
 * 0000000180050C18: mov     dword ptr [rbp+9E10h+var_7AE0+4], esi
 * 0000000180050C1E: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050C23: movups  xmm0, [rbp+9E10h+var_7AE0]
 * 0000000180050C2A: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050C2F: call    sub_1800496D0
 * 0000000180050C34: mov     r8, rax
 * 0000000180050C37: mov     r9d, r12d
 * 0000000180050C3A: mov     edx, 1AAh
 * 0000000180050C3F: lea     rcx, [rbp+9E10h+var_4300]; Src
 * 0000000180050C46: call    sub_1800D4B98
 * 0000000180050C4B: nop
 * 0000000180050C4C: mov     r8, rax
 * 0000000180050C4F: mov     rdx, r13
 * 0000000180050C52: lea     rcx, [rbp+9E10h+var_4320]
 * 0000000180050C59: call    sub_1800494AC
 * 0000000180050C5E: nop
 * 0000000180050C5F: lea     r8, aPixel; "/Pixel"
 * 0000000180050C66: mov     rdx, rax
 * 0000000180050C69: lea     rcx, [rbp+9E10h+var_4340]
 * 0000000180050C70: call    sub_180031AE8
 * 0000000180050C75: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180050C7A: mov     rcx, rax
 * 0000000180050C7D: call    sub_1800D4C70
 * 0000000180050C82: mov     cs:byte_18021FFCC, al
 * 0000000180050C88: lea     rcx, [rbp+9E10h+var_4320]; void *
 * 0000000180050C8F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050C94: nop
 * 0000000180050C95: lea     rcx, [rbp+9E10h+var_4300]; void *
 * 0000000180050C9C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050CA1: nop
 * 0000000180050CA2: lea     rcx, dword_18021FFD0
 * 0000000180050CA9: call    _Init_thread_footer
 * 0000000180050CAE: mov     rax, [rdi+rbx*8]
 * 0000000180050CB2: mov     eax, [r15+rax]
 * 0000000180050CB6: cmp     cs:dword_18021FFD8, eax
 * 0000000180050CBC: jle     loc_180050DA5
 * 0000000180050CC2: lea     rcx, dword_18021FFD8
 * 0000000180050CC9: call    _Init_thread_header
 * 0000000180050CCE: cmp     cs:dword_18021FFD8, r14d
 * 0000000180050CD5: jnz     loc_180050DA5
 * 0000000180050CDB: lea     rax, unk_180177150
 * 0000000180050CE2: mov     qword ptr [rbp+9E10h+var_9730], rax
 * 0000000180050CE9: lea     rax, unk_18017DA58
 * 0000000180050CF0: mov     qword ptr [rbp+9E10h+var_9730+8], rax
 * 0000000180050CF7: movups  xmm0, [rbp+9E10h+var_9730]
 * 0000000180050CFE: movups  [rbp+9E10h+var_7AD0], xmm0
 * 0000000180050D05: mov     dword ptr [rbp+9E10h+var_7AC0], 5
 * 0000000180050D0F: mov     dword ptr [rbp+9E10h+var_7AC0+4], esi
 * 0000000180050D15: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050D1A: movups  xmm0, [rbp+9E10h+var_7AC0]
 * 0000000180050D21: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050D26: call    sub_1800496D0
 * 0000000180050D2B: mov     r8, rax
 * 0000000180050D2E: mov     r9d, r12d
 * 0000000180050D31: mov     edx, 1B0h
 * 0000000180050D36: lea     rcx, [rbp+9E10h+var_42A0]; Src
 * 0000000180050D3D: call    sub_1800D4B98
 * 0000000180050D42: nop
 * 0000000180050D43: mov     r8, rax
 * 0000000180050D46: mov     rdx, r13
 * 0000000180050D49: lea     rcx, [rbp+9E10h+var_42C0]
 * 0000000180050D50: call    sub_1800494AC
 * 0000000180050D55: nop
 * 0000000180050D56: lea     r8, aPixel; "/Pixel"
 * 0000000180050D5D: mov     rdx, rax
 * 0000000180050D60: lea     rcx, [rbp+9E10h+var_42E0]
 * 0000000180050D67: call    sub_180031AE8
 * 0000000180050D6C: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180050D71: mov     rcx, rax
 * 0000000180050D74: call    sub_1800D4C70
 * 0000000180050D79: mov     cs:byte_18021FFD4, al
 * 0000000180050D7F: lea     rcx, [rbp+9E10h+var_42C0]; void *
 * 0000000180050D86: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050D8B: nop
 * 0000000180050D8C: lea     rcx, [rbp+9E10h+var_42A0]; void *
 * 0000000180050D93: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050D98: nop
 * 0000000180050D99: lea     rcx, dword_18021FFD8
 * 0000000180050DA0: call    _Init_thread_footer
 * 0000000180050DA5: mov     rax, [rdi+rbx*8]
 * 0000000180050DA9: mov     eax, [r15+rax]
 * 0000000180050DAD: cmp     cs:dword_18021FFE0, eax
 * 0000000180050DB3: jle     loc_180050E9C
 * 0000000180050DB9: lea     rcx, dword_18021FFE0
 * 0000000180050DC0: call    _Init_thread_header
 * 0000000180050DC5: cmp     cs:dword_18021FFE0, r14d
 * 0000000180050DCC: jnz     loc_180050E9C
 * 0000000180050DD2: lea     rax, unk_180177150
 * 0000000180050DD9: mov     qword ptr [rbp+9E10h+var_9720], rax
 * 0000000180050DE0: lea     rax, unk_18017DA58
 * 0000000180050DE7: mov     qword ptr [rbp+9E10h+var_9720+8], rax
 * 0000000180050DEE: movups  xmm0, [rbp+9E10h+var_9720]
 * 0000000180050DF5: movups  [rbp+9E10h+var_7AB0], xmm0
 * 0000000180050DFC: mov     dword ptr [rbp+9E10h+var_7AA0], 5
 * 0000000180050E06: mov     dword ptr [rbp+9E10h+var_7AA0+4], esi
 * 0000000180050E0C: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050E11: movups  xmm0, [rbp+9E10h+var_7AA0]
 * 0000000180050E18: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050E1D: call    sub_1800496D0
 * 0000000180050E22: mov     r8, rax
 * 0000000180050E25: mov     r9d, r12d
 * 0000000180050E28: mov     edx, 1B2h
 * 0000000180050E2D: lea     rcx, [rbp+9E10h+var_4240]; Src
 * 0000000180050E34: call    sub_1800D4B98
 * 0000000180050E39: nop
 * 0000000180050E3A: mov     r8, rax
 * 0000000180050E3D: mov     rdx, r13
 * 0000000180050E40: lea     rcx, [rbp+9E10h+var_4260]
 * 0000000180050E47: call    sub_1800494AC
 * 0000000180050E4C: nop
 * 0000000180050E4D: lea     r8, aPixel; "/Pixel"
 * 0000000180050E54: mov     rdx, rax
 * 0000000180050E57: lea     rcx, [rbp+9E10h+var_4280]
 * 0000000180050E5E: call    sub_180031AE8
 * 0000000180050E63: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180050E68: mov     rcx, rax
 * 0000000180050E6B: call    sub_1800D4C70
 * 0000000180050E70: mov     cs:byte_18021FFDC, al
 * 0000000180050E76: lea     rcx, [rbp+9E10h+var_4260]; void *
 * 0000000180050E7D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050E82: nop
 * 0000000180050E83: lea     rcx, [rbp+9E10h+var_4240]; void *
 * 0000000180050E8A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050E8F: nop
 * 0000000180050E90: lea     rcx, dword_18021FFE0
 * 0000000180050E97: call    _Init_thread_footer
 * 0000000180050E9C: mov     rax, [rdi+rbx*8]
 * 0000000180050EA0: mov     eax, [r15+rax]
 * 0000000180050EA4: cmp     cs:dword_18021FFE8, eax
 * 0000000180050EAA: jle     loc_180050F93
 * 0000000180050EB0: lea     rcx, dword_18021FFE8
 * 0000000180050EB7: call    _Init_thread_header
 * 0000000180050EBC: cmp     cs:dword_18021FFE8, r14d
 * 0000000180050EC3: jnz     loc_180050F93
 * 0000000180050EC9: lea     rax, unk_180181080
 * 0000000180050ED0: mov     qword ptr [rbp+9E10h+var_9710], rax
 * 0000000180050ED7: lea     rax, unk_180187B3C
 * 0000000180050EDE: mov     qword ptr [rbp+9E10h+var_9710+8], rax
 * 0000000180050EE5: movups  xmm0, [rbp+9E10h+var_9710]
 * 0000000180050EEC: movups  [rbp+9E10h+var_7A90], xmm0
 * 0000000180050EF3: mov     dword ptr [rbp+9E10h+var_7A80], 5
 * 0000000180050EFD: mov     dword ptr [rbp+9E10h+var_7A80+4], esi
 * 0000000180050F03: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050F08: movups  xmm0, [rbp+9E10h+var_7A80]
 * 0000000180050F0F: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180050F14: call    sub_1800496D0
 * 0000000180050F19: mov     r8, rax
 * 0000000180050F1C: mov     r9d, r12d
 * 0000000180050F1F: mov     edx, 1B8h
 * 0000000180050F24: lea     rcx, [rbp+9E10h+var_41E0]; Src
 * 0000000180050F2B: call    sub_1800D4B98
 * 0000000180050F30: nop
 * 0000000180050F31: mov     r8, rax
 * 0000000180050F34: mov     rdx, r13
 * 0000000180050F37: lea     rcx, [rbp+9E10h+var_4200]
 * 0000000180050F3E: call    sub_1800494AC
 * 0000000180050F43: nop
 * 0000000180050F44: lea     r8, aPixel; "/Pixel"
 * 0000000180050F4B: mov     rdx, rax
 * 0000000180050F4E: lea     rcx, [rbp+9E10h+var_4220]
 * 0000000180050F55: call    sub_180031AE8
 * 0000000180050F5A: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180050F5F: mov     rcx, rax
 * 0000000180050F62: call    sub_1800D4C70
 * 0000000180050F67: mov     cs:byte_18021FFE4, al
 * 0000000180050F6D: lea     rcx, [rbp+9E10h+var_4200]; void *
 * 0000000180050F74: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050F79: nop
 * 0000000180050F7A: lea     rcx, [rbp+9E10h+var_41E0]; void *
 * 0000000180050F81: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180050F86: nop
 * 0000000180050F87: lea     rcx, dword_18021FFE8
 * 0000000180050F8E: call    _Init_thread_footer
 * 0000000180050F93: mov     rax, [rdi+rbx*8]
 * 0000000180050F97: mov     eax, [r15+rax]
 * 0000000180050F9B: cmp     cs:dword_18021FFF0, eax
 * 0000000180050FA1: jle     loc_18005108A
 * 0000000180050FA7: lea     rcx, dword_18021FFF0
 * 0000000180050FAE: call    _Init_thread_header
 * 0000000180050FB3: cmp     cs:dword_18021FFF0, r14d
 * 0000000180050FBA: jnz     loc_18005108A
 * 0000000180050FC0: lea     rax, unk_180181080
 * 0000000180050FC7: mov     qword ptr [rbp+9E10h+var_9700], rax
 * 0000000180050FCE: lea     rax, unk_180187B3C
 * 0000000180050FD5: mov     qword ptr [rbp+9E10h+var_9700+8], rax
 * 0000000180050FDC: movups  xmm0, [rbp+9E10h+var_9700]
 * 0000000180050FE3: movups  [rbp+9E10h+var_7A70], xmm0
 * 0000000180050FEA: mov     dword ptr [rbp+9E10h+var_7A60], 5
 * 0000000180050FF4: mov     dword ptr [rbp+9E10h+var_7A60+4], esi
 * 0000000180050FFA: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180050FFF: movups  xmm0, [rbp+9E10h+var_7A60]
 * 0000000180051006: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005100B: call    sub_1800496D0
 * 0000000180051010: mov     r8, rax
 * 0000000180051013: mov     r9d, r12d
 * 0000000180051016: mov     edx, 1BAh
 * 000000018005101B: lea     rcx, [rbp+9E10h+var_4180]; Src
 * 0000000180051022: call    sub_1800D4B98
 * 0000000180051027: nop
 * 0000000180051028: mov     r8, rax
 * 000000018005102B: mov     rdx, r13
 * 000000018005102E: lea     rcx, [rbp+9E10h+var_41A0]
 * 0000000180051035: call    sub_1800494AC
 * 000000018005103A: nop
 * 000000018005103B: lea     r8, aPixel; "/Pixel"
 * 0000000180051042: mov     rdx, rax
 * 0000000180051045: lea     rcx, [rbp+9E10h+var_41C0]
 * 000000018005104C: call    sub_180031AE8
 * 0000000180051051: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051056: mov     rcx, rax
 * 0000000180051059: call    sub_1800D4C70
 * 000000018005105E: mov     cs:byte_18021FFEC, al
 * 0000000180051064: lea     rcx, [rbp+9E10h+var_41A0]; void *
 * 000000018005106B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051070: nop
 * 0000000180051071: lea     rcx, [rbp+9E10h+var_4180]; void *
 * 0000000180051078: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005107D: nop
 * 000000018005107E: lea     rcx, dword_18021FFF0
 * 0000000180051085: call    _Init_thread_footer
 * 000000018005108A: mov     rax, [rdi+rbx*8]
 * 000000018005108E: mov     eax, [r15+rax]
 * 0000000180051092: cmp     cs:dword_18021FFF8, eax
 * 0000000180051098: jle     loc_180051181
 * 000000018005109E: lea     rcx, dword_18021FFF8
 * 00000001800510A5: call    _Init_thread_header
 * 00000001800510AA: cmp     cs:dword_18021FFF8, r14d
 * 00000001800510B1: jnz     loc_180051181
 * 00000001800510B7: lea     rax, unk_180166C80
 * 00000001800510BE: mov     qword ptr [rbp+9E10h+var_96F0], rax
 * 00000001800510C5: lea     rax, unk_18016D3AC
 * 00000001800510CC: mov     qword ptr [rbp+9E10h+var_96F0+8], rax
 * 00000001800510D3: movups  xmm0, [rbp+9E10h+var_96F0]
 * 00000001800510DA: movups  [rbp+9E10h+var_7A50], xmm0
 * 00000001800510E1: mov     dword ptr [rbp+9E10h+var_7A40], 5
 * 00000001800510EB: mov     dword ptr [rbp+9E10h+var_7A40+4], esi
 * 00000001800510F1: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800510F6: movups  xmm0, [rbp+9E10h+var_7A40]
 * 00000001800510FD: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180051102: call    sub_1800496D0
 * 0000000180051107: mov     r8, rax
 * 000000018005110A: mov     r9d, r12d
 * 000000018005110D: mov     edx, 1C0h
 * 0000000180051112: lea     rcx, [rbp+9E10h+var_4120]; Src
 * 0000000180051119: call    sub_1800D4B98
 * 000000018005111E: nop
 * 000000018005111F: mov     r8, rax
 * 0000000180051122: mov     rdx, r13
 * 0000000180051125: lea     rcx, [rbp+9E10h+var_4140]
 * 000000018005112C: call    sub_1800494AC
 * 0000000180051131: nop
 * 0000000180051132: lea     r8, aPixel; "/Pixel"
 * 0000000180051139: mov     rdx, rax
 * 000000018005113C: lea     rcx, [rbp+9E10h+var_4160]
 * 0000000180051143: call    sub_180031AE8
 * 0000000180051148: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005114D: mov     rcx, rax
 * 0000000180051150: call    sub_1800D4C70
 * 0000000180051155: mov     cs:byte_18021FFF4, al
 * 000000018005115B: lea     rcx, [rbp+9E10h+var_4140]; void *
 * 0000000180051162: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051167: nop
 * 0000000180051168: lea     rcx, [rbp+9E10h+var_4120]; void *
 * 000000018005116F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051174: nop
 * 0000000180051175: lea     rcx, dword_18021FFF8
 * 000000018005117C: call    _Init_thread_footer
 * 0000000180051181: mov     rax, [rdi+rbx*8]
 * 0000000180051185: mov     eax, [r15+rax]
 * 0000000180051189: cmp     cs:dword_180220000, eax
 * 000000018005118F: jle     loc_180051278
 * 0000000180051195: lea     rcx, dword_180220000
 * 000000018005119C: call    _Init_thread_header
 * 00000001800511A1: cmp     cs:dword_180220000, r14d
 * 00000001800511A8: jnz     loc_180051278
 * 00000001800511AE: lea     rax, unk_180166C80
 * 00000001800511B5: mov     qword ptr [rbp+9E10h+var_96E0], rax
 * 00000001800511BC: lea     rax, unk_18016D3AC
 * 00000001800511C3: mov     qword ptr [rbp+9E10h+var_96E0+8], rax
 * 00000001800511CA: movups  xmm0, [rbp+9E10h+var_96E0]
 * 00000001800511D1: movups  [rbp+9E10h+var_7A30], xmm0
 * 00000001800511D8: mov     dword ptr [rbp+9E10h+var_7A20], 5
 * 00000001800511E2: mov     dword ptr [rbp+9E10h+var_7A20+4], esi
 * 00000001800511E8: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800511ED: movups  xmm0, [rbp+9E10h+var_7A20]
 * 00000001800511F4: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800511F9: call    sub_1800496D0
 * 00000001800511FE: mov     r8, rax
 * 0000000180051201: mov     r9d, r12d
 * 0000000180051204: mov     edx, 1C2h
 * 0000000180051209: lea     rcx, [rbp+9E10h+var_40C0]; Src
 * 0000000180051210: call    sub_1800D4B98
 * 0000000180051215: nop
 * 0000000180051216: mov     r8, rax
 * 0000000180051219: mov     rdx, r13
 * 000000018005121C: lea     rcx, [rbp+9E10h+var_40E0]
 * 0000000180051223: call    sub_1800494AC
 * 0000000180051228: nop
 * 0000000180051229: lea     r8, aPixel; "/Pixel"
 * 0000000180051230: mov     rdx, rax
 * 0000000180051233: lea     rcx, [rbp+9E10h+var_4100]
 * 000000018005123A: call    sub_180031AE8
 * 000000018005123F: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051244: mov     rcx, rax
 * 0000000180051247: call    sub_1800D4C70
 * 000000018005124C: mov     cs:byte_18021FFFC, al
 * 0000000180051252: lea     rcx, [rbp+9E10h+var_40E0]; void *
 * 0000000180051259: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005125E: nop
 * 000000018005125F: lea     rcx, [rbp+9E10h+var_40C0]; void *
 * 0000000180051266: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005126B: nop
 * 000000018005126C: lea     rcx, dword_180220000
 * 0000000180051273: call    _Init_thread_footer
 * 0000000180051278: mov     rax, [rdi+rbx*8]
 * 000000018005127C: mov     eax, [r15+rax]
 * 0000000180051280: cmp     cs:dword_180220008, eax
 * 0000000180051286: jle     loc_18005136F
 * 000000018005128C: lea     rcx, dword_180220008
 * 0000000180051293: call    _Init_thread_header
 * 0000000180051298: cmp     cs:dword_180220008, r14d
 * 000000018005129F: jnz     loc_18005136F
 * 00000001800512A5: lea     rax, unk_180170890
 * 00000001800512AC: mov     qword ptr [rbp+9E10h+var_96D0], rax
 * 00000001800512B3: lea     rax, unk_18017714C
 * 00000001800512BA: mov     qword ptr [rbp+9E10h+var_96D0+8], rax
 * 00000001800512C1: movups  xmm0, [rbp+9E10h+var_96D0]
 * 00000001800512C8: movups  [rbp+9E10h+var_7A10], xmm0
 * 00000001800512CF: mov     dword ptr [rbp+9E10h+var_7A00], 5
 * 00000001800512D9: mov     dword ptr [rbp+9E10h+var_7A00+4], esi
 * 00000001800512DF: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800512E4: movups  xmm0, [rbp+9E10h+var_7A00]
 * 00000001800512EB: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800512F0: call    sub_1800496D0
 * 00000001800512F5: mov     r8, rax
 * 00000001800512F8: mov     r9d, r12d
 * 00000001800512FB: mov     edx, 1C8h
 * 0000000180051300: lea     rcx, [rbp+9E10h+var_4060]; Src
 * 0000000180051307: call    sub_1800D4B98
 * 000000018005130C: nop
 * 000000018005130D: mov     r8, rax
 * 0000000180051310: mov     rdx, r13
 * 0000000180051313: lea     rcx, [rbp+9E10h+var_4080]
 * 000000018005131A: call    sub_1800494AC
 * 000000018005131F: nop
 * 0000000180051320: lea     r8, aPixel; "/Pixel"
 * 0000000180051327: mov     rdx, rax
 * 000000018005132A: lea     rcx, [rbp+9E10h+var_40A0]
 * 0000000180051331: call    sub_180031AE8
 * 0000000180051336: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005133B: mov     rcx, rax
 * 000000018005133E: call    sub_1800D4C70
 * 0000000180051343: mov     cs:byte_180220004, al
 * 0000000180051349: lea     rcx, [rbp+9E10h+var_4080]; void *
 * 0000000180051350: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051355: nop
 * 0000000180051356: lea     rcx, [rbp+9E10h+var_4060]; void *
 * 000000018005135D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051362: nop
 * 0000000180051363: lea     rcx, dword_180220008
 * 000000018005136A: call    _Init_thread_footer
 * 000000018005136F: mov     rax, [rdi+rbx*8]
 * 0000000180051373: mov     eax, [r15+rax]
 * 0000000180051377: cmp     cs:dword_180220010, eax
 * 000000018005137D: jle     loc_180051466
 * 0000000180051383: lea     rcx, dword_180220010
 * 000000018005138A: call    _Init_thread_header
 * 000000018005138F: cmp     cs:dword_180220010, r14d
 * 0000000180051396: jnz     loc_180051466
 * 000000018005139C: lea     rax, unk_180170890
 * 00000001800513A3: mov     qword ptr [rbp+9E10h+var_96C0], rax
 * 00000001800513AA: lea     rax, unk_18017714C
 * 00000001800513B1: mov     qword ptr [rbp+9E10h+var_96C0+8], rax
 * 00000001800513B8: movups  xmm0, [rbp+9E10h+var_96C0]
 * 00000001800513BF: movups  [rbp+9E10h+var_79F0], xmm0
 * 00000001800513C6: mov     dword ptr [rbp+9E10h+var_79E0], 5
 * 00000001800513D0: mov     dword ptr [rbp+9E10h+var_79E0+4], esi
 * 00000001800513D6: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800513DB: movups  xmm0, [rbp+9E10h+var_79E0]
 * 00000001800513E2: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800513E7: call    sub_1800496D0
 * 00000001800513EC: mov     r8, rax
 * 00000001800513EF: mov     r9d, r12d
 * 00000001800513F2: mov     edx, 1CAh
 * 00000001800513F7: lea     rcx, [rbp+9E10h+var_4000]; Src
 * 00000001800513FE: call    sub_1800D4B98
 * 0000000180051403: nop
 * 0000000180051404: mov     r8, rax
 * 0000000180051407: mov     rdx, r13
 * 000000018005140A: lea     rcx, [rbp+9E10h+var_4020]
 * 0000000180051411: call    sub_1800494AC
 * 0000000180051416: nop
 * 0000000180051417: lea     r8, aPixel; "/Pixel"
 * 000000018005141E: mov     rdx, rax
 * 0000000180051421: lea     rcx, [rbp+9E10h+var_4040]
 * 0000000180051428: call    sub_180031AE8
 * 000000018005142D: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051432: mov     rcx, rax
 * 0000000180051435: call    sub_1800D4C70
 * 000000018005143A: mov     cs:byte_18022000C, al
 * 0000000180051440: lea     rcx, [rbp+9E10h+var_4020]; void *
 * 0000000180051447: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005144C: nop
 * 000000018005144D: lea     rcx, [rbp+9E10h+var_4000]; void *
 * 0000000180051454: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051459: nop
 * 000000018005145A: lea     rcx, dword_180220010
 * 0000000180051461: call    _Init_thread_footer
 * 0000000180051466: mov     rax, [rdi+rbx*8]
 * 000000018005146A: mov     eax, [r15+rax]
 * 000000018005146E: cmp     cs:dword_180220018, eax
 * 0000000180051474: jle     loc_18005155D
 * 000000018005147A: lea     rcx, dword_180220018
 * 0000000180051481: call    _Init_thread_header
 * 0000000180051486: cmp     cs:dword_180220018, r14d
 * 000000018005148D: jnz     loc_18005155D
 * 0000000180051493: lea     rax, unk_180177150
 * 000000018005149A: mov     qword ptr [rbp+9E10h+var_96B0], rax
 * 00000001800514A1: lea     rax, unk_18017DA58
 * 00000001800514A8: mov     qword ptr [rbp+9E10h+var_96B0+8], rax
 * 00000001800514AF: movups  xmm0, [rbp+9E10h+var_96B0]
 * 00000001800514B6: movups  [rbp+9E10h+var_79D0], xmm0
 * 00000001800514BD: mov     dword ptr [rbp+9E10h+var_79C0], 5
 * 00000001800514C7: mov     dword ptr [rbp+9E10h+var_79C0+4], esi
 * 00000001800514CD: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800514D2: movups  xmm0, [rbp+9E10h+var_79C0]
 * 00000001800514D9: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800514DE: call    sub_1800496D0
 * 00000001800514E3: mov     r8, rax
 * 00000001800514E6: mov     r9d, r12d
 * 00000001800514E9: mov     edx, 1D0h
 * 00000001800514EE: lea     rcx, [rbp+9E10h+var_3FA0]; Src
 * 00000001800514F5: call    sub_1800D4B98
 * 00000001800514FA: nop
 * 00000001800514FB: mov     r8, rax
 * 00000001800514FE: mov     rdx, r13
 * 0000000180051501: lea     rcx, [rbp+9E10h+var_3FC0]
 * 0000000180051508: call    sub_1800494AC
 * 000000018005150D: nop
 * 000000018005150E: lea     r8, aPixel; "/Pixel"
 * 0000000180051515: mov     rdx, rax
 * 0000000180051518: lea     rcx, [rbp+9E10h+var_3FE0]
 * 000000018005151F: call    sub_180031AE8
 * 0000000180051524: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051529: mov     rcx, rax
 * 000000018005152C: call    sub_1800D4C70
 * 0000000180051531: mov     cs:byte_180220014, al
 * 0000000180051537: lea     rcx, [rbp+9E10h+var_3FC0]; void *
 * 000000018005153E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051543: nop
 * 0000000180051544: lea     rcx, [rbp+9E10h+var_3FA0]; void *
 * 000000018005154B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051550: nop
 * 0000000180051551: lea     rcx, dword_180220018
 * 0000000180051558: call    _Init_thread_footer
 * 000000018005155D: mov     rax, [rdi+rbx*8]
 * 0000000180051561: mov     eax, [r15+rax]
 * 0000000180051565: cmp     cs:dword_180220020, eax
 * 000000018005156B: jle     loc_180051654
 * 0000000180051571: lea     rcx, dword_180220020
 * 0000000180051578: call    _Init_thread_header
 * 000000018005157D: cmp     cs:dword_180220020, r14d
 * 0000000180051584: jnz     loc_180051654
 * 000000018005158A: lea     rax, unk_180177150
 * 0000000180051591: mov     qword ptr [rbp+9E10h+var_96A0], rax
 * 0000000180051598: lea     rax, unk_18017DA58
 * 000000018005159F: mov     qword ptr [rbp+9E10h+var_96A0+8], rax
 * 00000001800515A6: movups  xmm0, [rbp+9E10h+var_96A0]
 * 00000001800515AD: movups  [rbp+9E10h+var_79B0], xmm0
 * 00000001800515B4: mov     dword ptr [rbp+9E10h+var_79A0], 5
 * 00000001800515BE: mov     dword ptr [rbp+9E10h+var_79A0+4], esi
 * 00000001800515C4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800515C9: movups  xmm0, [rbp+9E10h+var_79A0]
 * 00000001800515D0: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800515D5: call    sub_1800496D0
 * 00000001800515DA: mov     r8, rax
 * 00000001800515DD: mov     r9d, r12d
 * 00000001800515E0: mov     edx, 1D2h
 * 00000001800515E5: lea     rcx, [rbp+9E10h+var_3F40]; Src
 * 00000001800515EC: call    sub_1800D4B98
 * 00000001800515F1: nop
 * 00000001800515F2: mov     r8, rax
 * 00000001800515F5: mov     rdx, r13
 * 00000001800515F8: lea     rcx, [rbp+9E10h+var_3F60]
 * 00000001800515FF: call    sub_1800494AC
 * 0000000180051604: nop
 * 0000000180051605: lea     r8, aPixel; "/Pixel"
 * 000000018005160C: mov     rdx, rax
 * 000000018005160F: lea     rcx, [rbp+9E10h+var_3F80]
 * 0000000180051616: call    sub_180031AE8
 * 000000018005161B: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051620: mov     rcx, rax
 * 0000000180051623: call    sub_1800D4C70
 * 0000000180051628: mov     cs:byte_18022001C, al
 * 000000018005162E: lea     rcx, [rbp+9E10h+var_3F60]; void *
 * 0000000180051635: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005163A: nop
 * 000000018005163B: lea     rcx, [rbp+9E10h+var_3F40]; void *
 * 0000000180051642: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051647: nop
 * 0000000180051648: lea     rcx, dword_180220020
 * 000000018005164F: call    _Init_thread_footer
 * 0000000180051654: mov     rax, [rdi+rbx*8]
 * 0000000180051658: mov     eax, [r15+rax]
 * 000000018005165C: cmp     cs:dword_180220028, eax
 * 0000000180051662: jle     loc_18005174B
 * 0000000180051668: lea     rcx, dword_180220028
 * 000000018005166F: call    _Init_thread_header
 * 0000000180051674: cmp     cs:dword_180220028, r14d
 * 000000018005167B: jnz     loc_18005174B
 * 0000000180051681: lea     rax, unk_180181080
 * 0000000180051688: mov     qword ptr [rbp+9E10h+var_9690], rax
 * 000000018005168F: lea     rax, unk_180187B3C
 * 0000000180051696: mov     qword ptr [rbp+9E10h+var_9690+8], rax
 * 000000018005169D: movups  xmm0, [rbp+9E10h+var_9690]
 * 00000001800516A4: movups  [rbp+9E10h+var_7990], xmm0
 * 00000001800516AB: mov     dword ptr [rbp+9E10h+var_7980], 5
 * 00000001800516B5: mov     dword ptr [rbp+9E10h+var_7980+4], esi
 * 00000001800516BB: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800516C0: movups  xmm0, [rbp+9E10h+var_7980]
 * 00000001800516C7: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800516CC: call    sub_1800496D0
 * 00000001800516D1: mov     r8, rax
 * 00000001800516D4: mov     r9d, r12d
 * 00000001800516D7: mov     edx, 1D8h
 * 00000001800516DC: lea     rcx, [rbp+9E10h+var_3EE0]; Src
 * 00000001800516E3: call    sub_1800D4B98
 * 00000001800516E8: nop
 * 00000001800516E9: mov     r8, rax
 * 00000001800516EC: mov     rdx, r13
 * 00000001800516EF: lea     rcx, [rbp+9E10h+var_3F00]
 * 00000001800516F6: call    sub_1800494AC
 * 00000001800516FB: nop
 * 00000001800516FC: lea     r8, aPixel; "/Pixel"
 * 0000000180051703: mov     rdx, rax
 * 0000000180051706: lea     rcx, [rbp+9E10h+var_3F20]
 * 000000018005170D: call    sub_180031AE8
 * 0000000180051712: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051717: mov     rcx, rax
 * 000000018005171A: call    sub_1800D4C70
 * 000000018005171F: mov     cs:byte_180220024, al
 * 0000000180051725: lea     rcx, [rbp+9E10h+var_3F00]; void *
 * 000000018005172C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051731: nop
 * 0000000180051732: lea     rcx, [rbp+9E10h+var_3EE0]; void *
 * 0000000180051739: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005173E: nop
 * 000000018005173F: lea     rcx, dword_180220028
 * 0000000180051746: call    _Init_thread_footer
 * 000000018005174B: mov     rax, [rdi+rbx*8]
 * 000000018005174F: mov     eax, [r15+rax]
 * 0000000180051753: cmp     cs:dword_180220030, eax
 * 0000000180051759: jle     loc_180051842
 * 000000018005175F: lea     rcx, dword_180220030
 * 0000000180051766: call    _Init_thread_header
 * 000000018005176B: cmp     cs:dword_180220030, r14d
 * 0000000180051772: jnz     loc_180051842
 * 0000000180051778: lea     rax, unk_180181080
 * 000000018005177F: mov     qword ptr [rbp+9E10h+var_9680], rax
 * 0000000180051786: lea     rax, unk_180187B3C
 * 000000018005178D: mov     qword ptr [rbp+9E10h+var_9680+8], rax
 * 0000000180051794: movups  xmm0, [rbp+9E10h+var_9680]
 * 000000018005179B: movups  [rbp+9E10h+var_7970], xmm0
 * 00000001800517A2: mov     dword ptr [rbp+9E10h+var_7960], 5
 * 00000001800517AC: mov     dword ptr [rbp+9E10h+var_7960+4], esi
 * 00000001800517B2: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800517B7: movups  xmm0, [rbp+9E10h+var_7960]
 * 00000001800517BE: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800517C3: call    sub_1800496D0
 * 00000001800517C8: mov     r8, rax
 * 00000001800517CB: mov     r9d, r12d
 * 00000001800517CE: mov     edx, 1DAh
 * 00000001800517D3: lea     rcx, [rbp+9E10h+var_3E80]; Src
 * 00000001800517DA: call    sub_1800D4B98
 * 00000001800517DF: nop
 * 00000001800517E0: mov     r8, rax
 * 00000001800517E3: mov     rdx, r13
 * 00000001800517E6: lea     rcx, [rbp+9E10h+var_3EA0]
 * 00000001800517ED: call    sub_1800494AC
 * 00000001800517F2: nop
 * 00000001800517F3: lea     r8, aPixel; "/Pixel"
 * 00000001800517FA: mov     rdx, rax
 * 00000001800517FD: lea     rcx, [rbp+9E10h+var_3EC0]
 * 0000000180051804: call    sub_180031AE8
 * 0000000180051809: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005180E: mov     rcx, rax
 * 0000000180051811: call    sub_1800D4C70
 * 0000000180051816: mov     cs:byte_18022002C, al
 * 000000018005181C: lea     rcx, [rbp+9E10h+var_3EA0]; void *
 * 0000000180051823: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051828: nop
 * 0000000180051829: lea     rcx, [rbp+9E10h+var_3E80]; void *
 * 0000000180051830: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051835: nop
 * 0000000180051836: lea     rcx, dword_180220030
 * 000000018005183D: call    _Init_thread_footer
 * 0000000180051842: mov     rax, [rdi+rbx*8]
 * 0000000180051846: mov     eax, [r15+rax]
 * 000000018005184A: cmp     cs:dword_180220038, eax
 * 0000000180051850: jle     loc_180051939
 * 0000000180051856: lea     rcx, dword_180220038
 * 000000018005185D: call    _Init_thread_header
 * 0000000180051862: cmp     cs:dword_180220038, r14d
 * 0000000180051869: jnz     loc_180051939
 * 000000018005186F: lea     rax, unk_180166C80
 * 0000000180051876: mov     qword ptr [rbp+9E10h+var_9670], rax
 * 000000018005187D: lea     rax, unk_18016D3AC
 * 0000000180051884: mov     qword ptr [rbp+9E10h+var_9670+8], rax
 * 000000018005188B: movups  xmm0, [rbp+9E10h+var_9670]
 * 0000000180051892: movups  [rbp+9E10h+var_7950], xmm0
 * 0000000180051899: mov     dword ptr [rbp+9E10h+var_7940], 5
 * 00000001800518A3: mov     dword ptr [rbp+9E10h+var_7940+4], esi
 * 00000001800518A9: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800518AE: movups  xmm0, [rbp+9E10h+var_7940]
 * 00000001800518B5: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800518BA: call    sub_1800496D0
 * 00000001800518BF: mov     r8, rax
 * 00000001800518C2: mov     r9d, r12d
 * 00000001800518C5: mov     edx, 1E0h
 * 00000001800518CA: lea     rcx, [rbp+9E10h+var_3E20]; Src
 * 00000001800518D1: call    sub_1800D4B98
 * 00000001800518D6: nop
 * 00000001800518D7: mov     r8, rax
 * 00000001800518DA: mov     rdx, r13
 * 00000001800518DD: lea     rcx, [rbp+9E10h+var_3E40]
 * 00000001800518E4: call    sub_1800494AC
 * 00000001800518E9: nop
 * 00000001800518EA: lea     r8, aPixel; "/Pixel"
 * 00000001800518F1: mov     rdx, rax
 * 00000001800518F4: lea     rcx, [rbp+9E10h+var_3E60]
 * 00000001800518FB: call    sub_180031AE8
 * 0000000180051900: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051905: mov     rcx, rax
 * 0000000180051908: call    sub_1800D4C70
 * 000000018005190D: mov     cs:byte_180220034, al
 * 0000000180051913: lea     rcx, [rbp+9E10h+var_3E40]; void *
 * 000000018005191A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005191F: nop
 * 0000000180051920: lea     rcx, [rbp+9E10h+var_3E20]; void *
 * 0000000180051927: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005192C: nop
 * 000000018005192D: lea     rcx, dword_180220038
 * 0000000180051934: call    _Init_thread_footer
 * 0000000180051939: mov     rax, [rdi+rbx*8]
 * 000000018005193D: mov     eax, [r15+rax]
 * 0000000180051941: cmp     cs:dword_180220040, eax
 * 0000000180051947: jle     loc_180051A30
 * 000000018005194D: lea     rcx, dword_180220040
 * 0000000180051954: call    _Init_thread_header
 * 0000000180051959: cmp     cs:dword_180220040, r14d
 * 0000000180051960: jnz     loc_180051A30
 * 0000000180051966: lea     rax, unk_180166C80
 * 000000018005196D: mov     qword ptr [rbp+9E10h+var_9660], rax
 * 0000000180051974: lea     rax, unk_18016D3AC
 * 000000018005197B: mov     qword ptr [rbp+9E10h+var_9660+8], rax
 * 0000000180051982: movups  xmm0, [rbp+9E10h+var_9660]
 * 0000000180051989: movups  [rbp+9E10h+var_7930], xmm0
 * 0000000180051990: mov     dword ptr [rbp+9E10h+var_7920], 5
 * 000000018005199A: mov     dword ptr [rbp+9E10h+var_7920+4], esi
 * 00000001800519A0: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800519A5: movups  xmm0, [rbp+9E10h+var_7920]
 * 00000001800519AC: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800519B1: call    sub_1800496D0
 * 00000001800519B6: mov     r8, rax
 * 00000001800519B9: mov     r9d, r12d
 * 00000001800519BC: mov     edx, 1E2h
 * 00000001800519C1: lea     rcx, [rbp+9E10h+var_3DC0]; Src
 * 00000001800519C8: call    sub_1800D4B98
 * 00000001800519CD: nop
 * 00000001800519CE: mov     r8, rax
 * 00000001800519D1: mov     rdx, r13
 * 00000001800519D4: lea     rcx, [rbp+9E10h+var_3DE0]
 * 00000001800519DB: call    sub_1800494AC
 * 00000001800519E0: nop
 * 00000001800519E1: lea     r8, aPixel; "/Pixel"
 * 00000001800519E8: mov     rdx, rax
 * 00000001800519EB: lea     rcx, [rbp+9E10h+var_3E00]
 * 00000001800519F2: call    sub_180031AE8
 * 00000001800519F7: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800519FC: mov     rcx, rax
 * 00000001800519FF: call    sub_1800D4C70
 * 0000000180051A04: mov     cs:byte_18022003C, al
 * 0000000180051A0A: lea     rcx, [rbp+9E10h+var_3DE0]; void *
 * 0000000180051A11: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051A16: nop
 * 0000000180051A17: lea     rcx, [rbp+9E10h+var_3DC0]; void *
 * 0000000180051A1E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051A23: nop
 * 0000000180051A24: lea     rcx, dword_180220040
 * 0000000180051A2B: call    _Init_thread_footer
 * 0000000180051A30: mov     rax, [rdi+rbx*8]
 * 0000000180051A34: mov     eax, [r15+rax]
 * 0000000180051A38: cmp     cs:dword_180220048, eax
 * 0000000180051A3E: jle     loc_180051B27
 * 0000000180051A44: lea     rcx, dword_180220048
 * 0000000180051A4B: call    _Init_thread_header
 * 0000000180051A50: cmp     cs:dword_180220048, r14d
 * 0000000180051A57: jnz     loc_180051B27
 * 0000000180051A5D: lea     rax, unk_180170890
 * 0000000180051A64: mov     qword ptr [rbp+9E10h+var_9650], rax
 * 0000000180051A6B: lea     rax, unk_18017714C
 * 0000000180051A72: mov     qword ptr [rbp+9E10h+var_9650+8], rax
 * 0000000180051A79: movups  xmm0, [rbp+9E10h+var_9650]
 * 0000000180051A80: movups  [rbp+9E10h+var_7910], xmm0
 * 0000000180051A87: mov     dword ptr [rbp+9E10h+var_7900], 5
 * 0000000180051A91: mov     dword ptr [rbp+9E10h+var_7900+4], esi
 * 0000000180051A97: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180051A9C: movups  xmm0, [rbp+9E10h+var_7900]
 * 0000000180051AA3: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180051AA8: call    sub_1800496D0
 * 0000000180051AAD: mov     r8, rax
 * 0000000180051AB0: mov     r9d, r12d
 * 0000000180051AB3: mov     edx, 1E8h
 * 0000000180051AB8: lea     rcx, [rbp+9E10h+var_3D60]; Src
 * 0000000180051ABF: call    sub_1800D4B98
 * 0000000180051AC4: nop
 * 0000000180051AC5: mov     r8, rax
 * 0000000180051AC8: mov     rdx, r13
 * 0000000180051ACB: lea     rcx, [rbp+9E10h+var_3D80]
 * 0000000180051AD2: call    sub_1800494AC
 * 0000000180051AD7: nop
 * 0000000180051AD8: lea     r8, aPixel; "/Pixel"
 * 0000000180051ADF: mov     rdx, rax
 * 0000000180051AE2: lea     rcx, [rbp+9E10h+var_3DA0]
 * 0000000180051AE9: call    sub_180031AE8
 * 0000000180051AEE: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051AF3: mov     rcx, rax
 * 0000000180051AF6: call    sub_1800D4C70
 * 0000000180051AFB: mov     cs:byte_180220044, al
 * 0000000180051B01: lea     rcx, [rbp+9E10h+var_3D80]; void *
 * 0000000180051B08: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051B0D: nop
 * 0000000180051B0E: lea     rcx, [rbp+9E10h+var_3D60]; void *
 * 0000000180051B15: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051B1A: nop
 * 0000000180051B1B: lea     rcx, dword_180220048
 * 0000000180051B22: call    _Init_thread_footer
 * 0000000180051B27: mov     rax, [rdi+rbx*8]
 * 0000000180051B2B: mov     eax, [r15+rax]
 * 0000000180051B2F: cmp     cs:dword_180220050, eax
 * 0000000180051B35: jle     loc_180051C1E
 * 0000000180051B3B: lea     rcx, dword_180220050
 * 0000000180051B42: call    _Init_thread_header
 * 0000000180051B47: cmp     cs:dword_180220050, r14d
 * 0000000180051B4E: jnz     loc_180051C1E
 * 0000000180051B54: lea     rax, unk_180170890
 * 0000000180051B5B: mov     qword ptr [rbp+9E10h+var_9640], rax
 * 0000000180051B62: lea     rax, unk_18017714C
 * 0000000180051B69: mov     qword ptr [rbp+9E10h+var_9640+8], rax
 * 0000000180051B70: movups  xmm0, [rbp+9E10h+var_9640]
 * 0000000180051B77: movups  [rbp+9E10h+var_78F0], xmm0
 * 0000000180051B7E: mov     dword ptr [rbp+9E10h+var_78E0], 5
 * 0000000180051B88: mov     dword ptr [rbp+9E10h+var_78E0+4], esi
 * 0000000180051B8E: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180051B93: movups  xmm0, [rbp+9E10h+var_78E0]
 * 0000000180051B9A: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180051B9F: call    sub_1800496D0
 * 0000000180051BA4: mov     r8, rax
 * 0000000180051BA7: mov     r9d, r12d
 * 0000000180051BAA: mov     edx, 1EAh
 * 0000000180051BAF: lea     rcx, [rbp+9E10h+var_3D00]; Src
 * 0000000180051BB6: call    sub_1800D4B98
 * 0000000180051BBB: nop
 * 0000000180051BBC: mov     r8, rax
 * 0000000180051BBF: mov     rdx, r13
 * 0000000180051BC2: lea     rcx, [rbp+9E10h+var_3D20]
 * 0000000180051BC9: call    sub_1800494AC
 * 0000000180051BCE: nop
 * 0000000180051BCF: lea     r8, aPixel; "/Pixel"
 * 0000000180051BD6: mov     rdx, rax
 * 0000000180051BD9: lea     rcx, [rbp+9E10h+var_3D40]
 * 0000000180051BE0: call    sub_180031AE8
 * 0000000180051BE5: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051BEA: mov     rcx, rax
 * 0000000180051BED: call    sub_1800D4C70
 * 0000000180051BF2: mov     cs:byte_18022004C, al
 * 0000000180051BF8: lea     rcx, [rbp+9E10h+var_3D20]; void *
 * 0000000180051BFF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051C04: nop
 * 0000000180051C05: lea     rcx, [rbp+9E10h+var_3D00]; void *
 * 0000000180051C0C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051C11: nop
 * 0000000180051C12: lea     rcx, dword_180220050
 * 0000000180051C19: call    _Init_thread_footer
 * 0000000180051C1E: mov     rax, [rdi+rbx*8]
 * 0000000180051C22: mov     eax, [r15+rax]
 * 0000000180051C26: cmp     cs:dword_180220058, eax
 * 0000000180051C2C: jle     loc_180051D15
 * 0000000180051C32: lea     rcx, dword_180220058
 * 0000000180051C39: call    _Init_thread_header
 * 0000000180051C3E: cmp     cs:dword_180220058, r14d
 * 0000000180051C45: jnz     loc_180051D15
 * 0000000180051C4B: lea     rax, unk_180177150
 * 0000000180051C52: mov     qword ptr [rbp+9E10h+var_9630], rax
 * 0000000180051C59: lea     rax, unk_18017DA58
 * 0000000180051C60: mov     qword ptr [rbp+9E10h+var_9630+8], rax
 * 0000000180051C67: movups  xmm0, [rbp+9E10h+var_9630]
 * 0000000180051C6E: movups  [rbp+9E10h+var_78D0], xmm0
 * 0000000180051C75: mov     dword ptr [rbp+9E10h+var_78C0], 5
 * 0000000180051C7F: mov     dword ptr [rbp+9E10h+var_78C0+4], esi
 * 0000000180051C85: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180051C8A: movups  xmm0, [rbp+9E10h+var_78C0]
 * 0000000180051C91: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180051C96: call    sub_1800496D0
 * 0000000180051C9B: mov     r8, rax
 * 0000000180051C9E: mov     r9d, r12d
 * 0000000180051CA1: mov     edx, 1F0h
 * 0000000180051CA6: lea     rcx, [rbp+9E10h+var_3CA0]; Src
 * 0000000180051CAD: call    sub_1800D4B98
 * 0000000180051CB2: nop
 * 0000000180051CB3: mov     r8, rax
 * 0000000180051CB6: mov     rdx, r13
 * 0000000180051CB9: lea     rcx, [rbp+9E10h+var_3CC0]
 * 0000000180051CC0: call    sub_1800494AC
 * 0000000180051CC5: nop
 * 0000000180051CC6: lea     r8, aPixel; "/Pixel"
 * 0000000180051CCD: mov     rdx, rax
 * 0000000180051CD0: lea     rcx, [rbp+9E10h+var_3CE0]
 * 0000000180051CD7: call    sub_180031AE8
 * 0000000180051CDC: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051CE1: mov     rcx, rax
 * 0000000180051CE4: call    sub_1800D4C70
 * 0000000180051CE9: mov     cs:byte_180220054, al
 * 0000000180051CEF: lea     rcx, [rbp+9E10h+var_3CC0]; void *
 * 0000000180051CF6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051CFB: nop
 * 0000000180051CFC: lea     rcx, [rbp+9E10h+var_3CA0]; void *
 * 0000000180051D03: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051D08: nop
 * 0000000180051D09: lea     rcx, dword_180220058
 * 0000000180051D10: call    _Init_thread_footer
 * 0000000180051D15: mov     rax, [rdi+rbx*8]
 * 0000000180051D19: mov     eax, [r15+rax]
 * 0000000180051D1D: cmp     cs:dword_180220060, eax
 * 0000000180051D23: jle     loc_180051E0C
 * 0000000180051D29: lea     rcx, dword_180220060
 * 0000000180051D30: call    _Init_thread_header
 * 0000000180051D35: cmp     cs:dword_180220060, r14d
 * 0000000180051D3C: jnz     loc_180051E0C
 * 0000000180051D42: lea     rax, unk_180177150
 * 0000000180051D49: mov     qword ptr [rbp+9E10h+var_9620], rax
 * 0000000180051D50: lea     rax, unk_18017DA58
 * 0000000180051D57: mov     qword ptr [rbp+9E10h+var_9620+8], rax
 * 0000000180051D5E: movups  xmm0, [rbp+9E10h+var_9620]
 * 0000000180051D65: movups  [rbp+9E10h+var_78B0], xmm0
 * 0000000180051D6C: mov     dword ptr [rbp+9E10h+var_78A0], 5
 * 0000000180051D76: mov     dword ptr [rbp+9E10h+var_78A0+4], esi
 * 0000000180051D7C: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180051D81: movups  xmm0, [rbp+9E10h+var_78A0]
 * 0000000180051D88: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180051D8D: call    sub_1800496D0
 * 0000000180051D92: mov     r8, rax
 * 0000000180051D95: mov     r9d, r12d
 * 0000000180051D98: mov     edx, 1F2h
 * 0000000180051D9D: lea     rcx, [rbp+9E10h+var_3C40]; Src
 * 0000000180051DA4: call    sub_1800D4B98
 * 0000000180051DA9: nop
 * 0000000180051DAA: mov     r8, rax
 * 0000000180051DAD: mov     rdx, r13
 * 0000000180051DB0: lea     rcx, [rbp+9E10h+var_3C60]
 * 0000000180051DB7: call    sub_1800494AC
 * 0000000180051DBC: nop
 * 0000000180051DBD: lea     r8, aPixel; "/Pixel"
 * 0000000180051DC4: mov     rdx, rax
 * 0000000180051DC7: lea     rcx, [rbp+9E10h+var_3C80]
 * 0000000180051DCE: call    sub_180031AE8
 * 0000000180051DD3: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051DD8: mov     rcx, rax
 * 0000000180051DDB: call    sub_1800D4C70
 * 0000000180051DE0: mov     cs:byte_18022005C, al
 * 0000000180051DE6: lea     rcx, [rbp+9E10h+var_3C60]; void *
 * 0000000180051DED: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051DF2: nop
 * 0000000180051DF3: lea     rcx, [rbp+9E10h+var_3C40]; void *
 * 0000000180051DFA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051DFF: nop
 * 0000000180051E00: lea     rcx, dword_180220060
 * 0000000180051E07: call    _Init_thread_footer
 * 0000000180051E0C: mov     rax, [rdi+rbx*8]
 * 0000000180051E10: mov     eax, [r15+rax]
 * 0000000180051E14: cmp     cs:dword_180220068, eax
 * 0000000180051E1A: jle     loc_180051F03
 * 0000000180051E20: lea     rcx, dword_180220068
 * 0000000180051E27: call    _Init_thread_header
 * 0000000180051E2C: cmp     cs:dword_180220068, r14d
 * 0000000180051E33: jnz     loc_180051F03
 * 0000000180051E39: lea     rax, unk_180181080
 * 0000000180051E40: mov     qword ptr [rbp+9E10h+var_9610], rax
 * 0000000180051E47: lea     rax, unk_180187B3C
 * 0000000180051E4E: mov     qword ptr [rbp+9E10h+var_9610+8], rax
 * 0000000180051E55: movups  xmm0, [rbp+9E10h+var_9610]
 * 0000000180051E5C: movups  [rbp+9E10h+var_7890], xmm0
 * 0000000180051E63: mov     dword ptr [rbp+9E10h+var_7880], 5
 * 0000000180051E6D: mov     dword ptr [rbp+9E10h+var_7880+4], esi
 * 0000000180051E73: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180051E78: movups  xmm0, [rbp+9E10h+var_7880]
 * 0000000180051E7F: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180051E84: call    sub_1800496D0
 * 0000000180051E89: mov     r8, rax
 * 0000000180051E8C: mov     r9d, r12d
 * 0000000180051E8F: mov     edx, 1F8h
 * 0000000180051E94: lea     rcx, [rbp+9E10h+var_3BE0]; Src
 * 0000000180051E9B: call    sub_1800D4B98
 * 0000000180051EA0: nop
 * 0000000180051EA1: mov     r8, rax
 * 0000000180051EA4: mov     rdx, r13
 * 0000000180051EA7: lea     rcx, [rbp+9E10h+var_3C00]
 * 0000000180051EAE: call    sub_1800494AC
 * 0000000180051EB3: nop
 * 0000000180051EB4: lea     r8, aPixel; "/Pixel"
 * 0000000180051EBB: mov     rdx, rax
 * 0000000180051EBE: lea     rcx, [rbp+9E10h+var_3C20]
 * 0000000180051EC5: call    sub_180031AE8
 * 0000000180051ECA: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051ECF: mov     rcx, rax
 * 0000000180051ED2: call    sub_1800D4C70
 * 0000000180051ED7: mov     cs:byte_180220064, al
 * 0000000180051EDD: lea     rcx, [rbp+9E10h+var_3C00]; void *
 * 0000000180051EE4: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051EE9: nop
 * 0000000180051EEA: lea     rcx, [rbp+9E10h+var_3BE0]; void *
 * 0000000180051EF1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051EF6: nop
 * 0000000180051EF7: lea     rcx, dword_180220068
 * 0000000180051EFE: call    _Init_thread_footer
 * 0000000180051F03: mov     rax, [rdi+rbx*8]
 * 0000000180051F07: mov     eax, [r15+rax]
 * 0000000180051F0B: cmp     cs:dword_180220070, eax
 * 0000000180051F11: jle     loc_180051FFA
 * 0000000180051F17: lea     rcx, dword_180220070
 * 0000000180051F1E: call    _Init_thread_header
 * 0000000180051F23: cmp     cs:dword_180220070, r14d
 * 0000000180051F2A: jnz     loc_180051FFA
 * 0000000180051F30: lea     rax, unk_180181080
 * 0000000180051F37: mov     qword ptr [rbp+9E10h+var_9600], rax
 * 0000000180051F3E: lea     rax, unk_180187B3C
 * 0000000180051F45: mov     qword ptr [rbp+9E10h+var_9600+8], rax
 * 0000000180051F4C: movups  xmm0, [rbp+9E10h+var_9600]
 * 0000000180051F53: movups  [rbp+9E10h+var_7870], xmm0
 * 0000000180051F5A: mov     dword ptr [rbp+9E10h+var_7860], 5
 * 0000000180051F64: mov     dword ptr [rbp+9E10h+var_7860+4], esi
 * 0000000180051F6A: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180051F6F: movups  xmm0, [rbp+9E10h+var_7860]
 * 0000000180051F76: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180051F7B: call    sub_1800496D0
 * 0000000180051F80: mov     r8, rax
 * 0000000180051F83: mov     r9d, r12d
 * 0000000180051F86: mov     edx, 1FAh
 * 0000000180051F8B: lea     rcx, [rbp+9E10h+var_3B80]; Src
 * 0000000180051F92: call    sub_1800D4B98
 * 0000000180051F97: nop
 * 0000000180051F98: mov     r8, rax
 * 0000000180051F9B: mov     rdx, r13
 * 0000000180051F9E: lea     rcx, [rbp+9E10h+var_3BA0]
 * 0000000180051FA5: call    sub_1800494AC
 * 0000000180051FAA: nop
 * 0000000180051FAB: lea     r8, aPixel; "/Pixel"
 * 0000000180051FB2: mov     rdx, rax
 * 0000000180051FB5: lea     rcx, [rbp+9E10h+var_3BC0]
 * 0000000180051FBC: call    sub_180031AE8
 * 0000000180051FC1: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180051FC6: mov     rcx, rax
 * 0000000180051FC9: call    sub_1800D4C70
 * 0000000180051FCE: mov     cs:byte_18022006C, al
 * 0000000180051FD4: lea     rcx, [rbp+9E10h+var_3BA0]; void *
 * 0000000180051FDB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051FE0: nop
 * 0000000180051FE1: lea     rcx, [rbp+9E10h+var_3B80]; void *
 * 0000000180051FE8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180051FED: nop
 * 0000000180051FEE: lea     rcx, dword_180220070
 * 0000000180051FF5: call    _Init_thread_footer
 * 0000000180051FFA: mov     rax, [rdi+rbx*8]
 * 0000000180051FFE: mov     eax, [r15+rax]
 * 0000000180052002: cmp     cs:dword_180220078, eax
 * 0000000180052008: jle     loc_1800520EA
 * 000000018005200E: lea     rcx, dword_180220078
 * 0000000180052015: call    _Init_thread_header
 * 000000018005201A: cmp     cs:dword_180220078, r14d
 * 0000000180052021: jnz     loc_1800520EA
 * 0000000180052027: lea     rax, unk_180187B40
 * 000000018005202E: mov     qword ptr [rbp+9E10h+var_95F0], rax
 * 0000000180052035: lea     rax, unk_180188B58
 * 000000018005203C: mov     qword ptr [rbp+9E10h+var_95F0+8], rax
 * 0000000180052043: movups  xmm0, [rbp+9E10h+var_95F0]
 * 000000018005204A: movups  [rbp+9E10h+var_7850], xmm0
 * 0000000180052051: mov     dword ptr [rbp+9E10h+var_7840], esi
 * 0000000180052057: mov     dword ptr [rbp+9E10h+var_7840+4], esi
 * 000000018005205D: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052062: movups  xmm0, [rbp+9E10h+var_7840]
 * 0000000180052069: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005206E: call    sub_1800496D0
 * 0000000180052073: mov     r8, rax
 * 0000000180052076: mov     r9d, r12d
 * 0000000180052079: xor     edx, edx
 * 000000018005207B: lea     rcx, [rbp+9E10h+var_3B20]; Src
 * 0000000180052082: call    sub_1800D4B98
 * 0000000180052087: nop
 * 0000000180052088: mov     r8, rax
 * 000000018005208B: mov     rdx, r13
 * 000000018005208E: lea     rcx, [rbp+9E10h+var_3B40]
 * 0000000180052095: call    sub_1800494AC
 * 000000018005209A: nop
 * 000000018005209B: lea     r8, aVertex; "/Vertex"
 * 00000001800520A2: mov     rdx, rax
 * 00000001800520A5: lea     rcx, [rbp+9E10h+var_3B60]
 * 00000001800520AC: call    sub_180031AE8
 * 00000001800520B1: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800520B6: mov     rcx, rax
 * 00000001800520B9: call    sub_1800D4C70
 * 00000001800520BE: mov     cs:byte_180220074, al
 * 00000001800520C4: lea     rcx, [rbp+9E10h+var_3B40]; void *
 * 00000001800520CB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800520D0: nop
 * 00000001800520D1: lea     rcx, [rbp+9E10h+var_3B20]; void *
 * 00000001800520D8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800520DD: nop
 * 00000001800520DE: lea     rcx, dword_180220078
 * 00000001800520E5: call    _Init_thread_footer
 * 00000001800520EA: mov     rax, [rdi+rbx*8]
 * 00000001800520EE: mov     eax, [r15+rax]
 * 00000001800520F2: cmp     cs:dword_180220080, eax
 * 00000001800520F8: jle     loc_1800521DB
 * 00000001800520FE: lea     rcx, dword_180220080
 * 0000000180052105: call    _Init_thread_header
 * 000000018005210A: cmp     cs:dword_180220080, r14d
 * 0000000180052111: jnz     loc_1800521DB
 * 0000000180052117: lea     rax, unk_180188B60
 * 000000018005211E: mov     qword ptr [rbp+9E10h+var_95E0], rax
 * 0000000180052125: lea     rax, unk_1801890E4
 * 000000018005212C: mov     qword ptr [rbp+9E10h+var_95E0+8], rax
 * 0000000180052133: movups  xmm0, [rbp+9E10h+var_95E0]
 * 000000018005213A: movups  [rbp+9E10h+var_7830], xmm0
 * 0000000180052141: mov     dword ptr [rbp+9E10h+var_7820], esi
 * 0000000180052147: mov     dword ptr [rbp+9E10h+var_7820+4], esi
 * 000000018005214D: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052152: movups  xmm0, [rbp+9E10h+var_7820]
 * 0000000180052159: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005215E: call    sub_1800496D0
 * 0000000180052163: mov     r8, rax
 * 0000000180052166: mov     r9d, r12d
 * 0000000180052169: mov     rdx, rsi
 * 000000018005216C: lea     rcx, [rbp+9E10h+var_3AC0]; Src
 * 0000000180052173: call    sub_1800D4B98
 * 0000000180052178: nop
 * 0000000180052179: mov     r8, rax
 * 000000018005217C: mov     rdx, r13
 * 000000018005217F: lea     rcx, [rbp+9E10h+var_3AE0]
 * 0000000180052186: call    sub_1800494AC
 * 000000018005218B: nop
 * 000000018005218C: lea     r8, aVertex; "/Vertex"
 * 0000000180052193: mov     rdx, rax
 * 0000000180052196: lea     rcx, [rbp+9E10h+var_3B00]
 * 000000018005219D: call    sub_180031AE8
 * 00000001800521A2: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800521A7: mov     rcx, rax
 * 00000001800521AA: call    sub_1800D4C70
 * 00000001800521AF: mov     cs:byte_18022007C, al
 * 00000001800521B5: lea     rcx, [rbp+9E10h+var_3AE0]; void *
 * 00000001800521BC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800521C1: nop
 * 00000001800521C2: lea     rcx, [rbp+9E10h+var_3AC0]; void *
 * 00000001800521C9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800521CE: nop
 * 00000001800521CF: lea     rcx, dword_180220080
 * 00000001800521D6: call    _Init_thread_footer
 * 00000001800521DB: mov     rax, [rdi+rbx*8]
 * 00000001800521DF: mov     ecx, [r15+rax]
 * 00000001800521E3: cmp     cs:dword_180220088, ecx
 * 00000001800521E9: jle     loc_1800522CE
 * 00000001800521EF: lea     rcx, dword_180220088
 * 00000001800521F6: call    _Init_thread_header
 * 00000001800521FB: cmp     cs:dword_180220088, r14d
 * 0000000180052202: jnz     loc_1800522CE
 * 0000000180052208: lea     rax, unk_180187B40
 * 000000018005220F: mov     qword ptr [rbp+9E10h+var_95D0], rax
 * 0000000180052216: lea     rax, unk_180188B58
 * 000000018005221D: mov     qword ptr [rbp+9E10h+var_95D0+8], rax
 * 0000000180052224: movups  xmm0, [rbp+9E10h+var_95D0]
 * 000000018005222B: movups  [rbp+9E10h+var_7810], xmm0
 * 0000000180052232: mov     dword ptr [rbp+9E10h+var_7800], esi
 * 0000000180052238: mov     dword ptr [rbp+9E10h+var_7800+4], esi
 * 000000018005223E: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052243: movups  xmm0, [rbp+9E10h+var_7800]
 * 000000018005224A: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005224F: call    sub_1800496D0
 * 0000000180052254: mov     r8, rax
 * 0000000180052257: mov     r9d, r12d
 * 000000018005225A: mov     edx, 2
 * 000000018005225F: lea     rcx, [rbp+9E10h+var_3A60]; Src
 * 0000000180052266: call    sub_1800D4B98
 * 000000018005226B: nop
 * 000000018005226C: mov     r8, rax
 * 000000018005226F: mov     rdx, r13
 * 0000000180052272: lea     rcx, [rbp+9E10h+var_3A80]
 * 0000000180052279: call    sub_1800494AC
 * 000000018005227E: nop
 * 000000018005227F: lea     r8, aVertex; "/Vertex"
 * 0000000180052286: mov     rdx, rax
 * 0000000180052289: lea     rcx, [rbp+9E10h+var_3AA0]
 * 0000000180052290: call    sub_180031AE8
 * 0000000180052295: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005229A: mov     rcx, rax
 * 000000018005229D: call    sub_1800D4C70
 * 00000001800522A2: mov     cs:byte_180220084, al
 * 00000001800522A8: lea     rcx, [rbp+9E10h+var_3A80]; void *
 * 00000001800522AF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800522B4: nop
 * 00000001800522B5: lea     rcx, [rbp+9E10h+var_3A60]; void *
 * 00000001800522BC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800522C1: nop
 * 00000001800522C2: lea     rcx, dword_180220088
 * 00000001800522C9: call    _Init_thread_footer
 * 00000001800522CE: mov     rax, [rdi+rbx*8]
 * 00000001800522D2: mov     ecx, [r15+rax]
 * 00000001800522D6: cmp     cs:dword_180220090, ecx
 * 00000001800522DC: jle     loc_1800523C1
 * 00000001800522E2: lea     rcx, dword_180220090
 * 00000001800522E9: call    _Init_thread_header
 * 00000001800522EE: cmp     cs:dword_180220090, r14d
 * 00000001800522F5: jnz     loc_1800523C1
 * 00000001800522FB: lea     rax, unk_180187B40
 * 0000000180052302: mov     qword ptr [rbp+9E10h+var_95C0], rax
 * 0000000180052309: lea     rax, unk_180188B58
 * 0000000180052310: mov     qword ptr [rbp+9E10h+var_95C0+8], rax
 * 0000000180052317: movups  xmm0, [rbp+9E10h+var_95C0]
 * 000000018005231E: movups  [rbp+9E10h+var_77F0], xmm0
 * 0000000180052325: mov     dword ptr [rbp+9E10h+var_77E0], esi
 * 000000018005232B: mov     dword ptr [rbp+9E10h+var_77E0+4], esi
 * 0000000180052331: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052336: movups  xmm0, [rbp+9E10h+var_77E0]
 * 000000018005233D: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180052342: call    sub_1800496D0
 * 0000000180052347: mov     r8, rax
 * 000000018005234A: mov     r9d, r12d
 * 000000018005234D: mov     edx, 4
 * 0000000180052352: lea     rcx, [rbp+9E10h+var_3A00]; Src
 * 0000000180052359: call    sub_1800D4B98
 * 000000018005235E: nop
 * 000000018005235F: mov     r8, rax
 * 0000000180052362: mov     rdx, r13
 * 0000000180052365: lea     rcx, [rbp+9E10h+var_3A20]
 * 000000018005236C: call    sub_1800494AC
 * 0000000180052371: nop
 * 0000000180052372: lea     r8, aVertex; "/Vertex"
 * 0000000180052379: mov     rdx, rax
 * 000000018005237C: lea     rcx, [rbp+9E10h+var_3A40]
 * 0000000180052383: call    sub_180031AE8
 * 0000000180052388: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005238D: mov     rcx, rax
 * 0000000180052390: call    sub_1800D4C70
 * 0000000180052395: mov     cs:byte_18022008C, al
 * 000000018005239B: lea     rcx, [rbp+9E10h+var_3A20]; void *
 * 00000001800523A2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800523A7: nop
 * 00000001800523A8: lea     rcx, [rbp+9E10h+var_3A00]; void *
 * 00000001800523AF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800523B4: nop
 * 00000001800523B5: lea     rcx, dword_180220090
 * 00000001800523BC: call    _Init_thread_footer
 * 00000001800523C1: mov     rax, [rdi+rbx*8]
 * 00000001800523C5: mov     ecx, [r15+rax]
 * 00000001800523C9: cmp     cs:dword_180220098, ecx
 * 00000001800523CF: jle     loc_1800524B4
 * 00000001800523D5: lea     rcx, dword_180220098
 * 00000001800523DC: call    _Init_thread_header
 * 00000001800523E1: cmp     cs:dword_180220098, r14d
 * 00000001800523E8: jnz     loc_1800524B4
 * 00000001800523EE: lea     rax, unk_180188B60
 * 00000001800523F5: mov     qword ptr [rbp+9E10h+var_95B0], rax
 * 00000001800523FC: lea     rax, unk_1801890E4
 * 0000000180052403: mov     qword ptr [rbp+9E10h+var_95B0+8], rax
 * 000000018005240A: movups  xmm0, [rbp+9E10h+var_95B0]
 * 0000000180052411: movups  [rbp+9E10h+var_77D0], xmm0
 * 0000000180052418: mov     dword ptr [rbp+9E10h+var_77C0], esi
 * 000000018005241E: mov     dword ptr [rbp+9E10h+var_77C0+4], esi
 * 0000000180052424: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052429: movups  xmm0, [rbp+9E10h+var_77C0]
 * 0000000180052430: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180052435: call    sub_1800496D0
 * 000000018005243A: mov     r8, rax
 * 000000018005243D: mov     r9d, r12d
 * 0000000180052440: mov     edx, 5
 * 0000000180052445: lea     rcx, [rbp+9E10h+var_39A0]; Src
 * 000000018005244C: call    sub_1800D4B98
 * 0000000180052451: nop
 * 0000000180052452: mov     r8, rax
 * 0000000180052455: mov     rdx, r13
 * 0000000180052458: lea     rcx, [rbp+9E10h+var_39C0]
 * 000000018005245F: call    sub_1800494AC
 * 0000000180052464: nop
 * 0000000180052465: lea     r8, aVertex; "/Vertex"
 * 000000018005246C: mov     rdx, rax
 * 000000018005246F: lea     rcx, [rbp+9E10h+var_39E0]
 * 0000000180052476: call    sub_180031AE8
 * 000000018005247B: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180052480: mov     rcx, rax
 * 0000000180052483: call    sub_1800D4C70
 * 0000000180052488: mov     cs:byte_180220094, al
 * 000000018005248E: lea     rcx, [rbp+9E10h+var_39C0]; void *
 * 0000000180052495: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005249A: nop
 * 000000018005249B: lea     rcx, [rbp+9E10h+var_39A0]; void *
 * 00000001800524A2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800524A7: nop
 * 00000001800524A8: lea     rcx, dword_180220098
 * 00000001800524AF: call    _Init_thread_footer
 * 00000001800524B4: mov     rax, [rdi+rbx*8]
 * 00000001800524B8: mov     ecx, [r15+rax]
 * 00000001800524BC: cmp     cs:dword_1802200A0, ecx
 * 00000001800524C2: jle     loc_1800525A7
 * 00000001800524C8: lea     rcx, dword_1802200A0
 * 00000001800524CF: call    _Init_thread_header
 * 00000001800524D4: cmp     cs:dword_1802200A0, r14d
 * 00000001800524DB: jnz     loc_1800525A7
 * 00000001800524E1: lea     rax, unk_180187B40
 * 00000001800524E8: mov     qword ptr [rbp+9E10h+var_95A0], rax
 * 00000001800524EF: lea     rax, unk_180188B58
 * 00000001800524F6: mov     qword ptr [rbp+9E10h+var_95A0+8], rax
 * 00000001800524FD: movups  xmm0, [rbp+9E10h+var_95A0]
 * 0000000180052504: movups  [rbp+9E10h+var_77B0], xmm0
 * 000000018005250B: mov     dword ptr [rbp+9E10h+var_77A0], esi
 * 0000000180052511: mov     dword ptr [rbp+9E10h+var_77A0+4], esi
 * 0000000180052517: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005251C: movups  xmm0, [rbp+9E10h+var_77A0]
 * 0000000180052523: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180052528: call    sub_1800496D0
 * 000000018005252D: mov     r8, rax
 * 0000000180052530: mov     r9d, r12d
 * 0000000180052533: mov     edx, 6
 * 0000000180052538: lea     rcx, [rbp+9E10h+var_3940]; Src
 * 000000018005253F: call    sub_1800D4B98
 * 0000000180052544: nop
 * 0000000180052545: mov     r8, rax
 * 0000000180052548: mov     rdx, r13
 * 000000018005254B: lea     rcx, [rbp+9E10h+var_3960]
 * 0000000180052552: call    sub_1800494AC
 * 0000000180052557: nop
 * 0000000180052558: lea     r8, aVertex; "/Vertex"
 * 000000018005255F: mov     rdx, rax
 * 0000000180052562: lea     rcx, [rbp+9E10h+var_3980]
 * 0000000180052569: call    sub_180031AE8
 * 000000018005256E: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180052573: mov     rcx, rax
 * 0000000180052576: call    sub_1800D4C70
 * 000000018005257B: mov     cs:byte_18022009C, al
 * 0000000180052581: lea     rcx, [rbp+9E10h+var_3960]; void *
 * 0000000180052588: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005258D: nop
 * 000000018005258E: lea     rcx, [rbp+9E10h+var_3940]; void *
 * 0000000180052595: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005259A: nop
 * 000000018005259B: lea     rcx, dword_1802200A0
 * 00000001800525A2: call    _Init_thread_footer
 * 00000001800525A7: mov     rax, [rdi+rbx*8]
 * 00000001800525AB: mov     ecx, [r15+rax]
 * 00000001800525AF: cmp     cs:dword_1802200A8, ecx
 * 00000001800525B5: jle     loc_18005269A
 * 00000001800525BB: lea     rcx, dword_1802200A8
 * 00000001800525C2: call    _Init_thread_header
 * 00000001800525C7: cmp     cs:dword_1802200A8, r14d
 * 00000001800525CE: jnz     loc_18005269A
 * 00000001800525D4: lea     rax, unk_180187B40
 * 00000001800525DB: mov     qword ptr [rbp+9E10h+var_9590], rax
 * 00000001800525E2: lea     rax, unk_180188B58
 * 00000001800525E9: mov     qword ptr [rbp+9E10h+var_9590+8], rax
 * 00000001800525F0: movups  xmm0, [rbp+9E10h+var_9590]
 * 00000001800525F7: movups  [rbp+9E10h+var_7790], xmm0
 * 00000001800525FE: mov     dword ptr [rbp+9E10h+var_7780], esi
 * 0000000180052604: mov     dword ptr [rbp+9E10h+var_7780+4], esi
 * 000000018005260A: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005260F: movups  xmm0, [rbp+9E10h+var_7780]
 * 0000000180052616: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005261B: call    sub_1800496D0
 * 0000000180052620: mov     r8, rax
 * 0000000180052623: mov     r9d, r12d
 * 0000000180052626: mov     edx, 8
 * 000000018005262B: lea     rcx, [rbp+9E10h+var_38E0]; Src
 * 0000000180052632: call    sub_1800D4B98
 * 0000000180052637: nop
 * 0000000180052638: mov     r8, rax
 * 000000018005263B: mov     rdx, r13
 * 000000018005263E: lea     rcx, [rbp+9E10h+var_3900]
 * 0000000180052645: call    sub_1800494AC
 * 000000018005264A: nop
 * 000000018005264B: lea     r8, aVertex; "/Vertex"
 * 0000000180052652: mov     rdx, rax
 * 0000000180052655: lea     rcx, [rbp+9E10h+var_3920]
 * 000000018005265C: call    sub_180031AE8
 * 0000000180052661: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180052666: mov     rcx, rax
 * 0000000180052669: call    sub_1800D4C70
 * 000000018005266E: mov     cs:byte_1802200A4, al
 * 0000000180052674: lea     rcx, [rbp+9E10h+var_3900]; void *
 * 000000018005267B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052680: nop
 * 0000000180052681: lea     rcx, [rbp+9E10h+var_38E0]; void *
 * 0000000180052688: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005268D: nop
 * 000000018005268E: lea     rcx, dword_1802200A8
 * 0000000180052695: call    _Init_thread_footer
 * 000000018005269A: mov     rax, [rdi+rbx*8]
 * 000000018005269E: mov     ecx, [r15+rax]
 * 00000001800526A2: cmp     cs:dword_1802200B0, ecx
 * 00000001800526A8: jle     loc_18005278B
 * 00000001800526AE: lea     rcx, dword_1802200B0
 * 00000001800526B5: call    _Init_thread_header
 * 00000001800526BA: cmp     cs:dword_1802200B0, r14d
 * 00000001800526C1: jnz     loc_18005278B
 * 00000001800526C7: lea     rax, unk_1801890F0
 * 00000001800526CE: mov     qword ptr [rbp+9E10h+var_9580], rax
 * 00000001800526D5: lea     rax, unk_1801897FC
 * 00000001800526DC: mov     qword ptr [rbp+9E10h+var_9580+8], rax
 * 00000001800526E3: movups  xmm0, [rbp+9E10h+var_9580]
 * 00000001800526EA: movups  [rbp+9E10h+var_7770], xmm0
 * 00000001800526F1: mov     dword ptr [rbp+9E10h+var_7760], esi
 * 00000001800526F7: mov     dword ptr [rbp+9E10h+var_7760+4], esi
 * 00000001800526FD: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052702: movups  xmm0, [rbp+9E10h+var_7760]
 * 0000000180052709: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005270E: call    sub_1800496D0
 * 0000000180052713: mov     r8, rax
 * 0000000180052716: mov     r9d, r12d
 * 0000000180052719: mov     rdx, r12
 * 000000018005271C: lea     rcx, [rbp+9E10h+var_3880]; Src
 * 0000000180052723: call    sub_1800D4B98
 * 0000000180052728: nop
 * 0000000180052729: mov     r8, rax
 * 000000018005272C: mov     rdx, r13
 * 000000018005272F: lea     rcx, [rbp+9E10h+var_38A0]
 * 0000000180052736: call    sub_1800494AC
 * 000000018005273B: nop
 * 000000018005273C: lea     r8, aVertex; "/Vertex"
 * 0000000180052743: mov     rdx, rax
 * 0000000180052746: lea     rcx, [rbp+9E10h+var_38C0]
 * 000000018005274D: call    sub_180031AE8
 * 0000000180052752: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180052757: mov     rcx, rax
 * 000000018005275A: call    sub_1800D4C70
 * 000000018005275F: mov     cs:byte_1802200AC, al
 * 0000000180052765: lea     rcx, [rbp+9E10h+var_38A0]; void *
 * 000000018005276C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052771: nop
 * 0000000180052772: lea     rcx, [rbp+9E10h+var_3880]; void *
 * 0000000180052779: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005277E: nop
 * 000000018005277F: lea     rcx, dword_1802200B0
 * 0000000180052786: call    _Init_thread_footer
 * 000000018005278B: mov     rax, [rdi+rbx*8]
 * 000000018005278F: mov     ecx, [r15+rax]
 * 0000000180052793: cmp     cs:dword_1802200B8, ecx
 * 0000000180052799: jle     loc_18005287E
 * 000000018005279F: lea     rcx, dword_1802200B8
 * 00000001800527A6: call    _Init_thread_header
 * 00000001800527AB: cmp     cs:dword_1802200B8, r14d
 * 00000001800527B2: jnz     loc_18005287E
 * 00000001800527B8: lea     rax, unk_180187B40
 * 00000001800527BF: mov     qword ptr [rbp+9E10h+var_9570], rax
 * 00000001800527C6: lea     rax, unk_180188B58
 * 00000001800527CD: mov     qword ptr [rbp+9E10h+var_9570+8], rax
 * 00000001800527D4: movups  xmm0, [rbp+9E10h+var_9570]
 * 00000001800527DB: movups  [rbp+9E10h+var_7750], xmm0
 * 00000001800527E2: mov     dword ptr [rbp+9E10h+var_7740], esi
 * 00000001800527E8: mov     dword ptr [rbp+9E10h+var_7740+4], esi
 * 00000001800527EE: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800527F3: movups  xmm0, [rbp+9E10h+var_7740]
 * 00000001800527FA: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800527FF: call    sub_1800496D0
 * 0000000180052804: mov     r8, rax
 * 0000000180052807: mov     r9d, r12d
 * 000000018005280A: mov     edx, 0Ah
 * 000000018005280F: lea     rcx, [rbp+9E10h+var_3820]; Src
 * 0000000180052816: call    sub_1800D4B98
 * 000000018005281B: nop
 * 000000018005281C: mov     r8, rax
 * 000000018005281F: mov     rdx, r13
 * 0000000180052822: lea     rcx, [rbp+9E10h+var_3840]
 * 0000000180052829: call    sub_1800494AC
 * 000000018005282E: nop
 * 000000018005282F: lea     r8, aVertex; "/Vertex"
 * 0000000180052836: mov     rdx, rax
 * 0000000180052839: lea     rcx, [rbp+9E10h+var_3860]
 * 0000000180052840: call    sub_180031AE8
 * 0000000180052845: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005284A: mov     rcx, rax
 * 000000018005284D: call    sub_1800D4C70
 * 0000000180052852: mov     cs:byte_1802200B4, al
 * 0000000180052858: lea     rcx, [rbp+9E10h+var_3840]; void *
 * 000000018005285F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052864: nop
 * 0000000180052865: lea     rcx, [rbp+9E10h+var_3820]; void *
 * 000000018005286C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052871: nop
 * 0000000180052872: lea     rcx, dword_1802200B8
 * 0000000180052879: call    _Init_thread_footer
 * 000000018005287E: mov     rax, [rdi+rbx*8]
 * 0000000180052882: mov     ecx, [r15+rax]
 * 0000000180052886: cmp     cs:dword_1802200C0, ecx
 * 000000018005288C: jle     loc_180052971
 * 0000000180052892: lea     rcx, dword_1802200C0
 * 0000000180052899: call    _Init_thread_header
 * 000000018005289E: cmp     cs:dword_1802200C0, r14d
 * 00000001800528A5: jnz     loc_180052971
 * 00000001800528AB: lea     rax, unk_180187B40
 * 00000001800528B2: mov     qword ptr [rbp+9E10h+var_9560], rax
 * 00000001800528B9: lea     rax, unk_180188B58
 * 00000001800528C0: mov     qword ptr [rbp+9E10h+var_9560+8], rax
 * 00000001800528C7: movups  xmm0, [rbp+9E10h+var_9560]
 * 00000001800528CE: movups  [rbp+9E10h+var_7730], xmm0
 * 00000001800528D5: mov     dword ptr [rbp+9E10h+var_7720], esi
 * 00000001800528DB: mov     dword ptr [rbp+9E10h+var_7720+4], esi
 * 00000001800528E1: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800528E6: movups  xmm0, [rbp+9E10h+var_7720]
 * 00000001800528ED: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800528F2: call    sub_1800496D0
 * 00000001800528F7: mov     r8, rax
 * 00000001800528FA: mov     r9d, r12d
 * 00000001800528FD: mov     edx, 10h
 * 0000000180052902: lea     rcx, [rbp+9E10h+var_37C0]; Src
 * 0000000180052909: call    sub_1800D4B98
 * 000000018005290E: nop
 * 000000018005290F: mov     r8, rax
 * 0000000180052912: mov     rdx, r13
 * 0000000180052915: lea     rcx, [rbp+9E10h+var_37E0]
 * 000000018005291C: call    sub_1800494AC
 * 0000000180052921: nop
 * 0000000180052922: lea     r8, aVertex; "/Vertex"
 * 0000000180052929: mov     rdx, rax
 * 000000018005292C: lea     rcx, [rbp+9E10h+var_3800]
 * 0000000180052933: call    sub_180031AE8
 * 0000000180052938: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005293D: mov     rcx, rax
 * 0000000180052940: call    sub_1800D4C70
 * 0000000180052945: mov     cs:byte_1802200BC, al
 * 000000018005294B: lea     rcx, [rbp+9E10h+var_37E0]; void *
 * 0000000180052952: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052957: nop
 * 0000000180052958: lea     rcx, [rbp+9E10h+var_37C0]; void *
 * 000000018005295F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052964: nop
 * 0000000180052965: lea     rcx, dword_1802200C0
 * 000000018005296C: call    _Init_thread_footer
 * 0000000180052971: mov     rax, [rdi+rbx*8]
 * 0000000180052975: mov     ecx, [r15+rax]
 * 0000000180052979: cmp     cs:dword_1802200C8, ecx
 * 000000018005297F: jle     loc_180052A64
 * 0000000180052985: lea     rcx, dword_1802200C8
 * 000000018005298C: call    _Init_thread_header
 * 0000000180052991: cmp     cs:dword_1802200C8, r14d
 * 0000000180052998: jnz     loc_180052A64
 * 000000018005299E: lea     rax, unk_180187B40
 * 00000001800529A5: mov     qword ptr [rbp+9E10h+var_9550], rax
 * 00000001800529AC: lea     rax, unk_180188B58
 * 00000001800529B3: mov     qword ptr [rbp+9E10h+var_9550+8], rax
 * 00000001800529BA: movups  xmm0, [rbp+9E10h+var_9550]
 * 00000001800529C1: movups  [rbp+9E10h+var_7710], xmm0
 * 00000001800529C8: mov     dword ptr [rbp+9E10h+var_7700], esi
 * 00000001800529CE: mov     dword ptr [rbp+9E10h+var_7700+4], esi
 * 00000001800529D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800529D9: movups  xmm0, [rbp+9E10h+var_7700]
 * 00000001800529E0: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800529E5: call    sub_1800496D0
 * 00000001800529EA: mov     r8, rax
 * 00000001800529ED: mov     r9d, r12d
 * 00000001800529F0: mov     edx, 12h
 * 00000001800529F5: lea     rcx, [rbp+9E10h+var_3760]; Src
 * 00000001800529FC: call    sub_1800D4B98
 * 0000000180052A01: nop
 * 0000000180052A02: mov     r8, rax
 * 0000000180052A05: mov     rdx, r13
 * 0000000180052A08: lea     rcx, [rbp+9E10h+var_3780]
 * 0000000180052A0F: call    sub_1800494AC
 * 0000000180052A14: nop
 * 0000000180052A15: lea     r8, aVertex; "/Vertex"
 * 0000000180052A1C: mov     rdx, rax
 * 0000000180052A1F: lea     rcx, [rbp+9E10h+var_37A0]
 * 0000000180052A26: call    sub_180031AE8
 * 0000000180052A2B: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180052A30: mov     rcx, rax
 * 0000000180052A33: call    sub_1800D4C70
 * 0000000180052A38: mov     cs:byte_1802200C4, al
 * 0000000180052A3E: lea     rcx, [rbp+9E10h+var_3780]; void *
 * 0000000180052A45: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052A4A: nop
 * 0000000180052A4B: lea     rcx, [rbp+9E10h+var_3760]; void *
 * 0000000180052A52: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052A57: nop
 * 0000000180052A58: lea     rcx, dword_1802200C8
 * 0000000180052A5F: call    _Init_thread_footer
 * 0000000180052A64: mov     rax, [rdi+rbx*8]
 * 0000000180052A68: mov     ecx, [r15+rax]
 * 0000000180052A6C: cmp     cs:dword_1802200D0, ecx
 * 0000000180052A72: jle     loc_180052B57
 * 0000000180052A78: lea     rcx, dword_1802200D0
 * 0000000180052A7F: call    _Init_thread_header
 * 0000000180052A84: cmp     cs:dword_1802200D0, r14d
 * 0000000180052A8B: jnz     loc_180052B57
 * 0000000180052A91: lea     rax, unk_180187B40
 * 0000000180052A98: mov     qword ptr [rbp+9E10h+var_9540], rax
 * 0000000180052A9F: lea     rax, unk_180188B58
 * 0000000180052AA6: mov     qword ptr [rbp+9E10h+var_9540+8], rax
 * 0000000180052AAD: movups  xmm0, [rbp+9E10h+var_9540]
 * 0000000180052AB4: movups  [rbp+9E10h+var_76F0], xmm0
 * 0000000180052ABB: mov     dword ptr [rbp+9E10h+var_76E0], esi
 * 0000000180052AC1: mov     dword ptr [rbp+9E10h+var_76E0+4], esi
 * 0000000180052AC7: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052ACC: movups  xmm0, [rbp+9E10h+var_76E0]
 * 0000000180052AD3: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180052AD8: call    sub_1800496D0
 * 0000000180052ADD: mov     r8, rax
 * 0000000180052AE0: mov     r9d, r12d
 * 0000000180052AE3: mov     edx, 14h
 * 0000000180052AE8: lea     rcx, [rbp+9E10h+var_3700]; Src
 * 0000000180052AEF: call    sub_1800D4B98
 * 0000000180052AF4: nop
 * 0000000180052AF5: mov     r8, rax
 * 0000000180052AF8: mov     rdx, r13
 * 0000000180052AFB: lea     rcx, [rbp+9E10h+var_3720]
 * 0000000180052B02: call    sub_1800494AC
 * 0000000180052B07: nop
 * 0000000180052B08: lea     r8, aVertex; "/Vertex"
 * 0000000180052B0F: mov     rdx, rax
 * 0000000180052B12: lea     rcx, [rbp+9E10h+var_3740]
 * 0000000180052B19: call    sub_180031AE8
 * 0000000180052B1E: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180052B23: mov     rcx, rax
 * 0000000180052B26: call    sub_1800D4C70
 * 0000000180052B2B: mov     cs:byte_1802200CC, al
 * 0000000180052B31: lea     rcx, [rbp+9E10h+var_3720]; void *
 * 0000000180052B38: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052B3D: nop
 * 0000000180052B3E: lea     rcx, [rbp+9E10h+var_3700]; void *
 * 0000000180052B45: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052B4A: nop
 * 0000000180052B4B: lea     rcx, dword_1802200D0
 * 0000000180052B52: call    _Init_thread_footer
 * 0000000180052B57: mov     rax, [rdi+rbx*8]
 * 0000000180052B5B: mov     ecx, [r15+rax]
 * 0000000180052B5F: cmp     cs:dword_1802200D8, ecx
 * 0000000180052B65: jle     loc_180052C4A
 * 0000000180052B6B: lea     rcx, dword_1802200D8
 * 0000000180052B72: call    _Init_thread_header
 * 0000000180052B77: cmp     cs:dword_1802200D8, r14d
 * 0000000180052B7E: jnz     loc_180052C4A
 * 0000000180052B84: lea     rax, unk_180187B40
 * 0000000180052B8B: mov     qword ptr [rbp+9E10h+var_9530], rax
 * 0000000180052B92: lea     rax, unk_180188B58
 * 0000000180052B99: mov     qword ptr [rbp+9E10h+var_9530+8], rax
 * 0000000180052BA0: movups  xmm0, [rbp+9E10h+var_9530]
 * 0000000180052BA7: movups  [rbp+9E10h+var_76D0], xmm0
 * 0000000180052BAE: mov     dword ptr [rbp+9E10h+var_76C0], esi
 * 0000000180052BB4: mov     dword ptr [rbp+9E10h+var_76C0+4], esi
 * 0000000180052BBA: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052BBF: movups  xmm0, [rbp+9E10h+var_76C0]
 * 0000000180052BC6: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180052BCB: call    sub_1800496D0
 * 0000000180052BD0: mov     r8, rax
 * 0000000180052BD3: mov     r9d, r12d
 * 0000000180052BD6: mov     edx, 16h
 * 0000000180052BDB: lea     rcx, [rbp+9E10h+var_36A0]; Src
 * 0000000180052BE2: call    sub_1800D4B98
 * 0000000180052BE7: nop
 * 0000000180052BE8: mov     r8, rax
 * 0000000180052BEB: mov     rdx, r13
 * 0000000180052BEE: lea     rcx, [rbp+9E10h+var_36C0]
 * 0000000180052BF5: call    sub_1800494AC
 * 0000000180052BFA: nop
 * 0000000180052BFB: lea     r8, aVertex; "/Vertex"
 * 0000000180052C02: mov     rdx, rax
 * 0000000180052C05: lea     rcx, [rbp+9E10h+var_36E0]
 * 0000000180052C0C: call    sub_180031AE8
 * 0000000180052C11: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180052C16: mov     rcx, rax
 * 0000000180052C19: call    sub_1800D4C70
 * 0000000180052C1E: mov     cs:byte_1802200D4, al
 * 0000000180052C24: lea     rcx, [rbp+9E10h+var_36C0]; void *
 * 0000000180052C2B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052C30: nop
 * 0000000180052C31: lea     rcx, [rbp+9E10h+var_36A0]; void *
 * 0000000180052C38: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052C3D: nop
 * 0000000180052C3E: lea     rcx, dword_1802200D8
 * 0000000180052C45: call    _Init_thread_footer
 * 0000000180052C4A: mov     rax, [rdi+rbx*8]
 * 0000000180052C4E: mov     ecx, [r15+rax]
 * 0000000180052C52: cmp     cs:dword_1802200E0, ecx
 * 0000000180052C58: jle     loc_180052D3D
 * 0000000180052C5E: lea     rcx, dword_1802200E0
 * 0000000180052C65: call    _Init_thread_header
 * 0000000180052C6A: cmp     cs:dword_1802200E0, r14d
 * 0000000180052C71: jnz     loc_180052D3D
 * 0000000180052C77: lea     rax, unk_180187B40
 * 0000000180052C7E: mov     qword ptr [rbp+9E10h+var_9520], rax
 * 0000000180052C85: lea     rax, unk_180188B58
 * 0000000180052C8C: mov     qword ptr [rbp+9E10h+var_9520+8], rax
 * 0000000180052C93: movups  xmm0, [rbp+9E10h+var_9520]
 * 0000000180052C9A: movups  [rbp+9E10h+var_76B0], xmm0
 * 0000000180052CA1: mov     dword ptr [rbp+9E10h+var_76A0], esi
 * 0000000180052CA7: mov     dword ptr [rbp+9E10h+var_76A0+4], esi
 * 0000000180052CAD: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052CB2: movups  xmm0, [rbp+9E10h+var_76A0]
 * 0000000180052CB9: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180052CBE: call    sub_1800496D0
 * 0000000180052CC3: mov     r8, rax
 * 0000000180052CC6: mov     r9d, r12d
 * 0000000180052CC9: mov     edx, 18h
 * 0000000180052CCE: lea     rcx, [rbp+9E10h+var_3640]; Src
 * 0000000180052CD5: call    sub_1800D4B98
 * 0000000180052CDA: nop
 * 0000000180052CDB: mov     r8, rax
 * 0000000180052CDE: mov     rdx, r13
 * 0000000180052CE1: lea     rcx, [rbp+9E10h+var_3660]
 * 0000000180052CE8: call    sub_1800494AC
 * 0000000180052CED: nop
 * 0000000180052CEE: lea     r8, aVertex; "/Vertex"
 * 0000000180052CF5: mov     rdx, rax
 * 0000000180052CF8: lea     rcx, [rbp+9E10h+var_3680]
 * 0000000180052CFF: call    sub_180031AE8
 * 0000000180052D04: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180052D09: mov     rcx, rax
 * 0000000180052D0C: call    sub_1800D4C70
 * 0000000180052D11: mov     cs:byte_1802200DC, al
 * 0000000180052D17: lea     rcx, [rbp+9E10h+var_3660]; void *
 * 0000000180052D1E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052D23: nop
 * 0000000180052D24: lea     rcx, [rbp+9E10h+var_3640]; void *
 * 0000000180052D2B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052D30: nop
 * 0000000180052D31: lea     rcx, dword_1802200E0
 * 0000000180052D38: call    _Init_thread_footer
 * 0000000180052D3D: mov     rax, [rdi+rbx*8]
 * 0000000180052D41: mov     ecx, [r15+rax]
 * 0000000180052D45: cmp     cs:dword_1802200E8, ecx
 * 0000000180052D4B: jle     loc_180052E30
 * 0000000180052D51: lea     rcx, dword_1802200E8
 * 0000000180052D58: call    _Init_thread_header
 * 0000000180052D5D: cmp     cs:dword_1802200E8, r14d
 * 0000000180052D64: jnz     loc_180052E30
 * 0000000180052D6A: lea     rax, unk_180187B40
 * 0000000180052D71: mov     qword ptr [rbp+9E10h+var_9510], rax
 * 0000000180052D78: lea     rax, unk_180188B58
 * 0000000180052D7F: mov     qword ptr [rbp+9E10h+var_9510+8], rax
 * 0000000180052D86: movups  xmm0, [rbp+9E10h+var_9510]
 * 0000000180052D8D: movups  [rbp+9E10h+var_7690], xmm0
 * 0000000180052D94: mov     dword ptr [rbp+9E10h+var_7680], esi
 * 0000000180052D9A: mov     dword ptr [rbp+9E10h+var_7680+4], esi
 * 0000000180052DA0: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052DA5: movups  xmm0, [rbp+9E10h+var_7680]
 * 0000000180052DAC: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180052DB1: call    sub_1800496D0
 * 0000000180052DB6: mov     r8, rax
 * 0000000180052DB9: mov     r9d, r12d
 * 0000000180052DBC: mov     edx, 1Ah
 * 0000000180052DC1: lea     rcx, [rbp+9E10h+var_35E0]; Src
 * 0000000180052DC8: call    sub_1800D4B98
 * 0000000180052DCD: nop
 * 0000000180052DCE: mov     r8, rax
 * 0000000180052DD1: mov     rdx, r13
 * 0000000180052DD4: lea     rcx, [rbp+9E10h+var_3600]
 * 0000000180052DDB: call    sub_1800494AC
 * 0000000180052DE0: nop
 * 0000000180052DE1: lea     r8, aVertex; "/Vertex"
 * 0000000180052DE8: mov     rdx, rax
 * 0000000180052DEB: lea     rcx, [rbp+9E10h+var_3620]
 * 0000000180052DF2: call    sub_180031AE8
 * 0000000180052DF7: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180052DFC: mov     rcx, rax
 * 0000000180052DFF: call    sub_1800D4C70
 * 0000000180052E04: mov     cs:byte_1802200E4, al
 * 0000000180052E0A: lea     rcx, [rbp+9E10h+var_3600]; void *
 * 0000000180052E11: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052E16: nop
 * 0000000180052E17: lea     rcx, [rbp+9E10h+var_35E0]; void *
 * 0000000180052E1E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052E23: nop
 * 0000000180052E24: lea     rcx, dword_1802200E8
 * 0000000180052E2B: call    _Init_thread_footer
 * 0000000180052E30: mov     rax, [rdi+rbx*8]
 * 0000000180052E34: mov     eax, [r15+rax]
 * 0000000180052E38: cmp     cs:dword_1802200F0, eax
 * 0000000180052E3E: jle     loc_180052F23
 * 0000000180052E44: lea     rcx, dword_1802200F0
 * 0000000180052E4B: call    _Init_thread_header
 * 0000000180052E50: cmp     cs:dword_1802200F0, r14d
 * 0000000180052E57: jnz     loc_180052F23
 * 0000000180052E5D: lea     rax, unk_180189800
 * 0000000180052E64: mov     qword ptr [rbp+9E10h+var_9500], rax
 * 0000000180052E6B: lea     rax, unk_18018B218
 * 0000000180052E72: mov     qword ptr [rbp+9E10h+var_9500+8], rax
 * 0000000180052E79: movups  xmm0, [rbp+9E10h+var_9500]
 * 0000000180052E80: movups  [rbp+9E10h+var_7670], xmm0
 * 0000000180052E87: mov     dword ptr [rbp+9E10h+var_7660], esi
 * 0000000180052E8D: mov     dword ptr [rbp+9E10h+var_7660+4], esi
 * 0000000180052E93: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052E98: movups  xmm0, [rbp+9E10h+var_7660]
 * 0000000180052E9F: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180052EA4: call    sub_1800496D0
 * 0000000180052EA9: mov     r8, rax
 * 0000000180052EAC: mov     r9d, r12d
 * 0000000180052EAF: mov     edx, 20h ; ' '
 * 0000000180052EB4: lea     rcx, [rbp+9E10h+var_3580]; Src
 * 0000000180052EBB: call    sub_1800D4B98
 * 0000000180052EC0: nop
 * 0000000180052EC1: mov     r8, rax
 * 0000000180052EC4: mov     rdx, r13
 * 0000000180052EC7: lea     rcx, [rbp+9E10h+var_35A0]
 * 0000000180052ECE: call    sub_1800494AC
 * 0000000180052ED3: nop
 * 0000000180052ED4: lea     r8, aVertex; "/Vertex"
 * 0000000180052EDB: mov     rdx, rax
 * 0000000180052EDE: lea     rcx, [rbp+9E10h+var_35C0]
 * 0000000180052EE5: call    sub_180031AE8
 * 0000000180052EEA: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180052EEF: mov     rcx, rax
 * 0000000180052EF2: call    sub_1800D4C70
 * 0000000180052EF7: mov     cs:byte_1802200EC, al
 * 0000000180052EFD: lea     rcx, [rbp+9E10h+var_35A0]; void *
 * 0000000180052F04: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052F09: nop
 * 0000000180052F0A: lea     rcx, [rbp+9E10h+var_3580]; void *
 * 0000000180052F11: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052F16: nop
 * 0000000180052F17: lea     rcx, dword_1802200F0
 * 0000000180052F1E: call    _Init_thread_footer
 * 0000000180052F23: mov     rax, [rdi+rbx*8]
 * 0000000180052F27: mov     ecx, [r15+rax]
 * 0000000180052F2B: cmp     cs:dword_1802200F8, ecx
 * 0000000180052F31: jle     loc_180053016
 * 0000000180052F37: lea     rcx, dword_1802200F8
 * 0000000180052F3E: call    _Init_thread_header
 * 0000000180052F43: cmp     cs:dword_1802200F8, r14d
 * 0000000180052F4A: jnz     loc_180053016
 * 0000000180052F50: lea     rax, unk_18018B220
 * 0000000180052F57: mov     qword ptr [rbp+9E10h+var_94F0], rax
 * 0000000180052F5E: lea     rax, unk_18018BBC8
 * 0000000180052F65: mov     qword ptr [rbp+9E10h+var_94F0+8], rax
 * 0000000180052F6C: movups  xmm0, [rbp+9E10h+var_94F0]
 * 0000000180052F73: movups  [rbp+9E10h+var_7650], xmm0
 * 0000000180052F7A: mov     dword ptr [rbp+9E10h+var_7640], esi
 * 0000000180052F80: mov     dword ptr [rbp+9E10h+var_7640+4], esi
 * 0000000180052F86: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180052F8B: movups  xmm0, [rbp+9E10h+var_7640]
 * 0000000180052F92: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180052F97: call    sub_1800496D0
 * 0000000180052F9C: mov     r8, rax
 * 0000000180052F9F: mov     r9d, r12d
 * 0000000180052FA2: mov     edx, 21h ; '!'
 * 0000000180052FA7: lea     rcx, [rbp+9E10h+var_3520]; Src
 * 0000000180052FAE: call    sub_1800D4B98
 * 0000000180052FB3: nop
 * 0000000180052FB4: mov     r8, rax
 * 0000000180052FB7: mov     rdx, r13
 * 0000000180052FBA: lea     rcx, [rbp+9E10h+var_3540]
 * 0000000180052FC1: call    sub_1800494AC
 * 0000000180052FC6: nop
 * 0000000180052FC7: lea     r8, aVertex; "/Vertex"
 * 0000000180052FCE: mov     rdx, rax
 * 0000000180052FD1: lea     rcx, [rbp+9E10h+var_3560]
 * 0000000180052FD8: call    sub_180031AE8
 * 0000000180052FDD: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180052FE2: mov     rcx, rax
 * 0000000180052FE5: call    sub_1800D4C70
 * 0000000180052FEA: mov     cs:byte_1802200F4, al
 * 0000000180052FF0: lea     rcx, [rbp+9E10h+var_3540]; void *
 * 0000000180052FF7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180052FFC: nop
 * 0000000180052FFD: lea     rcx, [rbp+9E10h+var_3520]; void *
 * 0000000180053004: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053009: nop
 * 000000018005300A: lea     rcx, dword_1802200F8
 * 0000000180053011: call    _Init_thread_footer
 * 0000000180053016: mov     rax, [rdi+rbx*8]
 * 000000018005301A: mov     ecx, [r15+rax]
 * 000000018005301E: cmp     cs:dword_180220100, ecx
 * 0000000180053024: jle     loc_180053109
 * 000000018005302A: lea     rcx, dword_180220100
 * 0000000180053031: call    _Init_thread_header
 * 0000000180053036: cmp     cs:dword_180220100, r14d
 * 000000018005303D: jnz     loc_180053109
 * 0000000180053043: lea     rax, unk_180189800
 * 000000018005304A: mov     qword ptr [rbp+9E10h+var_94E0], rax
 * 0000000180053051: lea     rax, unk_18018B218
 * 0000000180053058: mov     qword ptr [rbp+9E10h+var_94E0+8], rax
 * 000000018005305F: movups  xmm0, [rbp+9E10h+var_94E0]
 * 0000000180053066: movups  [rbp+9E10h+var_7630], xmm0
 * 000000018005306D: mov     dword ptr [rbp+9E10h+var_7620], esi
 * 0000000180053073: mov     dword ptr [rbp+9E10h+var_7620+4], esi
 * 0000000180053079: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005307E: movups  xmm0, [rbp+9E10h+var_7620]
 * 0000000180053085: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005308A: call    sub_1800496D0
 * 000000018005308F: mov     r8, rax
 * 0000000180053092: mov     r9d, r12d
 * 0000000180053095: mov     edx, 22h ; '"'
 * 000000018005309A: lea     rcx, [rbp+9E10h+var_34C0]; Src
 * 00000001800530A1: call    sub_1800D4B98
 * 00000001800530A6: nop
 * 00000001800530A7: mov     r8, rax
 * 00000001800530AA: mov     rdx, r13
 * 00000001800530AD: lea     rcx, [rbp+9E10h+var_34E0]
 * 00000001800530B4: call    sub_1800494AC
 * 00000001800530B9: nop
 * 00000001800530BA: lea     r8, aVertex; "/Vertex"
 * 00000001800530C1: mov     rdx, rax
 * 00000001800530C4: lea     rcx, [rbp+9E10h+var_3500]
 * 00000001800530CB: call    sub_180031AE8
 * 00000001800530D0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800530D5: mov     rcx, rax
 * 00000001800530D8: call    sub_1800D4C70
 * 00000001800530DD: mov     cs:byte_1802200FC, al
 * 00000001800530E3: lea     rcx, [rbp+9E10h+var_34E0]; void *
 * 00000001800530EA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800530EF: nop
 * 00000001800530F0: lea     rcx, [rbp+9E10h+var_34C0]; void *
 * 00000001800530F7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800530FC: nop
 * 00000001800530FD: lea     rcx, dword_180220100
 * 0000000180053104: call    _Init_thread_footer
 * 0000000180053109: mov     rax, [rdi+rbx*8]
 * 000000018005310D: mov     ecx, [r15+rax]
 * 0000000180053111: cmp     cs:dword_180220108, ecx
 * 0000000180053117: jle     loc_1800531FC
 * 000000018005311D: lea     rcx, dword_180220108
 * 0000000180053124: call    _Init_thread_header
 * 0000000180053129: cmp     cs:dword_180220108, r14d
 * 0000000180053130: jnz     loc_1800531FC
 * 0000000180053136: lea     rax, unk_180189800
 * 000000018005313D: mov     qword ptr [rbp+9E10h+var_94D0], rax
 * 0000000180053144: lea     rax, unk_18018B218
 * 000000018005314B: mov     qword ptr [rbp+9E10h+var_94D0+8], rax
 * 0000000180053152: movups  xmm0, [rbp+9E10h+var_94D0]
 * 0000000180053159: movups  [rbp+9E10h+var_7610], xmm0
 * 0000000180053160: mov     dword ptr [rbp+9E10h+var_7600], esi
 * 0000000180053166: mov     dword ptr [rbp+9E10h+var_7600+4], esi
 * 000000018005316C: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053171: movups  xmm0, [rbp+9E10h+var_7600]
 * 0000000180053178: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005317D: call    sub_1800496D0
 * 0000000180053182: mov     r8, rax
 * 0000000180053185: mov     r9d, r12d
 * 0000000180053188: mov     edx, 28h ; '('
 * 000000018005318D: lea     rcx, [rbp+9E10h+var_3460]; Src
 * 0000000180053194: call    sub_1800D4B98
 * 0000000180053199: nop
 * 000000018005319A: mov     r8, rax
 * 000000018005319D: mov     rdx, r13
 * 00000001800531A0: lea     rcx, [rbp+9E10h+var_3480]
 * 00000001800531A7: call    sub_1800494AC
 * 00000001800531AC: nop
 * 00000001800531AD: lea     r8, aVertex; "/Vertex"
 * 00000001800531B4: mov     rdx, rax
 * 00000001800531B7: lea     rcx, [rbp+9E10h+var_34A0]
 * 00000001800531BE: call    sub_180031AE8
 * 00000001800531C3: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800531C8: mov     rcx, rax
 * 00000001800531CB: call    sub_1800D4C70
 * 00000001800531D0: mov     cs:byte_180220104, al
 * 00000001800531D6: lea     rcx, [rbp+9E10h+var_3480]; void *
 * 00000001800531DD: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800531E2: nop
 * 00000001800531E3: lea     rcx, [rbp+9E10h+var_3460]; void *
 * 00000001800531EA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800531EF: nop
 * 00000001800531F0: lea     rcx, dword_180220108
 * 00000001800531F7: call    _Init_thread_footer
 * 00000001800531FC: mov     rax, [rdi+rbx*8]
 * 0000000180053200: mov     ecx, [r15+rax]
 * 0000000180053204: cmp     cs:dword_180220110, ecx
 * 000000018005320A: jle     loc_1800532EF
 * 0000000180053210: lea     rcx, dword_180220110
 * 0000000180053217: call    _Init_thread_header
 * 000000018005321C: cmp     cs:dword_180220110, r14d
 * 0000000180053223: jnz     loc_1800532EF
 * 0000000180053229: lea     rax, unk_18018BBD0
 * 0000000180053230: mov     qword ptr [rbp+9E10h+var_94C0], rax
 * 0000000180053237: lea     rax, unk_18018C70C
 * 000000018005323E: mov     qword ptr [rbp+9E10h+var_94C0+8], rax
 * 0000000180053245: movups  xmm0, [rbp+9E10h+var_94C0]
 * 000000018005324C: movups  [rbp+9E10h+var_75F0], xmm0
 * 0000000180053253: mov     dword ptr [rbp+9E10h+var_75E0], esi
 * 0000000180053259: mov     dword ptr [rbp+9E10h+var_75E0+4], esi
 * 000000018005325F: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053264: movups  xmm0, [rbp+9E10h+var_75E0]
 * 000000018005326B: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180053270: call    sub_1800496D0
 * 0000000180053275: mov     r8, rax
 * 0000000180053278: mov     r9d, r12d
 * 000000018005327B: mov     edx, 29h ; ')'
 * 0000000180053280: lea     rcx, [rbp+9E10h+var_3400]; Src
 * 0000000180053287: call    sub_1800D4B98
 * 000000018005328C: nop
 * 000000018005328D: mov     r8, rax
 * 0000000180053290: mov     rdx, r13
 * 0000000180053293: lea     rcx, [rbp+9E10h+var_3420]
 * 000000018005329A: call    sub_1800494AC
 * 000000018005329F: nop
 * 00000001800532A0: lea     r8, aVertex; "/Vertex"
 * 00000001800532A7: mov     rdx, rax
 * 00000001800532AA: lea     rcx, [rbp+9E10h+var_3440]
 * 00000001800532B1: call    sub_180031AE8
 * 00000001800532B6: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800532BB: mov     rcx, rax
 * 00000001800532BE: call    sub_1800D4C70
 * 00000001800532C3: mov     cs:byte_18022010C, al
 * 00000001800532C9: lea     rcx, [rbp+9E10h+var_3420]; void *
 * 00000001800532D0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800532D5: nop
 * 00000001800532D6: lea     rcx, [rbp+9E10h+var_3400]; void *
 * 00000001800532DD: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800532E2: nop
 * 00000001800532E3: lea     rcx, dword_180220110
 * 00000001800532EA: call    _Init_thread_footer
 * 00000001800532EF: mov     rax, [rdi+rbx*8]
 * 00000001800532F3: mov     ecx, [r15+rax]
 * 00000001800532F7: cmp     cs:dword_180220118, ecx
 * 00000001800532FD: jle     loc_1800533E2
 * 0000000180053303: lea     rcx, dword_180220118
 * 000000018005330A: call    _Init_thread_header
 * 000000018005330F: cmp     cs:dword_180220118, r14d
 * 0000000180053316: jnz     loc_1800533E2
 * 000000018005331C: lea     rax, unk_180189800
 * 0000000180053323: mov     qword ptr [rbp+9E10h+var_94B0], rax
 * 000000018005332A: lea     rax, unk_18018B218
 * 0000000180053331: mov     qword ptr [rbp+9E10h+var_94B0+8], rax
 * 0000000180053338: movups  xmm0, [rbp+9E10h+var_94B0]
 * 000000018005333F: movups  [rbp+9E10h+var_75D0], xmm0
 * 0000000180053346: mov     dword ptr [rbp+9E10h+var_75C0], esi
 * 000000018005334C: mov     dword ptr [rbp+9E10h+var_75C0+4], esi
 * 0000000180053352: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053357: movups  xmm0, [rbp+9E10h+var_75C0]
 * 000000018005335E: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180053363: call    sub_1800496D0
 * 0000000180053368: mov     r8, rax
 * 000000018005336B: mov     r9d, r12d
 * 000000018005336E: mov     edx, 2Ah ; '*'
 * 0000000180053373: lea     rcx, [rbp+9E10h+var_33A0]; Src
 * 000000018005337A: call    sub_1800D4B98
 * 000000018005337F: nop
 * 0000000180053380: mov     r8, rax
 * 0000000180053383: mov     rdx, r13
 * 0000000180053386: lea     rcx, [rbp+9E10h+var_33C0]
 * 000000018005338D: call    sub_1800494AC
 * 0000000180053392: nop
 * 0000000180053393: lea     r8, aVertex; "/Vertex"
 * 000000018005339A: mov     rdx, rax
 * 000000018005339D: lea     rcx, [rbp+9E10h+var_33E0]
 * 00000001800533A4: call    sub_180031AE8
 * 00000001800533A9: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800533AE: mov     rcx, rax
 * 00000001800533B1: call    sub_1800D4C70
 * 00000001800533B6: mov     cs:byte_180220114, al
 * 00000001800533BC: lea     rcx, [rbp+9E10h+var_33C0]; void *
 * 00000001800533C3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800533C8: nop
 * 00000001800533C9: lea     rcx, [rbp+9E10h+var_33A0]; void *
 * 00000001800533D0: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800533D5: nop
 * 00000001800533D6: lea     rcx, dword_180220118
 * 00000001800533DD: call    _Init_thread_footer
 * 00000001800533E2: mov     rax, [rdi+rbx*8]
 * 00000001800533E6: mov     ecx, [r15+rax]
 * 00000001800533EA: cmp     cs:dword_180220120, ecx
 * 00000001800533F0: jle     loc_1800534D5
 * 00000001800533F6: lea     rcx, dword_180220120
 * 00000001800533FD: call    _Init_thread_header
 * 0000000180053402: cmp     cs:dword_180220120, r14d
 * 0000000180053409: jnz     loc_1800534D5
 * 000000018005340F: lea     rax, unk_180189800
 * 0000000180053416: mov     qword ptr [rbp+9E10h+var_94A0], rax
 * 000000018005341D: lea     rax, unk_18018B218
 * 0000000180053424: mov     qword ptr [rbp+9E10h+var_94A0+8], rax
 * 000000018005342B: movups  xmm0, [rbp+9E10h+var_94A0]
 * 0000000180053432: movups  [rbp+9E10h+var_75B0], xmm0
 * 0000000180053439: mov     dword ptr [rbp+9E10h+var_75A0], esi
 * 000000018005343F: mov     dword ptr [rbp+9E10h+var_75A0+4], esi
 * 0000000180053445: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005344A: movups  xmm0, [rbp+9E10h+var_75A0]
 * 0000000180053451: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180053456: call    sub_1800496D0
 * 000000018005345B: mov     r8, rax
 * 000000018005345E: mov     r9d, r12d
 * 0000000180053461: mov     edx, 30h ; '0'
 * 0000000180053466: lea     rcx, [rbp+9E10h+var_3340]; Src
 * 000000018005346D: call    sub_1800D4B98
 * 0000000180053472: nop
 * 0000000180053473: mov     r8, rax
 * 0000000180053476: mov     rdx, r13
 * 0000000180053479: lea     rcx, [rbp+9E10h+var_3360]
 * 0000000180053480: call    sub_1800494AC
 * 0000000180053485: nop
 * 0000000180053486: lea     r8, aVertex; "/Vertex"
 * 000000018005348D: mov     rdx, rax
 * 0000000180053490: lea     rcx, [rbp+9E10h+var_3380]
 * 0000000180053497: call    sub_180031AE8
 * 000000018005349C: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800534A1: mov     rcx, rax
 * 00000001800534A4: call    sub_1800D4C70
 * 00000001800534A9: mov     cs:byte_18022011C, al
 * 00000001800534AF: lea     rcx, [rbp+9E10h+var_3360]; void *
 * 00000001800534B6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800534BB: nop
 * 00000001800534BC: lea     rcx, [rbp+9E10h+var_3340]; void *
 * 00000001800534C3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800534C8: nop
 * 00000001800534C9: lea     rcx, dword_180220120
 * 00000001800534D0: call    _Init_thread_footer
 * 00000001800534D5: mov     rax, [rdi+rbx*8]
 * 00000001800534D9: mov     ecx, [r15+rax]
 * 00000001800534DD: cmp     cs:dword_180220128, ecx
 * 00000001800534E3: jle     loc_1800535C8
 * 00000001800534E9: lea     rcx, dword_180220128
 * 00000001800534F0: call    _Init_thread_header
 * 00000001800534F5: cmp     cs:dword_180220128, r14d
 * 00000001800534FC: jnz     loc_1800535C8
 * 0000000180053502: lea     rax, unk_180189800
 * 0000000180053509: mov     qword ptr [rbp+9E10h+var_9490], rax
 * 0000000180053510: lea     rax, unk_18018B218
 * 0000000180053517: mov     qword ptr [rbp+9E10h+var_9490+8], rax
 * 000000018005351E: movups  xmm0, [rbp+9E10h+var_9490]
 * 0000000180053525: movups  [rbp+9E10h+var_7590], xmm0
 * 000000018005352C: mov     dword ptr [rbp+9E10h+var_7580], esi
 * 0000000180053532: mov     dword ptr [rbp+9E10h+var_7580+4], esi
 * 0000000180053538: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005353D: movups  xmm0, [rbp+9E10h+var_7580]
 * 0000000180053544: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180053549: call    sub_1800496D0
 * 000000018005354E: mov     r8, rax
 * 0000000180053551: mov     r9d, r12d
 * 0000000180053554: mov     edx, 32h ; '2'
 * 0000000180053559: lea     rcx, [rbp+9E10h+var_32E0]; Src
 * 0000000180053560: call    sub_1800D4B98
 * 0000000180053565: nop
 * 0000000180053566: mov     r8, rax
 * 0000000180053569: mov     rdx, r13
 * 000000018005356C: lea     rcx, [rbp+9E10h+var_3300]
 * 0000000180053573: call    sub_1800494AC
 * 0000000180053578: nop
 * 0000000180053579: lea     r8, aVertex; "/Vertex"
 * 0000000180053580: mov     rdx, rax
 * 0000000180053583: lea     rcx, [rbp+9E10h+var_3320]
 * 000000018005358A: call    sub_180031AE8
 * 000000018005358F: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180053594: mov     rcx, rax
 * 0000000180053597: call    sub_1800D4C70
 * 000000018005359C: mov     cs:byte_180220124, al
 * 00000001800535A2: lea     rcx, [rbp+9E10h+var_3300]; void *
 * 00000001800535A9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800535AE: nop
 * 00000001800535AF: lea     rcx, [rbp+9E10h+var_32E0]; void *
 * 00000001800535B6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800535BB: nop
 * 00000001800535BC: lea     rcx, dword_180220128
 * 00000001800535C3: call    _Init_thread_footer
 * 00000001800535C8: mov     rax, [rdi+rbx*8]
 * 00000001800535CC: mov     ecx, [r15+rax]
 * 00000001800535D0: cmp     cs:dword_180220130, ecx
 * 00000001800535D6: jle     loc_1800536BB
 * 00000001800535DC: lea     rcx, dword_180220130
 * 00000001800535E3: call    _Init_thread_header
 * 00000001800535E8: cmp     cs:dword_180220130, r14d
 * 00000001800535EF: jnz     loc_1800536BB
 * 00000001800535F5: lea     rax, unk_180189800
 * 00000001800535FC: mov     qword ptr [rbp+9E10h+var_9480], rax
 * 0000000180053603: lea     rax, unk_18018B218
 * 000000018005360A: mov     qword ptr [rbp+9E10h+var_9480+8], rax
 * 0000000180053611: movups  xmm0, [rbp+9E10h+var_9480]
 * 0000000180053618: movups  [rbp+9E10h+var_7570], xmm0
 * 000000018005361F: mov     dword ptr [rbp+9E10h+var_7560], esi
 * 0000000180053625: mov     dword ptr [rbp+9E10h+var_7560+4], esi
 * 000000018005362B: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053630: movups  xmm0, [rbp+9E10h+var_7560]
 * 0000000180053637: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005363C: call    sub_1800496D0
 * 0000000180053641: mov     r8, rax
 * 0000000180053644: mov     r9d, r12d
 * 0000000180053647: mov     edx, 38h ; '8'
 * 000000018005364C: lea     rcx, [rbp+9E10h+var_3280]; Src
 * 0000000180053653: call    sub_1800D4B98
 * 0000000180053658: nop
 * 0000000180053659: mov     r8, rax
 * 000000018005365C: mov     rdx, r13
 * 000000018005365F: lea     rcx, [rbp+9E10h+var_32A0]
 * 0000000180053666: call    sub_1800494AC
 * 000000018005366B: nop
 * 000000018005366C: lea     r8, aVertex; "/Vertex"
 * 0000000180053673: mov     rdx, rax
 * 0000000180053676: lea     rcx, [rbp+9E10h+var_32C0]
 * 000000018005367D: call    sub_180031AE8
 * 0000000180053682: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180053687: mov     rcx, rax
 * 000000018005368A: call    sub_1800D4C70
 * 000000018005368F: mov     cs:byte_18022012C, al
 * 0000000180053695: lea     rcx, [rbp+9E10h+var_32A0]; void *
 * 000000018005369C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800536A1: nop
 * 00000001800536A2: lea     rcx, [rbp+9E10h+var_3280]; void *
 * 00000001800536A9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800536AE: nop
 * 00000001800536AF: lea     rcx, dword_180220130
 * 00000001800536B6: call    _Init_thread_footer
 * 00000001800536BB: mov     rax, [rdi+rbx*8]
 * 00000001800536BF: mov     ecx, [r15+rax]
 * 00000001800536C3: cmp     cs:dword_180220138, ecx
 * 00000001800536C9: jle     loc_1800537AE
 * 00000001800536CF: lea     rcx, dword_180220138
 * 00000001800536D6: call    _Init_thread_header
 * 00000001800536DB: cmp     cs:dword_180220138, r14d
 * 00000001800536E2: jnz     loc_1800537AE
 * 00000001800536E8: lea     rax, unk_180189800
 * 00000001800536EF: mov     qword ptr [rbp+9E10h+var_9470], rax
 * 00000001800536F6: lea     rax, unk_18018B218
 * 00000001800536FD: mov     qword ptr [rbp+9E10h+var_9470+8], rax
 * 0000000180053704: movups  xmm0, [rbp+9E10h+var_9470]
 * 000000018005370B: movups  [rbp+9E10h+var_7550], xmm0
 * 0000000180053712: mov     dword ptr [rbp+9E10h+var_7540], esi
 * 0000000180053718: mov     dword ptr [rbp+9E10h+var_7540+4], esi
 * 000000018005371E: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053723: movups  xmm0, [rbp+9E10h+var_7540]
 * 000000018005372A: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005372F: call    sub_1800496D0
 * 0000000180053734: mov     r8, rax
 * 0000000180053737: mov     r9d, r12d
 * 000000018005373A: mov     edx, 3Ah ; ':'
 * 000000018005373F: lea     rcx, [rbp+9E10h+var_3220]; Src
 * 0000000180053746: call    sub_1800D4B98
 * 000000018005374B: nop
 * 000000018005374C: mov     r8, rax
 * 000000018005374F: mov     rdx, r13
 * 0000000180053752: lea     rcx, [rbp+9E10h+var_3240]
 * 0000000180053759: call    sub_1800494AC
 * 000000018005375E: nop
 * 000000018005375F: lea     r8, aVertex; "/Vertex"
 * 0000000180053766: mov     rdx, rax
 * 0000000180053769: lea     rcx, [rbp+9E10h+var_3260]
 * 0000000180053770: call    sub_180031AE8
 * 0000000180053775: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005377A: mov     rcx, rax
 * 000000018005377D: call    sub_1800D4C70
 * 0000000180053782: mov     cs:byte_180220134, al
 * 0000000180053788: lea     rcx, [rbp+9E10h+var_3240]; void *
 * 000000018005378F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053794: nop
 * 0000000180053795: lea     rcx, [rbp+9E10h+var_3220]; void *
 * 000000018005379C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800537A1: nop
 * 00000001800537A2: lea     rcx, dword_180220138
 * 00000001800537A9: call    _Init_thread_footer
 * 00000001800537AE: mov     rax, [rdi+rbx*8]
 * 00000001800537B2: mov     eax, [r15+rax]
 * 00000001800537B6: cmp     cs:dword_180220140, eax
 * 00000001800537BC: jle     loc_1800538A1
 * 00000001800537C2: lea     rcx, dword_180220140
 * 00000001800537C9: call    _Init_thread_header
 * 00000001800537CE: cmp     cs:dword_180220140, r14d
 * 00000001800537D5: jnz     loc_1800538A1
 * 00000001800537DB: lea     rax, unk_18018C710
 * 00000001800537E2: mov     qword ptr [rbp+9E10h+var_9460], rax
 * 00000001800537E9: lea     rax, unk_18018D760
 * 00000001800537F0: mov     qword ptr [rbp+9E10h+var_9460+8], rax
 * 00000001800537F7: movups  xmm0, [rbp+9E10h+var_9460]
 * 00000001800537FE: movups  [rbp+9E10h+var_7530], xmm0
 * 0000000180053805: mov     dword ptr [rbp+9E10h+var_7520], esi
 * 000000018005380B: mov     dword ptr [rbp+9E10h+var_7520+4], esi
 * 0000000180053811: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053816: movups  xmm0, [rbp+9E10h+var_7520]
 * 000000018005381D: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180053822: call    sub_1800496D0
 * 0000000180053827: mov     r8, rax
 * 000000018005382A: mov     r9d, r12d
 * 000000018005382D: mov     edx, 40h ; '@'
 * 0000000180053832: lea     rcx, [rbp+9E10h+var_31C0]; Src
 * 0000000180053839: call    sub_1800D4B98
 * 000000018005383E: nop
 * 000000018005383F: mov     r8, rax
 * 0000000180053842: mov     rdx, r13
 * 0000000180053845: lea     rcx, [rbp+9E10h+var_31E0]
 * 000000018005384C: call    sub_1800494AC
 * 0000000180053851: nop
 * 0000000180053852: lea     r8, aVertex; "/Vertex"
 * 0000000180053859: mov     rdx, rax
 * 000000018005385C: lea     rcx, [rbp+9E10h+var_3200]
 * 0000000180053863: call    sub_180031AE8
 * 0000000180053868: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005386D: mov     rcx, rax
 * 0000000180053870: call    sub_1800D4C70
 * 0000000180053875: mov     cs:byte_18022013C, al
 * 000000018005387B: lea     rcx, [rbp+9E10h+var_31E0]; void *
 * 0000000180053882: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053887: nop
 * 0000000180053888: lea     rcx, [rbp+9E10h+var_31C0]; void *
 * 000000018005388F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053894: nop
 * 0000000180053895: lea     rcx, dword_180220140
 * 000000018005389C: call    _Init_thread_footer
 * 00000001800538A1: mov     rax, [rdi+rbx*8]
 * 00000001800538A5: mov     ecx, [r15+rax]
 * 00000001800538A9: cmp     cs:dword_180220148, ecx
 * 00000001800538AF: jle     loc_180053994
 * 00000001800538B5: lea     rcx, dword_180220148
 * 00000001800538BC: call    _Init_thread_header
 * 00000001800538C1: cmp     cs:dword_180220148, r14d
 * 00000001800538C8: jnz     loc_180053994
 * 00000001800538CE: lea     rax, unk_18018C710
 * 00000001800538D5: mov     qword ptr [rbp+9E10h+var_9450], rax
 * 00000001800538DC: lea     rax, unk_18018D760
 * 00000001800538E3: mov     qword ptr [rbp+9E10h+var_9450+8], rax
 * 00000001800538EA: movups  xmm0, [rbp+9E10h+var_9450]
 * 00000001800538F1: movups  [rbp+9E10h+var_7510], xmm0
 * 00000001800538F8: mov     dword ptr [rbp+9E10h+var_7500], esi
 * 00000001800538FE: mov     dword ptr [rbp+9E10h+var_7500+4], esi
 * 0000000180053904: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053909: movups  xmm0, [rbp+9E10h+var_7500]
 * 0000000180053910: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180053915: call    sub_1800496D0
 * 000000018005391A: mov     r8, rax
 * 000000018005391D: mov     r9d, r12d
 * 0000000180053920: mov     edx, 42h ; 'B'
 * 0000000180053925: lea     rcx, [rbp+9E10h+var_3160]; Src
 * 000000018005392C: call    sub_1800D4B98
 * 0000000180053931: nop
 * 0000000180053932: mov     r8, rax
 * 0000000180053935: mov     rdx, r13
 * 0000000180053938: lea     rcx, [rbp+9E10h+var_3180]
 * 000000018005393F: call    sub_1800494AC
 * 0000000180053944: nop
 * 0000000180053945: lea     r8, aVertex; "/Vertex"
 * 000000018005394C: mov     rdx, rax
 * 000000018005394F: lea     rcx, [rbp+9E10h+var_31A0]
 * 0000000180053956: call    sub_180031AE8
 * 000000018005395B: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180053960: mov     rcx, rax
 * 0000000180053963: call    sub_1800D4C70
 * 0000000180053968: mov     cs:byte_180220144, al
 * 000000018005396E: lea     rcx, [rbp+9E10h+var_3180]; void *
 * 0000000180053975: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005397A: nop
 * 000000018005397B: lea     rcx, [rbp+9E10h+var_3160]; void *
 * 0000000180053982: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053987: nop
 * 0000000180053988: lea     rcx, dword_180220148
 * 000000018005398F: call    _Init_thread_footer
 * 0000000180053994: mov     rax, [rdi+rbx*8]
 * 0000000180053998: mov     ecx, [r15+rax]
 * 000000018005399C: cmp     cs:dword_180220150, ecx
 * 00000001800539A2: jle     loc_180053A87
 * 00000001800539A8: lea     rcx, dword_180220150
 * 00000001800539AF: call    _Init_thread_header
 * 00000001800539B4: cmp     cs:dword_180220150, r14d
 * 00000001800539BB: jnz     loc_180053A87
 * 00000001800539C1: lea     rax, unk_18018C710
 * 00000001800539C8: mov     qword ptr [rbp+9E10h+var_9440], rax
 * 00000001800539CF: lea     rax, unk_18018D760
 * 00000001800539D6: mov     qword ptr [rbp+9E10h+var_9440+8], rax
 * 00000001800539DD: movups  xmm0, [rbp+9E10h+var_9440]
 * 00000001800539E4: movups  [rbp+9E10h+var_74F0], xmm0
 * 00000001800539EB: mov     dword ptr [rbp+9E10h+var_74E0], esi
 * 00000001800539F1: mov     dword ptr [rbp+9E10h+var_74E0+4], esi
 * 00000001800539F7: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800539FC: movups  xmm0, [rbp+9E10h+var_74E0]
 * 0000000180053A03: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180053A08: call    sub_1800496D0
 * 0000000180053A0D: mov     r8, rax
 * 0000000180053A10: mov     r9d, r12d
 * 0000000180053A13: mov     edx, 48h ; 'H'
 * 0000000180053A18: lea     rcx, [rbp+9E10h+var_3100]; Src
 * 0000000180053A1F: call    sub_1800D4B98
 * 0000000180053A24: nop
 * 0000000180053A25: mov     r8, rax
 * 0000000180053A28: mov     rdx, r13
 * 0000000180053A2B: lea     rcx, [rbp+9E10h+var_3120]
 * 0000000180053A32: call    sub_1800494AC
 * 0000000180053A37: nop
 * 0000000180053A38: lea     r8, aVertex; "/Vertex"
 * 0000000180053A3F: mov     rdx, rax
 * 0000000180053A42: lea     rcx, [rbp+9E10h+var_3140]
 * 0000000180053A49: call    sub_180031AE8
 * 0000000180053A4E: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180053A53: mov     rcx, rax
 * 0000000180053A56: call    sub_1800D4C70
 * 0000000180053A5B: mov     cs:byte_18022014C, al
 * 0000000180053A61: lea     rcx, [rbp+9E10h+var_3120]; void *
 * 0000000180053A68: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053A6D: nop
 * 0000000180053A6E: lea     rcx, [rbp+9E10h+var_3100]; void *
 * 0000000180053A75: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053A7A: nop
 * 0000000180053A7B: lea     rcx, dword_180220150
 * 0000000180053A82: call    _Init_thread_footer
 * 0000000180053A87: mov     rax, [rdi+rbx*8]
 * 0000000180053A8B: mov     ecx, [r15+rax]
 * 0000000180053A8F: cmp     cs:dword_180220158, ecx
 * 0000000180053A95: jle     loc_180053B7A
 * 0000000180053A9B: lea     rcx, dword_180220158
 * 0000000180053AA2: call    _Init_thread_header
 * 0000000180053AA7: cmp     cs:dword_180220158, r14d
 * 0000000180053AAE: jnz     loc_180053B7A
 * 0000000180053AB4: lea     rax, unk_18018C710
 * 0000000180053ABB: mov     qword ptr [rbp+9E10h+var_9430], rax
 * 0000000180053AC2: lea     rax, unk_18018D760
 * 0000000180053AC9: mov     qword ptr [rbp+9E10h+var_9430+8], rax
 * 0000000180053AD0: movups  xmm0, [rbp+9E10h+var_9430]
 * 0000000180053AD7: movups  [rbp+9E10h+var_74D0], xmm0
 * 0000000180053ADE: mov     dword ptr [rbp+9E10h+var_74C0], esi
 * 0000000180053AE4: mov     dword ptr [rbp+9E10h+var_74C0+4], esi
 * 0000000180053AEA: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053AEF: movups  xmm0, [rbp+9E10h+var_74C0]
 * 0000000180053AF6: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180053AFB: call    sub_1800496D0
 * 0000000180053B00: mov     r8, rax
 * 0000000180053B03: mov     r9d, r12d
 * 0000000180053B06: mov     edx, 4Ah ; 'J'
 * 0000000180053B0B: lea     rcx, [rbp+9E10h+var_30A0]; Src
 * 0000000180053B12: call    sub_1800D4B98
 * 0000000180053B17: nop
 * 0000000180053B18: mov     r8, rax
 * 0000000180053B1B: mov     rdx, r13
 * 0000000180053B1E: lea     rcx, [rbp+9E10h+var_30C0]
 * 0000000180053B25: call    sub_1800494AC
 * 0000000180053B2A: nop
 * 0000000180053B2B: lea     r8, aVertex; "/Vertex"
 * 0000000180053B32: mov     rdx, rax
 * 0000000180053B35: lea     rcx, [rbp+9E10h+var_30E0]
 * 0000000180053B3C: call    sub_180031AE8
 * 0000000180053B41: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180053B46: mov     rcx, rax
 * 0000000180053B49: call    sub_1800D4C70
 * 0000000180053B4E: mov     cs:byte_180220154, al
 * 0000000180053B54: lea     rcx, [rbp+9E10h+var_30C0]; void *
 * 0000000180053B5B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053B60: nop
 * 0000000180053B61: lea     rcx, [rbp+9E10h+var_30A0]; void *
 * 0000000180053B68: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053B6D: nop
 * 0000000180053B6E: lea     rcx, dword_180220158
 * 0000000180053B75: call    _Init_thread_footer
 * 0000000180053B7A: mov     rax, [rdi+rbx*8]
 * 0000000180053B7E: mov     ecx, [r15+rax]
 * 0000000180053B82: cmp     cs:dword_180220160, ecx
 * 0000000180053B88: jle     loc_180053C6D
 * 0000000180053B8E: lea     rcx, dword_180220160
 * 0000000180053B95: call    _Init_thread_header
 * 0000000180053B9A: cmp     cs:dword_180220160, r14d
 * 0000000180053BA1: jnz     loc_180053C6D
 * 0000000180053BA7: lea     rax, unk_18018C710
 * 0000000180053BAE: mov     qword ptr [rbp+9E10h+var_9420], rax
 * 0000000180053BB5: lea     rax, unk_18018D760
 * 0000000180053BBC: mov     qword ptr [rbp+9E10h+var_9420+8], rax
 * 0000000180053BC3: movups  xmm0, [rbp+9E10h+var_9420]
 * 0000000180053BCA: movups  [rbp+9E10h+var_74B0], xmm0
 * 0000000180053BD1: mov     dword ptr [rbp+9E10h+var_74A0], esi
 * 0000000180053BD7: mov     dword ptr [rbp+9E10h+var_74A0+4], esi
 * 0000000180053BDD: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053BE2: movups  xmm0, [rbp+9E10h+var_74A0]
 * 0000000180053BE9: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180053BEE: call    sub_1800496D0
 * 0000000180053BF3: mov     r8, rax
 * 0000000180053BF6: mov     r9d, r12d
 * 0000000180053BF9: mov     edx, 50h ; 'P'
 * 0000000180053BFE: lea     rcx, [rbp+9E10h+var_3040]; Src
 * 0000000180053C05: call    sub_1800D4B98
 * 0000000180053C0A: nop
 * 0000000180053C0B: mov     r8, rax
 * 0000000180053C0E: mov     rdx, r13
 * 0000000180053C11: lea     rcx, [rbp+9E10h+var_3060]
 * 0000000180053C18: call    sub_1800494AC
 * 0000000180053C1D: nop
 * 0000000180053C1E: lea     r8, aVertex; "/Vertex"
 * 0000000180053C25: mov     rdx, rax
 * 0000000180053C28: lea     rcx, [rbp+9E10h+var_3080]
 * 0000000180053C2F: call    sub_180031AE8
 * 0000000180053C34: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180053C39: mov     rcx, rax
 * 0000000180053C3C: call    sub_1800D4C70
 * 0000000180053C41: mov     cs:byte_18022015C, al
 * 0000000180053C47: lea     rcx, [rbp+9E10h+var_3060]; void *
 * 0000000180053C4E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053C53: nop
 * 0000000180053C54: lea     rcx, [rbp+9E10h+var_3040]; void *
 * 0000000180053C5B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053C60: nop
 * 0000000180053C61: lea     rcx, dword_180220160
 * 0000000180053C68: call    _Init_thread_footer
 * 0000000180053C6D: mov     rax, [rdi+rbx*8]
 * 0000000180053C71: mov     ecx, [r15+rax]
 * 0000000180053C75: cmp     cs:dword_180220168, ecx
 * 0000000180053C7B: jle     loc_180053D60
 * 0000000180053C81: lea     rcx, dword_180220168
 * 0000000180053C88: call    _Init_thread_header
 * 0000000180053C8D: cmp     cs:dword_180220168, r14d
 * 0000000180053C94: jnz     loc_180053D60
 * 0000000180053C9A: lea     rax, unk_18018C710
 * 0000000180053CA1: mov     qword ptr [rbp+9E10h+var_9410], rax
 * 0000000180053CA8: lea     rax, unk_18018D760
 * 0000000180053CAF: mov     qword ptr [rbp+9E10h+var_9410+8], rax
 * 0000000180053CB6: movups  xmm0, [rbp+9E10h+var_9410]
 * 0000000180053CBD: movups  [rbp+9E10h+var_7490], xmm0
 * 0000000180053CC4: mov     dword ptr [rbp+9E10h+var_7480], esi
 * 0000000180053CCA: mov     dword ptr [rbp+9E10h+var_7480+4], esi
 * 0000000180053CD0: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053CD5: movups  xmm0, [rbp+9E10h+var_7480]
 * 0000000180053CDC: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180053CE1: call    sub_1800496D0
 * 0000000180053CE6: mov     r8, rax
 * 0000000180053CE9: mov     r9d, r12d
 * 0000000180053CEC: mov     edx, 52h ; 'R'
 * 0000000180053CF1: lea     rcx, [rbp+9E10h+var_2FE0]; Src
 * 0000000180053CF8: call    sub_1800D4B98
 * 0000000180053CFD: nop
 * 0000000180053CFE: mov     r8, rax
 * 0000000180053D01: mov     rdx, r13
 * 0000000180053D04: lea     rcx, [rbp+9E10h+var_3000]
 * 0000000180053D0B: call    sub_1800494AC
 * 0000000180053D10: nop
 * 0000000180053D11: lea     r8, aVertex; "/Vertex"
 * 0000000180053D18: mov     rdx, rax
 * 0000000180053D1B: lea     rcx, [rbp+9E10h+var_3020]
 * 0000000180053D22: call    sub_180031AE8
 * 0000000180053D27: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180053D2C: mov     rcx, rax
 * 0000000180053D2F: call    sub_1800D4C70
 * 0000000180053D34: mov     cs:byte_180220164, al
 * 0000000180053D3A: lea     rcx, [rbp+9E10h+var_3000]; void *
 * 0000000180053D41: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053D46: nop
 * 0000000180053D47: lea     rcx, [rbp+9E10h+var_2FE0]; void *
 * 0000000180053D4E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053D53: nop
 * 0000000180053D54: lea     rcx, dword_180220168
 * 0000000180053D5B: call    _Init_thread_footer
 * 0000000180053D60: mov     rax, [rdi+rbx*8]
 * 0000000180053D64: mov     ecx, [r15+rax]
 * 0000000180053D68: cmp     cs:dword_180220170, ecx
 * 0000000180053D6E: jle     loc_180053E53
 * 0000000180053D74: lea     rcx, dword_180220170
 * 0000000180053D7B: call    _Init_thread_header
 * 0000000180053D80: cmp     cs:dword_180220170, r14d
 * 0000000180053D87: jnz     loc_180053E53
 * 0000000180053D8D: lea     rax, unk_18018C710
 * 0000000180053D94: mov     qword ptr [rbp+9E10h+var_9400], rax
 * 0000000180053D9B: lea     rax, unk_18018D760
 * 0000000180053DA2: mov     qword ptr [rbp+9E10h+var_9400+8], rax
 * 0000000180053DA9: movups  xmm0, [rbp+9E10h+var_9400]
 * 0000000180053DB0: movups  [rbp+9E10h+var_7470], xmm0
 * 0000000180053DB7: mov     dword ptr [rbp+9E10h+var_7460], esi
 * 0000000180053DBD: mov     dword ptr [rbp+9E10h+var_7460+4], esi
 * 0000000180053DC3: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053DC8: movups  xmm0, [rbp+9E10h+var_7460]
 * 0000000180053DCF: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180053DD4: call    sub_1800496D0
 * 0000000180053DD9: mov     r8, rax
 * 0000000180053DDC: mov     r9d, r12d
 * 0000000180053DDF: mov     edx, 58h ; 'X'
 * 0000000180053DE4: lea     rcx, [rbp+9E10h+var_2F80]; Src
 * 0000000180053DEB: call    sub_1800D4B98
 * 0000000180053DF0: nop
 * 0000000180053DF1: mov     r8, rax
 * 0000000180053DF4: mov     rdx, r13
 * 0000000180053DF7: lea     rcx, [rbp+9E10h+var_2FA0]
 * 0000000180053DFE: call    sub_1800494AC
 * 0000000180053E03: nop
 * 0000000180053E04: lea     r8, aVertex; "/Vertex"
 * 0000000180053E0B: mov     rdx, rax
 * 0000000180053E0E: lea     rcx, [rbp+9E10h+var_2FC0]
 * 0000000180053E15: call    sub_180031AE8
 * 0000000180053E1A: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180053E1F: mov     rcx, rax
 * 0000000180053E22: call    sub_1800D4C70
 * 0000000180053E27: mov     cs:byte_18022016C, al
 * 0000000180053E2D: lea     rcx, [rbp+9E10h+var_2FA0]; void *
 * 0000000180053E34: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053E39: nop
 * 0000000180053E3A: lea     rcx, [rbp+9E10h+var_2F80]; void *
 * 0000000180053E41: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053E46: nop
 * 0000000180053E47: lea     rcx, dword_180220170
 * 0000000180053E4E: call    _Init_thread_footer
 * 0000000180053E53: mov     rax, [rdi+rbx*8]
 * 0000000180053E57: mov     ecx, [r15+rax]
 * 0000000180053E5B: cmp     cs:dword_180220178, ecx
 * 0000000180053E61: jle     loc_180053F46
 * 0000000180053E67: lea     rcx, dword_180220178
 * 0000000180053E6E: call    _Init_thread_header
 * 0000000180053E73: cmp     cs:dword_180220178, r14d
 * 0000000180053E7A: jnz     loc_180053F46
 * 0000000180053E80: lea     rax, unk_18018C710
 * 0000000180053E87: mov     qword ptr [rbp+9E10h+var_93F0], rax
 * 0000000180053E8E: lea     rax, unk_18018D760
 * 0000000180053E95: mov     qword ptr [rbp+9E10h+var_93F0+8], rax
 * 0000000180053E9C: movups  xmm0, [rbp+9E10h+var_93F0]
 * 0000000180053EA3: movups  [rbp+9E10h+var_7450], xmm0
 * 0000000180053EAA: mov     dword ptr [rbp+9E10h+var_7440], esi
 * 0000000180053EB0: mov     dword ptr [rbp+9E10h+var_7440+4], esi
 * 0000000180053EB6: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053EBB: movups  xmm0, [rbp+9E10h+var_7440]
 * 0000000180053EC2: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180053EC7: call    sub_1800496D0
 * 0000000180053ECC: mov     r8, rax
 * 0000000180053ECF: mov     r9d, r12d
 * 0000000180053ED2: mov     edx, 5Ah ; 'Z'
 * 0000000180053ED7: lea     rcx, [rbp+9E10h+var_2F20]; Src
 * 0000000180053EDE: call    sub_1800D4B98
 * 0000000180053EE3: nop
 * 0000000180053EE4: mov     r8, rax
 * 0000000180053EE7: mov     rdx, r13
 * 0000000180053EEA: lea     rcx, [rbp+9E10h+var_2F40]
 * 0000000180053EF1: call    sub_1800494AC
 * 0000000180053EF6: nop
 * 0000000180053EF7: lea     r8, aVertex; "/Vertex"
 * 0000000180053EFE: mov     rdx, rax
 * 0000000180053F01: lea     rcx, [rbp+9E10h+var_2F60]
 * 0000000180053F08: call    sub_180031AE8
 * 0000000180053F0D: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180053F12: mov     rcx, rax
 * 0000000180053F15: call    sub_1800D4C70
 * 0000000180053F1A: mov     cs:byte_180220174, al
 * 0000000180053F20: lea     rcx, [rbp+9E10h+var_2F40]; void *
 * 0000000180053F27: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053F2C: nop
 * 0000000180053F2D: lea     rcx, [rbp+9E10h+var_2F20]; void *
 * 0000000180053F34: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180053F39: nop
 * 0000000180053F3A: lea     rcx, dword_180220178
 * 0000000180053F41: call    _Init_thread_footer
 * 0000000180053F46: mov     rax, [rdi+rbx*8]
 * 0000000180053F4A: mov     eax, [r15+rax]
 * 0000000180053F4E: cmp     cs:dword_180220180, eax
 * 0000000180053F54: jle     loc_180054039
 * 0000000180053F5A: lea     rcx, dword_180220180
 * 0000000180053F61: call    _Init_thread_header
 * 0000000180053F66: cmp     cs:dword_180220180, r14d
 * 0000000180053F6D: jnz     loc_180054039
 * 0000000180053F73: lea     rax, unk_18018D760
 * 0000000180053F7A: mov     qword ptr [rbp+9E10h+var_9060], rax
 * 0000000180053F81: lea     rax, aPixel; "/Pixel"
 * 0000000180053F88: mov     qword ptr [rbp+9E10h+var_9060+8], rax
 * 0000000180053F8F: movups  xmm0, [rbp+9E10h+var_9060]
 * 0000000180053F96: movups  [rbp+9E10h+var_7430], xmm0
 * 0000000180053F9D: mov     dword ptr [rbp+9E10h+var_7420], esi
 * 0000000180053FA3: mov     dword ptr [rbp+9E10h+var_7420+4], esi
 * 0000000180053FA9: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180053FAE: movups  xmm0, [rbp+9E10h+var_7420]
 * 0000000180053FB5: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180053FBA: call    sub_1800496D0
 * 0000000180053FBF: mov     r8, rax
 * 0000000180053FC2: mov     r9d, r12d
 * 0000000180053FC5: mov     edx, 60h ; '`'
 * 0000000180053FCA: lea     rcx, [rbp+9E10h+var_2EC0]; Src
 * 0000000180053FD1: call    sub_1800D4B98
 * 0000000180053FD6: nop
 * 0000000180053FD7: mov     r8, rax
 * 0000000180053FDA: mov     rdx, r13
 * 0000000180053FDD: lea     rcx, [rbp+9E10h+var_2EE0]
 * 0000000180053FE4: call    sub_1800494AC
 * 0000000180053FE9: nop
 * 0000000180053FEA: lea     r8, aVertex; "/Vertex"
 * 0000000180053FF1: mov     rdx, rax
 * 0000000180053FF4: lea     rcx, [rbp+9E10h+var_2F00]
 * 0000000180053FFB: call    sub_180031AE8
 * 0000000180054000: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180054005: mov     rcx, rax
 * 0000000180054008: call    sub_1800D4C70
 * 000000018005400D: mov     cs:byte_18022017C, al
 * 0000000180054013: lea     rcx, [rbp+9E10h+var_2EE0]; void *
 * 000000018005401A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005401F: nop
 * 0000000180054020: lea     rcx, [rbp+9E10h+var_2EC0]; void *
 * 0000000180054027: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005402C: nop
 * 000000018005402D: lea     rcx, dword_180220180
 * 0000000180054034: call    _Init_thread_footer
 * 0000000180054039: mov     rax, [rdi+rbx*8]
 * 000000018005403D: mov     ecx, [r15+rax]
 * 0000000180054041: cmp     cs:dword_180220188, ecx
 * 0000000180054047: jle     loc_18005412C
 * 000000018005404D: lea     rcx, dword_180220188
 * 0000000180054054: call    _Init_thread_header
 * 0000000180054059: cmp     cs:dword_180220188, r14d
 * 0000000180054060: jnz     loc_18005412C
 * 0000000180054066: lea     rax, unk_18018D760
 * 000000018005406D: mov     qword ptr [rbp+9E10h+var_93E0], rax
 * 0000000180054074: lea     rax, aPixel; "/Pixel"
 * 000000018005407B: mov     qword ptr [rbp+9E10h+var_93E0+8], rax
 * 0000000180054082: movups  xmm0, [rbp+9E10h+var_93E0]
 * 0000000180054089: movups  [rbp+9E10h+var_7410], xmm0
 * 0000000180054090: mov     dword ptr [rbp+9E10h+var_7400], esi
 * 0000000180054096: mov     dword ptr [rbp+9E10h+var_7400+4], esi
 * 000000018005409C: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800540A1: movups  xmm0, [rbp+9E10h+var_7400]
 * 00000001800540A8: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800540AD: call    sub_1800496D0
 * 00000001800540B2: mov     r8, rax
 * 00000001800540B5: mov     r9d, r12d
 * 00000001800540B8: mov     edx, 62h ; 'b'
 * 00000001800540BD: lea     rcx, [rbp+9E10h+var_2E60]; Src
 * 00000001800540C4: call    sub_1800D4B98
 * 00000001800540C9: nop
 * 00000001800540CA: mov     r8, rax
 * 00000001800540CD: mov     rdx, r13
 * 00000001800540D0: lea     rcx, [rbp+9E10h+var_2E80]
 * 00000001800540D7: call    sub_1800494AC
 * 00000001800540DC: nop
 * 00000001800540DD: lea     r8, aVertex; "/Vertex"
 * 00000001800540E4: mov     rdx, rax
 * 00000001800540E7: lea     rcx, [rbp+9E10h+var_2EA0]
 * 00000001800540EE: call    sub_180031AE8
 * 00000001800540F3: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800540F8: mov     rcx, rax
 * 00000001800540FB: call    sub_1800D4C70
 * 0000000180054100: mov     cs:byte_180220184, al
 * 0000000180054106: lea     rcx, [rbp+9E10h+var_2E80]; void *
 * 000000018005410D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054112: nop
 * 0000000180054113: lea     rcx, [rbp+9E10h+var_2E60]; void *
 * 000000018005411A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005411F: nop
 * 0000000180054120: lea     rcx, dword_180220188
 * 0000000180054127: call    _Init_thread_footer
 * 000000018005412C: mov     rax, [rdi+rbx*8]
 * 0000000180054130: mov     ecx, [r15+rax]
 * 0000000180054134: cmp     cs:dword_180220190, ecx
 * 000000018005413A: jle     loc_18005421F
 * 0000000180054140: lea     rcx, dword_180220190
 * 0000000180054147: call    _Init_thread_header
 * 000000018005414C: cmp     cs:dword_180220190, r14d
 * 0000000180054153: jnz     loc_18005421F
 * 0000000180054159: lea     rax, unk_18018D760
 * 0000000180054160: mov     qword ptr [rbp+9E10h+var_93D0], rax
 * 0000000180054167: lea     rax, aPixel; "/Pixel"
 * 000000018005416E: mov     qword ptr [rbp+9E10h+var_93D0+8], rax
 * 0000000180054175: movups  xmm0, [rbp+9E10h+var_93D0]
 * 000000018005417C: movups  [rbp+9E10h+var_73F0], xmm0
 * 0000000180054183: mov     dword ptr [rbp+9E10h+var_73E0], esi
 * 0000000180054189: mov     dword ptr [rbp+9E10h+var_73E0+4], esi
 * 000000018005418F: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054194: movups  xmm0, [rbp+9E10h+var_73E0]
 * 000000018005419B: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800541A0: call    sub_1800496D0
 * 00000001800541A5: mov     r8, rax
 * 00000001800541A8: mov     r9d, r12d
 * 00000001800541AB: mov     edx, 68h ; 'h'
 * 00000001800541B0: lea     rcx, [rbp+9E10h+var_2E00]; Src
 * 00000001800541B7: call    sub_1800D4B98
 * 00000001800541BC: nop
 * 00000001800541BD: mov     r8, rax
 * 00000001800541C0: mov     rdx, r13
 * 00000001800541C3: lea     rcx, [rbp+9E10h+var_2E20]
 * 00000001800541CA: call    sub_1800494AC
 * 00000001800541CF: nop
 * 00000001800541D0: lea     r8, aVertex; "/Vertex"
 * 00000001800541D7: mov     rdx, rax
 * 00000001800541DA: lea     rcx, [rbp+9E10h+var_2E40]
 * 00000001800541E1: call    sub_180031AE8
 * 00000001800541E6: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800541EB: mov     rcx, rax
 * 00000001800541EE: call    sub_1800D4C70
 * 00000001800541F3: mov     cs:byte_18022018C, al
 * 00000001800541F9: lea     rcx, [rbp+9E10h+var_2E20]; void *
 * 0000000180054200: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054205: nop
 * 0000000180054206: lea     rcx, [rbp+9E10h+var_2E00]; void *
 * 000000018005420D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054212: nop
 * 0000000180054213: lea     rcx, dword_180220190
 * 000000018005421A: call    _Init_thread_footer
 * 000000018005421F: mov     rax, [rdi+rbx*8]
 * 0000000180054223: mov     ecx, [r15+rax]
 * 0000000180054227: cmp     cs:dword_180220198, ecx
 * 000000018005422D: jle     loc_180054312
 * 0000000180054233: lea     rcx, dword_180220198
 * 000000018005423A: call    _Init_thread_header
 * 000000018005423F: cmp     cs:dword_180220198, r14d
 * 0000000180054246: jnz     loc_180054312
 * 000000018005424C: lea     rax, unk_18018D760
 * 0000000180054253: mov     qword ptr [rbp+9E10h+var_93C0], rax
 * 000000018005425A: lea     rax, aPixel; "/Pixel"
 * 0000000180054261: mov     qword ptr [rbp+9E10h+var_93C0+8], rax
 * 0000000180054268: movups  xmm0, [rbp+9E10h+var_93C0]
 * 000000018005426F: movups  [rbp+9E10h+var_73D0], xmm0
 * 0000000180054276: mov     dword ptr [rbp+9E10h+var_73C0], esi
 * 000000018005427C: mov     dword ptr [rbp+9E10h+var_73C0+4], esi
 * 0000000180054282: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054287: movups  xmm0, [rbp+9E10h+var_73C0]
 * 000000018005428E: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180054293: call    sub_1800496D0
 * 0000000180054298: mov     r8, rax
 * 000000018005429B: mov     r9d, r12d
 * 000000018005429E: mov     edx, 6Ah ; 'j'
 * 00000001800542A3: lea     rcx, [rbp+9E10h+var_2DA0]; Src
 * 00000001800542AA: call    sub_1800D4B98
 * 00000001800542AF: nop
 * 00000001800542B0: mov     r8, rax
 * 00000001800542B3: mov     rdx, r13
 * 00000001800542B6: lea     rcx, [rbp+9E10h+var_2DC0]
 * 00000001800542BD: call    sub_1800494AC
 * 00000001800542C2: nop
 * 00000001800542C3: lea     r8, aVertex; "/Vertex"
 * 00000001800542CA: mov     rdx, rax
 * 00000001800542CD: lea     rcx, [rbp+9E10h+var_2DE0]
 * 00000001800542D4: call    sub_180031AE8
 * 00000001800542D9: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800542DE: mov     rcx, rax
 * 00000001800542E1: call    sub_1800D4C70
 * 00000001800542E6: mov     cs:byte_180220194, al
 * 00000001800542EC: lea     rcx, [rbp+9E10h+var_2DC0]; void *
 * 00000001800542F3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800542F8: nop
 * 00000001800542F9: lea     rcx, [rbp+9E10h+var_2DA0]; void *
 * 0000000180054300: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054305: nop
 * 0000000180054306: lea     rcx, dword_180220198
 * 000000018005430D: call    _Init_thread_footer
 * 0000000180054312: mov     rax, [rdi+rbx*8]
 * 0000000180054316: mov     ecx, [r15+rax]
 * 000000018005431A: cmp     cs:dword_1802201A0, ecx
 * 0000000180054320: jle     loc_180054405
 * 0000000180054326: lea     rcx, dword_1802201A0
 * 000000018005432D: call    _Init_thread_header
 * 0000000180054332: cmp     cs:dword_1802201A0, r14d
 * 0000000180054339: jnz     loc_180054405
 * 000000018005433F: lea     rax, unk_18018D760
 * 0000000180054346: mov     qword ptr [rbp+9E10h+var_93B0], rax
 * 000000018005434D: lea     rax, aPixel; "/Pixel"
 * 0000000180054354: mov     qword ptr [rbp+9E10h+var_93B0+8], rax
 * 000000018005435B: movups  xmm0, [rbp+9E10h+var_93B0]
 * 0000000180054362: movups  [rbp+9E10h+var_73B0], xmm0
 * 0000000180054369: mov     dword ptr [rbp+9E10h+var_73A0], esi
 * 000000018005436F: mov     dword ptr [rbp+9E10h+var_73A0+4], esi
 * 0000000180054375: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005437A: movups  xmm0, [rbp+9E10h+var_73A0]
 * 0000000180054381: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180054386: call    sub_1800496D0
 * 000000018005438B: mov     r8, rax
 * 000000018005438E: mov     r9d, r12d
 * 0000000180054391: mov     edx, 70h ; 'p'
 * 0000000180054396: lea     rcx, [rbp+9E10h+var_2D40]; Src
 * 000000018005439D: call    sub_1800D4B98
 * 00000001800543A2: nop
 * 00000001800543A3: mov     r8, rax
 * 00000001800543A6: mov     rdx, r13
 * 00000001800543A9: lea     rcx, [rbp+9E10h+var_2D60]
 * 00000001800543B0: call    sub_1800494AC
 * 00000001800543B5: nop
 * 00000001800543B6: lea     r8, aVertex; "/Vertex"
 * 00000001800543BD: mov     rdx, rax
 * 00000001800543C0: lea     rcx, [rbp+9E10h+var_2D80]
 * 00000001800543C7: call    sub_180031AE8
 * 00000001800543CC: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800543D1: mov     rcx, rax
 * 00000001800543D4: call    sub_1800D4C70
 * 00000001800543D9: mov     cs:byte_18022019C, al
 * 00000001800543DF: lea     rcx, [rbp+9E10h+var_2D60]; void *
 * 00000001800543E6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800543EB: nop
 * 00000001800543EC: lea     rcx, [rbp+9E10h+var_2D40]; void *
 * 00000001800543F3: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800543F8: nop
 * 00000001800543F9: lea     rcx, dword_1802201A0
 * 0000000180054400: call    _Init_thread_footer
 * 0000000180054405: mov     rax, [rdi+rbx*8]
 * 0000000180054409: mov     ecx, [r15+rax]
 * 000000018005440D: cmp     cs:dword_1802201A8, ecx
 * 0000000180054413: jle     loc_1800544F8
 * 0000000180054419: lea     rcx, dword_1802201A8
 * 0000000180054420: call    _Init_thread_header
 * 0000000180054425: cmp     cs:dword_1802201A8, r14d
 * 000000018005442C: jnz     loc_1800544F8
 * 0000000180054432: lea     rax, unk_18018D760
 * 0000000180054439: mov     qword ptr [rbp+9E10h+var_93A0], rax
 * 0000000180054440: lea     rax, aPixel; "/Pixel"
 * 0000000180054447: mov     qword ptr [rbp+9E10h+var_93A0+8], rax
 * 000000018005444E: movups  xmm0, [rbp+9E10h+var_93A0]
 * 0000000180054455: movups  [rbp+9E10h+var_7390], xmm0
 * 000000018005445C: mov     dword ptr [rbp+9E10h+var_7380], esi
 * 0000000180054462: mov     dword ptr [rbp+9E10h+var_7380+4], esi
 * 0000000180054468: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005446D: movups  xmm0, [rbp+9E10h+var_7380]
 * 0000000180054474: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180054479: call    sub_1800496D0
 * 000000018005447E: mov     r8, rax
 * 0000000180054481: mov     r9d, r12d
 * 0000000180054484: mov     edx, 72h ; 'r'
 * 0000000180054489: lea     rcx, [rbp+9E10h+var_2CE0]; Src
 * 0000000180054490: call    sub_1800D4B98
 * 0000000180054495: nop
 * 0000000180054496: mov     r8, rax
 * 0000000180054499: mov     rdx, r13
 * 000000018005449C: lea     rcx, [rbp+9E10h+var_2D00]
 * 00000001800544A3: call    sub_1800494AC
 * 00000001800544A8: nop
 * 00000001800544A9: lea     r8, aVertex; "/Vertex"
 * 00000001800544B0: mov     rdx, rax
 * 00000001800544B3: lea     rcx, [rbp+9E10h+var_2D20]
 * 00000001800544BA: call    sub_180031AE8
 * 00000001800544BF: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800544C4: mov     rcx, rax
 * 00000001800544C7: call    sub_1800D4C70
 * 00000001800544CC: mov     cs:byte_1802201A4, al
 * 00000001800544D2: lea     rcx, [rbp+9E10h+var_2D00]; void *
 * 00000001800544D9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800544DE: nop
 * 00000001800544DF: lea     rcx, [rbp+9E10h+var_2CE0]; void *
 * 00000001800544E6: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800544EB: nop
 * 00000001800544EC: lea     rcx, dword_1802201A8
 * 00000001800544F3: call    _Init_thread_footer
 * 00000001800544F8: mov     rax, [rdi+rbx*8]
 * 00000001800544FC: mov     ecx, [r15+rax]
 * 0000000180054500: cmp     cs:dword_1802201B0, ecx
 * 0000000180054506: jle     loc_1800545EB
 * 000000018005450C: lea     rcx, dword_1802201B0
 * 0000000180054513: call    _Init_thread_header
 * 0000000180054518: cmp     cs:dword_1802201B0, r14d
 * 000000018005451F: jnz     loc_1800545EB
 * 0000000180054525: lea     rax, unk_18018D760
 * 000000018005452C: mov     qword ptr [rbp+9E10h+var_9390], rax
 * 0000000180054533: lea     rax, aPixel; "/Pixel"
 * 000000018005453A: mov     qword ptr [rbp+9E10h+var_9390+8], rax
 * 0000000180054541: movups  xmm0, [rbp+9E10h+var_9390]
 * 0000000180054548: movups  [rbp+9E10h+var_9050], xmm0
 * 000000018005454F: mov     dword ptr [rbp+9E10h+var_9040], esi
 * 0000000180054555: mov     dword ptr [rbp+9E10h+var_9040+4], esi
 * 000000018005455B: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054560: movups  xmm0, [rbp+9E10h+var_9040]
 * 0000000180054567: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005456C: call    sub_1800496D0
 * 0000000180054571: mov     r8, rax
 * 0000000180054574: mov     r9d, r12d
 * 0000000180054577: mov     edx, 78h ; 'x'
 * 000000018005457C: lea     rcx, [rbp+9E10h+var_2C80]; Src
 * 0000000180054583: call    sub_1800D4B98
 * 0000000180054588: nop
 * 0000000180054589: mov     r8, rax
 * 000000018005458C: mov     rdx, r13
 * 000000018005458F: lea     rcx, [rbp+9E10h+var_2CA0]
 * 0000000180054596: call    sub_1800494AC
 * 000000018005459B: nop
 * 000000018005459C: lea     r8, aVertex; "/Vertex"
 * 00000001800545A3: mov     rdx, rax
 * 00000001800545A6: lea     rcx, [rbp+9E10h+var_2CC0]
 * 00000001800545AD: call    sub_180031AE8
 * 00000001800545B2: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800545B7: mov     rcx, rax
 * 00000001800545BA: call    sub_1800D4C70
 * 00000001800545BF: mov     cs:byte_1802201AC, al
 * 00000001800545C5: lea     rcx, [rbp+9E10h+var_2CA0]; void *
 * 00000001800545CC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800545D1: nop
 * 00000001800545D2: lea     rcx, [rbp+9E10h+var_2C80]; void *
 * 00000001800545D9: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800545DE: nop
 * 00000001800545DF: lea     rcx, dword_1802201B0
 * 00000001800545E6: call    _Init_thread_footer
 * 00000001800545EB: mov     rax, [rdi+rbx*8]
 * 00000001800545EF: mov     ecx, [r15+rax]
 * 00000001800545F3: cmp     cs:dword_1802201B8, ecx
 * 00000001800545F9: jle     loc_1800546DE
 * 00000001800545FF: lea     rcx, dword_1802201B8
 * 0000000180054606: call    _Init_thread_header
 * 000000018005460B: cmp     cs:dword_1802201B8, r14d
 * 0000000180054612: jnz     loc_1800546DE
 * 0000000180054618: lea     rax, unk_18018D760
 * 000000018005461F: mov     qword ptr [rbp+9E10h+var_9380], rax
 * 0000000180054626: lea     rax, aPixel; "/Pixel"
 * 000000018005462D: mov     qword ptr [rbp+9E10h+var_9380+8], rax
 * 0000000180054634: movups  xmm0, [rbp+9E10h+var_9380]
 * 000000018005463B: movups  [rbp+9E10h+var_9030], xmm0
 * 0000000180054642: mov     dword ptr [rbp+9E10h+var_9020], esi
 * 0000000180054648: mov     dword ptr [rbp+9E10h+var_9020+4], esi
 * 000000018005464E: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054653: movups  xmm0, [rbp+9E10h+var_9020]
 * 000000018005465A: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005465F: call    sub_1800496D0
 * 0000000180054664: mov     r8, rax
 * 0000000180054667: mov     r9d, r12d
 * 000000018005466A: mov     edx, 7Ah ; 'z'
 * 000000018005466F: lea     rcx, [rbp+9E10h+var_2C20]; Src
 * 0000000180054676: call    sub_1800D4B98
 * 000000018005467B: nop
 * 000000018005467C: mov     r8, rax
 * 000000018005467F: mov     rdx, r13
 * 0000000180054682: lea     rcx, [rbp+9E10h+var_2C40]
 * 0000000180054689: call    sub_1800494AC
 * 000000018005468E: nop
 * 000000018005468F: lea     r8, aVertex; "/Vertex"
 * 0000000180054696: mov     rdx, rax
 * 0000000180054699: lea     rcx, [rbp+9E10h+var_2C60]
 * 00000001800546A0: call    sub_180031AE8
 * 00000001800546A5: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800546AA: mov     rcx, rax
 * 00000001800546AD: call    sub_1800D4C70
 * 00000001800546B2: mov     cs:byte_1802201B4, al
 * 00000001800546B8: lea     rcx, [rbp+9E10h+var_2C40]; void *
 * 00000001800546BF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800546C4: nop
 * 00000001800546C5: lea     rcx, [rbp+9E10h+var_2C20]; void *
 * 00000001800546CC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800546D1: nop
 * 00000001800546D2: lea     rcx, dword_1802201B8
 * 00000001800546D9: call    _Init_thread_footer
 * 00000001800546DE: mov     rax, [rdi+rbx*8]
 * 00000001800546E2: mov     ecx, [r15+rax]
 * 00000001800546E6: cmp     cs:dword_1802201C0, ecx
 * 00000001800546EC: jle     loc_1800547D1
 * 00000001800546F2: lea     rcx, dword_1802201C0
 * 00000001800546F9: call    _Init_thread_header
 * 00000001800546FE: cmp     cs:dword_1802201C0, r14d
 * 0000000180054705: jnz     loc_1800547D1
 * 000000018005470B: lea     rax, unk_18018C710
 * 0000000180054712: mov     qword ptr [rbp+9E10h+var_9370], rax
 * 0000000180054719: lea     rax, unk_18018D760
 * 0000000180054720: mov     qword ptr [rbp+9E10h+var_9370+8], rax
 * 0000000180054727: movups  xmm0, [rbp+9E10h+var_9370]
 * 000000018005472E: movups  [rbp+9E10h+var_9010], xmm0
 * 0000000180054735: mov     dword ptr [rbp+9E10h+var_9000], esi
 * 000000018005473B: mov     dword ptr [rbp+9E10h+var_9000+4], esi
 * 0000000180054741: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054746: movups  xmm0, [rbp+9E10h+var_9000]
 * 000000018005474D: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180054752: call    sub_1800496D0
 * 0000000180054757: mov     r8, rax
 * 000000018005475A: mov     r9d, r12d
 * 000000018005475D: mov     edx, 80h
 * 0000000180054762: lea     rcx, [rbp+9E10h+var_2BC0]; Src
 * 0000000180054769: call    sub_1800D4B98
 * 000000018005476E: nop
 * 000000018005476F: mov     r8, rax
 * 0000000180054772: mov     rdx, r13
 * 0000000180054775: lea     rcx, [rbp+9E10h+var_2BE0]
 * 000000018005477C: call    sub_1800494AC
 * 0000000180054781: nop
 * 0000000180054782: lea     r8, aVertex; "/Vertex"
 * 0000000180054789: mov     rdx, rax
 * 000000018005478C: lea     rcx, [rbp+9E10h+var_2C00]
 * 0000000180054793: call    sub_180031AE8
 * 0000000180054798: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005479D: mov     rcx, rax
 * 00000001800547A0: call    sub_1800D4C70
 * 00000001800547A5: mov     cs:byte_1802201BC, al
 * 00000001800547AB: lea     rcx, [rbp+9E10h+var_2BE0]; void *
 * 00000001800547B2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800547B7: nop
 * 00000001800547B8: lea     rcx, [rbp+9E10h+var_2BC0]; void *
 * 00000001800547BF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800547C4: nop
 * 00000001800547C5: lea     rcx, dword_1802201C0
 * 00000001800547CC: call    _Init_thread_footer
 * 00000001800547D1: mov     rax, [rdi+rbx*8]
 * 00000001800547D5: mov     ecx, [r15+rax]
 * 00000001800547D9: cmp     cs:dword_1802201C8, ecx
 * 00000001800547DF: jle     loc_1800548C4
 * 00000001800547E5: lea     rcx, dword_1802201C8
 * 00000001800547EC: call    _Init_thread_header
 * 00000001800547F1: cmp     cs:dword_1802201C8, r14d
 * 00000001800547F8: jnz     loc_1800548C4
 * 00000001800547FE: lea     rax, unk_18018C710
 * 0000000180054805: mov     qword ptr [rbp+9E10h+var_9360], rax
 * 000000018005480C: lea     rax, unk_18018D760
 * 0000000180054813: mov     qword ptr [rbp+9E10h+var_9360+8], rax
 * 000000018005481A: movups  xmm0, [rbp+9E10h+var_9360]
 * 0000000180054821: movups  [rbp+9E10h+var_8FF0], xmm0
 * 0000000180054828: mov     dword ptr [rbp+9E10h+var_8FE0], esi
 * 000000018005482E: mov     dword ptr [rbp+9E10h+var_8FE0+4], esi
 * 0000000180054834: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054839: movups  xmm0, [rbp+9E10h+var_8FE0]
 * 0000000180054840: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180054845: call    sub_1800496D0
 * 000000018005484A: mov     r8, rax
 * 000000018005484D: mov     r9d, r12d
 * 0000000180054850: mov     edx, 82h
 * 0000000180054855: lea     rcx, [rbp+9E10h+var_2B60]; Src
 * 000000018005485C: call    sub_1800D4B98
 * 0000000180054861: nop
 * 0000000180054862: mov     r8, rax
 * 0000000180054865: mov     rdx, r13
 * 0000000180054868: lea     rcx, [rbp+9E10h+var_2B80]
 * 000000018005486F: call    sub_1800494AC
 * 0000000180054874: nop
 * 0000000180054875: lea     r8, aVertex; "/Vertex"
 * 000000018005487C: mov     rdx, rax
 * 000000018005487F: lea     rcx, [rbp+9E10h+var_2BA0]
 * 0000000180054886: call    sub_180031AE8
 * 000000018005488B: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180054890: mov     rcx, rax
 * 0000000180054893: call    sub_1800D4C70
 * 0000000180054898: mov     cs:byte_1802201C4, al
 * 000000018005489E: lea     rcx, [rbp+9E10h+var_2B80]; void *
 * 00000001800548A5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800548AA: nop
 * 00000001800548AB: lea     rcx, [rbp+9E10h+var_2B60]; void *
 * 00000001800548B2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800548B7: nop
 * 00000001800548B8: lea     rcx, dword_1802201C8
 * 00000001800548BF: call    _Init_thread_footer
 * 00000001800548C4: mov     rax, [rdi+rbx*8]
 * 00000001800548C8: mov     ecx, [r15+rax]
 * 00000001800548CC: cmp     cs:dword_1802201D0, ecx
 * 00000001800548D2: jle     loc_1800549B7
 * 00000001800548D8: lea     rcx, dword_1802201D0
 * 00000001800548DF: call    _Init_thread_header
 * 00000001800548E4: cmp     cs:dword_1802201D0, r14d
 * 00000001800548EB: jnz     loc_1800549B7
 * 00000001800548F1: lea     rax, unk_18018C710
 * 00000001800548F8: mov     qword ptr [rbp+9E10h+var_9350], rax
 * 00000001800548FF: lea     rax, unk_18018D760
 * 0000000180054906: mov     qword ptr [rbp+9E10h+var_9350+8], rax
 * 000000018005490D: movups  xmm0, [rbp+9E10h+var_9350]
 * 0000000180054914: movups  [rbp+9E10h+var_8FD0], xmm0
 * 000000018005491B: mov     dword ptr [rbp+9E10h+var_8FC0], esi
 * 0000000180054921: mov     dword ptr [rbp+9E10h+var_8FC0+4], esi
 * 0000000180054927: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005492C: movups  xmm0, [rbp+9E10h+var_8FC0]
 * 0000000180054933: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180054938: call    sub_1800496D0
 * 000000018005493D: mov     r8, rax
 * 0000000180054940: mov     r9d, r12d
 * 0000000180054943: mov     edx, 88h
 * 0000000180054948: lea     rcx, [rbp+9E10h+var_2B00]; Src
 * 000000018005494F: call    sub_1800D4B98
 * 0000000180054954: nop
 * 0000000180054955: mov     r8, rax
 * 0000000180054958: mov     rdx, r13
 * 000000018005495B: lea     rcx, [rbp+9E10h+var_2B20]
 * 0000000180054962: call    sub_1800494AC
 * 0000000180054967: nop
 * 0000000180054968: lea     r8, aVertex; "/Vertex"
 * 000000018005496F: mov     rdx, rax
 * 0000000180054972: lea     rcx, [rbp+9E10h+var_2B40]
 * 0000000180054979: call    sub_180031AE8
 * 000000018005497E: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180054983: mov     rcx, rax
 * 0000000180054986: call    sub_1800D4C70
 * 000000018005498B: mov     cs:byte_1802201CC, al
 * 0000000180054991: lea     rcx, [rbp+9E10h+var_2B20]; void *
 * 0000000180054998: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005499D: nop
 * 000000018005499E: lea     rcx, [rbp+9E10h+var_2B00]; void *
 * 00000001800549A5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800549AA: nop
 * 00000001800549AB: lea     rcx, dword_1802201D0
 * 00000001800549B2: call    _Init_thread_footer
 * 00000001800549B7: mov     rax, [rdi+rbx*8]
 * 00000001800549BB: mov     ecx, [r15+rax]
 * 00000001800549BF: cmp     cs:dword_1802201D8, ecx
 * 00000001800549C5: jle     loc_180054AAA
 * 00000001800549CB: lea     rcx, dword_1802201D8
 * 00000001800549D2: call    _Init_thread_header
 * 00000001800549D7: cmp     cs:dword_1802201D8, r14d
 * 00000001800549DE: jnz     loc_180054AAA
 * 00000001800549E4: lea     rax, unk_18018C710
 * 00000001800549EB: mov     qword ptr [rbp+9E10h+var_9340], rax
 * 00000001800549F2: lea     rax, unk_18018D760
 * 00000001800549F9: mov     qword ptr [rbp+9E10h+var_9340+8], rax
 * 0000000180054A00: movups  xmm0, [rbp+9E10h+var_9340]
 * 0000000180054A07: movups  [rbp+9E10h+var_8FB0], xmm0
 * 0000000180054A0E: mov     dword ptr [rbp+9E10h+var_8FA0], esi
 * 0000000180054A14: mov     dword ptr [rbp+9E10h+var_8FA0+4], esi
 * 0000000180054A1A: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054A1F: movups  xmm0, [rbp+9E10h+var_8FA0]
 * 0000000180054A26: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180054A2B: call    sub_1800496D0
 * 0000000180054A30: mov     r8, rax
 * 0000000180054A33: mov     r9d, r12d
 * 0000000180054A36: mov     edx, 8Ah
 * 0000000180054A3B: lea     rcx, [rbp+9E10h+var_2AA0]; Src
 * 0000000180054A42: call    sub_1800D4B98
 * 0000000180054A47: nop
 * 0000000180054A48: mov     r8, rax
 * 0000000180054A4B: mov     rdx, r13
 * 0000000180054A4E: lea     rcx, [rbp+9E10h+var_2AC0]
 * 0000000180054A55: call    sub_1800494AC
 * 0000000180054A5A: nop
 * 0000000180054A5B: lea     r8, aVertex; "/Vertex"
 * 0000000180054A62: mov     rdx, rax
 * 0000000180054A65: lea     rcx, [rbp+9E10h+var_2AE0]
 * 0000000180054A6C: call    sub_180031AE8
 * 0000000180054A71: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180054A76: mov     rcx, rax
 * 0000000180054A79: call    sub_1800D4C70
 * 0000000180054A7E: mov     cs:byte_1802201D4, al
 * 0000000180054A84: lea     rcx, [rbp+9E10h+var_2AC0]; void *
 * 0000000180054A8B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054A90: nop
 * 0000000180054A91: lea     rcx, [rbp+9E10h+var_2AA0]; void *
 * 0000000180054A98: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054A9D: nop
 * 0000000180054A9E: lea     rcx, dword_1802201D8
 * 0000000180054AA5: call    _Init_thread_footer
 * 0000000180054AAA: mov     rax, [rdi+rbx*8]
 * 0000000180054AAE: mov     ecx, [r15+rax]
 * 0000000180054AB2: cmp     cs:dword_1802201E0, ecx
 * 0000000180054AB8: jle     loc_180054B9D
 * 0000000180054ABE: lea     rcx, dword_1802201E0
 * 0000000180054AC5: call    _Init_thread_header
 * 0000000180054ACA: cmp     cs:dword_1802201E0, r14d
 * 0000000180054AD1: jnz     loc_180054B9D
 * 0000000180054AD7: lea     rax, unk_18018C710
 * 0000000180054ADE: mov     qword ptr [rbp+9E10h+var_9330], rax
 * 0000000180054AE5: lea     rax, unk_18018D760
 * 0000000180054AEC: mov     qword ptr [rbp+9E10h+var_9330+8], rax
 * 0000000180054AF3: movups  xmm0, [rbp+9E10h+var_9330]
 * 0000000180054AFA: movups  [rbp+9E10h+var_8F90], xmm0
 * 0000000180054B01: mov     dword ptr [rbp+9E10h+var_8F80], esi
 * 0000000180054B07: mov     dword ptr [rbp+9E10h+var_8F80+4], esi
 * 0000000180054B0D: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054B12: movups  xmm0, [rbp+9E10h+var_8F80]
 * 0000000180054B19: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180054B1E: call    sub_1800496D0
 * 0000000180054B23: mov     r8, rax
 * 0000000180054B26: mov     r9d, r12d
 * 0000000180054B29: mov     edx, 90h
 * 0000000180054B2E: lea     rcx, [rbp+9E10h+var_2A40]; Src
 * 0000000180054B35: call    sub_1800D4B98
 * 0000000180054B3A: nop
 * 0000000180054B3B: mov     r8, rax
 * 0000000180054B3E: mov     rdx, r13
 * 0000000180054B41: lea     rcx, [rbp+9E10h+var_2A60]
 * 0000000180054B48: call    sub_1800494AC
 * 0000000180054B4D: nop
 * 0000000180054B4E: lea     r8, aVertex; "/Vertex"
 * 0000000180054B55: mov     rdx, rax
 * 0000000180054B58: lea     rcx, [rbp+9E10h+var_2A80]
 * 0000000180054B5F: call    sub_180031AE8
 * 0000000180054B64: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180054B69: mov     rcx, rax
 * 0000000180054B6C: call    sub_1800D4C70
 * 0000000180054B71: mov     cs:byte_1802201DC, al
 * 0000000180054B77: lea     rcx, [rbp+9E10h+var_2A60]; void *
 * 0000000180054B7E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054B83: nop
 * 0000000180054B84: lea     rcx, [rbp+9E10h+var_2A40]; void *
 * 0000000180054B8B: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054B90: nop
 * 0000000180054B91: lea     rcx, dword_1802201E0
 * 0000000180054B98: call    _Init_thread_footer
 * 0000000180054B9D: mov     rax, [rdi+rbx*8]
 * 0000000180054BA1: mov     ecx, [r15+rax]
 * 0000000180054BA5: cmp     cs:dword_1802201E8, ecx
 * 0000000180054BAB: jle     loc_180054C90
 * 0000000180054BB1: lea     rcx, dword_1802201E8
 * 0000000180054BB8: call    _Init_thread_header
 * 0000000180054BBD: cmp     cs:dword_1802201E8, r14d
 * 0000000180054BC4: jnz     loc_180054C90
 * 0000000180054BCA: lea     rax, unk_18018C710
 * 0000000180054BD1: mov     qword ptr [rbp+9E10h+var_9320], rax
 * 0000000180054BD8: lea     rax, unk_18018D760
 * 0000000180054BDF: mov     qword ptr [rbp+9E10h+var_9320+8], rax
 * 0000000180054BE6: movups  xmm0, [rbp+9E10h+var_9320]
 * 0000000180054BED: movups  [rbp+9E10h+var_8F70], xmm0
 * 0000000180054BF4: mov     dword ptr [rbp+9E10h+var_8F60], esi
 * 0000000180054BFA: mov     dword ptr [rbp+9E10h+var_8F60+4], esi
 * 0000000180054C00: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054C05: movups  xmm0, [rbp+9E10h+var_8F60]
 * 0000000180054C0C: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180054C11: call    sub_1800496D0
 * 0000000180054C16: mov     r8, rax
 * 0000000180054C19: mov     r9d, r12d
 * 0000000180054C1C: mov     edx, 92h
 * 0000000180054C21: lea     rcx, [rbp+9E10h+var_29E0]; Src
 * 0000000180054C28: call    sub_1800D4B98
 * 0000000180054C2D: nop
 * 0000000180054C2E: mov     r8, rax
 * 0000000180054C31: mov     rdx, r13
 * 0000000180054C34: lea     rcx, [rbp+9E10h+var_2A00]
 * 0000000180054C3B: call    sub_1800494AC
 * 0000000180054C40: nop
 * 0000000180054C41: lea     r8, aVertex; "/Vertex"
 * 0000000180054C48: mov     rdx, rax
 * 0000000180054C4B: lea     rcx, [rbp+9E10h+var_2A20]
 * 0000000180054C52: call    sub_180031AE8
 * 0000000180054C57: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180054C5C: mov     rcx, rax
 * 0000000180054C5F: call    sub_1800D4C70
 * 0000000180054C64: mov     cs:byte_1802201E4, al
 * 0000000180054C6A: lea     rcx, [rbp+9E10h+var_2A00]; void *
 * 0000000180054C71: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054C76: nop
 * 0000000180054C77: lea     rcx, [rbp+9E10h+var_29E0]; void *
 * 0000000180054C7E: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054C83: nop
 * 0000000180054C84: lea     rcx, dword_1802201E8
 * 0000000180054C8B: call    _Init_thread_footer
 * 0000000180054C90: mov     rax, [rdi+rbx*8]
 * 0000000180054C94: mov     ecx, [r15+rax]
 * 0000000180054C98: cmp     cs:dword_1802201F0, ecx
 * 0000000180054C9E: jle     loc_180054D83
 * 0000000180054CA4: lea     rcx, dword_1802201F0
 * 0000000180054CAB: call    _Init_thread_header
 * 0000000180054CB0: cmp     cs:dword_1802201F0, r14d
 * 0000000180054CB7: jnz     loc_180054D83
 * 0000000180054CBD: lea     rax, unk_18018C710
 * 0000000180054CC4: mov     qword ptr [rbp+9E10h+var_9310], rax
 * 0000000180054CCB: lea     rax, unk_18018D760
 * 0000000180054CD2: mov     qword ptr [rbp+9E10h+var_9310+8], rax
 * 0000000180054CD9: movups  xmm0, [rbp+9E10h+var_9310]
 * 0000000180054CE0: movups  [rbp+9E10h+var_8F50], xmm0
 * 0000000180054CE7: mov     dword ptr [rbp+9E10h+var_8F40], esi
 * 0000000180054CED: mov     dword ptr [rbp+9E10h+var_8F40+4], esi
 * 0000000180054CF3: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054CF8: movups  xmm0, [rbp+9E10h+var_8F40]
 * 0000000180054CFF: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180054D04: call    sub_1800496D0
 * 0000000180054D09: mov     r8, rax
 * 0000000180054D0C: mov     r9d, r12d
 * 0000000180054D0F: mov     edx, 98h
 * 0000000180054D14: lea     rcx, [rbp+9E10h+var_2980]; Src
 * 0000000180054D1B: call    sub_1800D4B98
 * 0000000180054D20: nop
 * 0000000180054D21: mov     r8, rax
 * 0000000180054D24: mov     rdx, r13
 * 0000000180054D27: lea     rcx, [rbp+9E10h+var_29A0]
 * 0000000180054D2E: call    sub_1800494AC
 * 0000000180054D33: nop
 * 0000000180054D34: lea     r8, aVertex; "/Vertex"
 * 0000000180054D3B: mov     rdx, rax
 * 0000000180054D3E: lea     rcx, [rbp+9E10h+var_29C0]
 * 0000000180054D45: call    sub_180031AE8
 * 0000000180054D4A: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180054D4F: mov     rcx, rax
 * 0000000180054D52: call    sub_1800D4C70
 * 0000000180054D57: mov     cs:byte_1802201EC, al
 * 0000000180054D5D: lea     rcx, [rbp+9E10h+var_29A0]; void *
 * 0000000180054D64: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054D69: nop
 * 0000000180054D6A: lea     rcx, [rbp+9E10h+var_2980]; void *
 * 0000000180054D71: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054D76: nop
 * 0000000180054D77: lea     rcx, dword_1802201F0
 * 0000000180054D7E: call    _Init_thread_footer
 * 0000000180054D83: mov     rax, [rdi+rbx*8]
 * 0000000180054D87: mov     ecx, [r15+rax]
 * 0000000180054D8B: cmp     cs:dword_1802201F8, ecx
 * 0000000180054D91: jle     loc_180054E76
 * 0000000180054D97: lea     rcx, dword_1802201F8
 * 0000000180054D9E: call    _Init_thread_header
 * 0000000180054DA3: cmp     cs:dword_1802201F8, r14d
 * 0000000180054DAA: jnz     loc_180054E76
 * 0000000180054DB0: lea     rax, unk_18018C710
 * 0000000180054DB7: mov     qword ptr [rbp+9E10h+var_9300], rax
 * 0000000180054DBE: lea     rax, unk_18018D760
 * 0000000180054DC5: mov     qword ptr [rbp+9E10h+var_9300+8], rax
 * 0000000180054DCC: movups  xmm0, [rbp+9E10h+var_9300]
 * 0000000180054DD3: movups  [rbp+9E10h+var_8F30], xmm0
 * 0000000180054DDA: mov     dword ptr [rbp+9E10h+var_8F20], esi
 * 0000000180054DE0: mov     dword ptr [rbp+9E10h+var_8F20+4], esi
 * 0000000180054DE6: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054DEB: movups  xmm0, [rbp+9E10h+var_8F20]
 * 0000000180054DF2: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180054DF7: call    sub_1800496D0
 * 0000000180054DFC: mov     r8, rax
 * 0000000180054DFF: mov     r9d, r12d
 * 0000000180054E02: mov     edx, 9Ah
 * 0000000180054E07: lea     rcx, [rbp+9E10h+var_2920]; Src
 * 0000000180054E0E: call    sub_1800D4B98
 * 0000000180054E13: nop
 * 0000000180054E14: mov     r8, rax
 * 0000000180054E17: mov     rdx, r13
 * 0000000180054E1A: lea     rcx, [rbp+9E10h+var_2940]
 * 0000000180054E21: call    sub_1800494AC
 * 0000000180054E26: nop
 * 0000000180054E27: lea     r8, aVertex; "/Vertex"
 * 0000000180054E2E: mov     rdx, rax
 * 0000000180054E31: lea     rcx, [rbp+9E10h+var_2960]
 * 0000000180054E38: call    sub_180031AE8
 * 0000000180054E3D: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180054E42: mov     rcx, rax
 * 0000000180054E45: call    sub_1800D4C70
 * 0000000180054E4A: mov     cs:byte_1802201F4, al
 * 0000000180054E50: lea     rcx, [rbp+9E10h+var_2940]; void *
 * 0000000180054E57: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054E5C: nop
 * 0000000180054E5D: lea     rcx, [rbp+9E10h+var_2920]; void *
 * 0000000180054E64: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054E69: nop
 * 0000000180054E6A: lea     rcx, dword_1802201F8
 * 0000000180054E71: call    _Init_thread_footer
 * 0000000180054E76: mov     rax, [rdi+rbx*8]
 * 0000000180054E7A: mov     ecx, [r15+rax]
 * 0000000180054E7E: cmp     cs:dword_180220200, ecx
 * 0000000180054E84: jle     loc_180054F69
 * 0000000180054E8A: lea     rcx, dword_180220200
 * 0000000180054E91: call    _Init_thread_header
 * 0000000180054E96: cmp     cs:dword_180220200, r14d
 * 0000000180054E9D: jnz     loc_180054F69
 * 0000000180054EA3: lea     rax, unk_18018D760
 * 0000000180054EAA: mov     qword ptr [rbp+9E10h+var_92F0], rax
 * 0000000180054EB1: lea     rax, aPixel; "/Pixel"
 * 0000000180054EB8: mov     qword ptr [rbp+9E10h+var_92F0+8], rax
 * 0000000180054EBF: movups  xmm0, [rbp+9E10h+var_92F0]
 * 0000000180054EC6: movups  [rbp+9E10h+var_8F10], xmm0
 * 0000000180054ECD: mov     dword ptr [rbp+9E10h+var_8F00], esi
 * 0000000180054ED3: mov     dword ptr [rbp+9E10h+var_8F00+4], esi
 * 0000000180054ED9: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054EDE: movups  xmm0, [rbp+9E10h+var_8F00]
 * 0000000180054EE5: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180054EEA: call    sub_1800496D0
 * 0000000180054EEF: mov     r8, rax
 * 0000000180054EF2: mov     r9d, r12d
 * 0000000180054EF5: mov     edx, 0A0h
 * 0000000180054EFA: lea     rcx, [rbp+9E10h+var_28C0]; Src
 * 0000000180054F01: call    sub_1800D4B98
 * 0000000180054F06: nop
 * 0000000180054F07: mov     r8, rax
 * 0000000180054F0A: mov     rdx, r13
 * 0000000180054F0D: lea     rcx, [rbp+9E10h+var_28E0]
 * 0000000180054F14: call    sub_1800494AC
 * 0000000180054F19: nop
 * 0000000180054F1A: lea     r8, aVertex; "/Vertex"
 * 0000000180054F21: mov     rdx, rax
 * 0000000180054F24: lea     rcx, [rbp+9E10h+var_2900]
 * 0000000180054F2B: call    sub_180031AE8
 * 0000000180054F30: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180054F35: mov     rcx, rax
 * 0000000180054F38: call    sub_1800D4C70
 * 0000000180054F3D: mov     cs:byte_1802201FC, al
 * 0000000180054F43: lea     rcx, [rbp+9E10h+var_28E0]; void *
 * 0000000180054F4A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054F4F: nop
 * 0000000180054F50: lea     rcx, [rbp+9E10h+var_28C0]; void *
 * 0000000180054F57: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180054F5C: nop
 * 0000000180054F5D: lea     rcx, dword_180220200
 * 0000000180054F64: call    _Init_thread_footer
 * 0000000180054F69: mov     rax, [rdi+rbx*8]
 * 0000000180054F6D: mov     ecx, [r15+rax]
 * 0000000180054F71: cmp     cs:dword_180220208, ecx
 * 0000000180054F77: jle     loc_18005505C
 * 0000000180054F7D: lea     rcx, dword_180220208
 * 0000000180054F84: call    _Init_thread_header
 * 0000000180054F89: cmp     cs:dword_180220208, r14d
 * 0000000180054F90: jnz     loc_18005505C
 * 0000000180054F96: lea     rax, unk_18018D760
 * 0000000180054F9D: mov     qword ptr [rbp+9E10h+var_92E0], rax
 * 0000000180054FA4: lea     rax, aPixel; "/Pixel"
 * 0000000180054FAB: mov     qword ptr [rbp+9E10h+var_92E0+8], rax
 * 0000000180054FB2: movups  xmm0, [rbp+9E10h+var_92E0]
 * 0000000180054FB9: movups  [rbp+9E10h+var_8EF0], xmm0
 * 0000000180054FC0: mov     dword ptr [rbp+9E10h+var_8EE0], esi
 * 0000000180054FC6: mov     dword ptr [rbp+9E10h+var_8EE0+4], esi
 * 0000000180054FCC: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180054FD1: movups  xmm0, [rbp+9E10h+var_8EE0]
 * 0000000180054FD8: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180054FDD: call    sub_1800496D0
 * 0000000180054FE2: mov     r8, rax
 * 0000000180054FE5: mov     r9d, r12d
 * 0000000180054FE8: mov     edx, 0A2h
 * 0000000180054FED: lea     rcx, [rbp+9E10h+var_2860]; Src
 * 0000000180054FF4: call    sub_1800D4B98
 * 0000000180054FF9: nop
 * 0000000180054FFA: mov     r8, rax
 * 0000000180054FFD: mov     rdx, r13
 * 0000000180055000: lea     rcx, [rbp+9E10h+var_2880]
 * 0000000180055007: call    sub_1800494AC
 * 000000018005500C: nop
 * 000000018005500D: lea     r8, aVertex; "/Vertex"
 * 0000000180055014: mov     rdx, rax
 * 0000000180055017: lea     rcx, [rbp+9E10h+var_28A0]
 * 000000018005501E: call    sub_180031AE8
 * 0000000180055023: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180055028: mov     rcx, rax
 * 000000018005502B: call    sub_1800D4C70
 * 0000000180055030: mov     cs:byte_180220204, al
 * 0000000180055036: lea     rcx, [rbp+9E10h+var_2880]; void *
 * 000000018005503D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055042: nop
 * 0000000180055043: lea     rcx, [rbp+9E10h+var_2860]; void *
 * 000000018005504A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005504F: nop
 * 0000000180055050: lea     rcx, dword_180220208
 * 0000000180055057: call    _Init_thread_footer
 * 000000018005505C: mov     rax, [rdi+rbx*8]
 * 0000000180055060: mov     ecx, [r15+rax]
 * 0000000180055064: cmp     cs:dword_180220210, ecx
 * 000000018005506A: jle     loc_18005514F
 * 0000000180055070: lea     rcx, dword_180220210
 * 0000000180055077: call    _Init_thread_header
 * 000000018005507C: cmp     cs:dword_180220210, r14d
 * 0000000180055083: jnz     loc_18005514F
 * 0000000180055089: lea     rax, unk_18018D760
 * 0000000180055090: mov     qword ptr [rbp+9E10h+var_92D0], rax
 * 0000000180055097: lea     rax, aPixel; "/Pixel"
 * 000000018005509E: mov     qword ptr [rbp+9E10h+var_92D0+8], rax
 * 00000001800550A5: movups  xmm0, [rbp+9E10h+var_92D0]
 * 00000001800550AC: movups  [rbp+9E10h+var_8ED0], xmm0
 * 00000001800550B3: mov     dword ptr [rbp+9E10h+var_8EC0], esi
 * 00000001800550B9: mov     dword ptr [rbp+9E10h+var_8EC0+4], esi
 * 00000001800550BF: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800550C4: movups  xmm0, [rbp+9E10h+var_8EC0]
 * 00000001800550CB: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800550D0: call    sub_1800496D0
 * 00000001800550D5: mov     r8, rax
 * 00000001800550D8: mov     r9d, r12d
 * 00000001800550DB: mov     edx, 0A8h
 * 00000001800550E0: lea     rcx, [rbp+9E10h+var_2800]; Src
 * 00000001800550E7: call    sub_1800D4B98
 * 00000001800550EC: nop
 * 00000001800550ED: mov     r8, rax
 * 00000001800550F0: mov     rdx, r13
 * 00000001800550F3: lea     rcx, [rbp+9E10h+var_2820]
 * 00000001800550FA: call    sub_1800494AC
 * 00000001800550FF: nop
 * 0000000180055100: lea     r8, aVertex; "/Vertex"
 * 0000000180055107: mov     rdx, rax
 * 000000018005510A: lea     rcx, [rbp+9E10h+var_2840]
 * 0000000180055111: call    sub_180031AE8
 * 0000000180055116: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005511B: mov     rcx, rax
 * 000000018005511E: call    sub_1800D4C70
 * 0000000180055123: mov     cs:byte_18022020C, al
 * 0000000180055129: lea     rcx, [rbp+9E10h+var_2820]; void *
 * 0000000180055130: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055135: nop
 * 0000000180055136: lea     rcx, [rbp+9E10h+var_2800]; void *
 * 000000018005513D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055142: nop
 * 0000000180055143: lea     rcx, dword_180220210
 * 000000018005514A: call    _Init_thread_footer
 * 000000018005514F: mov     rax, [rdi+rbx*8]
 * 0000000180055153: mov     ecx, [r15+rax]
 * 0000000180055157: cmp     cs:dword_180220218, ecx
 * 000000018005515D: jle     loc_180055242
 * 0000000180055163: lea     rcx, dword_180220218
 * 000000018005516A: call    _Init_thread_header
 * 000000018005516F: cmp     cs:dword_180220218, r14d
 * 0000000180055176: jnz     loc_180055242
 * 000000018005517C: lea     rax, unk_18018D760
 * 0000000180055183: mov     qword ptr [rbp+9E10h+var_92C0], rax
 * 000000018005518A: lea     rax, aPixel; "/Pixel"
 * 0000000180055191: mov     qword ptr [rbp+9E10h+var_92C0+8], rax
 * 0000000180055198: movups  xmm0, [rbp+9E10h+var_92C0]
 * 000000018005519F: movups  [rbp+9E10h+var_8EB0], xmm0
 * 00000001800551A6: mov     dword ptr [rbp+9E10h+var_8EA0], esi
 * 00000001800551AC: mov     dword ptr [rbp+9E10h+var_8EA0+4], esi
 * 00000001800551B2: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800551B7: movups  xmm0, [rbp+9E10h+var_8EA0]
 * 00000001800551BE: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800551C3: call    sub_1800496D0
 * 00000001800551C8: mov     r8, rax
 * 00000001800551CB: mov     r9d, r12d
 * 00000001800551CE: mov     edx, 0AAh
 * 00000001800551D3: lea     rcx, [rbp+9E10h+var_27A0]; Src
 * 00000001800551DA: call    sub_1800D4B98
 * 00000001800551DF: nop
 * 00000001800551E0: mov     r8, rax
 * 00000001800551E3: mov     rdx, r13
 * 00000001800551E6: lea     rcx, [rbp+9E10h+var_27C0]
 * 00000001800551ED: call    sub_1800494AC
 * 00000001800551F2: nop
 * 00000001800551F3: lea     r8, aVertex; "/Vertex"
 * 00000001800551FA: mov     rdx, rax
 * 00000001800551FD: lea     rcx, [rbp+9E10h+var_27E0]
 * 0000000180055204: call    sub_180031AE8
 * 0000000180055209: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005520E: mov     rcx, rax
 * 0000000180055211: call    sub_1800D4C70
 * 0000000180055216: mov     cs:byte_180220214, al
 * 000000018005521C: lea     rcx, [rbp+9E10h+var_27C0]; void *
 * 0000000180055223: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055228: nop
 * 0000000180055229: lea     rcx, [rbp+9E10h+var_27A0]; void *
 * 0000000180055230: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055235: nop
 * 0000000180055236: lea     rcx, dword_180220218
 * 000000018005523D: call    _Init_thread_footer
 * 0000000180055242: mov     rax, [rdi+rbx*8]
 * 0000000180055246: mov     ecx, [r15+rax]
 * 000000018005524A: cmp     cs:dword_180220220, ecx
 * 0000000180055250: jle     loc_180055335
 * 0000000180055256: lea     rcx, dword_180220220
 * 000000018005525D: call    _Init_thread_header
 * 0000000180055262: cmp     cs:dword_180220220, r14d
 * 0000000180055269: jnz     loc_180055335
 * 000000018005526F: lea     rax, unk_18018D760
 * 0000000180055276: mov     qword ptr [rbp+9E10h+var_92B0], rax
 * 000000018005527D: lea     rax, aPixel; "/Pixel"
 * 0000000180055284: mov     qword ptr [rbp+9E10h+var_92B0+8], rax
 * 000000018005528B: movups  xmm0, [rbp+9E10h+var_92B0]
 * 0000000180055292: movups  [rbp+9E10h+var_8E90], xmm0
 * 0000000180055299: mov     dword ptr [rbp+9E10h+var_8E80], esi
 * 000000018005529F: mov     dword ptr [rbp+9E10h+var_8E80+4], esi
 * 00000001800552A5: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800552AA: movups  xmm0, [rbp+9E10h+var_8E80]
 * 00000001800552B1: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800552B6: call    sub_1800496D0
 * 00000001800552BB: mov     r8, rax
 * 00000001800552BE: mov     r9d, r12d
 * 00000001800552C1: mov     edx, 0B0h
 * 00000001800552C6: lea     rcx, [rbp+9E10h+var_2740]; Src
 * 00000001800552CD: call    sub_1800D4B98
 * 00000001800552D2: nop
 * 00000001800552D3: mov     r8, rax
 * 00000001800552D6: mov     rdx, r13
 * 00000001800552D9: lea     rcx, [rbp+9E10h+var_2760]
 * 00000001800552E0: call    sub_1800494AC
 * 00000001800552E5: nop
 * 00000001800552E6: lea     r8, aVertex; "/Vertex"
 * 00000001800552ED: mov     rdx, rax
 * 00000001800552F0: lea     rcx, [rbp+9E10h+var_2780]
 * 00000001800552F7: call    sub_180031AE8
 * 00000001800552FC: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180055301: mov     rcx, rax
 * 0000000180055304: call    sub_1800D4C70
 * 0000000180055309: mov     cs:byte_18022021C, al
 * 000000018005530F: lea     rcx, [rbp+9E10h+var_2760]; void *
 * 0000000180055316: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005531B: nop
 * 000000018005531C: lea     rcx, [rbp+9E10h+var_2740]; void *
 * 0000000180055323: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055328: nop
 * 0000000180055329: lea     rcx, dword_180220220
 * 0000000180055330: call    _Init_thread_footer
 * 0000000180055335: mov     rax, [rdi+rbx*8]
 * 0000000180055339: mov     ecx, [r15+rax]
 * 000000018005533D: cmp     cs:dword_180220228, ecx
 * 0000000180055343: jle     loc_180055428
 * 0000000180055349: lea     rcx, dword_180220228
 * 0000000180055350: call    _Init_thread_header
 * 0000000180055355: cmp     cs:dword_180220228, r14d
 * 000000018005535C: jnz     loc_180055428
 * 0000000180055362: lea     rax, unk_18018D760
 * 0000000180055369: mov     qword ptr [rbp+9E10h+var_92A0], rax
 * 0000000180055370: lea     rax, aPixel; "/Pixel"
 * 0000000180055377: mov     qword ptr [rbp+9E10h+var_92A0+8], rax
 * 000000018005537E: movups  xmm0, [rbp+9E10h+var_92A0]
 * 0000000180055385: movups  [rbp+9E10h+var_8E70], xmm0
 * 000000018005538C: mov     dword ptr [rbp+9E10h+var_8E60], esi
 * 0000000180055392: mov     dword ptr [rbp+9E10h+var_8E60+4], esi
 * 0000000180055398: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005539D: movups  xmm0, [rbp+9E10h+var_8E60]
 * 00000001800553A4: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800553A9: call    sub_1800496D0
 * 00000001800553AE: mov     r8, rax
 * 00000001800553B1: mov     r9d, r12d
 * 00000001800553B4: mov     edx, 0B2h
 * 00000001800553B9: lea     rcx, [rbp+9E10h+var_26E0]; Src
 * 00000001800553C0: call    sub_1800D4B98
 * 00000001800553C5: nop
 * 00000001800553C6: mov     r8, rax
 * 00000001800553C9: mov     rdx, r13
 * 00000001800553CC: lea     rcx, [rbp+9E10h+var_2700]
 * 00000001800553D3: call    sub_1800494AC
 * 00000001800553D8: nop
 * 00000001800553D9: lea     r8, aVertex; "/Vertex"
 * 00000001800553E0: mov     rdx, rax
 * 00000001800553E3: lea     rcx, [rbp+9E10h+var_2720]
 * 00000001800553EA: call    sub_180031AE8
 * 00000001800553EF: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800553F4: mov     rcx, rax
 * 00000001800553F7: call    sub_1800D4C70
 * 00000001800553FC: mov     cs:byte_180220224, al
 * 0000000180055402: lea     rcx, [rbp+9E10h+var_2700]; void *
 * 0000000180055409: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005540E: nop
 * 000000018005540F: lea     rcx, [rbp+9E10h+var_26E0]; void *
 * 0000000180055416: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005541B: nop
 * 000000018005541C: lea     rcx, dword_180220228
 * 0000000180055423: call    _Init_thread_footer
 * 0000000180055428: mov     rax, [rdi+rbx*8]
 * 000000018005542C: mov     ecx, [r15+rax]
 * 0000000180055430: cmp     cs:dword_180220230, ecx
 * 0000000180055436: jle     loc_18005551B
 * 000000018005543C: lea     rcx, dword_180220230
 * 0000000180055443: call    _Init_thread_header
 * 0000000180055448: cmp     cs:dword_180220230, r14d
 * 000000018005544F: jnz     loc_18005551B
 * 0000000180055455: lea     rax, unk_18018D760
 * 000000018005545C: mov     qword ptr [rbp+9E10h+var_9290], rax
 * 0000000180055463: lea     rax, aPixel; "/Pixel"
 * 000000018005546A: mov     qword ptr [rbp+9E10h+var_9290+8], rax
 * 0000000180055471: movups  xmm0, [rbp+9E10h+var_9290]
 * 0000000180055478: movups  [rbp+9E10h+var_8E50], xmm0
 * 000000018005547F: mov     dword ptr [rbp+9E10h+var_8E40], esi
 * 0000000180055485: mov     dword ptr [rbp+9E10h+var_8E40+4], esi
 * 000000018005548B: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180055490: movups  xmm0, [rbp+9E10h+var_8E40]
 * 0000000180055497: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005549C: call    sub_1800496D0
 * 00000001800554A1: mov     r8, rax
 * 00000001800554A4: mov     r9d, r12d
 * 00000001800554A7: mov     edx, 0B8h
 * 00000001800554AC: lea     rcx, [rbp+9E10h+var_2680]; Src
 * 00000001800554B3: call    sub_1800D4B98
 * 00000001800554B8: nop
 * 00000001800554B9: mov     r8, rax
 * 00000001800554BC: mov     rdx, r13
 * 00000001800554BF: lea     rcx, [rbp+9E10h+var_26A0]
 * 00000001800554C6: call    sub_1800494AC
 * 00000001800554CB: nop
 * 00000001800554CC: lea     r8, aVertex; "/Vertex"
 * 00000001800554D3: mov     rdx, rax
 * 00000001800554D6: lea     rcx, [rbp+9E10h+var_26C0]
 * 00000001800554DD: call    sub_180031AE8
 * 00000001800554E2: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800554E7: mov     rcx, rax
 * 00000001800554EA: call    sub_1800D4C70
 * 00000001800554EF: mov     cs:byte_18022022C, al
 * 00000001800554F5: lea     rcx, [rbp+9E10h+var_26A0]; void *
 * 00000001800554FC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055501: nop
 * 0000000180055502: lea     rcx, [rbp+9E10h+var_2680]; void *
 * 0000000180055509: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005550E: nop
 * 000000018005550F: lea     rcx, dword_180220230
 * 0000000180055516: call    _Init_thread_footer
 * 000000018005551B: mov     rax, [rdi+rbx*8]
 * 000000018005551F: mov     ecx, [r15+rax]
 * 0000000180055523: cmp     cs:dword_180220238, ecx
 * 0000000180055529: jle     loc_18005560E
 * 000000018005552F: lea     rcx, dword_180220238
 * 0000000180055536: call    _Init_thread_header
 * 000000018005553B: cmp     cs:dword_180220238, r14d
 * 0000000180055542: jnz     loc_18005560E
 * 0000000180055548: lea     rax, unk_18018D760
 * 000000018005554F: mov     qword ptr [rbp+9E10h+var_9280], rax
 * 0000000180055556: lea     rax, aPixel; "/Pixel"
 * 000000018005555D: mov     qword ptr [rbp+9E10h+var_9280+8], rax
 * 0000000180055564: movups  xmm0, [rbp+9E10h+var_9280]
 * 000000018005556B: movups  [rbp+9E10h+var_8E30], xmm0
 * 0000000180055572: mov     dword ptr [rbp+9E10h+var_8E20], esi
 * 0000000180055578: mov     dword ptr [rbp+9E10h+var_8E20+4], esi
 * 000000018005557E: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180055583: movups  xmm0, [rbp+9E10h+var_8E20]
 * 000000018005558A: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005558F: call    sub_1800496D0
 * 0000000180055594: mov     r8, rax
 * 0000000180055597: mov     r9d, r12d
 * 000000018005559A: mov     edx, 0BAh
 * 000000018005559F: lea     rcx, [rbp+9E10h+var_2620]; Src
 * 00000001800555A6: call    sub_1800D4B98
 * 00000001800555AB: nop
 * 00000001800555AC: mov     r8, rax
 * 00000001800555AF: mov     rdx, r13
 * 00000001800555B2: lea     rcx, [rbp+9E10h+var_2640]
 * 00000001800555B9: call    sub_1800494AC
 * 00000001800555BE: nop
 * 00000001800555BF: lea     r8, aVertex; "/Vertex"
 * 00000001800555C6: mov     rdx, rax
 * 00000001800555C9: lea     rcx, [rbp+9E10h+var_2660]
 * 00000001800555D0: call    sub_180031AE8
 * 00000001800555D5: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800555DA: mov     rcx, rax
 * 00000001800555DD: call    sub_1800D4C70
 * 00000001800555E2: mov     cs:byte_180220234, al
 * 00000001800555E8: lea     rcx, [rbp+9E10h+var_2640]; void *
 * 00000001800555EF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800555F4: nop
 * 00000001800555F5: lea     rcx, [rbp+9E10h+var_2620]; void *
 * 00000001800555FC: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055601: nop
 * 0000000180055602: lea     rcx, dword_180220238
 * 0000000180055609: call    _Init_thread_footer
 * 000000018005560E: mov     rax, [rdi+rbx*8]
 * 0000000180055612: mov     ecx, [r15+rax]
 * 0000000180055616: cmp     cs:dword_180220240, ecx
 * 000000018005561C: jle     loc_180055701
 * 0000000180055622: lea     rcx, dword_180220240
 * 0000000180055629: call    _Init_thread_header
 * 000000018005562E: cmp     cs:dword_180220240, r14d
 * 0000000180055635: jnz     loc_180055701
 * 000000018005563B: lea     rax, unk_18018C710
 * 0000000180055642: mov     qword ptr [rbp+9E10h+var_9270], rax
 * 0000000180055649: lea     rax, unk_18018D760
 * 0000000180055650: mov     qword ptr [rbp+9E10h+var_9270+8], rax
 * 0000000180055657: movups  xmm0, [rbp+9E10h+var_9270]
 * 000000018005565E: movups  [rbp+9E10h+var_8E10], xmm0
 * 0000000180055665: mov     dword ptr [rbp+9E10h+var_8E00], esi
 * 000000018005566B: mov     dword ptr [rbp+9E10h+var_8E00+4], esi
 * 0000000180055671: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180055676: movups  xmm0, [rbp+9E10h+var_8E00]
 * 000000018005567D: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180055682: call    sub_1800496D0
 * 0000000180055687: mov     r8, rax
 * 000000018005568A: mov     r9d, r12d
 * 000000018005568D: mov     edx, 0C0h
 * 0000000180055692: lea     rcx, [rbp+9E10h+var_25C0]; Src
 * 0000000180055699: call    sub_1800D4B98
 * 000000018005569E: nop
 * 000000018005569F: mov     r8, rax
 * 00000001800556A2: mov     rdx, r13
 * 00000001800556A5: lea     rcx, [rbp+9E10h+var_25E0]
 * 00000001800556AC: call    sub_1800494AC
 * 00000001800556B1: nop
 * 00000001800556B2: lea     r8, aVertex; "/Vertex"
 * 00000001800556B9: mov     rdx, rax
 * 00000001800556BC: lea     rcx, [rbp+9E10h+var_2600]
 * 00000001800556C3: call    sub_180031AE8
 * 00000001800556C8: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800556CD: mov     rcx, rax
 * 00000001800556D0: call    sub_1800D4C70
 * 00000001800556D5: mov     cs:byte_18022023C, al
 * 00000001800556DB: lea     rcx, [rbp+9E10h+var_25E0]; void *
 * 00000001800556E2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800556E7: nop
 * 00000001800556E8: lea     rcx, [rbp+9E10h+var_25C0]; void *
 * 00000001800556EF: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800556F4: nop
 * 00000001800556F5: lea     rcx, dword_180220240
 * 00000001800556FC: call    _Init_thread_footer
 * 0000000180055701: mov     rax, [rdi+rbx*8]
 * 0000000180055705: mov     ecx, [r15+rax]
 * 0000000180055709: cmp     cs:dword_180220248, ecx
 * 000000018005570F: jle     loc_1800557F4
 * 0000000180055715: lea     rcx, dword_180220248
 * 000000018005571C: call    _Init_thread_header
 * 0000000180055721: cmp     cs:dword_180220248, r14d
 * 0000000180055728: jnz     loc_1800557F4
 * 000000018005572E: lea     rax, unk_18018C710
 * 0000000180055735: mov     qword ptr [rbp+9E10h+var_9260], rax
 * 000000018005573C: lea     rax, unk_18018D760
 * 0000000180055743: mov     qword ptr [rbp+9E10h+var_9260+8], rax
 * 000000018005574A: movups  xmm0, [rbp+9E10h+var_9260]
 * 0000000180055751: movups  [rbp+9E10h+var_8DF0], xmm0
 * 0000000180055758: mov     dword ptr [rbp+9E10h+var_8DE0], esi
 * 000000018005575E: mov     dword ptr [rbp+9E10h+var_8DE0+4], esi
 * 0000000180055764: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180055769: movups  xmm0, [rbp+9E10h+var_8DE0]
 * 0000000180055770: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180055775: call    sub_1800496D0
 * 000000018005577A: mov     r8, rax
 * 000000018005577D: mov     r9d, r12d
 * 0000000180055780: mov     edx, 0C2h
 * 0000000180055785: lea     rcx, [rbp+9E10h+var_2560]; Src
 * 000000018005578C: call    sub_1800D4B98
 * 0000000180055791: nop
 * 0000000180055792: mov     r8, rax
 * 0000000180055795: mov     rdx, r13
 * 0000000180055798: lea     rcx, [rbp+9E10h+var_2580]
 * 000000018005579F: call    sub_1800494AC
 * 00000001800557A4: nop
 * 00000001800557A5: lea     r8, aVertex; "/Vertex"
 * 00000001800557AC: mov     rdx, rax
 * 00000001800557AF: lea     rcx, [rbp+9E10h+var_25A0]
 * 00000001800557B6: call    sub_180031AE8
 * 00000001800557BB: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800557C0: mov     rcx, rax
 * 00000001800557C3: call    sub_1800D4C70
 * 00000001800557C8: mov     cs:byte_180220244, al
 * 00000001800557CE: lea     rcx, [rbp+9E10h+var_2580]; void *
 * 00000001800557D5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800557DA: nop
 * 00000001800557DB: lea     rcx, [rbp+9E10h+var_2560]; void *
 * 00000001800557E2: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800557E7: nop
 * 00000001800557E8: lea     rcx, dword_180220248
 * 00000001800557EF: call    _Init_thread_footer
 * 00000001800557F4: mov     rax, [rdi+rbx*8]
 * 00000001800557F8: mov     ecx, [r15+rax]
 * 00000001800557FC: cmp     cs:dword_180220250, ecx
 * 0000000180055802: jle     loc_1800558E7
 * 0000000180055808: lea     rcx, dword_180220250
 * 000000018005580F: call    _Init_thread_header
 * 0000000180055814: cmp     cs:dword_180220250, r14d
 * 000000018005581B: jnz     loc_1800558E7
 * 0000000180055821: lea     rax, unk_18018C710
 * 0000000180055828: mov     qword ptr [rbp+9E10h+var_9250], rax
 * 000000018005582F: lea     rax, unk_18018D760
 * 0000000180055836: mov     qword ptr [rbp+9E10h+var_9250+8], rax
 * 000000018005583D: movups  xmm0, [rbp+9E10h+var_9250]
 * 0000000180055844: movups  [rbp+9E10h+var_8DD0], xmm0
 * 000000018005584B: mov     dword ptr [rbp+9E10h+var_8DC0], esi
 * 0000000180055851: mov     dword ptr [rbp+9E10h+var_8DC0+4], esi
 * 0000000180055857: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005585C: movups  xmm0, [rbp+9E10h+var_8DC0]
 * 0000000180055863: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180055868: call    sub_1800496D0
 * 000000018005586D: mov     r8, rax
 * 0000000180055870: mov     r9d, r12d
 * 0000000180055873: mov     edx, 0C8h
 * 0000000180055878: lea     rcx, [rbp+9E10h+var_2500]; Src
 * 000000018005587F: call    sub_1800D4B98
 * 0000000180055884: nop
 * 0000000180055885: mov     r8, rax
 * 0000000180055888: mov     rdx, r13
 * 000000018005588B: lea     rcx, [rbp+9E10h+var_2520]
 * 0000000180055892: call    sub_1800494AC
 * 0000000180055897: nop
 * 0000000180055898: lea     r8, aVertex; "/Vertex"
 * 000000018005589F: mov     rdx, rax
 * 00000001800558A2: lea     rcx, [rbp+9E10h+var_2540]
 * 00000001800558A9: call    sub_180031AE8
 * 00000001800558AE: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800558B3: mov     rcx, rax
 * 00000001800558B6: call    sub_1800D4C70
 * 00000001800558BB: mov     cs:byte_18022024C, al
 * 00000001800558C1: lea     rcx, [rbp+9E10h+var_2520]; void *
 * 00000001800558C8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800558CD: nop
 * 00000001800558CE: lea     rcx, [rbp+9E10h+var_2500]; void *
 * 00000001800558D5: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800558DA: nop
 * 00000001800558DB: lea     rcx, dword_180220250
 * 00000001800558E2: call    _Init_thread_footer
 * 00000001800558E7: mov     rax, [rdi+rbx*8]
 * 00000001800558EB: mov     ecx, [r15+rax]
 * 00000001800558EF: cmp     cs:dword_180220258, ecx
 * 00000001800558F5: jle     loc_1800559DA
 * 00000001800558FB: lea     rcx, dword_180220258
 * 0000000180055902: call    _Init_thread_header
 * 0000000180055907: cmp     cs:dword_180220258, r14d
 * 000000018005590E: jnz     loc_1800559DA
 * 0000000180055914: lea     rax, unk_18018C710
 * 000000018005591B: mov     qword ptr [rbp+9E10h+var_9240], rax
 * 0000000180055922: lea     rax, unk_18018D760
 * 0000000180055929: mov     qword ptr [rbp+9E10h+var_9240+8], rax
 * 0000000180055930: movups  xmm0, [rbp+9E10h+var_9240]
 * 0000000180055937: movups  [rbp+9E10h+var_8DB0], xmm0
 * 000000018005593E: mov     dword ptr [rbp+9E10h+var_8DA0], esi
 * 0000000180055944: mov     dword ptr [rbp+9E10h+var_8DA0+4], esi
 * 000000018005594A: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005594F: movups  xmm0, [rbp+9E10h+var_8DA0]
 * 0000000180055956: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005595B: call    sub_1800496D0
 * 0000000180055960: mov     r8, rax
 * 0000000180055963: mov     r9d, r12d
 * 0000000180055966: mov     edx, 0CAh
 * 000000018005596B: lea     rcx, [rbp+9E10h+var_24A0]; Src
 * 0000000180055972: call    sub_1800D4B98
 * 0000000180055977: nop
 * 0000000180055978: mov     r8, rax
 * 000000018005597B: mov     rdx, r13
 * 000000018005597E: lea     rcx, [rbp+9E10h+var_24C0]
 * 0000000180055985: call    sub_1800494AC
 * 000000018005598A: nop
 * 000000018005598B: lea     r8, aVertex; "/Vertex"
 * 0000000180055992: mov     rdx, rax
 * 0000000180055995: lea     rcx, [rbp+9E10h+var_24E0]
 * 000000018005599C: call    sub_180031AE8
 * 00000001800559A1: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800559A6: mov     rcx, rax
 * 00000001800559A9: call    sub_1800D4C70
 * 00000001800559AE: mov     cs:byte_180220254, al
 * 00000001800559B4: lea     rcx, [rbp+9E10h+var_24C0]; void *
 * 00000001800559BB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800559C0: nop
 * 00000001800559C1: lea     rcx, [rbp+9E10h+var_24A0]; void *
 * 00000001800559C8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800559CD: nop
 * 00000001800559CE: lea     rcx, dword_180220258
 * 00000001800559D5: call    _Init_thread_footer
 * 00000001800559DA: mov     rax, [rdi+rbx*8]
 * 00000001800559DE: mov     ecx, [r15+rax]
 * 00000001800559E2: cmp     cs:dword_180220260, ecx
 * 00000001800559E8: jle     loc_180055ACD
 * 00000001800559EE: lea     rcx, dword_180220260
 * 00000001800559F5: call    _Init_thread_header
 * 00000001800559FA: cmp     cs:dword_180220260, r14d
 * 0000000180055A01: jnz     loc_180055ACD
 * 0000000180055A07: lea     rax, unk_18018C710
 * 0000000180055A0E: mov     qword ptr [rbp+9E10h+var_9230], rax
 * 0000000180055A15: lea     rax, unk_18018D760
 * 0000000180055A1C: mov     qword ptr [rbp+9E10h+var_9230+8], rax
 * 0000000180055A23: movups  xmm0, [rbp+9E10h+var_9230]
 * 0000000180055A2A: movups  [rbp+9E10h+var_8D90], xmm0
 * 0000000180055A31: mov     dword ptr [rbp+9E10h+var_8D80], esi
 * 0000000180055A37: mov     dword ptr [rbp+9E10h+var_8D80+4], esi
 * 0000000180055A3D: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180055A42: movups  xmm0, [rbp+9E10h+var_8D80]
 * 0000000180055A49: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180055A4E: call    sub_1800496D0
 * 0000000180055A53: mov     r8, rax
 * 0000000180055A56: mov     r9d, r12d
 * 0000000180055A59: mov     edx, 0D0h
 * 0000000180055A5E: lea     rcx, [rbp+9E10h+var_2440]; Src
 * 0000000180055A65: call    sub_1800D4B98
 * 0000000180055A6A: nop
 * 0000000180055A6B: mov     r8, rax
 * 0000000180055A6E: mov     rdx, r13
 * 0000000180055A71: lea     rcx, [rbp+9E10h+var_2460]
 * 0000000180055A78: call    sub_1800494AC
 * 0000000180055A7D: nop
 * 0000000180055A7E: lea     r8, aVertex; "/Vertex"
 * 0000000180055A85: mov     rdx, rax
 * 0000000180055A88: lea     rcx, [rbp+9E10h+var_2480]
 * 0000000180055A8F: call    sub_180031AE8
 * 0000000180055A94: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180055A99: mov     rcx, rax
 * 0000000180055A9C: call    sub_1800D4C70
 * 0000000180055AA1: mov     cs:byte_18022025C, al
 * 0000000180055AA7: lea     rcx, [rbp+9E10h+var_2460]; void *
 * 0000000180055AAE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055AB3: nop
 * 0000000180055AB4: lea     rcx, [rbp+9E10h+var_2440]; void *
 * 0000000180055ABB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055AC0: nop
 * 0000000180055AC1: lea     rcx, dword_180220260
 * 0000000180055AC8: call    _Init_thread_footer
 * 0000000180055ACD: mov     rax, [rdi+rbx*8]
 * 0000000180055AD1: mov     ecx, [r15+rax]
 * 0000000180055AD5: cmp     cs:dword_180220268, ecx
 * 0000000180055ADB: jle     loc_180055BC0
 * 0000000180055AE1: lea     rcx, dword_180220268
 * 0000000180055AE8: call    _Init_thread_header
 * 0000000180055AED: cmp     cs:dword_180220268, r14d
 * 0000000180055AF4: jnz     loc_180055BC0
 * 0000000180055AFA: lea     rax, unk_18018C710
 * 0000000180055B01: mov     qword ptr [rbp+9E10h+var_9220], rax
 * 0000000180055B08: lea     rax, unk_18018D760
 * 0000000180055B0F: mov     qword ptr [rbp+9E10h+var_9220+8], rax
 * 0000000180055B16: movups  xmm0, [rbp+9E10h+var_9220]
 * 0000000180055B1D: movups  [rbp+9E10h+var_8D70], xmm0
 * 0000000180055B24: mov     dword ptr [rbp+9E10h+var_8D60], esi
 * 0000000180055B2A: mov     dword ptr [rbp+9E10h+var_8D60+4], esi
 * 0000000180055B30: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180055B35: movups  xmm0, [rbp+9E10h+var_8D60]
 * 0000000180055B3C: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180055B41: call    sub_1800496D0
 * 0000000180055B46: mov     r8, rax
 * 0000000180055B49: mov     r9d, r12d
 * 0000000180055B4C: mov     edx, 0D2h
 * 0000000180055B51: lea     rcx, [rbp+9E10h+var_23E0]; Src
 * 0000000180055B58: call    sub_1800D4B98
 * 0000000180055B5D: nop
 * 0000000180055B5E: mov     r8, rax
 * 0000000180055B61: mov     rdx, r13
 * 0000000180055B64: lea     rcx, [rbp+9E10h+var_2400]
 * 0000000180055B6B: call    sub_1800494AC
 * 0000000180055B70: nop
 * 0000000180055B71: lea     r8, aVertex; "/Vertex"
 * 0000000180055B78: mov     rdx, rax
 * 0000000180055B7B: lea     rcx, [rbp+9E10h+var_2420]
 * 0000000180055B82: call    sub_180031AE8
 * 0000000180055B87: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180055B8C: mov     rcx, rax
 * 0000000180055B8F: call    sub_1800D4C70
 * 0000000180055B94: mov     cs:byte_180220264, al
 * 0000000180055B9A: lea     rcx, [rbp+9E10h+var_2400]; void *
 * 0000000180055BA1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055BA6: nop
 * 0000000180055BA7: lea     rcx, [rbp+9E10h+var_23E0]; void *
 * 0000000180055BAE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055BB3: nop
 * 0000000180055BB4: lea     rcx, dword_180220268
 * 0000000180055BBB: call    _Init_thread_footer
 * 0000000180055BC0: mov     rax, [rdi+rbx*8]
 * 0000000180055BC4: mov     ecx, [r15+rax]
 * 0000000180055BC8: cmp     cs:dword_180220270, ecx
 * 0000000180055BCE: jle     loc_180055CB3
 * 0000000180055BD4: lea     rcx, dword_180220270
 * 0000000180055BDB: call    _Init_thread_header
 * 0000000180055BE0: cmp     cs:dword_180220270, r14d
 * 0000000180055BE7: jnz     loc_180055CB3
 * 0000000180055BED: lea     rax, unk_18018C710
 * 0000000180055BF4: mov     qword ptr [rbp+9E10h+var_9210], rax
 * 0000000180055BFB: lea     rax, unk_18018D760
 * 0000000180055C02: mov     qword ptr [rbp+9E10h+var_9210+8], rax
 * 0000000180055C09: movups  xmm0, [rbp+9E10h+var_9210]
 * 0000000180055C10: movups  [rbp+9E10h+var_8D50], xmm0
 * 0000000180055C17: mov     dword ptr [rbp+9E10h+var_8D40], esi
 * 0000000180055C1D: mov     dword ptr [rbp+9E10h+var_8D40+4], esi
 * 0000000180055C23: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180055C28: movups  xmm0, [rbp+9E10h+var_8D40]
 * 0000000180055C2F: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180055C34: call    sub_1800496D0
 * 0000000180055C39: mov     r8, rax
 * 0000000180055C3C: mov     r9d, r12d
 * 0000000180055C3F: mov     edx, 0D8h
 * 0000000180055C44: lea     rcx, [rbp+9E10h+var_2380]; Src
 * 0000000180055C4B: call    sub_1800D4B98
 * 0000000180055C50: nop
 * 0000000180055C51: mov     r8, rax
 * 0000000180055C54: mov     rdx, r13
 * 0000000180055C57: lea     rcx, [rbp+9E10h+var_23A0]
 * 0000000180055C5E: call    sub_1800494AC
 * 0000000180055C63: nop
 * 0000000180055C64: lea     r8, aVertex; "/Vertex"
 * 0000000180055C6B: mov     rdx, rax
 * 0000000180055C6E: lea     rcx, [rbp+9E10h+var_23C0]
 * 0000000180055C75: call    sub_180031AE8
 * 0000000180055C7A: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180055C7F: mov     rcx, rax
 * 0000000180055C82: call    sub_1800D4C70
 * 0000000180055C87: mov     cs:byte_18022026C, al
 * 0000000180055C8D: lea     rcx, [rbp+9E10h+var_23A0]; void *
 * 0000000180055C94: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055C99: nop
 * 0000000180055C9A: lea     rcx, [rbp+9E10h+var_2380]; void *
 * 0000000180055CA1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055CA6: nop
 * 0000000180055CA7: lea     rcx, dword_180220270
 * 0000000180055CAE: call    _Init_thread_footer
 * 0000000180055CB3: mov     rax, [rdi+rbx*8]
 * 0000000180055CB7: mov     ecx, [r15+rax]
 * 0000000180055CBB: cmp     cs:dword_180220278, ecx
 * 0000000180055CC1: jle     loc_180055DA6
 * 0000000180055CC7: lea     rcx, dword_180220278
 * 0000000180055CCE: call    _Init_thread_header
 * 0000000180055CD3: cmp     cs:dword_180220278, r14d
 * 0000000180055CDA: jnz     loc_180055DA6
 * 0000000180055CE0: lea     rax, unk_18018C710
 * 0000000180055CE7: mov     qword ptr [rbp+9E10h+var_9200], rax
 * 0000000180055CEE: lea     rax, unk_18018D760
 * 0000000180055CF5: mov     qword ptr [rbp+9E10h+var_9200+8], rax
 * 0000000180055CFC: movups  xmm0, [rbp+9E10h+var_9200]
 * 0000000180055D03: movups  [rbp+9E10h+var_8D30], xmm0
 * 0000000180055D0A: mov     dword ptr [rbp+9E10h+var_8D20], esi
 * 0000000180055D10: mov     dword ptr [rbp+9E10h+var_8D20+4], esi
 * 0000000180055D16: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180055D1B: movups  xmm0, [rbp+9E10h+var_8D20]
 * 0000000180055D22: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180055D27: call    sub_1800496D0
 * 0000000180055D2C: mov     r8, rax
 * 0000000180055D2F: mov     r9d, r12d
 * 0000000180055D32: mov     edx, 0DAh
 * 0000000180055D37: lea     rcx, [rbp+9E10h+var_2320]; Src
 * 0000000180055D3E: call    sub_1800D4B98
 * 0000000180055D43: nop
 * 0000000180055D44: mov     r8, rax
 * 0000000180055D47: mov     rdx, r13
 * 0000000180055D4A: lea     rcx, [rbp+9E10h+var_2340]
 * 0000000180055D51: call    sub_1800494AC
 * 0000000180055D56: nop
 * 0000000180055D57: lea     r8, aVertex; "/Vertex"
 * 0000000180055D5E: mov     rdx, rax
 * 0000000180055D61: lea     rcx, [rbp+9E10h+var_2360]
 * 0000000180055D68: call    sub_180031AE8
 * 0000000180055D6D: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180055D72: mov     rcx, rax
 * 0000000180055D75: call    sub_1800D4C70
 * 0000000180055D7A: mov     cs:byte_180220274, al
 * 0000000180055D80: lea     rcx, [rbp+9E10h+var_2340]; void *
 * 0000000180055D87: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055D8C: nop
 * 0000000180055D8D: lea     rcx, [rbp+9E10h+var_2320]; void *
 * 0000000180055D94: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055D99: nop
 * 0000000180055D9A: lea     rcx, dword_180220278
 * 0000000180055DA1: call    _Init_thread_footer
 * 0000000180055DA6: mov     rax, [rdi+rbx*8]
 * 0000000180055DAA: mov     ecx, [r15+rax]
 * 0000000180055DAE: cmp     cs:dword_180220280, ecx
 * 0000000180055DB4: jle     loc_180055E99
 * 0000000180055DBA: lea     rcx, dword_180220280
 * 0000000180055DC1: call    _Init_thread_header
 * 0000000180055DC6: cmp     cs:dword_180220280, r14d
 * 0000000180055DCD: jnz     loc_180055E99
 * 0000000180055DD3: lea     rax, unk_18018D760
 * 0000000180055DDA: mov     qword ptr [rbp+9E10h+var_91F0], rax
 * 0000000180055DE1: lea     rax, aPixel; "/Pixel"
 * 0000000180055DE8: mov     qword ptr [rbp+9E10h+var_91F0+8], rax
 * 0000000180055DEF: movups  xmm0, [rbp+9E10h+var_91F0]
 * 0000000180055DF6: movups  [rbp+9E10h+var_8D10], xmm0
 * 0000000180055DFD: mov     dword ptr [rbp+9E10h+var_8D00], esi
 * 0000000180055E03: mov     dword ptr [rbp+9E10h+var_8D00+4], esi
 * 0000000180055E09: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180055E0E: movups  xmm0, [rbp+9E10h+var_8D00]
 * 0000000180055E15: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180055E1A: call    sub_1800496D0
 * 0000000180055E1F: mov     r8, rax
 * 0000000180055E22: mov     r9d, r12d
 * 0000000180055E25: mov     edx, 0E0h
 * 0000000180055E2A: lea     rcx, [rbp+9E10h+var_22C0]; Src
 * 0000000180055E31: call    sub_1800D4B98
 * 0000000180055E36: nop
 * 0000000180055E37: mov     r8, rax
 * 0000000180055E3A: mov     rdx, r13
 * 0000000180055E3D: lea     rcx, [rbp+9E10h+var_22E0]
 * 0000000180055E44: call    sub_1800494AC
 * 0000000180055E49: nop
 * 0000000180055E4A: lea     r8, aVertex; "/Vertex"
 * 0000000180055E51: mov     rdx, rax
 * 0000000180055E54: lea     rcx, [rbp+9E10h+var_2300]
 * 0000000180055E5B: call    sub_180031AE8
 * 0000000180055E60: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180055E65: mov     rcx, rax
 * 0000000180055E68: call    sub_1800D4C70
 * 0000000180055E6D: mov     cs:byte_18022027C, al
 * 0000000180055E73: lea     rcx, [rbp+9E10h+var_22E0]; void *
 * 0000000180055E7A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055E7F: nop
 * 0000000180055E80: lea     rcx, [rbp+9E10h+var_22C0]; void *
 * 0000000180055E87: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055E8C: nop
 * 0000000180055E8D: lea     rcx, dword_180220280
 * 0000000180055E94: call    _Init_thread_footer
 * 0000000180055E99: mov     rax, [rdi+rbx*8]
 * 0000000180055E9D: mov     ecx, [r15+rax]
 * 0000000180055EA1: cmp     cs:dword_180220288, ecx
 * 0000000180055EA7: jle     loc_180055F8C
 * 0000000180055EAD: lea     rcx, dword_180220288
 * 0000000180055EB4: call    _Init_thread_header
 * 0000000180055EB9: cmp     cs:dword_180220288, r14d
 * 0000000180055EC0: jnz     loc_180055F8C
 * 0000000180055EC6: lea     rax, unk_18018D760
 * 0000000180055ECD: mov     qword ptr [rbp+9E10h+var_91E0], rax
 * 0000000180055ED4: lea     rax, aPixel; "/Pixel"
 * 0000000180055EDB: mov     qword ptr [rbp+9E10h+var_91E0+8], rax
 * 0000000180055EE2: movups  xmm0, [rbp+9E10h+var_91E0]
 * 0000000180055EE9: movups  [rbp+9E10h+var_8CF0], xmm0
 * 0000000180055EF0: mov     dword ptr [rbp+9E10h+var_8CE0], esi
 * 0000000180055EF6: mov     dword ptr [rbp+9E10h+var_8CE0+4], esi
 * 0000000180055EFC: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180055F01: movups  xmm0, [rbp+9E10h+var_8CE0]
 * 0000000180055F08: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180055F0D: call    sub_1800496D0
 * 0000000180055F12: mov     r8, rax
 * 0000000180055F15: mov     r9d, r12d
 * 0000000180055F18: mov     edx, 0E2h
 * 0000000180055F1D: lea     rcx, [rbp+9E10h+var_2260]; Src
 * 0000000180055F24: call    sub_1800D4B98
 * 0000000180055F29: nop
 * 0000000180055F2A: mov     r8, rax
 * 0000000180055F2D: mov     rdx, r13
 * 0000000180055F30: lea     rcx, [rbp+9E10h+var_2280]
 * 0000000180055F37: call    sub_1800494AC
 * 0000000180055F3C: nop
 * 0000000180055F3D: lea     r8, aVertex; "/Vertex"
 * 0000000180055F44: mov     rdx, rax
 * 0000000180055F47: lea     rcx, [rbp+9E10h+var_22A0]
 * 0000000180055F4E: call    sub_180031AE8
 * 0000000180055F53: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180055F58: mov     rcx, rax
 * 0000000180055F5B: call    sub_1800D4C70
 * 0000000180055F60: mov     cs:byte_180220284, al
 * 0000000180055F66: lea     rcx, [rbp+9E10h+var_2280]; void *
 * 0000000180055F6D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055F72: nop
 * 0000000180055F73: lea     rcx, [rbp+9E10h+var_2260]; void *
 * 0000000180055F7A: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180055F7F: nop
 * 0000000180055F80: lea     rcx, dword_180220288
 * 0000000180055F87: call    _Init_thread_footer
 * 0000000180055F8C: mov     rax, [rdi+rbx*8]
 * 0000000180055F90: mov     ecx, [r15+rax]
 * 0000000180055F94: cmp     cs:dword_180220290, ecx
 * 0000000180055F9A: jle     loc_18005607F
 * 0000000180055FA0: lea     rcx, dword_180220290
 * 0000000180055FA7: call    _Init_thread_header
 * 0000000180055FAC: cmp     cs:dword_180220290, r14d
 * 0000000180055FB3: jnz     loc_18005607F
 * 0000000180055FB9: lea     rax, unk_18018D760
 * 0000000180055FC0: mov     qword ptr [rbp+9E10h+var_91D0], rax
 * 0000000180055FC7: lea     rax, aPixel; "/Pixel"
 * 0000000180055FCE: mov     qword ptr [rbp+9E10h+var_91D0+8], rax
 * 0000000180055FD5: movups  xmm0, [rbp+9E10h+var_91D0]
 * 0000000180055FDC: movups  [rbp+9E10h+var_8CD0], xmm0
 * 0000000180055FE3: mov     dword ptr [rbp+9E10h+var_8CC0], esi
 * 0000000180055FE9: mov     dword ptr [rbp+9E10h+var_8CC0+4], esi
 * 0000000180055FEF: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180055FF4: movups  xmm0, [rbp+9E10h+var_8CC0]
 * 0000000180055FFB: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180056000: call    sub_1800496D0
 * 0000000180056005: mov     r8, rax
 * 0000000180056008: mov     r9d, r12d
 * 000000018005600B: mov     edx, 0E8h
 * 0000000180056010: lea     rcx, [rbp+9E10h+var_2200]; Src
 * 0000000180056017: call    sub_1800D4B98
 * 000000018005601C: nop
 * 000000018005601D: mov     r8, rax
 * 0000000180056020: mov     rdx, r13
 * 0000000180056023: lea     rcx, [rbp+9E10h+var_2220]
 * 000000018005602A: call    sub_1800494AC
 * 000000018005602F: nop
 * 0000000180056030: lea     r8, aVertex; "/Vertex"
 * 0000000180056037: mov     rdx, rax
 * 000000018005603A: lea     rcx, [rbp+9E10h+var_2240]
 * 0000000180056041: call    sub_180031AE8
 * 0000000180056046: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005604B: mov     rcx, rax
 * 000000018005604E: call    sub_1800D4C70
 * 0000000180056053: mov     cs:byte_18022028C, al
 * 0000000180056059: lea     rcx, [rbp+9E10h+var_2220]; void *
 * 0000000180056060: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056065: nop
 * 0000000180056066: lea     rcx, [rbp+9E10h+var_2200]; void *
 * 000000018005606D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056072: nop
 * 0000000180056073: lea     rcx, dword_180220290
 * 000000018005607A: call    _Init_thread_footer
 * 000000018005607F: mov     rax, [rdi+rbx*8]
 * 0000000180056083: mov     ecx, [r15+rax]
 * 0000000180056087: cmp     cs:dword_180220298, ecx
 * 000000018005608D: jle     loc_180056172
 * 0000000180056093: lea     rcx, dword_180220298
 * 000000018005609A: call    _Init_thread_header
 * 000000018005609F: cmp     cs:dword_180220298, r14d
 * 00000001800560A6: jnz     loc_180056172
 * 00000001800560AC: lea     rax, unk_18018D760
 * 00000001800560B3: mov     qword ptr [rbp+9E10h+var_91C0], rax
 * 00000001800560BA: lea     rax, aPixel; "/Pixel"
 * 00000001800560C1: mov     qword ptr [rbp+9E10h+var_91C0+8], rax
 * 00000001800560C8: movups  xmm0, [rbp+9E10h+var_91C0]
 * 00000001800560CF: movups  [rbp+9E10h+var_8CB0], xmm0
 * 00000001800560D6: mov     dword ptr [rbp+9E10h+var_8CA0], esi
 * 00000001800560DC: mov     dword ptr [rbp+9E10h+var_8CA0+4], esi
 * 00000001800560E2: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800560E7: movups  xmm0, [rbp+9E10h+var_8CA0]
 * 00000001800560EE: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800560F3: call    sub_1800496D0
 * 00000001800560F8: mov     r8, rax
 * 00000001800560FB: mov     r9d, r12d
 * 00000001800560FE: mov     edx, 0EAh
 * 0000000180056103: lea     rcx, [rbp+9E10h+var_21A0]; Src
 * 000000018005610A: call    sub_1800D4B98
 * 000000018005610F: nop
 * 0000000180056110: mov     r8, rax
 * 0000000180056113: mov     rdx, r13
 * 0000000180056116: lea     rcx, [rbp+9E10h+var_21C0]
 * 000000018005611D: call    sub_1800494AC
 * 0000000180056122: nop
 * 0000000180056123: lea     r8, aVertex; "/Vertex"
 * 000000018005612A: mov     rdx, rax
 * 000000018005612D: lea     rcx, [rbp+9E10h+var_21E0]
 * 0000000180056134: call    sub_180031AE8
 * 0000000180056139: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005613E: mov     rcx, rax
 * 0000000180056141: call    sub_1800D4C70
 * 0000000180056146: mov     cs:byte_180220294, al
 * 000000018005614C: lea     rcx, [rbp+9E10h+var_21C0]; void *
 * 0000000180056153: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056158: nop
 * 0000000180056159: lea     rcx, [rbp+9E10h+var_21A0]; void *
 * 0000000180056160: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056165: nop
 * 0000000180056166: lea     rcx, dword_180220298
 * 000000018005616D: call    _Init_thread_footer
 * 0000000180056172: mov     rax, [rdi+rbx*8]
 * 0000000180056176: mov     ecx, [r15+rax]
 * 000000018005617A: cmp     cs:dword_1802202A0, ecx
 * 0000000180056180: jle     loc_180056265
 * 0000000180056186: lea     rcx, dword_1802202A0
 * 000000018005618D: call    _Init_thread_header
 * 0000000180056192: cmp     cs:dword_1802202A0, r14d
 * 0000000180056199: jnz     loc_180056265
 * 000000018005619F: lea     rax, unk_18018D760
 * 00000001800561A6: mov     qword ptr [rbp+9E10h+var_91B0], rax
 * 00000001800561AD: lea     rax, aPixel; "/Pixel"
 * 00000001800561B4: mov     qword ptr [rbp+9E10h+var_91B0+8], rax
 * 00000001800561BB: movups  xmm0, [rbp+9E10h+var_91B0]
 * 00000001800561C2: movups  [rbp+9E10h+var_8C90], xmm0
 * 00000001800561C9: mov     dword ptr [rbp+9E10h+var_8C80], esi
 * 00000001800561CF: mov     dword ptr [rbp+9E10h+var_8C80+4], esi
 * 00000001800561D5: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800561DA: movups  xmm0, [rbp+9E10h+var_8C80]
 * 00000001800561E1: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800561E6: call    sub_1800496D0
 * 00000001800561EB: mov     r8, rax
 * 00000001800561EE: mov     r9d, r12d
 * 00000001800561F1: mov     edx, 0F0h
 * 00000001800561F6: lea     rcx, [rbp+9E10h+var_2140]; Src
 * 00000001800561FD: call    sub_1800D4B98
 * 0000000180056202: nop
 * 0000000180056203: mov     r8, rax
 * 0000000180056206: mov     rdx, r13
 * 0000000180056209: lea     rcx, [rbp+9E10h+var_2160]
 * 0000000180056210: call    sub_1800494AC
 * 0000000180056215: nop
 * 0000000180056216: lea     r8, aVertex; "/Vertex"
 * 000000018005621D: mov     rdx, rax
 * 0000000180056220: lea     rcx, [rbp+9E10h+var_2180]
 * 0000000180056227: call    sub_180031AE8
 * 000000018005622C: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180056231: mov     rcx, rax
 * 0000000180056234: call    sub_1800D4C70
 * 0000000180056239: mov     cs:byte_18022029C, al
 * 000000018005623F: lea     rcx, [rbp+9E10h+var_2160]; void *
 * 0000000180056246: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005624B: nop
 * 000000018005624C: lea     rcx, [rbp+9E10h+var_2140]; void *
 * 0000000180056253: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056258: nop
 * 0000000180056259: lea     rcx, dword_1802202A0
 * 0000000180056260: call    _Init_thread_footer
 * 0000000180056265: mov     rax, [rdi+rbx*8]
 * 0000000180056269: mov     ecx, [r15+rax]
 * 000000018005626D: cmp     cs:dword_1802202A8, ecx
 * 0000000180056273: jle     loc_180056358
 * 0000000180056279: lea     rcx, dword_1802202A8
 * 0000000180056280: call    _Init_thread_header
 * 0000000180056285: cmp     cs:dword_1802202A8, r14d
 * 000000018005628C: jnz     loc_180056358
 * 0000000180056292: lea     rax, unk_18018D760
 * 0000000180056299: mov     qword ptr [rbp+9E10h+var_91A0], rax
 * 00000001800562A0: lea     rax, aPixel; "/Pixel"
 * 00000001800562A7: mov     qword ptr [rbp+9E10h+var_91A0+8], rax
 * 00000001800562AE: movups  xmm0, [rbp+9E10h+var_91A0]
 * 00000001800562B5: movups  [rbp+9E10h+var_8C70], xmm0
 * 00000001800562BC: mov     dword ptr [rbp+9E10h+var_8C60], esi
 * 00000001800562C2: mov     dword ptr [rbp+9E10h+var_8C60+4], esi
 * 00000001800562C8: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800562CD: movups  xmm0, [rbp+9E10h+var_8C60]
 * 00000001800562D4: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800562D9: call    sub_1800496D0
 * 00000001800562DE: mov     r8, rax
 * 00000001800562E1: mov     r9d, r12d
 * 00000001800562E4: mov     edx, 0F2h
 * 00000001800562E9: lea     rcx, [rbp+9E10h+var_20E0]; Src
 * 00000001800562F0: call    sub_1800D4B98
 * 00000001800562F5: nop
 * 00000001800562F6: mov     r8, rax
 * 00000001800562F9: mov     rdx, r13
 * 00000001800562FC: lea     rcx, [rbp+9E10h+var_2100]
 * 0000000180056303: call    sub_1800494AC
 * 0000000180056308: nop
 * 0000000180056309: lea     r8, aVertex; "/Vertex"
 * 0000000180056310: mov     rdx, rax
 * 0000000180056313: lea     rcx, [rbp+9E10h+var_2120]
 * 000000018005631A: call    sub_180031AE8
 * 000000018005631F: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180056324: mov     rcx, rax
 * 0000000180056327: call    sub_1800D4C70
 * 000000018005632C: mov     cs:byte_1802202A4, al
 * 0000000180056332: lea     rcx, [rbp+9E10h+var_2100]; void *
 * 0000000180056339: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005633E: nop
 * 000000018005633F: lea     rcx, [rbp+9E10h+var_20E0]; void *
 * 0000000180056346: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005634B: nop
 * 000000018005634C: lea     rcx, dword_1802202A8
 * 0000000180056353: call    _Init_thread_footer
 * 0000000180056358: mov     rax, [rdi+rbx*8]
 * 000000018005635C: mov     ecx, [r15+rax]
 * 0000000180056360: cmp     cs:dword_1802202B0, ecx
 * 0000000180056366: jle     loc_18005644B
 * 000000018005636C: lea     rcx, dword_1802202B0
 * 0000000180056373: call    _Init_thread_header
 * 0000000180056378: cmp     cs:dword_1802202B0, r14d
 * 000000018005637F: jnz     loc_18005644B
 * 0000000180056385: lea     rax, unk_18018D760
 * 000000018005638C: mov     qword ptr [rbp+9E10h+var_9190], rax
 * 0000000180056393: lea     rax, aPixel; "/Pixel"
 * 000000018005639A: mov     qword ptr [rbp+9E10h+var_9190+8], rax
 * 00000001800563A1: movups  xmm0, [rbp+9E10h+var_9190]
 * 00000001800563A8: movups  [rbp+9E10h+var_8C50], xmm0
 * 00000001800563AF: mov     dword ptr [rbp+9E10h+var_8C40], esi
 * 00000001800563B5: mov     dword ptr [rbp+9E10h+var_8C40+4], esi
 * 00000001800563BB: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800563C0: movups  xmm0, [rbp+9E10h+var_8C40]
 * 00000001800563C7: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800563CC: call    sub_1800496D0
 * 00000001800563D1: mov     r8, rax
 * 00000001800563D4: mov     r9d, r12d
 * 00000001800563D7: mov     edx, 0F8h
 * 00000001800563DC: lea     rcx, [rbp+9E10h+var_2080]; Src
 * 00000001800563E3: call    sub_1800D4B98
 * 00000001800563E8: nop
 * 00000001800563E9: mov     r8, rax
 * 00000001800563EC: mov     rdx, r13
 * 00000001800563EF: lea     rcx, [rbp+9E10h+var_20A0]
 * 00000001800563F6: call    sub_1800494AC
 * 00000001800563FB: nop
 * 00000001800563FC: lea     r8, aVertex; "/Vertex"
 * 0000000180056403: mov     rdx, rax
 * 0000000180056406: lea     rcx, [rbp+9E10h+var_20C0]
 * 000000018005640D: call    sub_180031AE8
 * 0000000180056412: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180056417: mov     rcx, rax
 * 000000018005641A: call    sub_1800D4C70
 * 000000018005641F: mov     cs:byte_1802202AC, al
 * 0000000180056425: lea     rcx, [rbp+9E10h+var_20A0]; void *
 * 000000018005642C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056431: nop
 * 0000000180056432: lea     rcx, [rbp+9E10h+var_2080]; void *
 * 0000000180056439: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005643E: nop
 * 000000018005643F: lea     rcx, dword_1802202B0
 * 0000000180056446: call    _Init_thread_footer
 * 000000018005644B: mov     rax, [rdi+rbx*8]
 * 000000018005644F: mov     ecx, [r15+rax]
 * 0000000180056453: cmp     cs:dword_1802202B8, ecx
 * 0000000180056459: jle     loc_18005653E
 * 000000018005645F: lea     rcx, dword_1802202B8
 * 0000000180056466: call    _Init_thread_header
 * 000000018005646B: cmp     cs:dword_1802202B8, r14d
 * 0000000180056472: jnz     loc_18005653E
 * 0000000180056478: lea     rax, unk_18018D760
 * 000000018005647F: mov     qword ptr [rbp+9E10h+var_9180], rax
 * 0000000180056486: lea     rax, aPixel; "/Pixel"
 * 000000018005648D: mov     qword ptr [rbp+9E10h+var_9180+8], rax
 * 0000000180056494: movups  xmm0, [rbp+9E10h+var_9180]
 * 000000018005649B: movups  [rbp+9E10h+var_8C30], xmm0
 * 00000001800564A2: mov     dword ptr [rbp+9E10h+var_8C20], esi
 * 00000001800564A8: mov     dword ptr [rbp+9E10h+var_8C20+4], esi
 * 00000001800564AE: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800564B3: movups  xmm0, [rbp+9E10h+var_8C20]
 * 00000001800564BA: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800564BF: call    sub_1800496D0
 * 00000001800564C4: mov     r8, rax
 * 00000001800564C7: mov     r9d, r12d
 * 00000001800564CA: mov     edx, 0FAh
 * 00000001800564CF: lea     rcx, [rbp+9E10h+var_2020]; Src
 * 00000001800564D6: call    sub_1800D4B98
 * 00000001800564DB: nop
 * 00000001800564DC: mov     r8, rax
 * 00000001800564DF: mov     rdx, r13
 * 00000001800564E2: lea     rcx, [rbp+9E10h+var_2040]
 * 00000001800564E9: call    sub_1800494AC
 * 00000001800564EE: nop
 * 00000001800564EF: lea     r8, aVertex; "/Vertex"
 * 00000001800564F6: mov     rdx, rax
 * 00000001800564F9: lea     rcx, [rbp+9E10h+var_2060]
 * 0000000180056500: call    sub_180031AE8
 * 0000000180056505: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005650A: mov     rcx, rax
 * 000000018005650D: call    sub_1800D4C70
 * 0000000180056512: mov     cs:byte_1802202B4, al
 * 0000000180056518: lea     rcx, [rbp+9E10h+var_2040]; void *
 * 000000018005651F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056524: nop
 * 0000000180056525: lea     rcx, [rbp+9E10h+var_2020]; void *
 * 000000018005652C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056531: nop
 * 0000000180056532: lea     rcx, dword_1802202B8
 * 0000000180056539: call    _Init_thread_footer
 * 000000018005653E: mov     rax, [rdi+rbx*8]
 * 0000000180056542: mov     ecx, [r15+rax]
 * 0000000180056546: cmp     cs:dword_1802202C0, ecx
 * 000000018005654C: jle     loc_180056631
 * 0000000180056552: lea     rcx, dword_1802202C0
 * 0000000180056559: call    _Init_thread_header
 * 000000018005655E: cmp     cs:dword_1802202C0, r14d
 * 0000000180056565: jnz     loc_180056631
 * 000000018005656B: lea     rax, unk_180187B40
 * 0000000180056572: mov     qword ptr [rbp+9E10h+var_9170], rax
 * 0000000180056579: lea     rax, unk_180188B58
 * 0000000180056580: mov     qword ptr [rbp+9E10h+var_9170+8], rax
 * 0000000180056587: movups  xmm0, [rbp+9E10h+var_9170]
 * 000000018005658E: movups  [rbp+9E10h+var_8C10], xmm0
 * 0000000180056595: mov     dword ptr [rbp+9E10h+var_8C00], esi
 * 000000018005659B: mov     dword ptr [rbp+9E10h+var_8C00+4], esi
 * 00000001800565A1: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800565A6: movups  xmm0, [rbp+9E10h+var_8C00]
 * 00000001800565AD: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800565B2: call    sub_1800496D0
 * 00000001800565B7: mov     r8, rax
 * 00000001800565BA: mov     r9d, r12d
 * 00000001800565BD: mov     edx, 100h
 * 00000001800565C2: lea     rcx, [rbp+9E10h+var_1FC0]; Src
 * 00000001800565C9: call    sub_1800D4B98
 * 00000001800565CE: nop
 * 00000001800565CF: mov     r8, rax
 * 00000001800565D2: mov     rdx, r13
 * 00000001800565D5: lea     rcx, [rbp+9E10h+var_1FE0]
 * 00000001800565DC: call    sub_1800494AC
 * 00000001800565E1: nop
 * 00000001800565E2: lea     r8, aVertex; "/Vertex"
 * 00000001800565E9: mov     rdx, rax
 * 00000001800565EC: lea     rcx, [rbp+9E10h+var_2000]
 * 00000001800565F3: call    sub_180031AE8
 * 00000001800565F8: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800565FD: mov     rcx, rax
 * 0000000180056600: call    sub_1800D4C70
 * 0000000180056605: mov     cs:byte_1802202BC, al
 * 000000018005660B: lea     rcx, [rbp+9E10h+var_1FE0]; void *
 * 0000000180056612: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056617: nop
 * 0000000180056618: lea     rcx, [rbp+9E10h+var_1FC0]; void *
 * 000000018005661F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056624: nop
 * 0000000180056625: lea     rcx, dword_1802202C0
 * 000000018005662C: call    _Init_thread_footer
 * 0000000180056631: mov     rax, [rdi+rbx*8]
 * 0000000180056635: mov     ecx, [r15+rax]
 * 0000000180056639: cmp     cs:dword_1802202C8, ecx
 * 000000018005663F: jle     loc_180056724
 * 0000000180056645: lea     rcx, dword_1802202C8
 * 000000018005664C: call    _Init_thread_header
 * 0000000180056651: cmp     cs:dword_1802202C8, r14d
 * 0000000180056658: jnz     loc_180056724
 * 000000018005665E: lea     rax, unk_180187B40
 * 0000000180056665: mov     qword ptr [rbp+9E10h+var_9160], rax
 * 000000018005666C: lea     rax, unk_180188B58
 * 0000000180056673: mov     qword ptr [rbp+9E10h+var_9160+8], rax
 * 000000018005667A: movups  xmm0, [rbp+9E10h+var_9160]
 * 0000000180056681: movups  [rbp+9E10h+var_8BF0], xmm0
 * 0000000180056688: mov     dword ptr [rbp+9E10h+var_8BE0], esi
 * 000000018005668E: mov     dword ptr [rbp+9E10h+var_8BE0+4], esi
 * 0000000180056694: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180056699: movups  xmm0, [rbp+9E10h+var_8BE0]
 * 00000001800566A0: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800566A5: call    sub_1800496D0
 * 00000001800566AA: mov     r8, rax
 * 00000001800566AD: mov     r9d, r12d
 * 00000001800566B0: mov     edx, 102h
 * 00000001800566B5: lea     rcx, [rbp+9E10h+var_1F60]; Src
 * 00000001800566BC: call    sub_1800D4B98
 * 00000001800566C1: nop
 * 00000001800566C2: mov     r8, rax
 * 00000001800566C5: mov     rdx, r13
 * 00000001800566C8: lea     rcx, [rbp+9E10h+var_1F80]
 * 00000001800566CF: call    sub_1800494AC
 * 00000001800566D4: nop
 * 00000001800566D5: lea     r8, aVertex; "/Vertex"
 * 00000001800566DC: mov     rdx, rax
 * 00000001800566DF: lea     rcx, [rbp+9E10h+var_1FA0]
 * 00000001800566E6: call    sub_180031AE8
 * 00000001800566EB: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800566F0: mov     rcx, rax
 * 00000001800566F3: call    sub_1800D4C70
 * 00000001800566F8: mov     cs:byte_1802202C4, al
 * 00000001800566FE: lea     rcx, [rbp+9E10h+var_1F80]; void *
 * 0000000180056705: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005670A: nop
 * 000000018005670B: lea     rcx, [rbp+9E10h+var_1F60]; void *
 * 0000000180056712: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056717: nop
 * 0000000180056718: lea     rcx, dword_1802202C8
 * 000000018005671F: call    _Init_thread_footer
 * 0000000180056724: mov     rax, [rdi+rbx*8]
 * 0000000180056728: mov     ecx, [r15+rax]
 * 000000018005672C: cmp     cs:dword_1802202D0, ecx
 * 0000000180056732: jle     loc_180056817
 * 0000000180056738: lea     rcx, dword_1802202D0
 * 000000018005673F: call    _Init_thread_header
 * 0000000180056744: cmp     cs:dword_1802202D0, r14d
 * 000000018005674B: jnz     loc_180056817
 * 0000000180056751: lea     rax, unk_180187B40
 * 0000000180056758: mov     qword ptr [rbp+9E10h+var_9150], rax
 * 000000018005675F: lea     rax, unk_180188B58
 * 0000000180056766: mov     qword ptr [rbp+9E10h+var_9150+8], rax
 * 000000018005676D: movups  xmm0, [rbp+9E10h+var_9150]
 * 0000000180056774: movups  [rbp+9E10h+var_8BD0], xmm0
 * 000000018005677B: mov     dword ptr [rbp+9E10h+var_8BC0], esi
 * 0000000180056781: mov     dword ptr [rbp+9E10h+var_8BC0+4], esi
 * 0000000180056787: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005678C: movups  xmm0, [rbp+9E10h+var_8BC0]
 * 0000000180056793: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180056798: call    sub_1800496D0
 * 000000018005679D: mov     r8, rax
 * 00000001800567A0: mov     r9d, r12d
 * 00000001800567A3: mov     edx, 104h
 * 00000001800567A8: lea     rcx, [rbp+9E10h+var_1F00]; Src
 * 00000001800567AF: call    sub_1800D4B98
 * 00000001800567B4: nop
 * 00000001800567B5: mov     r8, rax
 * 00000001800567B8: mov     rdx, r13
 * 00000001800567BB: lea     rcx, [rbp+9E10h+var_1F20]
 * 00000001800567C2: call    sub_1800494AC
 * 00000001800567C7: nop
 * 00000001800567C8: lea     r8, aVertex; "/Vertex"
 * 00000001800567CF: mov     rdx, rax
 * 00000001800567D2: lea     rcx, [rbp+9E10h+var_1F40]
 * 00000001800567D9: call    sub_180031AE8
 * 00000001800567DE: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800567E3: mov     rcx, rax
 * 00000001800567E6: call    sub_1800D4C70
 * 00000001800567EB: mov     cs:byte_1802202CC, al
 * 00000001800567F1: lea     rcx, [rbp+9E10h+var_1F20]; void *
 * 00000001800567F8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800567FD: nop
 * 00000001800567FE: lea     rcx, [rbp+9E10h+var_1F00]; void *
 * 0000000180056805: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005680A: nop
 * 000000018005680B: lea     rcx, dword_1802202D0
 * 0000000180056812: call    _Init_thread_footer
 * 0000000180056817: mov     rax, [rdi+rbx*8]
 * 000000018005681B: mov     ecx, [r15+rax]
 * 000000018005681F: cmp     cs:dword_1802202D8, ecx
 * 0000000180056825: jle     loc_18005690A
 * 000000018005682B: lea     rcx, dword_1802202D8
 * 0000000180056832: call    _Init_thread_header
 * 0000000180056837: cmp     cs:dword_1802202D8, r14d
 * 000000018005683E: jnz     loc_18005690A
 * 0000000180056844: lea     rax, unk_180187B40
 * 000000018005684B: mov     qword ptr [rbp+9E10h+var_9140], rax
 * 0000000180056852: lea     rax, unk_180188B58
 * 0000000180056859: mov     qword ptr [rbp+9E10h+var_9140+8], rax
 * 0000000180056860: movups  xmm0, [rbp+9E10h+var_9140]
 * 0000000180056867: movups  [rbp+9E10h+var_8BB0], xmm0
 * 000000018005686E: mov     dword ptr [rbp+9E10h+var_8BA0], esi
 * 0000000180056874: mov     dword ptr [rbp+9E10h+var_8BA0+4], esi
 * 000000018005687A: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005687F: movups  xmm0, [rbp+9E10h+var_8BA0]
 * 0000000180056886: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005688B: call    sub_1800496D0
 * 0000000180056890: mov     r8, rax
 * 0000000180056893: mov     r9d, r12d
 * 0000000180056896: mov     edx, 106h
 * 000000018005689B: lea     rcx, [rbp+9E10h+var_1EA0]; Src
 * 00000001800568A2: call    sub_1800D4B98
 * 00000001800568A7: nop
 * 00000001800568A8: mov     r8, rax
 * 00000001800568AB: mov     rdx, r13
 * 00000001800568AE: lea     rcx, [rbp+9E10h+var_1EC0]
 * 00000001800568B5: call    sub_1800494AC
 * 00000001800568BA: nop
 * 00000001800568BB: lea     r8, aVertex; "/Vertex"
 * 00000001800568C2: mov     rdx, rax
 * 00000001800568C5: lea     rcx, [rbp+9E10h+var_1EE0]
 * 00000001800568CC: call    sub_180031AE8
 * 00000001800568D1: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800568D6: mov     rcx, rax
 * 00000001800568D9: call    sub_1800D4C70
 * 00000001800568DE: mov     cs:byte_1802202D4, al
 * 00000001800568E4: lea     rcx, [rbp+9E10h+var_1EC0]; void *
 * 00000001800568EB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800568F0: nop
 * 00000001800568F1: lea     rcx, [rbp+9E10h+var_1EA0]; void *
 * 00000001800568F8: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800568FD: nop
 * 00000001800568FE: lea     rcx, dword_1802202D8
 * 0000000180056905: call    _Init_thread_footer
 * 000000018005690A: mov     rax, [rdi+rbx*8]
 * 000000018005690E: mov     ecx, [r15+rax]
 * 0000000180056912: cmp     cs:dword_1802202E0, ecx
 * 0000000180056918: jle     loc_1800569FD
 * 000000018005691E: lea     rcx, dword_1802202E0
 * 0000000180056925: call    _Init_thread_header
 * 000000018005692A: cmp     cs:dword_1802202E0, r14d
 * 0000000180056931: jnz     loc_1800569FD
 * 0000000180056937: lea     rax, unk_180187B40
 * 000000018005693E: mov     qword ptr [rbp+9E10h+var_9130], rax
 * 0000000180056945: lea     rax, unk_180188B58
 * 000000018005694C: mov     qword ptr [rbp+9E10h+var_9130+8], rax
 * 0000000180056953: movups  xmm0, [rbp+9E10h+var_9130]
 * 000000018005695A: movups  [rbp+9E10h+var_8B90], xmm0
 * 0000000180056961: mov     dword ptr [rbp+9E10h+var_8B80], esi
 * 0000000180056967: mov     dword ptr [rbp+9E10h+var_8B80+4], esi
 * 000000018005696D: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180056972: movups  xmm0, [rbp+9E10h+var_8B80]
 * 0000000180056979: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 000000018005697E: call    sub_1800496D0
 * 0000000180056983: mov     r8, rax
 * 0000000180056986: mov     r9d, r12d
 * 0000000180056989: mov     edx, 108h
 * 000000018005698E: lea     rcx, [rbp+9E10h+var_1E40]; Src
 * 0000000180056995: call    sub_1800D4B98
 * 000000018005699A: nop
 * 000000018005699B: mov     r8, rax
 * 000000018005699E: mov     rdx, r13
 * 00000001800569A1: lea     rcx, [rbp+9E10h+var_1E60]
 * 00000001800569A8: call    sub_1800494AC
 * 00000001800569AD: nop
 * 00000001800569AE: lea     r8, aVertex; "/Vertex"
 * 00000001800569B5: mov     rdx, rax
 * 00000001800569B8: lea     rcx, [rbp+9E10h+var_1E80]
 * 00000001800569BF: call    sub_180031AE8
 * 00000001800569C4: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800569C9: mov     rcx, rax
 * 00000001800569CC: call    sub_1800D4C70
 * 00000001800569D1: mov     cs:byte_1802202DC, al
 * 00000001800569D7: lea     rcx, [rbp+9E10h+var_1E60]; void *
 * 00000001800569DE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800569E3: nop
 * 00000001800569E4: lea     rcx, [rbp+9E10h+var_1E40]; void *
 * 00000001800569EB: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 00000001800569F0: nop
 * 00000001800569F1: lea     rcx, dword_1802202E0
 * 00000001800569F8: call    _Init_thread_footer
 * 00000001800569FD: mov     rax, [rdi+rbx*8]
 * 0000000180056A01: mov     ecx, [r15+rax]
 * 0000000180056A05: cmp     cs:dword_1802202E8, ecx
 * 0000000180056A0B: jle     loc_180056AF0
 * 0000000180056A11: lea     rcx, dword_1802202E8
 * 0000000180056A18: call    _Init_thread_header
 * 0000000180056A1D: cmp     cs:dword_1802202E8, r14d
 * 0000000180056A24: jnz     loc_180056AF0
 * 0000000180056A2A: lea     rax, unk_180187B40
 * 0000000180056A31: mov     qword ptr [rbp+9E10h+var_9120], rax
 * 0000000180056A38: lea     rax, unk_180188B58
 * 0000000180056A3F: mov     qword ptr [rbp+9E10h+var_9120+8], rax
 * 0000000180056A46: movups  xmm0, [rbp+9E10h+var_9120]
 * 0000000180056A4D: movups  [rbp+9E10h+var_8B70], xmm0
 * 0000000180056A54: mov     dword ptr [rbp+9E10h+var_8B60], esi
 * 0000000180056A5A: mov     dword ptr [rbp+9E10h+var_8B60+4], esi
 * 0000000180056A60: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180056A65: movups  xmm0, [rbp+9E10h+var_8B60]
 * 0000000180056A6C: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180056A71: call    sub_1800496D0
 * 0000000180056A76: mov     r8, rax
 * 0000000180056A79: mov     r9d, r12d
 * 0000000180056A7C: mov     edx, 10Ah
 * 0000000180056A81: lea     rcx, [rbp+9E10h+var_1DE0]; Src
 * 0000000180056A88: call    sub_1800D4B98
 * 0000000180056A8D: nop
 * 0000000180056A8E: mov     r8, rax
 * 0000000180056A91: mov     rdx, r13
 * 0000000180056A94: lea     rcx, [rbp+9E10h+var_1E00]
 * 0000000180056A9B: call    sub_1800494AC
 * 0000000180056AA0: nop
 * 0000000180056AA1: lea     r8, aVertex; "/Vertex"
 * 0000000180056AA8: mov     rdx, rax
 * 0000000180056AAB: lea     rcx, [rbp+9E10h+var_1E20]
 * 0000000180056AB2: call    sub_180031AE8
 * 0000000180056AB7: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180056ABC: mov     rcx, rax
 * 0000000180056ABF: call    sub_1800D4C70
 * 0000000180056AC4: mov     cs:byte_1802202E4, al
 * 0000000180056ACA: lea     rcx, [rbp+9E10h+var_1E00]; void *
 * 0000000180056AD1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056AD6: nop
 * 0000000180056AD7: lea     rcx, [rbp+9E10h+var_1DE0]; void *
 * 0000000180056ADE: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056AE3: nop
 * 0000000180056AE4: lea     rcx, dword_1802202E8
 * 0000000180056AEB: call    _Init_thread_footer
 * 0000000180056AF0: mov     rax, [rdi+rbx*8]
 * 0000000180056AF4: mov     ecx, [r15+rax]
 * 0000000180056AF8: cmp     cs:dword_1802202F0, ecx
 * 0000000180056AFE: jle     loc_180056BE3
 * 0000000180056B04: lea     rcx, dword_1802202F0
 * 0000000180056B0B: call    _Init_thread_header
 * 0000000180056B10: cmp     cs:dword_1802202F0, r14d
 * 0000000180056B17: jnz     loc_180056BE3
 * 0000000180056B1D: lea     rax, unk_180187B40
 * 0000000180056B24: mov     qword ptr [rbp+9E10h+var_9110], rax
 * 0000000180056B2B: lea     rax, unk_180188B58
 * 0000000180056B32: mov     qword ptr [rbp+9E10h+var_9110+8], rax
 * 0000000180056B39: movups  xmm0, [rbp+9E10h+var_9110]
 * 0000000180056B40: movups  [rbp+9E10h+var_8B50], xmm0
 * 0000000180056B47: mov     dword ptr [rbp+9E10h+var_8B40], esi
 * 0000000180056B4D: mov     dword ptr [rbp+9E10h+var_8B40+4], esi
 * 0000000180056B53: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180056B58: movups  xmm0, [rbp+9E10h+var_8B40]
 * 0000000180056B5F: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180056B64: call    sub_1800496D0
 * 0000000180056B69: mov     r8, rax
 * 0000000180056B6C: mov     r9d, r12d
 * 0000000180056B6F: mov     edx, 110h
 * 0000000180056B74: lea     rcx, [rbp+9E10h+var_1D80]; Src
 * 0000000180056B7B: call    sub_1800D4B98
 * 0000000180056B80: nop
 * 0000000180056B81: mov     r8, rax
 * 0000000180056B84: mov     rdx, r13
 * 0000000180056B87: lea     rcx, [rbp+9E10h+var_1DA0]
 * 0000000180056B8E: call    sub_1800494AC
 * 0000000180056B93: nop
 * 0000000180056B94: lea     r8, aVertex; "/Vertex"
 * 0000000180056B9B: mov     rdx, rax
 * 0000000180056B9E: lea     rcx, [rbp+9E10h+var_1DC0]
 * 0000000180056BA5: call    sub_180031AE8
 * 0000000180056BAA: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180056BAF: mov     rcx, rax
 * 0000000180056BB2: call    sub_1800D4C70
 * 0000000180056BB7: mov     cs:byte_1802202EC, al
 * 0000000180056BBD: lea     rcx, [rbp+9E10h+var_1DA0]; void *
 * 0000000180056BC4: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056BC9: nop
 * 0000000180056BCA: lea     rcx, [rbp+9E10h+var_1D80]; void *
 * 0000000180056BD1: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056BD6: nop
 * 0000000180056BD7: lea     rcx, dword_1802202F0
 * 0000000180056BDE: call    _Init_thread_footer
 * 0000000180056BE3: mov     rax, [rdi+rbx*8]
 * 0000000180056BE7: mov     ecx, [r15+rax]
 * 0000000180056BEB: cmp     cs:dword_1802202F8, ecx
 * 0000000180056BF1: jle     loc_180056CD6
 * 0000000180056BF7: lea     rcx, dword_1802202F8
 * 0000000180056BFE: call    _Init_thread_header
 * 0000000180056C03: cmp     cs:dword_1802202F8, r14d
 * 0000000180056C0A: jnz     loc_180056CD6
 * 0000000180056C10: lea     rax, unk_180187B40
 * 0000000180056C17: mov     qword ptr [rbp+9E10h+var_9100], rax
 * 0000000180056C1E: lea     rax, unk_180188B58
 * 0000000180056C25: mov     qword ptr [rbp+9E10h+var_9100+8], rax
 * 0000000180056C2C: movups  xmm0, [rbp+9E10h+var_9100]
 * 0000000180056C33: movups  [rbp+9E10h+var_8B30], xmm0
 * 0000000180056C3A: mov     dword ptr [rbp+9E10h+var_8B20], esi
 * 0000000180056C40: mov     dword ptr [rbp+9E10h+var_8B20+4], esi
 * 0000000180056C46: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180056C4B: movups  xmm0, [rbp+9E10h+var_8B20]
 * 0000000180056C52: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180056C57: call    sub_1800496D0
 * 0000000180056C5C: mov     r8, rax
 * 0000000180056C5F: mov     r9d, r12d
 * 0000000180056C62: mov     edx, 112h
 * 0000000180056C67: lea     rcx, [rbp+9E10h+var_1D20]; Src
 * 0000000180056C6E: call    sub_1800D4B98
 * 0000000180056C73: nop
 * 0000000180056C74: mov     r8, rax
 * 0000000180056C77: mov     rdx, r13
 * 0000000180056C7A: lea     rcx, [rbp+9E10h+var_1D40]
 * 0000000180056C81: call    sub_1800494AC
 * 0000000180056C86: nop
 * 0000000180056C87: lea     r8, aVertex; "/Vertex"
 * 0000000180056C8E: mov     rdx, rax
 * 0000000180056C91: lea     rcx, [rbp+9E10h+var_1D60]
 * 0000000180056C98: call    sub_180031AE8
 * 0000000180056C9D: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180056CA2: mov     rcx, rax
 * 0000000180056CA5: call    sub_1800D4C70
 * 0000000180056CAA: mov     cs:byte_1802202F4, al
 * 0000000180056CB0: lea     rcx, [rbp+9E10h+var_1D40]; void *
 * 0000000180056CB7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056CBC: nop
 * 0000000180056CBD: lea     rcx, [rbp+9E10h+var_1D20]; void *
 * 0000000180056CC4: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056CC9: nop
 * 0000000180056CCA: lea     rcx, dword_1802202F8
 * 0000000180056CD1: call    _Init_thread_footer
 * 0000000180056CD6: mov     rax, [rdi+rbx*8]
 * 0000000180056CDA: mov     ecx, [r15+rax]
 * 0000000180056CDE: cmp     cs:dword_180220300, ecx
 * 0000000180056CE4: jle     loc_180056DC9
 * 0000000180056CEA: lea     rcx, dword_180220300
 * 0000000180056CF1: call    _Init_thread_header
 * 0000000180056CF6: cmp     cs:dword_180220300, r14d
 * 0000000180056CFD: jnz     loc_180056DC9
 * 0000000180056D03: lea     rax, unk_180187B40
 * 0000000180056D0A: mov     qword ptr [rbp+9E10h+var_90F0], rax
 * 0000000180056D11: lea     rax, unk_180188B58
 * 0000000180056D18: mov     qword ptr [rbp+9E10h+var_90F0+8], rax
 * 0000000180056D1F: movups  xmm0, [rbp+9E10h+var_90F0]
 * 0000000180056D26: movups  [rbp+9E10h+var_8B10], xmm0
 * 0000000180056D2D: mov     dword ptr [rbp+9E10h+var_8B00], esi
 * 0000000180056D33: mov     dword ptr [rbp+9E10h+var_8B00+4], esi
 * 0000000180056D39: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180056D3E: movups  xmm0, [rbp+9E10h+var_8B00]
 * 0000000180056D45: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180056D4A: call    sub_1800496D0
 * 0000000180056D4F: mov     r8, rax
 * 0000000180056D52: mov     r9d, r12d
 * 0000000180056D55: mov     edx, 114h
 * 0000000180056D5A: lea     rcx, [rbp+9E10h+var_1CC0]; Src
 * 0000000180056D61: call    sub_1800D4B98
 * 0000000180056D66: nop
 * 0000000180056D67: mov     r8, rax
 * 0000000180056D6A: mov     rdx, r13
 * 0000000180056D6D: lea     rcx, [rbp+9E10h+var_1CE0]
 * 0000000180056D74: call    sub_1800494AC
 * 0000000180056D79: nop
 * 0000000180056D7A: lea     r8, aVertex; "/Vertex"
 * 0000000180056D81: mov     rdx, rax
 * 0000000180056D84: lea     rcx, [rbp+9E10h+var_1D00]
 * 0000000180056D8B: call    sub_180031AE8
 * 0000000180056D90: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180056D95: mov     rcx, rax
 * 0000000180056D98: call    sub_1800D4C70
 * 0000000180056D9D: mov     cs:byte_1802202FC, al
 * 0000000180056DA3: lea     rcx, [rbp+9E10h+var_1CE0]; void *
 * 0000000180056DAA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056DAF: nop
 * 0000000180056DB0: lea     rcx, [rbp+9E10h+var_1CC0]; void *
 * 0000000180056DB7: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056DBC: nop
 * 0000000180056DBD: lea     rcx, dword_180220300
 * 0000000180056DC4: call    _Init_thread_footer
 * 0000000180056DC9: mov     rax, [rdi+rbx*8]
 * 0000000180056DCD: mov     ecx, [r15+rax]
 * 0000000180056DD1: cmp     cs:dword_180220308, ecx
 * 0000000180056DD7: jle     loc_180056EBC
 * 0000000180056DDD: lea     rcx, dword_180220308
 * 0000000180056DE4: call    _Init_thread_header
 * 0000000180056DE9: cmp     cs:dword_180220308, r14d
 * 0000000180056DF0: jnz     loc_180056EBC
 * 0000000180056DF6: lea     rax, unk_180187B40
 * 0000000180056DFD: mov     qword ptr [rbp+9E10h+var_90E0], rax
 * 0000000180056E04: lea     rax, unk_180188B58
 * 0000000180056E0B: mov     qword ptr [rbp+9E10h+var_90E0+8], rax
 * 0000000180056E12: movups  xmm0, [rbp+9E10h+var_90E0]
 * 0000000180056E19: movups  [rbp+9E10h+var_8AF0], xmm0
 * 0000000180056E20: mov     dword ptr [rbp+9E10h+var_8AE0], esi
 * 0000000180056E26: mov     dword ptr [rbp+9E10h+var_8AE0+4], esi
 * 0000000180056E2C: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180056E31: movups  xmm0, [rbp+9E10h+var_8AE0]
 * 0000000180056E38: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180056E3D: call    sub_1800496D0
 * 0000000180056E42: mov     r8, rax
 * 0000000180056E45: mov     r9d, r12d
 * 0000000180056E48: mov     edx, 116h
 * 0000000180056E4D: lea     rcx, [rbp+9E10h+var_1C60]; Src
 * 0000000180056E54: call    sub_1800D4B98
 * 0000000180056E59: nop
 * 0000000180056E5A: mov     r8, rax
 * 0000000180056E5D: mov     rdx, r13
 * 0000000180056E60: lea     rcx, [rbp+9E10h+var_1C80]
 * 0000000180056E67: call    sub_1800494AC
 * 0000000180056E6C: nop
 * 0000000180056E6D: lea     r8, aVertex; "/Vertex"
 * 0000000180056E74: mov     rdx, rax
 * 0000000180056E77: lea     rcx, [rbp+9E10h+var_1CA0]
 * 0000000180056E7E: call    sub_180031AE8
 * 0000000180056E83: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180056E88: mov     rcx, rax
 * 0000000180056E8B: call    sub_1800D4C70
 * 0000000180056E90: mov     cs:byte_180220304, al
 * 0000000180056E96: lea     rcx, [rbp+9E10h+var_1C80]; void *
 * 0000000180056E9D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056EA2: nop
 * 0000000180056EA3: lea     rcx, [rbp+9E10h+var_1C60]; void *
 * 0000000180056EAA: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056EAF: nop
 * 0000000180056EB0: lea     rcx, dword_180220308
 * 0000000180056EB7: call    _Init_thread_footer
 * 0000000180056EBC: mov     rax, [rdi+rbx*8]
 * 0000000180056EC0: mov     ecx, [r15+rax]
 * 0000000180056EC4: cmp     cs:dword_180220310, ecx
 * 0000000180056ECA: jle     loc_180056FAF
 * 0000000180056ED0: lea     rcx, dword_180220310
 * 0000000180056ED7: call    _Init_thread_header
 * 0000000180056EDC: cmp     cs:dword_180220310, r14d
 * 0000000180056EE3: jnz     loc_180056FAF
 * 0000000180056EE9: lea     rax, unk_180187B40
 * 0000000180056EF0: mov     qword ptr [rbp+9E10h+var_90D0], rax
 * 0000000180056EF7: lea     rax, unk_180188B58
 * 0000000180056EFE: mov     qword ptr [rbp+9E10h+var_90D0+8], rax
 * 0000000180056F05: movups  xmm0, [rbp+9E10h+var_90D0]
 * 0000000180056F0C: movups  [rbp+9E10h+var_8AD0], xmm0
 * 0000000180056F13: mov     dword ptr [rbp+9E10h+var_8AC0], esi
 * 0000000180056F19: mov     dword ptr [rbp+9E10h+var_8AC0+4], esi
 * 0000000180056F1F: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180056F24: movups  xmm0, [rbp+9E10h+var_8AC0]
 * 0000000180056F2B: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180056F30: call    sub_1800496D0
 * 0000000180056F35: mov     r8, rax
 * 0000000180056F38: mov     r9d, r12d
 * 0000000180056F3B: mov     edx, 118h
 * 0000000180056F40: lea     rcx, [rbp+9E10h+var_1C00]; Src
 * 0000000180056F47: call    sub_1800D4B98
 * 0000000180056F4C: nop
 * 0000000180056F4D: mov     r8, rax
 * 0000000180056F50: mov     rdx, r13
 * 0000000180056F53: lea     rcx, [rbp+9E10h+var_1C20]
 * 0000000180056F5A: call    sub_1800494AC
 * 0000000180056F5F: nop
 * 0000000180056F60: lea     r8, aVertex; "/Vertex"
 * 0000000180056F67: mov     rdx, rax
 * 0000000180056F6A: lea     rcx, [rbp+9E10h+var_1C40]
 * 0000000180056F71: call    sub_180031AE8
 * 0000000180056F76: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180056F7B: mov     rcx, rax
 * 0000000180056F7E: call    sub_1800D4C70
 * 0000000180056F83: mov     cs:byte_18022030C, al
 * 0000000180056F89: lea     rcx, [rbp+9E10h+var_1C20]; void *
 * 0000000180056F90: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056F95: nop
 * 0000000180056F96: lea     rcx, [rbp+9E10h+var_1C00]; void *
 * 0000000180056F9D: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180056FA2: nop
 * 0000000180056FA3: lea     rcx, dword_180220310
 * 0000000180056FAA: call    _Init_thread_footer
 * 0000000180056FAF: mov     rax, [rdi+rbx*8]
 * 0000000180056FB3: mov     ecx, [r15+rax]
 * 0000000180056FB7: cmp     cs:dword_180220318, ecx
 * 0000000180056FBD: jle     loc_1800570A2
 * 0000000180056FC3: lea     rcx, dword_180220318
 * 0000000180056FCA: call    _Init_thread_header
 * 0000000180056FCF: cmp     cs:dword_180220318, r14d
 * 0000000180056FD6: jnz     loc_1800570A2
 * 0000000180056FDC: lea     rax, unk_180187B40
 * 0000000180056FE3: mov     qword ptr [rbp+9E10h+var_90C0], rax
 * 0000000180056FEA: lea     rax, unk_180188B58
 * 0000000180056FF1: mov     qword ptr [rbp+9E10h+var_90C0+8], rax
 * 0000000180056FF8: movups  xmm0, [rbp+9E10h+var_90C0]
 * 0000000180056FFF: movups  [rbp+9E10h+var_8AB0], xmm0
 * 0000000180057006: mov     dword ptr [rbp+9E10h+var_8AA0], esi
 * 000000018005700C: mov     dword ptr [rbp+9E10h+var_8AA0+4], esi
 * 0000000180057012: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180057017: movups  xmm0, [rbp+9E10h+var_8AA0]
 * 000000018005701E: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180057023: call    sub_1800496D0
 * 0000000180057028: mov     r8, rax
 * 000000018005702B: mov     r9d, r12d
 * 000000018005702E: mov     edx, 11Ah
 * 0000000180057033: lea     rcx, [rbp+9E10h+var_1BA0]; Src
 * 000000018005703A: call    sub_1800D4B98
 * 000000018005703F: nop
 * 0000000180057040: mov     r8, rax
 * 0000000180057043: mov     rdx, r13
 * 0000000180057046: lea     rcx, [rbp+9E10h+var_1BC0]
 * 000000018005704D: call    sub_1800494AC
 * 0000000180057052: nop
 * 0000000180057053: lea     r8, aVertex; "/Vertex"
 * 000000018005705A: mov     rdx, rax
 * 000000018005705D: lea     rcx, [rbp+9E10h+var_1BE0]
 * 0000000180057064: call    sub_180031AE8
 * 0000000180057069: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005706E: mov     rcx, rax
 * 0000000180057071: call    sub_1800D4C70
 * 0000000180057076: mov     cs:byte_180220314, al
 * 000000018005707C: lea     rcx, [rbp+9E10h+var_1BC0]; void *
 * 0000000180057083: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057088: nop
 * 0000000180057089: lea     rcx, [rbp+9E10h+var_1BA0]; void *
 * 0000000180057090: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057095: nop
 * 0000000180057096: lea     rcx, dword_180220318
 * 000000018005709D: call    _Init_thread_footer
 * 00000001800570A2: mov     rax, [rdi+rbx*8]
 * 00000001800570A6: mov     ecx, [r15+rax]
 * 00000001800570AA: cmp     cs:dword_180220320, ecx
 * 00000001800570B0: jle     loc_180057195
 * 00000001800570B6: lea     rcx, dword_180220320
 * 00000001800570BD: call    _Init_thread_header
 * 00000001800570C2: cmp     cs:dword_180220320, r14d
 * 00000001800570C9: jnz     loc_180057195
 * 00000001800570CF: lea     rax, unk_180189800
 * 00000001800570D6: mov     qword ptr [rbp+9E10h+var_90B0], rax
 * 00000001800570DD: lea     rax, unk_18018B218
 * 00000001800570E4: mov     qword ptr [rbp+9E10h+var_90B0+8], rax
 * 00000001800570EB: movups  xmm0, [rbp+9E10h+var_90B0]
 * 00000001800570F2: movups  [rbp+9E10h+var_8A90], xmm0
 * 00000001800570F9: mov     dword ptr [rbp+9E10h+var_8A80], esi
 * 00000001800570FF: mov     dword ptr [rbp+9E10h+var_8A80+4], esi
 * 0000000180057105: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005710A: movups  xmm0, [rbp+9E10h+var_8A80]
 * 0000000180057111: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180057116: call    sub_1800496D0
 * 000000018005711B: mov     r8, rax
 * 000000018005711E: mov     r9d, r12d
 * 0000000180057121: mov     edx, 120h
 * 0000000180057126: lea     rcx, [rbp+9E10h+var_1B40]; Src
 * 000000018005712D: call    sub_1800D4B98
 * 0000000180057132: nop
 * 0000000180057133: mov     r8, rax
 * 0000000180057136: mov     rdx, r13
 * 0000000180057139: lea     rcx, [rbp+9E10h+var_1B60]
 * 0000000180057140: call    sub_1800494AC
 * 0000000180057145: nop
 * 0000000180057146: lea     r8, aVertex; "/Vertex"
 * 000000018005714D: mov     rdx, rax
 * 0000000180057150: lea     rcx, [rbp+9E10h+var_1B80]
 * 0000000180057157: call    sub_180031AE8
 * 000000018005715C: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180057161: mov     rcx, rax
 * 0000000180057164: call    sub_1800D4C70
 * 0000000180057169: mov     cs:byte_18022031C, al
 * 000000018005716F: lea     rcx, [rbp+9E10h+var_1B60]; void *
 * 0000000180057176: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005717B: nop
 * 000000018005717C: lea     rcx, [rbp+9E10h+var_1B40]; void *
 * 0000000180057183: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057188: nop
 * 0000000180057189: lea     rcx, dword_180220320
 * 0000000180057190: call    _Init_thread_footer
 * 0000000180057195: mov     rax, [rdi+rbx*8]
 * 0000000180057199: mov     ecx, [r15+rax]
 * 000000018005719D: cmp     cs:dword_180220328, ecx
 * 00000001800571A3: jle     loc_180057288
 * 00000001800571A9: lea     rcx, dword_180220328
 * 00000001800571B0: call    _Init_thread_header
 * 00000001800571B5: cmp     cs:dword_180220328, r14d
 * 00000001800571BC: jnz     loc_180057288
 * 00000001800571C2: lea     rax, unk_180189800
 * 00000001800571C9: mov     qword ptr [rbp+9E10h+var_90A0], rax
 * 00000001800571D0: lea     rax, unk_18018B218
 * 00000001800571D7: mov     qword ptr [rbp+9E10h+var_90A0+8], rax
 * 00000001800571DE: movups  xmm0, [rbp+9E10h+var_90A0]
 * 00000001800571E5: movups  [rbp+9E10h+var_8A70], xmm0
 * 00000001800571EC: mov     dword ptr [rbp+9E10h+var_8A60], esi
 * 00000001800571F2: mov     dword ptr [rbp+9E10h+var_8A60+4], esi
 * 00000001800571F8: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800571FD: movups  xmm0, [rbp+9E10h+var_8A60]
 * 0000000180057204: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 0000000180057209: call    sub_1800496D0
 * 000000018005720E: mov     r8, rax
 * 0000000180057211: mov     r9d, r12d
 * 0000000180057214: mov     edx, 122h
 * 0000000180057219: lea     rcx, [rbp+9E10h+var_1AE0]; Src
 * 0000000180057220: call    sub_1800D4B98
 * 0000000180057225: nop
 * 0000000180057226: mov     r8, rax
 * 0000000180057229: mov     rdx, r13
 * 000000018005722C: lea     rcx, [rbp+9E10h+var_1B00]
 * 0000000180057233: call    sub_1800494AC
 * 0000000180057238: nop
 * 0000000180057239: lea     r8, aVertex; "/Vertex"
 * 0000000180057240: mov     rdx, rax
 * 0000000180057243: lea     rcx, [rbp+9E10h+var_1B20]
 * 000000018005724A: call    sub_180031AE8
 * 000000018005724F: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180057254: mov     rcx, rax
 * 0000000180057257: call    sub_1800D4C70
 * 000000018005725C: mov     cs:byte_180220324, al
 * 0000000180057262: lea     rcx, [rbp+9E10h+var_1B00]; void *
 * 0000000180057269: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005726E: nop
 * 000000018005726F: lea     rcx, [rbp+9E10h+var_1AE0]; void *
 * 0000000180057276: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005727B: nop
 * 000000018005727C: lea     rcx, dword_180220328
 * 0000000180057283: call    _Init_thread_footer
 * 0000000180057288: mov     rax, [rdi+rbx*8]
 * 000000018005728C: mov     ecx, [r15+rax]
 * 0000000180057290: cmp     cs:dword_180220330, ecx
 * 0000000180057296: jle     loc_18005737B
 * 000000018005729C: lea     rcx, dword_180220330
 * 00000001800572A3: call    _Init_thread_header
 * 00000001800572A8: cmp     cs:dword_180220330, r14d
 * 00000001800572AF: jnz     loc_18005737B
 * 00000001800572B5: lea     rax, unk_180189800
 * 00000001800572BC: mov     qword ptr [rbp+9E10h+var_9090], rax
 * 00000001800572C3: lea     rax, unk_18018B218
 * 00000001800572CA: mov     qword ptr [rbp+9E10h+var_9090+8], rax
 * 00000001800572D1: movups  xmm0, [rbp+9E10h+var_9090]
 * 00000001800572D8: movups  [rbp+9E10h+var_8A50], xmm0
 * 00000001800572DF: mov     dword ptr [rbp+9E10h+var_8A40], esi
 * 00000001800572E5: mov     dword ptr [rbp+9E10h+var_8A40+4], esi
 * 00000001800572EB: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800572F0: movups  xmm0, [rbp+9E10h+var_8A40]
 * 00000001800572F7: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800572FC: call    sub_1800496D0
 * 0000000180057301: mov     r8, rax
 * 0000000180057304: mov     r9d, r12d
 * 0000000180057307: mov     edx, 128h
 * 000000018005730C: lea     rcx, [rbp+9E10h+var_1A80]; Src
 * 0000000180057313: call    sub_1800D4B98
 * 0000000180057318: nop
 * 0000000180057319: mov     r8, rax
 * 000000018005731C: mov     rdx, r13
 * 000000018005731F: lea     rcx, [rbp+9E10h+var_1AA0]
 * 0000000180057326: call    sub_1800494AC
 * 000000018005732B: nop
 * 000000018005732C: lea     r8, aVertex; "/Vertex"
 * 0000000180057333: mov     rdx, rax
 * 0000000180057336: lea     rcx, [rbp+9E10h+var_1AC0]
 * 000000018005733D: call    sub_180031AE8
 * 0000000180057342: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180057347: mov     rcx, rax
 * 000000018005734A: call    sub_1800D4C70
 * 000000018005734F: mov     cs:byte_18022032C, al
 * 0000000180057355: lea     rcx, [rbp+9E10h+var_1AA0]; void *
 * 000000018005735C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057361: nop
 * 0000000180057362: lea     rcx, [rbp+9E10h+var_1A80]; void *
 * 0000000180057369: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005736E: nop
 * 000000018005736F: lea     rcx, dword_180220330
 * 0000000180057376: call    _Init_thread_footer
 * 000000018005737B: mov     rax, [rdi+rbx*8]
 * 000000018005737F: mov     ecx, [r15+rax]
 * 0000000180057383: cmp     cs:dword_180220338, ecx
 * 0000000180057389: jle     loc_18005746E
 * 000000018005738F: lea     rcx, dword_180220338
 * 0000000180057396: call    _Init_thread_header
 * 000000018005739B: cmp     cs:dword_180220338, r14d
 * 00000001800573A2: jnz     loc_18005746E
 * 00000001800573A8: lea     rax, unk_180189800
 * 00000001800573AF: mov     qword ptr [rbp+9E10h+var_9080], rax
 * 00000001800573B6: lea     rax, unk_18018B218
 * 00000001800573BD: mov     qword ptr [rbp+9E10h+var_9080+8], rax
 * 00000001800573C4: movups  xmm0, [rbp+9E10h+var_9080]
 * 00000001800573CB: movups  [rbp+9E10h+var_8A30], xmm0
 * 00000001800573D2: mov     dword ptr [rbp+9E10h+var_8A20], esi
 * 00000001800573D8: mov     dword ptr [rbp+9E10h+var_8A20+4], esi
 * 00000001800573DE: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800573E3: movups  xmm0, [rbp+9E10h+var_8A20]
 * 00000001800573EA: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800573EF: call    sub_1800496D0
 * 00000001800573F4: mov     r8, rax
 * 00000001800573F7: mov     r9d, r12d
 * 00000001800573FA: mov     edx, 12Ah
 * 00000001800573FF: lea     rcx, [rbp+9E10h+var_1A20]; Src
 * 0000000180057406: call    sub_1800D4B98
 * 000000018005740B: nop
 * 000000018005740C: mov     r8, rax
 * 000000018005740F: mov     rdx, r13
 * 0000000180057412: lea     rcx, [rbp+9E10h+var_1A40]
 * 0000000180057419: call    sub_1800494AC
 * 000000018005741E: nop
 * 000000018005741F: lea     r8, aVertex; "/Vertex"
 * 0000000180057426: mov     rdx, rax
 * 0000000180057429: lea     rcx, [rbp+9E10h+var_1A60]
 * 0000000180057430: call    sub_180031AE8
 * 0000000180057435: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005743A: mov     rcx, rax
 * 000000018005743D: call    sub_1800D4C70
 * 0000000180057442: mov     cs:byte_180220334, al
 * 0000000180057448: lea     rcx, [rbp+9E10h+var_1A40]; void *
 * 000000018005744F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057454: nop
 * 0000000180057455: lea     rcx, [rbp+9E10h+var_1A20]; void *
 * 000000018005745C: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057461: nop
 * 0000000180057462: lea     rcx, dword_180220338
 * 0000000180057469: call    _Init_thread_footer
 * 000000018005746E: mov     rax, [rdi+rbx*8]
 * 0000000180057472: mov     ecx, [r15+rax]
 * 0000000180057476: cmp     cs:dword_180220340, ecx
 * 000000018005747C: jle     loc_180057561
 * 0000000180057482: lea     rcx, dword_180220340
 * 0000000180057489: call    _Init_thread_header
 * 000000018005748E: cmp     cs:dword_180220340, r14d
 * 0000000180057495: jnz     loc_180057561
 * 000000018005749B: lea     rax, unk_180189800
 * 00000001800574A2: mov     qword ptr [rbp+9E10h+var_9070], rax
 * 00000001800574A9: lea     rax, unk_18018B218
 * 00000001800574B0: mov     qword ptr [rbp+9E10h+var_9070+8], rax
 * 00000001800574B7: movups  xmm0, [rbp+9E10h+var_9070]
 * 00000001800574BE: movups  [rbp+9E10h+var_8A10], xmm0
 * 00000001800574C5: mov     dword ptr [rbp+9E10h+var_8A00], esi
 * 00000001800574CB: mov     dword ptr [rbp+9E10h+var_8A00+4], esi
 * 00000001800574D1: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800574D6: movups  xmm0, [rbp+9E10h+var_8A00]
 * 00000001800574DD: movaps  [rsp+9F10h+var_9ED0], xmm0
 * 00000001800574E2: call    sub_1800496D0
 * 00000001800574E7: mov     r8, rax
 * 00000001800574EA: mov     r9d, r12d
 * 00000001800574ED: mov     edx, 130h
 * 00000001800574F2: lea     rcx, [rbp+9E10h+var_19C0]; Src
 * 00000001800574F9: call    sub_1800D4B98
 * 00000001800574FE: nop
 * 00000001800574FF: mov     r8, rax
 * 0000000180057502: mov     rdx, r13
 * 0000000180057505: lea     rcx, [rbp+9E10h+var_19E0]
 * 000000018005750C: call    sub_1800494AC
 * 0000000180057511: nop
 * 0000000180057512: lea     r8, aVertex; "/Vertex"
 * 0000000180057519: mov     rdx, rax
 * 000000018005751C: lea     rcx, [rbp+9E10h+var_1A00]
 * 0000000180057523: call    sub_180031AE8
 * 0000000180057528: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005752D: mov     rcx, rax
 * 0000000180057530: call    sub_1800D4C70
 * 0000000180057535: mov     cs:byte_18022033C, al
 * 000000018005753B: lea     rcx, [rbp+9E10h+var_19E0]; void *
 * 0000000180057542: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057547: nop
 * 0000000180057548: lea     rcx, [rbp+9E10h+var_19C0]; void *
 * 000000018005754F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057554: nop
 * 0000000180057555: lea     rcx, dword_180220340
 * 000000018005755C: call    _Init_thread_footer
 * 0000000180057561: mov     rax, [rdi+rbx*8]
 * 0000000180057565: mov     eax, [r15+rax]
 * 0000000180057569: cmp     cs:dword_180220348, eax
 * 000000018005756F: jle     loc_180057661
 * 0000000180057575: lea     rcx, dword_180220348
 * 000000018005757C: call    _Init_thread_header
 * 0000000180057581: cmp     cs:dword_180220348, r14d
 * 0000000180057588: jnz     loc_180057661
 * 000000018005758E: mov     r8d, 1A18h
 * 0000000180057594: lea     rdx, unk_180189800
 * 000000018005759B: lea     rcx, [rbp+9E10h+var_7370]
 * 00000001800575A2: call    sub_1800496BC
 * 00000001800575A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800575AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800575B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800575B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800575BA: mov     r9d, esi
 * 00000001800575BD: mov     r8d, esi
 * 00000001800575C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800575C5: lea     rcx, [rbp+9E10h+var_680]
 * 00000001800575CC: call    sub_1800496A8
 * 00000001800575D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800575D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800575D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800575DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800575E2: call    sub_1800496D0
 * 00000001800575E7: mov     r8, rax
 * 00000001800575EA: mov     r9d, r12d
 * 00000001800575ED: mov     edx, 132h
 * 00000001800575F2: lea     rcx, [rbp+9E10h+var_1960]; Src
 * 00000001800575F9: call    sub_1800D4B98
 * 00000001800575FE: nop
 * 00000001800575FF: mov     r8, rax
 * 0000000180057602: mov     rdx, r13
 * 0000000180057605: lea     rcx, [rbp+9E10h+var_1980]
 * 000000018005760C: call    sub_1800494AC
 * 0000000180057611: nop
 * 0000000180057612: lea     r8, aVertex; "/Vertex"
 * 0000000180057619: mov     rdx, rax
 * 000000018005761C: lea     rcx, [rbp+9E10h+var_19A0]
 * 0000000180057623: call    sub_180031AE8
 * 0000000180057628: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005762D: mov     rcx, rax
 * 0000000180057630: call    sub_1800D4C70
 * 0000000180057635: mov     cs:byte_180220344, al
 * 000000018005763B: lea     rcx, [rbp+9E10h+var_1980]; void *
 * 0000000180057642: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057647: nop
 * 0000000180057648: lea     rcx, [rbp+9E10h+var_1960]; void *
 * 000000018005764F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057654: nop
 * 0000000180057655: lea     rcx, dword_180220348
 * 000000018005765C: call    _Init_thread_footer
 * 0000000180057661: mov     rax, [rdi+rbx*8]
 * 0000000180057665: mov     ecx, [r15+rax]
 * 0000000180057669: cmp     cs:dword_180220350, ecx
 * 000000018005766F: jle     loc_180057761
 * 0000000180057675: lea     rcx, dword_180220350
 * 000000018005767C: call    _Init_thread_header
 * 0000000180057681: cmp     cs:dword_180220350, r14d
 * 0000000180057688: jnz     loc_180057761
 * 000000018005768E: mov     r8d, 1A18h
 * 0000000180057694: lea     rdx, unk_180189800
 * 000000018005769B: lea     rcx, [rbp+9E10h+var_7360]
 * 00000001800576A2: call    sub_1800496BC
 * 00000001800576A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800576AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800576B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800576B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800576BA: mov     r9d, esi
 * 00000001800576BD: mov     r8d, esi
 * 00000001800576C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800576C5: lea     rcx, [rbp+9E10h+var_660]
 * 00000001800576CC: call    sub_1800496A8
 * 00000001800576D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800576D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800576D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800576DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800576E2: call    sub_1800496D0
 * 00000001800576E7: mov     r8, rax
 * 00000001800576EA: mov     r9d, r12d
 * 00000001800576ED: mov     edx, 138h
 * 00000001800576F2: lea     rcx, [rbp+9E10h+var_1900]; Src
 * 00000001800576F9: call    sub_1800D4B98
 * 00000001800576FE: nop
 * 00000001800576FF: mov     r8, rax
 * 0000000180057702: mov     rdx, r13
 * 0000000180057705: lea     rcx, [rbp+9E10h+var_1920]
 * 000000018005770C: call    sub_1800494AC
 * 0000000180057711: nop
 * 0000000180057712: lea     r8, aVertex; "/Vertex"
 * 0000000180057719: mov     rdx, rax
 * 000000018005771C: lea     rcx, [rbp+9E10h+var_1940]
 * 0000000180057723: call    sub_180031AE8
 * 0000000180057728: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005772D: mov     rcx, rax
 * 0000000180057730: call    sub_1800D4C70
 * 0000000180057735: mov     cs:byte_18022034C, al
 * 000000018005773B: lea     rcx, [rbp+9E10h+var_1920]; void *
 * 0000000180057742: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057747: nop
 * 0000000180057748: lea     rcx, [rbp+9E10h+var_1900]; void *
 * 000000018005774F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057754: nop
 * 0000000180057755: lea     rcx, dword_180220350
 * 000000018005775C: call    _Init_thread_footer
 * 0000000180057761: mov     rax, [rdi+rbx*8]
 * 0000000180057765: mov     ecx, [r15+rax]
 * 0000000180057769: cmp     cs:dword_180220358, ecx
 * 000000018005776F: jle     loc_180057861
 * 0000000180057775: lea     rcx, dword_180220358
 * 000000018005777C: call    _Init_thread_header
 * 0000000180057781: cmp     cs:dword_180220358, r14d
 * 0000000180057788: jnz     loc_180057861
 * 000000018005778E: mov     r8d, 1A18h
 * 0000000180057794: lea     rdx, unk_180189800
 * 000000018005779B: lea     rcx, [rbp+9E10h+var_7350]
 * 00000001800577A2: call    sub_1800496BC
 * 00000001800577A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800577AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800577B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800577B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800577BA: mov     r9d, esi
 * 00000001800577BD: mov     r8d, esi
 * 00000001800577C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800577C5: lea     rcx, [rbp+9E10h+var_640]
 * 00000001800577CC: call    sub_1800496A8
 * 00000001800577D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800577D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800577D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800577DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800577E2: call    sub_1800496D0
 * 00000001800577E7: mov     r8, rax
 * 00000001800577EA: mov     r9d, r12d
 * 00000001800577ED: mov     edx, 13Ah
 * 00000001800577F2: lea     rcx, [rbp+9E10h+var_18A0]; Src
 * 00000001800577F9: call    sub_1800D4B98
 * 00000001800577FE: nop
 * 00000001800577FF: mov     r8, rax
 * 0000000180057802: mov     rdx, r13
 * 0000000180057805: lea     rcx, [rbp+9E10h+var_18C0]
 * 000000018005780C: call    sub_1800494AC
 * 0000000180057811: nop
 * 0000000180057812: lea     r8, aVertex; "/Vertex"
 * 0000000180057819: mov     rdx, rax
 * 000000018005781C: lea     rcx, [rbp+9E10h+var_18E0]
 * 0000000180057823: call    sub_180031AE8
 * 0000000180057828: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005782D: mov     rcx, rax
 * 0000000180057830: call    sub_1800D4C70
 * 0000000180057835: mov     cs:byte_180220354, al
 * 000000018005783B: lea     rcx, [rbp+9E10h+var_18C0]; void *
 * 0000000180057842: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057847: nop
 * 0000000180057848: lea     rcx, [rbp+9E10h+var_18A0]; void *
 * 000000018005784F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057854: nop
 * 0000000180057855: lea     rcx, dword_180220358
 * 000000018005785C: call    _Init_thread_footer
 * 0000000180057861: mov     rax, [rdi+rbx*8]
 * 0000000180057865: mov     eax, [r15+rax]
 * 0000000180057869: cmp     cs:dword_180220360, eax
 * 000000018005786F: jle     loc_180057961
 * 0000000180057875: lea     rcx, dword_180220360
 * 000000018005787C: call    _Init_thread_header
 * 0000000180057881: cmp     cs:dword_180220360, r14d
 * 0000000180057888: jnz     loc_180057961
 * 000000018005788E: mov     r8d, 1050h
 * 0000000180057894: lea     rdx, unk_18018C710
 * 000000018005789B: lea     rcx, [rbp+9E10h+var_7340]
 * 00000001800578A2: call    sub_1800496BC
 * 00000001800578A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800578AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800578B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800578B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800578BA: mov     r9d, esi
 * 00000001800578BD: mov     r8d, esi
 * 00000001800578C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800578C5: lea     rcx, [rbp+9E10h+var_620]
 * 00000001800578CC: call    sub_1800496A8
 * 00000001800578D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800578D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800578D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800578DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800578E2: call    sub_1800496D0
 * 00000001800578E7: mov     r8, rax
 * 00000001800578EA: mov     r9d, r12d
 * 00000001800578ED: mov     edx, 140h
 * 00000001800578F2: lea     rcx, [rbp+9E10h+var_1840]; Src
 * 00000001800578F9: call    sub_1800D4B98
 * 00000001800578FE: nop
 * 00000001800578FF: mov     r8, rax
 * 0000000180057902: mov     rdx, r13
 * 0000000180057905: lea     rcx, [rbp+9E10h+var_1860]
 * 000000018005790C: call    sub_1800494AC
 * 0000000180057911: nop
 * 0000000180057912: lea     r8, aVertex; "/Vertex"
 * 0000000180057919: mov     rdx, rax
 * 000000018005791C: lea     rcx, [rbp+9E10h+var_1880]
 * 0000000180057923: call    sub_180031AE8
 * 0000000180057928: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005792D: mov     rcx, rax
 * 0000000180057930: call    sub_1800D4C70
 * 0000000180057935: mov     cs:byte_18022035C, al
 * 000000018005793B: lea     rcx, [rbp+9E10h+var_1860]; void *
 * 0000000180057942: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057947: nop
 * 0000000180057948: lea     rcx, [rbp+9E10h+var_1840]; void *
 * 000000018005794F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057954: nop
 * 0000000180057955: lea     rcx, dword_180220360
 * 000000018005795C: call    _Init_thread_footer
 * 0000000180057961: mov     rax, [rdi+rbx*8]
 * 0000000180057965: mov     ecx, [r15+rax]
 * 0000000180057969: cmp     cs:dword_180220368, ecx
 * 000000018005796F: jle     loc_180057A61
 * 0000000180057975: lea     rcx, dword_180220368
 * 000000018005797C: call    _Init_thread_header
 * 0000000180057981: cmp     cs:dword_180220368, r14d
 * 0000000180057988: jnz     loc_180057A61
 * 000000018005798E: mov     r8d, 1050h
 * 0000000180057994: lea     rdx, unk_18018C710
 * 000000018005799B: lea     rcx, [rbp+9E10h+var_7330]
 * 00000001800579A2: call    sub_1800496BC
 * 00000001800579A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800579AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800579B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800579B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800579BA: mov     r9d, esi
 * 00000001800579BD: mov     r8d, esi
 * 00000001800579C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800579C5: lea     rcx, [rbp+9E10h+var_600]
 * 00000001800579CC: call    sub_1800496A8
 * 00000001800579D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800579D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800579D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800579DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800579E2: call    sub_1800496D0
 * 00000001800579E7: mov     r8, rax
 * 00000001800579EA: mov     r9d, r12d
 * 00000001800579ED: mov     edx, 142h
 * 00000001800579F2: lea     rcx, [rbp+9E10h+var_17E0]; Src
 * 00000001800579F9: call    sub_1800D4B98
 * 00000001800579FE: nop
 * 00000001800579FF: mov     r8, rax
 * 0000000180057A02: mov     rdx, r13
 * 0000000180057A05: lea     rcx, [rbp+9E10h+var_1800]
 * 0000000180057A0C: call    sub_1800494AC
 * 0000000180057A11: nop
 * 0000000180057A12: lea     r8, aVertex; "/Vertex"
 * 0000000180057A19: mov     rdx, rax
 * 0000000180057A1C: lea     rcx, [rbp+9E10h+var_1820]
 * 0000000180057A23: call    sub_180031AE8
 * 0000000180057A28: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180057A2D: mov     rcx, rax
 * 0000000180057A30: call    sub_1800D4C70
 * 0000000180057A35: mov     cs:byte_180220364, al
 * 0000000180057A3B: lea     rcx, [rbp+9E10h+var_1800]; void *
 * 0000000180057A42: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057A47: nop
 * 0000000180057A48: lea     rcx, [rbp+9E10h+var_17E0]; void *
 * 0000000180057A4F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057A54: nop
 * 0000000180057A55: lea     rcx, dword_180220368
 * 0000000180057A5C: call    _Init_thread_footer
 * 0000000180057A61: mov     rax, [rdi+rbx*8]
 * 0000000180057A65: mov     ecx, [r15+rax]
 * 0000000180057A69: cmp     cs:dword_180220370, ecx
 * 0000000180057A6F: jle     loc_180057B61
 * 0000000180057A75: lea     rcx, dword_180220370
 * 0000000180057A7C: call    _Init_thread_header
 * 0000000180057A81: cmp     cs:dword_180220370, r14d
 * 0000000180057A88: jnz     loc_180057B61
 * 0000000180057A8E: mov     r8d, 1050h
 * 0000000180057A94: lea     rdx, unk_18018C710
 * 0000000180057A9B: lea     rcx, [rbp+9E10h+var_7320]
 * 0000000180057AA2: call    sub_1800496BC
 * 0000000180057AA7: movups  xmm0, xmmword ptr [rax]
 * 0000000180057AAA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180057AB0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180057AB6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180057ABA: mov     r9d, esi
 * 0000000180057ABD: mov     r8d, esi
 * 0000000180057AC0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180057AC5: lea     rcx, [rbp+9E10h+var_5E0]
 * 0000000180057ACC: call    sub_1800496A8
 * 0000000180057AD1: movups  xmm0, xmmword ptr [rax]
 * 0000000180057AD4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180057AD9: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180057ADD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180057AE2: call    sub_1800496D0
 * 0000000180057AE7: mov     r8, rax
 * 0000000180057AEA: mov     r9d, r12d
 * 0000000180057AED: mov     edx, 148h
 * 0000000180057AF2: lea     rcx, [rbp+9E10h+var_1780]; Src
 * 0000000180057AF9: call    sub_1800D4B98
 * 0000000180057AFE: nop
 * 0000000180057AFF: mov     r8, rax
 * 0000000180057B02: mov     rdx, r13
 * 0000000180057B05: lea     rcx, [rbp+9E10h+var_17A0]
 * 0000000180057B0C: call    sub_1800494AC
 * 0000000180057B11: nop
 * 0000000180057B12: lea     r8, aVertex; "/Vertex"
 * 0000000180057B19: mov     rdx, rax
 * 0000000180057B1C: lea     rcx, [rbp+9E10h+var_17C0]
 * 0000000180057B23: call    sub_180031AE8
 * 0000000180057B28: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180057B2D: mov     rcx, rax
 * 0000000180057B30: call    sub_1800D4C70
 * 0000000180057B35: mov     cs:byte_18022036C, al
 * 0000000180057B3B: lea     rcx, [rbp+9E10h+var_17A0]; void *
 * 0000000180057B42: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057B47: nop
 * 0000000180057B48: lea     rcx, [rbp+9E10h+var_1780]; void *
 * 0000000180057B4F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057B54: nop
 * 0000000180057B55: lea     rcx, dword_180220370
 * 0000000180057B5C: call    _Init_thread_footer
 * 0000000180057B61: mov     rax, [rdi+rbx*8]
 * 0000000180057B65: mov     ecx, [r15+rax]
 * 0000000180057B69: cmp     cs:dword_180220378, ecx
 * 0000000180057B6F: jle     loc_180057C61
 * 0000000180057B75: lea     rcx, dword_180220378
 * 0000000180057B7C: call    _Init_thread_header
 * 0000000180057B81: cmp     cs:dword_180220378, r14d
 * 0000000180057B88: jnz     loc_180057C61
 * 0000000180057B8E: mov     r8d, 1050h
 * 0000000180057B94: lea     rdx, unk_18018C710
 * 0000000180057B9B: lea     rcx, [rbp+9E10h+var_7310]
 * 0000000180057BA2: call    sub_1800496BC
 * 0000000180057BA7: movups  xmm0, xmmword ptr [rax]
 * 0000000180057BAA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180057BB0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180057BB6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180057BBA: mov     r9d, esi
 * 0000000180057BBD: mov     r8d, esi
 * 0000000180057BC0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180057BC5: lea     rcx, [rbp+9E10h+var_5C0]
 * 0000000180057BCC: call    sub_1800496A8
 * 0000000180057BD1: movups  xmm0, xmmword ptr [rax]
 * 0000000180057BD4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180057BD9: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180057BDD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180057BE2: call    sub_1800496D0
 * 0000000180057BE7: mov     r8, rax
 * 0000000180057BEA: mov     r9d, r12d
 * 0000000180057BED: mov     edx, 14Ah
 * 0000000180057BF2: lea     rcx, [rbp+9E10h+var_1720]; Src
 * 0000000180057BF9: call    sub_1800D4B98
 * 0000000180057BFE: nop
 * 0000000180057BFF: mov     r8, rax
 * 0000000180057C02: mov     rdx, r13
 * 0000000180057C05: lea     rcx, [rbp+9E10h+var_1740]
 * 0000000180057C0C: call    sub_1800494AC
 * 0000000180057C11: nop
 * 0000000180057C12: lea     r8, aVertex; "/Vertex"
 * 0000000180057C19: mov     rdx, rax
 * 0000000180057C1C: lea     rcx, [rbp+9E10h+var_1760]
 * 0000000180057C23: call    sub_180031AE8
 * 0000000180057C28: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180057C2D: mov     rcx, rax
 * 0000000180057C30: call    sub_1800D4C70
 * 0000000180057C35: mov     cs:byte_180220374, al
 * 0000000180057C3B: lea     rcx, [rbp+9E10h+var_1740]; void *
 * 0000000180057C42: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057C47: nop
 * 0000000180057C48: lea     rcx, [rbp+9E10h+var_1720]; void *
 * 0000000180057C4F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057C54: nop
 * 0000000180057C55: lea     rcx, dword_180220378
 * 0000000180057C5C: call    _Init_thread_footer
 * 0000000180057C61: mov     rax, [rdi+rbx*8]
 * 0000000180057C65: mov     ecx, [r15+rax]
 * 0000000180057C69: cmp     cs:dword_180220380, ecx
 * 0000000180057C6F: jle     loc_180057D61
 * 0000000180057C75: lea     rcx, dword_180220380
 * 0000000180057C7C: call    _Init_thread_header
 * 0000000180057C81: cmp     cs:dword_180220380, r14d
 * 0000000180057C88: jnz     loc_180057D61
 * 0000000180057C8E: mov     r8d, 1050h
 * 0000000180057C94: lea     rdx, unk_18018C710
 * 0000000180057C9B: lea     rcx, [rbp+9E10h+var_7300]
 * 0000000180057CA2: call    sub_1800496BC
 * 0000000180057CA7: movups  xmm0, xmmword ptr [rax]
 * 0000000180057CAA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180057CB0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180057CB6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180057CBA: mov     r9d, esi
 * 0000000180057CBD: mov     r8d, esi
 * 0000000180057CC0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180057CC5: lea     rcx, [rbp+9E10h+var_5A0]
 * 0000000180057CCC: call    sub_1800496A8
 * 0000000180057CD1: movups  xmm0, xmmword ptr [rax]
 * 0000000180057CD4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180057CD9: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180057CDD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180057CE2: call    sub_1800496D0
 * 0000000180057CE7: mov     r8, rax
 * 0000000180057CEA: mov     r9d, r12d
 * 0000000180057CED: mov     edx, 150h
 * 0000000180057CF2: lea     rcx, [rbp+9E10h+var_16C0]; Src
 * 0000000180057CF9: call    sub_1800D4B98
 * 0000000180057CFE: nop
 * 0000000180057CFF: mov     r8, rax
 * 0000000180057D02: mov     rdx, r13
 * 0000000180057D05: lea     rcx, [rbp+9E10h+var_16E0]
 * 0000000180057D0C: call    sub_1800494AC
 * 0000000180057D11: nop
 * 0000000180057D12: lea     r8, aVertex; "/Vertex"
 * 0000000180057D19: mov     rdx, rax
 * 0000000180057D1C: lea     rcx, [rbp+9E10h+var_1700]
 * 0000000180057D23: call    sub_180031AE8
 * 0000000180057D28: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180057D2D: mov     rcx, rax
 * 0000000180057D30: call    sub_1800D4C70
 * 0000000180057D35: mov     cs:byte_18022037C, al
 * 0000000180057D3B: lea     rcx, [rbp+9E10h+var_16E0]; void *
 * 0000000180057D42: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057D47: nop
 * 0000000180057D48: lea     rcx, [rbp+9E10h+var_16C0]; void *
 * 0000000180057D4F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057D54: nop
 * 0000000180057D55: lea     rcx, dword_180220380
 * 0000000180057D5C: call    _Init_thread_footer
 * 0000000180057D61: mov     rax, [rdi+rbx*8]
 * 0000000180057D65: mov     ecx, [r15+rax]
 * 0000000180057D69: cmp     cs:dword_180220388, ecx
 * 0000000180057D6F: jle     loc_180057E61
 * 0000000180057D75: lea     rcx, dword_180220388
 * 0000000180057D7C: call    _Init_thread_header
 * 0000000180057D81: cmp     cs:dword_180220388, r14d
 * 0000000180057D88: jnz     loc_180057E61
 * 0000000180057D8E: mov     r8d, 1050h
 * 0000000180057D94: lea     rdx, unk_18018C710
 * 0000000180057D9B: lea     rcx, [rbp+9E10h+var_72F0]
 * 0000000180057DA2: call    sub_1800496BC
 * 0000000180057DA7: movups  xmm0, xmmword ptr [rax]
 * 0000000180057DAA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180057DB0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180057DB6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180057DBA: mov     r9d, esi
 * 0000000180057DBD: mov     r8d, esi
 * 0000000180057DC0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180057DC5: lea     rcx, [rbp+9E10h+var_580]
 * 0000000180057DCC: call    sub_1800496A8
 * 0000000180057DD1: movups  xmm0, xmmword ptr [rax]
 * 0000000180057DD4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180057DD9: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180057DDD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180057DE2: call    sub_1800496D0
 * 0000000180057DE7: mov     r8, rax
 * 0000000180057DEA: mov     r9d, r12d
 * 0000000180057DED: mov     edx, 152h
 * 0000000180057DF2: lea     rcx, [rbp+9E10h+var_1660]; Src
 * 0000000180057DF9: call    sub_1800D4B98
 * 0000000180057DFE: nop
 * 0000000180057DFF: mov     r8, rax
 * 0000000180057E02: mov     rdx, r13
 * 0000000180057E05: lea     rcx, [rbp+9E10h+var_1680]
 * 0000000180057E0C: call    sub_1800494AC
 * 0000000180057E11: nop
 * 0000000180057E12: lea     r8, aVertex; "/Vertex"
 * 0000000180057E19: mov     rdx, rax
 * 0000000180057E1C: lea     rcx, [rbp+9E10h+var_16A0]
 * 0000000180057E23: call    sub_180031AE8
 * 0000000180057E28: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180057E2D: mov     rcx, rax
 * 0000000180057E30: call    sub_1800D4C70
 * 0000000180057E35: mov     cs:byte_180220384, al
 * 0000000180057E3B: lea     rcx, [rbp+9E10h+var_1680]; void *
 * 0000000180057E42: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057E47: nop
 * 0000000180057E48: lea     rcx, [rbp+9E10h+var_1660]; void *
 * 0000000180057E4F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057E54: nop
 * 0000000180057E55: lea     rcx, dword_180220388
 * 0000000180057E5C: call    _Init_thread_footer
 * 0000000180057E61: mov     rax, [rdi+rbx*8]
 * 0000000180057E65: mov     ecx, [r15+rax]
 * 0000000180057E69: cmp     cs:dword_180220390, ecx
 * 0000000180057E6F: jle     loc_180057F61
 * 0000000180057E75: lea     rcx, dword_180220390
 * 0000000180057E7C: call    _Init_thread_header
 * 0000000180057E81: cmp     cs:dword_180220390, r14d
 * 0000000180057E88: jnz     loc_180057F61
 * 0000000180057E8E: mov     r8d, 1050h
 * 0000000180057E94: lea     rdx, unk_18018C710
 * 0000000180057E9B: lea     rcx, [rbp+9E10h+var_72E0]
 * 0000000180057EA2: call    sub_1800496BC
 * 0000000180057EA7: movups  xmm0, xmmword ptr [rax]
 * 0000000180057EAA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180057EB0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180057EB6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180057EBA: mov     r9d, esi
 * 0000000180057EBD: mov     r8d, esi
 * 0000000180057EC0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180057EC5: lea     rcx, [rbp+9E10h+var_560]
 * 0000000180057ECC: call    sub_1800496A8
 * 0000000180057ED1: movups  xmm0, xmmword ptr [rax]
 * 0000000180057ED4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180057ED9: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180057EDD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180057EE2: call    sub_1800496D0
 * 0000000180057EE7: mov     r8, rax
 * 0000000180057EEA: mov     r9d, r12d
 * 0000000180057EED: mov     edx, 158h
 * 0000000180057EF2: lea     rcx, [rbp+9E10h+var_1600]; Src
 * 0000000180057EF9: call    sub_1800D4B98
 * 0000000180057EFE: nop
 * 0000000180057EFF: mov     r8, rax
 * 0000000180057F02: mov     rdx, r13
 * 0000000180057F05: lea     rcx, [rbp+9E10h+var_1620]
 * 0000000180057F0C: call    sub_1800494AC
 * 0000000180057F11: nop
 * 0000000180057F12: lea     r8, aVertex; "/Vertex"
 * 0000000180057F19: mov     rdx, rax
 * 0000000180057F1C: lea     rcx, [rbp+9E10h+var_1640]
 * 0000000180057F23: call    sub_180031AE8
 * 0000000180057F28: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180057F2D: mov     rcx, rax
 * 0000000180057F30: call    sub_1800D4C70
 * 0000000180057F35: mov     cs:byte_18022038C, al
 * 0000000180057F3B: lea     rcx, [rbp+9E10h+var_1620]; void *
 * 0000000180057F42: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057F47: nop
 * 0000000180057F48: lea     rcx, [rbp+9E10h+var_1600]; void *
 * 0000000180057F4F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180057F54: nop
 * 0000000180057F55: lea     rcx, dword_180220390
 * 0000000180057F5C: call    _Init_thread_footer
 * 0000000180057F61: mov     rax, [rdi+rbx*8]
 * 0000000180057F65: mov     ecx, [r15+rax]
 * 0000000180057F69: cmp     cs:dword_180220398, ecx
 * 0000000180057F6F: jle     loc_180058061
 * 0000000180057F75: lea     rcx, dword_180220398
 * 0000000180057F7C: call    _Init_thread_header
 * 0000000180057F81: cmp     cs:dword_180220398, r14d
 * 0000000180057F88: jnz     loc_180058061
 * 0000000180057F8E: mov     r8d, 1050h
 * 0000000180057F94: lea     rdx, unk_18018C710
 * 0000000180057F9B: lea     rcx, [rbp+9E10h+var_72D0]
 * 0000000180057FA2: call    sub_1800496BC
 * 0000000180057FA7: movups  xmm0, xmmword ptr [rax]
 * 0000000180057FAA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180057FB0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180057FB6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180057FBA: mov     r9d, esi
 * 0000000180057FBD: mov     r8d, esi
 * 0000000180057FC0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180057FC5: lea     rcx, [rbp+9E10h+var_540]
 * 0000000180057FCC: call    sub_1800496A8
 * 0000000180057FD1: movups  xmm0, xmmword ptr [rax]
 * 0000000180057FD4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180057FD9: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180057FDD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180057FE2: call    sub_1800496D0
 * 0000000180057FE7: mov     r8, rax
 * 0000000180057FEA: mov     r9d, r12d
 * 0000000180057FED: mov     edx, 15Ah
 * 0000000180057FF2: lea     rcx, [rbp+9E10h+var_15A0]; Src
 * 0000000180057FF9: call    sub_1800D4B98
 * 0000000180057FFE: nop
 * 0000000180057FFF: mov     r8, rax
 * 0000000180058002: mov     rdx, r13
 * 0000000180058005: lea     rcx, [rbp+9E10h+var_15C0]
 * 000000018005800C: call    sub_1800494AC
 * 0000000180058011: nop
 * 0000000180058012: lea     r8, aVertex; "/Vertex"
 * 0000000180058019: mov     rdx, rax
 * 000000018005801C: lea     rcx, [rbp+9E10h+var_15E0]
 * 0000000180058023: call    sub_180031AE8
 * 0000000180058028: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005802D: mov     rcx, rax
 * 0000000180058030: call    sub_1800D4C70
 * 0000000180058035: mov     cs:byte_180220394, al
 * 000000018005803B: lea     rcx, [rbp+9E10h+var_15C0]; void *
 * 0000000180058042: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058047: nop
 * 0000000180058048: lea     rcx, [rbp+9E10h+var_15A0]; void *
 * 000000018005804F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058054: nop
 * 0000000180058055: lea     rcx, dword_180220398
 * 000000018005805C: call    _Init_thread_footer
 * 0000000180058061: mov     rax, [rdi+rbx*8]
 * 0000000180058065: mov     eax, [r15+rax]
 * 0000000180058069: cmp     cs:dword_1802203A0, eax
 * 000000018005806F: jle     loc_180058161
 * 0000000180058075: lea     rcx, dword_1802203A0
 * 000000018005807C: call    _Init_thread_header
 * 0000000180058081: cmp     cs:dword_1802203A0, r14d
 * 0000000180058088: jnz     loc_180058161
 * 000000018005808E: mov     r8d, 1A50h
 * 0000000180058094: lea     rdx, unk_18018D760
 * 000000018005809B: lea     rcx, [rbp+9E10h+var_72C0]
 * 00000001800580A2: call    sub_1800496BC
 * 00000001800580A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800580AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800580B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800580B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800580BA: mov     r9d, esi
 * 00000001800580BD: mov     r8d, esi
 * 00000001800580C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800580C5: lea     rcx, [rbp+9E10h+var_520]
 * 00000001800580CC: call    sub_1800496A8
 * 00000001800580D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800580D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800580D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800580DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800580E2: call    sub_1800496D0
 * 00000001800580E7: mov     r8, rax
 * 00000001800580EA: mov     r9d, r12d
 * 00000001800580ED: mov     edx, 160h
 * 00000001800580F2: lea     rcx, [rbp+9E10h+var_1540]; Src
 * 00000001800580F9: call    sub_1800D4B98
 * 00000001800580FE: nop
 * 00000001800580FF: mov     r8, rax
 * 0000000180058102: mov     rdx, r13
 * 0000000180058105: lea     rcx, [rbp+9E10h+var_1560]
 * 000000018005810C: call    sub_1800494AC
 * 0000000180058111: nop
 * 0000000180058112: lea     r8, aVertex; "/Vertex"
 * 0000000180058119: mov     rdx, rax
 * 000000018005811C: lea     rcx, [rbp+9E10h+var_1580]
 * 0000000180058123: call    sub_180031AE8
 * 0000000180058128: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005812D: mov     rcx, rax
 * 0000000180058130: call    sub_1800D4C70
 * 0000000180058135: mov     cs:byte_18022039C, al
 * 000000018005813B: lea     rcx, [rbp+9E10h+var_1560]; void *
 * 0000000180058142: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058147: nop
 * 0000000180058148: lea     rcx, [rbp+9E10h+var_1540]; void *
 * 000000018005814F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058154: nop
 * 0000000180058155: lea     rcx, dword_1802203A0
 * 000000018005815C: call    _Init_thread_footer
 * 0000000180058161: mov     rax, [rdi+rbx*8]
 * 0000000180058165: mov     ecx, [r15+rax]
 * 0000000180058169: cmp     cs:dword_1802203A8, ecx
 * 000000018005816F: jle     loc_180058261
 * 0000000180058175: lea     rcx, dword_1802203A8
 * 000000018005817C: call    _Init_thread_header
 * 0000000180058181: cmp     cs:dword_1802203A8, r14d
 * 0000000180058188: jnz     loc_180058261
 * 000000018005818E: mov     r8d, 1A50h
 * 0000000180058194: lea     rdx, unk_18018D760
 * 000000018005819B: lea     rcx, [rbp+9E10h+var_72B0]
 * 00000001800581A2: call    sub_1800496BC
 * 00000001800581A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800581AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800581B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800581B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800581BA: mov     r9d, esi
 * 00000001800581BD: mov     r8d, esi
 * 00000001800581C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800581C5: lea     rcx, [rbp+9E10h+var_500]
 * 00000001800581CC: call    sub_1800496A8
 * 00000001800581D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800581D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800581D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800581DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800581E2: call    sub_1800496D0
 * 00000001800581E7: mov     r8, rax
 * 00000001800581EA: mov     r9d, r12d
 * 00000001800581ED: mov     edx, 162h
 * 00000001800581F2: lea     rcx, [rbp+9E10h+var_14E0]; Src
 * 00000001800581F9: call    sub_1800D4B98
 * 00000001800581FE: nop
 * 00000001800581FF: mov     r8, rax
 * 0000000180058202: mov     rdx, r13
 * 0000000180058205: lea     rcx, [rbp+9E10h+var_1500]
 * 000000018005820C: call    sub_1800494AC
 * 0000000180058211: nop
 * 0000000180058212: lea     r8, aVertex; "/Vertex"
 * 0000000180058219: mov     rdx, rax
 * 000000018005821C: lea     rcx, [rbp+9E10h+var_1520]
 * 0000000180058223: call    sub_180031AE8
 * 0000000180058228: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005822D: mov     rcx, rax
 * 0000000180058230: call    sub_1800D4C70
 * 0000000180058235: mov     cs:byte_1802203A4, al
 * 000000018005823B: lea     rcx, [rbp+9E10h+var_1500]; void *
 * 0000000180058242: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058247: nop
 * 0000000180058248: lea     rcx, [rbp+9E10h+var_14E0]; void *
 * 000000018005824F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058254: nop
 * 0000000180058255: lea     rcx, dword_1802203A8
 * 000000018005825C: call    _Init_thread_footer
 * 0000000180058261: mov     rax, [rdi+rbx*8]
 * 0000000180058265: mov     ecx, [r15+rax]
 * 0000000180058269: cmp     cs:dword_1802203B0, ecx
 * 000000018005826F: jle     loc_180058361
 * 0000000180058275: lea     rcx, dword_1802203B0
 * 000000018005827C: call    _Init_thread_header
 * 0000000180058281: cmp     cs:dword_1802203B0, r14d
 * 0000000180058288: jnz     loc_180058361
 * 000000018005828E: mov     r8d, 1A50h
 * 0000000180058294: lea     rdx, unk_18018D760
 * 000000018005829B: lea     rcx, [rbp+9E10h+var_72A0]
 * 00000001800582A2: call    sub_1800496BC
 * 00000001800582A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800582AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800582B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800582B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800582BA: mov     r9d, esi
 * 00000001800582BD: mov     r8d, esi
 * 00000001800582C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800582C5: lea     rcx, [rbp+9E10h+var_4E0]
 * 00000001800582CC: call    sub_1800496A8
 * 00000001800582D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800582D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800582D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800582DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800582E2: call    sub_1800496D0
 * 00000001800582E7: mov     r8, rax
 * 00000001800582EA: mov     r9d, r12d
 * 00000001800582ED: mov     edx, 168h
 * 00000001800582F2: lea     rcx, [rbp+9E10h+var_1480]; Src
 * 00000001800582F9: call    sub_1800D4B98
 * 00000001800582FE: nop
 * 00000001800582FF: mov     r8, rax
 * 0000000180058302: mov     rdx, r13
 * 0000000180058305: lea     rcx, [rbp+9E10h+var_14A0]
 * 000000018005830C: call    sub_1800494AC
 * 0000000180058311: nop
 * 0000000180058312: lea     r8, aVertex; "/Vertex"
 * 0000000180058319: mov     rdx, rax
 * 000000018005831C: lea     rcx, [rbp+9E10h+var_14C0]
 * 0000000180058323: call    sub_180031AE8
 * 0000000180058328: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005832D: mov     rcx, rax
 * 0000000180058330: call    sub_1800D4C70
 * 0000000180058335: mov     cs:byte_1802203AC, al
 * 000000018005833B: lea     rcx, [rbp+9E10h+var_14A0]; void *
 * 0000000180058342: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058347: nop
 * 0000000180058348: lea     rcx, [rbp+9E10h+var_1480]; void *
 * 000000018005834F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058354: nop
 * 0000000180058355: lea     rcx, dword_1802203B0
 * 000000018005835C: call    _Init_thread_footer
 * 0000000180058361: mov     rax, [rdi+rbx*8]
 * 0000000180058365: mov     ecx, [r15+rax]
 * 0000000180058369: cmp     cs:dword_1802203B8, ecx
 * 000000018005836F: jle     loc_180058461
 * 0000000180058375: lea     rcx, dword_1802203B8
 * 000000018005837C: call    _Init_thread_header
 * 0000000180058381: cmp     cs:dword_1802203B8, r14d
 * 0000000180058388: jnz     loc_180058461
 * 000000018005838E: mov     r8d, 1A50h
 * 0000000180058394: lea     rdx, unk_18018D760
 * 000000018005839B: lea     rcx, [rbp+9E10h+var_7290]
 * 00000001800583A2: call    sub_1800496BC
 * 00000001800583A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800583AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800583B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800583B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800583BA: mov     r9d, esi
 * 00000001800583BD: mov     r8d, esi
 * 00000001800583C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800583C5: lea     rcx, [rbp+9E10h+var_4C0]
 * 00000001800583CC: call    sub_1800496A8
 * 00000001800583D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800583D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800583D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800583DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800583E2: call    sub_1800496D0
 * 00000001800583E7: mov     r8, rax
 * 00000001800583EA: mov     r9d, r12d
 * 00000001800583ED: mov     edx, 16Ah
 * 00000001800583F2: lea     rcx, [rbp+9E10h+var_1420]; Src
 * 00000001800583F9: call    sub_1800D4B98
 * 00000001800583FE: nop
 * 00000001800583FF: mov     r8, rax
 * 0000000180058402: mov     rdx, r13
 * 0000000180058405: lea     rcx, [rbp+9E10h+var_1440]
 * 000000018005840C: call    sub_1800494AC
 * 0000000180058411: nop
 * 0000000180058412: lea     r8, aVertex; "/Vertex"
 * 0000000180058419: mov     rdx, rax
 * 000000018005841C: lea     rcx, [rbp+9E10h+var_1460]
 * 0000000180058423: call    sub_180031AE8
 * 0000000180058428: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005842D: mov     rcx, rax
 * 0000000180058430: call    sub_1800D4C70
 * 0000000180058435: mov     cs:byte_1802203B4, al
 * 000000018005843B: lea     rcx, [rbp+9E10h+var_1440]; void *
 * 0000000180058442: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058447: nop
 * 0000000180058448: lea     rcx, [rbp+9E10h+var_1420]; void *
 * 000000018005844F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058454: nop
 * 0000000180058455: lea     rcx, dword_1802203B8
 * 000000018005845C: call    _Init_thread_footer
 * 0000000180058461: mov     rax, [rdi+rbx*8]
 * 0000000180058465: mov     ecx, [r15+rax]
 * 0000000180058469: cmp     cs:dword_1802203C0, ecx
 * 000000018005846F: jle     loc_180058561
 * 0000000180058475: lea     rcx, dword_1802203C0
 * 000000018005847C: call    _Init_thread_header
 * 0000000180058481: cmp     cs:dword_1802203C0, r14d
 * 0000000180058488: jnz     loc_180058561
 * 000000018005848E: mov     r8d, 1A50h
 * 0000000180058494: lea     rdx, unk_18018D760
 * 000000018005849B: lea     rcx, [rbp+9E10h+var_7280]
 * 00000001800584A2: call    sub_1800496BC
 * 00000001800584A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800584AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800584B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800584B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800584BA: mov     r9d, esi
 * 00000001800584BD: mov     r8d, esi
 * 00000001800584C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800584C5: lea     rcx, [rbp+9E10h+var_4A0]
 * 00000001800584CC: call    sub_1800496A8
 * 00000001800584D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800584D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800584D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800584DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800584E2: call    sub_1800496D0
 * 00000001800584E7: mov     r8, rax
 * 00000001800584EA: mov     r9d, r12d
 * 00000001800584ED: mov     edx, 170h
 * 00000001800584F2: lea     rcx, [rbp+9E10h+var_13C0]; Src
 * 00000001800584F9: call    sub_1800D4B98
 * 00000001800584FE: nop
 * 00000001800584FF: mov     r8, rax
 * 0000000180058502: mov     rdx, r13
 * 0000000180058505: lea     rcx, [rbp+9E10h+var_13E0]
 * 000000018005850C: call    sub_1800494AC
 * 0000000180058511: nop
 * 0000000180058512: lea     r8, aVertex; "/Vertex"
 * 0000000180058519: mov     rdx, rax
 * 000000018005851C: lea     rcx, [rbp+9E10h+var_1400]
 * 0000000180058523: call    sub_180031AE8
 * 0000000180058528: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005852D: mov     rcx, rax
 * 0000000180058530: call    sub_1800D4C70
 * 0000000180058535: mov     cs:byte_1802203BC, al
 * 000000018005853B: lea     rcx, [rbp+9E10h+var_13E0]; void *
 * 0000000180058542: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058547: nop
 * 0000000180058548: lea     rcx, [rbp+9E10h+var_13C0]; void *
 * 000000018005854F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058554: nop
 * 0000000180058555: lea     rcx, dword_1802203C0
 * 000000018005855C: call    _Init_thread_footer
 * 0000000180058561: mov     rax, [rdi+rbx*8]
 * 0000000180058565: mov     ecx, [r15+rax]
 * 0000000180058569: cmp     cs:dword_1802203C8, ecx
 * 000000018005856F: jle     loc_180058661
 * 0000000180058575: lea     rcx, dword_1802203C8
 * 000000018005857C: call    _Init_thread_header
 * 0000000180058581: cmp     cs:dword_1802203C8, r14d
 * 0000000180058588: jnz     loc_180058661
 * 000000018005858E: mov     r8d, 1A50h
 * 0000000180058594: lea     rdx, unk_18018D760
 * 000000018005859B: lea     rcx, [rbp+9E10h+var_7270]
 * 00000001800585A2: call    sub_1800496BC
 * 00000001800585A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800585AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800585B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800585B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800585BA: mov     r9d, esi
 * 00000001800585BD: mov     r8d, esi
 * 00000001800585C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800585C5: lea     rcx, [rbp+9E10h+var_480]
 * 00000001800585CC: call    sub_1800496A8
 * 00000001800585D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800585D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800585D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800585DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800585E2: call    sub_1800496D0
 * 00000001800585E7: mov     r8, rax
 * 00000001800585EA: mov     r9d, r12d
 * 00000001800585ED: mov     edx, 172h
 * 00000001800585F2: lea     rcx, [rbp+9E10h+var_1360]; Src
 * 00000001800585F9: call    sub_1800D4B98
 * 00000001800585FE: nop
 * 00000001800585FF: mov     r8, rax
 * 0000000180058602: mov     rdx, r13
 * 0000000180058605: lea     rcx, [rbp+9E10h+var_1380]
 * 000000018005860C: call    sub_1800494AC
 * 0000000180058611: nop
 * 0000000180058612: lea     r8, aVertex; "/Vertex"
 * 0000000180058619: mov     rdx, rax
 * 000000018005861C: lea     rcx, [rbp+9E10h+var_13A0]
 * 0000000180058623: call    sub_180031AE8
 * 0000000180058628: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005862D: mov     rcx, rax
 * 0000000180058630: call    sub_1800D4C70
 * 0000000180058635: mov     cs:byte_1802203C4, al
 * 000000018005863B: lea     rcx, [rbp+9E10h+var_1380]; void *
 * 0000000180058642: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058647: nop
 * 0000000180058648: lea     rcx, [rbp+9E10h+var_1360]; void *
 * 000000018005864F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058654: nop
 * 0000000180058655: lea     rcx, dword_1802203C8
 * 000000018005865C: call    _Init_thread_footer
 * 0000000180058661: mov     rax, [rdi+rbx*8]
 * 0000000180058665: mov     ecx, [r15+rax]
 * 0000000180058669: cmp     cs:dword_1802203D0, ecx
 * 000000018005866F: jle     loc_180058761
 * 0000000180058675: lea     rcx, dword_1802203D0
 * 000000018005867C: call    _Init_thread_header
 * 0000000180058681: cmp     cs:dword_1802203D0, r14d
 * 0000000180058688: jnz     loc_180058761
 * 000000018005868E: mov     r8d, 1A50h
 * 0000000180058694: lea     rdx, unk_18018D760
 * 000000018005869B: lea     rcx, [rbp+9E10h+var_7260]
 * 00000001800586A2: call    sub_1800496BC
 * 00000001800586A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800586AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800586B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800586B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800586BA: mov     r9d, esi
 * 00000001800586BD: mov     r8d, esi
 * 00000001800586C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800586C5: lea     rcx, [rbp+9E10h+var_460]
 * 00000001800586CC: call    sub_1800496A8
 * 00000001800586D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800586D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800586D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800586DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800586E2: call    sub_1800496D0
 * 00000001800586E7: mov     r8, rax
 * 00000001800586EA: mov     r9d, r12d
 * 00000001800586ED: mov     edx, 178h
 * 00000001800586F2: lea     rcx, [rbp+9E10h+var_1300]; Src
 * 00000001800586F9: call    sub_1800D4B98
 * 00000001800586FE: nop
 * 00000001800586FF: mov     r8, rax
 * 0000000180058702: mov     rdx, r13
 * 0000000180058705: lea     rcx, [rbp+9E10h+var_1320]
 * 000000018005870C: call    sub_1800494AC
 * 0000000180058711: nop
 * 0000000180058712: lea     r8, aVertex; "/Vertex"
 * 0000000180058719: mov     rdx, rax
 * 000000018005871C: lea     rcx, [rbp+9E10h+var_1340]
 * 0000000180058723: call    sub_180031AE8
 * 0000000180058728: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005872D: mov     rcx, rax
 * 0000000180058730: call    sub_1800D4C70
 * 0000000180058735: mov     cs:byte_1802203CC, al
 * 000000018005873B: lea     rcx, [rbp+9E10h+var_1320]; void *
 * 0000000180058742: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058747: nop
 * 0000000180058748: lea     rcx, [rbp+9E10h+var_1300]; void *
 * 000000018005874F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058754: nop
 * 0000000180058755: lea     rcx, dword_1802203D0
 * 000000018005875C: call    _Init_thread_footer
 * 0000000180058761: mov     rax, [rdi+rbx*8]
 * 0000000180058765: mov     ecx, [r15+rax]
 * 0000000180058769: cmp     cs:dword_1802203D8, ecx
 * 000000018005876F: jle     loc_180058861
 * 0000000180058775: lea     rcx, dword_1802203D8
 * 000000018005877C: call    _Init_thread_header
 * 0000000180058781: cmp     cs:dword_1802203D8, r14d
 * 0000000180058788: jnz     loc_180058861
 * 000000018005878E: mov     r8d, 1A50h
 * 0000000180058794: lea     rdx, unk_18018D760
 * 000000018005879B: lea     rcx, [rbp+9E10h+var_7250]
 * 00000001800587A2: call    sub_1800496BC
 * 00000001800587A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800587AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800587B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800587B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800587BA: mov     r9d, esi
 * 00000001800587BD: mov     r8d, esi
 * 00000001800587C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800587C5: lea     rcx, [rbp+9E10h+var_440]
 * 00000001800587CC: call    sub_1800496A8
 * 00000001800587D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800587D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800587D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800587DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800587E2: call    sub_1800496D0
 * 00000001800587E7: mov     r8, rax
 * 00000001800587EA: mov     r9d, r12d
 * 00000001800587ED: mov     edx, 17Ah
 * 00000001800587F2: lea     rcx, [rbp+9E10h+var_12A0]; Src
 * 00000001800587F9: call    sub_1800D4B98
 * 00000001800587FE: nop
 * 00000001800587FF: mov     r8, rax
 * 0000000180058802: mov     rdx, r13
 * 0000000180058805: lea     rcx, [rbp+9E10h+var_12C0]
 * 000000018005880C: call    sub_1800494AC
 * 0000000180058811: nop
 * 0000000180058812: lea     r8, aVertex; "/Vertex"
 * 0000000180058819: mov     rdx, rax
 * 000000018005881C: lea     rcx, [rbp+9E10h+var_12E0]
 * 0000000180058823: call    sub_180031AE8
 * 0000000180058828: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005882D: mov     rcx, rax
 * 0000000180058830: call    sub_1800D4C70
 * 0000000180058835: mov     cs:byte_1802203D4, al
 * 000000018005883B: lea     rcx, [rbp+9E10h+var_12C0]; void *
 * 0000000180058842: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058847: nop
 * 0000000180058848: lea     rcx, [rbp+9E10h+var_12A0]; void *
 * 000000018005884F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058854: nop
 * 0000000180058855: lea     rcx, dword_1802203D8
 * 000000018005885C: call    _Init_thread_footer
 * 0000000180058861: mov     rax, [rdi+rbx*8]
 * 0000000180058865: mov     ecx, [r15+rax]
 * 0000000180058869: cmp     cs:dword_1802203E0, ecx
 * 000000018005886F: jle     loc_180058961
 * 0000000180058875: lea     rcx, dword_1802203E0
 * 000000018005887C: call    _Init_thread_header
 * 0000000180058881: cmp     cs:dword_1802203E0, r14d
 * 0000000180058888: jnz     loc_180058961
 * 000000018005888E: mov     r8d, 1050h
 * 0000000180058894: lea     rdx, unk_18018C710
 * 000000018005889B: lea     rcx, [rbp+9E10h+var_7240]
 * 00000001800588A2: call    sub_1800496BC
 * 00000001800588A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800588AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800588B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800588B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800588BA: mov     r9d, esi
 * 00000001800588BD: mov     r8d, esi
 * 00000001800588C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800588C5: lea     rcx, [rbp+9E10h+var_420]
 * 00000001800588CC: call    sub_1800496A8
 * 00000001800588D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800588D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800588D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800588DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800588E2: call    sub_1800496D0
 * 00000001800588E7: mov     r8, rax
 * 00000001800588EA: mov     r9d, r12d
 * 00000001800588ED: mov     edx, 180h
 * 00000001800588F2: lea     rcx, [rbp+9E10h+var_1240]; Src
 * 00000001800588F9: call    sub_1800D4B98
 * 00000001800588FE: nop
 * 00000001800588FF: mov     r8, rax
 * 0000000180058902: mov     rdx, r13
 * 0000000180058905: lea     rcx, [rbp+9E10h+var_1260]
 * 000000018005890C: call    sub_1800494AC
 * 0000000180058911: nop
 * 0000000180058912: lea     r8, aVertex; "/Vertex"
 * 0000000180058919: mov     rdx, rax
 * 000000018005891C: lea     rcx, [rbp+9E10h+var_1280]
 * 0000000180058923: call    sub_180031AE8
 * 0000000180058928: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005892D: mov     rcx, rax
 * 0000000180058930: call    sub_1800D4C70
 * 0000000180058935: mov     cs:byte_1802203DC, al
 * 000000018005893B: lea     rcx, [rbp+9E10h+var_1260]; void *
 * 0000000180058942: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058947: nop
 * 0000000180058948: lea     rcx, [rbp+9E10h+var_1240]; void *
 * 000000018005894F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058954: nop
 * 0000000180058955: lea     rcx, dword_1802203E0
 * 000000018005895C: call    _Init_thread_footer
 * 0000000180058961: mov     rax, [rdi+rbx*8]
 * 0000000180058965: mov     ecx, [r15+rax]
 * 0000000180058969: cmp     cs:dword_1802203E8, ecx
 * 000000018005896F: jle     loc_180058A61
 * 0000000180058975: lea     rcx, dword_1802203E8
 * 000000018005897C: call    _Init_thread_header
 * 0000000180058981: cmp     cs:dword_1802203E8, r14d
 * 0000000180058988: jnz     loc_180058A61
 * 000000018005898E: mov     r8d, 1050h
 * 0000000180058994: lea     rdx, unk_18018C710
 * 000000018005899B: lea     rcx, [rbp+9E10h+var_7230]
 * 00000001800589A2: call    sub_1800496BC
 * 00000001800589A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800589AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800589B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800589B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800589BA: mov     r9d, esi
 * 00000001800589BD: mov     r8d, esi
 * 00000001800589C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800589C5: lea     rcx, [rbp+9E10h+var_400]
 * 00000001800589CC: call    sub_1800496A8
 * 00000001800589D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800589D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800589D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800589DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800589E2: call    sub_1800496D0
 * 00000001800589E7: mov     r8, rax
 * 00000001800589EA: mov     r9d, r12d
 * 00000001800589ED: mov     edx, 182h
 * 00000001800589F2: lea     rcx, [rbp+9E10h+var_11E0]; Src
 * 00000001800589F9: call    sub_1800D4B98
 * 00000001800589FE: nop
 * 00000001800589FF: mov     r8, rax
 * 0000000180058A02: mov     rdx, r13
 * 0000000180058A05: lea     rcx, [rbp+9E10h+var_1200]
 * 0000000180058A0C: call    sub_1800494AC
 * 0000000180058A11: nop
 * 0000000180058A12: lea     r8, aVertex; "/Vertex"
 * 0000000180058A19: mov     rdx, rax
 * 0000000180058A1C: lea     rcx, [rbp+9E10h+var_1220]
 * 0000000180058A23: call    sub_180031AE8
 * 0000000180058A28: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180058A2D: mov     rcx, rax
 * 0000000180058A30: call    sub_1800D4C70
 * 0000000180058A35: mov     cs:byte_1802203E4, al
 * 0000000180058A3B: lea     rcx, [rbp+9E10h+var_1200]; void *
 * 0000000180058A42: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058A47: nop
 * 0000000180058A48: lea     rcx, [rbp+9E10h+var_11E0]; void *
 * 0000000180058A4F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058A54: nop
 * 0000000180058A55: lea     rcx, dword_1802203E8
 * 0000000180058A5C: call    _Init_thread_footer
 * 0000000180058A61: mov     rax, [rdi+rbx*8]
 * 0000000180058A65: mov     ecx, [r15+rax]
 * 0000000180058A69: cmp     cs:dword_1802203F0, ecx
 * 0000000180058A6F: jle     loc_180058B61
 * 0000000180058A75: lea     rcx, dword_1802203F0
 * 0000000180058A7C: call    _Init_thread_header
 * 0000000180058A81: cmp     cs:dword_1802203F0, r14d
 * 0000000180058A88: jnz     loc_180058B61
 * 0000000180058A8E: mov     r8d, 1050h
 * 0000000180058A94: lea     rdx, unk_18018C710
 * 0000000180058A9B: lea     rcx, [rbp+9E10h+var_7220]
 * 0000000180058AA2: call    sub_1800496BC
 * 0000000180058AA7: movups  xmm0, xmmword ptr [rax]
 * 0000000180058AAA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180058AB0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180058AB6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180058ABA: mov     r9d, esi
 * 0000000180058ABD: mov     r8d, esi
 * 0000000180058AC0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180058AC5: lea     rcx, [rbp+9E10h+var_3E0]
 * 0000000180058ACC: call    sub_1800496A8
 * 0000000180058AD1: movups  xmm0, xmmword ptr [rax]
 * 0000000180058AD4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180058AD9: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180058ADD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180058AE2: call    sub_1800496D0
 * 0000000180058AE7: mov     r8, rax
 * 0000000180058AEA: mov     r9d, r12d
 * 0000000180058AED: mov     edx, 188h
 * 0000000180058AF2: lea     rcx, [rbp+9E10h+var_1180]; Src
 * 0000000180058AF9: call    sub_1800D4B98
 * 0000000180058AFE: nop
 * 0000000180058AFF: mov     r8, rax
 * 0000000180058B02: mov     rdx, r13
 * 0000000180058B05: lea     rcx, [rbp+9E10h+var_11A0]
 * 0000000180058B0C: call    sub_1800494AC
 * 0000000180058B11: nop
 * 0000000180058B12: lea     r8, aVertex; "/Vertex"
 * 0000000180058B19: mov     rdx, rax
 * 0000000180058B1C: lea     rcx, [rbp+9E10h+var_11C0]
 * 0000000180058B23: call    sub_180031AE8
 * 0000000180058B28: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180058B2D: mov     rcx, rax
 * 0000000180058B30: call    sub_1800D4C70
 * 0000000180058B35: mov     cs:byte_1802203EC, al
 * 0000000180058B3B: lea     rcx, [rbp+9E10h+var_11A0]; void *
 * 0000000180058B42: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058B47: nop
 * 0000000180058B48: lea     rcx, [rbp+9E10h+var_1180]; void *
 * 0000000180058B4F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058B54: nop
 * 0000000180058B55: lea     rcx, dword_1802203F0
 * 0000000180058B5C: call    _Init_thread_footer
 * 0000000180058B61: mov     rax, [rdi+rbx*8]
 * 0000000180058B65: mov     ecx, [r15+rax]
 * 0000000180058B69: cmp     cs:dword_1802203F8, ecx
 * 0000000180058B6F: jle     loc_180058C61
 * 0000000180058B75: lea     rcx, dword_1802203F8
 * 0000000180058B7C: call    _Init_thread_header
 * 0000000180058B81: cmp     cs:dword_1802203F8, r14d
 * 0000000180058B88: jnz     loc_180058C61
 * 0000000180058B8E: mov     r8d, 1050h
 * 0000000180058B94: lea     rdx, unk_18018C710
 * 0000000180058B9B: lea     rcx, [rbp+9E10h+var_7210]
 * 0000000180058BA2: call    sub_1800496BC
 * 0000000180058BA7: movups  xmm0, xmmword ptr [rax]
 * 0000000180058BAA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180058BB0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180058BB6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180058BBA: mov     r9d, esi
 * 0000000180058BBD: mov     r8d, esi
 * 0000000180058BC0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180058BC5: lea     rcx, [rbp+9E10h+var_3C0]
 * 0000000180058BCC: call    sub_1800496A8
 * 0000000180058BD1: movups  xmm0, xmmword ptr [rax]
 * 0000000180058BD4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180058BD9: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180058BDD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180058BE2: call    sub_1800496D0
 * 0000000180058BE7: mov     r8, rax
 * 0000000180058BEA: mov     r9d, r12d
 * 0000000180058BED: mov     edx, 18Ah
 * 0000000180058BF2: lea     rcx, [rbp+9E10h+var_1120]; Src
 * 0000000180058BF9: call    sub_1800D4B98
 * 0000000180058BFE: nop
 * 0000000180058BFF: mov     r8, rax
 * 0000000180058C02: mov     rdx, r13
 * 0000000180058C05: lea     rcx, [rbp+9E10h+var_1140]
 * 0000000180058C0C: call    sub_1800494AC
 * 0000000180058C11: nop
 * 0000000180058C12: lea     r8, aVertex; "/Vertex"
 * 0000000180058C19: mov     rdx, rax
 * 0000000180058C1C: lea     rcx, [rbp+9E10h+var_1160]
 * 0000000180058C23: call    sub_180031AE8
 * 0000000180058C28: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180058C2D: mov     rcx, rax
 * 0000000180058C30: call    sub_1800D4C70
 * 0000000180058C35: mov     cs:byte_1802203F4, al
 * 0000000180058C3B: lea     rcx, [rbp+9E10h+var_1140]; void *
 * 0000000180058C42: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058C47: nop
 * 0000000180058C48: lea     rcx, [rbp+9E10h+var_1120]; void *
 * 0000000180058C4F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058C54: nop
 * 0000000180058C55: lea     rcx, dword_1802203F8
 * 0000000180058C5C: call    _Init_thread_footer
 * 0000000180058C61: mov     rax, [rdi+rbx*8]
 * 0000000180058C65: mov     ecx, [r15+rax]
 * 0000000180058C69: cmp     cs:dword_180220400, ecx
 * 0000000180058C6F: jle     loc_180058D61
 * 0000000180058C75: lea     rcx, dword_180220400
 * 0000000180058C7C: call    _Init_thread_header
 * 0000000180058C81: cmp     cs:dword_180220400, r14d
 * 0000000180058C88: jnz     loc_180058D61
 * 0000000180058C8E: mov     r8d, 1050h
 * 0000000180058C94: lea     rdx, unk_18018C710
 * 0000000180058C9B: lea     rcx, [rbp+9E10h+var_7200]
 * 0000000180058CA2: call    sub_1800496BC
 * 0000000180058CA7: movups  xmm0, xmmword ptr [rax]
 * 0000000180058CAA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180058CB0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180058CB6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180058CBA: mov     r9d, esi
 * 0000000180058CBD: mov     r8d, esi
 * 0000000180058CC0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180058CC5: lea     rcx, [rbp+9E10h+var_3A0]
 * 0000000180058CCC: call    sub_1800496A8
 * 0000000180058CD1: movups  xmm0, xmmword ptr [rax]
 * 0000000180058CD4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180058CD9: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180058CDD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180058CE2: call    sub_1800496D0
 * 0000000180058CE7: mov     r8, rax
 * 0000000180058CEA: mov     r9d, r12d
 * 0000000180058CED: mov     edx, 190h
 * 0000000180058CF2: lea     rcx, [rbp+9E10h+var_10C0]; Src
 * 0000000180058CF9: call    sub_1800D4B98
 * 0000000180058CFE: nop
 * 0000000180058CFF: mov     r8, rax
 * 0000000180058D02: mov     rdx, r13
 * 0000000180058D05: lea     rcx, [rbp+9E10h+var_10E0]
 * 0000000180058D0C: call    sub_1800494AC
 * 0000000180058D11: nop
 * 0000000180058D12: lea     r8, aVertex; "/Vertex"
 * 0000000180058D19: mov     rdx, rax
 * 0000000180058D1C: lea     rcx, [rbp+9E10h+var_1100]
 * 0000000180058D23: call    sub_180031AE8
 * 0000000180058D28: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180058D2D: mov     rcx, rax
 * 0000000180058D30: call    sub_1800D4C70
 * 0000000180058D35: mov     cs:byte_1802203FC, al
 * 0000000180058D3B: lea     rcx, [rbp+9E10h+var_10E0]; void *
 * 0000000180058D42: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058D47: nop
 * 0000000180058D48: lea     rcx, [rbp+9E10h+var_10C0]; void *
 * 0000000180058D4F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058D54: nop
 * 0000000180058D55: lea     rcx, dword_180220400
 * 0000000180058D5C: call    _Init_thread_footer
 * 0000000180058D61: mov     rax, [rdi+rbx*8]
 * 0000000180058D65: mov     ecx, [r15+rax]
 * 0000000180058D69: cmp     cs:dword_180220408, ecx
 * 0000000180058D6F: jle     loc_180058E61
 * 0000000180058D75: lea     rcx, dword_180220408
 * 0000000180058D7C: call    _Init_thread_header
 * 0000000180058D81: cmp     cs:dword_180220408, r14d
 * 0000000180058D88: jnz     loc_180058E61
 * 0000000180058D8E: mov     r8d, 1050h
 * 0000000180058D94: lea     rdx, unk_18018C710
 * 0000000180058D9B: lea     rcx, [rbp+9E10h+var_71F0]
 * 0000000180058DA2: call    sub_1800496BC
 * 0000000180058DA7: movups  xmm0, xmmword ptr [rax]
 * 0000000180058DAA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180058DB0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180058DB6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180058DBA: mov     r9d, esi
 * 0000000180058DBD: mov     r8d, esi
 * 0000000180058DC0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180058DC5: lea     rcx, [rbp+9E10h+var_380]
 * 0000000180058DCC: call    sub_1800496A8
 * 0000000180058DD1: movups  xmm0, xmmword ptr [rax]
 * 0000000180058DD4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180058DD9: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180058DDD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180058DE2: call    sub_1800496D0
 * 0000000180058DE7: mov     r8, rax
 * 0000000180058DEA: mov     r9d, r12d
 * 0000000180058DED: mov     edx, 192h
 * 0000000180058DF2: lea     rcx, [rbp+9E10h+var_1060]; Src
 * 0000000180058DF9: call    sub_1800D4B98
 * 0000000180058DFE: nop
 * 0000000180058DFF: mov     r8, rax
 * 0000000180058E02: mov     rdx, r13
 * 0000000180058E05: lea     rcx, [rbp+9E10h+var_1080]
 * 0000000180058E0C: call    sub_1800494AC
 * 0000000180058E11: nop
 * 0000000180058E12: lea     r8, aVertex; "/Vertex"
 * 0000000180058E19: mov     rdx, rax
 * 0000000180058E1C: lea     rcx, [rbp+9E10h+var_10A0]
 * 0000000180058E23: call    sub_180031AE8
 * 0000000180058E28: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180058E2D: mov     rcx, rax
 * 0000000180058E30: call    sub_1800D4C70
 * 0000000180058E35: mov     cs:byte_180220404, al
 * 0000000180058E3B: lea     rcx, [rbp+9E10h+var_1080]; void *
 * 0000000180058E42: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058E47: nop
 * 0000000180058E48: lea     rcx, [rbp+9E10h+var_1060]; void *
 * 0000000180058E4F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058E54: nop
 * 0000000180058E55: lea     rcx, dword_180220408
 * 0000000180058E5C: call    _Init_thread_footer
 * 0000000180058E61: mov     rax, [rdi+rbx*8]
 * 0000000180058E65: mov     ecx, [r15+rax]
 * 0000000180058E69: cmp     cs:dword_180220410, ecx
 * 0000000180058E6F: jle     loc_180058F61
 * 0000000180058E75: lea     rcx, dword_180220410
 * 0000000180058E7C: call    _Init_thread_header
 * 0000000180058E81: cmp     cs:dword_180220410, r14d
 * 0000000180058E88: jnz     loc_180058F61
 * 0000000180058E8E: mov     r8d, 1050h
 * 0000000180058E94: lea     rdx, unk_18018C710
 * 0000000180058E9B: lea     rcx, [rbp+9E10h+var_71E0]
 * 0000000180058EA2: call    sub_1800496BC
 * 0000000180058EA7: movups  xmm0, xmmword ptr [rax]
 * 0000000180058EAA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180058EB0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180058EB6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180058EBA: mov     r9d, esi
 * 0000000180058EBD: mov     r8d, esi
 * 0000000180058EC0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180058EC5: lea     rcx, [rbp+9E10h+var_360]
 * 0000000180058ECC: call    sub_1800496A8
 * 0000000180058ED1: movups  xmm0, xmmword ptr [rax]
 * 0000000180058ED4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180058ED9: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180058EDD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180058EE2: call    sub_1800496D0
 * 0000000180058EE7: mov     r8, rax
 * 0000000180058EEA: mov     r9d, r12d
 * 0000000180058EED: mov     edx, 198h
 * 0000000180058EF2: lea     rcx, [rbp+9E10h+var_1000]; Src
 * 0000000180058EF9: call    sub_1800D4B98
 * 0000000180058EFE: nop
 * 0000000180058EFF: mov     r8, rax
 * 0000000180058F02: mov     rdx, r13
 * 0000000180058F05: lea     rcx, [rbp+9E10h+var_1020]
 * 0000000180058F0C: call    sub_1800494AC
 * 0000000180058F11: nop
 * 0000000180058F12: lea     r8, aVertex; "/Vertex"
 * 0000000180058F19: mov     rdx, rax
 * 0000000180058F1C: lea     rcx, [rbp+9E10h+var_1040]
 * 0000000180058F23: call    sub_180031AE8
 * 0000000180058F28: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180058F2D: mov     rcx, rax
 * 0000000180058F30: call    sub_1800D4C70
 * 0000000180058F35: mov     cs:byte_18022040C, al
 * 0000000180058F3B: lea     rcx, [rbp+9E10h+var_1020]; void *
 * 0000000180058F42: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058F47: nop
 * 0000000180058F48: lea     rcx, [rbp+9E10h+var_1000]; void *
 * 0000000180058F4F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180058F54: nop
 * 0000000180058F55: lea     rcx, dword_180220410
 * 0000000180058F5C: call    _Init_thread_footer
 * 0000000180058F61: mov     rax, [rdi+rbx*8]
 * 0000000180058F65: mov     ecx, [r15+rax]
 * 0000000180058F69: cmp     cs:dword_180220418, ecx
 * 0000000180058F6F: jle     loc_180059061
 * 0000000180058F75: lea     rcx, dword_180220418
 * 0000000180058F7C: call    _Init_thread_header
 * 0000000180058F81: cmp     cs:dword_180220418, r14d
 * 0000000180058F88: jnz     loc_180059061
 * 0000000180058F8E: mov     r8d, 1050h
 * 0000000180058F94: lea     rdx, unk_18018C710
 * 0000000180058F9B: lea     rcx, [rbp+9E10h+var_71D0]
 * 0000000180058FA2: call    sub_1800496BC
 * 0000000180058FA7: movups  xmm0, xmmword ptr [rax]
 * 0000000180058FAA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180058FB0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180058FB6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180058FBA: mov     r9d, esi
 * 0000000180058FBD: mov     r8d, esi
 * 0000000180058FC0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180058FC5: lea     rcx, [rbp+9E10h+var_340]
 * 0000000180058FCC: call    sub_1800496A8
 * 0000000180058FD1: movups  xmm0, xmmword ptr [rax]
 * 0000000180058FD4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180058FD9: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180058FDD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180058FE2: call    sub_1800496D0
 * 0000000180058FE7: mov     r8, rax
 * 0000000180058FEA: mov     r9d, r12d
 * 0000000180058FED: mov     edx, 19Ah
 * 0000000180058FF2: lea     rcx, [rbp+9E10h+var_FA0]; Src
 * 0000000180058FF9: call    sub_1800D4B98
 * 0000000180058FFE: nop
 * 0000000180058FFF: mov     r8, rax
 * 0000000180059002: mov     rdx, r13
 * 0000000180059005: lea     rcx, [rbp+9E10h+var_FC0]
 * 000000018005900C: call    sub_1800494AC
 * 0000000180059011: nop
 * 0000000180059012: lea     r8, aVertex; "/Vertex"
 * 0000000180059019: mov     rdx, rax
 * 000000018005901C: lea     rcx, [rbp+9E10h+var_FE0]
 * 0000000180059023: call    sub_180031AE8
 * 0000000180059028: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005902D: mov     rcx, rax
 * 0000000180059030: call    sub_1800D4C70
 * 0000000180059035: mov     cs:byte_180220414, al
 * 000000018005903B: lea     rcx, [rbp+9E10h+var_FC0]; void *
 * 0000000180059042: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059047: nop
 * 0000000180059048: lea     rcx, [rbp+9E10h+var_FA0]; void *
 * 000000018005904F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059054: nop
 * 0000000180059055: lea     rcx, dword_180220418
 * 000000018005905C: call    _Init_thread_footer
 * 0000000180059061: mov     rax, [rdi+rbx*8]
 * 0000000180059065: mov     ecx, [r15+rax]
 * 0000000180059069: cmp     cs:dword_180220420, ecx
 * 000000018005906F: jle     loc_180059161
 * 0000000180059075: lea     rcx, dword_180220420
 * 000000018005907C: call    _Init_thread_header
 * 0000000180059081: cmp     cs:dword_180220420, r14d
 * 0000000180059088: jnz     loc_180059161
 * 000000018005908E: mov     r8d, 1A50h
 * 0000000180059094: lea     rdx, unk_18018D760
 * 000000018005909B: lea     rcx, [rbp+9E10h+var_71C0]
 * 00000001800590A2: call    sub_1800496BC
 * 00000001800590A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800590AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800590B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800590B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800590BA: mov     r9d, esi
 * 00000001800590BD: mov     r8d, esi
 * 00000001800590C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800590C5: lea     rcx, [rbp+9E10h+var_320]
 * 00000001800590CC: call    sub_1800496A8
 * 00000001800590D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800590D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800590D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800590DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800590E2: call    sub_1800496D0
 * 00000001800590E7: mov     r8, rax
 * 00000001800590EA: mov     r9d, r12d
 * 00000001800590ED: mov     edx, 1A0h
 * 00000001800590F2: lea     rcx, [rbp+9E10h+var_F40]; Src
 * 00000001800590F9: call    sub_1800D4B98
 * 00000001800590FE: nop
 * 00000001800590FF: mov     r8, rax
 * 0000000180059102: mov     rdx, r13
 * 0000000180059105: lea     rcx, [rbp+9E10h+var_F60]
 * 000000018005910C: call    sub_1800494AC
 * 0000000180059111: nop
 * 0000000180059112: lea     r8, aVertex; "/Vertex"
 * 0000000180059119: mov     rdx, rax
 * 000000018005911C: lea     rcx, [rbp+9E10h+var_F80]
 * 0000000180059123: call    sub_180031AE8
 * 0000000180059128: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005912D: mov     rcx, rax
 * 0000000180059130: call    sub_1800D4C70
 * 0000000180059135: mov     cs:byte_18022041C, al
 * 000000018005913B: lea     rcx, [rbp+9E10h+var_F60]; void *
 * 0000000180059142: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059147: nop
 * 0000000180059148: lea     rcx, [rbp+9E10h+var_F40]; void *
 * 000000018005914F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059154: nop
 * 0000000180059155: lea     rcx, dword_180220420
 * 000000018005915C: call    _Init_thread_footer
 * 0000000180059161: mov     rax, [rdi+rbx*8]
 * 0000000180059165: mov     ecx, [r15+rax]
 * 0000000180059169: cmp     cs:dword_180220428, ecx
 * 000000018005916F: jle     loc_180059261
 * 0000000180059175: lea     rcx, dword_180220428
 * 000000018005917C: call    _Init_thread_header
 * 0000000180059181: cmp     cs:dword_180220428, r14d
 * 0000000180059188: jnz     loc_180059261
 * 000000018005918E: mov     r8d, 1A50h
 * 0000000180059194: lea     rdx, unk_18018D760
 * 000000018005919B: lea     rcx, [rbp+9E10h+var_71B0]
 * 00000001800591A2: call    sub_1800496BC
 * 00000001800591A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800591AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800591B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800591B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800591BA: mov     r9d, esi
 * 00000001800591BD: mov     r8d, esi
 * 00000001800591C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800591C5: lea     rcx, [rbp+9E10h+var_300]
 * 00000001800591CC: call    sub_1800496A8
 * 00000001800591D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800591D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800591D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800591DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800591E2: call    sub_1800496D0
 * 00000001800591E7: mov     r8, rax
 * 00000001800591EA: mov     r9d, r12d
 * 00000001800591ED: mov     edx, 1A2h
 * 00000001800591F2: lea     rcx, [rbp+9E10h+var_EE0]; Src
 * 00000001800591F9: call    sub_1800D4B98
 * 00000001800591FE: nop
 * 00000001800591FF: mov     r8, rax
 * 0000000180059202: mov     rdx, r13
 * 0000000180059205: lea     rcx, [rbp+9E10h+var_F00]
 * 000000018005920C: call    sub_1800494AC
 * 0000000180059211: nop
 * 0000000180059212: lea     r8, aVertex; "/Vertex"
 * 0000000180059219: mov     rdx, rax
 * 000000018005921C: lea     rcx, [rbp+9E10h+var_F20]
 * 0000000180059223: call    sub_180031AE8
 * 0000000180059228: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005922D: mov     rcx, rax
 * 0000000180059230: call    sub_1800D4C70
 * 0000000180059235: mov     cs:byte_180220424, al
 * 000000018005923B: lea     rcx, [rbp+9E10h+var_F00]; void *
 * 0000000180059242: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059247: nop
 * 0000000180059248: lea     rcx, [rbp+9E10h+var_EE0]; void *
 * 000000018005924F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059254: nop
 * 0000000180059255: lea     rcx, dword_180220428
 * 000000018005925C: call    _Init_thread_footer
 * 0000000180059261: mov     rax, [rdi+rbx*8]
 * 0000000180059265: mov     ecx, [r15+rax]
 * 0000000180059269: cmp     cs:dword_180220430, ecx
 * 000000018005926F: jle     loc_180059361
 * 0000000180059275: lea     rcx, dword_180220430
 * 000000018005927C: call    _Init_thread_header
 * 0000000180059281: cmp     cs:dword_180220430, r14d
 * 0000000180059288: jnz     loc_180059361
 * 000000018005928E: mov     r8d, 1A50h
 * 0000000180059294: lea     rdx, unk_18018D760
 * 000000018005929B: lea     rcx, [rbp+9E10h+var_71A0]
 * 00000001800592A2: call    sub_1800496BC
 * 00000001800592A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800592AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800592B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800592B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800592BA: mov     r9d, esi
 * 00000001800592BD: mov     r8d, esi
 * 00000001800592C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800592C5: lea     rcx, [rbp+9E10h+var_2E0]
 * 00000001800592CC: call    sub_1800496A8
 * 00000001800592D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800592D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800592D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800592DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800592E2: call    sub_1800496D0
 * 00000001800592E7: mov     r8, rax
 * 00000001800592EA: mov     r9d, r12d
 * 00000001800592ED: mov     edx, 1A8h
 * 00000001800592F2: lea     rcx, [rbp+9E10h+var_E80]; Src
 * 00000001800592F9: call    sub_1800D4B98
 * 00000001800592FE: nop
 * 00000001800592FF: mov     r8, rax
 * 0000000180059302: mov     rdx, r13
 * 0000000180059305: lea     rcx, [rbp+9E10h+var_EA0]
 * 000000018005930C: call    sub_1800494AC
 * 0000000180059311: nop
 * 0000000180059312: lea     r8, aVertex; "/Vertex"
 * 0000000180059319: mov     rdx, rax
 * 000000018005931C: lea     rcx, [rbp+9E10h+var_EC0]
 * 0000000180059323: call    sub_180031AE8
 * 0000000180059328: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005932D: mov     rcx, rax
 * 0000000180059330: call    sub_1800D4C70
 * 0000000180059335: mov     cs:byte_18022042C, al
 * 000000018005933B: lea     rcx, [rbp+9E10h+var_EA0]; void *
 * 0000000180059342: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059347: nop
 * 0000000180059348: lea     rcx, [rbp+9E10h+var_E80]; void *
 * 000000018005934F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059354: nop
 * 0000000180059355: lea     rcx, dword_180220430
 * 000000018005935C: call    _Init_thread_footer
 * 0000000180059361: mov     rax, [rdi+rbx*8]
 * 0000000180059365: mov     ecx, [r15+rax]
 * 0000000180059369: cmp     cs:dword_180220438, ecx
 * 000000018005936F: jle     loc_180059461
 * 0000000180059375: lea     rcx, dword_180220438
 * 000000018005937C: call    _Init_thread_header
 * 0000000180059381: cmp     cs:dword_180220438, r14d
 * 0000000180059388: jnz     loc_180059461
 * 000000018005938E: mov     r8d, 1A50h
 * 0000000180059394: lea     rdx, unk_18018D760
 * 000000018005939B: lea     rcx, [rbp+9E10h+var_7190]
 * 00000001800593A2: call    sub_1800496BC
 * 00000001800593A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800593AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800593B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800593B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800593BA: mov     r9d, esi
 * 00000001800593BD: mov     r8d, esi
 * 00000001800593C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800593C5: lea     rcx, [rbp+9E10h+var_2C0]
 * 00000001800593CC: call    sub_1800496A8
 * 00000001800593D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800593D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800593D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800593DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800593E2: call    sub_1800496D0
 * 00000001800593E7: mov     r8, rax
 * 00000001800593EA: mov     r9d, r12d
 * 00000001800593ED: mov     edx, 1AAh
 * 00000001800593F2: lea     rcx, [rbp+9E10h+var_E20]; Src
 * 00000001800593F9: call    sub_1800D4B98
 * 00000001800593FE: nop
 * 00000001800593FF: mov     r8, rax
 * 0000000180059402: mov     rdx, r13
 * 0000000180059405: lea     rcx, [rbp+9E10h+var_E40]
 * 000000018005940C: call    sub_1800494AC
 * 0000000180059411: nop
 * 0000000180059412: lea     r8, aVertex; "/Vertex"
 * 0000000180059419: mov     rdx, rax
 * 000000018005941C: lea     rcx, [rbp+9E10h+var_E60]
 * 0000000180059423: call    sub_180031AE8
 * 0000000180059428: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005942D: mov     rcx, rax
 * 0000000180059430: call    sub_1800D4C70
 * 0000000180059435: mov     cs:byte_180220434, al
 * 000000018005943B: lea     rcx, [rbp+9E10h+var_E40]; void *
 * 0000000180059442: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059447: nop
 * 0000000180059448: lea     rcx, [rbp+9E10h+var_E20]; void *
 * 000000018005944F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059454: nop
 * 0000000180059455: lea     rcx, dword_180220438
 * 000000018005945C: call    _Init_thread_footer
 * 0000000180059461: mov     rax, [rdi+rbx*8]
 * 0000000180059465: mov     ecx, [r15+rax]
 * 0000000180059469: cmp     cs:dword_180220440, ecx
 * 000000018005946F: jle     loc_180059561
 * 0000000180059475: lea     rcx, dword_180220440
 * 000000018005947C: call    _Init_thread_header
 * 0000000180059481: cmp     cs:dword_180220440, r14d
 * 0000000180059488: jnz     loc_180059561
 * 000000018005948E: mov     r8d, 1A50h
 * 0000000180059494: lea     rdx, unk_18018D760
 * 000000018005949B: lea     rcx, [rbp+9E10h+var_7180]
 * 00000001800594A2: call    sub_1800496BC
 * 00000001800594A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800594AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800594B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800594B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800594BA: mov     r9d, esi
 * 00000001800594BD: mov     r8d, esi
 * 00000001800594C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800594C5: lea     rcx, [rbp+9E10h+var_2A0]
 * 00000001800594CC: call    sub_1800496A8
 * 00000001800594D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800594D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800594D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800594DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800594E2: call    sub_1800496D0
 * 00000001800594E7: mov     r8, rax
 * 00000001800594EA: mov     r9d, r12d
 * 00000001800594ED: mov     edx, 1B0h
 * 00000001800594F2: lea     rcx, [rbp+9E10h+var_DC0]; Src
 * 00000001800594F9: call    sub_1800D4B98
 * 00000001800594FE: nop
 * 00000001800594FF: mov     r8, rax
 * 0000000180059502: mov     rdx, r13
 * 0000000180059505: lea     rcx, [rbp+9E10h+var_DE0]
 * 000000018005950C: call    sub_1800494AC
 * 0000000180059511: nop
 * 0000000180059512: lea     r8, aVertex; "/Vertex"
 * 0000000180059519: mov     rdx, rax
 * 000000018005951C: lea     rcx, [rbp+9E10h+var_E00]
 * 0000000180059523: call    sub_180031AE8
 * 0000000180059528: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005952D: mov     rcx, rax
 * 0000000180059530: call    sub_1800D4C70
 * 0000000180059535: mov     cs:byte_18022043C, al
 * 000000018005953B: lea     rcx, [rbp+9E10h+var_DE0]; void *
 * 0000000180059542: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059547: nop
 * 0000000180059548: lea     rcx, [rbp+9E10h+var_DC0]; void *
 * 000000018005954F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059554: nop
 * 0000000180059555: lea     rcx, dword_180220440
 * 000000018005955C: call    _Init_thread_footer
 * 0000000180059561: mov     rax, [rdi+rbx*8]
 * 0000000180059565: mov     ecx, [r15+rax]
 * 0000000180059569: cmp     cs:dword_180220448, ecx
 * 000000018005956F: jle     loc_180059661
 * 0000000180059575: lea     rcx, dword_180220448
 * 000000018005957C: call    _Init_thread_header
 * 0000000180059581: cmp     cs:dword_180220448, r14d
 * 0000000180059588: jnz     loc_180059661
 * 000000018005958E: mov     r8d, 1A50h
 * 0000000180059594: lea     rdx, unk_18018D760
 * 000000018005959B: lea     rcx, [rbp+9E10h+var_7170]
 * 00000001800595A2: call    sub_1800496BC
 * 00000001800595A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800595AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800595B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800595B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800595BA: mov     r9d, esi
 * 00000001800595BD: mov     r8d, esi
 * 00000001800595C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800595C5: lea     rcx, [rbp+9E10h+var_280]
 * 00000001800595CC: call    sub_1800496A8
 * 00000001800595D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800595D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800595D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800595DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800595E2: call    sub_1800496D0
 * 00000001800595E7: mov     r8, rax
 * 00000001800595EA: mov     r9d, r12d
 * 00000001800595ED: mov     edx, 1B2h
 * 00000001800595F2: lea     rcx, [rbp+9E10h+var_D60]; Src
 * 00000001800595F9: call    sub_1800D4B98
 * 00000001800595FE: nop
 * 00000001800595FF: mov     r8, rax
 * 0000000180059602: mov     rdx, r13
 * 0000000180059605: lea     rcx, [rbp+9E10h+var_D80]
 * 000000018005960C: call    sub_1800494AC
 * 0000000180059611: nop
 * 0000000180059612: lea     r8, aVertex; "/Vertex"
 * 0000000180059619: mov     rdx, rax
 * 000000018005961C: lea     rcx, [rbp+9E10h+var_DA0]
 * 0000000180059623: call    sub_180031AE8
 * 0000000180059628: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005962D: mov     rcx, rax
 * 0000000180059630: call    sub_1800D4C70
 * 0000000180059635: mov     cs:byte_180220444, al
 * 000000018005963B: lea     rcx, [rbp+9E10h+var_D80]; void *
 * 0000000180059642: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059647: nop
 * 0000000180059648: lea     rcx, [rbp+9E10h+var_D60]; void *
 * 000000018005964F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059654: nop
 * 0000000180059655: lea     rcx, dword_180220448
 * 000000018005965C: call    _Init_thread_footer
 * 0000000180059661: mov     rax, [rdi+rbx*8]
 * 0000000180059665: mov     ecx, [r15+rax]
 * 0000000180059669: cmp     cs:dword_180220450, ecx
 * 000000018005966F: jle     loc_180059761
 * 0000000180059675: lea     rcx, dword_180220450
 * 000000018005967C: call    _Init_thread_header
 * 0000000180059681: cmp     cs:dword_180220450, r14d
 * 0000000180059688: jnz     loc_180059761
 * 000000018005968E: mov     r8d, 1A50h
 * 0000000180059694: lea     rdx, unk_18018D760
 * 000000018005969B: lea     rcx, [rbp+9E10h+var_7160]
 * 00000001800596A2: call    sub_1800496BC
 * 00000001800596A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800596AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800596B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800596B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800596BA: mov     r9d, esi
 * 00000001800596BD: mov     r8d, esi
 * 00000001800596C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800596C5: lea     rcx, [rbp+9E10h+var_260]
 * 00000001800596CC: call    sub_1800496A8
 * 00000001800596D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800596D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800596D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800596DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800596E2: call    sub_1800496D0
 * 00000001800596E7: mov     r8, rax
 * 00000001800596EA: mov     r9d, r12d
 * 00000001800596ED: mov     edx, 1B8h
 * 00000001800596F2: lea     rcx, [rbp+9E10h+var_D00]; Src
 * 00000001800596F9: call    sub_1800D4B98
 * 00000001800596FE: nop
 * 00000001800596FF: mov     r8, rax
 * 0000000180059702: mov     rdx, r13
 * 0000000180059705: lea     rcx, [rbp+9E10h+var_D20]
 * 000000018005970C: call    sub_1800494AC
 * 0000000180059711: nop
 * 0000000180059712: lea     r8, aVertex; "/Vertex"
 * 0000000180059719: mov     rdx, rax
 * 000000018005971C: lea     rcx, [rbp+9E10h+var_D40]
 * 0000000180059723: call    sub_180031AE8
 * 0000000180059728: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005972D: mov     rcx, rax
 * 0000000180059730: call    sub_1800D4C70
 * 0000000180059735: mov     cs:byte_18022044C, al
 * 000000018005973B: lea     rcx, [rbp+9E10h+var_D20]; void *
 * 0000000180059742: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059747: nop
 * 0000000180059748: lea     rcx, [rbp+9E10h+var_D00]; void *
 * 000000018005974F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059754: nop
 * 0000000180059755: lea     rcx, dword_180220450
 * 000000018005975C: call    _Init_thread_footer
 * 0000000180059761: mov     rax, [rdi+rbx*8]
 * 0000000180059765: mov     ecx, [r15+rax]
 * 0000000180059769: cmp     cs:dword_180220458, ecx
 * 000000018005976F: jle     loc_180059861
 * 0000000180059775: lea     rcx, dword_180220458
 * 000000018005977C: call    _Init_thread_header
 * 0000000180059781: cmp     cs:dword_180220458, r14d
 * 0000000180059788: jnz     loc_180059861
 * 000000018005978E: mov     r8d, 1A50h
 * 0000000180059794: lea     rdx, unk_18018D760
 * 000000018005979B: lea     rcx, [rbp+9E10h+var_7150]
 * 00000001800597A2: call    sub_1800496BC
 * 00000001800597A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800597AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800597B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800597B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800597BA: mov     r9d, esi
 * 00000001800597BD: mov     r8d, esi
 * 00000001800597C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800597C5: lea     rcx, [rbp+9E10h+var_240]
 * 00000001800597CC: call    sub_1800496A8
 * 00000001800597D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800597D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800597D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800597DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800597E2: call    sub_1800496D0
 * 00000001800597E7: mov     r8, rax
 * 00000001800597EA: mov     r9d, r12d
 * 00000001800597ED: mov     edx, 1BAh
 * 00000001800597F2: lea     rcx, [rbp+9E10h+var_CA0]; Src
 * 00000001800597F9: call    sub_1800D4B98
 * 00000001800597FE: nop
 * 00000001800597FF: mov     r8, rax
 * 0000000180059802: mov     rdx, r13
 * 0000000180059805: lea     rcx, [rbp+9E10h+var_CC0]
 * 000000018005980C: call    sub_1800494AC
 * 0000000180059811: nop
 * 0000000180059812: lea     r8, aVertex; "/Vertex"
 * 0000000180059819: mov     rdx, rax
 * 000000018005981C: lea     rcx, [rbp+9E10h+var_CE0]
 * 0000000180059823: call    sub_180031AE8
 * 0000000180059828: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005982D: mov     rcx, rax
 * 0000000180059830: call    sub_1800D4C70
 * 0000000180059835: mov     cs:byte_180220454, al
 * 000000018005983B: lea     rcx, [rbp+9E10h+var_CC0]; void *
 * 0000000180059842: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059847: nop
 * 0000000180059848: lea     rcx, [rbp+9E10h+var_CA0]; void *
 * 000000018005984F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059854: nop
 * 0000000180059855: lea     rcx, dword_180220458
 * 000000018005985C: call    _Init_thread_footer
 * 0000000180059861: mov     rax, [rdi+rbx*8]
 * 0000000180059865: mov     ecx, [r15+rax]
 * 0000000180059869: cmp     cs:dword_180220460, ecx
 * 000000018005986F: jle     loc_180059961
 * 0000000180059875: lea     rcx, dword_180220460
 * 000000018005987C: call    _Init_thread_header
 * 0000000180059881: cmp     cs:dword_180220460, r14d
 * 0000000180059888: jnz     loc_180059961
 * 000000018005988E: mov     r8d, 1050h
 * 0000000180059894: lea     rdx, unk_18018C710
 * 000000018005989B: lea     rcx, [rbp+9E10h+var_7140]
 * 00000001800598A2: call    sub_1800496BC
 * 00000001800598A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800598AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800598B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800598B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800598BA: mov     r9d, esi
 * 00000001800598BD: mov     r8d, esi
 * 00000001800598C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800598C5: lea     rcx, [rbp+9E10h+var_220]
 * 00000001800598CC: call    sub_1800496A8
 * 00000001800598D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800598D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800598D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800598DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800598E2: call    sub_1800496D0
 * 00000001800598E7: mov     r8, rax
 * 00000001800598EA: mov     r9d, r12d
 * 00000001800598ED: mov     edx, 1C0h
 * 00000001800598F2: lea     rcx, [rbp+9E10h+var_C40]; Src
 * 00000001800598F9: call    sub_1800D4B98
 * 00000001800598FE: nop
 * 00000001800598FF: mov     r8, rax
 * 0000000180059902: mov     rdx, r13
 * 0000000180059905: lea     rcx, [rbp+9E10h+var_C60]
 * 000000018005990C: call    sub_1800494AC
 * 0000000180059911: nop
 * 0000000180059912: lea     r8, aVertex; "/Vertex"
 * 0000000180059919: mov     rdx, rax
 * 000000018005991C: lea     rcx, [rbp+9E10h+var_C80]
 * 0000000180059923: call    sub_180031AE8
 * 0000000180059928: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005992D: mov     rcx, rax
 * 0000000180059930: call    sub_1800D4C70
 * 0000000180059935: mov     cs:byte_18022045C, al
 * 000000018005993B: lea     rcx, [rbp+9E10h+var_C60]; void *
 * 0000000180059942: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059947: nop
 * 0000000180059948: lea     rcx, [rbp+9E10h+var_C40]; void *
 * 000000018005994F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059954: nop
 * 0000000180059955: lea     rcx, dword_180220460
 * 000000018005995C: call    _Init_thread_footer
 * 0000000180059961: mov     rax, [rdi+rbx*8]
 * 0000000180059965: mov     ecx, [r15+rax]
 * 0000000180059969: cmp     cs:dword_180220468, ecx
 * 000000018005996F: jle     loc_180059A61
 * 0000000180059975: lea     rcx, dword_180220468
 * 000000018005997C: call    _Init_thread_header
 * 0000000180059981: cmp     cs:dword_180220468, r14d
 * 0000000180059988: jnz     loc_180059A61
 * 000000018005998E: mov     r8d, 1050h
 * 0000000180059994: lea     rdx, unk_18018C710
 * 000000018005999B: lea     rcx, [rbp+9E10h+var_7130]
 * 00000001800599A2: call    sub_1800496BC
 * 00000001800599A7: movups  xmm0, xmmword ptr [rax]
 * 00000001800599AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800599B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 00000001800599B6: mov     [rsp+9F10h+var_9EF0], al
 * 00000001800599BA: mov     r9d, esi
 * 00000001800599BD: mov     r8d, esi
 * 00000001800599C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 00000001800599C5: lea     rcx, [rbp+9E10h+var_200]
 * 00000001800599CC: call    sub_1800496A8
 * 00000001800599D1: movups  xmm0, xmmword ptr [rax]
 * 00000001800599D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 00000001800599D9: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001800599DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 00000001800599E2: call    sub_1800496D0
 * 00000001800599E7: mov     r8, rax
 * 00000001800599EA: mov     r9d, r12d
 * 00000001800599ED: mov     edx, 1C2h
 * 00000001800599F2: lea     rcx, [rbp+9E10h+var_BE0]; Src
 * 00000001800599F9: call    sub_1800D4B98
 * 00000001800599FE: nop
 * 00000001800599FF: mov     r8, rax
 * 0000000180059A02: mov     rdx, r13
 * 0000000180059A05: lea     rcx, [rbp+9E10h+var_C00]
 * 0000000180059A0C: call    sub_1800494AC
 * 0000000180059A11: nop
 * 0000000180059A12: lea     r8, aVertex; "/Vertex"
 * 0000000180059A19: mov     rdx, rax
 * 0000000180059A1C: lea     rcx, [rbp+9E10h+var_C20]
 * 0000000180059A23: call    sub_180031AE8
 * 0000000180059A28: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180059A2D: mov     rcx, rax
 * 0000000180059A30: call    sub_1800D4C70
 * 0000000180059A35: mov     cs:byte_180220464, al
 * 0000000180059A3B: lea     rcx, [rbp+9E10h+var_C00]; void *
 * 0000000180059A42: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059A47: nop
 * 0000000180059A48: lea     rcx, [rbp+9E10h+var_BE0]; void *
 * 0000000180059A4F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059A54: nop
 * 0000000180059A55: lea     rcx, dword_180220468
 * 0000000180059A5C: call    _Init_thread_footer
 * 0000000180059A61: mov     rax, [rdi+rbx*8]
 * 0000000180059A65: mov     ecx, [r15+rax]
 * 0000000180059A69: cmp     cs:dword_180220470, ecx
 * 0000000180059A6F: jle     loc_180059B61
 * 0000000180059A75: lea     rcx, dword_180220470
 * 0000000180059A7C: call    _Init_thread_header
 * 0000000180059A81: cmp     cs:dword_180220470, r14d
 * 0000000180059A88: jnz     loc_180059B61
 * 0000000180059A8E: mov     r8d, 1050h
 * 0000000180059A94: lea     rdx, unk_18018C710
 * 0000000180059A9B: lea     rcx, [rbp+9E10h+var_7120]
 * 0000000180059AA2: call    sub_1800496BC
 * 0000000180059AA7: movups  xmm0, xmmword ptr [rax]
 * 0000000180059AAA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180059AB0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180059AB6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180059ABA: mov     r9d, esi
 * 0000000180059ABD: mov     r8d, esi
 * 0000000180059AC0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180059AC5: lea     rcx, [rbp+9E10h+var_1E0]
 * 0000000180059ACC: call    sub_1800496A8
 * 0000000180059AD1: movups  xmm0, xmmword ptr [rax]
 * 0000000180059AD4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180059AD9: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180059ADD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180059AE2: call    sub_1800496D0
 * 0000000180059AE7: mov     r8, rax
 * 0000000180059AEA: mov     r9d, r12d
 * 0000000180059AED: mov     edx, 1C8h
 * 0000000180059AF2: lea     rcx, [rbp+9E10h+var_B80]; Src
 * 0000000180059AF9: call    sub_1800D4B98
 * 0000000180059AFE: nop
 * 0000000180059AFF: mov     r8, rax
 * 0000000180059B02: mov     rdx, r13
 * 0000000180059B05: lea     rcx, [rbp+9E10h+var_BA0]
 * 0000000180059B0C: call    sub_1800494AC
 * 0000000180059B11: nop
 * 0000000180059B12: lea     r8, aVertex; "/Vertex"
 * 0000000180059B19: mov     rdx, rax
 * 0000000180059B1C: lea     rcx, [rbp+9E10h+var_BC0]
 * 0000000180059B23: call    sub_180031AE8
 * 0000000180059B28: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180059B2D: mov     rcx, rax
 * 0000000180059B30: call    sub_1800D4C70
 * 0000000180059B35: mov     cs:byte_18022046C, al
 * 0000000180059B3B: lea     rcx, [rbp+9E10h+var_BA0]; void *
 * 0000000180059B42: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059B47: nop
 * 0000000180059B48: lea     rcx, [rbp+9E10h+var_B80]; void *
 * 0000000180059B4F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059B54: nop
 * 0000000180059B55: lea     rcx, dword_180220470
 * 0000000180059B5C: call    _Init_thread_footer
 * 0000000180059B61: mov     rax, [rdi+rbx*8]
 * 0000000180059B65: mov     ecx, [r15+rax]
 * 0000000180059B69: cmp     cs:dword_180220478, ecx
 * 0000000180059B6F: jle     loc_180059C61
 * 0000000180059B75: lea     rcx, dword_180220478
 * 0000000180059B7C: call    _Init_thread_header
 * 0000000180059B81: cmp     cs:dword_180220478, r14d
 * 0000000180059B88: jnz     loc_180059C61
 * 0000000180059B8E: mov     r8d, 1050h
 * 0000000180059B94: lea     rdx, unk_18018C710
 * 0000000180059B9B: lea     rcx, [rbp+9E10h+var_7110]
 * 0000000180059BA2: call    sub_1800496BC
 * 0000000180059BA7: movups  xmm0, xmmword ptr [rax]
 * 0000000180059BAA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180059BB0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180059BB6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180059BBA: mov     r9d, esi
 * 0000000180059BBD: mov     r8d, esi
 * 0000000180059BC0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180059BC5: lea     rcx, [rbp+9E10h+var_1C0]
 * 0000000180059BCC: call    sub_1800496A8
 * 0000000180059BD1: movups  xmm0, xmmword ptr [rax]
 * 0000000180059BD4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180059BD9: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180059BDD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180059BE2: call    sub_1800496D0
 * 0000000180059BE7: mov     r8, rax
 * 0000000180059BEA: mov     r9d, r12d
 * 0000000180059BED: mov     edx, 1CAh
 * 0000000180059BF2: lea     rcx, [rbp+9E10h+var_B20]; Src
 * 0000000180059BF9: call    sub_1800D4B98
 * 0000000180059BFE: nop
 * 0000000180059BFF: mov     r8, rax
 * 0000000180059C02: mov     rdx, r13
 * 0000000180059C05: lea     rcx, [rbp+9E10h+var_B40]
 * 0000000180059C0C: call    sub_1800494AC
 * 0000000180059C11: nop
 * 0000000180059C12: lea     r8, aVertex; "/Vertex"
 * 0000000180059C19: mov     rdx, rax
 * 0000000180059C1C: lea     rcx, [rbp+9E10h+var_B60]
 * 0000000180059C23: call    sub_180031AE8
 * 0000000180059C28: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180059C2D: mov     rcx, rax
 * 0000000180059C30: call    sub_1800D4C70
 * 0000000180059C35: mov     cs:byte_180220474, al
 * 0000000180059C3B: lea     rcx, [rbp+9E10h+var_B40]; void *
 * 0000000180059C42: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059C47: nop
 * 0000000180059C48: lea     rcx, [rbp+9E10h+var_B20]; void *
 * 0000000180059C4F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059C54: nop
 * 0000000180059C55: lea     rcx, dword_180220478
 * 0000000180059C5C: call    _Init_thread_footer
 * 0000000180059C61: mov     rax, [rdi+rbx*8]
 * 0000000180059C65: mov     ecx, [r15+rax]
 * 0000000180059C69: cmp     cs:dword_180220480, ecx
 * 0000000180059C6F: jle     loc_180059D61
 * 0000000180059C75: lea     rcx, dword_180220480
 * 0000000180059C7C: call    _Init_thread_header
 * 0000000180059C81: cmp     cs:dword_180220480, r14d
 * 0000000180059C88: jnz     loc_180059D61
 * 0000000180059C8E: mov     r8d, 1050h
 * 0000000180059C94: lea     rdx, unk_18018C710
 * 0000000180059C9B: lea     rcx, [rbp+9E10h+var_7100]
 * 0000000180059CA2: call    sub_1800496BC
 * 0000000180059CA7: movups  xmm0, xmmword ptr [rax]
 * 0000000180059CAA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180059CB0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180059CB6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180059CBA: mov     r9d, esi
 * 0000000180059CBD: mov     r8d, esi
 * 0000000180059CC0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180059CC5: lea     rcx, [rbp+9E10h+var_1A0]
 * 0000000180059CCC: call    sub_1800496A8
 * 0000000180059CD1: movups  xmm0, xmmword ptr [rax]
 * 0000000180059CD4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180059CD9: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180059CDD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180059CE2: call    sub_1800496D0
 * 0000000180059CE7: mov     r8, rax
 * 0000000180059CEA: mov     r9d, r12d
 * 0000000180059CED: mov     edx, 1D0h
 * 0000000180059CF2: lea     rcx, [rbp+9E10h+var_AC0]; Src
 * 0000000180059CF9: call    sub_1800D4B98
 * 0000000180059CFE: nop
 * 0000000180059CFF: mov     r8, rax
 * 0000000180059D02: mov     rdx, r13
 * 0000000180059D05: lea     rcx, [rbp+9E10h+var_AE0]
 * 0000000180059D0C: call    sub_1800494AC
 * 0000000180059D11: nop
 * 0000000180059D12: lea     r8, aVertex; "/Vertex"
 * 0000000180059D19: mov     rdx, rax
 * 0000000180059D1C: lea     rcx, [rbp+9E10h+var_B00]
 * 0000000180059D23: call    sub_180031AE8
 * 0000000180059D28: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180059D2D: mov     rcx, rax
 * 0000000180059D30: call    sub_1800D4C70
 * 0000000180059D35: mov     cs:byte_18022047C, al
 * 0000000180059D3B: lea     rcx, [rbp+9E10h+var_AE0]; void *
 * 0000000180059D42: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059D47: nop
 * 0000000180059D48: lea     rcx, [rbp+9E10h+var_AC0]; void *
 * 0000000180059D4F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059D54: nop
 * 0000000180059D55: lea     rcx, dword_180220480
 * 0000000180059D5C: call    _Init_thread_footer
 * 0000000180059D61: mov     rax, [rdi+rbx*8]
 * 0000000180059D65: mov     ecx, [r15+rax]
 * 0000000180059D69: cmp     cs:dword_180220488, ecx
 * 0000000180059D6F: jle     loc_180059E61
 * 0000000180059D75: lea     rcx, dword_180220488
 * 0000000180059D7C: call    _Init_thread_header
 * 0000000180059D81: cmp     cs:dword_180220488, r14d
 * 0000000180059D88: jnz     loc_180059E61
 * 0000000180059D8E: mov     r8d, 1050h
 * 0000000180059D94: lea     rdx, unk_18018C710
 * 0000000180059D9B: lea     rcx, [rbp+9E10h+var_70F0]
 * 0000000180059DA2: call    sub_1800496BC
 * 0000000180059DA7: movups  xmm0, xmmword ptr [rax]
 * 0000000180059DAA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180059DB0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180059DB6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180059DBA: mov     r9d, esi
 * 0000000180059DBD: mov     r8d, esi
 * 0000000180059DC0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180059DC5: lea     rcx, [rbp+9E10h+var_180]
 * 0000000180059DCC: call    sub_1800496A8
 * 0000000180059DD1: movups  xmm0, xmmword ptr [rax]
 * 0000000180059DD4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180059DD9: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180059DDD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180059DE2: call    sub_1800496D0
 * 0000000180059DE7: mov     r8, rax
 * 0000000180059DEA: mov     r9d, r12d
 * 0000000180059DED: mov     edx, 1D2h
 * 0000000180059DF2: lea     rcx, [rbp+9E10h+var_A60]; Src
 * 0000000180059DF9: call    sub_1800D4B98
 * 0000000180059DFE: nop
 * 0000000180059DFF: mov     r8, rax
 * 0000000180059E02: mov     rdx, r13
 * 0000000180059E05: lea     rcx, [rbp+9E10h+var_A80]
 * 0000000180059E0C: call    sub_1800494AC
 * 0000000180059E11: nop
 * 0000000180059E12: lea     r8, aVertex; "/Vertex"
 * 0000000180059E19: mov     rdx, rax
 * 0000000180059E1C: lea     rcx, [rbp+9E10h+var_AA0]
 * 0000000180059E23: call    sub_180031AE8
 * 0000000180059E28: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180059E2D: mov     rcx, rax
 * 0000000180059E30: call    sub_1800D4C70
 * 0000000180059E35: mov     cs:byte_180220484, al
 * 0000000180059E3B: lea     rcx, [rbp+9E10h+var_A80]; void *
 * 0000000180059E42: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059E47: nop
 * 0000000180059E48: lea     rcx, [rbp+9E10h+var_A60]; void *
 * 0000000180059E4F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059E54: nop
 * 0000000180059E55: lea     rcx, dword_180220488
 * 0000000180059E5C: call    _Init_thread_footer
 * 0000000180059E61: mov     rax, [rdi+rbx*8]
 * 0000000180059E65: mov     ecx, [r15+rax]
 * 0000000180059E69: cmp     cs:dword_180220490, ecx
 * 0000000180059E6F: jle     loc_180059F61
 * 0000000180059E75: lea     rcx, dword_180220490
 * 0000000180059E7C: call    _Init_thread_header
 * 0000000180059E81: cmp     cs:dword_180220490, r14d
 * 0000000180059E88: jnz     loc_180059F61
 * 0000000180059E8E: mov     r8d, 1050h
 * 0000000180059E94: lea     rdx, unk_18018C710
 * 0000000180059E9B: lea     rcx, [rbp+9E10h+var_70E0]
 * 0000000180059EA2: call    sub_1800496BC
 * 0000000180059EA7: movups  xmm0, xmmword ptr [rax]
 * 0000000180059EAA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180059EB0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180059EB6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180059EBA: mov     r9d, esi
 * 0000000180059EBD: mov     r8d, esi
 * 0000000180059EC0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180059EC5: lea     rcx, [rbp+9E10h+var_160]
 * 0000000180059ECC: call    sub_1800496A8
 * 0000000180059ED1: movups  xmm0, xmmword ptr [rax]
 * 0000000180059ED4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180059ED9: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180059EDD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180059EE2: call    sub_1800496D0
 * 0000000180059EE7: mov     r8, rax
 * 0000000180059EEA: mov     r9d, r12d
 * 0000000180059EED: mov     edx, 1D8h
 * 0000000180059EF2: lea     rcx, [rbp+9E10h+var_A00]; Src
 * 0000000180059EF9: call    sub_1800D4B98
 * 0000000180059EFE: nop
 * 0000000180059EFF: mov     r8, rax
 * 0000000180059F02: mov     rdx, r13
 * 0000000180059F05: lea     rcx, [rbp+9E10h+var_A20]
 * 0000000180059F0C: call    sub_1800494AC
 * 0000000180059F11: nop
 * 0000000180059F12: lea     r8, aVertex; "/Vertex"
 * 0000000180059F19: mov     rdx, rax
 * 0000000180059F1C: lea     rcx, [rbp+9E10h+var_A40]
 * 0000000180059F23: call    sub_180031AE8
 * 0000000180059F28: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180059F2D: mov     rcx, rax
 * 0000000180059F30: call    sub_1800D4C70
 * 0000000180059F35: mov     cs:byte_18022048C, al
 * 0000000180059F3B: lea     rcx, [rbp+9E10h+var_A20]; void *
 * 0000000180059F42: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059F47: nop
 * 0000000180059F48: lea     rcx, [rbp+9E10h+var_A00]; void *
 * 0000000180059F4F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 0000000180059F54: nop
 * 0000000180059F55: lea     rcx, dword_180220490
 * 0000000180059F5C: call    _Init_thread_footer
 * 0000000180059F61: mov     rax, [rdi+rbx*8]
 * 0000000180059F65: mov     ecx, [r15+rax]
 * 0000000180059F69: cmp     cs:dword_180220498, ecx
 * 0000000180059F6F: jle     loc_18005A061
 * 0000000180059F75: lea     rcx, dword_180220498
 * 0000000180059F7C: call    _Init_thread_header
 * 0000000180059F81: cmp     cs:dword_180220498, r14d
 * 0000000180059F88: jnz     loc_18005A061
 * 0000000180059F8E: mov     r8d, 1050h
 * 0000000180059F94: lea     rdx, unk_18018C710
 * 0000000180059F9B: lea     rcx, [rbp+9E10h+var_70D0]
 * 0000000180059FA2: call    sub_1800496BC
 * 0000000180059FA7: movups  xmm0, xmmword ptr [rax]
 * 0000000180059FAA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180059FB0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 0000000180059FB6: mov     [rsp+9F10h+var_9EF0], al
 * 0000000180059FBA: mov     r9d, esi
 * 0000000180059FBD: mov     r8d, esi
 * 0000000180059FC0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 0000000180059FC5: lea     rcx, [rbp+9E10h+var_140]
 * 0000000180059FCC: call    sub_1800496A8
 * 0000000180059FD1: movups  xmm0, xmmword ptr [rax]
 * 0000000180059FD4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 0000000180059FD9: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000180059FDD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 0000000180059FE2: call    sub_1800496D0
 * 0000000180059FE7: mov     r8, rax
 * 0000000180059FEA: mov     r9d, r12d
 * 0000000180059FED: mov     edx, 1DAh
 * 0000000180059FF2: lea     rcx, [rbp+9E10h+var_9A0]; Src
 * 0000000180059FF9: call    sub_1800D4B98
 * 0000000180059FFE: nop
 * 0000000180059FFF: mov     r8, rax
 * 000000018005A002: mov     rdx, r13
 * 000000018005A005: lea     rcx, [rbp+9E10h+var_9C0]
 * 000000018005A00C: call    sub_1800494AC
 * 000000018005A011: nop
 * 000000018005A012: lea     r8, aVertex; "/Vertex"
 * 000000018005A019: mov     rdx, rax
 * 000000018005A01C: lea     rcx, [rbp+9E10h+var_9E0]
 * 000000018005A023: call    sub_180031AE8
 * 000000018005A028: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005A02D: mov     rcx, rax
 * 000000018005A030: call    sub_1800D4C70
 * 000000018005A035: mov     cs:byte_180220494, al
 * 000000018005A03B: lea     rcx, [rbp+9E10h+var_9C0]; void *
 * 000000018005A042: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005A047: nop
 * 000000018005A048: lea     rcx, [rbp+9E10h+var_9A0]; void *
 * 000000018005A04F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005A054: nop
 * 000000018005A055: lea     rcx, dword_180220498
 * 000000018005A05C: call    _Init_thread_footer
 * 000000018005A061: mov     rax, [rdi+rbx*8]
 * 000000018005A065: mov     ecx, [r15+rax]
 * 000000018005A069: cmp     cs:dword_1802204A0, ecx
 * 000000018005A06F: jle     loc_18005A161
 * 000000018005A075: lea     rcx, dword_1802204A0
 * 000000018005A07C: call    _Init_thread_header
 * 000000018005A081: cmp     cs:dword_1802204A0, r14d
 * 000000018005A088: jnz     loc_18005A161
 * 000000018005A08E: mov     r8d, 1A50h
 * 000000018005A094: lea     rdx, unk_18018D760
 * 000000018005A09B: lea     rcx, [rbp+9E10h+var_70C0]
 * 000000018005A0A2: call    sub_1800496BC
 * 000000018005A0A7: movups  xmm0, xmmword ptr [rax]
 * 000000018005A0AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005A0B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 000000018005A0B6: mov     [rsp+9F10h+var_9EF0], al
 * 000000018005A0BA: mov     r9d, esi
 * 000000018005A0BD: mov     r8d, esi
 * 000000018005A0C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005A0C5: lea     rcx, [rbp+9E10h+var_120]
 * 000000018005A0CC: call    sub_1800496A8
 * 000000018005A0D1: movups  xmm0, xmmword ptr [rax]
 * 000000018005A0D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005A0D9: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005A0DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 000000018005A0E2: call    sub_1800496D0
 * 000000018005A0E7: mov     r8, rax
 * 000000018005A0EA: mov     r9d, r12d
 * 000000018005A0ED: mov     edx, 1E0h
 * 000000018005A0F2: lea     rcx, [rbp+9E10h+var_940]; Src
 * 000000018005A0F9: call    sub_1800D4B98
 * 000000018005A0FE: nop
 * 000000018005A0FF: mov     r8, rax
 * 000000018005A102: mov     rdx, r13
 * 000000018005A105: lea     rcx, [rbp+9E10h+var_960]
 * 000000018005A10C: call    sub_1800494AC
 * 000000018005A111: nop
 * 000000018005A112: lea     r8, aVertex; "/Vertex"
 * 000000018005A119: mov     rdx, rax
 * 000000018005A11C: lea     rcx, [rbp+9E10h+var_980]
 * 000000018005A123: call    sub_180031AE8
 * 000000018005A128: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005A12D: mov     rcx, rax
 * 000000018005A130: call    sub_1800D4C70
 * 000000018005A135: mov     cs:byte_18022049C, al
 * 000000018005A13B: lea     rcx, [rbp+9E10h+var_960]; void *
 * 000000018005A142: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005A147: nop
 * 000000018005A148: lea     rcx, [rbp+9E10h+var_940]; void *
 * 000000018005A14F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005A154: nop
 * 000000018005A155: lea     rcx, dword_1802204A0
 * 000000018005A15C: call    _Init_thread_footer
 * 000000018005A161: mov     rax, [rdi+rbx*8]
 * 000000018005A165: mov     ecx, [r15+rax]
 * 000000018005A169: cmp     cs:dword_1802204A8, ecx
 * 000000018005A16F: jle     loc_18005A261
 * 000000018005A175: lea     rcx, dword_1802204A8
 * 000000018005A17C: call    _Init_thread_header
 * 000000018005A181: cmp     cs:dword_1802204A8, r14d
 * 000000018005A188: jnz     loc_18005A261
 * 000000018005A18E: mov     r8d, 1A50h
 * 000000018005A194: lea     rdx, unk_18018D760
 * 000000018005A19B: lea     rcx, [rbp+9E10h+var_70B0]
 * 000000018005A1A2: call    sub_1800496BC
 * 000000018005A1A7: movups  xmm0, xmmword ptr [rax]
 * 000000018005A1AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005A1B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 000000018005A1B6: mov     [rsp+9F10h+var_9EF0], al
 * 000000018005A1BA: mov     r9d, esi
 * 000000018005A1BD: mov     r8d, esi
 * 000000018005A1C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005A1C5: lea     rcx, [rbp+9E10h+var_100]
 * 000000018005A1CC: call    sub_1800496A8
 * 000000018005A1D1: movups  xmm0, xmmword ptr [rax]
 * 000000018005A1D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005A1D9: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005A1DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 000000018005A1E2: call    sub_1800496D0
 * 000000018005A1E7: mov     r8, rax
 * 000000018005A1EA: mov     r9d, r12d
 * 000000018005A1ED: mov     edx, 1E2h
 * 000000018005A1F2: lea     rcx, [rbp+9E10h+var_8E0]; Src
 * 000000018005A1F9: call    sub_1800D4B98
 * 000000018005A1FE: nop
 * 000000018005A1FF: mov     r8, rax
 * 000000018005A202: mov     rdx, r13
 * 000000018005A205: lea     rcx, [rbp+9E10h+var_900]
 * 000000018005A20C: call    sub_1800494AC
 * 000000018005A211: nop
 * 000000018005A212: lea     r8, aVertex; "/Vertex"
 * 000000018005A219: mov     rdx, rax
 * 000000018005A21C: lea     rcx, [rbp+9E10h+var_920]
 * 000000018005A223: call    sub_180031AE8
 * 000000018005A228: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005A22D: mov     rcx, rax
 * 000000018005A230: call    sub_1800D4C70
 * 000000018005A235: mov     cs:byte_1802204A4, al
 * 000000018005A23B: lea     rcx, [rbp+9E10h+var_900]; void *
 * 000000018005A242: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005A247: nop
 * 000000018005A248: lea     rcx, [rbp+9E10h+var_8E0]; void *
 * 000000018005A24F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005A254: nop
 * 000000018005A255: lea     rcx, dword_1802204A8
 * 000000018005A25C: call    _Init_thread_footer
 * 000000018005A261: mov     rax, [rdi+rbx*8]
 * 000000018005A265: mov     ecx, [r15+rax]
 * 000000018005A269: cmp     cs:dword_1802204B0, ecx
 * 000000018005A26F: jle     loc_18005A361
 * 000000018005A275: lea     rcx, dword_1802204B0
 * 000000018005A27C: call    _Init_thread_header
 * 000000018005A281: cmp     cs:dword_1802204B0, r14d
 * 000000018005A288: jnz     loc_18005A361
 * 000000018005A28E: mov     r8d, 1A50h
 * 000000018005A294: lea     rdx, unk_18018D760
 * 000000018005A29B: lea     rcx, [rbp+9E10h+var_70A0]
 * 000000018005A2A2: call    sub_1800496BC
 * 000000018005A2A7: movups  xmm0, xmmword ptr [rax]
 * 000000018005A2AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005A2B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 000000018005A2B6: mov     [rsp+9F10h+var_9EF0], al
 * 000000018005A2BA: mov     r9d, esi
 * 000000018005A2BD: mov     r8d, esi
 * 000000018005A2C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005A2C5: lea     rcx, [rbp+9E10h+var_E0]
 * 000000018005A2CC: call    sub_1800496A8
 * 000000018005A2D1: movups  xmm0, xmmword ptr [rax]
 * 000000018005A2D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005A2D9: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005A2DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 000000018005A2E2: call    sub_1800496D0
 * 000000018005A2E7: mov     r8, rax
 * 000000018005A2EA: mov     r9d, r12d
 * 000000018005A2ED: mov     edx, 1E8h
 * 000000018005A2F2: lea     rcx, [rbp+9E10h+var_880]; Src
 * 000000018005A2F9: call    sub_1800D4B98
 * 000000018005A2FE: nop
 * 000000018005A2FF: mov     r8, rax
 * 000000018005A302: mov     rdx, r13
 * 000000018005A305: lea     rcx, [rbp+9E10h+var_8A0]
 * 000000018005A30C: call    sub_1800494AC
 * 000000018005A311: nop
 * 000000018005A312: lea     r8, aVertex; "/Vertex"
 * 000000018005A319: mov     rdx, rax
 * 000000018005A31C: lea     rcx, [rbp+9E10h+var_8C0]
 * 000000018005A323: call    sub_180031AE8
 * 000000018005A328: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005A32D: mov     rcx, rax
 * 000000018005A330: call    sub_1800D4C70
 * 000000018005A335: mov     cs:byte_1802204AC, al
 * 000000018005A33B: lea     rcx, [rbp+9E10h+var_8A0]; void *
 * 000000018005A342: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005A347: nop
 * 000000018005A348: lea     rcx, [rbp+9E10h+var_880]; void *
 * 000000018005A34F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005A354: nop
 * 000000018005A355: lea     rcx, dword_1802204B0
 * 000000018005A35C: call    _Init_thread_footer
 * 000000018005A361: mov     rax, [rdi+rbx*8]
 * 000000018005A365: mov     ecx, [r15+rax]
 * 000000018005A369: cmp     cs:dword_1802204B8, ecx
 * 000000018005A36F: jle     loc_18005A461
 * 000000018005A375: lea     rcx, dword_1802204B8
 * 000000018005A37C: call    _Init_thread_header
 * 000000018005A381: cmp     cs:dword_1802204B8, r14d
 * 000000018005A388: jnz     loc_18005A461
 * 000000018005A38E: mov     r8d, 1A50h
 * 000000018005A394: lea     rdx, unk_18018D760
 * 000000018005A39B: lea     rcx, [rbp+9E10h+var_7090]
 * 000000018005A3A2: call    sub_1800496BC
 * 000000018005A3A7: movups  xmm0, xmmword ptr [rax]
 * 000000018005A3AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005A3B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 000000018005A3B6: mov     [rsp+9F10h+var_9EF0], al
 * 000000018005A3BA: mov     r9d, esi
 * 000000018005A3BD: mov     r8d, esi
 * 000000018005A3C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005A3C5: lea     rcx, [rbp+9E10h+var_C0]
 * 000000018005A3CC: call    sub_1800496A8
 * 000000018005A3D1: movups  xmm0, xmmword ptr [rax]
 * 000000018005A3D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005A3D9: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005A3DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 000000018005A3E2: call    sub_1800496D0
 * 000000018005A3E7: mov     r8, rax
 * 000000018005A3EA: mov     r9d, r12d
 * 000000018005A3ED: mov     edx, 1EAh
 * 000000018005A3F2: lea     rcx, [rbp+9E10h+var_820]; Src
 * 000000018005A3F9: call    sub_1800D4B98
 * 000000018005A3FE: nop
 * 000000018005A3FF: mov     r8, rax
 * 000000018005A402: mov     rdx, r13
 * 000000018005A405: lea     rcx, [rbp+9E10h+var_840]
 * 000000018005A40C: call    sub_1800494AC
 * 000000018005A411: nop
 * 000000018005A412: lea     r8, aVertex; "/Vertex"
 * 000000018005A419: mov     rdx, rax
 * 000000018005A41C: lea     rcx, [rbp+9E10h+var_860]
 * 000000018005A423: call    sub_180031AE8
 * 000000018005A428: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005A42D: mov     rcx, rax
 * 000000018005A430: call    sub_1800D4C70
 * 000000018005A435: mov     cs:byte_1802204B4, al
 * 000000018005A43B: lea     rcx, [rbp+9E10h+var_840]; void *
 * 000000018005A442: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005A447: nop
 * 000000018005A448: lea     rcx, [rbp+9E10h+var_820]; void *
 * 000000018005A44F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005A454: nop
 * 000000018005A455: lea     rcx, dword_1802204B8
 * 000000018005A45C: call    _Init_thread_footer
 * 000000018005A461: mov     rax, [rdi+rbx*8]
 * 000000018005A465: mov     ecx, [r15+rax]
 * 000000018005A469: cmp     cs:dword_1802204C0, ecx
 * 000000018005A46F: jle     loc_18005A561
 * 000000018005A475: lea     rcx, dword_1802204C0
 * 000000018005A47C: call    _Init_thread_header
 * 000000018005A481: cmp     cs:dword_1802204C0, r14d
 * 000000018005A488: jnz     loc_18005A561
 * 000000018005A48E: mov     r8d, 1A50h
 * 000000018005A494: lea     rdx, unk_18018D760
 * 000000018005A49B: lea     rcx, [rbp+9E10h+var_7080]
 * 000000018005A4A2: call    sub_1800496BC
 * 000000018005A4A7: movups  xmm0, xmmword ptr [rax]
 * 000000018005A4AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005A4B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 000000018005A4B6: mov     [rsp+9F10h+var_9EF0], al
 * 000000018005A4BA: mov     r9d, esi
 * 000000018005A4BD: mov     r8d, esi
 * 000000018005A4C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005A4C5: lea     rcx, [rbp+9E10h+var_A0]
 * 000000018005A4CC: call    sub_1800496A8
 * 000000018005A4D1: movups  xmm0, xmmword ptr [rax]
 * 000000018005A4D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005A4D9: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005A4DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 000000018005A4E2: call    sub_1800496D0
 * 000000018005A4E7: mov     r8, rax
 * 000000018005A4EA: mov     r9d, r12d
 * 000000018005A4ED: mov     edx, 1F0h
 * 000000018005A4F2: lea     rcx, [rbp+9E10h+var_7C0]; Src
 * 000000018005A4F9: call    sub_1800D4B98
 * 000000018005A4FE: nop
 * 000000018005A4FF: mov     r8, rax
 * 000000018005A502: mov     rdx, r13
 * 000000018005A505: lea     rcx, [rbp+9E10h+var_7E0]
 * 000000018005A50C: call    sub_1800494AC
 * 000000018005A511: nop
 * 000000018005A512: lea     r8, aVertex; "/Vertex"
 * 000000018005A519: mov     rdx, rax
 * 000000018005A51C: lea     rcx, [rbp+9E10h+var_800]
 * 000000018005A523: call    sub_180031AE8
 * 000000018005A528: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005A52D: mov     rcx, rax
 * 000000018005A530: call    sub_1800D4C70
 * 000000018005A535: mov     cs:byte_1802204BC, al
 * 000000018005A53B: lea     rcx, [rbp+9E10h+var_7E0]; void *
 * 000000018005A542: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005A547: nop
 * 000000018005A548: lea     rcx, [rbp+9E10h+var_7C0]; void *
 * 000000018005A54F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005A554: nop
 * 000000018005A555: lea     rcx, dword_1802204C0
 * 000000018005A55C: call    _Init_thread_footer
 * 000000018005A561: mov     rax, [rdi+rbx*8]
 * 000000018005A565: mov     ecx, [r15+rax]
 * 000000018005A569: cmp     cs:dword_1802204C8, ecx
 * 000000018005A56F: jle     loc_18005A661
 * 000000018005A575: lea     rcx, dword_1802204C8
 * 000000018005A57C: call    _Init_thread_header
 * 000000018005A581: cmp     cs:dword_1802204C8, r14d
 * 000000018005A588: jnz     loc_18005A661
 * 000000018005A58E: mov     r8d, 1A50h
 * 000000018005A594: lea     rdx, unk_18018D760
 * 000000018005A59B: lea     rcx, [rbp+9E10h+var_7070]
 * 000000018005A5A2: call    sub_1800496BC
 * 000000018005A5A7: movups  xmm0, xmmword ptr [rax]
 * 000000018005A5AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005A5B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 000000018005A5B6: mov     [rsp+9F10h+var_9EF0], al
 * 000000018005A5BA: mov     r9d, esi
 * 000000018005A5BD: mov     r8d, esi
 * 000000018005A5C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005A5C5: lea     rcx, [rbp+9E10h+var_80]
 * 000000018005A5CC: call    sub_1800496A8
 * 000000018005A5D1: movups  xmm0, xmmword ptr [rax]
 * 000000018005A5D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005A5D9: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005A5DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 000000018005A5E2: call    sub_1800496D0
 * 000000018005A5E7: mov     r8, rax
 * 000000018005A5EA: mov     r9d, r12d
 * 000000018005A5ED: mov     edx, 1F2h
 * 000000018005A5F2: lea     rcx, [rbp+9E10h+var_760]; Src
 * 000000018005A5F9: call    sub_1800D4B98
 * 000000018005A5FE: nop
 * 000000018005A5FF: mov     r8, rax
 * 000000018005A602: mov     rdx, r13
 * 000000018005A605: lea     rcx, [rbp+9E10h+var_780]
 * 000000018005A60C: call    sub_1800494AC
 * 000000018005A611: nop
 * 000000018005A612: lea     r8, aVertex; "/Vertex"
 * 000000018005A619: mov     rdx, rax
 * 000000018005A61C: lea     rcx, [rbp+9E10h+var_7A0]
 * 000000018005A623: call    sub_180031AE8
 * 000000018005A628: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005A62D: mov     rcx, rax
 * 000000018005A630: call    sub_1800D4C70
 * 000000018005A635: mov     cs:byte_1802204C4, al
 * 000000018005A63B: lea     rcx, [rbp+9E10h+var_780]; void *
 * 000000018005A642: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005A647: nop
 * 000000018005A648: lea     rcx, [rbp+9E10h+var_760]; void *
 * 000000018005A64F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005A654: nop
 * 000000018005A655: lea     rcx, dword_1802204C8
 * 000000018005A65C: call    _Init_thread_footer
 * 000000018005A661: mov     rax, [rdi+rbx*8]
 * 000000018005A665: mov     ecx, [r15+rax]
 * 000000018005A669: cmp     cs:dword_1802204D0, ecx
 * 000000018005A66F: jle     loc_18005A761
 * 000000018005A675: lea     rcx, dword_1802204D0
 * 000000018005A67C: call    _Init_thread_header
 * 000000018005A681: cmp     cs:dword_1802204D0, r14d
 * 000000018005A688: jnz     loc_18005A761
 * 000000018005A68E: mov     r8d, 1A50h
 * 000000018005A694: lea     rdx, unk_18018D760
 * 000000018005A69B: lea     rcx, [rbp+9E10h+var_7060]
 * 000000018005A6A2: call    sub_1800496BC
 * 000000018005A6A7: movups  xmm0, xmmword ptr [rax]
 * 000000018005A6AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005A6B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 000000018005A6B6: mov     [rsp+9F10h+var_9EF0], al
 * 000000018005A6BA: mov     r9d, esi
 * 000000018005A6BD: mov     r8d, esi
 * 000000018005A6C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005A6C5: lea     rcx, [rbp+9E10h+var_60]
 * 000000018005A6CC: call    sub_1800496A8
 * 000000018005A6D1: movups  xmm0, xmmword ptr [rax]
 * 000000018005A6D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005A6D9: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005A6DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 000000018005A6E2: call    sub_1800496D0
 * 000000018005A6E7: mov     r8, rax
 * 000000018005A6EA: mov     r9d, r12d
 * 000000018005A6ED: mov     edx, 1F8h
 * 000000018005A6F2: lea     rcx, [rbp+9E10h+var_700]; Src
 * 000000018005A6F9: call    sub_1800D4B98
 * 000000018005A6FE: nop
 * 000000018005A6FF: mov     r8, rax
 * 000000018005A702: mov     rdx, r13
 * 000000018005A705: lea     rcx, [rbp+9E10h+var_720]
 * 000000018005A70C: call    sub_1800494AC
 * 000000018005A711: nop
 * 000000018005A712: lea     r8, aVertex; "/Vertex"
 * 000000018005A719: mov     rdx, rax
 * 000000018005A71C: lea     rcx, [rbp+9E10h+var_740]
 * 000000018005A723: call    sub_180031AE8
 * 000000018005A728: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005A72D: mov     rcx, rax
 * 000000018005A730: call    sub_1800D4C70
 * 000000018005A735: mov     cs:byte_1802204CC, al
 * 000000018005A73B: lea     rcx, [rbp+9E10h+var_720]; void *
 * 000000018005A742: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005A747: nop
 * 000000018005A748: lea     rcx, [rbp+9E10h+var_700]; void *
 * 000000018005A74F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005A754: nop
 * 000000018005A755: lea     rcx, dword_1802204D0
 * 000000018005A75C: call    _Init_thread_footer
 * 000000018005A761: mov     rax, [rdi+rbx*8]
 * 000000018005A765: mov     ecx, [r15+rax]
 * 000000018005A769: cmp     cs:dword_1802204D8, ecx
 * 000000018005A76F: jle     loc_18005A861
 * 000000018005A775: lea     rcx, dword_1802204D8
 * 000000018005A77C: call    _Init_thread_header
 * 000000018005A781: cmp     cs:dword_1802204D8, r14d
 * 000000018005A788: jnz     loc_18005A861
 * 000000018005A78E: mov     r8d, 1A50h
 * 000000018005A794: lea     rdx, unk_18018D760
 * 000000018005A79B: lea     rcx, [rbp+9E10h+var_7050]
 * 000000018005A7A2: call    sub_1800496BC
 * 000000018005A7A7: movups  xmm0, xmmword ptr [rax]
 * 000000018005A7AA: movdqu  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005A7B0: mov     al, byte ptr [rbp+9E10h+arg_0]
 * 000000018005A7B6: mov     [rsp+9F10h+var_9EF0], al
 * 000000018005A7BA: mov     r9d, esi
 * 000000018005A7BD: mov     r8d, esi
 * 000000018005A7C0: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005A7C5: lea     rcx, [rbp+9E10h+var_40]
 * 000000018005A7CC: call    sub_1800496A8
 * 000000018005A7D1: movups  xmm0, xmmword ptr [rax]
 * 000000018005A7D4: movaps  [rsp+9F10h+var_9EE0], xmm0
 * 000000018005A7D9: movups  xmm1, xmmword ptr [rax+10h]
 * 000000018005A7DD: movaps  [rsp+9F10h+var_9ED0], xmm1
 * 000000018005A7E2: call    sub_1800496D0
 * 000000018005A7E7: mov     r8, rax
 * 000000018005A7EA: mov     r9d, r12d
 * 000000018005A7ED: mov     edx, 1FAh
 * 000000018005A7F2: lea     rcx, [rbp+9E10h+var_6A0]; Src
 * 000000018005A7F9: call    sub_1800D4B98
 * 000000018005A7FE: nop
 * 000000018005A7FF: mov     r8, rax
 * 000000018005A802: mov     rdx, r13
 * 000000018005A805: lea     rcx, [rbp+9E10h+var_6C0]
 * 000000018005A80C: call    sub_1800494AC
 * 000000018005A811: nop
 * 000000018005A812: lea     r8, aVertex; "/Vertex"
 * 000000018005A819: mov     rdx, rax
 * 000000018005A81C: lea     rcx, [rbp+9E10h+var_6E0]
 * 000000018005A823: call    sub_180031AE8
 * 000000018005A828: lea     rdx, [rsp+9F10h+var_9EE0]
 * 000000018005A82D: mov     rcx, rax
 * 000000018005A830: call    sub_1800D4C70
 * 000000018005A835: mov     cs:byte_1802204D4, al
 * 000000018005A83B: lea     rcx, [rbp+9E10h+var_6C0]; void *
 * 000000018005A842: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005A847: nop
 * 000000018005A848: lea     rcx, [rbp+9E10h+var_6A0]; void *
 * 000000018005A84F: call    ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ; std::string::_Tidy_deallocate(void)
 * 000000018005A854: nop
 * 000000018005A855: lea     rcx, dword_1802204D8
 * 000000018005A85C: call    _Init_thread_footer
 * 000000018005A861: xor     eax, eax
 * 000000018005A863: lea     r11, [rsp+9F10h+var_20]
 * 000000018005A86B: mov     rbx, [r11+38h]
 * 000000018005A86F: mov     rsi, [r11+40h]
 * 000000018005A873: mov     rdi, [r11+48h]
 * 000000018005A877: mov     rsp, r11
 * 000000018005A87A: pop     r15
 * 000000018005A87C: pop     r14
 * 000000018005A87E: pop     r13
 * 000000018005A880: pop     r12
 * 000000018005A882: pop     rbp
 * 000000018005A883: retn
 */
