/*
 * XREFs of BgkSetTextColor @ 0x140551530
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1405515F8 (BgkpAcquireConsole.c)
 */

__int64 __fastcall BgkSetTextColor(unsigned int a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( a1 < 0x10 && (unsigned __int8)BgkpAcquireConsole() )
  {
    (*(void (__fastcall **)(char *, _QWORD))(qword_140C54D30 + 16))((char *)Palette + 4 * v1, 0LL);
    ExReleaseRundownProtection(&stru_140C0B8C8);
  }
  return 0LL;
}
