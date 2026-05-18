/*
 * XREFs of sub_1800B8EE0 @ 0x1800B8EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18001889C @ 0x18001889C (sub_18001889C.c)
 *     sub_1800B8A54 @ 0x1800B8A54 (sub_1800B8A54.c)
 *     sub_1800B8B54 @ 0x1800B8B54 (sub_1800B8B54.c)
 *     sub_1800B9484 @ 0x1800B9484 (sub_1800B9484.c)
 *     sub_1800F0A00 @ 0x1800F0A00 (sub_1800F0A00.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B8EE0(__int64 a1, _QWORD *a2)
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
  sub_18001889C((__int64 *)&v9, a2);
  v5 = v9;
  *(_DWORD *)(v9 + 92) = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(v5 + 96) = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(v5 + 100) = *(_DWORD *)(a1 + 100);
  *(_DWORD *)(v5 + 104) = *(_DWORD *)(a1 + 104);
  sub_1800B8A54((_DWORD *)(v5 + 108), (_DWORD *)(a1 + 108));
  sub_1800B8B54((_DWORD *)(v5 + 256), (_DWORD *)(a1 + 256));
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v5 + 432), (_QWORD *)(a1 + 432));
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v5 + 448), (_QWORD *)(a1 + 448));
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v5 + 512), (_QWORD *)(a1 + 512));
  *(_DWORD *)(v5 + 528) = *(_DWORD *)(a1 + 528);
  result = sub_1800B9484(v5);
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
