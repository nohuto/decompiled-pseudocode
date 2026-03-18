/*
 * XREFs of MUIBugCheck @ 0x1405B45E8
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x1406ED910 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MUIBugCheck(int a1)
{
  KeBugCheckEx(0x12Au, 2uLL, a1, 0LL, 0LL);
}
