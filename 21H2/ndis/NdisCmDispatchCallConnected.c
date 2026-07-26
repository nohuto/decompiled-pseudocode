/*
 * XREFs of NdisCmDispatchCallConnected @ 0x1C00B7540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisCmDispatchCallConnected(NDIS_HANDLE NdisVcHandle)
{
  (*((void (__fastcall **)(_QWORD))NdisVcHandle + 16))(*((_QWORD *)NdisVcHandle + 3));
}
