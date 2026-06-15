/*
 * XREFs of sub_1800FA9C8 @ 0x1800FA9C8
 * Callers:
 *     sub_1800FABA0 @ 0x1800FABA0 (sub_1800FABA0.c)
 * Callees:
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB3A8 @ 0x1800BB3A8 (sub_1800BB3A8.c)
 *     sub_1800F9664 @ 0x1800F9664 (sub_1800F9664.c)
 *     sub_1800F99D0 @ 0x1800F99D0 (sub_1800F99D0.c)
 *     sub_1800FA570 @ 0x1800FA570 (sub_1800FA570.c)
 *     sub_1800FFCD4 @ 0x1800FFCD4 (sub_1800FFCD4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800FA9C8(__int64 a1, __int64 **a2, __int64 **a3, int a4, _QWORD *a5)
{
  _QWORD *v9; // rdi
  std::_Ref_count_base *v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rsi
  _QWORD *v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r9
  std::_Ref_count_base *v17; // rcx
  __int128 v19; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v21; // [rsp+68h] [rbp+10h] BYREF
  __int64 v22; // [rsp+70h] [rbp+18h] BYREF

  v9 = a5;
  *a5 = 0LL;
  v10 = (std::_Ref_count_base *)v9[1];
  v9[1] = 0LL;
  if ( v10 )
    sub_180052600(v10);
  a5 = 0LL;
  if ( (unsigned __int64)a3[3] >= 8 )
    a3 = (__int64 **)*a3;
  if ( (unsigned __int64)a2[3] >= 8 )
    a2 = (__int64 **)*a2;
  try
  {
    v11 = sub_1800FA570(a1, a2, a3, a4, 1, &a5);
    if ( v11 < 0 )
      sub_1800BB3A8((int)retaddr, 138, (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp", v11);
    v12 = (__int64)sub_18006A18C(0x28uLL);
    v13 = v12;
    v21 = (_QWORD *)v12;
    if ( v12 )
    {
      v14 = a5;
      v15 = 0LL;
      a5 = 0LL;
      v21 = v14;
      sub_180047458((__int64 *)&v21);
      v22 = a1;
      sub_180047458(&v22);
      v12 = sub_1800F99D0(v13, &v22, &v21);
    }
    else
    {
      v15 = (__int64)a5;
    }
    if ( !v12 )
      v12 = sub_1800FFCD4(retaddr, 140LL);
    v19 = 0LL;
    sub_1800F9664(&v19, v12);
    *v9 = v19;
    v17 = (std::_Ref_count_base *)v9[1];
    v9[1] = *((_QWORD *)&v19 + 1);
    if ( v17 )
      sub_180052600(v17);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  catch ( ... )
  {
    LODWORD(a5) = sub_1800C437C((int)retaddr, 144, (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp", v16);
    return (unsigned int)a5;
  }
  return 0LL;
}
