/*
 * XREFs of sub_180066CA8 @ 0x180066CA8
 * Callers:
 *     sub_180028D60 @ 0x180028D60 (sub_180028D60.c)
 *     sub_180028F70 @ 0x180028F70 (sub_180028F70.c)
 *     sub_18003E750 @ 0x18003E750 (sub_18003E750.c)
 *     sub_18003E810 @ 0x18003E810 (sub_18003E810.c)
 *     sub_18003F610 @ 0x18003F610 (sub_18003F610.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180066CA8(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  volatile signed __int32 *v4; // rbx

  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 256), a2);
  v4 = (volatile signed __int32 *)a2[1];
  if ( v4 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      result = (unsigned int)_InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return result;
}
