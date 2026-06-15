/*
 * XREFs of sub_1800D9990 @ 0x1800D9990
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18005841C @ 0x18005841C (sub_18005841C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D6A04 @ 0x1800D6A04 (sub_1800D6A04.c)
 *     sub_1800D6BCC @ 0x1800D6BCC (sub_1800D6BCC.c)
 */

__int64 __fastcall sub_1800D9990(__int64 a1, unsigned int a2)
{
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  int v7; // ebx
  unsigned __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // eax
  struct _TP_TIMER *pv[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+90h] [rbp+18h] BYREF

  v4 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v4[1], v5, (struct _TP_TIMER *)L"PolicyConfigSetAccessibilityAudioMonoMixState");
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_18019EED0 + 168LL))(qword_18019EED0, a2);
  if ( v7 >= 0 )
  {
    sub_18005841C();
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18019E618 + 216LL))(qword_18019E618);
    if ( v9 == 1 )
    {
      v14 = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
             qword_18019E618,
             a1,
             &v14) >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 48LL))(v14);
        sub_1800D6BCC(v11);
      }
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    else if ( v9 == 2 )
    {
      sub_1800D6A04(v10);
    }
  }
  sub_18000F690((__int64)pv, v6, v8);
  return (unsigned int)v7;
}
