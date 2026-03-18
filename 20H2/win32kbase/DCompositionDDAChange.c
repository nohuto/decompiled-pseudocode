/*
 * XREFs of DCompositionDDAChange @ 0x1C01CC1A4
 * Callers:
 *     VideoPortCalloutThread @ 0x1C011F704 (VideoPortCalloutThread.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00619C0 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0061F54 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C00CB170 (-ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z.c)
 */

__int64 __fastcall DCompositionDDAChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v5; // rbx
  unsigned int v6; // edi
  unsigned int v7; // edx

  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(a1, a2, a3, a4);
  v5 = DefaultConnection;
  if ( DefaultConnection )
  {
    v6 = DirectComposition::CConnection::ForceRender((__int64)DefaultConnection, 0, 1, 0, 0);
    DirectComposition::CConnection::Release(v5, v7);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v6;
}
