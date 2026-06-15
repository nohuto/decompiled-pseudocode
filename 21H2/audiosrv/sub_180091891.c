/*
 * XREFs of sub_180091891 @ 0x180091891
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180091891(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        __int64 a14,
        __int64 a15,
        int a16)
{
  if ( a16 < 0 )
  {
    sub_18005E8F8((__int64)"CAudioSessionManager::RuntimeClassInitialize", 1512, a16);
    JUMPOUT(0x18002BAB5LL);
  }
  JUMPOUT(0x18002B9D6LL);
}
