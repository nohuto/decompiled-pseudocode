/*
 * XREFs of ?CheckForShellResourceAccess@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C00B7258
 * Callers:
 *     ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00B6A98 (-OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceM.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C00B7114 (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 * Callees:
 *     ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x1C004EA60 (-AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CheckForShellResourceAccess(
        struct _ERESOURCE ***this,
        struct DirectComposition::CResourceMarshaler *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx

  v3 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a2 + 32LL))(a2) )
    return (unsigned int)DirectComposition::CConnection::AcquireShellResourceAccess(this[5], v4);
  return v3;
}
