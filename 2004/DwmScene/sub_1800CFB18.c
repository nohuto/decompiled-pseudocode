/*
 * XREFs of sub_1800CFB18 @ 0x1800CFB18
 * Callers:
 *     sub_1800CFC70 @ 0x1800CFC70 (sub_1800CFC70.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800CFA9C @ 0x1800CFA9C (sub_1800CFA9C.c)
 *     sub_1800D0CC4 @ 0x1800D0CC4 (sub_1800D0CC4.c)
 *     sub_1801168B8 @ 0x1801168B8 (sub_1801168B8.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18011EB10 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_1800CFB18(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  signed int v6; // edi
  _QWORD *v7; // r14
  __int64 *v8; // rax
  volatile signed __int32 *v9; // rbx
  _QWORD v11[2]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v12[8]; // [rsp+40h] [rbp-38h] BYREF
  volatile signed __int32 *v13; // [rsp+48h] [rbp-30h]

  v11[1] = a1;
  sub_1801168B8(a1, a2);
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  v4 = operator new(0x10uLL);
  v4[1] = 0LL;
  a1[1] = v4;
  *v4 = a1 + 1;
  v11[0] = a1 + 6;
  a1[6] = 0LL;
  a1[7] = 0LL;
  v5 = operator new(0x28uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  a1[6] = v5;
  `eh vector constructor iterator'(
    a1 + 8,
    0x10uLL,
    5uLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_96);
  v6 = 0;
  v7 = a1 + 18;
  do
  {
    v8 = (__int64 *)sub_1800CFA9C((__int64)v12, a2);
    std::shared_ptr<__ExceptionPtr>::operator=(&a1[2 * v6 + 8], v8);
    v9 = v13;
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      }
    }
    *v7 = 0LL;
    v11[0] = v6;
    sub_1800D0CC4(a1 + 1, v11);
    ++v6;
    ++v7;
  }
  while ( (unsigned int)v6 < 5 );
  return a1;
}
