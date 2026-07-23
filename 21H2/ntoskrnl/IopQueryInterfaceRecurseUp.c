/*
 * XREFs of IopQueryInterfaceRecurseUp @ 0x140765548
 * Callers:
 *     IoQueryInterface @ 0x140765750 (IoQueryInterface.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14027171C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14062E9D0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14062EA64 (PpDevNodeLockTree.c)
 *     PnpQueryInterface @ 0x140765F44 (PnpQueryInterface.c)
 */

__int64 __fastcall IopQueryInterfaceRecurseUp(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, void *a6)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v8; // rsi
  __int64 v9; // rbx
  unsigned int Interface; // edi

  PpDevNodeLockTree(0);
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a1, 0x49706E50u);
  v8 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v9 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
  else
    v9 = 0LL;
  if ( (PVOID)v9 == IopRootDeviceNode )
  {
LABEL_8:
    Interface = -1073741637;
  }
  else
  {
    while ( v9 && *(_DWORD *)(v9 + 300) != 788 )
    {
      Interface = PnpQueryInterface(*(PDEVICE_OBJECT *)(v9 + 32), a5, a6);
      if ( Interface != -1073741637 )
        goto LABEL_9;
      v9 = *(_QWORD *)(v9 + 16);
      if ( (PVOID)v9 == IopRootDeviceNode )
        goto LABEL_8;
    }
    Interface = -1073741130;
  }
LABEL_9:
  ObfDereferenceObjectWithTag(v8, 0x49706E50u);
  PpDevNodeUnlockTree(0);
  return Interface;
}
