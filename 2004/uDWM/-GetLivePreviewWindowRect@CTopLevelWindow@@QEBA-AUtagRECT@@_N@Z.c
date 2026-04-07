/*
 * XREFs of ?GetLivePreviewWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x180094900
 * Callers:
 *     ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18008360C (-_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x180084BE4 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 * Callees:
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x180002698 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 */

struct tagRECT *__fastcall CTopLevelWindow::GetLivePreviewWindowRect(
        CTopLevelWindow *this,
        struct tagRECT *__return_ptr retstr,
        char a3)
{
  CTopLevelWindow::GetActualWindowRect(this, retstr, 0, 1, 1);
  if ( a3 && (*((_BYTE *)this + 240) & 4) == 0 )
  {
    retstr->left -= *((_DWORD *)this + 165);
    retstr->top -= *((_DWORD *)this + 167);
    retstr->right += *((_DWORD *)this + 166);
    retstr->bottom += *((_DWORD *)this + 168);
  }
  return retstr;
}
