/*
 * XREFs of DCompositionIsShellProcess @ 0x1C00A6530
 * Callers:
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C00A4358 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C009DB60 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C009E0F4 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 */

bool __fastcall DCompositionIsShellProcess(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rdi

  v1 = 0;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(a1);
  if ( DefaultConnection )
  {
    v1 = PsGetCurrentProcess(v3, v2) == *((_QWORD *)DefaultConnection + 29);
    DirectComposition::CConnection::Release(DefaultConnection);
  }
  return v1;
}
