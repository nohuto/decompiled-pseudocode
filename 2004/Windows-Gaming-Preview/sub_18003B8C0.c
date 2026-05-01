/*
 * XREFs of sub_18003B8C0 @ 0x18003B8C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18002F9B0 @ 0x18002F9B0 (sub_18002F9B0.c)
 *     sub_180031038 @ 0x180031038 (sub_180031038.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180044870 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

__int64 __fastcall sub_18003B8C0(volatile signed __int64 *a1, _QWORD *a2)
{
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  volatile signed __int64 *v6; // rdi
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  volatile signed __int64 **v9; // rax
  __int64 v10; // r8
  volatile signed __int64 **v11; // rsi
  volatile signed __int64 **v12; // rax
  int v13; // esi
  _DWORD v15[6]; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int64 *v16; // [rsp+48h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  if ( a1 )
  {
    v4 = *((_QWORD *)a1 + 7);
    while ( v4 >= 0 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64(a1 + 7, v4 + 1, v4);
      if ( v5 == v4 )
        goto LABEL_6;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v4 + 16));
  }
LABEL_6:
  v16 = a1;
  v6 = a1;
  if ( a1 )
  {
    v7 = *((_QWORD *)a1 + 7);
    while ( v7 >= 0 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64(a1 + 7, v7 + 1, v7);
      if ( v8 == v7 )
        goto LABEL_11;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v7 + 16));
LABEL_11:
    v6 = v16;
  }
  v15[2] = 0;
  v15[0] = 3;
  v15[1] = 128;
  v9 = (volatile signed __int64 **)operator new(0x28uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v11 = v9;
  if ( v9 )
  {
    v9[1] = a1;
    v12 = v9 + 2;
    *v12 = 0LL;
    if ( v12 != &v16 )
    {
      *v12 = a1;
      v6 = 0LL;
    }
    *((_DWORD *)v11 + 6) = 0;
    *v11 = (volatile signed __int64 *)off_18004D748;
    `eh vector constructor iterator'(
      v11 + 4,
      8uLL,
      1uLL,
      (void (*)(void *))__crt_deferred_errno_cache::__crt_deferred_errno_cache,
      (void (*)(void *))sub_1800081D0);
    *((_DWORD *)v11 + 6) = 0;
  }
  else
  {
    v11 = 0LL;
  }
  v13 = sub_180031038((__int64)v15, a2, v10, (void (__fastcall ***)(_QWORD, __int64))v11);
  if ( v6 )
    sub_18002F9B0(v6);
  if ( v13 < 0 )
    sub_180003268(
      retaddr,
      75,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
      v13);
  if ( a1 )
    sub_18002F9B0(a1);
  return (unsigned int)v13;
}
