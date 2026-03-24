/*
 * XREFs of NVMeSetNonOperationalPowerStatePermissiveModeCompletion @ 0x1C001AD80
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeSetNonOperationalPowerStatePermissiveModeCompletion @ 0x1C001AD80
 * Reason: Hex-Rays returned no pseudocode for 0x1C001AD80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001AD80: push    rbx
 * 00000001C001AD82: sub     rsp, 70h
 * 00000001C001AD86: mov     r10, rcx
 * 00000001C001AD89: mov     rcx, rdx
 * 00000001C001AD8C: call    GetSrbExtension
 * 00000001C001AD91: xor     r9d, r9d
 * 00000001C001AD94: mov     rbx, rax
 * 00000001C001AD97: test    r8, r8
 * 00000001C001AD9A: jz      loc_1C001AE24
 * 00000001C001ADA0: mov     r8b, [rdx+3]
 * 00000001C001ADA4: cmp     r8b, 0Eh
 * 00000001C001ADA8: jz      short loc_1C001AE24
 * 00000001C001ADAA: mov     edx, [rax+102Ch]
 * 00000001C001ADB0: mov     ecx, r9d
 * 00000001C001ADB3: and     edx, 1
 * 00000001C001ADB6: lea     rax, aEnabled; "Enabled"
 * 00000001C001ADBD: mov     [rsp+78h+var_10], rdx
 * 00000001C001ADC2: cmp     r8b, 1
 * 00000001C001ADC6: mov     [rsp+78h+var_18], rax
 * 00000001C001ADCB: mov     rdx, r10
 * 00000001C001ADCE: setz    cl
 * 00000001C001ADD1: lea     rax, aSuccess; "Success"
 * 00000001C001ADD8: mov     [rsp+78h+var_20], rcx
 * 00000001C001ADDD: xor     r8d, r8d
 * 00000001C001ADE0: mov     [rsp+78h+var_28], rax
 * 00000001C001ADE5: lea     ecx, [r9+55h]
 * 00000001C001ADE9: mov     [rsp+78h+var_30], r9
 * 00000001C001ADEE: lea     eax, [r9+4]
 * 00000001C001ADF2: mov     [rsp+78h+var_38], r9d
 * 00000001C001ADF7: mov     [rsp+78h+var_40], eax
 * 00000001C001ADFB: mov     [rsp+78h+var_48], rax
 * 00000001C001AE00: lea     rax, aSetNoppmeSetti; "Set NOPPME setting"
 * 00000001C001AE07: mov     [rsp+78h+var_50], rax
 * 00000001C001AE0C: mov     [rsp+78h+var_58], r9d
 * 00000001C001AE11: call    cs:__imp_StorPortExtendedFunction
 * 00000001C001AE18: nop     dword ptr [rax+rax+00h]
 * 00000001C001AE1D: or      byte ptr [rbx+109Dh], 8
 * 00000001C001AE24: add     rsp, 70h
 * 00000001C001AE28: pop     rbx
 * 00000001C001AE29: retn
 */
