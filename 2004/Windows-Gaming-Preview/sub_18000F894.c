/*
 * XREFs of sub_18000F894 @ 0x18000F894
 * Callers:
 *     sub_18000A1B0 @ 0x18000A1B0 (sub_18000A1B0.c)
 *     sub_180029FB8 @ 0x180029FB8 (sub_180029FB8.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18001003C @ 0x18001003C (sub_18001003C.c)
 *     sub_18001124C @ 0x18001124C (sub_18001124C.c)
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000F894(void (__fastcall ***a1)(__int64, __int128 *, __int64), DWORD a2, int a3)
{
  char *v4; // rax
  char *v5; // rbx
  int v6; // edi
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  int v10; // r9d
  int v11; // edx
  HRESULT v12; // eax
  void (__fastcall **v13)(__int64, __int128 *, __int64); // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  char *v16; // rcx
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  HANDLE pHandles; // [rsp+38h] [rbp-8h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+18h]
  DWORD dwindex; // [rsp+68h] [rbp+28h] BYREF
  int v22; // [rsp+70h] [rbp+30h] BYREF
  char *v23; // [rsp+78h] [rbp+38h]

  v22 = a3;
  dwindex = a2;
  v23 = 0LL;
  v4 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v5 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_9:
    v10 = v6;
    v11 = 1404;
LABEL_15:
    sub_180003268(retaddr, v11, (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h", v10);
    goto LABEL_20;
  }
  v7 = v4 + 8;
  sub_180011A50(v4 + 8);
  v8 = qword_18005ADB0;
  *(_QWORD *)v5 = off_1800481C0;
  *v7 = off_180048178;
  *((_DWORD *)v5 + 11) = 1;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  *(_QWORD *)v5 = off_180048440;
  *((_QWORD *)v5 + 7) = 0LL;
  *v7 = off_180048178;
  *((_DWORD *)v5 + 12) = 0;
  v9 = sub_18001124C();
  v6 = v9;
  if ( v9 >= 0 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
    v23 = v5;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = 0;
  }
  else
  {
    sub_180003268(retaddr, 1375, (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h", v9);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v6 < 0 )
    goto LABEL_9;
  v12 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, __int128 *, __int64), char *))(*a1)[6])(a1, v23);
  v6 = v12;
  if ( v12 < 0 )
  {
    v11 = 1405;
LABEL_14:
    v10 = v12;
    goto LABEL_15;
  }
  pHandles = (HANDLE)*((_QWORD *)v23 + 7);
  v12 = CoWaitForMultipleHandles(8u, 0xFFFFFFFF, 1u, &pHandles, &dwindex);
  v22 = v12;
  v6 = v12;
  if ( v12 < 0 )
  {
    v11 = 1417;
    goto LABEL_14;
  }
  if ( *((_DWORD *)v23 + 12) == 1 )
  {
    v6 = 0;
  }
  else
  {
    v18 = 0LL;
    v13 = *a1;
    v14 = sub_18001003C(&v18);
    (*v13)((__int64)a1, &xmmword_1800511C8, v14);
    v22 = -2147418113;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 64LL))(v18, &v22);
    v15 = v18;
    v6 = v22;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
LABEL_20:
  v16 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return (unsigned int)v6;
}
