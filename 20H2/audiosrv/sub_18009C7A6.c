/*
 * XREFs of sub_18009C7A6 @ 0x18009C7A6
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x1800045F0 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180006A00 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

/*
 * Hex-Rays decompilation failed for sub_18009C7A6 @ 0x18009C7A6
 * Reason: Hex-Rays returned no pseudocode for 0x18009C7A6
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018009C7A6: mov     ebx, dword ptr [rsp+arg_48]
 * 000000018009C7AA: xor     r14d, r14d
 * 000000018009C7AD: test    ebx, ebx
 * 000000018009C7AF: jns     short loc_18009C7D3
 * 000000018009C7B1: mov     rcx, [rsp+arg_C0]; this
 * 000000018009C7B9: mov     r9d, ebx; char *
 * 000000018009C7BC: lea     r8, aAvcoreAudiocor_7; "avcore\\audiocore\\server\\audiosrv\\dl"...
 * 000000018009C7C3: mov     edx, 0DE6h; void *
 * 000000018009C7C8: call    ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z; wil::details::in1diag3::Return_Hr(void *,uint,char const *,long)
 * 000000018009C7CD: nop
 * 000000018009C7CE: jmp     loc_18009C701
 * 000000018009C7D3: mov     rsi, [rsp+arg_C8]
 * 000000018009C7DB: mov     r12, [rsp+arg_D0]
 * 000000018009C7E3: mov     r15b, [rsp+arg_60]
 * 000000018009C7E8: mov     rbx, [rsp+arg_58]
 * 000000018009C7ED: mov     r13d, [rsp+arg_40]
 * 000000018009C7F2: mov     [rsp+hKey], r14
 * 000000018009C7F7: lea     rax, [rsp+hKey]
 * 000000018009C7FC: mov     [rsp+phkResult], rax; int
 * 000000018009C801: mov     r9d, 20019h; samDesired
 * 000000018009C807: xor     r8d, r8d; ulOptions
 * 000000018009C80A: mov     rdi, [rsp+lpSubKey]
 * 000000018009C80F: mov     rdx, rdi; lpSubKey
 * 000000018009C812: mov     rcx, [rsi+40h]; hKey
 * 000000018009C816: call    cs:__imp_RegOpenKeyExW
 * 000000018009C81D: nop     dword ptr [rax+rax+00h]
 * 000000018009C822: mov     rcx, [rsp+hKey]; hKey
 * 000000018009C827: test    eax, eax
 * 000000018009C829: jnz     short loc_18009C84E
 * 000000018009C82B: test    rcx, rcx
 * 000000018009C82E: jz      short loc_18009C83D
 * 000000018009C830: call    cs:__imp_RegCloseKey
 * 000000018009C837: nop     dword ptr [rax+rax+00h]
 * 000000018009C83C: nop
 * 000000018009C83D: lea     rcx, [rdi-18h]; this
 * 000000018009C841: call    ?Release@CStringData@ATL@@QEAAXXZ; ATL::CStringData::Release(void)
 * 000000018009C846: inc     r13d
 * 000000018009C849: jmp     loc_18009C770
 * 000000018009C84E: test    rcx, rcx
 * 000000018009C851: jz      short loc_18009C860
 * 000000018009C853: call    cs:__imp_RegCloseKey
 * 000000018009C85A: nop     dword ptr [rax+rax+00h]
 * 000000018009C85F: nop
 * 000000018009C860: mov     [rsp+arg_C8], r14
 * 000000018009C868: lea     r9, [rsp+arg_C8]; HKEY *
 * 000000018009C870: mov     r8d, 2001Fh; unsigned int
 * 000000018009C876: mov     rdx, rdi; unsigned __int16 *
 * 000000018009C879: mov     rcx, [rsi+40h]; HKEY
 * 000000018009C87D: call    ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z; CreateLowRightsRegistryKey(HKEY__ *,ushort const *,ulong,HKEY__ * *)
 * 000000018009C882: mov     r13d, eax
 * 000000018009C885: test    eax, eax
 * 000000018009C887: jns     short loc_18009C8ED
 * 000000018009C889: mov     rcx, [rsp+arg_C0]; this
 * 000000018009C891: mov     r9d, eax; char *
 * 000000018009C894: lea     r8, aAvcoreAudiocor_7; "avcore\\audiocore\\server\\audiosrv\\dl"...
 * 000000018009C89B: mov     edx, 0DF3h; void *
 * 000000018009C8A0: call    ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z; wil::details::in1diag3::Return_Hr(void *,uint,char const *,long)
 * 000000018009C8A5: nop
 * 000000018009C8A6: mov     rcx, [rsp+arg_C8]
 * 000000018009C8AE: test    rcx, rcx
 * 000000018009C8B1: jnz     short loc_18009C8B8
 * 000000018009C8B3: jmp     short loc_18009C8C5
 * 000000018009C8B5: mov     rcx, rsi; hKey
 * 000000018009C8B8: call    cs:__imp_RegCloseKey
 * 000000018009C8BF: nop     dword ptr [rax+rax+00h]
 * 000000018009C8C4: nop
 * 000000018009C8C5: lea     rcx, [rdi-18h]; this
 * 000000018009C8C9: call    ?Release@CStringData@ATL@@QEAAXXZ; ATL::CStringData::Release(void)
 * 000000018009C8CE: nop
 * 000000018009C8CF: test    r15b, r15b
 * 000000018009C8D2: jz      short loc_18009C8E5
 * 000000018009C8D4: cmp     [rbx], r14d
 * 000000018009C8D7: jnz     short loc_18009C8E5
 * 000000018009C8D9: call    cs:__imp_RpcRevertToSelf
 * 000000018009C8E0: nop     dword ptr [rax+rax+00h]
 * 000000018009C8E5: mov     eax, r13d
 * 000000018009C8E8: jmp     loc_180051EFE
 * 000000018009C8ED: mov     rcx, [rsi+30h]
 * 000000018009C8F1: or      rax, 0FFFFFFFFFFFFFFFFh
 * 000000018009C8F5: inc     rax
 * 000000018009C8F8: cmp     [rcx+rax*2], r14w
 * 000000018009C8FD: jnz     short loc_18009C8F5
 * 000000018009C8FF: lea     eax, ds:2[rax*2]
 * 000000018009C906: mov     [rsp+cbData], eax; cbData
 * 000000018009C90A: mov     [rsp+phkResult], rcx; int
 * 000000018009C90F: mov     r9d, 1; dwType
 * 000000018009C915: xor     r8d, r8d; Reserved
 * 000000018009C918: xor     edx, edx; lpValueName
 * 000000018009C91A: mov     rsi, [rsp+arg_C8]
 * 000000018009C922: mov     rcx, rsi; hKey
 * 000000018009C925: call    cs:__imp_RegSetValueExW
 * 000000018009C92C: nop     dword ptr [rax+rax+00h]
 * 000000018009C931: mov     r13d, eax
 * 000000018009C934: test    eax, eax
 * 000000018009C936: jns     short loc_18009C963
 * 000000018009C938: mov     rcx, [rsp+arg_C0]; this
 * 000000018009C940: mov     r9d, eax; char *
 * 000000018009C943: lea     r8, aAvcoreAudiocor_7; "avcore\\audiocore\\server\\audiosrv\\dl"...
 * 000000018009C94A: mov     edx, 0DF7h; void *
 * 000000018009C94F: call    ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z; wil::details::in1diag3::Return_Hr(void *,uint,char const *,long)
 * 000000018009C954: nop
 * 000000018009C955: test    rsi, rsi
 * 000000018009C958: jz      loc_18009C8C5
 * 000000018009C95E: jmp     loc_18009C8B5
 * 000000018009C963: mov     [r12], rsi
 * 000000018009C967: jmp     loc_180051EDC
 */
