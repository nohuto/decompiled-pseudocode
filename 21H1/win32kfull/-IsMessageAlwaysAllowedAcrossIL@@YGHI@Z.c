/*
 * XREFs of ?IsMessageAlwaysAllowedAcrossIL@@YGHI@Z @ 0x8015A
 * Callers:
 *     ?CheckProcessIdentity@@YGHPAUtagWND@@IIJ@Z @ 0x12752 (-CheckProcessIdentity@@YGHPAUtagWND@@IIJ@Z.c)
 *     ?xxxWrapRealDefWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0x3D2F0 (-xxxWrapRealDefWindowProc@@YGJPAUtagWND@@IIJK@Z.c)
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 *     _NtUserPostMessage@16 @ 0x6D25E (_NtUserPostMessage@16.c)
 *     __PostTransformableMessageIL@24 @ 0x7F87A (__PostTransformableMessageIL@24.c)
 *     __ChangeWindowMessageFilterEx@16 @ 0x7FD26 (__ChangeWindowMessageFilterEx@16.c)
 *     _NtUserPostThreadMessage@16 @ 0x82578 (_NtUserPostThreadMessage@16.c)
 *     __PostMessageCheckIL@20 @ 0x14EADF (__PostMessageCheckIL@20.c)
 * Callees:
 *     ?IsFmtBlocked@@YGHI@Z @ 0xF3F48 (-IsFmtBlocked@@YGHI@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?IsMessageAlwaysAllowedAcrossIL@@YGHI@Z @ 0x8015A
 * Reason: Hex-Rays returned no pseudocode for 0x8015A
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000008015A: mov     eax, 308h
 * 000000000008015F: xor     edx, edx
 * 0000000000080161: cmp     ecx, eax
 * 0000000000080163: jbe     short loc_80173
 * 0000000000080165: add     ecx, 0FFFFFCF7h; switch 23 cases
 * 000000000008016B: cmp     ecx, 16h
 * 000000000008016E: jbe     short loc_80191
 * 0000000000080170: mov     eax, edx; jumptable 00080198 default case, cases 783-786,788-793,796-798
 * 0000000000080172: retn
 * 0000000000080173: jz      short loc_8018C; jumptable 00080198 cases 781,787,794,795,799
 * 0000000000080175: cmp     ecx, 0Eh
 * 0000000000080178: jbe     short loc_8019F
 * 000000000008017A: cmp     ecx, 7Fh
 * 000000000008017D: jz      short loc_8018C; jumptable 00080198 cases 781,787,794,795,799
 * 000000000008017F: cmp     ecx, 33h ; '3'
 * 0000000000080182: jz      short loc_8018C; jumptable 00080198 cases 781,787,794,795,799
 * 0000000000080184: cmp     ecx, 305h
 * 000000000008018A: jnz     short def_80198; jumptable 00080198 default case, cases 783-786,788-793,796-798
 * 000000000008018C: xor     edx, edx; jumptable 00080198 cases 781,787,794,795,799
 * 000000000008018E: inc     edx
 * 000000000008018F: jmp     short def_80198; jumptable 00080198 default case, cases 783-786,788-793,796-798
 * 0000000000080191: movzx   eax, ds:byte_801C2[ecx]
 * 0000000000080198: jmp     ds:jpt_80198[eax*4]; switch jump
 * 000000000008019F: cmp     ecx, 0Dh
 * 00000000000801A2: jnb     short loc_8018C; jumptable 00080198 cases 781,787,794,795,799
 * 00000000000801A4: sub     ecx, edx
 * 00000000000801A6: jz      short loc_8018C; jumptable 00080198 cases 781,787,794,795,799
 * 00000000000801A8: sub     ecx, 3
 * 00000000000801AB: jz      short loc_8018C; jumptable 00080198 cases 781,787,794,795,799
 * 00000000000801AD: dec     ecx
 * 00000000000801AE: sub     ecx, 1
 * 00000000000801B1: jmp     short loc_8018A
 * 0000000000119F37: mov     ecx, 80h; jumptable 00080198 cases 777-780,782
 * 0000000000119F3C: call    ?IsFmtBlocked@@YGHI@Z; IsFmtBlocked(uint)
 * 0000000000119F41: mov     edx, eax
 * 0000000000119F43: neg     edx
 * 0000000000119F45: sbb     edx, edx
 * 0000000000119F47: inc     edx
 * 0000000000119F48: jmp     def_80198; jumptable 00080198 default case, cases 783-786,788-793,796-798
 */
