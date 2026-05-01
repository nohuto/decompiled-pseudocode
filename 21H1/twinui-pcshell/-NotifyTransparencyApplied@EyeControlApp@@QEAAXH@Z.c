/*
 * XREFs of ?NotifyTransparencyApplied@EyeControlApp@@QEAAXH@Z @ 0x180456274
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_152c77e1cbccb2a599dea1ca043f273b___::Invoke @ 0x18034EFE0 (CAsyncCallbackWithLambda__lambda_152c77e1cbccb2a599dea1ca043f273b___--Invoke.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?NotifyTransparencyApplied@EyeControlApp@@QEAAXH@Z @ 0x180456274
 * Reason: Hex-Rays returned no pseudocode for 0x180456274
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180456274: sub     rsp, 48h
 * 0000000180456278: mov     rax, [rcx+30h]
 * 000000018045627C: xor     r8d, r8d
 * 000000018045627F: test    rax, rax
 * 0000000180456282: jz      short loc_1804562C7
 * 0000000180456284: mov     rcx, [rcx+10h]
 * 0000000180456288: test    edx, edx
 * 000000018045628A: mov     [rsp+48h+arg_0], rax
 * 000000018045628F: lea     edx, [r8+2]
 * 0000000180456293: mov     eax, r8d
 * 0000000180456296: movzx   r9d, r8w
 * 000000018045629A: setnz   al
 * 000000018045629D: lea     r8d, [rdx-1]
 * 00000001804562A1: mov     [rsp+48h+var_18], eax
 * 00000001804562A5: lea     rax, unk_1804CB0D6
 * 00000001804562AC: mov     [rsp+48h+var_20], rax
 * 00000001804562B1: mov     [rsp+48h+var_28], dx
 * 00000001804562B6: lea     rdx, [rsp+48h+arg_0]
 * 00000001804562BB: call    cs:__imp_CoreUICallSend
 * 00000001804562C2: nop     dword ptr [rax+rax+00h]
 * 00000001804562C7: add     rsp, 48h
 * 00000001804562CB: retn
 */
