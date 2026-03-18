/*
 * XREFs of DCompositionForceRender @ 0x1C00CB0E4
 * Callers:
 *     PowerOnMonitor @ 0x1C0070E70 (PowerOnMonitor.c)
 *     VideoPortCalloutThread @ 0x1C011F704 (VideoPortCalloutThread.c)
 *     ?DxgkEngSetHwProtectionTeardownRecovery@@YAJPEAU_D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY@@@Z @ 0x1C014B9C0 (-DxgkEngSetHwProtectionTeardownRecovery@@YAJPEAU_D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY@@@Z.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00619C0 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0061F54 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z @ 0x1C00CB170 (-ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@0@Z.c)
 */

__int64 __fastcall DCompositionForceRender(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  int v5; // ebx
  int v6; // esi
  int v7; // r14d
  struct DirectComposition::CConnection *DefaultConnection; // rax
  __int64 v9; // rdx
  DirectComposition::CConnection *v10; // rdi
  __int64 v11; // r9
  unsigned int v12; // ebx
  unsigned int v13; // edx

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(a1, a2, a3, a4);
  v10 = DefaultConnection;
  if ( DefaultConnection )
  {
    v11 = 0LL;
    if ( v6 )
      v11 = 2 - (unsigned int)(v5 != 0);
    LOBYTE(v9) = v7 != 0;
    v12 = DirectComposition::CConnection::ForceRender(DefaultConnection, v9, 0LL, v11, v4 != 0);
    DirectComposition::CConnection::Release(v10, v13);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v12;
}
