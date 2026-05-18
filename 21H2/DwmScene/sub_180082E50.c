/*
 * XREFs of sub_180082E50 @ 0x180082E50
 * Callers:
 *     sub_1800822C0 @ 0x1800822C0 (sub_1800822C0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180082E50(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rax
  __int64 *v5; // rdi
  __int64 *v6; // rbx
  volatile signed __int32 *v7; // rax
  __int64 result; // rax
  signed __int32 v9; // eax
  bool v10; // zf
  volatile signed __int32 *v11; // rbx
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *i; // [rsp+28h] [rbp-10h]

  v3 = *a1;
  *a1 = 0LL;
  v5 = a2;
  v12 = v3;
  v6 = a1;
  v7 = (volatile signed __int32 *)a1[1];
  a1[1] = 0LL;
  for ( i = v7; v5 != a3; v5 += 2 )
  {
    std::shared_ptr<__ExceptionPtr>::operator=(v6, v5);
    v6 += 2;
  }
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=(v6, &v12);
  if ( i )
  {
    v9 = _InterlockedExchangeAdd(i + 2, 0xFFFFFFFF);
    v10 = v9 == 1;
    result = (unsigned int)(v9 - 1);
    if ( v10 )
    {
      v11 = i;
      (**(void (__fastcall ***)(volatile signed __int32 *))i)(i);
      result = (unsigned int)_InterlockedDecrement(v11 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)i + 8LL))(i);
    }
  }
  return result;
}
