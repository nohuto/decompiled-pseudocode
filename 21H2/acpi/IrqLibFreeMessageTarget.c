/*
 * XREFs of IrqLibFreeMessageTarget @ 0x1C00B5D90
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibReleaseArbiterLock @ 0x1C002385C (IrqLibReleaseArbiterLock.c)
 *     IrqLibAcquireArbiterLock @ 0x1C0023884 (IrqLibAcquireArbiterLock.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C006C894 (ProcessorDeleteDeviceIdtAssignment.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C009A1D0 (ProcessorGetDeviceIdtAssignment.c)
 *     ProcessorIdtEntryToGsiv @ 0x1C00A0E6C (ProcessorIdtEntryToGsiv.c)
 */

KIRQL __fastcall IrqLibFreeMessageTarget(PVOID Owner, int a2, __int64 a3)
{
  KIRQL result; // al
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h]
  ULONGLONG End; // [rsp+68h] [rbp+20h] BYREF

  LODWORD(End) = 0;
  v10 = 0LL;
  result = KeGetCurrentIrql();
  if ( !result )
  {
    IrqLibAcquireArbiterLock(1);
    if ( (int)ProcessorIdtEntryToGsiv(a2, a3, v7, &End) >= 0 )
    {
      v8 = End;
      if ( (int)ProcessorGetDeviceIdtAssignment(Owner, End, 0, &v9) >= 0 )
      {
        ProcessorDeleteDeviceIdtAssignment(Owner, v8, DWORD1(v10), 0);
        RtlDeleteRange(RangeList, v8, v8, Owner);
      }
    }
    return IrqLibReleaseArbiterLock();
  }
  return result;
}
