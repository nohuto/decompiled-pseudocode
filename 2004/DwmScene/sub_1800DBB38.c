/*
 * XREFs of sub_1800DBB38 @ 0x1800DBB38
 * Callers:
 *     sub_180102BBC @ 0x180102BBC (sub_180102BBC.c)
 *     sub_180102EB8 @ 0x180102EB8 (sub_180102EB8.c)
 *     sub_180103354 @ 0x180103354 (sub_180103354.c)
 *     sub_18010344C @ 0x18010344C (sub_18010344C.c)
 *     sub_180103630 @ 0x180103630 (sub_180103630.c)
 *     sub_1801037F0 @ 0x1801037F0 (sub_1801037F0.c)
 *     sub_1801040E0 @ 0x1801040E0 (sub_1801040E0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800DC0C0 @ 0x1800DC0C0 (sub_1800DC0C0.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DBB38(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  volatile signed __int32 *v6; // rcx
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-18h]

  sub_1800DC0C0();
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
