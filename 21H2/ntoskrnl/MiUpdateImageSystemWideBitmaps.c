/*
 * XREFs of MiUpdateImageSystemWideBitmaps @ 0x1407091D8
 * Callers:
 *     MiRelocateImageAgain @ 0x1406FF49C (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x1407074F0 (MiRelocateImage.c)
 * Callees:
 *     MiUpdateCfgSystemWideBitmap @ 0x140709200 (MiUpdateCfgSystemWideBitmap.c)
 */

__int64 __fastcall MiUpdateImageSystemWideBitmaps(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 88) == -1 || (*(_DWORD *)(a1 + 56) & 0x20000000) != 0 )
    return 0LL;
  else
    return MiUpdateCfgSystemWideBitmap();
}
