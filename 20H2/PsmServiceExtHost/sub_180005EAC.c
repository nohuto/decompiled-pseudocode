/*
 * XREFs of sub_180005EAC @ 0x180005EAC
 * Callers:
 *     sub_180005C38 @ 0x180005C38 (sub_180005C38.c)
 * Callees:
 *     sub_1800038AC @ 0x1800038AC (sub_1800038AC.c)
 *     sub_180004618 @ 0x180004618 (sub_180004618.c)
 *     sub_180008938 @ 0x180008938 (sub_180008938.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800223EC @ 0x1800223EC (sub_1800223EC.c)
 *     sub_180023230 @ 0x180023230 (sub_180023230.c)
 *     sub_1800260A0 @ 0x1800260A0 (sub_1800260A0.c)
 *     sub_1800277CC @ 0x1800277CC (sub_1800277CC.c)
 *     sub_18007CAA0 @ 0x18007CAA0 (sub_18007CAA0.c)
 */

void __fastcall sub_180005EAC(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rsi
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rcx

  v3 = *(_QWORD *)(a1 + 776);
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 8LL) )
    sub_18007CAA0(v4, &unk_1800A127D);
  if ( (*(_BYTE *)(a1 + 772) & 1) != 0 )
  {
    sub_1800093A0(a1, 0LL);
    *(_QWORD *)(a1 + 648) |= 0x200000000000000uLL;
    sub_18000A110(a1);
    v5 = *(_QWORD *)(a1 + 824);
    if ( v5 )
      TpWaitForTimer(v5, 1LL);
  }
  v6 = *(_QWORD *)(a1 + 696);
  if ( v6 )
    sub_1800038AC(v6, a2);
  v7 = *(_QWORD *)(a1 + 688);
  if ( v7 )
    sub_180004618(v7, a1);
  if ( v3 )
  {
    v8 = *(_QWORD *)(v3 + 88);
    if ( a1 == *(_QWORD *)(v8 + 328) )
    {
      sub_1800223EC(*(_QWORD *)(v3 + 88));
      *(_QWORD *)(v8 + 328) = 0LL;
      sub_1800260A0(v8);
    }
    sub_1800277CC(v3);
    if ( !(unsigned int)sub_180008938(a1 + 808) )
    {
      v10 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
        __fastfail(3u);
      *v11 = v10;
      *(_QWORD *)(v10 + 8) = v11;
    }
    if ( a1 == *(_QWORD *)(v3 + 568) )
      *(_QWORD *)(v3 + 568) = 0LL;
    sub_180023230(v3);
  }
  v12 = *(_QWORD *)(a1 + 784);
  if ( v12 )
  {
    if ( (*(_QWORD *)(v12 + 592))-- == 1LL )
      sub_18000A1AC(v12 - 64);
  }
}
