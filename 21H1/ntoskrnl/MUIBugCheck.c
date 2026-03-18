/*
 * XREFs of MUIBugCheck @ 0x1405B3EC8
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x1406CC610 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MUIBugCheck(int a1)
{
  KeBugCheckEx(0x12Au, 2uLL, a1, 0LL, 0LL);
}
