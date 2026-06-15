/*
 * XREFs of ?ProviderFinalRelease@CMeterSoftware@@UEAAXXZ @ 0x1800BE280
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ @ 0x180046D90 (-Release@-$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ.c)
 */

void __fastcall CMeterSoftware::ProviderFinalRelease(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi

  v1 = this + 1;
  EnterCriticalSection(this + 1);
  ATL::CComPtrBase<IAudioMeter>::Release(&this->SpinCount);
  if ( v1 )
    LeaveCriticalSection(v1);
}
