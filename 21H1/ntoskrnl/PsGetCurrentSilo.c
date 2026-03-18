/*
 * XREFs of PsGetCurrentSilo @ 0x140206860
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140501730 (IoRevokeHandlesForProcess.c)
 *     VRegEnabledInJob @ 0x1405CB330 (VRegEnabledInJob.c)
 *     IoQueryInformationByName @ 0x1405CE2F0 (IoQueryInformationByName.c)
 *     ObQueryNameStringMode @ 0x1405D9AA0 (ObQueryNameStringMode.c)
 *     ObOpenObjectByName @ 0x1405EB090 (ObOpenObjectByName.c)
 *     ObReferenceObjectByName @ 0x140613480 (ObReferenceObjectByName.c)
 *     ObpInsertOrLocateNamedObject @ 0x140616B1C (ObpInsertOrLocateNamedObject.c)
 *     CmpParseKey @ 0x140623680 (CmpParseKey.c)
 *     ObReferenceObjectByNameEx @ 0x14064B8F0 (ObReferenceObjectByNameEx.c)
 *     IopCreateFile @ 0x14066D230 (IopCreateFile.c)
 *     NtQueryFullAttributesFile @ 0x14066DD30 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x14066DFC0 (NtQueryAttributesFile.c)
 *     NtOpenSymbolicLinkObject @ 0x1406B8DC0 (NtOpenSymbolicLinkObject.c)
 *     ObpCreateSymbolicLinkName @ 0x1406E3D08 (ObpCreateSymbolicLinkName.c)
 *     NtDeleteFile @ 0x1407682B0 (NtDeleteFile.c)
 *     PsRegisterSiloMonitor @ 0x14077E490 (PsRegisterSiloMonitor.c)
 *     CmLockKeyForWrite @ 0x1407ADB50 (CmLockKeyForWrite.c)
 *     IopFastQueryNetworkAttributes @ 0x14088FD68 (IopFastQueryNetworkAttributes.c)
 *     PsRootSiloInformation @ 0x1409019D4 (PsRootSiloInformation.c)
 *     ObGetSiloRootDirectoryPath @ 0x14097BF7C (ObGetSiloRootDirectoryPath.c)
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
