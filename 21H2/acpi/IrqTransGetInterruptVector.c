/*
 * XREFs of IrqTransGetInterruptVector @ 0x1C00B62D0
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibReleaseArbiterLock @ 0x1C002385C (IrqLibReleaseArbiterLock.c)
 *     IrqLibAcquireArbiterLock @ 0x1C0023884 (IrqLibAcquireArbiterLock.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C009A1D0 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C009A2C0 (IrqArbGsivFromIrq.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1C009B9F8 (IrqTranslatepQueryDeviceIrql.c)
 */

__int64 __fastcall IrqTransGetInterruptVector(__int64 a1, __int64 a2, unsigned int a3, int a4, char *a5, _QWORD *a6)
{
  unsigned __int64 v6; // rbx
  unsigned int v7; // edi
  unsigned int v9; // esi
  int DeviceIdtAssignment; // ebx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+30h] [rbp-18h]

  v6 = a3;
  v7 = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( a3 != a4 )
    return 0LL;
  IrqLibAcquireArbiterLock(0);
  v9 = IrqArbGsivFromIrq(v6);
  DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(0LL, v9, 0, &v11);
  IrqLibReleaseArbiterLock();
  if ( DeviceIdtAssignment >= 0 )
  {
    v7 = DWORD1(v12);
    *a5 = IrqTranslatepQueryDeviceIrql(v9, SDWORD1(v12));
    *a6 = v11;
  }
  return v7;
}
