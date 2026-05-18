/*
 * XREFs of sub_180033220 @ 0x180033220
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010454 @ 0x180010454 (sub_180010454.c)
 *     sub_1800186E0 @ 0x1800186E0 (sub_1800186E0.c)
 *     sub_180024694 @ 0x180024694 (sub_180024694.c)
 *     sub_1800265A4 @ 0x1800265A4 (sub_1800265A4.c)
 *     sub_180062688 @ 0x180062688 (sub_180062688.c)
 *     sub_180067FF0 @ 0x180067FF0 (sub_180067FF0.c)
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall sub_180033220(__int64 a1)
{
  __int64 v3; // rdx
  signed __int32 v4; // eax
  _QWORD *v5; // rbx
  char v6; // al
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int128 v18; // [rsp+20h] [rbp-29h] BYREF
  __int64 v19[3]; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v20[3]; // [rsp+48h] [rbp-1h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp+17h]
  __int64 v22; // [rsp+68h] [rbp+1Fh] BYREF
  __int128 v23; // [rsp+70h] [rbp+27h]

  if ( !(unsigned __int8)sub_180067FF0() )
  {
    sub_1801163DC(&unk_1802080A0, 3LL, "Failed to create CommandList object");
    return 0;
  }
  if ( !*(_QWORD *)(a1 + 144) )
  {
    v23 = 0LL;
    v3 = *(_QWORD *)(a1 + 80);
    if ( v3 )
    {
      while ( 1 )
      {
        v4 = *(_DWORD *)(v3 + 8);
        if ( !v4 )
          break;
        if ( v4 == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v4 + 1, v4) )
        {
          v23 = *(_OWORD *)(a1 + 72);
          break;
        }
      }
    }
    v18 = 0LL;
    if ( *((_QWORD *)&v23 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v23 + 1) + 8LL));
    *(_OWORD *)v19 = v23;
    sub_1800186E0(&v18, v19);
    v22 = 0LL;
    sub_180024694(v18, &v22);
    v5 = (_QWORD *)(a1 + 144);
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 304LL))(v22);
    v7 = v22;
    v8 = *(_QWORD *)(a1 + 144);
    if ( (v6 & 1) != 0 )
    {
      if ( v8 )
      {
        *v5 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 344LL))(v7, a1 + 144);
    }
    else
    {
      if ( v8 )
      {
        *v5 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 352LL))(v7, 0LL, a1 + 144);
      sub_1800265A4(v18, v9);
      if ( v9 < 0 )
      {
        sub_1801163DC(&unk_1802080A0, 3LL, "Failed to create DeferredContext with HRESULT error 0x%.8x", v9);
        v10 = v22;
        if ( v22 )
        {
          v22 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        if ( *((_QWORD *)&v18 + 1) )
        {
          if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL)) )
          {
            v11 = *((_QWORD *)&v18 + 1);
            (***((void (__fastcall ****)(_QWORD))&v18 + 1))(*((_QWORD *)&v18 + 1));
            if ( !_InterlockedDecrement((volatile signed __int32 *)(v11 + 12)) )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v18 + 1) + 8LL))(*((_QWORD *)&v18 + 1));
          }
        }
        if ( *((_QWORD *)&v23 + 1) )
        {
          if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v23 + 1) + 8LL)) )
          {
            v12 = *((_QWORD *)&v23 + 1);
            (***((void (__fastcall ****)(_QWORD))&v23 + 1))(*((_QWORD *)&v23 + 1));
            if ( !_InterlockedDecrement((volatile signed __int32 *)(v12 + 12)) )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v23 + 1) + 8LL))(*((_QWORD *)&v23 + 1));
          }
        }
        return 0;
      }
      v13 = sub_180062688(a1, v20);
      if ( *(_QWORD *)(v13 + 24) >= 0x10uLL )
        v13 = *(_QWORD *)v13;
      sub_180010454(*(__int64 **)(a1 + 144), (const char *)v13);
      if ( v21 >= 0x10 )
      {
        v14 = v20[0];
        if ( v21 + 1 >= 0x1000 )
        {
          v14 = *(_QWORD *)(v20[0] - 8LL);
          if ( (unsigned __int64)(v20[0] - v14 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v14, v21 + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v14);
      }
    }
    v15 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    if ( *((_QWORD *)&v18 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL)) )
      {
        v16 = *((_QWORD *)&v18 + 1);
        (***((void (__fastcall ****)(_QWORD))&v18 + 1))(*((_QWORD *)&v18 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v16 + 12)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v18 + 1) + 8LL))(*((_QWORD *)&v18 + 1));
      }
    }
    if ( *((_QWORD *)&v23 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v23 + 1) + 8LL)) )
      {
        v17 = *((_QWORD *)&v23 + 1);
        (***((void (__fastcall ****)(_QWORD))&v23 + 1))(*((_QWORD *)&v23 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v17 + 12)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v23 + 1) + 8LL))(*((_QWORD *)&v23 + 1));
      }
    }
  }
  return *(_QWORD *)(a1 + 152)
      || (***(int (__fastcall ****)(_QWORD, void *))(a1 + 144))(*(_QWORD *)(a1 + 144), &unk_18013D7D0) >= 0;
}
