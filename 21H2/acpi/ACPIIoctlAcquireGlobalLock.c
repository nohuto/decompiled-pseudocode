/*
 * XREFs of ACPIIoctlAcquireGlobalLock @ 0x1C005721C
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C000B8A0 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     ACPIAsyncAcquireGlobalLock @ 0x1C000F580 (ACPIAsyncAcquireGlobalLock.c)
 */

__int64 __fastcall ACPIIoctlAcquireGlobalLock(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  _IRP *MasterIrp; // rbx
  _MDL *PoolWithTag; // rax

  v3 = *(_DWORD *)(a3 + 8);
  a2->IoStatus.Information = 0LL;
  if ( v3 < 0x10 )
  {
    v5 = -1073741820;
LABEL_3:
    a2->IoStatus.Status = v5;
    IofCompleteRequest(a2, 0);
    return v5;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( *(_DWORD *)&MasterIrp->Type != 1281843521 )
  {
    v5 = -1073741585;
    goto LABEL_3;
  }
  PoolWithTag = (_MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x4C706341u);
  if ( !PoolWithTag )
  {
    v5 = -1073741670;
    goto LABEL_3;
  }
  *(_OWORD *)&PoolWithTag->Next = 0LL;
  *(_OWORD *)&PoolWithTag->Process = 0LL;
  MasterIrp->MdlAddress = PoolWithTag;
  a2->IoStatus.Information = 16LL;
  PoolWithTag->Next = (_MDL *)a2;
  PoolWithTag->Size = 1;
  v5 = ACPIAsyncAcquireGlobalLock((__int64)PoolWithTag);
  result = 259LL;
  if ( v5 != 259 )
    goto LABEL_3;
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  return result;
}
