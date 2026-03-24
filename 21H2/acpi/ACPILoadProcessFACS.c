/*
 * XREFs of ACPILoadProcessFACS @ 0x1C00BEB28
 * Callers:
 *     ACPILoadProcessFADT @ 0x1C00BECCC (ACPILoadProcessFADT.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0002ACC (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_q @ 0x1C000F770 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D78C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 */

__int64 ACPILoadProcessFACS()
{
  unsigned int v0; // edi
  __int64 v1; // rax
  __int64 v2; // rsi
  _DWORD *v3; // rsi
  __int64 v5; // [rsp+28h] [rbp-10h]

  v0 = 0;
  v1 = (*(__int64 (**)(void))(PmHalDispatchTable + 104))();
  v2 = v1;
  if ( !v1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0xDu,
        (__int64)&WPP_46b15d9ca9c23528b9d260ad71f05863_Traceguids);
    return (unsigned int)-1072431079;
  }
  if ( *(_DWORD *)(v1 + 4) != 64 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0xEu,
        (__int64)&WPP_46b15d9ca9c23528b9d260ad71f05863_Traceguids,
        v1);
    return (unsigned int)-1072431079;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      6u,
      0xFu,
      (__int64)&WPP_46b15d9ca9c23528b9d260ad71f05863_Traceguids,
      v1);
  *((_QWORD *)AcpiInformation + 2) = v2;
  v3 = (_DWORD *)(v2 + 16);
  *((_QWORD *)AcpiInformation + 5) = v3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v5) = *v3;
    WPP_RECORDER_SF_L(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x10u,
      (__int64)&WPP_46b15d9ca9c23528b9d260ad71f05863_Traceguids,
      v5);
  }
  return v0;
}
