/*
 * XREFs of sub_1800834AC @ 0x1800834AC
 * Callers:
 *     sub_1800821F4 @ 0x1800821F4 (sub_1800821F4.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800834AC(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rdx
  signed __int32 v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rbx
  volatile signed __int32 *v10; // rbx
  __int64 v12; // rbx
  volatile signed __int32 *v13; // rbx
  __int128 v14; // [rsp+20h] [rbp-20h] BYREF
  __int128 v15; // [rsp+30h] [rbp-10h] BYREF

  sub_1800839A4(a1);
  v14 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  v5 = *a2;
  *(_QWORD *)&v14 = v5;
  *((_QWORD *)&v14 + 1) = v4;
  if ( v5 )
  {
    while ( v5 != a1 )
    {
      sub_1800839A4(v5);
      v15 = 0LL;
      v6 = *(_QWORD *)(v5 + 64);
      if ( v6 )
      {
        while ( 1 )
        {
          v7 = *(_DWORD *)(v6 + 8);
          if ( !v7 )
            break;
          if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) )
          {
            v15 = *(_OWORD *)(v5 + 56);
            break;
          }
        }
      }
      std::shared_ptr<__ExceptionPtr>::operator=(&v14, (__int64 *)&v15);
      if ( *((_QWORD *)&v15 + 1) )
      {
        if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 8LL)) )
        {
          v8 = *((_QWORD *)&v15 + 1);
          (***((void (__fastcall ****)(_QWORD))&v15 + 1))(*((_QWORD *)&v15 + 1));
          if ( !_InterlockedDecrement((volatile signed __int32 *)(v8 + 12)) )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v15 + 1) + 8LL))(*((_QWORD *)&v15 + 1));
        }
      }
      v5 = v14;
      if ( !(_QWORD)v14 )
      {
        v4 = *((_QWORD *)&v14 + 1);
        goto LABEL_17;
      }
    }
    if ( *((_QWORD *)&v14 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL)) )
      {
        v12 = *((_QWORD *)&v14 + 1);
        (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v12 + 12)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
      }
    }
    v13 = (volatile signed __int32 *)a2[1];
    if ( v13 )
    {
      if ( !_InterlockedDecrement(v13 + 2) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
    return 1;
  }
  else
  {
LABEL_17:
    if ( v4 )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v4 + 8)) )
      {
        v9 = *((_QWORD *)&v14 + 1);
        (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v9 + 12)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
      }
    }
    v10 = (volatile signed __int32 *)a2[1];
    if ( v10 && !_InterlockedDecrement(v10 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( !_InterlockedDecrement(v10 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
    return 0;
  }
}
