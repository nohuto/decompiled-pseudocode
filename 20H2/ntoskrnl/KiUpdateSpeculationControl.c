/*
 * XREFs of KiUpdateSpeculationControl @ 0x1402DF350
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1403C6E50 (KeOptimizeSpecCtrlSettings.c)
 *     SwapContext @ 0x1404041B0 (SwapContext.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiIsBranchConfusionMitigationEnabled @ 0x1403F1CA0 (KiIsBranchConfusionMitigationEnabled.c)
 *     KiSynchronizeStibpPairing @ 0x140519CB8 (KiSynchronizeStibpPairing.c)
 *     KiUpdateSpecCtrlEnhancedIBRS @ 0x140519EDC (KiUpdateSpecCtrlEnhancedIBRS.c)
 *     KiFlushCurrentRsb @ 0x140A1A740 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiUpdateSpeculationControl @ 0x1402DF350
 * Reason: Hex-Rays returned no pseudocode for 0x1402DF350
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402DF350: push    rbx
 * 00000001402DF352: push    r13
 * 00000001402DF354: sub     rsp, 68h
 * 00000001402DF358: movups  xmm0, cs:KiSpeculationFeatures
 * 00000001402DF35F: mov     rbx, gs:20h
 * 00000001402DF368: mov     r13, rcx
 * 00000001402DF36B: movups  [rsp+78h+var_48], xmm0
 * 00000001402DF370: mov     r10d, dword ptr [rsp+78h+var_48]
 * 00000001402DF375: bt      r10d, 14h
 * 00000001402DF37A: jnb     loc_1402DF9E2
 * 00000001402DF380: cli
 * 00000001402DF381: and     byte ptr [rbx+0F8h], 81h
 * 00000001402DF388: test    r10b, 1
 * 00000001402DF38C: jz      short loc_1402DF3A3
 * 00000001402DF38E: mov     rdx, rcx
 * 00000001402DF391: mov     rcx, rbx
 * 00000001402DF394: call    KiUpdateSpecCtrlEnhancedIBRS
 * 00000001402DF399: sti
 * 00000001402DF39A: add     rsp, 68h
 * 00000001402DF39E: pop     r13
 * 00000001402DF3A0: pop     rbx
 * 00000001402DF3A1: retn
 * 00000001402DF3A3: movzx   r9d, byte ptr [rbx+0FAh]
 * 00000001402DF3AB: xor     r11b, r11b
 * 00000001402DF3AE: mov     [rsp+78h+arg_0], rbp
 * 00000001402DF3B6: mov     [rsp+78h+var_18], rsi
 * 00000001402DF3BB: mov     [rsp+78h+var_20], rdi
 * 00000001402DF3C0: mov     [rsp+78h+var_28], r12
 * 00000001402DF3C5: mov     [rsp+78h+var_30], r14
 * 00000001402DF3CA: mov     r14d, r10d
 * 00000001402DF3CD: mov     [rsp+78h+var_38], r15
 * 00000001402DF3D2: mov     [rsp+78h+arg_8], r11b
 * 00000001402DF3DA: and     r14d, 2000000h
 * 00000001402DF3E1: jz      short loc_1402DF412
 * 00000001402DF3E3: movzx   eax, byte ptr [rbx+6D3h]
 * 00000001402DF3EA: test    al, 2
 * 00000001402DF3EC: jnz     short loc_1402DF412
 * 00000001402DF3EE: test    al, 1
 * 00000001402DF3F0: jz      short loc_1402DF412
 * 00000001402DF3F2: movzx   r11d, byte ptr [rbx+6D2h]
 * 00000001402DF3FA: movzx   r9d, byte ptr [rbx+6D1h]
 * 00000001402DF402: shr     r11b, 4
 * 00000001402DF406: and     r11b, 1
 * 00000001402DF40A: mov     [rsp+78h+arg_8], 1
 * 00000001402DF412: bt      r10d, 16h
 * 00000001402DF417: jnb     short loc_1402DF42A
 * 00000001402DF419: cmp     cs:KiSsbdMsr, 48h ; 'H'
 * 00000001402DF420: jnz     short loc_1402DF42A
 * 00000001402DF422: or      r9b, 4
 * 00000001402DF426: mov     al, 4
 * 00000001402DF428: jmp     short loc_1402DF42C
 * 00000001402DF42A: xor     al, al
 * 00000001402DF42C: mov     [rbx+0FBh], al
 * 00000001402DF432: mov     rdi, rbx
 * 00000001402DF435: mov     [rbx+0FDh], al
 * 00000001402DF43B: mov     r15, rbx
 * 00000001402DF43E: mov     [rbx+6D0h], al
 * 00000001402DF444: mov     rbp, rbx
 * 00000001402DF447: mov     eax, r10d
 * 00000001402DF44A: and     eax, 2000h
 * 00000001402DF44F: mov     [rsp+78h+arg_10], eax
 * 00000001402DF456: jz      short loc_1402DF466
 * 00000001402DF458: or      byte ptr [rbx+0FBh], 80h
 * 00000001402DF45F: or      byte ptr [rbx+6D0h], 80h
 * 00000001402DF466: and     r10d, 8000000h
 * 00000001402DF46D: jz      short loc_1402DF47D
 * 00000001402DF46F: or      byte ptr [rdi+0FBh], 2
 * 00000001402DF476: or      byte ptr [rbp+6D0h], 2
 * 00000001402DF47D: mov     rcx, [rbx+0F0h]
 * 00000001402DF484: mov     eax, 0
 * 00000001402DF489: mov     [rsp+78h+var_50], rcx
 * 00000001402DF48E: mov     ecx, [r13+87Ch]
 * 00000001402DF495: mov     edx, ecx
 * 00000001402DF497: mov     r12, [r13+9E0h]
 * 00000001402DF49E: and     edx, 400000h
 * 00000001402DF4A4: mov     r8d, dword ptr [rsp+78h+var_48]
 * 00000001402DF4A9: mov     esi, r8d
 * 00000001402DF4AC: setnz   al
 * 00000001402DF4AF: shr     ecx, 17h
 * 00000001402DF4B2: and     ecx, 1
 * 00000001402DF4B5: mov     [rsp+78h+arg_18], eax
 * 00000001402DF4BC: test    edx, edx
 * 00000001402DF4BE: mov     [rsp+78h+var_58], ecx
 * 00000001402DF4C2: mov     eax, 1
 * 00000001402DF4C7: cmovz   r12, rax
 * 00000001402DF4CB: and     esi, 200000h
 * 00000001402DF4D1: jnz     loc_1402DF6CC
 * 00000001402DF4D7: test    r12, r12
 * 00000001402DF4DA: jnz     loc_1402DF5D3
 * 00000001402DF4E0: test    r8b, 2
 * 00000001402DF4E4: jz      short loc_1402DF503
 * 00000001402DF4E6: test    r8b, 40h
 * 00000001402DF4EA: jz      loc_1402DF5AF
 * 00000001402DF4F0: or      byte ptr [rbp+6D0h], 2
 * 00000001402DF4F7: test    r14d, r14d
 * 00000001402DF4FA: jnz     short loc_1402DF503
 * 00000001402DF4FC: or      byte ptr [rdi+0FBh], 2
 * 00000001402DF503: and     byte ptr [rbx+6D1h], 0FBh
 * 00000001402DF50A: mov     eax, r8d
 * 00000001402DF50D: and     eax, 42h
 * 00000001402DF510: cmp     al, 42h ; 'B'
 * 00000001402DF512: jnz     short loc_1402DF545
 * 00000001402DF514: bt      r8d, 10h
 * 00000001402DF519: jb      short loc_1402DF528
 * 00000001402DF51B: test    dword ptr [r13+9D0h], 40000000h
 * 00000001402DF526: jz      short loc_1402DF545
 * 00000001402DF528: or      byte ptr [r15+0FDh], 2
 * 00000001402DF530: test    r14d, r14d
 * 00000001402DF533: jz      short loc_1402DF545
 * 00000001402DF535: cmp     r13, cs:PsInitialSystemProcess
 * 00000001402DF53C: jz      short loc_1402DF545
 * 00000001402DF53E: or      byte ptr [rdi+0FBh], 2
 * 00000001402DF545: test    r10d, r10d
 * 00000001402DF548: jz      short loc_1402DF552
 * 00000001402DF54A: or      byte ptr [r15+0FDh], 2
 * 00000001402DF552: bt      r8d, 17h
 * 00000001402DF557: jnb     short loc_1402DF56E
 * 00000001402DF559: test    dword ptr [r13+9D4h], 2000h
 * 00000001402DF564: jz      short loc_1402DF56E
 * 00000001402DF566: or      byte ptr [r15+0FDh], 4
 * 00000001402DF56E: mov     rax, [rsp+78h+var_50]
 * 00000001402DF573: test    rax, rax
 * 00000001402DF576: jz      loc_1402DF77D
 * 00000001402DF57C: cmp     rax, r12
 * 00000001402DF57F: jz      loc_1402DF77D
 * 00000001402DF585: cmp     rax, [r13+9E8h]
 * 00000001402DF58C: jz      loc_1402DF77D
 * 00000001402DF592: test    r9b, 1
 * 00000001402DF596: jz      loc_1402DF748
 * 00000001402DF59C: test    r8b, 2
 * 00000001402DF5A0: jnz     loc_1402DF6FE
 * 00000001402DF5A6: and     r9b, 4
 * 00000001402DF5AA: jmp     loc_1402DF720
 * 00000001402DF5AF: test    r8b, 10h
 * 00000001402DF5B3: jz      loc_1402DF503
 * 00000001402DF5B9: or      [rbp+6D0h], al
 * 00000001402DF5BF: test    r14d, r14d
 * 00000001402DF5C2: jnz     loc_1402DF503
 * 00000001402DF5C8: or      [rdi+0FBh], al
 * 00000001402DF5CE: jmp     loc_1402DF503
 * 00000001402DF5D3: lea     rcx, [rsp+78h+var_48]
 * 00000001402DF5D8: call    KiIsBranchConfusionMitigationEnabled
 * 00000001402DF5DD: test    eax, eax
 * 00000001402DF5DF: jz      short loc_1402DF64D
 * 00000001402DF5E1: movzx   eax, byte ptr [rbx+0F8h]
 * 00000001402DF5E8: or      al, 8
 * 00000001402DF5EA: mov     [rbx+0F8h], al
 * 00000001402DF5F0: test    r8b, 8
 * 00000001402DF5F4: jnz     short loc_1402DF5FE
 * 00000001402DF5F6: or      al, 2
 * 00000001402DF5F8: mov     [rbx+0F8h], al
 * 00000001402DF5FE: test    r8b, 2
 * 00000001402DF602: jz      loc_1402DF6CC
 * 00000001402DF608: test    r8b, 40h
 * 00000001402DF60C: jz      short loc_1402DF62A
 * 00000001402DF60E: or      byte ptr [rbp+6D0h], 2
 * 00000001402DF615: test    r14d, r14d
 * 00000001402DF618: jnz     loc_1402DF6CC
 * 00000001402DF61E: or      byte ptr [rdi+0FBh], 2
 * 00000001402DF625: jmp     loc_1402DF6CC
 * 00000001402DF62A: test    r8b, 10h
 * 00000001402DF62E: jz      loc_1402DF6CC
 * 00000001402DF634: or      byte ptr [rbp+6D0h], 1
 * 00000001402DF63B: test    r14d, r14d
 * 00000001402DF63E: jnz     loc_1402DF6CC
 * 00000001402DF644: or      byte ptr [rdi+0FBh], 1
 * 00000001402DF64B: jmp     short loc_1402DF6CC
 * 00000001402DF64D: test    r8b, 10h
 * 00000001402DF651: jz      short loc_1402DF675
 * 00000001402DF653: or      byte ptr [rbp+6D0h], 1
 * 00000001402DF65A: test    r14d, r14d
 * 00000001402DF65D: jnz     short loc_1402DF666
 * 00000001402DF65F: or      byte ptr [rdi+0FBh], 1
 * 00000001402DF666: test    r8b, 20h
 * 00000001402DF66A: jnz     short loc_1402DF6CC
 * 00000001402DF66C: or      byte ptr [rbx+0F8h], 2
 * 00000001402DF673: jmp     short loc_1402DF6CC
 * 00000001402DF675: mov     eax, r8d
 * 00000001402DF678: and     eax, 42h
 * 00000001402DF67B: cmp     al, 42h ; 'B'
 * 00000001402DF67D: jnz     short loc_1402DF692
 * 00000001402DF67F: or      byte ptr [rbp+6D0h], 2
 * 00000001402DF686: test    r14d, r14d
 * 00000001402DF689: jnz     short loc_1402DF692
 * 00000001402DF68B: or      byte ptr [rdi+0FBh], 2
 * 00000001402DF692: movzx   eax, byte ptr [rbx+0F8h]
 * 00000001402DF699: test    r14d, r14d
 * 00000001402DF69C: jz      short loc_1402DF6B6
 * 00000001402DF69E: or      al, 10h
 * 00000001402DF6A0: mov     [rbx+0F8h], al
 * 00000001402DF6A6: test    r8b, 20h
 * 00000001402DF6AA: jz      short loc_1402DF6C4
 * 00000001402DF6AC: test    r8b, 8
 * 00000001402DF6B0: jnz     short loc_1402DF6CC
 * 00000001402DF6B2: or      al, 40h
 * 00000001402DF6B4: jmp     short loc_1402DF6C6
 * 00000001402DF6B6: or      al, 8
 * 00000001402DF6B8: mov     [rbx+0F8h], al
 * 00000001402DF6BE: test    r8b, 8
 * 00000001402DF6C2: jnz     short loc_1402DF6CC
 * 00000001402DF6C4: or      al, 2
 * 00000001402DF6C6: mov     [rbx+0F8h], al
 * 00000001402DF6CC: test    r12, r12
 * 00000001402DF6CF: jz      loc_1402DF503
 * 00000001402DF6D5: bt      r8d, 17h
 * 00000001402DF6DA: jnb     loc_1402DF503
 * 00000001402DF6E0: or      byte ptr [rbp+6D0h], 4
 * 00000001402DF6E7: or      byte ptr [rbx+6D1h], 4
 * 00000001402DF6EE: or      byte ptr [rdi+0FBh], 4
 * 00000001402DF6F5: or      r9b, 4
 * 00000001402DF6F9: jmp     loc_1402DF50A
 * 00000001402DF6FE: movzx   eax, word ptr [rbx+0FEh]
 * 00000001402DF705: test    al, 4
 * 00000001402DF707: jnz     short loc_1402DF71B
 * 00000001402DF709: test    r14d, r14d
 * 00000001402DF70C: jz      short loc_1402DF733
 * 00000001402DF70E: test    byte ptr [rbx+6D3h], 1
 * 00000001402DF715: jnz     short loc_1402DF733
 * 00000001402DF717: and     r9b, 4
 * 00000001402DF71B: mov     r8d, dword ptr [rsp+78h+var_48]
 * 00000001402DF720: test    r9b, 1
 * 00000001402DF724: jnz     short loc_1402DF760
 * 00000001402DF726: mov     r11b, 1
 * 00000001402DF729: mov     [rsp+78h+arg_8], r11b
 * 00000001402DF731: jmp     short loc_1402DF77D
 * 00000001402DF733: mov     r8d, dword ptr [rsp+78h+var_48]
 * 00000001402DF738: test    r8b, 40h
 * 00000001402DF73C: jz      short loc_1402DF720
 * 00000001402DF73E: and     r9b, 4
 * 00000001402DF742: or      r9b, 2
 * 00000001402DF746: jmp     short loc_1402DF720
 * 00000001402DF748: test    esi, esi
 * 00000001402DF74A: jnz     short loc_1402DF760
 * 00000001402DF74C: test    r8b, 10h
 * 00000001402DF750: jnz     short loc_1402DF760
 * 00000001402DF752: test    r14d, r14d
 * 00000001402DF755: jz      short loc_1402DF77D
 * 00000001402DF757: test    byte ptr [rbx+6D3h], 2
 * 00000001402DF75E: jnz     short loc_1402DF77D
 * 00000001402DF760: movzx   eax, byte ptr [rbx+0F8h]
 * 00000001402DF767: or      al, 4
 * 00000001402DF769: mov     [rbx+0F8h], al
 * 00000001402DF76F: test    r8b, 8
 * 00000001402DF773: jnz     short loc_1402DF77D
 * 00000001402DF775: or      al, 20h
 * 00000001402DF777: mov     [rbx+0F8h], al
 * 00000001402DF77D: movzx   edx, r9b
 * 00000001402DF781: movzx   eax, dl
 * 00000001402DF784: or      al, 80h
 * 00000001402DF786: cmp     [rsp+78h+arg_10], 0
 * 00000001402DF78E: movzx   ecx, al
 * 00000001402DF791: cmovz   ecx, edx
 * 00000001402DF794: movzx   edx, cl
 * 00000001402DF797: movzx   eax, dl
 * 00000001402DF79A: or      al, 2
 * 00000001402DF79C: test    r10d, r10d
 * 00000001402DF79F: movzx   esi, al
 * 00000001402DF7A2: cmovz   esi, edx
 * 00000001402DF7A5: test    r11b, r11b
 * 00000001402DF7A8: jz      short loc_1402DF7E3
 * 00000001402DF7AA: mov     eax, 1
 * 00000001402DF7AF: xor     edx, edx
 * 00000001402DF7B1: mov     ecx, 49h ; 'I'
 * 00000001402DF7B6: wrmsr
 * 00000001402DF7B8: test    r8b, 8
 * 00000001402DF7BC: jnz     short loc_1402DF7C3
 * 00000001402DF7BE: call    KiFlushCurrentRsb
 * 00000001402DF7C3: and     byte ptr [rbx+0F8h], 0DBh
 * 00000001402DF7CA: and     byte ptr [rbx+6D2h], 0AFh
 * 00000001402DF7D1: mov     qword ptr [rbx+0F0h], 0
 * 00000001402DF7DC: mov     [rbx+6D1h], sil
 * 00000001402DF7E3: movzx   eax, word ptr [rbx+0FEh]
 * 00000001402DF7EA: movzx   edx, sil
 * 00000001402DF7EE: test    al, 4
 * 00000001402DF7F0: jz      loc_1402DF97A
 * 00000001402DF7F6: mov     r8d, 2
 * 00000001402DF7FC: mov     rax, [rbx+2DB0h]
 * 00000001402DF803: cmp     [rsp+78h+var_50], r12
 * 00000001402DF808: jz      short loc_1402DF815
 * 00000001402DF80A: lock or [rbx+0FEh], r8w
 * 00000001402DF813: jmp     short loc_1402DF856
 * 00000001402DF815: movzx   eax, word ptr [rax+0FEh]
 * 00000001402DF81C: movzx   ecx, byte ptr [r15+0FDh]
 * 00000001402DF824: test    al, 1
 * 00000001402DF826: jnz     short loc_1402DF840
 * 00000001402DF828: or      cl, r8b
 * 00000001402DF82B: mov     [r15+0FDh], cl
 * 00000001402DF832: test    r14d, r14d
 * 00000001402DF835: jz      short loc_1402DF856
 * 00000001402DF837: or      [rdi+0FBh], r8b
 * 00000001402DF83E: jmp     short loc_1402DF856
 * 00000001402DF840: and     cl, 0FDh
 * 00000001402DF843: mov     [r15+0FDh], cl
 * 00000001402DF84A: test    r14d, r14d
 * 00000001402DF84D: jz      short loc_1402DF856
 * 00000001402DF84F: and     byte ptr [rdi+0FBh], 0FDh
 * 00000001402DF856: test    r12, r12
 * 00000001402DF859: jnz     short loc_1402DF8D3
 * 00000001402DF85B: mov     rcx, r13
 * 00000001402DF85E: call    KiUpdateStibpPairing
 * 00000001402DF863: movzx   ecx, byte ptr [rbx+6D1h]
 * 00000001402DF86A: movzx   edx, sil
 * 00000001402DF86E: movzx   r8d, byte ptr [rbp+6D0h]
 * 00000001402DF876: and     cl, 0FCh
 * 00000001402DF879: and     r8b, 3
 * 00000001402DF87D: and     dl, 0FCh
 * 00000001402DF880: or      cl, r8b
 * 00000001402DF883: mov     r9d, eax
 * 00000001402DF886: mov     [rbx+6D1h], cl
 * 00000001402DF88C: test    r14d, r14d
 * 00000001402DF88F: jz      short loc_1402DF89F
 * 00000001402DF891: test    byte ptr [rbx+6D3h], 1
 * 00000001402DF898: jz      short loc_1402DF89F
 * 00000001402DF89A: neg     r8b
 * 00000001402DF89D: jmp     short loc_1402DF8AA
 * 00000001402DF89F: movzx   eax, byte ptr [rdi+0FBh]
 * 00000001402DF8A6: and     al, 3
 * 00000001402DF8A8: neg     al
 * 00000001402DF8AA: sbb     al, al
 * 00000001402DF8AC: mov     r8b, 1
 * 00000001402DF8AF: and     al, 2
 * 00000001402DF8B1: or      dl, al
 * 00000001402DF8B3: cmp     [rsp+78h+arg_18], 0
 * 00000001402DF8BB: jnz     loc_1402DF986
 * 00000001402DF8C1: mov     eax, 2
 * 00000001402DF8C6: lock or [rbx+0FEh], ax
 * 00000001402DF8CE: jmp     loc_1402DF986
 * 00000001402DF8D3: cmp     [rsp+78h+var_58], 0
 * 00000001402DF8D8: jz      loc_1402DF97A
 * 00000001402DF8DE: mov     edx, 100h
 * 00000001402DF8E3: prefetchw byte ptr [rbx+0FEh]
 * 00000001402DF8EA: movzx   eax, word ptr [rbx+0FEh]
 * 00000001402DF8F1: movzx   ecx, ax
 * 00000001402DF8F4: or      cx, dx
 * 00000001402DF8F7: lock cmpxchg [rbx+0FEh], cx
 * 00000001402DF900: jnz     short loc_1402DF8F1
 * 00000001402DF902: movzx   ecx, ax
 * 00000001402DF905: mov     eax, dword ptr cs:KiSpeculationFeatures
 * 00000001402DF90B: and     ecx, 1
 * 00000001402DF90E: bt      eax, 19h
 * 00000001402DF912: jnb     short loc_1402DF94B
 * 00000001402DF914: movzx   eax, byte ptr [rbp+6D0h]
 * 00000001402DF91B: test    al, 3
 * 00000001402DF91D: jnz     short loc_1402DF928
 * 00000001402DF91F: or      al, r8b
 * 00000001402DF922: mov     [rbp+6D0h], al
 * 00000001402DF928: movzx   eax, byte ptr [rbx+6D1h]
 * 00000001402DF92F: test    al, 3
 * 00000001402DF931: jnz     short loc_1402DF93C
 * 00000001402DF933: or      al, r8b
 * 00000001402DF936: mov     [rbx+6D1h], al
 * 00000001402DF93C: test    byte ptr [rbx+6D3h], 1
 * 00000001402DF943: movzx   edx, sil
 * 00000001402DF947: jz      short loc_1402DF96C
 * 00000001402DF949: jmp     short loc_1402DF963
 * 00000001402DF94B: movzx   eax, byte ptr [rdi+0FBh]
 * 00000001402DF952: test    al, 3
 * 00000001402DF954: jnz     short loc_1402DF95F
 * 00000001402DF956: or      al, r8b
 * 00000001402DF959: mov     [rdi+0FBh], al
 * 00000001402DF95F: movzx   edx, sil
 * 00000001402DF963: test    sil, 3
 * 00000001402DF967: jnz     short loc_1402DF96C
 * 00000001402DF969: or      dl, r8b
 * 00000001402DF96C: lock or [rbx+0FEh], r8w
 * 00000001402DF975: mov     r9d, ecx
 * 00000001402DF978: jmp     short loc_1402DF97D
 * 00000001402DF97A: xor     r9d, r9d
 * 00000001402DF97D: movzx   r8d, [rsp+78h+arg_8]
 * 00000001402DF986: mov     r15, [rsp+78h+var_38]
 * 00000001402DF98B: mov     r14, [rsp+78h+var_30]
 * 00000001402DF990: mov     r12, [rsp+78h+var_28]
 * 00000001402DF995: mov     rdi, [rsp+78h+var_20]
 * 00000001402DF99A: mov     rsi, [rsp+78h+var_18]
 * 00000001402DF99F: mov     rbp, [rsp+78h+arg_0]
 * 00000001402DF9A7: cmp     dl, [rbx+0FAh]
 * 00000001402DF9AD: jz      short loc_1402DF9C5
 * 00000001402DF9AF: mov     [rbx+0FAh], dl
 * 00000001402DF9B5: mov     ecx, 48h ; 'H'
 * 00000001402DF9BA: movzx   edx, dl
 * 00000001402DF9BD: mov     eax, edx
 * 00000001402DF9BF: shr     rdx, 20h
 * 00000001402DF9C3: wrmsr
 * 00000001402DF9C5: test    r8b, r8b
 * 00000001402DF9C8: jz      short loc_1402DF9D1
 * 00000001402DF9CA: or      byte ptr [rbx+6D3h], 2
 * 00000001402DF9D1: lfence
 * 00000001402DF9D4: sti
 * 00000001402DF9D5: test    r9d, r9d
 * 00000001402DF9D8: jz      short loc_1402DF9E2
 * 00000001402DF9DA: mov     rcx, rbx
 * 00000001402DF9DD: call    KiSynchronizeStibpPairing
 * 00000001402DF9E2: add     rsp, 68h
 * 00000001402DF9E6: pop     r13
 * 00000001402DF9E8: pop     rbx
 * 00000001402DF9E9: retn
 */
