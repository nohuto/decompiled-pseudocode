/*
 * XREFs of sub_18003E810 @ 0x18003E810
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_1800331AC @ 0x1800331AC (sub_1800331AC.c)
 *     sub_1800338FC @ 0x1800338FC (sub_1800338FC.c)
 *     sub_18003F20C @ 0x18003F20C (sub_18003F20C.c)
 *     sub_180066CA8 @ 0x180066CA8 (sub_180066CA8.c)
 *     sub_180066DE0 @ 0x180066DE0 (sub_180066DE0.c)
 *     sub_18006AA58 @ 0x18006AA58 (sub_18006AA58.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18003E810(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rax
  volatile signed __int32 *v7; // rdi
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rbx
  void (__fastcall ***v12)(_QWORD); // rcx
  __int64 v13; // rbx
  __int128 v14; // [rsp+20h] [rbp-60h] BYREF
  __int128 v15; // [rsp+30h] [rbp-50h] BYREF
  __int128 v16; // [rsp+40h] [rbp-40h] BYREF
  __int128 v17; // [rsp+50h] [rbp-30h] BYREF
  __int128 v18; // [rsp+60h] [rbp-20h] BYREF
  __int128 v19; // [rsp+70h] [rbp-10h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+30h]
  __int64 v21; // [rsp+B8h] [rbp+38h] BYREF

  v2 = a1[65];
  if ( v2 )
  {
    a1[65] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = a1[66];
  if ( v3 )
  {
    a1[66] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v15 = 0LL;
  result = sub_18003F20C(a1, &v15);
  if ( (_QWORD)v15 )
  {
    v5 = 0LL;
    v20 = 0LL;
    v17 = 0LL;
    v6 = (_QWORD *)sub_18006AA58();
    v7 = (volatile signed __int32 *)v6[1];
    if ( v7 )
    {
      _InterlockedIncrement(v7 + 2);
      v7 = (volatile signed __int32 *)v6[1];
      v5 = 0LL;
    }
    *(_QWORD *)&v17 = *v6;
    *((_QWORD *)&v17 + 1) = v7;
    if ( (_QWORD)v17 )
    {
      v14 = 0LL;
      sub_180027DD0((__int64 *)&v14, &v17);
      v8 = sub_1800338FC((_QWORD *)v14, &v21);
      v5 = *v8;
      *v8 = 0LL;
      v20 = v5;
      v9 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      sub_1800331AC(v14);
      if ( *((_QWORD *)&v14 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v10 = *((_QWORD *)&v14 + 1);
          (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
        }
        v5 = v20;
      }
    }
    v18 = 0LL;
    sub_180066DE0(a1, &v18);
    v19 = 0LL;
    result = sub_180066CA8(a1, &v19);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 880LL))(v5);
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 888LL))(v5);
    }
    if ( v7 )
    {
      result = (unsigned int)_InterlockedDecrement(v7 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        result = (unsigned int)_InterlockedDecrement(v7 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
      v5 = v20;
    }
    if ( v5 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( *((_QWORD *)&v15 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v11 = *((_QWORD *)&v15 + 1);
      (***((void (__fastcall ****)(_QWORD))&v15 + 1))(*((_QWORD *)&v15 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v15 + 1) + 8LL))(*((_QWORD *)&v15 + 1));
    }
  }
  v12 = (void (__fastcall ***)(_QWORD))a1[67];
  if ( v12 )
  {
    (**v12)(v12);
    v16 = 0LL;
    result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=(a1 + 67, (__int64 *)&v16);
    if ( *((_QWORD *)&v16 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        v13 = *((_QWORD *)&v16 + 1);
        (***((void (__fastcall ****)(_QWORD))&v16 + 1))(*((_QWORD *)&v16 + 1));
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 12));
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v16 + 1) + 8LL))(*((_QWORD *)&v16 + 1));
      }
    }
  }
  return result;
}
