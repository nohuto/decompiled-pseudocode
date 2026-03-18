/*
 * XREFs of OSInterruptVector @ 0x1C00BD810
 * Callers:
 *     ACPIInterruptInitialize @ 0x1C0097C64 (ACPIInterruptInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C000270C (WPP_RECORDER_SF_L.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     memset @ 0x1C0032180 (memset.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C0096DF4 (AcpiIrqLibSetupSciInterrupt.c)
 */

__int64 __fastcall OSInterruptVector(ULONG_PTR BugCheckParameter3)
{
  __int64 DeviceExtension; // rbx
  int v3; // eax
  unsigned int v4; // edi
  struct _DEVICE_OBJECT *v5; // rax
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+28h] [rbp-60h]
  NTSTATUS v10; // [rsp+28h] [rbp-60h]
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+30h] [rbp-58h] BYREF

  memset(&Parameters, 0, sizeof(Parameters));
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  KeInitializeDpc(
    (PRKDPC)(DeviceExtension + 96),
    (PKDEFERRED_ROUTINE)ACPIInterruptServiceRoutineDPC,
    (PVOID)DeviceExtension);
  v3 = AcpiIrqLibSetupSciInterrupt(
         *(_WORD *)(*((_QWORD *)AcpiInformation + 1) + 46LL),
         *(void **)(DeviceExtension + 744));
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = v3;
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0xAu,
        (__int64)&WPP_ec0197110b243600652482d802840487_Traceguids,
        v9);
    }
    return v4;
  }
  else
  {
    Parameters.Version = 2;
    Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(DeviceExtension + 80);
    v5 = *(struct _DEVICE_OBJECT **)(DeviceExtension + 744);
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = 0;
    Parameters.FullySpecified.PhysicalDeviceObject = v5;
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ACPIInterruptServiceRoutine;
    *(_OWORD *)&Parameters.MessageBased.ServiceContext = (unsigned __int64)DeviceExtension;
    v6 = IoConnectInterruptEx(&Parameters);
    v7 = v6;
    if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = v6;
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0xBu,
        (__int64)&WPP_ec0197110b243600652482d802840487_Traceguids,
        v10);
    }
    return v7;
  }
}
