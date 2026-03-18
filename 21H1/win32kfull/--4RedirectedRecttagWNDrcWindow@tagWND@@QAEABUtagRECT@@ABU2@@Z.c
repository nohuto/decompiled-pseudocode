/*
 * XREFs of ??4RedirectedRecttagWNDrcWindow@tagWND@@QAEABUtagRECT@@ABU2@@Z @ 0x9B93E
 * Callers:
 *     _zzzResetSharedDesktops@12 @ 0x9B7CA (_zzzResetSharedDesktops@12.c)
 *     _zzzUpdateLayeredWindow@40 @ 0xBABAE (_zzzUpdateLayeredWindow@40.c)
 * Callees:
 *     <none>
 */

_DWORD *__thiscall tagWND::RedirectedRecttagWNDrcWindow::operator=(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  *(_DWORD *)(*(this - 12) + 52) = *a2;
  result = a2;
  *(_DWORD *)(*(this - 12) + 56) = a2[1];
  *(_DWORD *)(*(this - 12) + 60) = a2[2];
  *(_DWORD *)(*(this - 12) + 64) = a2[3];
  return result;
}
