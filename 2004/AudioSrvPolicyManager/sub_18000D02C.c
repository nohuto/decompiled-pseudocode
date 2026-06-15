/*
 * XREFs of sub_18000D02C @ 0x18000D02C
 * Callers:
 *     sub_18000CF70 @ 0x18000CF70 (sub_18000CF70.c)
 *     sub_1800322B0 @ 0x1800322B0 (sub_1800322B0.c)
 *     sub_180032FAC @ 0x180032FAC (sub_180032FAC.c)
 * Callees:
 *     sub_18000F0A8 @ 0x18000F0A8 (sub_18000F0A8.c)
 *     sub_18000F0C0 @ 0x18000F0C0 (sub_18000F0C0.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000D02C(__int64 *a1, unsigned int a2)
{
  __int64 v2; // r13
  _QWORD *v5; // rdi
  int v6; // ebp
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, __int64); // rax
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rsi
  signed __int32 v11; // eax
  bool v12; // cc
  __int64 result; // rax

  v2 = *a1;
  v5 = (_QWORD *)(*a1 - 24);
  v6 = *((_DWORD *)v5 + 2);
  v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 32LL))(*v5);
  v8 = (**v7)(v7, a2, 2LL);
  v9 = v8;
  if ( !v8 )
    sub_18000F0A8();
  v10 = v8 + 24;
  if ( v6 < (int)a2 )
    a2 = v6;
  sub_18000F0C0(v8 + 24, (int)(a2 + 1), v2, a2 + 1);
  *(_DWORD *)(v9 + 8) = v6;
  v11 = _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 4, 0xFFFFFFFF);
  v12 = v11 <= 1;
  result = (unsigned int)(v11 - 1);
  if ( v12 )
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v5 + 8LL))(*v5, v5);
  *a1 = v10;
  return result;
}
