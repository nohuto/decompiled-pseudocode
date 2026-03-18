/*
 * XREFs of _DeleteOldRedirectionBitmap@4 @ 0x6E4D2
 * Callers:
 *     _UnsetRedirectedWindow@8 @ 0x1BE12 (_UnsetRedirectedWindow@8.c)
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 *     _UserRecreateRedirectionBitmap@4 @ 0x1539FA (_UserRecreateRedirectionBitmap@4.c)
 * Callees:
 *     _DeleteOrSetRedirectionBitmap@12 @ 0x20636 (_DeleteOrSetRedirectionBitmap@12.c)
 *     _GetOldRedirectionBitmap@4 @ 0x6E504 (_GetOldRedirectionBitmap@4.c)
 *     _SetOldRedirectionBitmap@8 @ 0xA6D0A (_SetOldRedirectionBitmap@8.c)
 */

int __thiscall DeleteOldRedirectionBitmap(void *this)
{
  int v2; // esi
  HSURF OldRedirectionBitmap; // ebx

  v2 = 0;
  OldRedirectionBitmap = (HSURF)GetOldRedirectionBitmap(this);
  if ( OldRedirectionBitmap )
  {
    SetOldRedirectionBitmap(this, 0);
    v2 = 1;
    DeleteOrSetRedirectionBitmap((int)this, OldRedirectionBitmap, 1);
  }
  return v2;
}
