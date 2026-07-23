/*
 * XREFs of IovpBuildDriverObjectList @ 0x1409C6410
 * Callers:
 *     ObEnumerateObjectsByType @ 0x1408DD50C (ObEnumerateObjectsByType.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x140212AE0 (ObReferenceObjectSafe.c)
 *     PnpIsLegacyDriver @ 0x1407404AC (PnpIsLegacyDriver.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
