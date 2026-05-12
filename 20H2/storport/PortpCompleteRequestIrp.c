/*
 * XREFs of PortpCompleteRequestIrp @ 0x1C005A340
 * Callers:
 *     PortpAsyncCompletion @ 0x1C005A210 (PortpAsyncCompletion.c)
 *     PortpCancelRoutine @ 0x1C005A2A0 (PortpCancelRoutine.c)
 * Callees:
 *     PortPassThroughFreeIrpEx @ 0x1C001F394 (PortPassThroughFreeIrpEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F5F0 (_guard_dispatch_icall_nop.c)
 *     PortPassThroughExMarshalResultsFromSrbEx @ 0x1C0059B40 (PortPassThroughExMarshalResultsFromSrbEx.c)
 *     PortPassThroughFreeSrb @ 0x1C0059EF0 (PortPassThroughFreeSrb.c)
 *     PortPassThroughMarshalResultsFromSrb @ 0x1C0059FDC (PortPassThroughMarshalResultsFromSrb.c)
 */

void __fastcall PortpCompleteRequestIrp(__int64 a1, void *a2)
{
  __int64 v2; // rax
  IRP *v4; // rdi
  char v5; // r8
  __int64 v6; // rdx
  IRP *v7; // rcx
  bool v8; // r9
  _DWORD v9[2]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 Information; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 184);
  v4 = (IRP *)*((_QWORD *)a2 + 1);
  v9[1] = 0;
  v5 = *(_BYTE *)a2;
  v6 = *((_QWORD *)a2 + 3);
  v7 = (IRP *)*((_QWORD *)a2 + 2);
  v8 = ((*(_DWORD *)(v2 + 24) - 315460) & 0xFFFFFFFB) == 0;
  v9[0] = v4->IoStatus.Status;
  Information = v4->IoStatus.Information;
  if ( v8 )
    PortPassThroughExMarshalResultsFromSrbEx(v7, v6, v5, (__int64)v9);
  else
    PortPassThroughMarshalResultsFromSrb(v7, v6, v5, (__int64)v9);
  *(_DWORD *)(*((_QWORD *)a2 + 2) + 48LL) = v9[0];
  *(_QWORD *)(*((_QWORD *)a2 + 2) + 56LL) = Information;
  PortPassThroughFreeIrpEx(v4);
  PortPassThroughFreeSrb(*((_QWORD **)a2 + 3));
  (*((void (__fastcall **)(_QWORD, _QWORD))a2 + 4))(*((_QWORD *)a2 + 2), *((_QWORD *)a2 + 5));
  ExFreePoolWithTag(a2, 0x69506C50u);
}
