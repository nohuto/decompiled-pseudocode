/*
 * XREFs of VfIoDeleteDevice @ 0x1409D9154
 * Callers:
 *     IovDeleteDevice @ 0x1409C81A8 (IovDeleteDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     IovUtilMarkDeviceObject @ 0x1405A034C (IovUtilMarkDeviceObject.c)
 *     VF_FIND_DEVICE_INFORMATION_AND_REMOVE @ 0x1409CD338 (VF_FIND_DEVICE_INFORMATION_AND_REMOVE.c)
 *     VF_MARK_FOR_DEFERRED_REMOVE @ 0x1409CD51C (VF_MARK_FOR_DEFERRED_REMOVE.c)
 *     ViReleaseDmaAdapter @ 0x1409D2530 (ViReleaseDmaAdapter.c)
 *     ViDevObjRemove @ 0x1409D935C (ViDevObjRemove.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x1409D99AC (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x1409D9A5C (IovUtilIsDeviceObjectMarked.c)
 *     VfErrorReport9 @ 0x1409DB150 (VfErrorReport9.c)
 *     VfIrpLogDeleteDeviceLogs @ 0x1409E6700 (VfIrpLogDeleteDeviceLogs.c)
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
