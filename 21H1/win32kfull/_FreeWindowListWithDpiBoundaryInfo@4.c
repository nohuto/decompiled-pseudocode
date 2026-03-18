/*
 * XREFs of _FreeWindowListWithDpiBoundaryInfo@4 @ 0xA9700
 * Callers:
 *     _UpdateMonitorForWindowAndChildren@16 @ 0x2A86E (_UpdateMonitorForWindowAndChildren@16.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall FreeWindowListWithDpiBoundaryInfo(_DWORD *this)
{
  int result; // eax
  _DWORD *v3; // [esp-4h] [ebp-8h]

  while ( this )
  {
    v3 = this;
    this = (_DWORD *)*this;
    result = Win32FreePool(v3);
  }
  return result;
}
