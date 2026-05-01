/*
 * XREFs of sub_18001E15C @ 0x18001E15C
 * Callers:
 *     sub_18001DDD8 @ 0x18001DDD8 (sub_18001DDD8.c)
 *     sub_18001E1D8 @ 0x18001E1D8 (sub_18001E1D8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_18001E15C(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( &v6 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
  }
  v6 = *a1;
  v4 = v6;
  *a1 = v3;
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 12), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
      if ( qword_18005ADB0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
    }
  }
  return a1;
}
