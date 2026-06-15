/*
 * XREFs of sub_1800F86A0 @ 0x1800F86A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F86A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned int v11; // eax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF

  v6 = 0;
  v7 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v7[1], v8, (struct _TP_TIMER *)L"s_pbmAllowMediaPlaybackForApp");
  if ( (unsigned int)IsPbmAllowMediaPlaybackForAppSupported() )
  {
    v11 = PbmAllowMediaPlaybackForApp(a1, a2, a3);
LABEL_5:
    v6 = v11;
    goto LABEL_6;
  }
  if ( qword_18019E618 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_18019E618 + 184LL))(qword_18019E618, a2);
    goto LABEL_5;
  }
LABEL_6:
  sub_18000F690((__int64)pv, v9, v10);
  return v6;
}
