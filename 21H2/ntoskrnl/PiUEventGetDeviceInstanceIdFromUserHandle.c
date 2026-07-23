/*
 * XREFs of PiUEventGetDeviceInstanceIdFromUserHandle @ 0x14076E41C
 * Callers:
 *     PiUEventHandleRegistration @ 0x1406B9390 (PiUEventHandleRegistration.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PnpGetRelatedTargetDevice @ 0x1402F7DC0 (PnpGetRelatedTargetDevice.c)
 *     PsIsProcessAppContainer @ 0x14060BF44 (PsIsProcessAppContainer.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall PiUEventGetDeviceInstanceIdFromUserHandle(void *a1, _QWORD *a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v7; // ebx
  int RelatedTargetDevice; // eax
  __int64 v9; // rcx
  bool IsProcessAppContainer; // al
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a3 = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  v12 = 0LL;
  DmaAdapter = 0LL;
  v7 = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)IoFileObjectType, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( v7 >= 0 )
  {
    RelatedTargetDevice = PnpGetRelatedTargetDevice((PFILE_OBJECT)DmaAdapter, &v12);
    v9 = v12;
    v7 = RelatedTargetDevice;
    if ( RelatedTargetDevice >= 0 )
    {
      *a2 = v12 + 40;
      IsProcessAppContainer = PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
      v9 = v12;
      if ( IsProcessAppContainer )
        *a3 = *(_QWORD *)(v12 + 32);
    }
    if ( v9 )
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)(v9 + 32));
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  return (unsigned int)v7;
}
