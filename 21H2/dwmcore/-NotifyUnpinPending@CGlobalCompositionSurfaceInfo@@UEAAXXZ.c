/*
 * XREFs of ?NotifyUnpinPending@CGlobalCompositionSurfaceInfo@@UEAAXXZ @ 0x180018E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGlobalCompositionSurfaceInfo::NotifyUnpinPending(CGlobalCompositionSurfaceInfo *this)
{
  __int64 v1; // r9

  v1 = (unsigned int)(*((_DWORD *)this + 98) + 1);
  *((_DWORD *)this + 98) = v1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000000) != 0 )
    McTemplateU0xq_EventWriteTransfer(this, &Pinning_OutstandingUnpinCount, *((_QWORD *)this + 4), v1);
}
