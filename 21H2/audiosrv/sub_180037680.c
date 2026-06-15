/*
 * XREFs of sub_180037680 @ 0x180037680
 * Callers:
 *     sub_1800746F0 @ 0x1800746F0 (sub_1800746F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180037680(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int32 v2; // ebx

  v1 = a1 + 8;
  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 16));
  if ( !v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(a1 + 8);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
