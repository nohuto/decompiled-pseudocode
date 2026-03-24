/*
 * XREFs of MdlToPrp @ 0x1C0003FE0
 * Callers:
 *     SetPrpFromSrb @ 0x1C0001AE8 (SetPrpFromSrb.c)
 *     ScsiToNVMe @ 0x1C0003A60 (ScsiToNVMe.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C00034C8 (GetSrbScsiData.c)
 *     memset @ 0x1C0005500 (memset.c)
 *     BuildReadWriteCommand @ 0x1C000FAC0 (BuildReadWriteCommand.c)
 *     GetLbaFromCdb @ 0x1C0010FCC (GetLbaFromCdb.c)
 */

/*
 * Hex-Rays decompilation failed for MdlToPrp @ 0x1C0003FE0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0003FE0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0003FE0: push    rbp
 * 00000001C0003FE2: push    rbx
 * 00000001C0003FE3: push    rsi
 * 00000001C0003FE4: push    r13
 * 00000001C0003FE6: push    r14
 * 00000001C0003FE8: push    r15
 * 00000001C0003FEA: mov     rbp, rsp
 * 00000001C0003FED: sub     rsp, 58h
 * 00000001C0003FF1: cmp     byte ptr [rdx+2], 28h ; '('
 * 00000001C0003FF5: mov     rsi, rdx
 * 00000001C0003FF8: mov     r15, rcx
 * 00000001C0003FFB: jnz     loc_1C0008738
 * 00000001C0004001: mov     rbx, [rdx+68h]
 * 00000001C0004005: mov     rax, rbx
 * 00000001C0004008: and     eax, 0FFFh
 * 00000001C000400D: jz      short loc_1C0004019
 * 00000001C000400F: sub     rbx, rax
 * 00000001C0004012: add     rbx, 1000h
 * 00000001C0004019: xor     r13d, r13d
 * 00000001C000401C: mov     [rsp+58h+arg_0], rdi
 * 00000001C0004024: mov     [rbp+var_18], r13
 * 00000001C0004028: mov     r14d, r13d
 * 00000001C000402B: mov     [rbp+var_10], r13
 * 00000001C000402F: mov     [rbp+arg_18], r13d
 * 00000001C0004033: mov     [rbp+arg_8], r13d
 * 00000001C0004037: movzx   eax, byte ptr [rbx+109Dh]
 * 00000001C000403E: and     al, 6
 * 00000001C0004040: mov     [rsp+58h+var_8], r12
 * 00000001C0004045: cmp     al, 2
 * 00000001C0004047: jnz     loc_1C000413D
 * 00000001C000404D: lea     r9, [rbp+var_10]
 * 00000001C0004051: mov     r8, rsi
 * 00000001C0004054: mov     rdx, r15
 * 00000001C0004057: lea     ecx, [r13+6]
 * 00000001C000405B: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0004062: nop     dword ptr [rax+rax+00h]
 * 00000001C0004067: test    eax, eax
 * 00000001C0004069: jnz     loc_1C000413F
 * 00000001C000406F: mov     r9, [rbp+var_10]
 * 00000001C0004073: lea     rax, [rbp+arg_8]
 * 00000001C0004077: mov     [rsp+58h+var_28], rax
 * 00000001C000407C: lea     ecx, [r13+4Ch]
 * 00000001C0004080: lea     rax, [rbp+arg_18]
 * 00000001C0004084: mov     r8, rsi
 * 00000001C0004087: mov     [rsp+58h+var_30], rax
 * 00000001C000408C: mov     rdx, r15
 * 00000001C000408F: lea     rax, [rbp+var_18]
 * 00000001C0004093: mov     [rsp+58h+var_38], rax
 * 00000001C0004098: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000409F: nop     dword ptr [rax+rax+00h]
 * 00000001C00040A4: test    eax, eax
 * 00000001C00040A6: jnz     loc_1C000413F
 * 00000001C00040AC: cmp     byte ptr [rsi+2], 28h ; '('
 * 00000001C00040B0: mov     ecx, 3Ch ; '<'
 * 00000001C00040B5: mov     edi, 10h
 * 00000001C00040BA: cmovz   edi, ecx
 * 00000001C00040BD: cmp     [r15+78h], r13d
 * 00000001C00040C1: ja      loc_1C0008741
 * 00000001C00040C7: mov     r8d, [rbx+1078h]
 * 00000001C00040CE: add     r8d, [rbp+arg_8]
 * 00000001C00040D2: mov     [rbp+arg_8], r8d
 * 00000001C00040D6: mov     ecx, r8d
 * 00000001C00040D9: mov     edx, [rdi+rsi]
 * 00000001C00040DC: and     ecx, 0FFFh
 * 00000001C00040E2: mov     edi, edx
 * 00000001C00040E4: shr     edx, 0Ch
 * 00000001C00040E7: and     edi, 0FFFh
 * 00000001C00040ED: add     edi, 0FFFh
 * 00000001C00040F3: add     edi, ecx
 * 00000001C00040F5: shr     edi, 0Ch
 * 00000001C00040F8: add     edi, edx
 * 00000001C00040FA: cmp     r8d, 1000h
 * 00000001C0004101: jnb     loc_1C000880A
 * 00000001C0004107: test    edi, edi
 * 00000001C0004109: jz      loc_1C0008823
 * 00000001C000410F: lea     eax, [r14+rdi]
 * 00000001C0004113: cmp     eax, [rbp+arg_18]
 * 00000001C0004116: ja      loc_1C0008823
 * 00000001C000411C: mov     rax, [rbp+var_18]
 * 00000001C0004120: mov     ecx, r14d
 * 00000001C0004123: mov     rdx, [rax+rcx*8]
 * 00000001C0004127: shl     rdx, 0Ch
 * 00000001C000412B: mov     eax, r8d
 * 00000001C000412E: add     rdx, rax
 * 00000001C0004131: mov     [rbx+1018h], rdx
 * 00000001C0004138: cmp     edi, 1
 * 00000001C000413B: jnz     short loc_1C000415B
 * 00000001C000413D: xor     eax, eax
 * 00000001C000413F: mov     r12, [rsp+58h+var_8]
 * 00000001C0004144: mov     rdi, [rsp+58h+arg_0]
 * 00000001C000414C: add     rsp, 58h
 * 00000001C0004150: pop     r15
 * 00000001C0004152: pop     r14
 * 00000001C0004154: pop     r13
 * 00000001C0004156: pop     rsi
 * 00000001C0004157: pop     rbx
 * 00000001C0004158: pop     rbp
 * 00000001C0004159: retn
 * 00000001C000415B: mov     r8d, 1000h; Size
 * 00000001C0004161: cmp     edi, 2
 * 00000001C0004164: jz      loc_1C0004282
 * 00000001C000416A: xor     edx, edx; Val
 * 00000001C000416C: mov     [rbp+arg_10], r13d
 * 00000001C0004170: mov     rcx, rbx; void *
 * 00000001C0004173: call    memset
 * 00000001C0004178: mov     r9d, 1
 * 00000001C000417E: lea     r10d, [rdi-1]
 * 00000001C0004182: mov     r8, rbx
 * 00000001C0004185: cmp     edi, r9d
 * 00000001C0004188: jbe     loc_1C000425D
 * 00000001C000418E: cmp     r10d, 8
 * 00000001C0004192: jb      loc_1C0004238
 * 00000001C0004198: mov     rdx, [rbp+var_18]
 * 00000001C000419C: lea     eax, [r14+1]
 * 00000001C00041A0: lea     r11, [rbx+r10*8]
 * 00000001C00041A4: lea     r12, [rdx+rax*8]
 * 00000001C00041A8: lea     eax, [r10+r14]
 * 00000001C00041AC: lea     rdx, [rdx+rax*8]
 * 00000001C00041B0: lea     rax, [rbx+8]
 * 00000001C00041B4: cmp     rax, rdx
 * 00000001C00041B7: ja      short loc_1C00041BE
 * 00000001C00041B9: cmp     r11, r12
 * 00000001C00041BC: jnb     short loc_1C0004238
 * 00000001C00041BE: and     r10d, 7
 * 00000001C00041C2: mov     r11d, edi
 * 00000001C00041C5: sub     r11d, r10d
 * 00000001C00041C8: mov     r10, [rbp+var_18]
 * 00000001C00041CC: lea     edx, [r14+3]
 * 00000001C00041D0: mov     eax, 0Ch
 * 00000001C00041D5: movd    xmm1, eax
 * 00000001C00041D9: nop     dword ptr [rax+00000000h]
 * 00000001C00041E0: lea     eax, [rdx-2]
 * 00000001C00041E3: add     r9d, 8
 * 00000001C00041E7: movdqu  xmm0, xmmword ptr [r10+rax*8]
 * 00000001C00041ED: lea     eax, [rdx+2]
 * 00000001C00041F0: psllq   xmm0, xmm1
 * 00000001C00041F4: movdqu  xmmword ptr [r8], xmm0
 * 00000001C00041F9: movdqu  xmm0, xmmword ptr [r10+rdx*8]
 * 00000001C00041FF: psllq   xmm0, xmm1
 * 00000001C0004203: movdqu  xmmword ptr [r8+10h], xmm0
 * 00000001C0004209: movdqu  xmm0, xmmword ptr [r10+rax*8]
 * 00000001C000420F: lea     eax, [rdx+4]
 * 00000001C0004212: lea     edx, [rdx+8]
 * 00000001C0004215: psllq   xmm0, xmm1
 * 00000001C0004219: movdqu  xmmword ptr [r8+20h], xmm0
 * 00000001C000421F: movdqu  xmm0, xmmword ptr [r10+rax*8]
 * 00000001C0004225: psllq   xmm0, xmm1
 * 00000001C0004229: movdqu  xmmword ptr [r8+30h], xmm0
 * 00000001C000422F: add     r8, 40h ; '@'
 * 00000001C0004233: cmp     r9d, r11d
 * 00000001C0004236: jb      short loc_1C00041E0
 * 00000001C0004238: cmp     r9d, edi
 * 00000001C000423B: jnb     short loc_1C000425D
 * 00000001C000423D: mov     rax, [rbp+var_18]
 * 00000001C0004241: lea     ecx, [r9+r14]
 * 00000001C0004245: inc     r9d
 * 00000001C0004248: lea     r8, [r8+8]
 * 00000001C000424C: mov     rdx, [rax+rcx*8]
 * 00000001C0004250: shl     rdx, 0Ch
 * 00000001C0004254: mov     [r8-8], rdx
 * 00000001C0004258: cmp     r9d, edi
 * 00000001C000425B: jb      short loc_1C000423D
 * 00000001C000425D: lea     r9, [rbp+arg_10]
 * 00000001C0004261: mov     r8, rbx
 * 00000001C0004264: mov     rdx, rsi
 * 00000001C0004267: mov     rcx, r15
 * 00000001C000426A: call    cs:__imp_StorPortGetPhysicalAddress
 * 00000001C0004271: nop     dword ptr [rax+rax+00h]
 * 00000001C0004276: mov     [rbx+1020h], rax
 * 00000001C000427D: jmp     loc_1C000413D
 * 00000001C0004282: mov     rax, [rbp+var_18]
 * 00000001C0004286: lea     ecx, [r14+1]
 * 00000001C000428A: mov     rdx, [rax+rcx*8]
 * 00000001C000428E: mov     rcx, rbx; void *
 * 00000001C0004291: shl     rdx, 0Ch
 * 00000001C0004295: mov     [rbx+1020h], rdx
 * 00000001C000429C: xor     edx, edx; Val
 * 00000001C000429E: call    memset
 * 00000001C00042A3: mov     rax, [rbx+1020h]
 * 00000001C00042AA: mov     [rbx], rax
 * 00000001C00042AD: jmp     loc_1C000413D
 * 00000001C0008738: mov     rbx, [rdx+38h]
 * 00000001C000873C: jmp     loc_1C0004005
 * 00000001C0008741: xor     r9d, r9d
 * 00000001C0008744: mov     [rbp+arg_10], r13d
 * 00000001C0008748: xor     r8d, r8d
 * 00000001C000874B: mov     [rsp+58h+var_38], r13
 * 00000001C0008750: lea     rdx, [rbp+arg_10]
 * 00000001C0008754: mov     rcx, rsi
 * 00000001C0008757: call    GetSrbScsiData
 * 00000001C000875C: mov     r12d, [rbp+arg_10]
 * 00000001C0008760: mov     rcx, rax
 * 00000001C0008763: mov     edx, r12d
 * 00000001C0008766: mov     r8, rax
 * 00000001C0008769: call    GetLbaFromCdb
 * 00000001C000876E: test    rax, rax
 * 00000001C0008771: jz      loc_1C00040C7
 * 00000001C0008777: movzx   ecx, byte ptr [rcx]
 * 00000001C000877A: cmp     cl, 28h ; '('
 * 00000001C000877D: jz      short loc_1C0008792
 * 00000001C000877F: cmp     cl, 2Ah ; '*'
 * 00000001C0008782: jz      short loc_1C0008792
 * 00000001C0008784: cmp     cl, 88h
 * 00000001C0008787: jz      short loc_1C0008792
 * 00000001C0008789: cmp     cl, 8Ah
 * 00000001C000878C: jnz     loc_1C00040C7
 * 00000001C0008792: mov     r10d, [r15+78h]
 * 00000001C0008796: add     [rbp+arg_8], r10d
 * 00000001C000879A: cmp     byte ptr [rsi+2], 28h ; '('
 * 00000001C000879E: jnz     short loc_1C00087AA
 * 00000001C00087A0: mov     eax, [rsi+34h]
 * 00000001C00087A3: movzx   ecx, byte ptr [rax+rsi+0Ah]
 * 00000001C00087A8: jmp     short loc_1C00087AE
 * 00000001C00087AA: movzx   ecx, byte ptr [rsi+7]
 * 00000001C00087AE: movzx   edx, cl
 * 00000001C00087B1: lea     r11, [r15+rdx*8]
 * 00000001C00087B5: mov     rax, [r11+6B8h]
 * 00000001C00087BC: mov     ecx, [rax+34h]
 * 00000001C00087BF: lea     eax, [r10-1]
 * 00000001C00087C3: add     eax, ecx
 * 00000001C00087C5: neg     ecx
 * 00000001C00087C7: and     eax, ecx
 * 00000001C00087C9: sub     [rdi+rsi], eax
 * 00000001C00087CC: cmp     edx, [r15+0C8h]
 * 00000001C00087D3: jnb     short loc_1C00087E5
 * 00000001C00087D5: mov     rax, [r11+6B8h]
 * 00000001C00087DC: test    rax, rax
 * 00000001C00087DF: jz      short loc_1C00087E5
 * 00000001C00087E1: mov     r9d, [rax+10h]
 * 00000001C00087E5: mov     dword ptr [rsp+58h+var_30], r9d
 * 00000001C00087EA: lea     rax, [rbx+1000h]
 * 00000001C00087F1: mov     r9d, r12d
 * 00000001C00087F4: mov     [rsp+58h+var_38], rax
 * 00000001C00087F9: mov     rdx, rsi
 * 00000001C00087FC: mov     rcx, r15
 * 00000001C00087FF: call    BuildReadWriteCommand
 * 00000001C0008804: nop
 * 00000001C0008805: jmp     loc_1C00040C7
 * 00000001C000880A: mov     r14d, r8d
 * 00000001C000880D: shr     r14d, 0Ch
 * 00000001C0008811: mov     eax, r14d
 * 00000001C0008814: shl     eax, 0Ch
 * 00000001C0008817: sub     r8d, eax
 * 00000001C000881A: mov     [rbp+arg_8], r8d
 * 00000001C000881E: jmp     loc_1C0004107
 * 00000001C0008823: mov     eax, 0C1000001h
 * 00000001C0008828: jmp     loc_1C000413F
 */
