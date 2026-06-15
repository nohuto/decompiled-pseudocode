/*
 * XREFs of sub_180053B00 @ 0x180053B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180053B00(__int64 *a1)
{
  __int64 *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdi
  RPC_STATUS v5; // ebx
  int v6; // eax
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned int v9; // ebx
  int v11; // edx
  int v12; // r9d
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int Pid; // [rsp+80h] [rbp+8h] BYREF

  v2 = sub_180008448((__int64)a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v2[1], v3, (struct _TP_TIMER *)L"AudioVolumeAddMasterVolumeNotification");
  v4 = *a1;
  v5 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( v5 )
  {
    v9 = v5 | 0x80010000;
    v11 = 495;
    v12 = v9;
LABEL_7:
    sub_18004BD84((int)retaddr, v11, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp", v12);
    goto LABEL_4;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 248LL))(v4, Pid);
  v9 = v6;
  if ( v6 < 0 )
  {
    v12 = v6;
    v11 = 496;
    goto LABEL_7;
  }
  v9 = 0;
LABEL_4:
  sub_18000F690((__int64)pv, v7, v8);
  return v9;
}
