/*
 * XREFs of NtGdiRectVisible @ 0x1C0097700
 * Callers:
 *     <none>
 * Callees:
 *     GreRectVisible @ 0x1C009775C (GreRectVisible.c)
 */

__int64 __fastcall NtGdiRectVisible(HDC a1)
{
  return GreRectVisible(a1);
}
