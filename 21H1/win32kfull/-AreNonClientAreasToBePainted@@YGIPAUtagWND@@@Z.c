/*
 * XREFs of ?AreNonClientAreasToBePainted@@YGIPAUtagWND@@@Z @ 0x8FDB4
 * Callers:
 *     _xxxDWP_DoNCActivate@12 @ 0x8F25E (_xxxDWP_DoNCActivate@12.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall AreNonClientAreasToBePainted(_DWORD *this)
{
  unsigned __int16 v1; // si
  int v2; // eax

  v1 = 0;
  if ( *(_DWORD *)(_gpsi + 4176) != *(_DWORD *)(_gpsi + 4180) || *(_DWORD *)(_gpsi + 4204) != *(_DWORD *)(_gpsi + 4244) )
    v1 = 4108;
  v2 = this[5];
  if ( (*(_BYTE *)(v2 + 23) & 0x20) == 0
    && (*(_BYTE *)(v2 + 22) & 4) != 0
    && *(_DWORD *)(_gpsi + 4208) != *(_DWORD *)(_gpsi + 4212) )
  {
    v1 |= 0x8000u;
  }
  return v1;
}
