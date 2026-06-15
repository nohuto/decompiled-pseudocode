/*
 * XREFs of sub_18009D320 @ 0x18009D320
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180004A90 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180006EA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

/*
 * Hex-Rays decompilation failed for sub_18009D320 @ 0x18009D320
 * Reason: Hex-Rays returned no pseudocode for 0x18009D320
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018009D320: mov     ebx, dword ptr [rsp+arg_48]
 * 000000018009D324: xor     r14d, r14d
 * 000000018009D327: test    ebx, ebx
 * 000000018009D329: jns     short loc_18009D34D
 * 000000018009D32B: mov     rcx, [rsp+arg_C0]; this
 * 000000018009D333: mov     r9d, ebx; char *
 * 000000018009D336: lea     r8, aAvcoreAudiocor_7; "avcore\\audiocore\\server\\audiosrv\\dl"...
 * 000000018009D33D: mov     edx, 0DE6h; void *
 * 000000018009D342: call    ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z; wil::details::in1diag3::Return_Hr(void *,uint,char const *,long)
 * 000000018009D347: nop
 * 000000018009D348: jmp     loc_18009D27B
 * 000000018009D34D: mov     rsi, [rsp+arg_C8]
 * 000000018009D355: mov     r12, [rsp+arg_D0]
 * 000000018009D35D: mov     r15b, [rsp+arg_60]
 * 000000018009D362: mov     rbx, [rsp+arg_58]
 * 000000018009D367: mov     r13d, [rsp+arg_40]
 * 000000018009D36C: mov     [rsp+hKey], r14
 * 000000018009D371: lea     rax, [rsp+hKey]
 * 000000018009D376: mov     [rsp+phkResult], rax; int
 * 000000018009D37B: mov     r9d, 20019h; samDesired
 * 000000018009D381: xor     r8d, r8d; ulOptions
 * 000000018009D384: mov     rdi, [rsp+lpSubKey]
 * 000000018009D389: mov     rdx, rdi; lpSubKey
 * 000000018009D38C: mov     rcx, [rsi+40h]; hKey
 * 000000018009D390: call    cs:__imp_RegOpenKeyExW
 * 000000018009D397: nop     dword ptr [rax+rax+00h]
 * 000000018009D39C: mov     rcx, [rsp+hKey]; hKey
 * 000000018009D3A1: test    eax, eax
 * 000000018009D3A3: jnz     short loc_18009D3C8
 * 000000018009D3A5: test    rcx, rcx
 * 000000018009D3A8: jz      short loc_18009D3B7
 * 000000018009D3AA: call    cs:__imp_RegCloseKey
 * 000000018009D3B1: nop     dword ptr [rax+rax+00h]
 * 000000018009D3B6: nop
 * 000000018009D3B7: lea     rcx, [rdi-18h]; this
 * 000000018009D3BB: call    ?Release@CStringData@ATL@@QEAAXXZ; ATL::CStringData::Release(void)
 * 000000018009D3C0: inc     r13d
 * 000000018009D3C3: jmp     loc_18009D2EA
 * 000000018009D3C8: test    rcx, rcx
 * 000000018009D3CB: jz      short loc_18009D3DA
 * 000000018009D3CD: call    cs:__imp_RegCloseKey
 * 000000018009D3D4: nop     dword ptr [rax+rax+00h]
 * 000000018009D3D9: nop
 * 000000018009D3DA: mov     [rsp+arg_C8], r14
 * 000000018009D3E2: lea     r9, [rsp+arg_C8]; HKEY *
 * 000000018009D3EA: mov     r8d, 2001Fh; unsigned int
 * 000000018009D3F0: mov     rdx, rdi; unsigned __int16 *
 * 000000018009D3F3: mov     rcx, [rsi+40h]; HKEY
 * 000000018009D3F7: call    ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z; CreateLowRightsRegistryKey(HKEY__ *,ushort const *,ulong,HKEY__ * *)
 * 000000018009D3FC: mov     r13d, eax
 * 000000018009D3FF: test    eax, eax
 * 000000018009D401: jns     short loc_18009D467
 * 000000018009D403: mov     rcx, [rsp+arg_C0]; this
 * 000000018009D40B: mov     r9d, eax; char *
 * 000000018009D40E: lea     r8, aAvcoreAudiocor_7; "avcore\\audiocore\\server\\audiosrv\\dl"...
 * 000000018009D415: mov     edx, 0DF3h; void *
 * 000000018009D41A: call    ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z; wil::details::in1diag3::Return_Hr(void *,uint,char const *,long)
 * 000000018009D41F: nop
 * 000000018009D420: mov     rcx, [rsp+arg_C8]
 * 000000018009D428: test    rcx, rcx
 * 000000018009D42B: jnz     short loc_18009D432
 * 000000018009D42D: jmp     short loc_18009D43F
 * 000000018009D42F: mov     rcx, rsi; hKey
 * 000000018009D432: call    cs:__imp_RegCloseKey
 * 000000018009D439: nop     dword ptr [rax+rax+00h]
 * 000000018009D43E: nop
 * 000000018009D43F: lea     rcx, [rdi-18h]; this
 * 000000018009D443: call    ?Release@CStringData@ATL@@QEAAXXZ; ATL::CStringData::Release(void)
 * 000000018009D448: nop
 * 000000018009D449: test    r15b, r15b
 * 000000018009D44C: jz      short loc_18009D45F
 * 000000018009D44E: cmp     [rbx], r14d
 * 000000018009D451: jnz     short loc_18009D45F
 * 000000018009D453: call    cs:__imp_RpcRevertToSelf
 * 000000018009D45A: nop     dword ptr [rax+rax+00h]
 * 000000018009D45F: mov     eax, r13d
 * 000000018009D462: jmp     loc_18005259E
 * 000000018009D467: mov     rcx, [rsi+30h]
 * 000000018009D46B: or      rax, 0FFFFFFFFFFFFFFFFh
 * 000000018009D46F: inc     rax
 * 000000018009D472: cmp     [rcx+rax*2], r14w
 * 000000018009D477: jnz     short loc_18009D46F
 * 000000018009D479: lea     eax, ds:2[rax*2]
 * 000000018009D480: mov     [rsp+cbData], eax; cbData
 * 000000018009D484: mov     [rsp+phkResult], rcx; int
 * 000000018009D489: mov     r9d, 1; dwType
 * 000000018009D48F: xor     r8d, r8d; Reserved
 * 000000018009D492: xor     edx, edx; lpValueName
 * 000000018009D494: mov     rsi, [rsp+arg_C8]
 * 000000018009D49C: mov     rcx, rsi; hKey
 * 000000018009D49F: call    cs:__imp_RegSetValueExW
 * 000000018009D4A6: nop     dword ptr [rax+rax+00h]
 * 000000018009D4AB: mov     r13d, eax
 * 000000018009D4AE: test    eax, eax
 * 000000018009D4B0: jns     short loc_18009D4DD
 * 000000018009D4B2: mov     rcx, [rsp+arg_C0]; this
 * 000000018009D4BA: mov     r9d, eax; char *
 * 000000018009D4BD: lea     r8, aAvcoreAudiocor_7; "avcore\\audiocore\\server\\audiosrv\\dl"...
 * 000000018009D4C4: mov     edx, 0DF7h; void *
 * 000000018009D4C9: call    ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z; wil::details::in1diag3::Return_Hr(void *,uint,char const *,long)
 * 000000018009D4CE: nop
 * 000000018009D4CF: test    rsi, rsi
 * 000000018009D4D2: jz      loc_18009D43F
 * 000000018009D4D8: jmp     loc_18009D42F
 * 000000018009D4DD: mov     [r12], rsi
 * 000000018009D4E1: jmp     loc_18005257C
 */
