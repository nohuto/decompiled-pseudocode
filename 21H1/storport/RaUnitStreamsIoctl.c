/*
 * XREFs of RaUnitStreamsIoctl @ 0x1C0019260
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B8F8 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007C88 (RaidAllocatePool.c)
 *     RaidCompleteRequestEx @ 0x1C0009950 (RaidCompleteRequestEx.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001954C (RaidUnitSendSrbIoControlSynchronously.c)
 *     memmove @ 0x1C001B200 (memmove.c)
 *     memset @ 0x1C001B4C0 (memset.c)
 */

__int64 __fastcall RaUnitStreamsIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r12
  unsigned int v5; // ebx
  unsigned int Options; // esi
  unsigned int Length; // edi
  unsigned int v8; // r15d
  _DWORD *Pool; // rax
  _DWORD *v10; // r14
  unsigned int v11; // esi
  unsigned int v13; // eax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = 0;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v8 = Options;
  if ( Options <= Length )
    v8 = CurrentStackLocation->Parameters.Read.Length;
  Pool = RaidAllocatePool(NonPagedPoolNx, v8 + 28, 0x72536152u, *(_QWORD *)(a1 + 8));
  v10 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, v8 + 28);
    v10[4] = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    *v10 = 8;
    v10[3] = *(_DWORD *)(a1 + 1264);
    v10[6] = v8;
    if ( Options )
      memmove(v10 + 7, a2->AssociatedIrp.MasterIrp, Options);
    v11 = RaidUnitSendSrbIoControlSynchronously(a1, (_DWORD)a2, (_DWORD)v10, v8 + 28, 0LL);
    if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147483643 )
    {
      if ( Length )
      {
        v13 = v10[6];
        if ( v13 )
        {
          if ( Length >= v13 )
            Length = v10[6];
          v5 = Length;
          memmove(a2->AssociatedIrp.MasterIrp, v10 + 7, Length);
        }
      }
    }
    ExFreePoolWithTag(v10, 0x72536152u);
  }
  else
  {
    v11 = -1073741670;
  }
  a2->IoStatus.Information = v5;
  return RaidCompleteRequestEx(a2, 0, v11);
}
