/*
 * XREFs of sub_18001E3F0 @ 0x18001E3F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001ACD0 @ 0x18001ACD0 (sub_18001ACD0.c)
 *     sub_18001AE70 @ 0x18001AE70 (sub_18001AE70.c)
 *     sub_180026130 @ 0x180026130 (sub_180026130.c)
 *     sub_18002650C @ 0x18002650C (sub_18002650C.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001E3F0(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  void *v9; // rax
  int v10; // esi
  __int64 v11; // rdi
  signed __int32 v12; // eax
  int v13; // eax
  __int64 v15; // [rsp+20h] [rbp-28h]

  *a1 |= 4u;
  v4 = 0LL;
  v15 = 0LL;
  v9 = operator new(0x70uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  if ( v9 )
  {
    v11 = sub_18001ACD0((__int64)v9);
    v10 = sub_18001AE70(v11);
    if ( v10 >= 0 )
    {
      if ( v11 )
      {
        v12 = _InterlockedIncrement((volatile signed __int32 *)(v11 + 68));
        if ( (*(_BYTE *)(v11 + 88) & 4) == 0 && v12 == 2 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 8LL))(qword_18005ADB0);
      }
      v4 = v11;
      v15 = v11;
      if ( v11 )
        sub_180026130(v11);
      v10 = 0;
    }
    else if ( v11 )
    {
      sub_180026130(v11);
    }
    if ( v10 >= 0 )
    {
      v10 = sub_18002650C(v4, a3, a4);
      if ( v10 >= 0 )
      {
        v13 = *a1;
        if ( (*a1 & 4) == 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 68));
          v13 = *a1;
          v4 = v15;
        }
        *(_DWORD *)(v4 + 88) = v13;
        *(_QWORD *)(v4 + 80) = a2;
        v4 = 0LL;
        v10 = 0;
      }
    }
  }
  else
  {
    v10 = -2147024882;
  }
  if ( v4 )
    sub_180026130(v4);
  return (unsigned int)v10;
}
