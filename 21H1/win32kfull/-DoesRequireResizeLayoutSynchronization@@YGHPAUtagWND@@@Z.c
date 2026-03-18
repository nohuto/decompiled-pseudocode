/*
 * XREFs of ?DoesRequireResizeLayoutSynchronization@@YGHPAUtagWND@@@Z @ 0x17108E
 * Callers:
 *     _xxxDrawDragRectEx@16 @ 0x176775 (_xxxDrawDragRectEx@16.c)
 * Callees:
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 */

int __thiscall DoesRequireResizeLayoutSynchronization(_DWORD *this)
{
  int v2; // edi
  int i; // ecx

  v2 = 0;
  if ( _IsTopLevelWindow(this) && *(char *)(this[5] + 17) < 0 )
  {
    for ( i = this[15]; i; i = *(_DWORD *)(i + 48) )
    {
      if ( *(char *)(*(_DWORD *)(i + 20) + 17) < 0 )
        return 1;
    }
  }
  return v2;
}
