/*
 * XREFs of sub_1800E1408 @ 0x1800E1408
 * Callers:
 *     sub_18010848C @ 0x18010848C (sub_18010848C.c)
 *     sub_180108788 @ 0x180108788 (sub_180108788.c)
 *     sub_180108C24 @ 0x180108C24 (sub_180108C24.c)
 *     sub_180108D1C @ 0x180108D1C (sub_180108D1C.c)
 *     sub_180108F00 @ 0x180108F00 (sub_180108F00.c)
 *     sub_1801090C0 @ 0x1801090C0 (sub_1801090C0.c)
 *     sub_1801099B0 @ 0x1801099B0 (sub_1801099B0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800E1990 @ 0x1800E1990 (sub_1800E1990.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E1408(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  volatile signed __int32 *v6; // rcx
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-18h]

  sub_1800E1990();
  v4 = a2[1];
  v5 = *a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = *(volatile signed __int32 **)(a1 + 8);
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = v4;
  if ( v6 && _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 16), a2 + 2);
  *(_DWORD *)(a1 + 32) = *((_DWORD *)a2 + 8);
  *(_DWORD *)(a1 + 36) = *((_DWORD *)a2 + 9);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 5);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 7);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 9);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 11);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 13);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 15);
  *(_QWORD *)(a1 + 136) = a2[17];
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 144), a2 + 18);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 160), a2 + 20);
  *(_QWORD *)&v8 = 0LL;
  result = a1;
  BYTE8(v8) = 1;
  *((_DWORD *)a2 + 9) = 4;
  *(_OWORD *)(a2 + 5) = v8;
  a2[7] = 0LL;
  a2[8] = 0LL;
  a2[9] = 0LL;
  a2[10] = 0LL;
  a2[11] = 0LL;
  a2[12] = 0LL;
  a2[13] = 0LL;
  a2[14] = 0LL;
  a2[15] = 0LL;
  a2[16] = 0LL;
  a2[17] = 0LL;
  return result;
}
