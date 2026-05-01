/*
 * XREFs of sub_180029DC0 @ 0x180029DC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 *     sub_180036DB0 @ 0x180036DB0 (sub_180036DB0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180044870 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180029DC0(volatile signed __int64 *a1, __int64 *a2)
{
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  volatile signed __int64 *v6; // rsi
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  volatile signed __int64 **v11; // rax
  void *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbp
  int v15; // edi
  __int64 v16; // rax
  _DWORD v18[6]; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int64 *v19; // [rsp+48h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  if ( a1 )
  {
    v4 = *((_QWORD *)a1 + 17);
    while ( v4 >= 0 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64(a1 + 17, v4 + 1, v4);
      if ( v5 == v4 )
        goto LABEL_6;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v4 + 16));
  }
LABEL_6:
  v19 = a1;
  v6 = a1;
  if ( a1 )
  {
    v7 = *((_QWORD *)a1 + 17);
    while ( v7 >= 0 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64(a1 + 17, v7 + 1, v7);
      if ( v8 == v7 )
        goto LABEL_11;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v7 + 16));
LABEL_11:
    v6 = v19;
  }
  v18[2] = 0;
  v18[0] = 3;
  v18[1] = 128;
  v9 = operator new(0x28uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v10 = v9;
  if ( v9 )
  {
    v9[1] = a1;
    v11 = (volatile signed __int64 **)(v9 + 2);
    *v11 = 0LL;
    if ( v11 != &v19 )
    {
      *v11 = a1;
      v6 = 0LL;
    }
    *((_DWORD *)v10 + 6) = 0;
    *v10 = off_18004D170;
    `eh vector constructor iterator'(
      v10 + 4,
      8uLL,
      1uLL,
      (void (*)(void *))__crt_deferred_errno_cache::__crt_deferred_errno_cache,
      (void (*)(void *))sub_1800081D0);
    *((_DWORD *)v10 + 6) = 0;
  }
  else
  {
    v10 = 0LL;
  }
  *a2 = 0LL;
  if ( !v10 )
    goto LABEL_25;
  v12 = operator new(0x148uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  if ( !v12 || (v13 = sub_180036DB0(v12, v18, L"Windows.Foundation.IAsyncOperation`1<Boolean>", 0LL), (v14 = v13) == 0) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v10)(v10, 1LL);
LABEL_25:
    v15 = -2147024882;
    goto LABEL_26;
  }
  *(_QWORD *)(v13 + 256) = v10;
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v13 + 8) + 104LL))(v13 + 8);
  if ( v15 >= 0 )
  {
    v16 = v14 + 176;
    v14 = 0LL;
    *a2 = v16;
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v14 + 8) + 16LL))(v14 + 8);
LABEL_26:
  if ( v6 )
    sub_1800120A0(v6);
  if ( v15 < 0 )
    sub_180003268(retaddr, 1052, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v15);
  if ( a1 )
    sub_1800120A0(a1);
  return (unsigned int)v15;
}
