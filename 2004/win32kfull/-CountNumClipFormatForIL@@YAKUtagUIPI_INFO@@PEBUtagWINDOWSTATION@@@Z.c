/*
 * XREFs of ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C005A29C
 * Callers:
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0057C80 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     NtUserCountClipboardFormats @ 0x1C005A230 (NtUserCountClipboardFormats.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C01FCE20 (NtUserGetUpdatedClipboardFormats.c)
 * Callees:
 *     ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x1C005A31C (-CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z.c)
 *     ?IsFmtBlocked@@YAHI@Z @ 0x1C021F7E8 (-IsFmtBlocked@@YAHI@Z.c)
 */

__int64 __fastcall CountNumClipFormatForIL(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rdi
  unsigned int v3; // esi
  int v5; // ebp
  _QWORD *v6; // r14

  v2 = *(unsigned int **)(a2 + 128);
  v3 = 0;
  if ( v2 )
  {
    v5 = *(_DWORD *)(a2 + 136);
    if ( v5 )
    {
      v6 = v2 + 5;
      do
      {
        --v5;
        if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(*v6, a1) || !(unsigned int)IsFmtBlocked(*v2) )
          ++v3;
        v2 += 8;
        v6 += 4;
      }
      while ( v5 );
    }
  }
  return v3;
}
