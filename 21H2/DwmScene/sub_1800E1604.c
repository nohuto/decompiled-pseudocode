/*
 * XREFs of sub_1800E1604 @ 0x1800E1604
 * Callers:
 *     sub_180108550 @ 0x180108550 (sub_180108550.c)
 *     sub_180108788 @ 0x180108788 (sub_180108788.c)
 *     sub_180108D1C @ 0x180108D1C (sub_180108D1C.c)
 *     sub_180108F00 @ 0x180108F00 (sub_180108F00.c)
 *     sub_1801099B0 @ 0x1801099B0 (sub_1801099B0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800E1604(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 result; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  __int128 v12; // [rsp+20h] [rbp-20h] BYREF
  __int128 v13; // [rsp+30h] [rbp-10h] BYREF

  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 18, a2);
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 20, a3);
  v6 = a1[2];
  v12 = 0LL;
  v7 = a3[1];
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = a3[1];
  }
  *(_QWORD *)&v12 = *a3;
  *((_QWORD *)&v12 + 1) = v7;
  v13 = 0LL;
  v8 = a2[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a2[1];
  }
  *(_QWORD *)&v13 = *a2;
  *((_QWORD *)&v13 + 1) = v8;
  result = (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v6 + 80LL))(v6, &v13, &v12);
  v10 = (volatile signed __int32 *)a2[1];
  if ( v10 )
  {
    result = (unsigned int)_InterlockedDecrement(v10 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      result = (unsigned int)_InterlockedDecrement(v10 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = (volatile signed __int32 *)a3[1];
  if ( v11 )
  {
    result = (unsigned int)_InterlockedDecrement(v11 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      result = (unsigned int)_InterlockedDecrement(v11 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return result;
}
