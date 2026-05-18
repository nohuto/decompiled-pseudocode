/*
 * XREFs of sub_180101720 @ 0x180101720
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800BCD4C @ 0x1800BCD4C (sub_1800BCD4C.c)
 *     sub_1800F0A00 @ 0x1800F0A00 (sub_1800F0A00.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180101720(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rbx
  volatile signed __int32 *v8; // rbx
  __int128 v9; // [rsp+20h] [rbp-20h] BYREF
  __int128 v10; // [rsp+30h] [rbp-10h] BYREF

  v10 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v10 = *a2;
  *((_QWORD *)&v10 + 1) = v4;
  sub_1800F0A00(a1, &v10);
  v9 = 0LL;
  sub_1800BCD4C((__int64 *)&v9, a2);
  v5 = v9;
  *(_DWORD *)(v9 + 112) = *(_DWORD *)(a1 + 112);
  *(_DWORD *)(v5 + 116) = *(_DWORD *)(a1 + 116);
  *(_DWORD *)(v5 + 120) = *(_DWORD *)(a1 + 120);
  *(_DWORD *)(v5 + 124) = *(_DWORD *)(a1 + 124);
  *(_DWORD *)(v5 + 128) = *(_DWORD *)(a1 + 128);
  *(_DWORD *)(v5 + 132) = *(_DWORD *)(a1 + 132);
  *(_DWORD *)(v5 + 88) = *(_DWORD *)(a1 + 88);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v5 + 96), (_QWORD *)(a1 + 96));
  *(_DWORD *)(v5 + 140) = *(_DWORD *)(a1 + 140);
  *(_DWORD *)(v5 + 144) = *(_DWORD *)(a1 + 144);
  *(_DWORD *)(v5 + 148) = *(_DWORD *)(a1 + 148);
  *(_DWORD *)(v5 + 136) = *(_DWORD *)(a1 + 136);
  *(_DWORD *)(v5 + 152) = *(_DWORD *)(a1 + 152);
  *(_DWORD *)(v5 + 156) = *(_DWORD *)(a1 + 156);
  *(_DWORD *)(v5 + 160) = *(_DWORD *)(a1 + 160);
  result = *(unsigned int *)(a1 + 164);
  *(_DWORD *)(v5 + 164) = result;
  if ( *((_QWORD *)&v9 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v7 = *((_QWORD *)&v9 + 1);
      (***((void (__fastcall ****)(_QWORD))&v9 + 1))(*((_QWORD *)&v9 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v9 + 1) + 8LL))(*((_QWORD *)&v9 + 1));
    }
  }
  v8 = (volatile signed __int32 *)a2[1];
  if ( v8 )
  {
    result = (unsigned int)_InterlockedDecrement(v8 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      result = (unsigned int)_InterlockedDecrement(v8 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return result;
}
