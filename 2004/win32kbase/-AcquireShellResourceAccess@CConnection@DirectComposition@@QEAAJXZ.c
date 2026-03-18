/*
 * XREFs of ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x1C005C490
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0097BF0 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?CheckForShellResourceAccess@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C00A86B8 (-CheckForShellResourceAccess@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CConnection::AcquireShellResourceAccess(struct _ERESOURCE **this, __int64 a2)
{
  unsigned int v3; // esi
  __int64 CurrentProcess; // rax
  struct _ERESOURCE *v5; // rbx
  __int64 v6; // rbp
  struct _ERESOURCE *v7; // rax

  v3 = -1073741790;
  CurrentProcess = PsGetCurrentProcess(this, a2);
  v5 = this[30];
  v6 = CurrentProcess;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v5, 1u);
  v7 = this[29];
  if ( v7 == (struct _ERESOURCE *)v6 || !v7 )
  {
    ++*((_DWORD *)this + 57);
    v3 = 0;
    this[29] = (struct _ERESOURCE *)v6;
  }
  ExReleaseResourceLite(this[30]);
  KeLeaveCriticalRegion();
  return v3;
}
