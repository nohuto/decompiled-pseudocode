/*
 * XREFs of DCompositionIsShellProcess @ 0x1C00652E0
 * Callers:
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0064594 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00619C0 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0061F54 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 */

bool __fastcall DCompositionIsShellProcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rdi
  unsigned int v8; // edx

  v4 = 0;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(a1, a2, a3, a4);
  if ( DefaultConnection )
  {
    v4 = PsGetCurrentProcess(v6, v5) == *((_QWORD *)DefaultConnection + 29);
    DirectComposition::CConnection::Release(DefaultConnection, v8);
  }
  return v4;
}
