/*
 * XREFs of DCompositionDDAChange @ 0x1C01CE524
 * Callers:
 *     VideoPortCalloutThread @ 0x1C0121A54 (VideoPortCalloutThread.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C009DB60 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C009E0F4 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C00CC010 (-ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z.c)
 */

__int64 __fastcall DCompositionDDAChange(__int64 a1)
{
  struct DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v2; // rbx
  unsigned int v3; // edi

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(a1);
  v2 = DefaultConnection;
  if ( DefaultConnection )
  {
    v3 = DirectComposition::CConnection::ForceRender((__int64)DefaultConnection, 0, 1, 0, 0);
    DirectComposition::CConnection::Release(v2);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v3;
}
