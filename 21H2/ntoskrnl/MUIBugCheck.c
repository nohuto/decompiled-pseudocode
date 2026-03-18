/*
 * XREFs of MUIBugCheck @ 0x140642840
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x1406BE9A0 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MUIBugCheck(int a1)
{
  KeBugCheckEx(0x12Au, 2uLL, a1, 0LL, 0LL);
}
