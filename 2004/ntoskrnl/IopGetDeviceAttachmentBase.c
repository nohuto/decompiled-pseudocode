/*
 * XREFs of IopGetDeviceAttachmentBase @ 0x14027756C
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x14026F940 (IopCompleteUnloadOrDelete.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140277254 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14027746C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopGetDevicePDO @ 0x140277508 (IopGetDevicePDO.c)
 *     IopVerifyDriverObjectOnStack @ 0x1404FC658 (IopVerifyDriverObjectOnStack.c)
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
