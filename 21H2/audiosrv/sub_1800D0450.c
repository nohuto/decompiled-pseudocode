/*
 * XREFs of sub_1800D0450 @ 0x1800D0450
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D0450(__int64 a1, __int64 a2)
{
  signed int v3; // ebx
  __int64 *v4; // rax
  __int64 v5; // r8
  RPC_STATUS v6; // eax
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int Pid; // [rsp+90h] [rbp+18h] BYREF

  v3 = 0;
  v4 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(
    pv,
    (struct _TP_TIMER *)v4[1],
    v5,
    (struct _TP_TIMER *)L"AudioSessionManagerDeleteVolumeDuckNotification");
  v6 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( v6 )
  {
    if ( v6 > 0 )
    {
      v3 = (unsigned __int16)v6 | 0x80070000;
      goto LABEL_7;
    }
  }
  else
  {
    if ( !qword_18019E610 )
      goto LABEL_9;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)qword_18019E610 + 40LL))(
           qword_18019E610,
           Pid,
           a2);
  }
  v3 = v6;
LABEL_7:
  if ( v3 < 0 )
    sub_18005E8F8((__int64)"AudioSessionManagerDeleteVolumeDuckNotification", 2230, v3);
LABEL_9:
  sub_18000F690((__int64)pv, v7, v8);
  return (unsigned int)v3;
}
