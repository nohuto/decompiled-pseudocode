/*
 * XREFs of ACPIFilterIrpQueryResourceRequirements @ 0x1C0097840
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C0001660 (ACPIDispatchForwardIrp.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0003A80 (WPP_RECORDER_SF_qLqss.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C0097DD0 (PnpBiosGetDeviceResourceList.c)
 *     ACPIInternalSetSpare @ 0x1C0097F6C (ACPIInternalSetSpare.c)
 *     ACPIInternalSetProximityDomain @ 0x1C009800C (ACPIInternalSetProximityDomain.c)
 */

__int64 __fastcall ACPIFilterIrpQueryResourceRequirements(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _QWORD *DeviceExtension; // rbx
  __int64 v5; // rdx
  int DeviceResourceList; // eax
  char v8; // r10
  const char *v9; // rcx
  const char *v10; // r8
  __int64 v11; // rdx
  PVOID P; // [rsp+70h] [rbp+18h] BYREF

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(BugCheckParameter3);
  ACPIInternalSetProximityDomain(DeviceExtension);
  ACPIInternalSetSpare(DeviceExtension);
  P = 0LL;
  LOBYTE(v5) = 1;
  DeviceResourceList = PnpBiosGetDeviceResourceList(BugCheckParameter3, v5, &P);
  if ( DeviceResourceList < 0 )
  {
    v8 = 0;
    v9 = (const char *)&unk_1C006FB8B;
    v10 = (const char *)&unk_1C006FB8B;
    if ( DeviceExtension )
    {
      v11 = DeviceExtension[1];
      v8 = (char)DeviceExtension;
      if ( (v11 & 0x200000000000LL) != 0 )
      {
        v9 = (const char *)DeviceExtension[76];
        if ( (v11 & 0x400000000000LL) != 0 )
          v10 = (const char *)DeviceExtension[77];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0xFu,
        (__int64)&WPP_e895f2808a1832dc95c5c4714d739d11_Traceguids,
        BugCheckParameter3,
        DeviceResourceList,
        v8,
        v9,
        v10);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
}
