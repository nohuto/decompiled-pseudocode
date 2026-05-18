/*
 * XREFs of sub_18001182C @ 0x18001182C
 * Callers:
 *     sub_180017E00 @ 0x180017E00 (sub_180017E00.c)
 * Callees:
 *     sub_180010D18 @ 0x180010D18 (sub_180010D18.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18007AB84 @ 0x18007AB84 (sub_18007AB84.c)
 *     sub_180085564 @ 0x180085564 (sub_180085564.c)
 *     sub_180091044 @ 0x180091044 (sub_180091044.c)
 *     sub_180091048 @ 0x180091048 (sub_180091048.c)
 *     sub_180091050 @ 0x180091050 (sub_180091050.c)
 *     sub_180091054 @ 0x180091054 (sub_180091054.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001182C(__int64 a1, int a2, _QWORD *a3)
{
  char v6; // di
  int v7; // ebx
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 *v11; // rax
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rdx
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v16; // [rsp+28h] [rbp-20h]

  *(_DWORD *)(a1 + 48) = a2;
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 16), a3);
  if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 )
  {
    v6 = 0;
    v7 = a2 - 1;
    if ( v7 )
      v8 = v7 == 2;
    else
      v8 = 2;
    v9 = sub_180085564(*a3);
    v10 = sub_18007AB84(v9, 1LL);
    v11 = sub_180010D18(*(_QWORD *)(a1 + 16), &v15);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 32), v11);
    v12 = v16;
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( !_InterlockedDecrement(v12 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
    sub_180091054(*(_QWORD *)(a1 + 32), v8);
    sub_180091048(*(_QWORD *)(a1 + 32), 1000LL);
    *(_BYTE *)(*(_QWORD *)(a1 + 32) + 72LL) = 1;
    sub_180091044(*(_QWORD *)(a1 + 32), 3LL);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1802103E8, 0LL)
      || (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_1802107A8, 0LL)
      || (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180210B68, 0LL) )
    {
      v6 = 1;
    }
    LOBYTE(v13) = v6;
    sub_180091050(*(_QWORD *)(a1 + 32), v13);
  }
  return 0LL;
}
