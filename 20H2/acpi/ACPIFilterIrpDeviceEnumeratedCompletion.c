/*
 * XREFs of ACPIFilterIrpDeviceEnumeratedCompletion @ 0x1C008F010
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalSetFlags @ 0x1C0002350 (ACPIInternalSetFlags.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C00029E4 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0002C90 (WPP_RECORDER_SF_qsLqss.c)
 */

__int64 __fastcall ACPIFilterIrpDeviceEnumeratedCompletion(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rax
  char v3; // di
  char v4; // bp
  char v5; // si
  unsigned __int8 v6; // r14
  __int64 DeviceExtension; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  NTSTATUS DevicePropertyData; // eax
  char *IrpText; // rax
  const char *v12; // r8
  const char *v13; // r10
  ULONG RequiredSize; // [rsp+60h] [rbp-28h] BYREF
  ULONG Type[3]; // [rsp+64h] [rbp-24h] BYREF
  char Data; // [rsp+98h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  Type[0] = 0;
  v4 = a2;
  v5 = 0;
  v6 = *(_BYTE *)(v2 + 1);
  Data = 0;
  RequiredSize = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v9 = DeviceExtension;
  if ( DeviceExtension )
  {
    DevicePropertyData = IoGetDevicePropertyData(
                           *(PDEVICE_OBJECT *)(DeviceExtension + 744),
                           &DEVPKEY_PciDevice_OnPostPath,
                           0,
                           0,
                           1u,
                           &Data,
                           &RequiredSize,
                           Type);
    v5 = DevicePropertyData;
    if ( DevicePropertyData >= 0 && RequiredSize == 1 && Data )
      ACPIInternalSetFlags((void *)(v9 + 960), 0x8000000000000uLL);
  }
  if ( v9 )
  {
    v8 = 0x200000000000LL;
    v3 = v9;
    if ( (*(_QWORD *)(v9 + 8) & 0x200000000000LL) != 0 )
      v8 = 0x400000000000LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v8, v6);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x15u,
      (__int64)&WPP_22c0b63b2f1d30c22e2e761bc8912dea_Traceguids,
      v4,
      IrpText,
      v5,
      v3,
      v12,
      v13);
  }
  return 0LL;
}
