/*
 * XREFs of NVMeIoPollingTimerExCallback @ 0x1C0018620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMeIoPollingTimerExCallback @ 0x1C0018620
 * Reason: Hex-Rays returned no pseudocode for 0x1C0018620
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0018620: push    rbx
 * 00000001C0018622: sub     rsp, 30h
 * 00000001C0018626: and     [rsp+38h+arg_8], 0
 * 00000001C001862B: lea     r8, [rsp+38h+arg_8]
 * 00000001C0018630: mov     rbx, rdx
 * 00000001C0018633: mov     ecx, 5Ch ; '\'
 * 00000001C0018638: mov     rdx, [rdx]
 * 00000001C001863B: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0018642: nop     dword ptr [rax+rax+00h]
 * 00000001C0018647: mov     r8, [rbx+8]
 * 00000001C001864B: lea     rax, [rsp+38h+arg_10]
 * 00000001C0018650: and     [rsp+38h+arg_10], 0
 * 00000001C0018655: add     r8, 0D8h
 * 00000001C001865C: mov     r9d, [rsp+38h+arg_8]
 * 00000001C0018661: mov     ecx, 1002h
 * 00000001C0018666: mov     rdx, [rbx]
 * 00000001C0018669: mov     [rsp+38h+var_10], rax
 * 00000001C001866E: and     [rsp+38h+var_18], 0
 * 00000001C0018674: call    cs:__imp_StorPortNotification
 * 00000001C001867B: nop     dword ptr [rax+rax+00h]
 * 00000001C0018680: add     rsp, 30h
 * 00000001C0018684: pop     rbx
 * 00000001C0018685: retn
 */
