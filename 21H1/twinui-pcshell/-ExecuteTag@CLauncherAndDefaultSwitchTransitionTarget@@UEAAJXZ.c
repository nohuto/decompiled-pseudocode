/*
 * XREFs of ?ExecuteTag@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJXZ @ 0x1803A7190
 * Callers:
 *     <none>
 * Callees:
 *     ?AdjustSourceRectForNonClientArea@@YAXPEAUHWND__@@PEBUtagRECT@@PEAU2@@Z @ 0x1803A6EB8 (-AdjustSourceRectForNonClientArea@@YAXPEAUHWND__@@PEBUtagRECT@@PEAU2@@Z.c)
 */

__int64 __fastcall CLauncherAndDefaultSwitchTransitionTarget::ExecuteTag(
        CLauncherAndDefaultSwitchTransitionTarget *this,
        const struct tagRECT *a2)
{
  unsigned int v2; // esi

  v2 = 0;
  if ( *((_DWORD *)this + 10) != 4095 )
  {
    AdjustSourceRectForNonClientArea(*((HWND *)this + 7), a2, (struct tagRECT *)((char *)this + 72));
    return (unsigned int)DwmpTransitionWindowWithRects(
                           *((_QWORD *)this + 7),
                           *((_DWORD *)this + 11) ^ (*((_DWORD *)this + 10) ^ *((_DWORD *)this + 11)) & 0xFFFu,
                           (char *)this + 72,
                           (char *)this + 88);
  }
  return v2;
}
