/*
 * XREFs of ?NotifyTransparencyApplied@EyeControlApp@@QEAAXH@Z @ 0x1804798E4
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_152c77e1cbccb2a599dea1ca043f273b___::Invoke @ 0x18036FC40 (CAsyncCallbackWithLambda__lambda_152c77e1cbccb2a599dea1ca043f273b___--Invoke.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?NotifyTransparencyApplied@EyeControlApp@@QEAAXH@Z @ 0x1804798E4
 * Reason: Hex-Rays returned no pseudocode for 0x1804798E4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001804798E4: sub     rsp, 48h
 * 00000001804798E8: mov     rax, [rcx+30h]
 * 00000001804798EC: xor     r8d, r8d
 * 00000001804798EF: test    rax, rax
 * 00000001804798F2: jz      short loc_180479937
 * 00000001804798F4: mov     rcx, [rcx+10h]
 * 00000001804798F8: test    edx, edx
 * 00000001804798FA: mov     [rsp+48h+arg_0], rax
 * 00000001804798FF: lea     edx, [r8+2]
 * 0000000180479903: mov     eax, r8d
 * 0000000180479906: movzx   r9d, r8w
 * 000000018047990A: setnz   al
 * 000000018047990D: lea     r8d, [rdx-1]
 * 0000000180479911: mov     [rsp+48h+var_18], eax
 * 0000000180479915: lea     rax, unk_1804F2136
 * 000000018047991C: mov     [rsp+48h+var_20], rax
 * 0000000180479921: mov     [rsp+48h+var_28], dx
 * 0000000180479926: lea     rdx, [rsp+48h+arg_0]
 * 000000018047992B: call    cs:__imp_CoreUICallSend
 * 0000000180479932: nop     dword ptr [rax+rax+00h]
 * 0000000180479937: add     rsp, 48h
 * 000000018047993B: retn
 */
