/*
 * XREFs of sub_180019324 @ 0x180019324
 * Callers:
 *     sub_180019380 @ 0x180019380 (sub_180019380.c)
 *     sub_18001A7C0 @ 0x18001A7C0 (sub_18001A7C0.c)
 *     sub_18001AA00 @ 0x18001AA00 (sub_18001AA00.c)
 *     sub_18001B11C @ 0x18001B11C (sub_18001B11C.c)
 *     sub_18001F180 @ 0x18001F180 (sub_18001F180.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180019324(__int64 a1)
{
  __int64 v1; // rcx
  volatile signed __int32 *v2; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 < 0 )
  {
    v2 = (volatile signed __int32 *)(2 * v1);
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      if ( v2 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 32LL))(v2, 1LL);
      if ( qword_18005ADB0 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
    }
  }
  return result;
}
