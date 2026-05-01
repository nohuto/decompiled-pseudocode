/*
 * XREFs of ??1?$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ @ 0x1803CB3CC
 * Callers:
 *     _CSwitchController::_SwitchToApp_::_1_::dtor$0 @ 0x1803CC7AC (_CSwitchController--_SwitchToApp_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CMemString<CMemString_PolicyCoTaskMem>::~CMemString<CMemString_PolicyCoTaskMem>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
}
