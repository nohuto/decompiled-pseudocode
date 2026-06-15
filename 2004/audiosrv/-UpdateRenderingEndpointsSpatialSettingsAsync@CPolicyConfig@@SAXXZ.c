/*
 * XREFs of ?UpdateRenderingEndpointsSpatialSettingsAsync@CPolicyConfig@@SAXXZ @ 0x180067DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180067E3C (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006DF3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void CPolicyConfig::UpdateRenderingEndpointsSpatialSettingsAsync(void)
{
  __int64 v0; // rax
  int v1; // eax
  _QWORD v2[9]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2[0] = off_180155D48;
  v2[7] = v2;
  v0 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
  v1 = CSerialWorkQueue::QueueWorkItem(v0, v2);
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x104D,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v1,
      v2[0]);
}
