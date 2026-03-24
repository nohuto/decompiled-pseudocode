/*
 * XREFs of NVMeSystemPowerHint @ 0x1C000F6F0
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0004A90 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeUpdateResumeLatencyTolerance @ 0x1C000F7B4 (NVMeUpdateResumeLatencyTolerance.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeSystemPowerHint @ 0x1C000F6F0
 * Reason: Hex-Rays returned no pseudocode for 0x1C000F6F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000F6F0: mov     [rsp+arg_0], rbx
 * 00000001C000F6F5: push    rdi
 * 00000001C000F6F6: sub     rsp, 20h
 * 00000001C000F6FA: cmp     dword ptr [rdx+4], 10h
 * 00000001C000F6FE: mov     rdi, rdx
 * 00000001C000F701: mov     rbx, rcx
 * 00000001C000F704: jb      loc_1C000F7A0
 * 00000001C000F70A: cmp     dword ptr [rdx], 1
 * 00000001C000F70D: jb      loc_1C000F7A0
 * 00000001C000F713: mov     r9d, [rdx+0Ch]
 * 00000001C000F717: mov     ecx, 3
 * 00000001C000F71C: mov     r8d, [rdx+8]
 * 00000001C000F720: lea     rdx, aStornvmePowerS; "StorNVMe - POWER: System Power Hint - L"...
 * 00000001C000F727: call    cs:__imp_StorPortDebugPrint
 * 00000001C000F72E: nop     dword ptr [rax+rax+00h]
 * 00000001C000F733: mov     eax, [rdi+8]
 * 00000001C000F736: mov     rcx, rbx
 * 00000001C000F739: mov     [rbx+67Ch], eax
 * 00000001C000F73F: mov     eax, [rdi+0Ch]
 * 00000001C000F742: mov     [rbx+684h], eax
 * 00000001C000F748: call    NVMeUpdateResumeLatencyTolerance
 * 00000001C000F74D: cmp     dword ptr [rbx+50h], 5
 * 00000001C000F751: jnz     short loc_1C000F76F
 * 00000001C000F753: xor     r8d, r8d
 * 00000001C000F756: mov     rdx, rbx
 * 00000001C000F759: cmp     dword ptr [rdi+8], 1
 * 00000001C000F75D: lea     ecx, [r8+39h]
 * 00000001C000F761: jnz     short loc_1C000F769
 * 00000001C000F763: mov     r9d, [rbx+60h]
 * 00000001C000F767: jmp     short loc_1C000F794
 * 00000001C000F769: mov     r9d, [rbx+5Ch]
 * 00000001C000F76D: jmp     short loc_1C000F794
 * 00000001C000F76F: mov     eax, [rbx+670h]
 * 00000001C000F775: test    al, 10h
 * 00000001C000F777: jz      short loc_1C000F7A0
 * 00000001C000F779: cmp     dword ptr [rdi+8], 1
 * 00000001C000F77D: mov     rdx, rbx
 * 00000001C000F780: mov     ecx, 39h ; '9'
 * 00000001C000F785: jnz     short loc_1C000F78D
 * 00000001C000F787: mov     r9d, [rbx+60h]
 * 00000001C000F78B: jmp     short loc_1C000F791
 * 00000001C000F78D: or      r9d, 0FFFFFFFFh
 * 00000001C000F791: xor     r8d, r8d
 * 00000001C000F794: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000F79B: nop     dword ptr [rax+rax+00h]
 * 00000001C000F7A0: mov     rbx, [rsp+28h+arg_0]
 * 00000001C000F7A5: add     rsp, 20h
 * 00000001C000F7A9: pop     rdi
 * 00000001C000F7AA: retn
 */
