/*
 * XREFs of ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C00947A8
 * Callers:
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1C00946D4 (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 *     DCompositionProcessCallout @ 0x1C0094760 (DCompositionProcessCallout.c)
 * Callees:
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0006A30 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?OnProcessDestruction@CChannel@DirectComposition@@SAXPEAVCProcessData@2@@Z @ 0x1C0094814 (-OnProcessDestruction@CChannel@DirectComposition@@SAXPEAVCProcessData@2@@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00BA790 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00BAD24 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C01D59F0 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 */

DirectComposition::CProcessData *__fastcall DirectComposition::CProcessData::`scalar deleting destructor'(
        DirectComposition::CProcessData *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  struct HDCOMPOSITIONCONNECTION__ *v4; // rcx
  struct _ERESOURCE *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v10; // rdi

  if ( *((_DWORD *)this + 10) )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    v10 = DefaultConnection;
    if ( DefaultConnection )
    {
      DirectComposition::CConnection::EnableMMCSS(DefaultConnection, 0);
      DirectComposition::CConnection::Release(v10);
    }
  }
  DirectComposition::CChannel::OnProcessDestruction(this);
  v4 = (struct HDCOMPOSITIONCONNECTION__ *)*((_QWORD *)this + 2);
  if ( v4 )
    DirectComposition::CConnection::DestroyHandle(v4);
  v5 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
  if ( v5 )
  {
    ExDeleteResourceLite(v5);
    Win32FreePool(*((_QWORD *)this + 4), v6, v7);
  }
  Win32FreePool((__int64)this, v2, v3);
  return this;
}
