/*
 * XREFs of ACPIFilterIrpStartDevice @ 0x1C0090EC0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C0001908 (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001CCC (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInitStartDevice @ 0x1C00050B0 (ACPIInitStartDevice.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C0057188 (ACPIQueryGedDeviceInterface.c)
 */

__int64 __fastcall ACPIFilterIrpStartDevice(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v5; // rcx
  __int64 DeviceExtension; // rbx
  char *IrpText; // rax
  const char *v8; // r8
  const char *v9; // r10
  char v10; // r11
  __int64 result; // rax
  int v12; // eax
  __int64 v13; // [rsp+28h] [rbp-50h]

  v2 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v5, *(_BYTE *)(v2 + 1));
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x18u,
      (__int64)&WPP_e895f2808a1832dc95c5c4714d739d11_Traceguids,
      a2,
      IrpText,
      *(_DWORD *)(a2 + 48),
      v10,
      v8,
      v9);
  }
  if ( _bittest64((const signed __int64 *)(DeviceExtension + 1000), 0x26u) )
  {
    v12 = ACPIQueryGedDeviceInterface((_QWORD *)DeviceExtension);
    if ( v12 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v13) = v12;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        8u,
        0x19u,
        (__int64)&WPP_e895f2808a1832dc95c5c4714d739d11_Traceguids,
        v13);
    }
  }
  result = ACPIInitStartDevice(
             a1,
             v2,
             (void (__fastcall *)(_QWORD *, __int64, _QWORD))ACPIFilterIrpStartDeviceCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}
