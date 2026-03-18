/*
 * XREFs of ?IsFmtBlocked@@YGHI@Z @ 0xF3F48
 * Callers:
 *     ?FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z @ 0x115FE (-FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z.c)
 *     ?CountNumClipFormatForIL@@YGKUtagUIPI_INFO@@PBUtagWINDOWSTATION@@@Z @ 0x12220 (-CountNumClipFormatForIL@@YGKUtagUIPI_INFO@@PBUtagWINDOWSTATION@@@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YGHI@Z @ 0x8015A (-IsMessageAlwaysAllowedAcrossIL@@YGHI@Z.c)
 *     _NtUserGetUpdatedClipboardFormats@12 @ 0x1649A2 (_NtUserGetUpdatedClipboardFormats@12.c)
 *     __GetPriorityClipboardFormat@8 @ 0x182ECD (__GetPriorityClipboardFormat@8.c)
 * Callees:
 *     <none>
 */

int __thiscall IsFmtBlocked(void *this)
{
  int v1; // edx
  void **i; // eax

  v1 = 0;
  if ( !gcClipFormatExceptionList )
    return 1;
  for ( i = (void **)_gpClipFormatExceptionList; this != *i; ++i )
  {
    if ( ++v1 >= (unsigned int)gcClipFormatExceptionList )
      return 1;
  }
  return 0;
}
