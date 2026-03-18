/*
 * XREFs of ?ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C009B604
 * Callers:
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C001D3B0 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0098ED4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 * Callees:
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C001D7F0 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReleaseShellResourceReference(
        DirectComposition::CConnection **this,
        struct DirectComposition::CResourceMarshaler *a2)
{
  if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a2 + 32LL))(a2) )
    DirectComposition::CConnection::ReleaseShellResourceAccess(this[5], 1);
}
