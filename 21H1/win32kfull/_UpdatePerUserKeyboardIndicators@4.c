/*
 * XREFs of _UpdatePerUserKeyboardIndicators@4 @ 0xD889C
 * Callers:
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
int __thiscall UpdatePerUserKeyboardIndicators(void *this)
{
  int v1; // esi
  int result; // eax
  unsigned int v3; // eax
  char v4; // cl
  int v5; // ecx
  unsigned int v6; // [esp+Ch] [ebp-4h] BYREF

  v6 = 0x80000000;
  v1 = *(_DWORD *)(_gptiCurrent + 236);
  result = _gProtocolType;
  if ( !_gProtocolType )
  {
    FastGetProfileIntW(this, 13, L"InitialKeyboardIndicators", 0x80000000, &v6, 0);
    v3 = v6 & 0x80000002;
    v6 = v3;
    if ( v3 == 0x80000000 )
    {
      LOWORD(v3) = _gklpBootTime[1];
      v6 = (unsigned __int16)v3;
    }
    v4 = *(_BYTE *)(v1 + 188);
    if ( (v3 & 2) != 0 )
    {
      *(_BYTE *)(v1 + 188) = v4 | 2;
      v5 = *(_DWORD *)_gafAsyncKeyState;
      _gafAsyncKeyState[36] |= 2u;
      _gafRawKeyState[36] |= 2u;
    }
    else
    {
      *(_BYTE *)(v1 + 188) = v4 & 0xFD;
      v5 = *(_DWORD *)_gafAsyncKeyState;
      _gafAsyncKeyState[36] &= ~2u;
      _gafRawKeyState[36] &= ~2u;
    }
    _gfKanaToggle = 0;
    *(_BYTE *)(v1 + 157) &= ~8u;
    *(_BYTE *)(v5 + 5) &= ~8u;
    _gafRawKeyState[5] &= ~8u;
    return UpdateKeyLights(0);
  }
  return result;
}
