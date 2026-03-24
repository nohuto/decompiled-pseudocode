/*
 * XREFs of NVMeSetNonOperationalPowerStatePermissiveModeCompletion @ 0x1C001ACB0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeSetNonOperationalPowerStatePermissiveModeCompletion @ 0x1C001ACB0
 * Reason: Hex-Rays returned no pseudocode for 0x1C001ACB0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001ACB0: push    rbx
 * 00000001C001ACB2: sub     rsp, 70h
 * 00000001C001ACB6: mov     r10, rcx
 * 00000001C001ACB9: mov     rcx, rdx
 * 00000001C001ACBC: call    GetSrbExtension
 * 00000001C001ACC1: xor     r9d, r9d
 * 00000001C001ACC4: mov     rbx, rax
 * 00000001C001ACC7: test    r8, r8
 * 00000001C001ACCA: jz      loc_1C001AD54
 * 00000001C001ACD0: mov     r8b, [rdx+3]
 * 00000001C001ACD4: cmp     r8b, 0Eh
 * 00000001C001ACD8: jz      short loc_1C001AD54
 * 00000001C001ACDA: mov     edx, [rax+102Ch]
 * 00000001C001ACE0: mov     ecx, r9d
 * 00000001C001ACE3: and     edx, 1
 * 00000001C001ACE6: lea     rax, aEnabled; "Enabled"
 * 00000001C001ACED: mov     [rsp+78h+var_10], rdx
 * 00000001C001ACF2: cmp     r8b, 1
 * 00000001C001ACF6: mov     [rsp+78h+var_18], rax
 * 00000001C001ACFB: mov     rdx, r10
 * 00000001C001ACFE: setz    cl
 * 00000001C001AD01: lea     rax, aSuccess; "Success"
 * 00000001C001AD08: mov     [rsp+78h+var_20], rcx
 * 00000001C001AD0D: xor     r8d, r8d
 * 00000001C001AD10: mov     [rsp+78h+var_28], rax
 * 00000001C001AD15: lea     ecx, [r9+55h]
 * 00000001C001AD19: mov     [rsp+78h+var_30], r9
 * 00000001C001AD1E: lea     eax, [r9+4]
 * 00000001C001AD22: mov     [rsp+78h+var_38], r9d
 * 00000001C001AD27: mov     [rsp+78h+var_40], eax
 * 00000001C001AD2B: mov     [rsp+78h+var_48], rax
 * 00000001C001AD30: lea     rax, aSetNoppmeSetti; "Set NOPPME setting"
 * 00000001C001AD37: mov     [rsp+78h+var_50], rax
 * 00000001C001AD3C: mov     [rsp+78h+var_58], r9d
 * 00000001C001AD41: call    cs:__imp_StorPortExtendedFunction
 * 00000001C001AD48: nop     dword ptr [rax+rax+00h]
 * 00000001C001AD4D: or      byte ptr [rbx+109Dh], 8
 * 00000001C001AD54: add     rsp, 70h
 * 00000001C001AD58: pop     rbx
 * 00000001C001AD59: retn
 */
