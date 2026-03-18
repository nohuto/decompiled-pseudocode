/*
 * XREFs of DeleteOldRedirectionBitmap @ 0x1C00C12CC
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00482D8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     UnsetRedirectedWindow @ 0x1C00C11EC (UnsetRedirectedWindow.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E7990 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     GetOldRedirectionBitmap @ 0x1C00C1328 (GetOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00C135C (DeleteOrSetRedirectionBitmap.c)
 *     SetOldRedirectionBitmap @ 0x1C01207E4 (SetOldRedirectionBitmap.c)
 */

__int64 __fastcall DeleteOldRedirectionBitmap(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 OldRedirectionBitmap; // rsi

  v2 = 0;
  OldRedirectionBitmap = GetOldRedirectionBitmap(a1);
  if ( OldRedirectionBitmap )
  {
    SetOldRedirectionBitmap(a1, 0LL);
    v2 = 1;
    DeleteOrSetRedirectionBitmap(a1, OldRedirectionBitmap, 1LL);
  }
  return v2;
}
