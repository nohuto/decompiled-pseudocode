/*
 * XREFs of ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C0027CE8
 * Callers:
 *     DxgkFlipOverlay @ 0x1C027B8B0 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C027BD70 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C027C370 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00040C0 (--1COREACCESS@@QEAA@XZ.c)
 */

void __fastcall COREOVERLAYACCESS::~COREOVERLAYACCESS(COREOVERLAYACCESS *this)
{
  COREACCESS::~COREACCESS((COREOVERLAYACCESS *)((char *)this + 8));
}
