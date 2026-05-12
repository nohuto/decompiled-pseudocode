/*
 * XREFs of StorpDeviceHealthWorkItemRoutine @ 0x1C0011120
 * Callers:
 *     <none>
 * Callees:
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C00019CC (StorpTelemetrySendUnitSmartAttributes.c)
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C00024C0 (StorpTelemetrySendUnitDeviceStatistics.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B600 (RaUnitReleaseRemoveLock.c)
 *     StorpTelemetrySendUnitScsiDiagnostics @ 0x1C001EA4C (StorpTelemetrySendUnitScsiDiagnostics.c)
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C00573C0 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 */

void __fastcall StorpDeviceHealthWorkItemRoutine(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  _QWORD *DeviceExtension; // rbx
  __int64 v4; // rax
  unsigned int v5; // ecx
  int v6; // eax
  unsigned int v7; // r8d

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( *((_DWORD *)DeviceExtension + 123) == 1 )
  {
    v4 = DeviceExtension[218];
    if ( !v4 || !*(_DWORD *)(v4 + 16) )
    {
      if ( *((_DWORD *)DeviceExtension + 820) == 17 )
      {
        StorpTelemetrySendUnitNvmeHealthInfo(DeviceObject->DeviceExtension);
      }
      else
      {
        v5 = *(_DWORD *)(DeviceExtension[3] + 4420LL);
        if ( (((v5 - 2) & 0xFFFFFFF6) != 0 || v5 == 10) && (*((_BYTE *)DeviceExtension + 450) & 0x10) == 0 )
        {
          if ( v5 <= 0x13 )
          {
            v6 = 525570;
            if ( _bittest(&v6, v5) )
              StorpTelemetrySendUnitScsiDiagnostics((int)DeviceExtension);
          }
        }
        else
        {
          StorpTelemetrySendUnitSmartAttributes((__int64)DeviceExtension);
          StorpTelemetrySendUnitDeviceStatistics((__int64)DeviceExtension);
        }
      }
      v7 = g_StorpTraceLoggingDeviceHealthTick + *((unsigned __int8 *)DeviceExtension + 1997);
      *((_DWORD *)DeviceExtension + 498) |= 1u;
      *((_BYTE *)DeviceExtension + 1997) = v7 < 0x18 ? v7 : 0;
    }
  }
  RaUnitReleaseRemoveLock((__int64)DeviceExtension);
  IoFreeWorkItem(Context);
}
