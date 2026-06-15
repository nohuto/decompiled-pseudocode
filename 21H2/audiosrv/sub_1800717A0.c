/*
 * XREFs of sub_1800717A0 @ 0x1800717A0
 * Callers:
 *     sub_1800F7230 @ 0x1800F7230 (sub_1800F7230.c)
 * Callees:
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_180071C40 @ 0x180071C40 (sub_180071C40.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800F746C @ 0x1800F746C (sub_1800F746C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800717A0(_QWORD *a1, _QWORD *a2, _DWORD *a3, _QWORD *a4, _DWORD *a5)
{
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  int v11; // edi
  _DWORD *v13; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = sub_18006A18C(0x38uLL);
  v10 = v9;
  v13 = v9;
  if ( v9 )
  {
    v9[3] = 1;
    *(_QWORD *)v9 = off_18014AA58;
    if ( qword_18019E418 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
    *(_QWORD *)v10 = off_18014AB20;
    *((_QWORD *)v10 + 3) = 0LL;
    *((_QWORD *)v10 + 4) = 0LL;
    *((_BYTE *)v10 + 44) = 0;
    *((_QWORD *)v10 + 6) = 0LL;
    v13 = 0LL;
    v11 = sub_1800F746C((_DWORD)v10, *a2, *a3, *a4, *a5);
    if ( v11 >= 0 )
    {
      if ( v10 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
      *a1 = v10;
      v11 = 0;
    }
    if ( v10 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  else
  {
    v11 = -2147024882;
  }
  sub_180071C40(&v13);
  return (unsigned int)v11;
}
