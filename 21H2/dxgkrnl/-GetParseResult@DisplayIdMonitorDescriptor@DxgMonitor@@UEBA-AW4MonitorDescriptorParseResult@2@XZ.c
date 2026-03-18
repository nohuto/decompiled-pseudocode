/*
 * XREFs of ?GetParseResult@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AW4MonitorDescriptorParseResult@2@XZ @ 0x1C03BB180
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_IsValidVersion2@@YA_NPEBUDisplayIDObj@@@Z @ 0x1C0071FD0 (-DisplayID_IsValidVersion2@@YA_NPEBUDisplayIDObj@@@Z.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetParseResult(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
    return (unsigned int)DisplayID_IsValidVersion2((const struct DisplayIDObj *)(a1 + 24)) + 1;
  else
    return 0LL;
}
