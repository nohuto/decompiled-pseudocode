/*
 * XREFs of sub_18008CCD4 @ 0x18008CCD4
 * Callers:
 *     sub_18008BD60 @ 0x18008BD60 (sub_18008BD60.c)
 *     sub_1800A50F8 @ 0x1800A50F8 (sub_1800A50F8.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800A5080 @ 0x1800A5080 (sub_1800A5080.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18008CCD4(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int128 v5; // rax
  __int64 v6; // rbx
  volatile signed __int32 *v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-30h] BYREF
  __int128 v9; // [rsp+30h] [rbp-20h] BYREF
  __int128 v10; // [rsp+40h] [rbp-10h] BYREF

  v8 = 0LL;
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=(a1 + 15, (__int64 *)&v8);
  if ( *((_QWORD *)&v8 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v8 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v3 = *((_QWORD *)&v8 + 1);
      (***((void (__fastcall ****)(_QWORD))&v8 + 1))(*((_QWORD *)&v8 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v3 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v8 + 1) + 8LL))(*((_QWORD *)&v8 + 1));
    }
  }
  v4 = a1[17];
  if ( v4 )
  {
    *((_QWORD *)&v5 + 1) = a1[28];
    v9 = 0LL;
    if ( *((_QWORD *)&v5 + 1) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v5 + 1) + 12LL));
      *((_QWORD *)&v5 + 1) = a1[28];
      v4 = a1[17];
    }
    *(_QWORD *)&v5 = a1[27];
    v9 = v5;
    sub_1800A5080(v4, &v9);
    v10 = 0LL;
    result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=(a1 + 17, (__int64 *)&v10);
    if ( *((_QWORD *)&v10 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        v6 = *((_QWORD *)&v10 + 1);
        (***((void (__fastcall ****)(_QWORD))&v10 + 1))(*((_QWORD *)&v10 + 1));
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 12));
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v10 + 1) + 8LL))(*((_QWORD *)&v10 + 1));
      }
    }
    v7 = (volatile signed __int32 *)a1[28];
    a1[28] = 0LL;
    a1[27] = 0LL;
    if ( v7 )
    {
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
