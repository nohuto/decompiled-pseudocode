/*
 * XREFs of ?vCopyEntriesFrom@XEPALOBJ@@QAEXV1@@Z @ 0x21E207
 * Callers:
 *     _GreRealizePalette@4 @ 0xBF88E (_GreRealizePalette@4.c)
 *     _NtGdiResizePalette@8 @ 0x21E909 (_NtGdiResizePalette@8.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void *__thiscall XEPALOBJ::vCopyEntriesFrom(int *this, int a2)
{
  int v2; // esi
  unsigned int v3; // ecx

  v2 = *this;
  v3 = *(_DWORD *)(a2 + 20);
  if ( v3 >= *(_DWORD *)(v2 + 20) )
    v3 = *(_DWORD *)(v2 + 20);
  return memcpy(*(void **)(v2 + 76), *(const void **)(a2 + 76), 4 * v3);
}
