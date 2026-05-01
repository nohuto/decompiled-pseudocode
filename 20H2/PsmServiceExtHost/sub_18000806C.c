/*
 * XREFs of sub_18000806C @ 0x18000806C
 * Callers:
 *     sub_18000F200 @ 0x18000F200 (sub_18000F200.c)
 * Callees:
 *     sub_18000334C @ 0x18000334C (sub_18000334C.c)
 *     sub_180007A80 @ 0x180007A80 (sub_180007A80.c)
 *     sub_180008938 @ 0x180008938 (sub_180008938.c)
 *     sub_18000FF28 @ 0x18000FF28 (sub_18000FF28.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_18006B648 @ 0x18006B648 (sub_18006B648.c)
 *     sub_180073964 @ 0x180073964 (sub_180073964.c)
 */

__int64 __fastcall sub_18000806C(_QWORD *P)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  _QWORD *v6; // rsi
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // rdx

  v2 = (_QWORD *)(*(_QWORD *)(P[6] + 2720LL) + 88LL);
  v3 = (_QWORD *)*v2;
  while ( v3 != v2 )
  {
    v6 = (_QWORD *)v3[4];
    (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
    v7 = (_QWORD *)v6[167];
    v3 = (_QWORD *)*v3;
    if ( P == v7 )
    {
      if ( v7 )
      {
        sub_1800265B0(v7);
        v6[167] = 0LL;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v6 + 56LL))(v6) )
      {
        sub_18000334C((__int64)v6);
      }
      else
      {
        LOBYTE(v8) = 1;
        sub_180073964(v6, v8);
      }
    }
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  }
  P[170] = 0LL;
  P[171] = 0LL;
  *((_DWORD *)P + 344) = 0;
  sub_18000FF28(P, 2LL);
  if ( (*((_BYTE *)P + 836) & 1) == 0 )
    sub_180007A80(P);
  if ( !(unsigned int)sub_180008938(P + 159) )
  {
    v9 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v10 = (_QWORD *)v4[1], (_QWORD *)*v10 != v4) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    *(_OWORD *)v4 = 0LL;
    sub_1800265B0(P);
  }
  if ( P[178] )
    sub_18006B648(P);
  else
    SetEvent(*(HANDLE *)(P[7] + 80LL));
  return sub_18000A1AC(P);
}
