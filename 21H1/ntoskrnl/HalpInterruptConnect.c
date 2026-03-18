/*
 * XREFs of HalpInterruptConnect @ 0x1404B5E78
 * Callers:
 *     HalpTimerInitializeSystemWatchdog @ 0x1404BCF10 (HalpTimerInitializeSystemWatchdog.c)
 *     HalpRegisterPeiErrorSource @ 0x1404CA7A4 (HalpRegisterPeiErrorSource.c)
 *     HalpDmaConfigureInterrupt @ 0x1404D7380 (HalpDmaConfigureInterrupt.c)
 * Callees:
 *     HalpInterruptRemap @ 0x1403753B0 (HalpInterruptRemap.c)
 *     HalpInterruptApplyOverrides @ 0x140375BF4 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptGsiToLine @ 0x140375D2C (HalpInterruptGsiToLine.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     HalpInterruptLineToGsi @ 0x1404B7144 (HalpInterruptLineToGsi.c)
 *     IoSetDevicePropertyData @ 0x14072C410 (IoSetDevicePropertyData.c)
 *     IoConnectInterruptEx @ 0x14074A3E0 (IoConnectInterruptEx.c)
 */

int __fastcall HalpInterruptConnect(
        __int128 *a1,
        unsigned int a2,
        ULONG a3,
        KIRQL a4,
        unsigned int a5,
        KINTERRUPT_MODE a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        KSPIN_LOCK *a9,
        KIRQL a10,
        int a11,
        PKINTERRUPT *a12)
{
  __int128 v16; // xmm0
  int result; // eax
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+48h] [rbp-B8h]
  PKINTERRUPT *v20; // [rsp+50h] [rbp-B0h]
  KSPIN_LOCK *v21; // [rsp+58h] [rbp-A8h]
  _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD Data[6]; // [rsp+B0h] [rbp-50h] BYREF

  v21 = a9;
  v20 = a12;
  memset(Data, 0, sizeof(Data));
  v16 = *a1;
  DWORD2(Data[0]) = 0;
  v18 = 0LL;
  LODWORD(Data[3]) = a11 & 0x3FFFFFFF | Data[3] & 0xC0000000 | 0x40000000;
  LODWORD(Data[0]) = 1;
  HIDWORD(Data[0]) = a3;
  LOBYTE(Data[1]) = a4;
  Data[2] = v16;
  *(_QWORD *)((char *)&Data[1] + 4) = __PAIR64__(a6, a5);
  result = HalpInterruptGsiToLine(a2, &v18);
  if ( result >= 0 )
  {
    HalpInterruptApplyOverrides((unsigned int *)&v18, (_DWORD *)&Data[1] + 1, (_DWORD *)&Data[1] + 2);
    result = HalpInterruptLineToGsi(&v18, &Data[4]);
    if ( result >= 0 )
    {
      v18 = 0LL;
      v19 = 0;
      result = HalpInterruptRemap(0, 0, (int)&v18, 0, (unsigned int *)Data + 2, 1u);
      if ( result >= 0 )
      {
        IoSetDevicePropertyData(AcpiRootPdo, &INTERRUPT_CONNECTION_DATA_PKEY, 0, 0, 0x1003u, 0x60u, Data);
        memset(&Parameters, 0, sizeof(Parameters));
        Parameters.FullySpecified.PhysicalDeviceObject = AcpiRootPdo;
        Parameters.FullySpecified.InterruptObject = v20;
        Parameters.FullySpecified.SpinLock = v21;
        Parameters.FullySpecified.SynchronizeIrql = a10;
        Parameters.FullySpecified.ProcessorEnableMask = *(_QWORD *)a1;
        Parameters.FullySpecified.Group = *((_WORD *)a1 + 4);
        Parameters.Version = 4;
        *(_OWORD *)&Parameters.MessageBased.MessageServiceRoutine = __PAIR128__(a8, a7);
        *(_WORD *)&Parameters.MessageBased.FloatingSave = 256;
        Parameters.FullySpecified.Vector = a3;
        Parameters.FullySpecified.Irql = a4;
        Parameters.FullySpecified.InterruptMode = a6;
        result = IoConnectInterruptEx(&Parameters);
        if ( result >= 0 )
          return 0;
      }
    }
  }
  return result;
}
