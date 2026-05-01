/*
 * XREFs of sub_18000E744 @ 0x18000E744
 * Callers:
 *     sub_18000FD90 @ 0x18000FD90 (sub_18000FD90.c)
 *     ??_G_Condition_variable@details@Concurrency@@QEAAPEAXI@Z @ 0x180010000 (--_G_Condition_variable@details@Concurrency@@QEAAPEAXI@Z.c)
 *     sub_180014580 @ 0x180014580 (sub_180014580.c)
 *     sub_18001F210 @ 0x18001F210 (sub_18001F210.c)
 *     sub_18001F368 @ 0x18001F368 (sub_18001F368.c)
 *     sub_18002E910 @ 0x18002E910 (sub_18002E910.c)
 *     sub_18002F7F0 @ 0x18002F7F0 (sub_18002F7F0.c)
 *     sub_180031280 @ 0x180031280 (sub_180031280.c)
 *     sub_1800312E0 @ 0x1800312E0 (sub_1800312E0.c)
 *     sub_180031B00 @ 0x180031B00 (sub_180031B00.c)
 *     sub_1800342D0 @ 0x1800342D0 (sub_1800342D0.c)
 *     sub_180034400 @ 0x180034400 (sub_180034400.c)
 *     sub_18003C1D0 @ 0x18003C1D0 (sub_18003C1D0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000E744(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 < 0 )
  {
    v3 = (volatile signed __int32 *)(2 * v2);
    result = (unsigned int)_InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      if ( v3 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 1LL);
      if ( qword_18005ADB0 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
    }
  }
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
