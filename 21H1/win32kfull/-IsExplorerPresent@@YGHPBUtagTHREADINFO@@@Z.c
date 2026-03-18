/*
 * XREFs of ?IsExplorerPresent@@YGHPBUtagTHREADINFO@@@Z @ 0x141B45
 * Callers:
 *     _xxxSetInformationThread@16 @ 0xC9146 (_xxxSetInformationThread@16.c)
 * Callees:
 *     <none>
 */

int __thiscall IsExplorerPresent(_DWORD *this)
{
  int v1; // edx
  int v2; // ecx

  v1 = this[62];
  v2 = 0;
  if ( *(_DWORD *)(*(_DWORD *)(v1 + 4) + 84) || *(_DWORD *)(v1 + 176) )
    return 1;
  return v2;
}
