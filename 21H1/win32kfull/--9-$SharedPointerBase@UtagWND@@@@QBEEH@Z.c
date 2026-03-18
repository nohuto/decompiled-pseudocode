/*
 * XREFs of ??9?$SharedPointerBase@UtagWND@@@@QBEEH@Z @ 0x2A4F2
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _ImeCanDestroyDefIMEforChild@8 @ 0xCB942 (_ImeCanDestroyDefIMEforChild@8.c)
 *     _UnlockDesktopMenu@4 @ 0xD65B8 (_UnlockDesktopMenu@4.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     <none>
 */

bool __thiscall SharedPointerBase<tagWND>::operator!=(_DWORD *this, int a2)
{
  return *this != 0;
}
