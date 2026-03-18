/*
 * XREFs of DeleteOldRedirectionBitmap @ 0x1C00229F0
 * Callers:
 *     UnsetRedirectedWindow @ 0x1C004F050 (UnsetRedirectedWindow.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006D280 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E8650 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     GetOldRedirectionBitmap @ 0x1C0022A4C (GetOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C004F130 (DeleteOrSetRedirectionBitmap.c)
 *     SetOldRedirectionBitmap @ 0x1C011F144 (SetOldRedirectionBitmap.c)
 */

__int64 __fastcall DeleteOldRedirectionBitmap(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 OldRedirectionBitmap; // rsi

  v2 = 0;
  OldRedirectionBitmap = GetOldRedirectionBitmap();
  if ( OldRedirectionBitmap )
  {
    SetOldRedirectionBitmap(a1, 0LL);
    v2 = 1;
    DeleteOrSetRedirectionBitmap(a1, OldRedirectionBitmap, 1LL);
  }
  return v2;
}
