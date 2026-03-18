/*
 * XREFs of ACPIEcRemoveDevice @ 0x1C0053030
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C004C350 (ACPIBusIrpRemoveDevice.c)
 *     ACPIEcStopRemoveDeviceCommon @ 0x1C00534F0 (ACPIEcStopRemoveDeviceCommon.c)
 */

__int64 __fastcall ACPIEcRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rbp
  __int64 v5; // rsi
  __int64 result; // rax
  unsigned int v7; // eax
  unsigned int v8; // ebx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(DeviceExtension + 184);
  result = ACPIBusIrpRemoveDevice(a1, a2);
  if ( (int)result >= 0 )
  {
    v7 = ACPIEcStopRemoveDeviceCommon(v5);
    *(_QWORD *)v5 = 0LL;
    v8 = v7;
    if ( (*(_QWORD *)(DeviceExtension + 8) & 0x80000000080LL) != 0 )
    {
      AMLIDereferenceHandleEx(*(volatile signed __int32 **)(v5 + 56));
      *(_QWORD *)(v5 + 56) = 0LL;
    }
    return v8;
  }
  return result;
}
