/*
 * XREFs of sub_18001ED44 @ 0x18001ED44
 * Callers:
 *     sub_18001C890 @ 0x18001C890 (sub_18001C890.c)
 * Callees:
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001ED44(__int64 a1, _QWORD *a2)
{
  int AgileReference; // ebx
  __int64 v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF
  __int64 v14; // [rsp+80h] [rbp+40h]
  __int64 v15; // [rsp+88h] [rbp+48h]

  *a2 = 0LL;
  AgileReference = 0;
  v14 = 0LL;
  v15 = 0LL;
  v12 = 0LL;
  if ( a1 )
    AgileReference = RoGetAgileReference(0LL, &unk_180050F88, a1, &v12);
  if ( AgileReference >= 0 )
  {
    v4 = v12;
    v12 = 0LL;
    v13 = v4;
    v5 = operator new(0x48uLL, (const struct std::nothrow_t *)&unk_18005AF88);
    v6 = 0LL;
    v7 = v5;
    if ( v5 )
    {
      v8 = v5 + 1;
      sub_180011A50(v5 + 1);
      v9 = qword_18005ADB0;
      *v7 = off_18004AA48;
      *v8 = off_18004AA00;
      *((_DWORD *)v7 + 15) = 1;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v7[8] = 0LL;
      if ( v7 + 8 != &v13 )
      {
        v7[8] = v4;
        v4 = 0LL;
      }
      *v7 = off_18004AD90;
      *v8 = off_18004AA00;
      v6 = v7;
    }
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    if ( v6 )
    {
      *a2 = v6;
      AgileReference = 0;
    }
    else
    {
      AgileReference = -2147024882;
    }
  }
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)AgileReference;
}
