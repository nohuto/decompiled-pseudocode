/*
 * XREFs of ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C0026A1C
 * Callers:
 *     DxgkFlipOverlay @ 0x1C027A650 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C027AB10 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C027B110 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 */

void __fastcall COREOVERLAYACCESS::~COREOVERLAYACCESS(COREOVERLAYACCESS *this)
{
  COREACCESS::~COREACCESS((COREOVERLAYACCESS *)((char *)this + 8));
}
