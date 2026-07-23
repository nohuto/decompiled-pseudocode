/*
 * XREFs of IopGetDeviceAttachmentBase @ 0x14027181C
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x140271504 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14027171C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopGetDevicePDO @ 0x1402717B8 (IopGetDevicePDO.c)
 *     IopCompleteUnloadOrDelete @ 0x1402A6030 (IopCompleteUnloadOrDelete.c)
 *     IopVerifyDriverObjectOnStack @ 0x140501A28 (IopVerifyDriverObjectOnStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopGetDeviceAttachmentBase(__int64 a1)
{
  __int64 v1; // rdx
  __int64 i; // rcx

  v1 = a1;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 48LL); i; i = *(_QWORD *)(*(_QWORD *)(i + 312) + 48LL) )
    v1 = i;
  return v1;
}
