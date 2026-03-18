/*
 * XREFs of NtGdiRectVisible @ 0x1C0017830
 * Callers:
 *     <none>
 * Callees:
 *     GreRectVisible @ 0x1C001788C (GreRectVisible.c)
 */

__int64 __fastcall NtGdiRectVisible(HDC a1)
{
  return GreRectVisible(a1);
}
