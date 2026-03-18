/*
 * XREFs of __ScreenToClient@8 @ 0xC76AE
 * Callers:
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 *     ?xxxQueryDropObject@@YGPAUtagCURSOR@@PAUtagWND@@PAUtagDROPSTRUCT@@@Z @ 0x1A61CC (-xxxQueryDropObject@@YGPAUtagCURSOR@@PAUtagWND@@PAUtagDROPSTRUCT@@@Z.c)
 *     _xxxArrangeIconicWindows@4 @ 0x1AEB2A (_xxxArrangeIconicWindows@4.c)
 * Callees:
 *     <none>
 */

int __fastcall _ScreenToClient(int a1, _DWORD *a2)
{
  int v2; // esi
  int result; // eax

  v2 = *(_DWORD *)(a1 + 20);
  result = *(_WORD *)(v2 + 30) & 0x3FFF;
  if ( result != 669 )
  {
    if ( (*(_BYTE *)(v2 + 18) & 0x40) != 0 )
      *a2 = *(_DWORD *)(v2 + 76) - *a2;
    else
      *a2 -= *(_DWORD *)(v2 + 68);
    result = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 72);
    a2[1] -= result;
  }
  return result;
}
