/*
 * XREFs of sub_180082F04 @ 0x180082F04
 * Callers:
 *     sub_1800822C0 @ 0x1800822C0 (sub_1800822C0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180082F04(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 *v4; // rbx
  volatile signed __int32 *v6; // rax
  __int64 v7; // rdi
  __int64 result; // rax
  signed __int32 v9; // eax
  bool v10; // zf
  volatile signed __int32 *v11; // rbx
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v13; // [rsp+28h] [rbp-10h]

  v3 = *a2;
  *a2 = 0LL;
  v4 = a2;
  v12 = v3;
  v6 = (volatile signed __int32 *)a2[1];
  a2[1] = 0LL;
  v13 = v6;
  if ( a2 != a1 )
  {
    v7 = a3 - (_QWORD)a2;
    do
    {
      v4 -= 2;
      std::shared_ptr<__ExceptionPtr>::operator=((__int64 *)((char *)v4 + v7), v4);
    }
    while ( v4 != a1 );
  }
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=(a1, &v12);
  if ( v13 )
  {
    v9 = _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF);
    v10 = v9 == 1;
    result = (unsigned int)(v9 - 1);
    if ( v10 )
    {
      v11 = v13;
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v11 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  return result;
}
