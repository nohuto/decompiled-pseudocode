/*
 * XREFs of sub_180076910 @ 0x180076910
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     unknown_libname_100 @ 0x180011544 (unknown_libname_100.c)
 *     sub_18006187C @ 0x18006187C (sub_18006187C.c)
 *     sub_18006D1D4 @ 0x18006D1D4 (sub_18006D1D4.c)
 *     sub_180073258 @ 0x180073258 (sub_180073258.c)
 *     sub_180073FB4 @ 0x180073FB4 (sub_180073FB4.c)
 *     sub_1800753CC @ 0x1800753CC (sub_1800753CC.c)
 *     sub_180075490 @ 0x180075490 (sub_180075490.c)
 *     sub_1800A10C8 @ 0x1800A10C8 (sub_1800A10C8.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Thrd_id @ 0x18011FA5C (_Thrd_id.c)
 *     _Thrd_join @ 0x18011FA98 (_Thrd_join.c)
 *     _Cnd_signal @ 0x18011FAB6 (_Cnd_signal.c)
 *     ?_Throw_Cpp_error@std@@YAXH@Z @ 0x18011FAC2 (-_Throw_Cpp_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
unsigned int __fastcall sub_180076910(__int64 a1, __int64 a2)
{
  int i; // eax
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rbx
  unsigned int result; // eax
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rbx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int128 v16; // [rsp+20h] [rbp-50h] BYREF
  __int128 v17; // [rsp+30h] [rbp-40h] BYREF
  __int128 v18; // [rsp+40h] [rbp-30h] BYREF
  __int128 v19; // [rsp+50h] [rbp-20h] BYREF
  _Thrd_t v20; // [rsp+60h] [rbp-10h] BYREF

  sub_18006187C(a1 + 8, a2);
  for ( i = sub_180075490(a1); i; i = sub_180075490(a1) )
  {
    v4 = sub_180075490(a1);
    v16 = 0LL;
    sub_1800753CC(a1, &v16, v4 - 1);
    sub_180073FB4(a1, &v16);
    if ( *((_QWORD *)&v16 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v5 = *((_QWORD *)&v16 + 1);
        (***((void (__fastcall ****)(_QWORD))&v16 + 1))(*((_QWORD *)&v16 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v16 + 1) + 8LL))(*((_QWORD *)&v16 + 1));
      }
    }
  }
  sub_1800A10C8(*(_QWORD *)(a1 + 512));
  v17 = 0LL;
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 512), (__int64 *)&v17);
  if ( *((_QWORD *)&v17 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v6 = *((_QWORD *)&v17 + 1);
      (***((void (__fastcall ****)(_QWORD))&v17 + 1))(*((_QWORD *)&v17 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v17 + 1) + 8LL))(*((_QWORD *)&v17 + 1));
    }
  }
  sub_180073258(a1);
  v7 = *(_QWORD *)(a1 + 728);
  sub_18006D1D4(a1 + 728, a1 + 728, *(__int64 **)(v7 + 8));
  *(_QWORD *)(v7 + 8) = v7;
  *(_QWORD *)v7 = v7;
  *(_QWORD *)(v7 + 16) = v7;
  *(_QWORD *)(a1 + 736) = 0LL;
  v18 = 0LL;
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 480), (__int64 *)&v18);
  if ( *((_QWORD *)&v18 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v8 = *((_QWORD *)&v18 + 1);
      (***((void (__fastcall ****)(_QWORD))&v18 + 1))(*((_QWORD *)&v18 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v18 + 1) + 8LL))(*((_QWORD *)&v18 + 1));
    }
  }
  v19 = 0LL;
  result = (unsigned int)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 496), (__int64 *)&v19);
  if ( *((_QWORD *)&v19 + 1) )
  {
    result = _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v19 + 1) + 8LL));
    if ( !result )
    {
      v10 = *((_QWORD *)&v19 + 1);
      (***((void (__fastcall ****)(_QWORD))&v19 + 1))(*((_QWORD *)&v19 + 1));
      result = _InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
      if ( !result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v19 + 1) + 8LL))(*((_QWORD *)&v19 + 1));
    }
  }
  v11 = *(_QWORD *)(a1 + 712);
  v12 = *(_QWORD *)(a1 + 704);
  if ( v12 != v11 )
  {
    do
    {
      result = unknown_libname_100(v12, 0);
      v12 += 16LL;
    }
    while ( v12 != v11 );
    v12 = *(_QWORD *)(a1 + 704);
  }
  *(_QWORD *)(a1 + 712) = v12;
  if ( *(_DWORD *)(a1 + 1192) )
  {
    v13 = Mtx_lock((_Mtx_t)(a1 + 1280));
    if ( v13 )
    {
      std::_Throw_C_error(v13);
    }
    else
    {
      *(_BYTE *)(a1 + 1360) = 1;
      v14 = Cnd_signal((_Cnd_t)(a1 + 1208));
      if ( !v14 )
      {
        v15 = Mtx_unlock((_Mtx_t)(a1 + 1280));
        if ( !v15 )
        {
          if ( *(_DWORD *)(a1 + 1192) )
          {
            if ( *(_DWORD *)(a1 + 1192) == Thrd_id() )
            {
              std::_Throw_Cpp_error(5);
              JUMPOUT(0x180076C22LL);
            }
            v20 = *(_Thrd_t *)(a1 + 1184);
            result = Thrd_join(&v20, 0LL);
            if ( result )
            {
              std::_Throw_Cpp_error(2);
              __debugbreak();
            }
            *(_OWORD *)(a1 + 1184) = 0LL;
            return result;
          }
LABEL_36:
          std::_Throw_Cpp_error(1);
          __debugbreak();
        }
LABEL_35:
        std::_Throw_C_error(v15);
        goto LABEL_36;
      }
    }
    std::_Throw_C_error(v14);
    goto LABEL_35;
  }
  return result;
}
