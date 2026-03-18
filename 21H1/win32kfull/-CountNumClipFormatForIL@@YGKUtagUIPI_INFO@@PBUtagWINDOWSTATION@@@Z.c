/*
 * XREFs of ?CountNumClipFormatForIL@@YGKUtagUIPI_INFO@@PBUtagWINDOWSTATION@@@Z @ 0x12220
 * Callers:
 *     _NtUserCountClipboardFormats@0 @ 0x121E0 (_NtUserCountClipboardFormats@0.c)
 *     _NtUserGetUpdatedClipboardFormats@12 @ 0x1649A2 (_NtUserGetUpdatedClipboardFormats@12.c)
 *     ?xxxDrawClipboard@@YGXPAUtagWINDOWSTATION@@@Z @ 0x182559 (-xxxDrawClipboard@@YGXPAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     ?IsFmtBlocked@@YGHI@Z @ 0xF3F48 (-IsFmtBlocked@@YGHI@Z.c)
 *     ?CheckClipboardAccessForIntegrityLevel@@YGHUtagUIPI_INFO@@0@Z @ 0x1818DE (-CheckClipboardAccessForIntegrityLevel@@YGHUtagUIPI_INFO@@0@Z.c)
 */

int __userpurge CountNumClipFormatForIL@<eax>(int a1@<ecx>, unsigned int a2@<edi>, int a3, int a4)
{
  int v4; // esi
  int v5; // ebx
  int v7; // edi
  _DWORD *v8; // eax
  unsigned int v9; // [esp-4h] [ebp-10h]
  int v10; // [esp+8h] [ebp-4h]

  v4 = *(_DWORD *)(a1 + 64);
  v5 = 0;
  if ( v4 )
  {
    v9 = a2;
    v7 = *(_DWORD *)(a1 + 68);
    if ( v7 )
    {
      v8 = (_DWORD *)(v4 + 12);
      v10 = v4 + 12;
      do
      {
        --v7;
        if ( CheckClipboardAccessForIntegrityLevel(*v8, v8[1], a3, a4) || !IsFmtBlocked(v9) )
          ++v5;
        v4 += 20;
        v8 = (_DWORD *)(v10 + 20);
        v10 += 20;
      }
      while ( v7 );
    }
  }
  return v5;
}
