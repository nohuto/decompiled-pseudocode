/*
 * XREFs of sub_1800968E8 @ 0x1800968E8
 * Callers:
 *     sub_180098E6C @ 0x180098E6C (sub_180098E6C.c)
 *     sub_180098FA4 @ 0x180098FA4 (sub_180098FA4.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18003659C @ 0x18003659C (sub_18003659C.c)
 *     sub_18006821C @ 0x18006821C (sub_18006821C.c)
 *     sub_1800965B0 @ 0x1800965B0 (sub_1800965B0.c)
 *     sub_1800D2C04 @ 0x1800D2C04 (sub_1800D2C04.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800968E8(__int64 *a1, __int64 a2, unsigned int a3, int a4, int a5, int a6, _QWORD *a7)
{
  __int64 v11; // rbx
  volatile signed __int32 *v12; // rbx
  unsigned int v13; // eax
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF
  volatile signed __int32 *v16; // [rsp+38h] [rbp-30h]

  v11 = *a1;
  if ( !*a1 )
  {
    sub_1800965B0(a7, &v15, 1, (__int64)&a5);
    std::shared_ptr<__ExceptionPtr>::operator=(a1, &v15);
    v12 = v16;
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
    sub_18006821C(*a1, 8, 0);
    v11 = *a1;
  }
  v13 = sub_18003659C(5, a4);
  return sub_1800D2C04(v11, a2, a3, v13, a6, 5);
}
