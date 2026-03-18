/*
 * XREFs of HalPutDmaAdapter @ 0x140251C40
 * Callers:
 *     ObReferenceObjectByNameEx @ 0x1406686C8 (ObReferenceObjectByNameEx.c)
 *     ObReferenceFileObjectForWrite @ 0x14071E230 (ObReferenceFileObjectForWrite.c)
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 *     ObpCloseHandle @ 0x140734160 (ObpCloseHandle.c)
 *     ObpDeleteNameCheck @ 0x1407A3190 (ObpDeleteNameCheck.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     PspAssignSiloSystemRootPath @ 0x1409ABAC0 (PspAssignSiloSystemRootPath.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1409AC7F8 (PspSiloInitializeSystemRootBuffer.c)
 *     ObCreateSiloRootDirectory @ 0x140A34510 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 */

void __stdcall HalPutDmaAdapter(PADAPTER_OBJECT DmaAdapter)
{
  ObfDereferenceObjectWithTag(DmaAdapter, 0x746C6644u);
}
