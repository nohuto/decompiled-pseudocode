/*
 * XREFs of NtOpenKeyEx @ 0x140655310
 * Callers:
 *     <none>
 * Callees:
 *     CmOpenKey @ 0x140655330 (CmOpenKey.c)
 */

__int64 __fastcall NtOpenKeyEx(int a1, int a2, int a3, int a4)
{
  return CmOpenKey(a1, a2, a3, a4, 0LL);
}
