/*
 * XREFs of sub_180034F94 @ 0x180034F94
 * Callers:
 *     sub_18002A5F4 @ 0x18002A5F4 (sub_18002A5F4.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18001003C @ 0x18001003C (sub_18001003C.c)
 *     sub_18001124C @ 0x18001124C (sub_18001124C.c)
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180034F94(void (__fastcall ***a1)(__int64, __int128 *, __int64 *), DWORD a2, int a3)
{
  void *v4; // rbx
  int v5; // edi
  __int64 v6; // rcx
  int v7; // eax
  int v8; // r9d
  int v9; // edx
  HRESULT v10; // eax
  void (__fastcall **v11)(__int64, __int128 *, __int64 *); // rbx
  __int64 *v12; // rax
  __int64 v13; // rcx
  void *v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  HANDLE pHandles; // [rsp+38h] [rbp-8h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+18h]
  DWORD dwindex; // [rsp+68h] [rbp+28h] BYREF
  int v20; // [rsp+70h] [rbp+30h] BYREF
  void *v21; // [rsp+78h] [rbp+38h]

  v20 = a3;
  dwindex = a2;
  v21 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_9:
    v8 = v5;
    v9 = 1404;
LABEL_15:
    sub_180003268(retaddr, v9, (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h", v8);
    goto LABEL_20;
  }
  *(_QWORD *)v4 = &off_180048EE8;
  sub_180011A50((_QWORD *)v4 + 1);
  v6 = qword_18005ADB0;
  *(_QWORD *)v4 = off_18004B2C8;
  *((_QWORD *)v4 + 1) = off_18004B280;
  *((_DWORD *)v4 + 11) = 1;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  *(_QWORD *)v4 = off_18004BB30;
  *((_QWORD *)v4 + 7) = 0LL;
  *((_QWORD *)v4 + 1) = off_18004B280;
  *((_DWORD *)v4 + 12) = 0;
  v7 = sub_18001124C((void **)v4 + 7);
  v5 = v7;
  if ( v7 >= 0 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 8LL))(v4);
    v21 = v4;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
    v5 = 0;
  }
  else
  {
    sub_180003268(retaddr, 1375, (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h", v7);
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( v5 < 0 )
    goto LABEL_9;
  v10 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, __int128 *, __int64 *), void *))(*a1)[6])(a1, v21);
  v5 = v10;
  if ( v10 < 0 )
  {
    v9 = 1405;
LABEL_14:
    v8 = v10;
    goto LABEL_15;
  }
  pHandles = (HANDLE)*((_QWORD *)v21 + 7);
  v10 = CoWaitForMultipleHandles(8u, 0xFFFFFFFF, 1u, &pHandles, &dwindex);
  v20 = v10;
  v5 = v10;
  if ( v10 < 0 )
  {
    v9 = 1417;
    goto LABEL_14;
  }
  if ( *((_DWORD *)v21 + 12) == 1 )
  {
    v5 = 0;
  }
  else
  {
    v16 = 0LL;
    v11 = *a1;
    v12 = sub_18001003C(&v16);
    (*v11)((__int64)a1, &xmmword_1800511C8, v12);
    v20 = -2147418113;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 64LL))(v16, &v20);
    v13 = v16;
    v5 = v20;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
LABEL_20:
  v14 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)v5;
}
