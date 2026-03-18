/*
 * XREFs of NtGdiExcludeClipRect @ 0x1C001C8F0
 * Callers:
 *     <none>
 * Callees:
 *     GreExcludeClipRect @ 0x1C001C804 (GreExcludeClipRect.c)
 */

__int64 __fastcall NtGdiExcludeClipRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  return GreExcludeClipRect(a1, a2, a3, a4, a5);
}
