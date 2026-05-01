/*
 * XREFs of sub_180009FE4 @ 0x180009FE4
 * Callers:
 *     sub_18001C4E4 @ 0x18001C4E4 (sub_18001C4E4.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18000BA30 @ 0x18000BA30 (sub_18000BA30.c)
 *     sub_18000C280 @ 0x18000C280 (sub_18000C280.c)
 *     sub_18000DBF0 @ 0x18000DBF0 (sub_18000DBF0.c)
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180009FE4(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rbx
  int v5; // esi
  _QWORD *v6; // rax
  __int64 v7; // r9
  _QWORD *v8; // rdi
  int v9; // r9d
  int v10; // edx
  _QWORD *v11; // rdi
  _QWORD *v12; // rbp
  int v13; // eax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v8 = v6;
  if ( v6 )
  {
    *v6 = &off_180048718;
    v6[2] = &off_1800486E0;
    sub_180011A50(v6 + 3);
    v8[8] = 1LL;
    *v8 = off_180048A70;
    v8[1] = off_180048A50;
    v8[2] = off_180048A18;
    v8[3] = off_1800489D0;
    if ( qword_18005ADB0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 8LL))(qword_18005ADB0);
    *v8 = off_180048E50;
    v8[1] = off_180048E30;
    v8[2] = off_180048DF8;
    v8[3] = off_180048DB0;
    *((_DWORD *)v8 + 18) = 0;
    *((_DWORD *)v8 + 19) = 0;
    *((_DWORD *)v8 + 20) = 0;
    v8[11] = 0LL;
    *((_DWORD *)v8 + 26) = 0;
    InitializeSRWLock((PSRWLOCK)v8 + 14);
    *((_DWORD *)v8 + 30) = 0;
    *((_DWORD *)v8 + 32) = 0;
  }
  else
  {
    v5 = -2147024882;
    v8 = 0LL;
  }
  if ( v5 >= 0 )
  {
    v4 = v8;
    v8 = 0LL;
  }
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  if ( v5 >= 0 )
  {
    v11 = *(_QWORD **)(a1 + 120);
    v12 = *(_QWORD **)(a1 + 128);
    while ( v11 != v12 )
    {
      LOBYTE(v7) = 1;
      v13 = sub_18000DBF0(v4, 0LL, *v11, v7);
      v5 = v13;
      if ( v13 < 0 )
      {
        v10 = 77;
        goto LABEL_18;
      }
      ++v11;
    }
    v13 = sub_18000C280(v4, a2);
    v5 = v13;
    if ( v13 >= 0 )
      goto LABEL_20;
    v10 = 80;
LABEL_18:
    v9 = v13;
  }
  else
  {
    v9 = v5;
    v10 = 73;
  }
  sub_180003268(retaddr, v10, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp", v9);
LABEL_20:
  if ( v4 )
    sub_18000BA30(v4);
  return (unsigned int)v5;
}
