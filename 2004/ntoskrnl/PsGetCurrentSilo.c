/*
 * XREFs of PsGetCurrentSilo @ 0x140299370
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140501D80 (IoRevokeHandlesForProcess.c)
 *     VRegEnabledInJob @ 0x1405CC700 (VRegEnabledInJob.c)
 *     IoQueryInformationByName @ 0x1405CF6C0 (IoQueryInformationByName.c)
 *     CmpParseKey @ 0x1405EE060 (CmpParseKey.c)
 *     IopCreateFile @ 0x140615C80 (IopCreateFile.c)
 *     NtQueryFullAttributesFile @ 0x140616780 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x140616A10 (NtQueryAttributesFile.c)
 *     ObReferenceObjectByNameEx @ 0x14062DD40 (ObReferenceObjectByNameEx.c)
 *     ObQueryNameStringMode @ 0x14065FDA0 (ObQueryNameStringMode.c)
 *     ObpInsertOrLocateNamedObject @ 0x140667CF0 (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByName @ 0x140668760 (ObReferenceObjectByName.c)
 *     ObOpenObjectByName @ 0x1406945D0 (ObOpenObjectByName.c)
 *     NtOpenSymbolicLinkObject @ 0x1406D8670 (NtOpenSymbolicLinkObject.c)
 *     ObpCreateSymbolicLinkName @ 0x140707664 (ObpCreateSymbolicLinkName.c)
 *     NtDeleteFile @ 0x14076A690 (NtDeleteFile.c)
 *     PsRegisterSiloMonitor @ 0x14077DC80 (PsRegisterSiloMonitor.c)
 *     CmLockKeyForWrite @ 0x1407B0CB0 (CmLockKeyForWrite.c)
 *     IopFastQueryNetworkAttributes @ 0x140891088 (IopFastQueryNetworkAttributes.c)
 *     PsRootSiloInformation @ 0x140902834 (PsRootSiloInformation.c)
 *     ObGetSiloRootDirectoryPath @ 0x14097D31C (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *PsGetCurrentSilo()
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _LIST_ENTRY *result; // rax

  CurrentThread = KeGetCurrentThread();
  result = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( result == (struct _LIST_ENTRY *)-3LL )
  {
    for ( result = (struct _LIST_ENTRY *)CurrentThread->Process[1].Affinity.Bitmap[16]; result; result = result[67].Flink )
    {
      if ( ((__int64)result[82].Blink & 0x40000000) != 0 )
        break;
    }
  }
  return result;
}
