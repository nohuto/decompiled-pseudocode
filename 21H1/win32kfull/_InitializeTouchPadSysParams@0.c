/*
 * XREFs of _InitializeTouchPadSysParams@0 @ 0xE7F0E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall InitializeTouchPadSysParams()
{
  int v0; // ecx
  _DWORD *v1; // edx
  int v2; // eax
  int v4; // [esp+0h] [ebp-20h]
  _BYTE v5[24]; // [esp+8h] [ebp-18h] BYREF

  memset(v5, 0, sizeof(v5));
  qmemcpy(_gTouchPadParameters, v5, 0x18u);
  *((_DWORD *)&_gTouchPadParameters + 5) |= 8u;
  *((_DWORD *)&_gTouchPadParameters + 5) |= 1u;
  *((_DWORD *)&_gTouchPadParameters + 2) = 2;
  *((_DWORD *)&_gTouchPadParameters + 3) |= 0x200u;
  *((_DWORD *)&_gTouchPadParameters + 3) |= 0x400u;
  *((_DWORD *)&_gTouchPadParameters + 5) |= 4u;
  *((_DWORD *)&_gTouchPadParameters + 5) |= 2u;
  *((_DWORD *)&_gTouchPadParameters + 5) &= ~0x40u;
  *((_DWORD *)&_gTouchPadParameters + 3) &= ~8u;
  *((_DWORD *)&_gTouchPadParameters + 3) |= 0x80u;
  *((_DWORD *)&_gTouchPadParameters + 3) |= 0x100u;
  v0 = 0;
  *((_DWORD *)&_gTouchPadParameters + 4) = 10;
  v1 = (_DWORD *)_gAapState;
  do
  {
    v2 = *(int *)((char *)&gAapDefaults + v0);
    v0 += 8;
    *v1++ = v2;
  }
  while ( v0 != 192 );
  _gTPThresholds[0] = 300;
  _gTPThresholds[1] = _gTPThresholds[0];
  _gTPThresholds[2] = 300;
  _gTPThresholds[3] = 450;
  _gTPThresholds[4] = 500;
  _gTPThresholds[5] = 20;
  _gTPThresholds[6] = 500;
  _gTPThresholds[7] = 500;
  _gTPThresholds[8] = 500;
  _gTPThresholds[9] = 500;
  _gTPThresholds[10] = 750;
  _gTPThresholds[15] = 20;
  _gTPThresholds[20] = 215;
  _gTPThresholds[21] = 1000;
  _gTPThresholds[23] = 500;
  _gTPThresholds[73] = 50;
  _gTPThresholds[13] = 90000;
  _gTPThresholds[14] = 90000;
  _gTPThresholds[16] = (char *)&loc_F423E + 2;
  _gTPThresholds[17] = 250;
  _gTPThresholds[18] = 50;
  _gTPThresholds[19] = 200;
  _gTPThresholds[22] = 100;
  _gTPThresholds[24] = 300;
  _gTPThresholds[25] = 300;
  _gTPThresholds[26] = 300;
  _gTPThresholds[27] = 300;
  _gTPThresholds[29] = 50;
  _gTPThresholds[30] = 50;
  _gTPThresholds[31] = 50;
  _gTPThresholds[32] = 50;
  _gTPThresholds[33] = 200;
  _gTPThresholds[68] = 100;
  _gTPThresholds[69] = 100;
  _gTPThresholds[70] = 100;
  _gTPThresholds[34] = 270;
  _gTPThresholds[35] = 270;
  _gTPThresholds[36] = 270;
  _gTPThresholds[37] = 270;
  _gTPThresholds[38] = 0;
  _gTPThresholds[39] = 70;
  _gTPThresholds[40] = 120;
  _gTPThresholds[48] = 300;
  _gTPThresholds[49] = 300;
  _gTPThresholds[50] = 300;
  _gTPThresholds[51] = 540;
  _gTPThresholds[52] = 270;
  _gTPThresholds[53] = 810;
  _gTPThresholds[54] = 300;
  _gTPThresholds[55] = 1000;
  _gTPThresholds[56] = 1000;
  _gTPThresholds[28] = 1022;
  _gTPThresholds[60] = 300;
  _gTPThresholds[61] = 22500;
  _gTPThresholds[62] = 10000;
  _gTPThresholds[63] = 33;
  _gTPThresholds[65] = 776;
  _gTPThresholds[66] = 100;
  _gTPThresholds[67] = 200;
  _gTPThresholds[47] = 25000000;
  _gTPThresholds[71] = 100;
  _gTPThresholds[72] = 1000;
  _gTPThresholds[44] = 250;
  _gTPThresholds[45] = 10;
  _gTPThresholds[46] = 40;
  _gTPThresholds[45] *= 10000 * _gTPThresholds[45];
  _gTPThresholds[46] *= 10000 * _gTPThresholds[46];
  return CPTPProcessor::EnvironmentChanged(v4);
}
