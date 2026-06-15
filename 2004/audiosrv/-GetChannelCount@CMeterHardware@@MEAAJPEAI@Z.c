/*
 * XREFs of ?GetChannelCount@CMeterHardware@@MEAAJPEAI@Z @ 0x1800BDC90
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x180068B44 (-GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMeterHardware::GetChannelCount(CMeterHardware *this, unsigned int *a2)
{
  __int64 v2; // r8
  int ChannelCountFromDeviceFormat; // eax
  unsigned int v4; // ebx

  v2 = *((_QWORD *)this + 5);
  if ( v2 )
    ChannelCountFromDeviceFormat = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v2 + 24LL))(
                                     *((_QWORD *)this + 5),
                                     a2);
  else
    ChannelCountFromDeviceFormat = CMeterControlBase::GetChannelCountFromDeviceFormat(this, a2);
  v4 = ChannelCountFromDeviceFormat;
  if ( ChannelCountFromDeviceFormat < 0 )
    AudSrvTraceLoggingErrorHelper("CMeterHardware::GetChannelCount", 345, ChannelCountFromDeviceFormat);
  return v4;
}
