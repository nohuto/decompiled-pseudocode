/*
 * XREFs of ACPIInternalDeviceQueryCapabilities @ 0x1C00A0F00
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00209B0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C009F074 (ACPISystemPowerQueryDeviceCapabilities.c)
 */

__int64 __fastcall ACPIInternalDeviceQueryCapabilities(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rbx
  __int64 SecurityContext; // rdx
  unsigned int v5; // r8d
  int v6; // eax
  int v7; // ecx
  int DeviceCapabilities; // edi
  __int64 v10; // rdx
  char *v11; // rcx
  char *v12; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  SecurityContext = (__int64)a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  v5 = *(_DWORD *)(SecurityContext + 4) & 0xFFFFFFBF | (*(_QWORD *)(DeviceExtension + 576) != 0LL ? 0x40 : 0);
  *(_DWORD *)(SecurityContext + 4) = v5;
  v6 = v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)((unsigned __int64)*(unsigned int *)(DeviceExtension + 8) >> 9)) & 0x100 | 0x80;
  *(_DWORD *)(SecurityContext + 4) = v6;
  v7 = v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)~(unsigned __int16)((unsigned int)HIDWORD(*(_QWORD *)(DeviceExtension + 8)) >> 8)) & 0x4000;
  *(_DWORD *)(SecurityContext + 4) = v7;
  *(_DWORD *)(SecurityContext + 4) = v7 ^ (v7 ^ (*(_DWORD *)(DeviceExtension + 8) >> 12)) & 0x20000;
  DeviceCapabilities = ACPISystemPowerQueryDeviceCapabilities((_QWORD *)DeviceExtension, SecurityContext);
  if ( DeviceCapabilities < 0 )
  {
    v10 = *(_QWORD *)(DeviceExtension + 8);
    v11 = byte_1C00701BA;
    v12 = byte_1C00701BA;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v11 = *(char **)(DeviceExtension + 568);
      if ( (v10 & 0x400000000000LL) != 0 )
        v12 = *(char **)(DeviceExtension + 576);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0xAu,
        (__int64)&WPP_3f059b4445c33feb0bcb2acb2d7cf140_Traceguids,
        DeviceCapabilities,
        DeviceExtension,
        (__int64)v11,
        (__int64)v12);
  }
  a2->IoStatus.Status = DeviceCapabilities;
  IofCompleteRequest(a2, 0);
  return (unsigned int)DeviceCapabilities;
}
