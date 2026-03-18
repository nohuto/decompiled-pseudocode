/*
 * XREFs of ?xxxFreeImeKeyboardLayouts@@YGXPAUtagWINDOWSTATION@@@Z @ 0xE7294
 * Callers:
 *     _EditionFreeIMEKeyboardLayouts@4 @ 0xE7282 (_EditionFreeIMEKeyboardLayouts@4.c)
 * Callees:
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _xxxImmUnloadThreadsLayout@16 @ 0xE72DE (_xxxImmUnloadThreadsLayout@16.c)
 */

void __thiscall xxxFreeImeKeyboardLayouts(_BYTE *this)
{
  bool v1; // zf
  _BYTE v2[12]; // [esp+4h] [ebp-10h] BYREF
  struct tagTHREADINFO **v3; // [esp+10h] [ebp-4h] BYREF

  v3 = 0;
  v1 = (this[32] & 4) == 0;
  memset(v2, 0, sizeof(v2));
  if ( v1 )
  {
    if ( GetThreadsWithPKL(&v3, (struct _TL *)v2, 0) )
    {
      xxxImmUnloadThreadsLayout(0, 2);
      PopAndFreeAlwaysW32ThreadLock((int)v2);
    }
  }
}
