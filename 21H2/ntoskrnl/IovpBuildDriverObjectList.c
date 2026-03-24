/*
 * XREFs of IovpBuildDriverObjectList @ 0x1409C5410
 * Callers:
 *     ObEnumerateObjectsByType @ 0x1408DD3AC (ObEnumerateObjectsByType.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x14029B150 (ObReferenceObjectSafe.c)
 *     PnpIsLegacyDriver @ 0x1407402EC (PnpIsLegacyDriver.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

char __fastcall IovpBuildDriverObjectList(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rbx

  if ( !PnpIsLegacyDriver(a1) )
    goto LABEL_6;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x6F7649u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( ObReferenceObjectSafe(a1) )
    {
      v3[1] = a1;
      *v3 = IovDriverListHead;
      IovDriverListHead = v3;
    }
    else
    {
      ExFreePoolWithTag(v3, 0);
    }
LABEL_6:
    LOBYTE(PoolWithTag) = 1;
  }
  return (char)PoolWithTag;
}
