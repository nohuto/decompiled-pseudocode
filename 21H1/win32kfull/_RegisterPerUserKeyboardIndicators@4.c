/*
 * XREFs of _RegisterPerUserKeyboardIndicators@4 @ 0xD3B42
 * Callers:
 *     _PrepareForLogoff@0 @ 0xD3ABA (_PrepareForLogoff@0.c)
 * Callees:
 *     <none>
 */

int __thiscall RegisterPerUserKeyboardIndicators(void *this)
{
  int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = 48;
  LOWORD(v2) = _gafAsyncKeyState[36] & 2 | 0x30;
  return FastWriteProfileStringW(this, 13, L"InitialKeyboardIndicators", &v2);
}
