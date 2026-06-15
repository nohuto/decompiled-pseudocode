/*
 * XREFs of sub_180046800 @ 0x180046800
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180046800(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 *v6; // rax
  __int64 v7; // r8
  RPC_STATUS v8; // eax
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int Pid; // [rsp+98h] [rbp+20h] BYREF

  v5 = 0;
  v6 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v6[1], v7, (struct _TP_TIMER *)L"AudioSessionManagerAddVolumeDuckNotification");
  v8 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( !v8 )
  {
    if ( !qword_18019E610 )
      goto LABEL_7;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)qword_18019E610 + 32LL))(
           qword_18019E610,
           a3,
           Pid,
           a2);
    goto LABEL_4;
  }
  if ( v8 <= 0 )
  {
LABEL_4:
    v5 = v8;
    goto LABEL_5;
  }
  v5 = (unsigned __int16)v8 | 0x80070000;
LABEL_5:
  if ( (v5 & 0x80000000) != 0 )
    sub_18005E8F8("AudioSessionManagerAddVolumeDuckNotification", 2210LL, v5);
LABEL_7:
  sub_18000F690((__int64)pv, v9, v10);
  return v5;
}
