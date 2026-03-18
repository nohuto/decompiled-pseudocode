/*
 * XREFs of MUIBugCheck @ 0x1405B8148
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x1406C1890 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MUIBugCheck(int a1)
{
  KeBugCheckEx(0x12Au, 2uLL, a1, 0LL, 0LL);
}
