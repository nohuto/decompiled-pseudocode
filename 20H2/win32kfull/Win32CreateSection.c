/*
 * XREFs of Win32CreateSection @ 0x1C0119CA0
 * Callers:
 *     CreateDesktopHeap @ 0x1C0119BE8 (CreateDesktopHeap.c)
 *     cMapRemoteFonts @ 0x1C0289C0C (cMapRemoteFonts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32CreateSection(_QWORD *a1)
{
  int Section; // ebx

  Section = MmCreateSection(a1, 983071LL, 0LL);
  if ( Section >= 0 )
    ObDeleteCapturedInsertInfo(*a1);
  return (unsigned int)Section;
}
