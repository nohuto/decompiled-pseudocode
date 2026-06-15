/*
 * XREFs of sub_18010CD40 @ 0x18010CD40
 * Callers:
 *     sub_18010CE60 @ 0x18010CE60 (sub_18010CE60.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_18010DE28 @ 0x18010DE28 (sub_18010DE28.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18010CD40(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  void *retaddr; // [rsp+28h] [rbp+8h]
  int v10; // [rsp+30h] [rbp+10h] BYREF
  __int64 v11; // [rsp+40h] [rbp+20h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, void *, __int64 *); // [rsp+48h] [rbp+28h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  v12 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, a2, &v12);
  if ( v4 >= 0 )
  {
    v11 = 0LL;
    sub_1800CB144(&v11);
    v5 = (**v12)(v12, &unk_18015B660, &v11);
    v6 = (int)retaddr;
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 24LL))(v11, &v10);
      v6 = (int)retaddr;
      if ( v5 >= 0 )
      {
        if ( v10 )
          goto LABEL_11;
        v5 = sub_18010DE28(retaddr, v12, *(unsigned int *)(a1 + 152));
        v6 = (int)retaddr;
        if ( v5 >= 0 )
          goto LABEL_11;
        v7 = 554;
      }
      else
      {
        v7 = 552;
      }
    }
    else
    {
      v7 = 549;
    }
    sub_18006D26C(
      v6,
      v7,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      v5);
LABEL_11:
    sub_18000F708(&v11);
    goto LABEL_12;
  }
  sub_18006D26C(
    (int)retaddr,
    546,
    (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
    v4);
LABEL_12:
  sub_18000F708((__int64 *)&v12);
  return 0LL;
}
