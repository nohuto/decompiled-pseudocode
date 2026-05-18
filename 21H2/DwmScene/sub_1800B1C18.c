/*
 * XREFs of sub_1800B1C18 @ 0x1800B1C18
 * Callers:
 *     sub_1800AD770 @ 0x1800AD770 (sub_1800AD770.c)
 *     sub_1800AF730 @ 0x1800AF730 (sub_1800AF730.c)
 *     sub_1800AFDFC @ 0x1800AFDFC (sub_1800AFDFC.c)
 *     sub_1800B2250 @ 0x1800B2250 (sub_1800B2250.c)
 *     sub_1800C9D68 @ 0x1800C9D68 (sub_1800C9D68.c)
 *     sub_1800DD57C @ 0x1800DD57C (sub_1800DD57C.c)
 *     sub_1800F9F20 @ 0x1800F9F20 (sub_1800F9F20.c)
 *     sub_1800FF63C @ 0x1800FF63C (sub_1800FF63C.c)
 *     sub_180111970 @ 0x180111970 (sub_180111970.c)
 *     sub_180111E90 @ 0x180111E90 (sub_180111E90.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B1C18(__int64 a1, __int64 *a2)
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
