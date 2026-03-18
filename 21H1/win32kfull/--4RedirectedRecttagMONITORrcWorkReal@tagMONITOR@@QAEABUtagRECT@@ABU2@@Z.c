/*
 * XREFs of ??4RedirectedRecttagMONITORrcWorkReal@tagMONITOR@@QAEABUtagRECT@@ABU2@@Z @ 0x15706
 * Callers:
 *     ?Reset@PlaceHolderMonitor@@QAEXPAUtagMONITORPOS@@@Z @ 0x156AE (-Reset@PlaceHolderMonitor@@QAEXPAUtagMONITORPOS@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

_DWORD *__thiscall tagMONITOR::RedirectedRecttagMONITORrcWorkReal::operator=(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  *(_DWORD *)(*(this - 4) + 32) = *a2;
  result = a2;
  *(_DWORD *)(*(this - 4) + 36) = a2[1];
  *(_DWORD *)(*(this - 4) + 40) = a2[2];
  *(_DWORD *)(*(this - 4) + 44) = a2[3];
  return result;
}
