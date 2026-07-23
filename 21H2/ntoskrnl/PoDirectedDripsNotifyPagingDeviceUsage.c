/*
 * XREFs of PoDirectedDripsNotifyPagingDeviceUsage @ 0x1407CA248
 * Callers:
 *     PiPagePathSetState @ 0x1407CA160 (PiPagePathSetState.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14027171C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PoDirectedDripsNotifyPagingDeviceUsage(__int64 a1, char a2)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v4; // r9
  __int64 v5; // r8
  int v6; // eax
  int v7; // eax

  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(a1, 0x64446F50u);
  v4 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v5 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 768);
    if ( a2 )
      v7 = v6 + 1;
    else
      v7 = v6 - 1;
    *(_DWORD *)(v5 + 768) = v7;
  }
  return ObfDereferenceObjectWithTag(v4, 0x64446F50u);
}
