/*
 * XREFs of ?NotifyTransparencyApplied@EyeControlApp@@QEAAXH@Z @ 0x18047A284
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_152c77e1cbccb2a599dea1ca043f273b___::Invoke @ 0x180370500 (CAsyncCallbackWithLambda__lambda_152c77e1cbccb2a599dea1ca043f273b___--Invoke.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?NotifyTransparencyApplied@EyeControlApp@@QEAAXH@Z @ 0x18047A284
 * Reason: Hex-Rays returned no pseudocode for 0x18047A284
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018047A284: sub     rsp, 48h
 * 000000018047A288: mov     rax, [rcx+30h]
 * 000000018047A28C: xor     r8d, r8d
 * 000000018047A28F: test    rax, rax
 * 000000018047A292: jz      short loc_18047A2D7
 * 000000018047A294: mov     rcx, [rcx+10h]
 * 000000018047A298: test    edx, edx
 * 000000018047A29A: mov     [rsp+48h+arg_0], rax
 * 000000018047A29F: lea     edx, [r8+2]
 * 000000018047A2A3: mov     eax, r8d
 * 000000018047A2A6: movzx   r9d, r8w
 * 000000018047A2AA: setnz   al
 * 000000018047A2AD: lea     r8d, [rdx-1]
 * 000000018047A2B1: mov     [rsp+48h+var_18], eax
 * 000000018047A2B5: lea     rax, unk_1804F27F6
 * 000000018047A2BC: mov     [rsp+48h+var_20], rax
 * 000000018047A2C1: mov     [rsp+48h+var_28], dx
 * 000000018047A2C6: lea     rdx, [rsp+48h+arg_0]
 * 000000018047A2CB: call    cs:__imp_CoreUICallSend
 * 000000018047A2D2: nop     dword ptr [rax+rax+00h]
 * 000000018047A2D7: add     rsp, 48h
 * 000000018047A2DB: retn
 */
