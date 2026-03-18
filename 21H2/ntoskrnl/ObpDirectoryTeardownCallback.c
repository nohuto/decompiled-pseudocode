/*
 * XREFs of ObpDirectoryTeardownCallback @ 0x140A349B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObDereferenceDeviceMap @ 0x14069C9C0 (ObDereferenceDeviceMap.c)
 *     ObMakeTemporaryObject @ 0x1406E1700 (ObMakeTemporaryObject.c)
 */

void __fastcall ObpDirectoryTeardownCallback(__int64 a1)
{
  volatile signed __int64 *v2; // rcx

  ObMakeTemporaryObject(*(PVOID *)a1);
  ObfDereferenceObjectWithTag(*(PVOID *)a1, 0x7254624Fu);
  v2 = *(volatile signed __int64 **)(a1 + 8);
  if ( v2 )
    ObDereferenceDeviceMap(v2, 1u);
}
