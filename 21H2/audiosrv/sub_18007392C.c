/*
 * XREFs of sub_18007392C @ 0x18007392C
 * Callers:
 *     sub_1801352FC @ 0x1801352FC (sub_1801352FC.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BDAAC @ 0x1800BDAAC (sub_1800BDAAC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007392C(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  int v8; // eax
  void *v9; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+8h]
  void *v11; // [rsp+40h] [rbp+10h] BYREF
  __int64 v12; // [rsp+48h] [rbp+18h] BYREF

  *a2 = 0LL;
  if ( *(_BYTE *)(a1 + 209) )
  {
    v3 = *(_QWORD *)(a1 + 216);
    if ( !v3 )
      return 2147549183LL;
    v12 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v3 + 32LL))(v3, 0LL, 0LL, &v12);
    v6 = v5;
    if ( v5 < 0 )
    {
      sub_18004BD84((int)retaddr, 2449, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v5);
LABEL_8:
      sub_18000F708(&v12);
      return v6;
    }
    v11 = 0LL;
    v7 = v12;
    sub_18002A504(&v11, 0LL);
    v8 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v7 + 40LL))(v7, &v11);
    v6 = v8;
    if ( v8 < 0 )
    {
      sub_18004BD84((int)retaddr, 2452, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v8);
      sub_1800BDAAC(&v11);
      goto LABEL_8;
    }
    v9 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      *a2 = v9;
    }
    sub_1800BDAAC(&v11);
    sub_18000F708(&v12);
  }
  return 0LL;
}
