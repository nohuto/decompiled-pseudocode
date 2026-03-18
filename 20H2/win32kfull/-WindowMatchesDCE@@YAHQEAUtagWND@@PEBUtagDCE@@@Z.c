/*
 * XREFs of ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C0091B70
 * Callers:
 *     ChangeRedirectionParentInDCEs @ 0x1C0091758 (ChangeRedirectionParentInDCEs.c)
 *     UnredirectDCEs @ 0x1C0091808 (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x1C0091AD0 (RedirectDCEs.c)
 *     ?UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z @ 0x1C01E71EC (-UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C0091BB0 (IsDesktopWindow.c)
 *     _IsDescendant @ 0x1C0091BD8 (_IsDescendant.c)
 */

__int64 __fastcall WindowMatchesDCE(struct tagWND *const a1, const struct tagDCE *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // r9d
  __int64 v4; // r10

  if ( (unsigned int)IsDesktopWindow(a1) )
  {
    LOBYTE(v3) = v2 == *(_QWORD *)(v4 + 16);
  }
  else if ( (unsigned int)IsDescendant(v2, *(_QWORD *)(v4 + 16)) )
  {
    ++v3;
  }
  return v3;
}
