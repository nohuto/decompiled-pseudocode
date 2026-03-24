/*
 * XREFs of MUIBugCheck @ 0x1405B9B78
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x14069C770 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MUIBugCheck(int a1)
{
  KeBugCheckEx(0x12Au, 2uLL, a1, 0LL, 0LL);
}
