/*
 * XREFs of ??9?$RedirectedFieldtop@J@RedirectedRecttagMONITORrcMonitorReal@tagMONITOR@@QBEEABJ@Z @ 0x14FAB0
 * Callers:
 *     ?CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z @ 0x37040 (-CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z.c)
 *     _IsChildWindowDpiBoundary@4 @ 0x38846 (_IsChildWindowDpiBoundary@4.c)
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

bool __thiscall tagMONITOR::RedirectedRecttagMONITORrcMonitorReal::RedirectedFieldtop<long>::operator!=(
        char *this,
        _DWORD *a2)
{
  return *(_DWORD *)(*(_DWORD *)(this - 13) + 20) != *a2;
}
