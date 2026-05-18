/*
 * XREFs of sub_1800AC348 @ 0x1800AC348
 * Callers:
 *     sub_1800A7EA0 @ 0x1800A7EA0 (sub_1800A7EA0.c)
 *     sub_1800A9E60 @ 0x1800A9E60 (sub_1800A9E60.c)
 *     sub_1800AA52C @ 0x1800AA52C (sub_1800AA52C.c)
 *     sub_1800AC980 @ 0x1800AC980 (sub_1800AC980.c)
 *     sub_1800C4498 @ 0x1800C4498 (sub_1800C4498.c)
 *     sub_1800D7CAC @ 0x1800D7CAC (sub_1800D7CAC.c)
 *     sub_1800F4650 @ 0x1800F4650 (sub_1800F4650.c)
 *     sub_1800F9D6C @ 0x1800F9D6C (sub_1800F9D6C.c)
 *     sub_18010C0A0 @ 0x18010C0A0 (sub_18010C0A0.c)
 *     sub_18010C5C0 @ 0x18010C5C0 (sub_18010C5C0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800AC348(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 result; // rax
  volatile signed __int32 *v6; // rbx
  signed __int32 v7; // eax
  bool v8; // zf

  v4 = (__int64 *)(a1 + 152);
  result = *v4;
  if ( *a2 != *v4 )
  {
    result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=(v4, a2);
    *(_DWORD *)(a1 + 544) |= 4u;
    *(_BYTE *)(a1 + 1612) = 1;
  }
  v6 = (volatile signed __int32 *)a2[1];
  if ( v6 )
  {
    v7 = _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF);
    v8 = v7 == 1;
    result = (unsigned int)(v7 - 1);
    if ( v8 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      result = (unsigned int)_InterlockedDecrement(v6 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return result;
}
