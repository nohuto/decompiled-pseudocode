/*
 * XREFs of sub_1800F8D80 @ 0x1800F8D80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F8D80(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v8; // ebx
  __int64 *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+38h] [rbp-40h] BYREF

  v8 = 0;
  v9 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v9[1], v10, (struct _TP_TIMER *)L"s_pbmSetSmtcSubscriptionState");
  if ( (unsigned int)IsPbmSmtcSubscriptionStateSupported() )
  {
    v8 = PbmSetSmtcSubscriptionState(a1, a2, a4);
  }
  else if ( qword_18019E618 )
  {
    v14 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
           qword_18019E618,
           a1,
           &v14);
    if ( v8 >= 0 )
    {
      if ( a3 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 560LL))(v14, a3);
      v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)qword_18019E618 + 120LL))(
             qword_18019E618,
             v14,
             a2,
             a4);
    }
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  sub_18000F690((__int64)pv, v11, v12);
  return (unsigned int)v8;
}
