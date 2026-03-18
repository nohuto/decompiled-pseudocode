/*
 * XREFs of VfIoDeleteDevice @ 0x1409D30D4
 * Callers:
 *     IovDeleteDevice @ 0x1409C2178 (IovDeleteDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     IovUtilMarkDeviceObject @ 0x14059C1BC (IovUtilMarkDeviceObject.c)
 *     VF_FIND_DEVICE_INFORMATION_AND_REMOVE @ 0x1409C7308 (VF_FIND_DEVICE_INFORMATION_AND_REMOVE.c)
 *     VF_MARK_FOR_DEFERRED_REMOVE @ 0x1409C74EC (VF_MARK_FOR_DEFERRED_REMOVE.c)
 *     ViReleaseDmaAdapter @ 0x1409CC500 (ViReleaseDmaAdapter.c)
 *     ViDevObjRemove @ 0x1409D32DC (ViDevObjRemove.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x1409D392C (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x1409D39DC (IovUtilIsDeviceObjectMarked.c)
 *     VfErrorReport9 @ 0x1409D50D0 (VfErrorReport9.c)
 *     VfIrpLogDeleteDeviceLogs @ 0x1409E0680 (VfIrpLogDeleteDeviceLogs.c)
 */

__int64 __fastcall VfIoDeleteDevice(struct _LIST_ENTRY *BugCheckParameter2, __int64 a2)
{
  struct _LIST_ENTRY *v3; // rbx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  void *LowerDeviceObjectWithTag; // rdi

  v3 = BugCheckParameter2;
  if ( ViVerifyDma )
  {
    Blink = BugCheckParameter2[19].Blink;
    if ( !Blink )
      goto LABEL_17;
    do
    {
      Flink = Blink[3].Flink;
      if ( !Flink )
        break;
      Blink = Flink[19].Blink;
      BugCheckParameter2 = Flink;
    }
    while ( Blink );
    if ( BugCheckParameter2 == v3 )
    {
LABEL_17:
      while ( 1 )
      {
        v6 = VF_FIND_DEVICE_INFORMATION_AND_REMOVE(v3);
        if ( !v6 )
          break;
        ViReleaseDmaAdapter((ULONG_PTR)v6);
      }
    }
    else
    {
      VF_MARK_FOR_DEFERRED_REMOVE(BugCheckParameter2);
    }
  }
  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
  {
    ViDevObjRemove((ULONG_PTR)v3);
    if ( (unsigned int)IovUtilIsDeviceObjectMarked(v3, 0LL) )
      VfErrorReport9(576LL, a2);
    IovUtilMarkDeviceObject((__int64)v3, 0LL);
    LowerDeviceObjectWithTag = (void *)IovUtilGetLowerDeviceObjectWithTag(v8);
    if ( LowerDeviceObjectWithTag )
    {
      VfErrorReport9(513LL, a2);
      ObfDereferenceObjectWithTag(LowerDeviceObjectWithTag, 0x49667256u);
    }
    return VfIrpLogDeleteDeviceLogs(v3);
  }
  return result;
}
