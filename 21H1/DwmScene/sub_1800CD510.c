/*
 * XREFs of sub_1800CD510 @ 0x1800CD510
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180062590 @ 0x180062590 (sub_180062590.c)
 *     sub_180063C48 @ 0x180063C48 (sub_180063C48.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CD510(__int64 a1, int a2)
{
  __int64 result; // rax
  signed __int32 v5; // eax
  bool v6; // zf
  __int64 v7; // rbx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+30h] [rbp-18h] BYREF

  if ( a2 )
  {
    v9 = a2;
    sub_180063C48((__int64 *)(a1 + 120), (unsigned int *)&v9);
    return sub_180062590(a1, a2);
  }
  else
  {
    v8 = 0LL;
    result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 136), (__int64 *)&v8);
    if ( *((_QWORD *)&v8 + 1) )
    {
      v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v8 + 1) + 8LL), 0xFFFFFFFF);
      v6 = v5 == 1;
      result = (unsigned int)(v5 - 1);
      if ( v6 )
      {
        v7 = *((_QWORD *)&v8 + 1);
        (***((void (__fastcall ****)(_QWORD))&v8 + 1))(*((_QWORD *)&v8 + 1));
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v8 + 1) + 8LL))(*((_QWORD *)&v8 + 1));
      }
    }
  }
  return result;
}
