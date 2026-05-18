/*
 * XREFs of sub_180020D00 @ 0x180020D00
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18001889C @ 0x18001889C (sub_18001889C.c)
 *     sub_180018900 @ 0x180018900 (sub_180018900.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_180020D00(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  __int64 *v5; // rdx
  char v6; // si
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int128 v10; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v11; // [rsp+50h] [rbp+20h] BYREF
  __int64 *v12; // [rsp+58h] [rbp+28h]
  __int64 *v13; // [rsp+60h] [rbp+30h]

  v2 = *a2;
  v4 = *a2;
  v10 = 0LL;
  sub_180089274(v4);
  v5 = *(__int64 **)(v2 + 376);
  v6 = 0;
  v12 = *(__int64 **)(v2 + 384);
  v13 = v5;
  v11 = 0LL;
  sub_180018900(&v11, v5, v12, 0);
  if ( v11 != *(__int64 **)(v2 + 384) )
    sub_18001889C((__int64 *)&v10, v11);
  if ( (_QWORD)v10 )
  {
    std::shared_ptr<__ExceptionPtr>::operator=(*(_QWORD **)(a1 + 8), &v10);
    if ( *((_QWORD *)&v10 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v7 = *((_QWORD *)&v10 + 1);
        (***((void (__fastcall ****)(_QWORD))&v10 + 1))(*((_QWORD *)&v10 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v7 + 12)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v10 + 1) + 8LL))(*((_QWORD *)&v10 + 1));
      }
    }
  }
  else
  {
    if ( *((_QWORD *)&v10 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v8 = *((_QWORD *)&v10 + 1);
        (***((void (__fastcall ****)(_QWORD))&v10 + 1))(*((_QWORD *)&v10 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v8 + 12)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v10 + 1) + 8LL))(*((_QWORD *)&v10 + 1));
      }
    }
    return 1;
  }
  return v6;
}
