/*
 * XREFs of ObpUnlockDirectory @ 0x14066960C
 * Callers:
 *     ObReferenceObjectByNameEx @ 0x1406686C8 (ObReferenceObjectByNameEx.c)
 *     ObpDeleteDirectoryEntry @ 0x140668C60 (ObpDeleteDirectoryEntry.c)
 *     NtQueryDirectoryObject @ 0x140668CE0 (NtQueryDirectoryObject.c)
 *     ObpInsertOrLocateNamedObject @ 0x14066915C (ObpInsertOrLocateNamedObject.c)
 *     ObpCreateSymbolicLinkName @ 0x1406A97F0 (ObpCreateSymbolicLinkName.c)
 *     NtSetInformationObject @ 0x1406B9250 (NtSetInformationObject.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1406B94DC (ObpMarkDirectoryObjectsTemporary.c)
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 *     ObpCloseHandle @ 0x140734160 (ObpCloseHandle.c)
 *     ObpDeleteNameCheck @ 0x1407A3190 (ObpDeleteNameCheck.c)
 *     ObCreateObjectTypeEx @ 0x140824B30 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140AFE184 (ObInitSystem.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

void __fastcall ObpUnlockDirectory(__int64 a1)
{
  ExReleasePushLockEx(*(_QWORD *)a1 + 296LL, 0LL);
  if ( *(_BYTE *)(a1 + 22) )
  {
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)a1, 0x554C624Fu);
    *(_BYTE *)(a1 + 22) = 0;
  }
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 21) = 0;
  KeLeaveCriticalRegion();
}
