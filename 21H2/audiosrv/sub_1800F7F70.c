/*
 * XREFs of sub_1800F7F70 @ 0x1800F7F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F7F70(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // r8
  __int64 v3; // rdx
  unsigned __int64 v4; // r8
  int v5; // eax
  unsigned int v6; // ebx
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v10; // [rsp+88h] [rbp+10h] BYREF

  v1 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v1[1], v2, (struct _TP_TIMER *)L"s_apmResetPreferredChatApplication");
  if ( !qword_18019E618 )
  {
LABEL_8:
    v6 = 0;
    goto LABEL_9;
  }
  v10 = 0LL;
  if ( (**(int (__fastcall ***)(__int64, void *, __int64 *))qword_18019E618)(qword_18019E618, &unk_18015E380, &v10) < 0
    || (v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 96LL))(v10), v6 = v5, v5 >= 0) )
  {
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    goto LABEL_8;
  }
  sub_18004BD84((int)retaddr, 957, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\playbackmanagerrpc.cpp", v5);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_9:
  sub_18000F690((__int64)pv, v3, v4);
  return v6;
}
