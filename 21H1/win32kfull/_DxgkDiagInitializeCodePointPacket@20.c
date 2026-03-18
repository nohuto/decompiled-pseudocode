/*
 * XREFs of _DxgkDiagInitializeCodePointPacket@20 @ 0xCEDDC
 * Callers:
 *     _GreSetDeviceGammaRamp@16 @ 0xCEB1A (_GreSetDeviceGammaRamp@16.c)
 * Callees:
 *     <none>
 */

int __thiscall DxgkDiagInitializeCodePointPacket(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax

  this[10] = 0;
  this[8] = 0;
  this[9] = 0;
  *this = 6;
  this[1] = 64;
  memset(this + 2, 0, 0x18u);
  result = a3;
  this[15] = 0;
  this[12] = 94;
  this[13] = 2;
  this[14] = a3;
  return result;
}
