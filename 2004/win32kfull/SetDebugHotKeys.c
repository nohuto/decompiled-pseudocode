/*
 * XREFs of SetDebugHotKeys @ 0x1C00C8644
 * Callers:
 *     RawInputThread @ 0x1C00C62E0 (RawInputThread.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C003D584 (_RegisterHotKey.c)
 */

_BOOL8 SetDebugHotKeys()
{
  int v0; // eax
  int v1; // eax
  unsigned __int8 v2; // cf
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2a; // [rsp+20h] [rbp-18h]
  ULONG_PTR v6; // [rsp+40h] [rbp+8h] BYREF

  LODWORD(v6) = 0;
  FastGetProfileDword(0LL, 21LL, L"UserDebuggerHotkey", 0LL, &v6);
  v0 = v6;
  if ( !(_DWORD)v6 )
  {
    if ( LOBYTE(gKeyboardInfo[0]) > 8u || (v1 = 404, v2 = _bittest(&v1, LOBYTE(gKeyboardInfo[0])), v0 = 123, !v2) )
      v0 = 109;
    LODWORD(v6) = v0;
  }
  LODWORD(BugCheckParameter2) = v0;
  RegisterHotKey((struct tagWND *)1, 0LL, -5, 0, BugCheckParameter2);
  LODWORD(BugCheckParameter2a) = v6;
  return RegisterHotKey((struct tagWND *)1, 0LL, -6, 4, BugCheckParameter2a);
}
