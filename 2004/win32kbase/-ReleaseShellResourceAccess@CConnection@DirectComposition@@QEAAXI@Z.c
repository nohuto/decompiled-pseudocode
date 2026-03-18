/*
 * XREFs of ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C001D7F0
 * Callers:
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C001CE4C (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     NtDCompositionConfirmFrame @ 0x1C001CEA0 (NtDCompositionConfirmFrame.c)
 *     ?ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C009B604 (-ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshale.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C009C874 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CConnection::ReleaseShellResourceAccess(
        DirectComposition::CConnection *this,
        int a2)
{
  struct _ERESOURCE *v2; // rbx
  bool v5; // zf

  v2 = (struct _ERESOURCE *)*((_QWORD *)this + 30);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v2, 1u);
  v5 = *((_DWORD *)this + 57) == a2;
  *((_DWORD *)this + 57) -= a2;
  if ( v5 )
    *((_QWORD *)this + 29) = 0LL;
  ExReleaseResourceLite(*((PERESOURCE *)this + 30));
  KeLeaveCriticalRegion();
}
