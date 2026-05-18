/*
 * XREFs of sub_1801144FC @ 0x1801144FC
 * Callers:
 *     sub_18001680C @ 0x18001680C (sub_18001680C.c)
 * Callees:
 *     sub_180113EF0 @ 0x180113EF0 (sub_180113EF0.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1801144FC(__int64 a1)
{
  volatile signed __int32 *v2; // rax
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rax
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int128 v12; // [rsp+20h] [rbp-30h] BYREF
  __int128 v13; // [rsp+30h] [rbp-20h] BYREF
  __int128 v14; // [rsp+40h] [rbp-10h] BYREF

  v14 = 0LL;
  v2 = (volatile signed __int32 *)operator new(0x18uLL);
  v3 = v2;
  if ( v2 )
  {
    *((_DWORD *)v2 + 2) = 1;
    *((_DWORD *)v2 + 3) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Utils::ETWTraceProvider>::`vftable';
    *((_QWORD *)v2 + 2) = &Spectre::Utils::ETWTraceProvider::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
    _InterlockedAdd(v3 + 2, 1u);
  *(_QWORD *)&v14 = v3 + 4;
  *((_QWORD *)&v14 + 1) = v3;
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v13 = 0LL;
  v4 = (volatile signed __int32 *)operator new(0x18uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Utils::DefaultTimeProvider>::`vftable';
    *((_QWORD *)v4 + 2) = &Spectre::Utils::DefaultTimeProvider::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
    _InterlockedAdd(v5 + 2, 1u);
  *(_QWORD *)&v13 = v5 + 4;
  *((_QWORD *)&v13 + 1) = v5;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v12 = 0LL;
  v6 = (volatile signed __int32 *)operator new(0x18uLL);
  v7 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 2) = 1;
    *((_DWORD *)v6 + 3) = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<Spectre::Utils::DefaultMemoryStatsProvider>::`vftable';
    *((_QWORD *)v6 + 2) = &Spectre::Utils::DefaultMemoryStatsProvider::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
    _InterlockedAdd(v7 + 2, 1u);
  *(_QWORD *)&v12 = v7 + 4;
  *((_QWORD *)&v12 + 1) = v7;
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  sub_180113EF0(a1, (__int64 *)&v14, (__int64 *)&v13, (__int64 *)&v12);
  if ( *((_QWORD *)&v12 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v8 = *((_QWORD *)&v12 + 1);
      (***((void (__fastcall ****)(_QWORD))&v12 + 1))(*((_QWORD *)&v12 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v12 + 1) + 8LL))(*((_QWORD *)&v12 + 1));
    }
  }
  if ( *((_QWORD *)&v13 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v9 = *((_QWORD *)&v13 + 1);
      (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
    }
  }
  if ( *((_QWORD *)&v14 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v10 = *((_QWORD *)&v14 + 1);
      (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
    }
  }
  return a1;
}
