/*
 * XREFs of ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C00A8DDC
 * Callers:
 *     NtDCompositionCreateDwmChannel @ 0x1C0057E50 (NtDCompositionCreateDwmChannel.c)
 *     NtDCompositionCreateChannel @ 0x1C00A6410 (NtDCompositionCreateChannel.c)
 *     NtDCompositionDestroyChannel @ 0x1C00A8F10 (NtDCompositionDestroyChannel.c)
 * Callees:
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C00A6288 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C00A8E80 (-Release@CChannel@DirectComposition@@QEAAKXZ.c)
 *     ?RemoveObject@?$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QEAAPEAVCChannel@2@I@Z @ 0x1C00A8EB0 (-RemoveObject@-$CGenericTable@IVCChannel@DirectComposition@@$0HEGDEDEE@$00@DirectComposition@@QE.c)
 */

__int64 __fastcall DirectComposition::CChannel::DestroyHandle(__int64 a1)
{
  DirectComposition::CChannel *v1; // rbx
  struct DirectComposition::CProcessData *v2; // rax
  struct DirectComposition::CProcessData *v3; // rsi
  struct _ERESOURCE *v4; // rbx
  unsigned int v5; // edi

  v1 = 0LL;
  v2 = DirectComposition::CProcessData::Current(a1);
  v3 = v2;
  if ( v2 )
  {
    v4 = (struct _ERESOURCE *)*((_QWORD *)v2 + 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v4, 1u);
    v1 = (DirectComposition::CChannel *)DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::RemoveObject(*(PRTL_GENERIC_TABLE *)v3);
    v5 = 0;
    if ( !v1 )
      v5 = -1073741790;
    ExReleaseResourceLite(*((PERESOURCE *)v3 + 1));
    KeLeaveCriticalRegion();
  }
  else
  {
    v5 = -1073741823;
  }
  if ( v1 )
    DirectComposition::CChannel::Release(v1);
  return v5;
}
