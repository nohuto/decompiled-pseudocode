/*
 * XREFs of ?FreeResourceManagerProxy@@YAXXZ @ 0x180001E4C
 * Callers:
 *     DllMain @ 0x18000A9A8 (DllMain.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18000AB50 (_guard_dispatch_icall_nop.c)
 */

void FreeResourceManagerProxy(void)
{
  if ( qword_180024788 )
    (**(void (__fastcall ***)(__int64, __int64))qword_180024788)(qword_180024788, 1LL);
  qword_180024788 = 0LL;
  RtlDeleteCriticalSection(&s_csProxy);
}
