/*
 * XREFs of ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x180012E44
 * Callers:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180008810 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180012B84 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18002A4E8 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CThumbnailVisual::_HasBorder(CThumbnailVisual *this)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *((_QWORD *)this + 46);
  result = 0;
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 36) & 0x400000) != 0 )
      return 1;
  }
  return result;
}
