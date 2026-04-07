/*
 * XREFs of ?SetSourceRect@CDCompDesktopThumbnailCVI@@QEAAJAEBUtagRECT@@@Z @ 0x1800B6CB8
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x18003DFB0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDCompDesktopThumbnailCVI::SetSourceRect(CDCompDesktopThumbnailCVI *this, const struct tagRECT *a2)
{
  unsigned int v3; // ebx
  HMONITOR v4; // rax

  v3 = 0;
  v4 = MonitorFromRect(a2, 0);
  if ( v4 )
  {
    *((_QWORD *)this + 7) = v4;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x21Au);
  }
  return v3;
}
