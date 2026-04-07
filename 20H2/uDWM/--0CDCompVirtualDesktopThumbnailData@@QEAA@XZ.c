/*
 * XREFs of ??0CDCompVirtualDesktopThumbnailData@@QEAA@XZ @ 0x1800956B0
 * Callers:
 *     ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x180098810 (-RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

CDCompVirtualDesktopThumbnailData *__fastcall CDCompVirtualDesktopThumbnailData::CDCompVirtualDesktopThumbnailData(
        CDCompVirtualDesktopThumbnailData *this)
{
  CDCompVirtualDesktopThumbnailData *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_OWORD *)((char *)this + 36) = 0LL;
  *(_OWORD *)((char *)this + 52) = 0LL;
  *(_QWORD *)((char *)this + 68) = 0LL;
  *((_DWORD *)this + 19) = 0;
  *((_BYTE *)this + 80) = 0;
  *(_QWORD *)this = &CDCompVirtualDesktopThumbnailData::`vftable';
  result = this;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  return result;
}
