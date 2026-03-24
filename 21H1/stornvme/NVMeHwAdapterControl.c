/*
 * XREFs of NVMeHwAdapterControl @ 0x1C0004A90
 * Callers:
 *     <none>
 * Callees:
 *     CalculateTimeDurationIn100ns @ 0x1C0004850 (CalculateTimeDurationIn100ns.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C000C1C4 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeControllerFilterResouceRequirements @ 0x1C000C2CC (NVMeControllerFilterResouceRequirements.c)
 *     NVMeControllerPowerDown @ 0x1C000CBFC (NVMeControllerPowerDown.c)
 *     NVMeControllerPowerUp @ 0x1C000CDB8 (NVMeControllerPowerUp.c)
 *     NVMeControllerRemove @ 0x1C000CE54 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000D258 (NVMeControllerStop.c)
 *     NVMeGetControllerSerialNumber @ 0x1C000D518 (NVMeGetControllerSerialNumber.c)
 *     NVMeMaxOperationalPower @ 0x1C000E678 (NVMeMaxOperationalPower.c)
 *     NVMePowerSetFState @ 0x1C000EF60 (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C000F088 (NVMePowerSetPerfState.c)
 *     NVMePowerSettingChangeNotification @ 0x1C000F1F0 (NVMePowerSettingChangeNotification.c)
 *     NVMeSystemPowerHint @ 0x1C000F768 (NVMeSystemPowerHint.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeHwAdapterControl @ 0x1C0004A90
 * Reason: Hex-Rays returned no pseudocode for 0x1C0004A90
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0004A90: mov     [rsp+arg_8], rbx
 * 00000001C0004A95: mov     [rsp+arg_10], rsi
 * 00000001C0004A9A: push    rdi
 * 00000001C0004A9B: sub     rsp, 80h
 * 00000001C0004AA2: xor     esi, esi
 * 00000001C0004AA4: mov     rbx, r8
 * 00000001C0004AA7: mov     rdi, rcx
 * 00000001C0004AAA: cmp     edx, 11h; switch 18 cases
 * 00000001C0004AAD: ja      def_1C0004AC7; jumptable 00000001C0004AC7 default case, cases 3,4,7,10,11
 * 00000001C0004AB3: movsxd  rax, edx
 * 00000001C0004AB6: lea     rcx, cs:1C0000000h
 * 00000001C0004ABD: mov     edx, ds:(jpt_1C0004AC7 - 1C0000000h)[rcx+rax*4]
 * 00000001C0004AC4: add     rdx, rcx
 * 00000001C0004AC7: jmp     rdx; switch jump
 * 00000001C0004ACD: mov     eax, [r8]; jumptable 00000001C0004AC7 case 0
 * 00000001C0004AD0: test    eax, eax
 * 00000001C0004AD2: jz      short loc_1C0004AD9
 * 00000001C0004AD4: mov     byte ptr [r8+4], 1
 * 00000001C0004AD9: cmp     eax, 1
 * 00000001C0004ADC: jbe     short loc_1C0004AE6
 * 00000001C0004ADE: mov     byte ptr [r8+5], 1
 * 00000001C0004AE3: mov     eax, [r8]
 * 00000001C0004AE6: cmp     eax, 2
 * 00000001C0004AE9: jbe     short loc_1C0004AF3
 * 00000001C0004AEB: mov     byte ptr [r8+6], 1
 * 00000001C0004AF0: mov     eax, [r8]
 * 00000001C0004AF3: cmp     eax, 6
 * 00000001C0004AF6: jbe     short loc_1C0004B00
 * 00000001C0004AF8: mov     byte ptr [r8+0Ah], 1
 * 00000001C0004AFD: mov     eax, [r8]
 * 00000001C0004B00: cmp     eax, 8
 * 00000001C0004B03: jbe     short loc_1C0004B0D
 * 00000001C0004B05: mov     byte ptr [r8+0Ch], 1
 * 00000001C0004B0A: mov     eax, [r8]
 * 00000001C0004B0D: cmp     eax, 9
 * 00000001C0004B10: jbe     short loc_1C0004B1A
 * 00000001C0004B12: mov     byte ptr [r8+0Dh], 1
 * 00000001C0004B17: mov     eax, [r8]
 * 00000001C0004B1A: cmp     eax, 0Ch
 * 00000001C0004B1D: jbe     short loc_1C0004B27
 * 00000001C0004B1F: mov     byte ptr [r8+10h], 1
 * 00000001C0004B24: mov     eax, [r8]
 * 00000001C0004B27: cmp     eax, 0Dh
 * 00000001C0004B2A: jbe     short loc_1C0004B34
 * 00000001C0004B2C: mov     byte ptr [r8+11h], 1
 * 00000001C0004B31: mov     eax, [r8]
 * 00000001C0004B34: cmp     eax, 0Eh
 * 00000001C0004B37: jbe     short loc_1C0004B41
 * 00000001C0004B39: mov     byte ptr [r8+12h], 1
 * 00000001C0004B3E: mov     eax, [r8]
 * 00000001C0004B41: cmp     eax, 0Fh
 * 00000001C0004B44: jbe     short loc_1C0004B4E
 * 00000001C0004B46: mov     byte ptr [r8+13h], 1
 * 00000001C0004B4B: mov     eax, [r8]
 * 00000001C0004B4E: cmp     eax, 10h
 * 00000001C0004B51: jbe     short loc_1C0004B5B
 * 00000001C0004B53: mov     byte ptr [r8+14h], 1
 * 00000001C0004B58: mov     eax, [r8]
 * 00000001C0004B5B: cmp     eax, 5
 * 00000001C0004B5E: jbe     short loc_1C0004B68
 * 00000001C0004B60: mov     byte ptr [r8+9], 1
 * 00000001C0004B65: mov     eax, [r8]
 * 00000001C0004B68: cmp     eax, 11h
 * 00000001C0004B6B: jbe     loc_1C0005024; jumptable 00000001C0004AC7 case 2
 * 00000001C0004B71: mov     byte ptr [r8+15h], 1
 * 00000001C0004B76: jmp     loc_1C0005024; jumptable 00000001C0004AC7 case 2
 * 00000001C0004B7B: mov     eax, [r8+14h]; jumptable 00000001C0004AC7 case 6
 * 00000001C0004B7F: cmp     eax, 1
 * 00000001C0004B82: jnz     loc_1C0004C08
 * 00000001C0004B88: lea     r9, [rsp+88h+arg_0]
 * 00000001C0004B90: mov     [rsp+88h+arg_0], rsi
 * 00000001C0004B98: lea     r8, [rsp+88h+var_18]
 * 00000001C0004B9D: mov     [rsp+88h+var_18], rsi
 * 00000001C0004BA2: mov     rdx, rdi
 * 00000001C0004BA5: lea     ecx, [rax+2Eh]
 * 00000001C0004BA8: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0004BAF: nop     dword ptr [rax+rax+00h]
 * 00000001C0004BB4: mov     rbx, [rsp+88h+arg_0]
 * 00000001C0004BBC: mov     rcx, rdi; int
 * 00000001C0004BBF: call    NVMeControllerPowerUp
 * 00000001C0004BC4: lea     r9, [rsp+88h+arg_0]
 * 00000001C0004BCC: mov     rdx, rdi
 * 00000001C0004BCF: lea     r8, [rsp+88h+var_18]
 * 00000001C0004BD4: mov     ecx, 2Fh ; '/'
 * 00000001C0004BD9: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0004BE0: nop     dword ptr [rax+rax+00h]
 * 00000001C0004BE5: mov     rcx, [rsp+88h+arg_0]
 * 00000001C0004BED: mov     rdx, [rsp+88h+var_18]
 * 00000001C0004BF2: sub     rcx, rbx
 * 00000001C0004BF5: call    CalculateTimeDurationIn100ns
 * 00000001C0004BFA: mov     ecx, eax
 * 00000001C0004BFC: lea     rax, aD0Latency; "D0 Latency"
 * 00000001C0004C03: jmp     loc_1C0004CA0
 * 00000001C0004C08: cmp     eax, 4
 * 00000001C0004C0B: jnz     loc_1C0005024; jumptable 00000001C0004AC7 case 2
 * 00000001C0004C11: mov     eax, [rdi+18h]
 * 00000001C0004C14: test    al, 40h
 * 00000001C0004C16: jz      short loc_1C0004C23
 * 00000001C0004C18: cmp     dword ptr [r8+10h], 3
 * 00000001C0004C1D: jz      loc_1C0005024; jumptable 00000001C0004AC7 case 2
 * 00000001C0004C23: lea     r9, [rsp+88h+arg_18]
 * 00000001C0004C2B: mov     [rsp+88h+arg_18], rsi
 * 00000001C0004C33: lea     r8, [rsp+88h+var_10]
 * 00000001C0004C38: mov     [rsp+88h+var_10], rsi
 * 00000001C0004C3D: mov     rdx, rdi
 * 00000001C0004C40: mov     ecx, 2Fh ; '/'
 * 00000001C0004C45: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0004C4C: nop     dword ptr [rax+rax+00h]
 * 00000001C0004C51: mov     rbx, [rsp+88h+arg_18]
 * 00000001C0004C59: mov     rcx, rdi; int
 * 00000001C0004C5C: call    NVMeControllerPowerDown
 * 00000001C0004C61: lea     r9, [rsp+88h+arg_18]
 * 00000001C0004C69: mov     rdx, rdi
 * 00000001C0004C6C: lea     r8, [rsp+88h+var_10]
 * 00000001C0004C71: mov     ecx, 2Fh ; '/'
 * 00000001C0004C76: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0004C7D: nop     dword ptr [rax+rax+00h]
 * 00000001C0004C82: mov     rcx, [rsp+88h+arg_18]
 * 00000001C0004C8A: mov     rdx, [rsp+88h+var_10]
 * 00000001C0004C8F: sub     rcx, rbx
 * 00000001C0004C92: call    CalculateTimeDurationIn100ns
 * 00000001C0004C97: mov     ecx, eax
 * 00000001C0004C99: lea     rax, aD3Latency; "D3 Latency"
 * 00000001C0004CA0: mov     [rsp+88h+var_20], rsi
 * 00000001C0004CA5: xor     r9d, r9d
 * 00000001C0004CA8: mov     [rsp+88h+var_28], rsi
 * 00000001C0004CAD: xor     r8d, r8d
 * 00000001C0004CB0: mov     [rsp+88h+var_30], rcx
 * 00000001C0004CB5: mov     rdx, rdi
 * 00000001C0004CB8: mov     [rsp+88h+var_38], rax
 * 00000001C0004CBD: lea     rax, aNvmePowerTrans; "NVMe Power Transition"
 * 00000001C0004CC4: mov     [rsp+88h+var_40], rsi
 * 00000001C0004CC9: lea     ecx, [r9+55h]
 * 00000001C0004CCD: mov     [rsp+88h+var_48], esi
 * 00000001C0004CD1: mov     dword ptr [rsp+88h+var_50], 4
 * 00000001C0004CD9: mov     [rsp+88h+var_58], 4
 * 00000001C0004CE2: mov     [rsp+88h+var_60], rax
 * 00000001C0004CE7: mov     dword ptr [rsp+88h+var_68], esi
 * 00000001C0004CEB: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0004CF2: nop     dword ptr [rax+rax+00h]
 * 00000001C0004CF7: jmp     loc_1C0005024; jumptable 00000001C0004AC7 case 2
 * 00000001C0004CFC: mov     rdx, rbx; jumptable 00000001C0004AC7 case 12
 * 00000001C0004CFF: mov     rcx, rdi
 * 00000001C0004D02: call    NVMeSystemPowerHint
 * 00000001C0004D07: jmp     loc_1C0005024; jumptable 00000001C0004AC7 case 2
 * 00000001C0004D0C: cmp     [rbx+14h], sil; jumptable 00000001C0004AC7 case 8
 * 00000001C0004D10: lea     rcx, aIdle; "IDLE"
 * 00000001C0004D17: lea     r8, aActive; "ACTIVE"
 * 00000001C0004D1E: cmovz   r8, rcx
 * 00000001C0004D22: lea     rdx, aStornvmePowerS_4; "StorNVMe - POWER: %s\n"
 * 00000001C0004D29: mov     ecx, 3
 * 00000001C0004D2E: call    cs:__imp_StorPortDebugPrint
 * 00000001C0004D35: nop     dword ptr [rax+rax+00h]
 * 00000001C0004D3A: movzx   eax, byte ptr [rbx+14h]
 * 00000001C0004D3E: shl     eax, 2
 * 00000001C0004D41: xor     eax, [rdi+670h]
 * 00000001C0004D47: and     eax, 4
 * 00000001C0004D4A: xor     eax, [rdi+670h]
 * 00000001C0004D50: mov     [rdi+670h], eax
 * 00000001C0004D56: cmp     [rbx+14h], sil
 * 00000001C0004D5A: jz      loc_1C0004E58
 * 00000001C0004D60: test    al, 20h
 * 00000001C0004D62: jz      short loc_1C0004D9E
 * 00000001C0004D64: mov     r8, [rdi+698h]
 * 00000001C0004D6B: lea     r9, NVMeFStateIdleTimerCallback
 * 00000001C0004D72: and     eax, 0FFFFFFDFh
 * 00000001C0004D75: mov     [rsp+88h+var_58], rsi
 * 00000001C0004D7A: mov     [rsp+88h+var_60], rsi
 * 00000001C0004D7F: mov     rdx, rdi
 * 00000001C0004D82: mov     ecx, 21h ; '!'
 * 00000001C0004D87: mov     [rdi+670h], eax
 * 00000001C0004D8D: mov     [rsp+88h+var_68], rdi
 * 00000001C0004D92: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0004D99: nop     dword ptr [rax+rax+00h]
 * 00000001C0004D9E: xor     r9d, r9d
 * 00000001C0004DA1: mov     [rsp+88h+var_68], rsi
 * 00000001C0004DA6: xor     r8d, r8d
 * 00000001C0004DA9: mov     rdx, rdi
 * 00000001C0004DAC: lea     ecx, [r9+33h]
 * 00000001C0004DB0: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0004DB7: nop     dword ptr [rax+rax+00h]
 * 00000001C0004DBC: lock bts dword ptr [rdi+6A0h], 0
 * 00000001C0004DC5: jb      short loc_1C0004E3B
 * 00000001C0004DC7: mov     eax, [rdi+670h]
 * 00000001C0004DCD: test    al, 2
 * 00000001C0004DCF: jz      short loc_1C0004E2F
 * 00000001C0004DD1: movzx   eax, byte ptr [rdi+678h]
 * 00000001C0004DD8: cmp     [rdi+677h], al
 * 00000001C0004DDE: jz      short loc_1C0004E2F
 * 00000001C0004DE0: mov     r8d, eax
 * 00000001C0004DE3: lea     rdx, aStornvmePowerR; "StorNVMe - POWER: Requesting transition"...
 * 00000001C0004DEA: mov     ecx, 3
 * 00000001C0004DEF: mov     ebx, eax
 * 00000001C0004DF1: call    cs:__imp_StorPortDebugPrint
 * 00000001C0004DF8: nop     dword ptr [rax+rax+00h]
 * 00000001C0004DFD: mov     [rsp+88h+var_50], rbx
 * 00000001C0004E02: xor     r9d, r9d
 * 00000001C0004E05: mov     dword ptr [rsp+88h+var_58], ebx
 * 00000001C0004E09: xor     r8d, r8d
 * 00000001C0004E0C: mov     dword ptr [rsp+88h+var_60], esi
 * 00000001C0004E10: mov     rdx, rdi
 * 00000001C0004E13: mov     dword ptr [rsp+88h+var_68], esi
 * 00000001C0004E17: lea     ecx, [r9+42h]
 * 00000001C0004E1B: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0004E22: nop     dword ptr [rax+rax+00h]
 * 00000001C0004E27: test    eax, eax
 * 00000001C0004E29: jz      loc_1C0005024; jumptable 00000001C0004AC7 case 2
 * 00000001C0004E2F: and     dword ptr [rdi+6A0h], 0FFFFFFFEh
 * 00000001C0004E36: jmp     loc_1C0005024; jumptable 00000001C0004AC7 case 2
 * 00000001C0004E3B: lea     rdx, aStornvmePowerP_4; "StorNVMe - POWER: P-State transition al"...
 * 00000001C0004E42: mov     ecx, 3
 * 00000001C0004E47: call    cs:__imp_StorPortDebugPrint
 * 00000001C0004E4E: nop     dword ptr [rax+rax+00h]
 * 00000001C0004E53: jmp     loc_1C0005024; jumptable 00000001C0004AC7 case 2
 * 00000001C0004E58: movzx   eax, byte ptr [rdi+679h]
 * 00000001C0004E5F: cmp     al, 1
 * 00000001C0004E61: jbe     loc_1C0005024; jumptable 00000001C0004AC7 case 2
 * 00000001C0004E67: mov     edx, [rdi+67Ch]
 * 00000001C0004E6D: mov     r8d, [rdi+680h]
 * 00000001C0004E74: cmp     edx, 1
 * 00000001C0004E77: jnz     short loc_1C0004E8C
 * 00000001C0004E79: mov     r9d, [rdi+68h]
 * 00000001C0004E7D: cmp     r9d, 0FFFFFFFFh
 * 00000001C0004E81: jnz     short loc_1C0004EBE
 * 00000001C0004E83: mov     r9d, [rdi+684h]
 * 00000001C0004E8A: jmp     short loc_1C0004EBE
 * 00000001C0004E8C: mov     r9d, [rdi+64h]
 * 00000001C0004E90: cmp     r9d, 0FFFFFFFFh
 * 00000001C0004E94: jnz     short loc_1C0004EBE
 * 00000001C0004E96: movzx   r9d, byte ptr [rdi+67Ah]
 * 00000001C0004E9E: test    r9b, r9b
 * 00000001C0004EA1: jz      short loc_1C0004EB7
 * 00000001C0004EA3: lea     ecx, [rax-1]
 * 00000001C0004EA6: cmp     r9d, ecx
 * 00000001C0004EA9: jge     short loc_1C0004EB7
 * 00000001C0004EAB: mov     r9d, [rdi+690h]
 * 00000001C0004EB2: cmp     r8d, r9d
 * 00000001C0004EB5: jbe     short loc_1C0004EBE
 * 00000001C0004EB7: mov     r9d, [rdi+688h]
 * 00000001C0004EBE: mov     [rdi+680h], r9d
 * 00000001C0004EC5: cmp     r8d, r9d
 * 00000001C0004EC8: jz      short loc_1C0004EE8
 * 00000001C0004ECA: lea     rdx, aStornvmePowerC_2; "StorNVMe - POWER: Current Resume Latenc"...
 * 00000001C0004ED1: mov     ecx, 3
 * 00000001C0004ED6: call    cs:__imp_StorPortDebugPrint
 * 00000001C0004EDD: nop     dword ptr [rax+rax+00h]
 * 00000001C0004EE2: mov     edx, [rdi+67Ch]
 * 00000001C0004EE8: cmp     edx, 1
 * 00000001C0004EEB: jnz     short loc_1C0004EF2
 * 00000001C0004EED: mov     eax, [rdi+58h]
 * 00000001C0004EF0: jmp     short loc_1C0004F1E
 * 00000001C0004EF2: mov     eax, [rdi+54h]
 * 00000001C0004EF5: cmp     eax, 0FFFFFFFFh
 * 00000001C0004EF8: jnz     short loc_1C0004F1E
 * 00000001C0004EFA: cmp     [rdi+67Ah], sil
 * 00000001C0004F01: jnz     short loc_1C0004F0B
 * 00000001C0004F03: mov     eax, [rdi+68Ch]
 * 00000001C0004F09: jmp     short loc_1C0004F1E
 * 00000001C0004F0B: cmp     byte ptr [rdi+679h], 2
 * 00000001C0004F12: jbe     loc_1C0005024; jumptable 00000001C0004AC7 case 2
 * 00000001C0004F18: mov     eax, [rdi+694h]
 * 00000001C0004F1E: mov     ebx, eax
 * 00000001C0004F20: test    eax, eax
 * 00000001C0004F22: jz      loc_1C0005024; jumptable 00000001C0004AC7 case 2
 * 00000001C0004F28: mov     r8d, ebx
 * 00000001C0004F2B: lea     rdx, aStornvmePowerS_3; "StorNVMe - POWER: Setting F-state idle "...
 * 00000001C0004F32: mov     ecx, 3
 * 00000001C0004F37: call    cs:__imp_StorPortDebugPrint
 * 00000001C0004F3E: nop     dword ptr [rax+rax+00h]
 * 00000001C0004F43: or      dword ptr [rdi+670h], 20h
 * 00000001C0004F4A: lea     r9, NVMeFStateIdleTimerCallback
 * 00000001C0004F51: mov     r8, [rdi+698h]
 * 00000001C0004F58: mov     rdx, rdi
 * 00000001C0004F5B: imul    rax, rbx, 3E8h
 * 00000001C0004F62: mov     [rsp+88h+var_58], 2710h
 * 00000001C0004F6B: mov     ecx, 21h ; '!'
 * 00000001C0004F70: mov     [rsp+88h+var_60], rax
 * 00000001C0004F75: mov     [rsp+88h+var_68], rdi
 * 00000001C0004F7A: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0004F81: nop     dword ptr [rax+rax+00h]
 * 00000001C0004F86: jmp     loc_1C0005024; jumptable 00000001C0004AC7 case 2
 * 00000001C0004F8B: mov     rdx, rbx; jumptable 00000001C0004AC7 case 9
 * 00000001C0004F8E: mov     rcx, rdi; int
 * 00000001C0004F91: call    NVMePowerSetFState
 * 00000001C0004F96: jmp     loc_1C0005024; jumptable 00000001C0004AC7 case 2
 * 00000001C0004F9B: mov     rdx, rbx; jumptable 00000001C0004AC7 case 14
 * 00000001C0004F9E: mov     rcx, rdi
 * 00000001C0004FA1: call    NVMeMaxOperationalPower
 * 00000001C0004FA6: jmp     short loc_1C0005024; jumptable 00000001C0004AC7 case 2
 * 00000001C0004FA8: mov     rdx, rbx; jumptable 00000001C0004AC7 case 15
 * 00000001C0004FAB: mov     rcx, rdi; int
 * 00000001C0004FAE: call    NVMePowerSetPerfState
 * 00000001C0004FB3: jmp     short loc_1C0005024; jumptable 00000001C0004AC7 case 2
 * 00000001C0004FB5: mov     eax, [rdi+18h]; jumptable 00000001C0004AC7 case 1
 * 00000001C0004FB8: test    al, 8
 * 00000001C0004FBA: jz      short loc_1C0004FC6
 * 00000001C0004FBC: mov     rcx, rdi; int
 * 00000001C0004FBF: call    NVMeControllerRemove
 * 00000001C0004FC4: jmp     short loc_1C0005024; jumptable 00000001C0004AC7 case 2
 * 00000001C0004FC6: test    al, 2
 * 00000001C0004FC8: jz      short loc_1C0005024; jumptable 00000001C0004AC7 case 2
 * 00000001C0004FCA: mov     rcx, rdi; int
 * 00000001C0004FCD: call    NVMeControllerStop
 * 00000001C0004FD2: jmp     short loc_1C0005024; jumptable 00000001C0004AC7 case 2
 * 00000001C0004FD4: cmp     dword ptr [r8], 1; jumptable 00000001C0004AC7 case 13
 * 00000001C0004FD8: jb      short def_1C0004AC7; jumptable 00000001C0004AC7 default case, cases 3,4,7,10,11
 * 00000001C0004FDA: mov     rdx, rbx
 * 00000001C0004FDD: mov     rcx, rdi
 * 00000001C0004FE0: call    NVMeControllerFilterResouceRequirements
 * 00000001C0004FE5: jmp     short loc_1C0005024; jumptable 00000001C0004AC7 case 2
 * 00000001C0004FE7: mov     eax, [rdi+18h]; jumptable 00000001C0004AC7 case 16
 * 00000001C0004FEA: mov     dl, 11h
 * 00000001C0004FEC: and     eax, 0FFFFFFFEh
 * 00000001C0004FEF: mov     rcx, rdi
 * 00000001C0004FF2: or      eax, 8
 * 00000001C0004FF5: mov     [rdi+18h], eax
 * 00000001C0004FF8: call    NVMeControllerCompleteAllIORequests
 * 00000001C0004FFD: and     dword ptr [rdi+18h], 0FFFFFFEFh
 * 00000001C0005001: jmp     short loc_1C0005024; jumptable 00000001C0004AC7 case 2
 * 00000001C0005003: mov     rdx, rbx; jumptable 00000001C0004AC7 case 5
 * 00000001C0005006: mov     rcx, rdi; int
 * 00000001C0005009: call    NVMePowerSettingChangeNotification
 * 00000001C000500E: jmp     short loc_1C0005024; jumptable 00000001C0004AC7 case 2
 * 00000001C0005010: mov     rdx, rbx; jumptable 00000001C0004AC7 case 17
 * 00000001C0005013: mov     rcx, rdi
 * 00000001C0005016: call    NVMeGetControllerSerialNumber
 * 00000001C000501B: mov     esi, eax
 * 00000001C000501D: jmp     short loc_1C0005024; jumptable 00000001C0004AC7 case 2
 * 00000001C000501F: mov     esi, 1; jumptable 00000001C0004AC7 default case, cases 3,4,7,10,11
 * 00000001C0005024: lea     r11, [rsp+88h+var_8]; jumptable 00000001C0004AC7 case 2
 * 00000001C000502C: mov     eax, esi
 * 00000001C000502E: mov     rbx, [r11+18h]
 * 00000001C0005032: mov     rsi, [r11+20h]
 * 00000001C0005036: mov     rsp, r11
 * 00000001C0005039: pop     rdi
 * 00000001C000503A: retn
 */
