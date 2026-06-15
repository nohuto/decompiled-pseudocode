/*
 * XREFs of sub_18009D420 @ 0x18009D420
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180004A90 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180006EA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

/*
 * Hex-Rays decompilation failed for sub_18009D420 @ 0x18009D420
 * Reason: Hex-Rays returned no pseudocode for 0x18009D420
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018009D420: mov     ebx, dword ptr [rsp+arg_48]
 * 000000018009D424: xor     r14d, r14d
 * 000000018009D427: test    ebx, ebx
 * 000000018009D429: jns     short loc_18009D44D
 * 000000018009D42B: mov     rcx, [rsp+arg_C0]; this
 * 000000018009D433: mov     r9d, ebx; char *
 * 000000018009D436: lea     r8, aAvcoreAudiocor_7; "avcore\\audiocore\\server\\audiosrv\\dl"...
 * 000000018009D43D: mov     edx, 0DE6h; void *
 * 000000018009D442: call    ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z; wil::details::in1diag3::Return_Hr(void *,uint,char const *,long)
 * 000000018009D447: nop
 * 000000018009D448: jmp     loc_18009D37B
 * 000000018009D44D: mov     rsi, [rsp+arg_C8]
 * 000000018009D455: mov     r12, [rsp+arg_D0]
 * 000000018009D45D: mov     r15b, [rsp+arg_60]
 * 000000018009D462: mov     rbx, [rsp+arg_58]
 * 000000018009D467: mov     r13d, [rsp+arg_40]
 * 000000018009D46C: mov     [rsp+hKey], r14
 * 000000018009D471: lea     rax, [rsp+hKey]
 * 000000018009D476: mov     [rsp+phkResult], rax; int
 * 000000018009D47B: mov     r9d, 20019h; samDesired
 * 000000018009D481: xor     r8d, r8d; ulOptions
 * 000000018009D484: mov     rdi, [rsp+lpSubKey]
 * 000000018009D489: mov     rdx, rdi; lpSubKey
 * 000000018009D48C: mov     rcx, [rsi+40h]; hKey
 * 000000018009D490: call    cs:__imp_RegOpenKeyExW
 * 000000018009D497: nop     dword ptr [rax+rax+00h]
 * 000000018009D49C: mov     rcx, [rsp+hKey]; hKey
 * 000000018009D4A1: test    eax, eax
 * 000000018009D4A3: jnz     short loc_18009D4C8
 * 000000018009D4A5: test    rcx, rcx
 * 000000018009D4A8: jz      short loc_18009D4B7
 * 000000018009D4AA: call    cs:__imp_RegCloseKey
 * 000000018009D4B1: nop     dword ptr [rax+rax+00h]
 * 000000018009D4B6: nop
 * 000000018009D4B7: lea     rcx, [rdi-18h]; this
 * 000000018009D4BB: call    ?Release@CStringData@ATL@@QEAAXXZ; ATL::CStringData::Release(void)
 * 000000018009D4C0: inc     r13d
 * 000000018009D4C3: jmp     loc_18009D3EA
 * 000000018009D4C8: test    rcx, rcx
 * 000000018009D4CB: jz      short loc_18009D4DA
 * 000000018009D4CD: call    cs:__imp_RegCloseKey
 * 000000018009D4D4: nop     dword ptr [rax+rax+00h]
 * 000000018009D4D9: nop
 * 000000018009D4DA: mov     [rsp+arg_C8], r14
 * 000000018009D4E2: lea     r9, [rsp+arg_C8]; HKEY *
 * 000000018009D4EA: mov     r8d, 2001Fh; unsigned int
 * 000000018009D4F0: mov     rdx, rdi; unsigned __int16 *
 * 000000018009D4F3: mov     rcx, [rsi+40h]; HKEY
 * 000000018009D4F7: call    ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z; CreateLowRightsRegistryKey(HKEY__ *,ushort const *,ulong,HKEY__ * *)
 * 000000018009D4FC: mov     r13d, eax
 * 000000018009D4FF: test    eax, eax
 * 000000018009D501: jns     short loc_18009D567
 * 000000018009D503: mov     rcx, [rsp+arg_C0]; this
 * 000000018009D50B: mov     r9d, eax; char *
 * 000000018009D50E: lea     r8, aAvcoreAudiocor_7; "avcore\\audiocore\\server\\audiosrv\\dl"...
 * 000000018009D515: mov     edx, 0DF3h; void *
 * 000000018009D51A: call    ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z; wil::details::in1diag3::Return_Hr(void *,uint,char const *,long)
 * 000000018009D51F: nop
 * 000000018009D520: mov     rcx, [rsp+arg_C8]
 * 000000018009D528: test    rcx, rcx
 * 000000018009D52B: jnz     short loc_18009D532
 * 000000018009D52D: jmp     short loc_18009D53F
 * 000000018009D52F: mov     rcx, rsi; hKey
 * 000000018009D532: call    cs:__imp_RegCloseKey
 * 000000018009D539: nop     dword ptr [rax+rax+00h]
 * 000000018009D53E: nop
 * 000000018009D53F: lea     rcx, [rdi-18h]; this
 * 000000018009D543: call    ?Release@CStringData@ATL@@QEAAXXZ; ATL::CStringData::Release(void)
 * 000000018009D548: nop
 * 000000018009D549: test    r15b, r15b
 * 000000018009D54C: jz      short loc_18009D55F
 * 000000018009D54E: cmp     [rbx], r14d
 * 000000018009D551: jnz     short loc_18009D55F
 * 000000018009D553: call    cs:__imp_RpcRevertToSelf
 * 000000018009D55A: nop     dword ptr [rax+rax+00h]
 * 000000018009D55F: mov     eax, r13d
 * 000000018009D562: jmp     loc_18005269E
 * 000000018009D567: mov     rcx, [rsi+30h]
 * 000000018009D56B: or      rax, 0FFFFFFFFFFFFFFFFh
 * 000000018009D56F: inc     rax
 * 000000018009D572: cmp     [rcx+rax*2], r14w
 * 000000018009D577: jnz     short loc_18009D56F
 * 000000018009D579: lea     eax, ds:2[rax*2]
 * 000000018009D580: mov     [rsp+cbData], eax; cbData
 * 000000018009D584: mov     [rsp+phkResult], rcx; int
 * 000000018009D589: mov     r9d, 1; dwType
 * 000000018009D58F: xor     r8d, r8d; Reserved
 * 000000018009D592: xor     edx, edx; lpValueName
 * 000000018009D594: mov     rsi, [rsp+arg_C8]
 * 000000018009D59C: mov     rcx, rsi; hKey
 * 000000018009D59F: call    cs:__imp_RegSetValueExW
 * 000000018009D5A6: nop     dword ptr [rax+rax+00h]
 * 000000018009D5AB: mov     r13d, eax
 * 000000018009D5AE: test    eax, eax
 * 000000018009D5B0: jns     short loc_18009D5DD
 * 000000018009D5B2: mov     rcx, [rsp+arg_C0]; this
 * 000000018009D5BA: mov     r9d, eax; char *
 * 000000018009D5BD: lea     r8, aAvcoreAudiocor_7; "avcore\\audiocore\\server\\audiosrv\\dl"...
 * 000000018009D5C4: mov     edx, 0DF7h; void *
 * 000000018009D5C9: call    ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z; wil::details::in1diag3::Return_Hr(void *,uint,char const *,long)
 * 000000018009D5CE: nop
 * 000000018009D5CF: test    rsi, rsi
 * 000000018009D5D2: jz      loc_18009D53F
 * 000000018009D5D8: jmp     loc_18009D52F
 * 000000018009D5DD: mov     [r12], rsi
 * 000000018009D5E1: jmp     loc_18005267C
 */
