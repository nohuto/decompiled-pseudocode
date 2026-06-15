/*
 * XREFs of sub_1800E51C0 @ 0x1800E51C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E51C0(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, void *, __int64 *); // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 40);
  v9 = 0LL;
  v4 = (**v2)(v2, &unk_18015E450, &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = v9;
    if ( v9 )
    {
      *a2 = v9;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    }
    else
    {
      *a2 = 0LL;
    }
    v5 = 0;
  }
  else
  {
    sub_18004BD84((int)retaddr, 2796, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", v4);
  }
  sub_18000F708(&v9);
  return v5;
}
