/*
 * XREFs of ??4RedirectedRecttagWNDrcClient@tagWND@@QAEABUtagRECT@@ABU2@@Z @ 0x9B904
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _zzzResetSharedDesktops@12 @ 0x9B7CA (_zzzResetSharedDesktops@12.c)
 *     _zzzUpdateLayeredWindow@40 @ 0xBABAE (_zzzUpdateLayeredWindow@40.c)
 * Callees:
 *     <none>
 */

_DWORD *__thiscall tagWND::RedirectedRecttagWNDrcClient::operator=(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  *(_DWORD *)(*(this - 13) + 68) = *a2;
  result = a2;
  *(_DWORD *)(*(this - 13) + 72) = a2[1];
  *(_DWORD *)(*(this - 13) + 76) = a2[2];
  *(_DWORD *)(*(this - 13) + 80) = a2[3];
  return result;
}
