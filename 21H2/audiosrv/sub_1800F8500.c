/*
 * XREFs of sub_1800F8500 @ 0x1800F8500
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F8500(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v15 = 0LL;
  v7 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v7[1], v8, (struct _TP_TIMER *)L"s_apmSetVolumeGroupMuteForId");
  if ( (**(int (__fastcall ***)(__int64, void *, __int64 *))qword_18019E618)(qword_18019E618, &unk_18015E380, &v15) < 0 )
  {
    v13 = 0;
  }
  else
  {
    LOBYTE(v11) = a4 != 0;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v15 + 56LL))(v15, a2, a3, v11);
    v13 = v12;
    if ( v12 < 0 )
      sub_18004BD84((int)retaddr, 849, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\playbackmanagerrpc.cpp", v12);
  }
  sub_18000F690((__int64)pv, v9, v10);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v13;
}
