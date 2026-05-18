/*
 * XREFs of sub_180098B24 @ 0x180098B24
 * Callers:
 *     sub_1800984F0 @ 0x1800984F0 (sub_1800984F0.c)
 *     sub_180098950 @ 0x180098950 (sub_180098950.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18003659C @ 0x18003659C (sub_18003659C.c)
 *     sub_180067F50 @ 0x180067F50 (sub_180067F50.c)
 *     sub_18006821C @ 0x18006821C (sub_18006821C.c)
 *     sub_1800964A0 @ 0x1800964A0 (sub_1800964A0.c)
 *     sub_1800D2C04 @ 0x1800D2C04 (sub_1800D2C04.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180098B24(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rax
  int v7; // r14d
  __int64 *v8; // rdi
  int v9; // r15d
  __int64 v10; // rbx
  volatile signed __int32 *v11; // rbx
  unsigned int v12; // eax
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v15; // [rsp+38h] [rbp-20h]

  *(_DWORD *)(a1 + 292) |= 0x10000040u;
  *(_DWORD *)(a1 + 288) = 1;
  v6 = (_QWORD *)sub_180067F50(a1);
  v7 = *(_DWORD *)(a1 + 304);
  v8 = (__int64 *)(a1 + 272);
  v9 = *(_DWORD *)(a1 + 116);
  v10 = *(_QWORD *)(a1 + 272);
  if ( !v10 )
  {
    sub_1800964A0(v6, &v14, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(v8, &v14);
    v11 = v15;
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
    sub_18006821C(*v8, 8, 0);
    v10 = *v8;
  }
  v12 = sub_18003659C(8, v9);
  return sub_1800D2C04(v10, a2, a3, v12, v7, 8);
}
