/*
 * XREFs of ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1C0046718
 * Callers:
 *     DxgkFlipOverlay @ 0x1C027A650 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C027AB10 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C027B110 (DxgkUpdateOverlay.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003FB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00056F8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 */

__int64 __fastcall COREOVERLAYACCESS::AcquireShared(COREOVERLAYACCESS *this)
{
  COREACCESS::AcquireShared((COREOVERLAYACCESS *)((char *)this + 8), 0LL);
  if ( *(_DWORD *)(*((_QWORD *)this + 9) + 28LL) == 1 )
    return 0LL;
  COREACCESS::Release((COREOVERLAYACCESS *)((char *)this + 8));
  return 3221226166LL;
}
