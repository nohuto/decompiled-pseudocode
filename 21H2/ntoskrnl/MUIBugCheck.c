/*
 * XREFs of MUIBugCheck @ 0x1405B9DA8
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x1405FB840 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MUIBugCheck(int a1)
{
  KeBugCheckEx(0x12Au, 2uLL, a1, 0LL, 0LL);
}
