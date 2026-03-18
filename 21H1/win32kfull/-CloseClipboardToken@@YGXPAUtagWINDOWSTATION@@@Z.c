/*
 * XREFs of ?CloseClipboardToken@@YGXPAUtagWINDOWSTATION@@@Z @ 0xACB28
 * Callers:
 *     _xxxCloseClipboard@4 @ 0x11D76 (_xxxCloseClipboard@4.c)
 *     _ForceEmptyClipboard@4 @ 0xACADE (_ForceEmptyClipboard@4.c)
 * Callees:
 *     <none>
 */

void __thiscall CloseClipboardToken(_DWORD *this)
{
  void *v2; // ecx
  int v3; // eax

  v2 = (void *)this[21];
  if ( v2 )
  {
    v3 = this[8];
    if ( (v3 & 0x400) != 0 )
      this[8] = v3 & 0xFFFFFBFF;
    ObfDereferenceObject(v2);
    this[21] = 0;
  }
}
