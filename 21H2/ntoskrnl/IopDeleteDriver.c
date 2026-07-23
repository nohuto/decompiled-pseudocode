/*
 * XREFs of IopDeleteDriver @ 0x140772230
 * Callers:
 *     <none>
 * Callees:
 *     KeFlushQueuedDpcs @ 0x14029DA30 (KeFlushQueuedDpcs.c)
 *     PnpRequestDeviceAction @ 0x1403703A4 (PnpRequestDeviceAction.c)
 *     IoUnregisterPriorityCallback @ 0x140506590 (IoUnregisterPriorityCallback.c)
 *     MmUnloadSystemImage @ 0x140772310 (MmUnloadSystemImage.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall IopDeleteDriver(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rbx
  void *v4; // rcx
  _QWORD *v5; // rax
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  v2 = *(_QWORD **)(*(_QWORD *)(a1 + 48) + 40LL);
  if ( v2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      ExFreePoolWithTag(v2, 0);
      v2 = v3;
    }
    while ( v3 );
  }
  if ( (*(_DWORD *)(a1 + 16) & 0x200) != 0 )
    IoUnregisterPriorityCallback(a1);
  if ( *(_QWORD *)(a1 + 40) )
  {
    KeFlushQueuedDpcs();
    MmUnloadSystemImage(*(_QWORD *)(a1 + 40));
    PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 2, 0, 38LL, 0LL, 0LL, 0LL);
  }
  v4 = *(void **)(a1 + 64);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v5 = *(_QWORD **)(a1 + 48);
  v6 = (void *)v5[4];
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    v5 = *(_QWORD **)(a1 + 48);
  }
  v7 = (void *)v5[6];
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    v5 = *(_QWORD **)(a1 + 48);
  }
  v8 = (void *)v5[7];
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
}
