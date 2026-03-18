/*
 * XREFs of _MapClientToServerPfn@4 @ 0x47FDC
 * Callers:
 *     _xxxSetWindowData@16 @ 0x3F3F0 (_xxxSetWindowData@16.c)
 *     _InternalRegisterClassEx@16 @ 0x46B9C (_InternalRegisterClassEx@16.c)
 *     _xxxSetClassData@16 @ 0xCBC4C (_xxxSetClassData@16.c)
 * Callees:
 *     <none>
 */

int __thiscall MapClientToServerPfn(void *this)
{
  int v2; // eax
  int v3; // edx
  void **v4; // edi
  void **i; // ecx

  v2 = 666;
  v3 = 666;
  v4 = (void **)(_gpsi + 324);
  do
  {
    if ( *v4 == this )
      return *(_DWORD *)(_gpsi + 4 * (v3 & 0xFFFF3FFF) - 2528);
    ++v3;
    ++v4;
  }
  while ( v3 <= 672 );
  for ( i = (void **)(_gpsi + 228); *i != this; ++i )
  {
    if ( ++v2 > 672 )
      return 0;
  }
  return *(_DWORD *)(_gpsi + 4 * (v2 & 0xFFFF3FFF) - 2528);
}
