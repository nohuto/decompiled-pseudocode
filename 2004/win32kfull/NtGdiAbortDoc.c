/*
 * XREFs of NtGdiAbortDoc @ 0x1C027D7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C015A504 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 */

__int64 __fastcall NtGdiAbortDoc(HDC a1)
{
  return bEndDocInternal(a1, 1u, 1);
}
