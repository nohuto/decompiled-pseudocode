/*
 * XREFs of ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x18003CC64
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180018950 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18001A1E4 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001F3B0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

int *__fastcall CTopLevelWindow::GetCurrentDefaultColorizationFlags(__int64 a1, int *a2)
{
  bool v2; // zf
  __int64 v3; // rcx
  int v4; // eax

  v2 = (*(_BYTE *)(a1 + 592) & 0x40) == 0;
  v3 = *(_QWORD *)(a1 + 728);
  if ( !v2 || (v4 = 2, (*(_BYTE *)(v3 + 611) & 0x20) != 0) )
    v4 = 1;
  *a2 = v4;
  if ( *(_DWORD *)(v3 + 80) == 0x7FFFFFFF
    && *(_DWORD *)(v3 + 84) == 0x7FFFFFFF
    && *(_DWORD *)(v3 + 88) == 0x7FFFFFFF
    && *(_DWORD *)(v3 + 92) == 0x7FFFFFFF )
  {
    v4 |= 0x40u;
    *a2 = v4;
  }
  if ( (*(_BYTE *)(v3 + 613) & 8) != 0 )
    *a2 = v4 | 0x80;
  return a2;
}
