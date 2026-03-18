/*
 * XREFs of PsGetCurrentSilo @ 0x140211160
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140505650 (IoRevokeHandlesForProcess.c)
 *     VRegEnabledInJob @ 0x1405D2D60 (VRegEnabledInJob.c)
 *     IoQueryInformationByName @ 0x1405D5B70 (IoQueryInformationByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405DFEC4 (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByNameEx @ 0x1405E566C (ObReferenceObjectByNameEx.c)
 *     NtQueryAttributesFile @ 0x1405FAF90 (NtQueryAttributesFile.c)
 *     IopCreateFile @ 0x1405FBD80 (IopCreateFile.c)
 *     ObReferenceObjectByName @ 0x1405FDA80 (ObReferenceObjectByName.c)
 *     ObOpenObjectByName @ 0x14060CA70 (ObOpenObjectByName.c)
 *     CmpParseKey @ 0x140619690 (CmpParseKey.c)
 *     ObQueryNameStringMode @ 0x1406350A0 (ObQueryNameStringMode.c)
 *     NtOpenSymbolicLinkObject @ 0x1406B1A90 (NtOpenSymbolicLinkObject.c)
 *     NtQueryFullAttributesFile @ 0x1406B2070 (NtQueryFullAttributesFile.c)
 *     ObpCreateSymbolicLinkName @ 0x1406DA1E4 (ObpCreateSymbolicLinkName.c)
 *     NtDeleteFile @ 0x140778CA0 (NtDeleteFile.c)
 *     PsRegisterSiloMonitor @ 0x14078B220 (PsRegisterSiloMonitor.c)
 *     CmLockKeyForWrite @ 0x1407BEBF0 (CmLockKeyForWrite.c)
 *     IopFastQueryNetworkAttributes @ 0x140896B78 (IopFastQueryNetworkAttributes.c)
 *     PsRootSiloInformation @ 0x140908444 (PsRootSiloInformation.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409830EC (ObGetSiloRootDirectoryPath.c)
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
