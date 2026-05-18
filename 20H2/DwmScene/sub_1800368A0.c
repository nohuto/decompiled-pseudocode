/*
 * XREFs of sub_1800368A0 @ 0x1800368A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180032990 @ 0x180032990 (sub_180032990.c)
 *     sub_18009BA34 @ 0x18009BA34 (sub_18009BA34.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800368A0(__int64 a1, int a2, __int64 *a3, unsigned int a4)
{
  __int64 v5; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rbx
  volatile signed __int32 *v11; // rbx
  int v12; // edi
  int v13; // edi
  __int128 v14; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+40h] [rbp-30h]
  __int64 v16; // [rsp+48h] [rbp-28h] BYREF
  __int128 v17; // [rsp+50h] [rbp-20h] BYREF

  v16 = 0LL;
  v5 = *a3;
  if ( *a3 )
  {
    v8 = *(unsigned int *)(a1 + 88);
    v17 = 0LL;
    sub_18009BA34(v5, &v17, v8);
    v14 = 0LL;
    sub_180032990((__int64 *)&v14, &v17);
    v9 = *(_QWORD *)(v14 + 184);
    v15 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v16 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( *((_QWORD *)&v14 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL)) )
      {
        v10 = *((_QWORD *)&v14 + 1);
        (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v10 + 12)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
      }
    }
    v11 = (volatile signed __int32 *)*((_QWORD *)&v17 + 1);
    if ( *((_QWORD *)&v17 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL)) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( !_InterlockedDecrement(v11 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
  }
  v12 = a2 - 1;
  if ( v12 )
  {
    v13 = v12 - 3;
    if ( v13 )
    {
      if ( v13 == 1 )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 80LL))(
          *(_QWORD *)(a1 + 144),
          a4,
          1LL,
          &v16);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 256LL))(
        *(_QWORD *)(a1 + 144),
        a4,
        1LL,
        &v16);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 208LL))(
      *(_QWORD *)(a1 + 144),
      a4,
      1LL,
      &v16);
  }
}
