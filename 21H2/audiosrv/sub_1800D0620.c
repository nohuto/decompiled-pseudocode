/*
 * XREFs of sub_1800D0620 @ 0x1800D0620
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001FB0 @ 0x180001FB0 (sub_180001FB0.c)
 *     sub_180002040 @ 0x180002040 (sub_180002040.c)
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_180044290 @ 0x180044290 (sub_180044290.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800CE9C4 @ 0x1800CE9C4 (sub_1800CE9C4.c)
 *     sub_1800D407C @ 0x1800D407C (sub_1800D407C.c)
 */

__int64 __fastcall sub_1800D0620(__int64 **a1, __int64 a2, _QWORD *a3)
{
  __int64 *v3; // rsi
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 v8; // r8
  RPC_STATUS v9; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rdi
  unsigned int Pid; // [rsp+30h] [rbp-79h] BYREF
  __int64 v17; // [rsp+38h] [rbp-71h] BYREF
  __int64 v18; // [rsp+40h] [rbp-69h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+48h] [rbp-61h] BYREF
  __int64 v20[10]; // [rsp+80h] [rbp-29h] BYREF

  v3 = *a1;
  sub_180002040((__int64)v20);
  v17 = 0LL;
  v18 = 0LL;
  v7 = sub_180008448(v6, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v7[1], v8, (struct _TP_TIMER *)L"AudioSessionManagerGetExistingSession");
  *a3 = 0LL;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x3Du, (__int64)&unk_18015DFC8, *v3);
  }
  v9 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  v12 = v9;
  if ( v9 )
  {
    if ( v9 > 0 )
      v12 = (unsigned __int16)v9 | 0x80070000;
  }
  else
  {
    v12 = sub_1800D407C(v20, a2);
    if ( v12 < 0 )
    {
LABEL_15:
      sub_18005E8F8((__int64)"AudioSessionManagerGetExistingSession", 2285, v12);
      goto LABEL_16;
    }
    v13 = sub_1800CE9C4(*v3, v20, &v17);
    v14 = v17;
    v12 = v13;
    if ( v13 >= 0 )
    {
      v12 = sub_180044290(*v3, Pid, 0, v17, &v18);
      if ( v12 >= 0 )
        *a3 = v18;
    }
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( v12 < 0 )
    goto LABEL_15;
LABEL_16:
  sub_18000F690((__int64)pv, v10, v11);
  sub_180001FB0(v20);
  return (unsigned int)v12;
}
