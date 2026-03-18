/*
 * XREFs of BgkSetTextColor @ 0x1404FDD20
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1404FDDE8 (BgkpAcquireConsole.c)
 */

__int64 __fastcall BgkSetTextColor(unsigned int a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( a1 < 0x10 && (unsigned __int8)BgkpAcquireConsole() )
  {
    (*(void (__fastcall **)(char *, _QWORD))(qword_140C50A08 + 16))((char *)Palette + 4 * v1, 0LL);
    ExReleaseRundownProtection_0(&stru_140C11258);
  }
  return 0LL;
}
