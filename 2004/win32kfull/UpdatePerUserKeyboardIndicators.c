/*
 * XREFs of UpdatePerUserKeyboardIndicators @ 0x1C004A348
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00492E0 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UpdatePerUserKeyboardIndicators(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  unsigned int v3; // eax
  char v4; // cl
  __int64 v5; // rcx
  unsigned int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0x80000000;
  result = gProtocolType;
  v2 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( !gProtocolType )
  {
    FastGetProfileIntW(a1, 13LL, L"InitialKeyboardIndicators", 0x80000000LL, &v6, 0);
    v3 = v6 & 0x80000002;
    v6 = v3;
    if ( v3 == 0x80000000 )
    {
      LOWORD(v3) = gklpBootTime[1];
      v6 = (unsigned __int16)v3;
    }
    v4 = *(_BYTE *)(v2 + 264);
    if ( (v3 & 2) != 0 )
    {
      *(_BYTE *)(v2 + 264) = v4 | 2;
      v5 = *(_QWORD *)gafAsyncKeyState;
      gafAsyncKeyState[36] |= 2u;
      gafRawKeyState[36] |= 2u;
    }
    else
    {
      *(_BYTE *)(v2 + 264) = v4 & 0xFD;
      v5 = *(_QWORD *)gafAsyncKeyState;
      gafAsyncKeyState[36] &= ~2u;
      gafRawKeyState[36] &= ~2u;
    }
    gfKanaToggle = 0;
    *(_BYTE *)(v2 + 233) &= ~8u;
    *(_BYTE *)(v5 + 5) &= ~8u;
    gafRawKeyState[5] &= ~8u;
    return UpdateKeyLights(0LL);
  }
  return result;
}
