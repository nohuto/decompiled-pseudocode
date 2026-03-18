/*
 * XREFs of _SetDebugHotKeys@0 @ 0xD4EF6
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 * Callees:
 *     __RegisterHotKey@20 @ 0xC5F06 (__RegisterHotKey@20.c)
 */

BOOL __stdcall SetDebugHotKeys()
{
  ULONG_PTR v0; // eax
  ULONG_PTR v2; // [esp-4h] [ebp-Ch]
  ULONG_PTR BugCheckParameter2; // [esp+4h] [ebp-4h] BYREF

  BugCheckParameter2 = 0;
  FastGetProfileDword(0, 21, L"UserDebuggerHotkey", 0, &BugCheckParameter2);
  v0 = BugCheckParameter2;
  if ( !BugCheckParameter2 )
  {
    if ( _gKeyboardInfo == 4 || _gKeyboardInfo == 2 || _gKeyboardInfo == 7 || _gKeyboardInfo == 8 )
      v2 = 123;
    else
      v2 = 109;
    v0 = v2;
    BugCheckParameter2 = v2;
  }
  _RegisterHotKey((struct tagTHREADINFO *)1, 0, (struct tagTHREADINFO *)0xFFFFFFFB, 0, v0);
  return _RegisterHotKey((struct tagTHREADINFO *)1, 0, (struct tagTHREADINFO *)0xFFFFFFFA, 4u, BugCheckParameter2);
}
